#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(clippy::excessive_precision)]

include!("bindings.rs");

#[cfg(feature = "vulkan")]
pub mod vk {
    use crate::*;

    type VkPhysicalDevice = u64;
    type VkDevice = u64;
    type VkInstance = u64;
    type VkCommandBuffer = u64;
    type PFN_vkGetDeviceProcAddr = *const std::ffi::c_void;
    type PFN_vkGetInstanceProcAddr = *const std::ffi::c_void;
    type PFN_vkEnumerateDeviceExtensionProperties = *const std::ffi::c_void;
    type VkBuffer = u64;
    type VkImage = u64;
    type VkImageView = u64;
    type VkFormat = i32;
    type VkImageLayout = i32;

    include!("vk_bindings.rs");
}

#[cfg(feature = "dx12")]
pub mod dx12 {
    use crate::*;

    type ID3D12CommandList = std::ffi::c_void;
    type ID3D12Device = std::ffi::c_void;
    type ID3D12Resource = std::ffi::c_void;
    type IDXGISwapChain4 = std::ffi::c_void;
    type ID3D12CommandQueue = std::ffi::c_void;
    type IDXGIFactory = std::ffi::c_void;
    type DXGI_SWAP_CHAIN_DESC = std::ffi::c_void;
    type DXGI_SWAP_CHAIN_DESC1 = std::ffi::c_void;
    type DXGI_SWAP_CHAIN_FULLSCREEN_DESC = std::ffi::c_void;

    type UINT = u32;
    type HWND = UINT;
    type DXGI_FORMAT = u32;

    include!("dx12_bindings.rs");
}
