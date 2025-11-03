use std::path::Path;

use heck::{AsShoutySnekCase, ToShoutySnekCase};

fn main() {
    let sdk_dir = Path::new("sys/FidelityFX-SDK/sdk/");
    let api_dir = Path::new("sys/FidelityFX-SDK/ffx-api/");

    generate_sdk_bindings(sdk_dir);
    generate_api_bindings(api_dir);
}

fn generate_sdk_bindings(sdk_dir: &Path) {
    let vk_include_dir = Path::new("sys/Vulkan-Headers/include");

    const COMPONENTS: &[&str] = &[
        // fsr1 and fsr2 need to be enabled (though don't need to have bindings) to get access
        // to fsr3 shaders (see hardcoded "shared" implementation in ffxGetPermutationBlobByIndex())
        "fsr1",
        "fsr2",
        "fsr3",
        "fsr3upscaler",
        "opticalflow",
        "frameinterpolation",
    ];

    generate_bindings(sdk_dir);
    for component in COMPONENTS {
        generate_component_bindings(component, sdk_dir);
    }
    generate_vk_bindings(sdk_dir, vk_include_dir);
    generate_dx12_bindings(sdk_dir);
}

#[derive(Debug)]
struct Renamer;
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
            bindgen::callbacks::ItemKind::Var => {
                if let Some(i) = item_info.name.strip_prefix("s_Ffx") {
                    return Some(format!("s_{i}"));
                }
                item_info
                    .name
                    .strip_prefix("FFX_API_")
                    .or_else(|| item_info.name.strip_prefix("FFX_"))
            }
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
                "FfxBindStage" => "FFX_BIND".to_owned(), // TODO: Also strip _SHADER_STAGE suffix?
                "FfxMsgType" => "FFX_MESSAGE_TYPE".to_owned(),
                "FfxErrorCodes" => "FFX".to_owned(),
                "FfxIndexFormat" => "FFX".to_owned(),
                "FfxFsr3UpscalerConfigureKey" => {
                    "FFX_FSR3UPSCALER_CONFIGURE_UPSCALE_KEY".to_owned()
                }
                "FfxFsr3UpscalingFlags" => "FFX_FSR3_UPSCALER_FLAG".to_owned(),
                "FfxApiReturnCodes" => "FFX_API_RETURN".to_owned(),
                "FfxApiMsgType" => "FFX_API_MESSAGE_TYPE".to_owned(),
                "FfxApiUpscaleQualityMode" => "FFX_UPSCALE_QUALITY_MODE".to_owned(),
                "FfxApiCreateContextUpscaleFlags" => "FFX_UPSCALE_ENABLE".to_owned(),
                "FfxApiDispatchFsrUpscaleFlags" => "FFX_UPSCALE_FLAG".to_owned(),
                "FfxApiDispatchUpscaleAutoreactiveFlags" => {
                    "FFX_UPSCALE_AUTOREACTIVEFLAGS".to_owned()
                }
                e => {
                    // Fix broken CamelCase -> SNAKE_CASE conventions in FFX headers:
                    if let Some(e) = e.strip_prefix("FfxFsr3Upscaler") {
                        format!("FFX_FSR3UPSCALER_{}", AsShoutySnekCase(e))
                    } else if let Some(e) = e.strip_prefix("FfxFrameInterpolationSwapchain") {
                        format!("FFX_FI_SWAPCHAIN_{}", AsShoutySnekCase(e))
                    } else if let Some(e) = e.strip_prefix("FfxFrameInterpolation") {
                        format!("FFX_FRAMEINTERPOLATION_{}", AsShoutySnekCase(e))
                    } else {
                        e.TO_SHOUTY_SNEK_CASE()
                    }
                }
            };
            let variant_name = original_variant_name
                .strip_prefix(&common_prefix)
                .unwrap_or_else(|| {
                    for common_suffix in [
                        // TODO: Strip _ENABLE_ too?
                        "_INITIALIZATION_FLAG_BITS",
                        "_FLAGS",
                        // Sometimes the `Type` suffix of the enum name is not repeated
                        // in the variant prefix.
                        "_TYPE",
                        // Sometimes the plural `S` suffix of the enum name (`Resources`) is not
                        // repeated in the variant prefix (`_RESOURCE_...`).
                        "S",
                    ] {
                        if let Some(common_prefix) = common_prefix.strip_suffix(common_suffix) {
                            return original_variant_name
                                .strip_prefix(common_prefix)
                                .expect(common_prefix);
                        }
                    }
                    panic!("Could not strip {common_prefix} from {original_variant_name}");
                });
            let no_prefix = variant_name.strip_prefix("_").expect(variant_name);
            // Keep the leading _ if the variant otherwise starts with a number, which is invalid
            if no_prefix.chars().next().is_some_and(|c| c.is_ascii_digit()) {
                Some(variant_name.to_owned())
            } else {
                Some(no_prefix.to_owned())
            }
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
}

fn bindgen_no_dynamic_library(root_dir: &Path) -> bindgen::Builder {
    let mut bindings = bindgen::Builder::default()
        .layout_tests(false)
        .derive_default(true)
        .prepend_enum_name(false) // Not the default, but changes nothing
        .clang_arg("-xc++")
        .clang_arg(format!("-I{}/include", root_dir.display()))
        .trust_clang_mangling(false)
        .default_non_copy_union_style(bindgen::NonCopyUnionStyle::ManuallyDrop)
        .allowlist_recursively(false)
        .parse_callbacks(Box::new(Renamer))
        .default_enum_style(bindgen::EnumVariation::Rust {
            non_exhaustive: true,
        });

    if cfg!(not(target_os = "windows")) {
        // TODO: TARGET_OS env var
        bindings = bindings.clang_args(["-DFFX_GCC"]);
        // .clang_arg("-std=c++2a")
    }

    bindings
}

fn bindgen(root_dir: &Path) -> bindgen::Builder {
    bindgen_no_dynamic_library(root_dir)
        .dynamic_library_name("Functions")
        .dynamic_link_require_all(true)
}

// ---------- SDK ----------

fn generate_bindings(sdk_dir: &Path) {
    let wrapper = sdk_dir.join("include/FidelityFX/host/ffx_interface.h");

    let bindings = bindgen(sdk_dir)
        .header(wrapper.to_string_lossy())
        .allowlist_function("ffx\\w+")
        .allowlist_type("[fF]fx\\w+")
        .allowlist_var("s_Ffx\\w+")
        .allowlist_var("FFX\\w+")
        .bitfield_enum("FfxResourceUsage")
        .bitfield_enum("FfxResourceStates")
        .bitfield_enum("FfxResourceFlags")
        .bitfield_enum("FfxUiCompositionFlags")
        .bitfield_enum("FfxBindStage")
        .newtype_enum("FfxMsgType")
        // Hand-written to debug-print ErrorCode with defined ErrorCodes
        .blocklist_type("FfxErrorCode")
        .newtype_enum("FfxErrorCodes")
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/sdk");
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}

fn generate_component_bindings(component: &str, sdk_dir: &Path) {
    let wrapper = sdk_dir.join(format!("include/FidelityFX/host/ffx_{component}.h"));

    let bindings = bindgen(sdk_dir)
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        // These are specific per component, but it's harmless to pass them to other bindgen instances
        .bitfield_enum("FfxOpticalflowInitializationFlagBits")
        .bitfield_enum("FfxFrameInterpolationInitializationFlagBits")
        .bitfield_enum("FfxFrameInterpolationDispatchFlags")
        .bitfield_enum("FfxFsr1InitializationFlagBits")
        .bitfield_enum("FfxFsr2InitializationFlagBits")
        .bitfield_enum("FfxFsr3InitializationFlagBits")
        .bitfield_enum("FfxFsr3UpscalerInitializationFlagBits")
        .bitfield_enum("FfxFsr3UpscalerDispatchFlags")
        .bitfield_enum("FfxFsr3FrameGenerationFlags")
        .bitfield_enum("FfxFsr3UpscalingFlags")
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/sdk");
    bindings
        .write_to_file(out_path.join(format!("{component}_bindings.rs")))
        .expect("Couldn't write bindings!");
}

fn generate_vk_bindings(sdk_dir: &Path, vk_include_dir: &Path) {
    let wrapper = sdk_dir.join("include/FidelityFX/host/backends/vk/ffx_vk.h");

    let bindings = bindgen(sdk_dir)
        .clang_arg(format!("-I{}", vk_include_dir.display()))
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/sdk");
    bindings
        .write_to_file(out_path.join("vk_bindings.rs"))
        .expect("Couldn't write bindings!");
}

fn generate_dx12_bindings(sdk_dir: &Path) {
    let wrapper = sdk_dir.join("include/FidelityFX/host/backends/dx12/ffx_dx12.h");

    let bindings = bindgen(sdk_dir)
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/sdk");
    bindings
        .write_to_file(out_path.join("dx12_bindings.rs"))
        .expect("Couldn't write bindings!");
}

// ---------- API ----------

fn generate_api_bindings(api_dir: &Path) {
    generate_api_root_bindings(api_dir);
    generate_upscale_bindings(api_dir);
}

fn generate_api_root_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/ffx_api.h");
    let types = api_dir.join("include/ffx_api/ffx_api_types.h");

    let bindings = bindgen(api_dir)
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
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/api");
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}

fn generate_upscale_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/ffx_upscale.h");

    let bindings = bindgen_no_dynamic_library(api_dir)
        .header(wrapper.to_string_lossy())
        .allowlist_type("[Ff]fx\\w+Upscale\\w*")
        .allowlist_var("FFX_\\w+UPSCALE\\w*")
        .bitfield_enum("FfxApiCreateContextUpscaleFlags")
        .bitfield_enum("FfxApiDispatchFsrUpscaleFlags")
        .bitfield_enum("FfxApiDispatchUpscaleAutoreactiveFlags")
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/api");
    bindings
        .write_to_file(out_path.join("upscale_bindings.rs"))
        .expect("Couldn't write bindings!");
}
