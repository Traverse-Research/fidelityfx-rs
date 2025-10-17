#[cfg(feature = "generate-bindings")]
mod bindgen;

use std::path::Path;

use glob::glob;

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

fn compile_fidelityfx(api_dir: &Path, vk_include_dir: &Path) {
    let mut sources = vec![];

    let paths =
        glob(&format!("{}/src/shared/*.cpp", api_dir.display())).expect("Failed to find sources");
    sources.extend(paths.map(|p| p.unwrap()));

    for component in COMPONENTS {
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

    // TODO: The vk bindings won't work for FSR3 yet
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
        // TODO: Generalize folder name
        .include("FidelityFX/libs")
        .include("FidelityFX/shader_permutations/dx12")
        .include(vk_include_dir);

    if std::env::var("CARGO_CFG_UNIX").is_ok() {
        build.define("FFX_GCC", "1").std("c++2a");
    }

    build.compile("ffx_fsr3_api");
}

fn main() {
    let api_dir = Path::new("./FidelityFX/");
    let vk_include_dir = Path::new(env!("CARGO_MANIFEST_DIR")).join("Vulkan-Headers/include");

    compile_fidelityfx(api_dir, &vk_include_dir);

    #[cfg(feature = "generate-bindings")]
    {
        bindgen::generate_bindings(api_dir);
        for component in COMPONENTS {
            bindgen::generate_component_bindings(component, api_dir);
        }
        bindgen::generate_vk_bindings(api_dir, &vk_include_dir);
        bindgen::generate_dx12_bindings(api_dir);
    }

    // TODO: FidelityFX is given Vulkan loader functions. It should _not have to_ link
    // against vulkan _again_ **manually** in any way. Use static linking in the mean time.
    {
        use std::env;

        let target_family = env::var("CARGO_CFG_TARGET_FAMILY").unwrap();
        let target_pointer_width = env::var("CARGO_CFG_TARGET_POINTER_WIDTH").unwrap();

        println!("cargo:rerun-if-env-changed=VULKAN_SDK");
        if let Ok(var) = env::var("VULKAN_SDK") {
            let suffix = match (&*target_family, &*target_pointer_width) {
                ("windows", "32") => "Lib32",
                ("windows", "64") => "Lib",
                _ => "lib",
            };
            println!("cargo:rustc-link-search={var}/{suffix}");
        }
        let lib = match &*target_family {
            "windows" => "vulkan-1",
            _ => "vulkan",
        };
        println!("cargo:rustc-link-lib={lib}");
    }
}
