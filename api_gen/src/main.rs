use std::{cell::RefCell, fs::File, io::Write, path::Path, rc::Rc};

use heck::ToShoutySnekCase;

fn main() {
    let api_dir = Path::new("sys/FidelityFX-SDK/ffx-api/");
    let vk_include_dir = Path::new("sys/Vulkan-Headers/include");

    generate_api_bindings(api_dir, vk_include_dir);
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
                "FfxApiConfigureFrameGenerationSwapChainKeyVK" => {
                    "FFX_API_CONFIGURE_FG_SWAPCHAIN_KEY".to_owned()
                }
                "FfxApiConfigureFrameGenerationSwapChainKeyDX12" => {
                    "FFX_API_CONFIGURE_FG_SWAPCHAIN_KEY".to_owned()
                }
                e => e.TO_SHOUTY_SNEK_CASE(),
            };
            let variant_name = original_variant_name.strip_prefix(&common_prefix).unwrap();
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
            if final_name.contains("Desc") && !final_name.contains("ResourceDescription") {
                let mut add = self.0.borrow_mut();
                let enum_name = final_name.TO_SHOUTY_SNEK_CASE();
                let enum_name = enum_name.replace("_DESC_", "_DESC_TYPE_");
                let enum_name = if enum_name.ends_with("_VK")
                    && !enum_name.ends_with("KEY_VALUE_VK")
                    && !enum_name.ends_with("GPU_MEMORY_USAGE_VK")
                {
                    enum_name.replace("FRAME_GENERATION_SWAP_CHAIN", "FGSWAPCHAIN")
                } else {
                    enum_name.replace("FRAME_GENERATION_SWAP_CHAIN", "FRAMEGENERATIONSWAPCHAIN")
                };
                let enum_name = enum_name.replace(
                    "SWAPCHAIN_REPLACEMENT_FUNCTIONS_VK",
                    "FGSWAPCHAIN_FUNCTIONS_VK",
                );
                let enum_name = enum_name.replace("FRAME_GENERATION", "FRAMEGENERATION");
                let enum_name = enum_name.replace("REGISTER_UI_RESOURCE", "REGISTERUIRESOURCE");
                let enum_name = enum_name.replace("KEY_VALUE", "KEYVALUE");
                let enum_name = enum_name.replace("GLOBAL_DEBUG1", "GLOBALDEBUG1");
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

                add.push_str(&format!(
                    r#"
unsafe impl TaggedStructure for {final_name} {{
    const TAG: StructType_t = {enum_name};
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

fn generate_api_bindings(api_dir: &Path, vk_include_dir: &Path) {
    generate_api_root_bindings(api_dir);
    generate_upscale_bindings(api_dir);
    generate_framegeneration_bindings(api_dir);
    generate_vk_backend_bindings(api_dir, vk_include_dir);
    generate_dx12_backend_bindings(api_dir);
}

fn generate_api_root_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/ffx_api.h");
    let types = api_dir.join("include/ffx_api/ffx_api_types.h");

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
}

fn generate_upscale_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/ffx_upscale.h");

    let (builder, custom_code) = bindgen_no_dynamic_library();
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_type("[Ff]fx\\w+Upscale\\w*")
        .allowlist_var("FFX_\\w+UPSCALE\\w*")
        .bitfield_enum("FfxApiCreateContextUpscaleFlags")
        .bitfield_enum("FfxApiDispatchFsrUpscaleFlags")
        .bitfield_enum("FfxApiDispatchUpscaleAutoreactiveFlags")
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/upscale_bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}

fn generate_framegeneration_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/ffx_framegeneration.h");

    let (builder, custom_code) = bindgen_no_dynamic_library();
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_type("[Ff]fx\\w+FrameGeneration\\w*")
        .allowlist_type("FfxApiPresentCallbackFunc")
        .allowlist_var("FFX_\\w+FRAMEGENERATION\\w*")
        .bitfield_enum("FfxApiCreateContextFramegenerationFlags")
        .bitfield_enum("FfxApiDispatchFramegenerationFlags")
        .bitfield_enum("FfxApiUiCompositionFlags")
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/framegeneration_bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}

fn generate_vk_backend_bindings(api_dir: &Path, vk_include_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/vk/ffx_api_vk.h");

    let (builder, custom_code) = bindgen_no_dynamic_library();
    let bindings = builder
        .clang_arg(format!("-I{}", vk_include_dir.display()))
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        .no_default("ffxQueryFrameGenerationSwapChainGetGPUMemoryUsageVK")
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/vk_backend_bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}

fn generate_dx12_backend_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/dx12/ffx_api_dx12.h");

    let (builder, custom_code) = bindgen_no_dynamic_library();
    let bindings = builder
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        .no_default("ffxQueryFrameGenerationSwapChainGetGPUMemoryUsageDX12")
        .generate()
        .expect("Unable to generate bindings");

    let mut out = File::create("sys/src/api/dx12_backend_bindings.rs").unwrap();
    bindings
        .write(Box::new(&mut out))
        .expect("Couldn't write bindings!");
    out.write_fmt(format_args!("{}", custom_code.borrow()))
        .unwrap();
}
