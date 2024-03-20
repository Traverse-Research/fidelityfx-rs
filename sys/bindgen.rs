use std::{
    env,
    path::{Path, PathBuf},
};

use bindgen::CargoCallbacks;

#[derive(Debug)]
struct Renamer;
impl bindgen::callbacks::ParseCallbacks for Renamer {
    fn item_name(&self, name: &str) -> Option<String> {
        // Remove ffx/ffxfsr2 prefixes.
        let name = name.replace("ffx", "").replace("Ffx", "");

        Some(name)
    }

    // Remove enum prefixes
    fn enum_variant_name(
        &self,
        _enum_name: Option<&str>,
        original_variant_name: &str,
        _variant_value: bindgen::callbacks::EnumVariantValue,
    ) -> Option<String> {
        Some(original_variant_name.replace("FFX_RESOURCE_STATE_", ""))
    }
}

pub fn generate_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/FidelityFX/host/ffx_fsr3.h");

    // Generate bindings
    let mut bindings = bindgen::Builder::default()
        .layout_tests(false)
        .derive_default(true)
        .prepend_enum_name(false)
        .header(wrapper.to_string_lossy())
        .clang_arg("-xc++")
        .clang_arg(format!("-I{}/include", api_dir.display()))
        .trust_clang_mangling(false)
        .default_non_copy_union_style(bindgen::NonCopyUnionStyle::ManuallyDrop)
        // .allowlist_file(r".*(/|\\)ffx-fsr3-api(/|\\)[^/\\]+\.h")
        //.allowlist_file(r".*(/|\\)fsr3(/|\\)[^/\\]+\.h")
        .blocklist_type("widechar")
        .new_type_alias("CommandList")
        .parse_callbacks(Box::new(CargoCallbacks::new()))
        .parse_callbacks(Box::new(Renamer))
        .bitfield_enum("FfxFsr3InitializationFlagBits")
        .bitfield_enum("FfxResourceUsage")
        .bitfield_enum("FfxResourceStates")
        .bitfield_enum("FfxResourceFlags")
        .rustified_enum("FfxFsr3MsgType");
        

    if cfg!(not(target_os = "windows")) {
        bindings = bindings.clang_args(["-DFFX_GCC"]);
    }

    let bindings = bindings.generate().expect("Unable to generate bindings");

    let out_path = Path::new(env!("CARGO_MANIFEST_DIR")).join("src");
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}

pub fn generate_vk_bindings(api_dir: &Path, vk_include_dir: &Path) {
    let wrapper = format!(
        "{}/include/FidelityFX/host/backends/vk/ffx_vk.h",
        api_dir.display()
    );

    // Generate bindings
    let mut bindings = bindgen::Builder::default()
        .layout_tests(false)
        .derive_default(true)
        .prepend_enum_name(false)
        .header(&wrapper)
        .clang_arg("-xc++")
        .clang_arg(format!("-I{}/include", api_dir.display()))
        .trust_clang_mangling(false)
        .parse_callbacks(Box::new(bindgen::CargoCallbacks))
        .parse_callbacks(Box::new(Renamer))
        .clang_arg(format!("-I{}", vk_include_dir.display()))
        .allowlist_recursively(false)
        .allowlist_file(&wrapper);

    if cfg!(not(target_os = "windows")) {
        bindings = bindings.clang_args(["-DFFX_GCC"]).clang_arg("-std=c++2a");
    }

    let bindings = bindings.generate().expect("Unable to generate bindings");

    let out_path = Path::new(env!("CARGO_MANIFEST_DIR")).join("src");
    bindings
        .write_to_file(out_path.join("vk_bindings.rs"))
        .expect("Couldn't write bindings!");
}

pub fn generate_d3d12_bindings(api_dir: &Path) {
    let wrapper = format!(
        "{}/include/FidelityFX/host/backends/dx12/ffx_dx12.h",
        api_dir.display()
    );

    // Generate bindings
    let bindings = bindgen::Builder::default()
        .layout_tests(false)
        .derive_default(true)
        .prepend_enum_name(false)
        .header(&wrapper)
        .clang_arg("-xc++")
        .clang_arg(format!("-I{}/include", api_dir.display()))
        .trust_clang_mangling(false)
        .parse_callbacks(Box::new(bindgen::CargoCallbacks))
        .parse_callbacks(Box::new(Renamer))
        .allowlist_recursively(false)
        .allowlist_file(&wrapper)
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new(env!("CARGO_MANIFEST_DIR")).join("src");
    bindings
        .write_to_file(out_path.join("d3d12_bindings.rs"))
        .expect("Couldn't write bindings!");
}
