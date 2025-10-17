use std::{env, path::Path};

#[derive(Debug)]
struct Renamer;
impl bindgen::callbacks::ParseCallbacks for Renamer {
    fn item_name(&self, item_info: bindgen::callbacks::ItemInfo) -> Option<String> {
        // Remove ffx prefixes
        match item_info.kind {
            bindgen::callbacks::ItemKind::Module => None,
            bindgen::callbacks::ItemKind::Type => item_info
                .name
                .strip_prefix("Ffx")
                .or_else(|| item_info.name.strip_prefix("ffx")),
            bindgen::callbacks::ItemKind::Function => item_info.name.strip_prefix("ffx"),
            bindgen::callbacks::ItemKind::Var => {
                if let Some(i) = item_info.name.strip_prefix("s_Ffx") {
                    return Some(format!("s_{i}"));
                }
                item_info.name.strip_prefix("FFX_")
            }
            _ => None,
        }
        .map(str::to_owned)
    }

    // Remove enum prefixes
    fn enum_variant_name(
        &self,
        _enum_name: Option<&str>,
        original_variant_name: &str,
        _variant_value: bindgen::callbacks::EnumVariantValue,
    ) -> Option<String> {
        // TODO: This is wholly incomplete, there are many more enum prefix names
        Some(original_variant_name.replace("FFX_RESOURCE_STATE_", ""))
    }
}

fn bindgen(api_dir: &Path) -> bindgen::Builder {
    let mut bindings = bindgen::Builder::default()
        .layout_tests(false)
        .derive_default(true)
        .generate_comments(true)
        .clang_arg("-fparse-all-comments")
        .prepend_enum_name(false)
        .clang_arg("-xc++")
        .clang_arg(format!("-I{}/include", api_dir.display()))
        .trust_clang_mangling(false)
        .default_non_copy_union_style(bindgen::NonCopyUnionStyle::ManuallyDrop)
        .allowlist_recursively(false)
        .parse_callbacks(Box::new(bindgen::CargoCallbacks::new()))
        .parse_callbacks(Box::new(Renamer));

    if cfg!(not(target_os = "windows")) {
        // TODO: TARGET_OS env var
        bindings = bindings.clang_args(["-DFFX_GCC"]);
        // .clang_arg("-std=c++2a")
    }

    bindings
}

pub fn generate_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/FidelityFX/host/ffx_interface.h");

    let bindings = bindgen(api_dir)
        .header(wrapper.to_string_lossy())
        // Unlike all other bindings
        .allowlist_function("ffx\\w+")
        .allowlist_type("[fF]fx\\w+")
        .allowlist_var("s_Ffx\\w+")
        .allowlist_var("FFX\\w+")
        .bitfield_enum("FfxResourceUsage")
        .bitfield_enum("FfxResourceStates")
        .bitfield_enum("FfxResourceFlags")
        .newtype_enum("FfxMsgType")
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new(env!("CARGO_MANIFEST_DIR")).join("src");
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}

pub fn generate_component_bindings(component: &str, api_dir: &Path) {
    let wrapper = api_dir.join(format!("include/FidelityFX/host/ffx_{component}.h"));

    let bindings = bindgen(api_dir)
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
        .bitfield_enum("FfxFsr3FrameGenerationFlags")
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new(env!("CARGO_MANIFEST_DIR")).join("src");
    bindings
        .write_to_file(out_path.join(format!("{component}_bindings.rs")))
        .expect("Couldn't write bindings!");
}

pub fn generate_vk_bindings(api_dir: &Path, vk_include_dir: &Path) {
    let wrapper = api_dir.join("include/FidelityFX/host/backends/vk/ffx_vk.h");

    let bindings = bindgen(api_dir)
        .clang_arg(format!("-I{}", vk_include_dir.display()))
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new(env!("CARGO_MANIFEST_DIR")).join("src");
    bindings
        .write_to_file(out_path.join("vk_bindings.rs"))
        .expect("Couldn't write bindings!");
}

pub fn generate_dx12_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/FidelityFX/host/backends/dx12/ffx_dx12.h");

    let bindings = bindgen(api_dir)
        .header(wrapper.to_string_lossy())
        .allowlist_file(wrapper.to_string_lossy())
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new(env!("CARGO_MANIFEST_DIR")).join("src");
    bindings
        .write_to_file(out_path.join("dx12_bindings.rs"))
        .expect("Couldn't write bindings!");
}
