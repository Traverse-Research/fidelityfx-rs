#[cfg(feature = "generate-bindings")]
mod bindgen;

use std::path::Path;

use cc;
use glob::glob;

fn build_fsr3(api_dir: &Path, vk_include_dir: &Path) {
    let mut sources = vec![];

    let paths =
        glob(&format!("{}/src/shared/*.cpp", api_dir.display())).expect("Failed to find sources");
    sources.extend(paths.map(|p| p.unwrap()));

    // fsr1 and fsr2 need to be enabled (though don't need to have bindings) to get access
    // to fsr3 shaders (see hardcoded "shared" implementation in ffxGetPermutationBlobByIndex())
    let components = [
        "fsr1",
        "fsr2",
        "fsr3",
        "fsr3upscaler",
        "opticalflow",
        "frameinterpolation",
    ];

    for component in components {
        let paths = glob(&format!(
            "{}/src/components/{component}/*.cpp",
            api_dir.display()
        ))
        .expect("Failed to find sources");
        sources.extend(paths.map(|p| p.unwrap()));

        // Include (optional) shader blobs for component
        let path = api_dir
            .join("src/backends/shared/blob_accessors")
            .join(format!("ffx_{component}_shaderblobs.cpp"));
        if path.is_file() {
            // Not all components have shaders
            sources.push(path);
        }
    }

    // #[cfg(not(feature = "d3d12"))]
    // #[cfg(not(feature = "vulkan"))]
    // TODO: The vk bindings won't fork for FSR3 yet
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
        // Pretty much only used in ffx_shader_blobs to find the shaders
        .define("FFX_FSR", None)
        .define("FFX_FSR3", None)
        .include(api_dir.join("include"))
        .include(api_dir.join("src/shared"))
        // TODO: Only include this when compiling the backends
        .include(api_dir.join("src/backends/shared"))
        // For the shader headers
        .include(api_dir.join("src/components"))
        // TODO: Shader permutations are only available for Dx12 currently
        // TODO: Generalize folder name
        .include("FidelityFX-FSR3/shader_permutations/dx12")
        .include(vk_include_dir);

    if std::env::var("CARGO_CFG_UNIX").is_ok() {
        build.define("FFX_GCC", "1").std("c++2a");
    }

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
