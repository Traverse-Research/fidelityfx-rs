use std::{cell::RefCell, fs::File, io::Write, path::Path, rc::Rc};

use heck::ToShoutySnekCase;

fn main() {
    let ffx_kit_dir = Path::new("sys/FidelityFX-SDK/Kits/FidelityFX");

    generate_api_bindings(ffx_kit_dir);
}

/// Build the regex passed to `allowlist_file` so it matches the path libclang reports for each
/// declaration. `allowlist_file` takes a regex, but the full path produced by `Path::join` mixes `/`
/// and `\` separators on Windows and libclang canonicalizes the reported path differently across
/// versions — so passing the raw path can silently match nothing and emit an empty bindings file.
/// Anchoring on the (unique) header file name instead is stable regardless of how the directory
/// portion is formatted.
fn allowlist_file_regex(wrapper: &Path) -> String {
    let file_name = wrapper.file_name().unwrap().to_string_lossy();
    format!(".*{}$", regex_escape(&file_name))
}

/// Minimal regex-escaper for the regex metacharacters that can appear in a header file name (`.`).
fn regex_escape(s: &str) -> String {
    s.replace('.', "\\.")
}

/// `const fn` helpers mirroring the FidelityFX `FFX_API_MAKE_*_SUB_ID` C macros, emitted once into
/// the root `bindings.rs`. See [`emit_sub_id_consts`] for why these are needed.
const SUB_ID_HELPERS: &str = r#"
#[inline]
const fn make_effect_sub_id(effect_id: u32, subversion: u32) -> StructType_t {
    ((effect_id & EFFECT_MASK) | (subversion & !EFFECT_MASK)) as StructType_t
}

#[inline]
const fn make_backend_sub_id(backend_id: u32, subversion: u32) -> StructType_t {
    ((backend_id & BACKEND_MASK) | (subversion & !BACKEND_MASK)) as StructType_t
}

#[inline]
const fn make_backend_effect_sub_id(backend_id: u32, effect_id: u32, subversion: u32) -> StructType_t {
    ((subversion & !EFFECT_MASK)
        | (effect_id & EFFECT_MASK)
        | (backend_id & BACKEND_MASK)
        | (subversion & !(BACKEND_MASK | EFFECT_MASK))) as StructType_t
}
"#;

/// Emit `pub const`s for the `*_DESC_TYPE_*` (and related) identifiers that bindgen cannot generate.
///
/// In the v1.x SDK these were plain integer-literal `#define`s that bindgen emitted natively. The
/// v2.x SDK changed them to invoke function-like macros — e.g.
/// `#define FFX_API_CREATE_CONTEXT_DESC_TYPE_UPSCALE FFX_API_MAKE_EFFECT_SUB_ID(FFX_API_EFFECT_ID_UPSCALE, 0x00)` —
/// which bindgen does not expand (cexpr cannot evaluate a function-like macro invocation, and
/// `clang_macro_fallback` does not surface them either). The generated `TaggedStructure` impls
/// reference these constants by name, so without them the crate does not compile.
///
/// Rather than hardcode computed values, we re-emit each `#define` as a Rust `const` that calls the
/// matching `make_*_sub_id` helper with the same arguments (prefix-stripped to their generated Rust
/// names), keeping the values derived from the SDK's own `EFFECT_ID_*`/`BACKEND_ID_*` constants.
fn emit_sub_id_consts(header: &Path) -> String {
    let source = std::fs::read_to_string(header).unwrap();
    let mut out = String::new();

    for line in source.lines() {
        let line = line.trim();
        let Some(rest) = line.strip_prefix("#define ") else {
            continue;
        };
        let Some((name, value)) = rest.split_once(char::is_whitespace) else {
            continue;
        };
        let value = value.trim();

        let call = if let Some(args) = value.strip_prefix("FFX_API_MAKE_EFFECT_SUB_ID(") {
            sub_id_call("make_effect_sub_id", args)
        } else if let Some(args) = value.strip_prefix("FFX_API_MAKE_BACKEND_SUB_ID(") {
            sub_id_call("make_backend_sub_id", args)
        } else if let Some(args) = value.strip_prefix("FFX_API_MAKE_BACKEND_EFFECT_SUB_ID(") {
            sub_id_call("make_backend_effect_sub_id", args)
        } else {
            continue;
        };

        let rust_name = strip_ffx_var_prefix(name);
        out.push_str(&format!("pub const {rust_name}: StructType_t = {call};\n"));
    }

    out
}

/// Build a `make_*_sub_id(...)` call expression from the raw C macro argument list (everything up to
/// the closing paren), stripping the `FFX_API_` prefix off identifier arguments so they match the
/// generated Rust constant names, and leaving numeric literals (e.g. `0x00`) untouched.
fn sub_id_call(helper: &str, args: &str) -> String {
    let args = args.rsplit_once(')').map_or(args, |(a, _)| a);
    let rust_args = args
        .split(',')
        .map(|arg| {
            let arg = arg.trim();
            arg.strip_prefix("FFX_API_")
                .map_or_else(|| arg.to_owned(), str::to_owned)
        })
        .collect::<Vec<_>>()
        .join(", ");
    format!("{helper}({rust_args})")
}

/// Strip the `FFX_API_`/`FFX_` prefix from a `#define`d variable name, matching the `Var` renaming
/// the [`Renamer`] callback applies to bindgen-generated vars.
fn strip_ffx_var_prefix(name: &str) -> &str {
    name.strip_prefix("FFX_API_")
        .or_else(|| name.strip_prefix("FFX_"))
        .unwrap_or(name)
}

#[derive(Debug)]
struct Renamer(Rc<RefCell<String>>);
impl bindgen::callbacks::ParseCallbacks for Renamer {
    fn item_name(&self, item_info: bindgen::callbacks::ItemInfo) -> Option<String> {
        // Remove ffx prefixes
        match item_info.kind {
            bindgen::callbacks::ItemKind::Module => None,
            bindgen::callbacks::ItemKind::Type => item_info
                .name
                .strip_prefix("FfxApi")
                .or_else(|| item_info.name.strip_prefix("ffxApi"))
                .or_else(|| item_info.name.strip_prefix("Ffx"))
                .or_else(|| item_info.name.strip_prefix("ffx")),
            bindgen::callbacks::ItemKind::Function => item_info
                .name
                .strip_prefix("ffxApi")
                .or_else(|| item_info.name.strip_prefix("ffx")),
            bindgen::callbacks::ItemKind::Var => item_info
                .name
                .strip_prefix("FFX_API_")
                .or_else(|| item_info.name.strip_prefix("FFX_")),
            _ => None,
        }
        .map(str::to_owned)
    }

    // Remove enum prefixes
    fn enum_variant_name(
        &self,
        enum_name: Option<&str>,
        original_variant_name: &str,
        _variant_value: bindgen::callbacks::EnumVariantValue,
    ) -> Option<String> {
        let enum_name = enum_name?;

        if enum_name.starts_with("Ffx") {
            // Exceptions
            let common_prefix = match enum_name {
                "FfxApiReturnCodes" => "FFX_API_RETURN".to_owned(),
                "FfxApiMsgType" => "FFX_API_MESSAGE_TYPE".to_owned(),
                "FfxApiUpscaleQualityMode" => "FFX_UPSCALE_QUALITY_MODE".to_owned(),
                "FfxApiCreateContextUpscaleFlags" => "FFX_UPSCALE_ENABLE".to_owned(),
                "FfxApiDispatchFsrUpscaleFlags" => "FFX_UPSCALE_FLAG".to_owned(),
                "FfxApiDispatchUpscaleAutoreactiveFlags" => {
                    "FFX_UPSCALE_AUTOREACTIVEFLAGS".to_owned()
                }
                "FfxApiCreateContextFramegenerationFlags" => {
                    "FFX_FRAMEGENERATION_ENABLE".to_owned()
                }
                "FfxApiDispatchFramegenerationFlags" => "FFX_FRAMEGENERATION_FLAG".to_owned(),
                "FfxApiUiCompositionFlags" => "FFX_FRAMEGENERATION_UI_COMPOSITION_FLAG".to_owned(),
                "FfxApiConfigureFrameGenerationSwapChainKeyDX12" => {
                    "FFX_API_CONFIGURE_FG_SWAPCHAIN_KEY".to_owned()
                }
                "FfxApiQueryResourceIdentifiers" => "FFX_API_QUERY_RESOURCE_INPUT".to_owned(),
                "FfxApiConfigureFrameGenerationKey" => {
                    "FFX_API_CONFIGURE_FRAMEGENERATION_KEY".to_owned()
                }
                e => e.TO_SHOUTY_SNEK_CASE(),
            };
            let variant_name = original_variant_name
                .strip_prefix(&common_prefix)
                .expect(original_variant_name);
            let no_prefix = variant_name.strip_prefix("_").expect(variant_name);
            // Keep the leading _ if the variant otherwise starts with a number, which is invalid
            Some(no_prefix.to_owned())
        } else {
            None
        }
    }

    fn int_macro(&self, name: &str, _value: i64) -> Option<bindgen::callbacks::IntKind> {
        if name.contains("DESC_TYPE") {
            Some(bindgen::callbacks::IntKind::Custom {
                name: "StructType_t",
                is_signed: false,
            })
        } else {
            None
        }
    }

    fn new_item_found(
        &self,
        _id: bindgen::callbacks::DiscoveredItemId,
        item: bindgen::callbacks::DiscoveredItem,
    ) {
        if let bindgen::callbacks::DiscoveredItem::Struct {
            original_name: _,
            final_name,
        } = item
        {
            if final_name.contains("Desc") && !final_name.contains("ResourceDescription")
                || final_name == "OverrideVersion"
                || final_name == "QueryGetProviderVersion"
            {
                let mut add = self.0.borrow_mut();
                let enum_name = final_name.TO_SHOUTY_SNEK_CASE();
                let enum_name = enum_name.replace("_DESC_", "_DESC_TYPE_");
                let enum_name =
                    enum_name.replace("FRAME_GENERATION_SWAP_CHAIN", "FRAMEGENERATIONSWAPCHAIN");
                let enum_name = enum_name.replace("FRAME_GENERATION", "FRAMEGENERATION");
                let enum_name = enum_name.replace("REGISTER_UI_RESOURCE", "REGISTERUIRESOURCE");
                let enum_name = enum_name.replace("KEY_VALUE", "KEYVALUE");
                let enum_name = enum_name.replace("GLOBAL_DEBUG1", "GLOBALDEBUG1");
                let enum_name = enum_name.replace("GLOBAL_DEBUG", "GLOBALDEBUG");
                let enum_name = enum_name.replace(
                    "GET_UPSCALE_RATIO_FROM_QUALITY_MODE",
                    "GETUPSCALERATIOFROMQUALITYMODE",
                );
                let enum_name = enum_name.replace(
                    "GET_RENDER_RESOLUTION_FROM_QUALITY_MODE",
                    "GETRENDERRESOLUTIONFROMQUALITYMODE",
                );
                let enum_name = enum_name.replace("GET_JITTER_PHASE_COUNT", "GETJITTERPHASECOUNT");
                let enum_name = enum_name.replace("GET_JITTER_OFFSET", "GETJITTEROFFSET");
                let enum_name = enum_name.replace("GENERATE_REACTIVE_MASK", "GENERATEREACTIVEMASK");
                let enum_name = enum_name.replace("GET_GPU_MEMORY_USAGE", "GPU_MEMORY_USAGE");
                let enum_name = enum_name.replace(
                    "REGISTER_DISTORTION_FIELD_RESOURCE",
                    "REGISTERDISTORTIONRESOURCE",
                );
                let enum_name = enum_name.replace("CAMERA_INFO", "CAMERAINFO");
                let enum_name =
                    enum_name.replace("INTERPOLATION_COMMAND_LIST", "INTERPOLATIONCOMMANDLIST");
                let mut enum_name =
                    enum_name.replace("INTERPOLATION_TEXTURE", "INTERPOLATIONTEXTURE");

                if let Some(backend) = enum_name.strip_prefix("CREATE_BACKEND_") {
                    let backend = backend.strip_suffix("_DESC").unwrap();
                    enum_name = format!("CREATE_CONTEXT_DESC_TYPE_BACKEND_{backend}");
                }

                if enum_name == "OVERRIDE_VERSION" {
                    enum_name = "DESC_TYPE_OVERRIDE_VERSION".to_string();
                }
                if enum_name == "QUERY_GET_PROVIDER_VERSION" {
                    enum_name = "QUERY_DESC_TYPE_GET_PROVIDER_VERSION".to_string();
                }

                add.push_str(&format!(
                    r#"
unsafe impl TaggedStructure for {final_name} {{
    const TAG: StructType_t = {enum_name};
    fn header(&self) -> &Header {{
        &self.header
    }}
    fn header_mut(&mut self) -> &mut Header {{
        &mut self.header
    }}
}}
"#
                ));
            }
        }
    }
}

fn bindgen_no_dynamic_library() -> (bindgen::Builder, Rc<RefCell<String>>) {
    let custom_code = Rc::new(RefCell::new(String::new()));
    let builder = bindgen::Builder::default()
        .layout_tests(false)
        .derive_default(true)
        .prepend_enum_name(false) // Not the default, but changes nothing
        .clang_arg("-xc++")
        .default_non_copy_union_style(bindgen::NonCopyUnionStyle::ManuallyDrop)
        .allowlist_recursively(false)
        .parse_callbacks(Box::new(Renamer(custom_code.clone())))
        .default_enum_style(bindgen::EnumVariation::Rust {
            non_exhaustive: true,
        })
        .no_default("ffx(Configure|Query|Dispatch|Callback|CreateContext)Desc\\w+")
        .no_default("ffxCreateBackend\\w+Desc");
    (builder, custom_code)
}

fn bindgen() -> (bindgen::Builder, Rc<RefCell<String>>) {
    let (builder, custom_code) = bindgen_no_dynamic_library();
    (
        builder
            .dynamic_library_name("Functions")
            .dynamic_link_require_all(true),
        custom_code,
    )
}

fn generate_api_bindings(ffx_kit_dir: &Path) {
    generate_api_root_bindings(&ffx_kit_dir.join("api"));
    generate_upscale_bindings(&ffx_kit_dir.join("upscalers"));
    generate_framegeneration_bindings(&ffx_kit_dir.join("framegeneration"));
    generate_dx12_backend_bindings(&ffx_kit_dir.join("api"));
}

fn generate_api_root_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api.h");
    let types = api_dir.join("include/ffx_api_types.h");

    let (builder, custom_code) = bindgen();
    let bindings = builder
        .headers([wrapper.to_string_lossy(), types.to_string_lossy()])
        .allowlist_function("ffx\\w+")
        .allowlist_type("[fF]fx\\w+")
        // Intentionally skip unused PfnFfx* functions which are only used by the internal
        // ffxFunctions loader; a Rust version of the libloading code that we already generate:
        // .allowlist_type("PfnFfx\\w+")
        .allowlist_var("FFX\\w+")
        // Hand-written to debug-print ErrorCode with defined ErrorCodes
        .blocklist_type("ffxReturnCode_t")
        .bitfield_enum("FfxApiResourceUsage")
        .bitfield_enum("FfxApiResourceState")
        .bitfield_enum("FfxApiResourceFlags")
        .newtype_enum("FfxApiReturnCodes")
        .newtype_enum("FfxApiMsgType")
        .no_default("ffxApiHeader")
        .no_default("ffxOverrideVersion")
        .no_default("ffxQueryGetProviderVersion")
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
    // `make_*_sub_id` helpers used by the `*_DESC_TYPE_*` constants emitted into the effect modules.
    out.write_all(SUB_ID_HELPERS.as_bytes()).unwrap();
}

fn generate_upscale_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_upscale.h");

    let (builder, custom_code) = bindgen_no_dynamic_library();
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(allowlist_file_regex(&wrapper))
        .bitfield_enum("FfxApiCreateContextUpscaleFlags")
        .bitfield_enum("FfxApiDispatchFsrUpscaleFlags")
        .bitfield_enum("FfxApiDispatchUpscaleAutoreactiveFlags")
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/upscale_bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_all(emit_sub_id_consts(&wrapper).as_bytes())
        .unwrap();
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}

fn generate_framegeneration_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_framegeneration.h");

    let (builder, custom_code) = bindgen_no_dynamic_library();
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(allowlist_file_regex(&wrapper))
        .bitfield_enum("FfxApiCreateContextFramegenerationFlags")
        .bitfield_enum("FfxApiDispatchFramegenerationFlags")
        .bitfield_enum("FfxApiUiCompositionFlags")
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/framegeneration_bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_all(emit_sub_id_consts(&wrapper).as_bytes())
        .unwrap();
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}

fn generate_dx12_backend_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/dx12/ffx_api_dx12.h");

    let (builder, custom_code) = bindgen_no_dynamic_library();
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(allowlist_file_regex(&wrapper))
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/dx12_backend_bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_all(emit_sub_id_consts(&wrapper).as_bytes())
        .unwrap();
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();

    let wrapper = api_dir.join("../framegeneration/include/dx12/ffx_api_framegeneration_dx12.h");

    let (builder, custom_code) = bindgen_no_dynamic_library();
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(allowlist_file_regex(&wrapper))
        .no_default("ffxQueryFrameGenerationSwapChainGetGPUMemoryUsageDX12")
        .no_default("ffxQueryFrameGenerationSwapChainGetGPUMemoryUsageDX12V2")
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/framegeneration_dx12_bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_all(emit_sub_id_consts(&wrapper).as_bytes())
        .unwrap();
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}
