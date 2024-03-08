#[cfg(feature = "generate-bindings")]
mod bindgen;

use std::path::Path;

use cc;
use glob::glob;

fn build_fsr3(api_dir: &str) {
    let components = ["fsr3", "fsr3upscaler", "opticalflow", "frameinterpolation"];
    let mut sources = vec![];
    for component in components {
        let paths = glob(&format!("{api_dir}/src/components/{component}/*.cpp"))
            .expect("Failed to find sources");
        sources.extend(paths.map(|p| p.unwrap()));
    }

    // Compile d3d12/vulkan backend into the lib
    // #[cfg(not(feature = "d3d12"))]
    // let sources = sources.filter(|p| !p.as_ref().unwrap().to_str().unwrap().contains("dx12"));
    // #[cfg(not(feature = "vulkan"))]
    // let sources = sources.filter(|p| !p.as_ref().unwrap().to_str().unwrap().contains("vk"));

    let mut build = cc::Build::new();
    build
        .files(sources.iter())
        .cpp(true)
        .define("DYNAMIC_LINK_VULKAN", "1")
        .include(format!("{api_dir}/include"))
        .include(format!("{api_dir}/src/shared"));
    // .include(format!("{api_dir}/src/components"));

    if std::env::var("CARGO_CFG_UNIX").is_ok() {
        build.define("FFX_GCC", "1").std("c++2a");
    }

    //  Shader permutations?

    build.compile("ffx_fsr3_api");
}

fn main() {
    let api_dir = "./FidelityFX-FSR3/src/ffx-fsr3-api";
    let vk_include_dir = Path::new(env!("CARGO_MANIFEST_DIR")).join("Vulkan-Headers/include");

    build_fsr3(api_dir);

    #[cfg(feature = "generate-bindings")]
    {
        bindgen::generate_bindings(api_dir);
        bindgen::generate_vk_bindings(api_dir, &vk_include_dir);
        bindgen::generate_d3d12_bindings(api_dir);
    }
}
