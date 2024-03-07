#[cfg(feature = "generate-bindgen")]
mod bindgen;

use cc;



fn build_fsr3(api_dir: &str, _vk_include_dir: &str) {
    let sources = glob(&format!("{}/**/*.cpp", api_dir)).expect("Failed to find sources");
    
    // Compile d3d12/vulkan backend into the lib
    #[cfg(not(feature = "d3d12"))]
    let sources = sources.filter(|p| !p.as_ref().unwrap().to_str().unwrap().contains("dx12"));
    #[cfg(not(feature = "vulkan"))]
    let sources = sources.filter(|p| !p.as_ref().unwrap().to_str().unwrap().contains("vk"));

    let sources: Vec<_> = sources.into_iter().map(|p| p.unwrap()).collect();

    let mut build = cc::Build::new();
    build.
    files(sources.iter())
    .cpp(true)
    .define("DYNAMIC_LINK_VULKAN", "1");

    
    if std::env::var("CARGO_CFG_UNIX").is_ok() {
        build.define("FFX_GCC", "1").std("c++2a");
    }


    //  Shader permutations?
    
    build.Compile("ffx_fsr3_api");
    
}



fn main() {
    let api_dir = "FidelityFX-FSR3";
    let vk_include_dir =  "./Vulkan-Headers/Include";


    build_fsr3(api_dir, vk_include_dir);

    // #[cfg(feature = "generate-bindings")]
    // {
    //     bindgen::generate_bindings(api_dir);
    //     bindgen::generate_vk_bindings(api_dir, vk_include_dir);
    //     bindgen::generate_d3d12_bindings(api_dir);
    // }
}