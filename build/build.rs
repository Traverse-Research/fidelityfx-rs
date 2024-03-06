#[cfg(feature = "generate-bindgen")]
mod bindgen;



fn build_fsr3(api_dir: &str, _vk_include_dir: &str) {
    // build the fsrher
}





fn main() {
    let api_dir = "./dir/to/FSR3/...";
    let vk_include_dir =  "./Vulkan-Headers/Include";


    build_fsr(api_dir, vk_include_dir);

    // #[cfg(feature = "generate-bindings")]
    // {
    //     bindgen::generate_bindings(api_dir);
    //     bindgen::generate_vk_bindings(api_dir, vk_include_dir);
    //     bindgen::generate_d3d12_bindings(api_dir);
    // }
}