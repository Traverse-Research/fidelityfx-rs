use std::{cell::RefCell, fs::File, io::Write, ops::DerefMut, path::Path, rc::Rc};

use bindgen::callbacks::TokenKind;
use heck::ToShoutySnekCase;

fn main() {
    let ffx_kit_dir = Path::new("sys/FidelityFX-SDK/Kits/FidelityFX/");

    generate_api_bindings(ffx_kit_dir);
}

#[derive(Debug)]
struct Renamer {
    append_str: Rc<RefCell<String>>,
    is_main_api: bool,
}
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
                let mut add = self.append_str.borrow_mut();
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

    // Manually generate the contents for functional macros; at the time of writing their token
    // contents are Rust-compatible after correcting the identifier names.
    fn func_macro(&self, sig: &str, contents: &[&[u8]]) {
        let (name, rest) = sig.split_once('(').unwrap();

        // Skip C-only annotation
        if name == "FFX_DEPRECATION" {
            return;
        }

        let (scope, return_structtype) = if name.starts_with("FFX_API_MAKE_") {
            if !self.is_main_api {
                return;
            }

            assert!(name.ends_with("_SUB_ID"), "{sig}");

            ("FFX_API_", true)
        } else {
            // TODO: Strip submodule-specific prefix (by replacing `is_main_api`).
            // Especially important if one module includes another module and would
            // otherwise generate duplicate functions.
            ("FFX_", false)
        };

        if let Some(name) = name.strip_prefix(scope) {
            let params = rest.strip_suffix(')').unwrap().split(',');

            use std::fmt::Write as _;

            let mut add = self.append_str.borrow_mut();
            add.push_str("\npub const fn ");
            add.push_str(name);
            add.push('(');
            for p in params {
                write!(add, "{p}: u32,").unwrap();
            }

            add.push_str(if return_structtype {
                ") -> StructType_t {"
            } else {
                ") -> u32 {"
            });

            let contents = if return_structtype {
                contents
            } else {
                // Remove unnecessary leading and trailing parenthesis
                contents
                    .strip_prefix(&[b"(".as_slice()])
                    .unwrap()
                    .strip_suffix(&[b")".as_slice()])
                    .unwrap()
            };

            for token in contents {
                let token = std::str::from_utf8(token).unwrap();
                let token = token.strip_prefix(scope).unwrap_or(token);
                if token == "~" {
                    add.push('!');
                } else {
                    add.push_str(token);
                }
            }

            // Widen to u64
            if return_structtype {
                add.push_str("as StructType_t");
            }
            add.push_str("}\n");
        }
    }

    // Manually generate constants for the DESC_TYPE invocations using a recursive macro
    fn modify_macro(&self, name: &str, tokens: &mut Vec<bindgen::callbacks::Token>) {
        // Skip defines that consist of a name plus a single token (typically name or integer)
        if tokens.len() <= 2 {
            return;
        }

        // Checking for DESC_TYPE in the name is unreliable, see FRAME_GENERATION_CONFIG.
        // Instead check if the MAKE_x_SUB_ID() macro function is invoked.
        if tokens[1].raw.starts_with(b"FFX_API_MAKE_") {
            let mut add = self.append_str.borrow_mut();

            add.push_str("\npub const ");
            add.push_str(name.strip_prefix("FFX_API_").unwrap());
            add.push_str(": StructType_t = ");

            // Skip the identifier name
            for t in &tokens[1..] {
                let value = std::str::from_utf8(&t.raw).unwrap();
                if t.kind == TokenKind::Identifier {
                    add.push_str(value.strip_prefix("FFX_API_").unwrap());
                } else if t.kind == TokenKind::Literal {
                    // Remove optional unsigned suffix
                    add.push_str(value.strip_suffix('u').unwrap_or(value));
                } else {
                    add.push_str(value);
                }
            }
            add.push_str(";\n");
        } else if name.starts_with("FFX")
            && !name.starts_with("FFX_PRAGMA")
            && name != "FFX_API_ENTRY"
        {
            let mut add = self.append_str.borrow_mut();

            add.push_str("\npub const ");
            add.push_str(name.strip_prefix("FFX_").unwrap());
            add.push_str(": u32 = ");

            // Skip the identifier name
            for t in &tokens[1..] {
                let value = std::str::from_utf8(&t.raw).unwrap();
                if t.kind == TokenKind::Identifier {
                    add.push_str(value.strip_prefix("FFX_").unwrap());
                } else {
                    add.push_str(value);
                }
            }
            add.push_str(";\n");
        }
    }
}

/// Converts a single `Path` to a regex, replacing the `.` (commonly used as extension separator) to
/// an explicit match.
fn escape_regex_file_path(p: &Path) -> String {
    let p = p.to_string_lossy();
    // We could also replace the character instead of asserting, but suffixing all folder strings
    // with a `/` is a more readable and safer approach.
    assert!(
        !p.contains('\\'),
        "Regex file path contains `\\` escape character. When using \
        Path::join() make sure all paths are suffixed with `/` already \
        to prevent the OS-specific separator from being appended"
    );
    p.replace('.', "\\.")
}

fn bindgen_no_dynamic_library(is_main_api: bool) -> (bindgen::Builder, Rc<RefCell<String>>) {
    let custom_code = Rc::new(RefCell::new(String::new()));
    let builder = bindgen::Builder::default()
        .layout_tests(false)
        .derive_default(true)
        .prepend_enum_name(false) // Not the default, but changes nothing
        .clang_arg("-xc++")
        .default_non_copy_union_style(bindgen::NonCopyUnionStyle::ManuallyDrop)
        .allowlist_recursively(false)
        .parse_callbacks(Box::new(Renamer {
            append_str: custom_code.clone(),
            is_main_api,
        }))
        .default_enum_style(bindgen::EnumVariation::Rust {
            non_exhaustive: true,
        })
        .no_default("ffx(Configure|Query|Dispatch|Callback|CreateContext)Desc\\w+")
        .no_default("ffxCreateBackend\\w+Desc");
    (builder, custom_code)
}

fn bindgen(is_main_api: bool) -> (bindgen::Builder, Rc<RefCell<String>>) {
    let (builder, custom_code) = bindgen_no_dynamic_library(is_main_api);
    (
        builder
            .dynamic_library_name("Functions")
            .dynamic_link_require_all(true),
        custom_code,
    )
}

/// Owns and waits on the child, while naturally dereffing into `stdin` for trivial writing.
struct ChildWriter(std::process::Child);

impl std::ops::Deref for ChildWriter {
    type Target = std::process::ChildStdin;

    fn deref(&self) -> &Self::Target {
        self.0.stdin.as_ref().unwrap()
    }
}

impl std::ops::DerefMut for ChildWriter {
    fn deref_mut(&mut self) -> &mut Self::Target {
        self.0.stdin.as_mut().unwrap()
    }
}

impl Drop for ChildWriter {
    fn drop(&mut self) {
        let status = self.0.wait().unwrap();
        assert!(status.success());
    }
}

fn write_formatted(target: impl Into<std::process::Stdio>) -> ChildWriter {
    // The process will close when stdin is closed, after writing the contents and dropping it.
    #[allow(clippy::zombie_processes)]
    let cmd = std::process::Command::new("rustfmt")
        .stdout(target)
        .stdin(std::process::Stdio::piped())
        .spawn()
        .expect("Execute rustfmt");

    ChildWriter(cmd)
}

fn generate_api_bindings(ffx_kit_dir: &Path) {
    generate_api_root_bindings(&ffx_kit_dir.join("api/"));
    generate_upscale_bindings(&ffx_kit_dir.join("upscalers/"));
    generate_framegeneration_bindings(&ffx_kit_dir.join("framegeneration/"));
    generate_dx12_backend_bindings(&ffx_kit_dir.join("api/"));
}

fn generate_api_root_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api.h");
    let types = api_dir.join("include/ffx_api_types.h");

    let (builder, custom_code) = bindgen(true);
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

    let out = File::create("sys/src/api/bindings.rs").unwrap();
    let mut out = write_formatted(out);
    bindings
        .write(Box::new(out.deref_mut()))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}

fn generate_upscale_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_upscale.h");

    let (builder, custom_code) = bindgen_no_dynamic_library(false);
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(escape_regex_file_path(&wrapper))
        .bitfield_enum("FfxApiCreateContextUpscaleFlags")
        .bitfield_enum("FfxApiDispatchFsrUpscaleFlags")
        .bitfield_enum("FfxApiDispatchUpscaleAutoreactiveFlags")
        .generate()
        .expect("Unable to generate bindings");

    let out = File::create("sys/src/api/upscale_bindings.rs").unwrap();
    let mut out = write_formatted(out);
    bindings
        .write(Box::new(out.deref_mut()))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}

fn generate_framegeneration_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_framegeneration.h");

    let (builder, custom_code) = bindgen_no_dynamic_library(false);
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(escape_regex_file_path(&wrapper))
        .bitfield_enum("FfxApiCreateContextFramegenerationFlags")
        .bitfield_enum("FfxApiDispatchFramegenerationFlags")
        .bitfield_enum("FfxApiUiCompositionFlags")
        .generate()
        .expect("Unable to generate bindings");

    let out = File::create("sys/src/api/framegeneration_bindings.rs").unwrap();
    let mut out = write_formatted(out);
    bindings
        .write(Box::new(out.deref_mut()))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();

    let wrapper = api_dir.join("include/dx12/ffx_api_framegeneration_dx12.h");

    let (builder, custom_code) = bindgen_no_dynamic_library(false);
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(escape_regex_file_path(&wrapper))
        .no_default("ffxQueryFrameGenerationSwapChainGetGPUMemoryUsageDX12")
        .no_default("ffxQueryFrameGenerationSwapChainGetGPUMemoryUsageDX12V2")
        .generate()
        .expect("Unable to generate bindings");

    let out = File::create("sys/src/api/framegeneration_dx12_bindings.rs").unwrap();
    let mut out = write_formatted(out);
    bindings
        .write(Box::new(out.deref_mut()))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}

fn generate_dx12_backend_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/dx12/ffx_api_dx12.h");

    let (builder, custom_code) = bindgen_no_dynamic_library(false);
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(escape_regex_file_path(&wrapper))
        .generate()
        .expect("Unable to generate bindings");

    let out = File::create("sys/src/api/dx12_backend_bindings.rs").unwrap();
    let mut out = write_formatted(out);
    bindings
        .write(Box::new(out.deref_mut()))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}
