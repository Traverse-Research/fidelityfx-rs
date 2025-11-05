use std::path::Path;

use heck::{AsShoutySnekCase, ToShoutySnekCase};

fn main() {
    let api_dir = Path::new("sys/FidelityFX-SDK/ffx-api/");
    let vk_include_dir = Path::new("sys/Vulkan-Headers/include");

    generate_api_bindings(api_dir, vk_include_dir);
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

// ---------- API ----------

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

fn generate_framegeneration_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/ffx_framegeneration.h");

    let bindings = bindgen_no_dynamic_library(api_dir)
        .header(wrapper.to_string_lossy())
        .allowlist_type("[Ff]fx\\w+FrameGeneration\\w*")
        .allowlist_type("FfxApiPresentCallbackFunc")
        .allowlist_var("FFX_\\w+FRAMEGENERATION\\w*")
        .bitfield_enum("FfxApiCreateContextFramegenerationFlags")
        .bitfield_enum("FfxApiDispatchFramegenerationFlags")
        .bitfield_enum("FfxApiUiCompositionFlags")
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/api");
    bindings
        .write_to_file(out_path.join("framegeneration_bindings.rs"))
        .expect("Couldn't write bindings!");
}

fn generate_vk_backend_bindings(api_dir: &Path, vk_include_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/vk/ffx_api_vk.h");

    let bindings = bindgen_no_dynamic_library(api_dir)
        .clang_arg(format!("-I{}", vk_include_dir.display()))
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/api");
    bindings
        .write_to_file(out_path.join("vk_backend_bindings.rs"))
        .expect("Couldn't write bindings!");
}

fn generate_dx12_backend_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/dx12/ffx_api_dx12.h");

    let bindings = bindgen_no_dynamic_library(api_dir)
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/api");
    bindings
        .write_to_file(out_path.join("dx12_backend_bindings.rs"))
        .expect("Couldn't write bindings!");
}
