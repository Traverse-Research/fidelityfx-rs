use glob::glob;

fn main() {
    let sources = glob(&format!("{}/**/*.cpp", "FidelityFX-FSR3")).expect("Failed to find sources");
    
    // Compile d3d12/vulkan backend into the lib
    #[cfg(not(feature = "d3d12"))]
    let sources = sources.filter(|p| !p.as_ref().unwrap().to_str().unwrap().contains("dx12"));
    #[cfg(not(feature = "vulkan"))]
    let sources = sources.filter(|p| !p.as_ref().unwrap().to_str().unwrap().contains("vk"));
    
    
    let sources: Vec<_> = sources.into_iter().map(|p| p.unwrap()).collect();

    
    println!("Hello, world!");
}
