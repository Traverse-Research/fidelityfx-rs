#[cfg(feature = "generate-bindings")]
mod bindgen;

use core::panic;
use std::path::Path;

use cc;
use glob::glob;

fn build_fsr3(api_dir: &Path, vk_include_dir: &Path) {
    let mut sources = vec![];
    
    let paths = glob(&format!(
        "{}/src/shared/*.cpp",
        api_dir.display()
    ))
    .expect("Failed to find sources");
    sources.extend(paths.map(|p| p.unwrap()));

    let components = ["fsr3", "fsr3upscaler", "opticalflow", "frameinterpolation"];
    
    let sh_perms = format!("{}", api_dir.parent().unwrap().display());
    panic!("{}",sh_perms);


    for component in components {
        let paths = glob(&format!(
            "{}/src/components/{component}/*.cpp",
            api_dir.display()
        ))
        .expect("Failed to find sources");
        sources.extend(paths.map(|p| p.unwrap()));
    }

    // #[cfg(not(feature = "d3d12"))]
    // #[cfg(not(feature = "vulkan"))]
    let backends = ["shared", "vk", "dx12", "dx12/FrameInterpolationSwapchain"];
    for backend in backends {
        let paths = glob(&format!(
            // Currently only dx12\FrameInterpolationSwapchain\FrameInterpolationSwapchainDX12.cpp is in a nested folder
            // "{}/src/backends/{backend}/**/*.cpp",
            "{}/src/backends/{backend}/*.cpp",
            api_dir.display()
        ))
        .expect("Failed to find sources");
        sources.extend(paths.map(|p| p.unwrap()));
    }

    let mut build = cc::Build::new();
    build
        .files(sources.iter())
        .cpp(true)
        .define("DYNAMIC_LINK_VULKAN", "1")
        .include(api_dir.join("include"))
        .include(api_dir.join("src/shared"))
        // TODO: Only include this when compiling the backends
        .include(api_dir.join("src/backends/shared"))
        // TODO: Only include this when compiling the Vulkan backend
        .include(&format!("{}/../../shader_permutations/vk", api_dir.display()))
        .include(vk_include_dir);

    if std::env::var("CARGO_CFG_UNIX").is_ok() {
        build.define("FFX_GCC", "1").std("c++2a");
    }

    // TODO(YIGIT): Shader permutations? Yes, they were necessary
    build.include(&format!("{}/../../shader_permutations/dx12", api_dir.display()));

    build.compile("ffx_fsr3_api");
}

fn main() {
    let api_dir = Path::new("./FidelityFX-FSR3/src/ffx-fsr3-api");
    let vk_include_dir = Path::new(env!("CARGO_MANIFEST_DIR")).join("Vulkan-Headers/include");

    build_fsr3(api_dir, &vk_include_dir);

    #[cfg(feature = "generate-bindings")]
    {
        bindgen::generate_bindings(api_dir);
        bindgen::generate_vk_bindings(api_dir, &vk_include_dir);
        bindgen::generate_d3d12_bindings(api_dir);
    }

    // TODO: FidelityFX is given Vulkan loader functions. It should _not have to_ link
    // against vulkan _again_ **manually** in any way.
    println!("cargo:rustc-link-lib=vulkan-1");
    println!("cargo:rustc-link-search=C:/VulkanSDK/1.3.268.0/Lib")
}
