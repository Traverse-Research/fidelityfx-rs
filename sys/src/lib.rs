#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(clippy::excessive_precision)]
#![allow(clippy::missing_safety_doc)]
#![allow(clashing_extern_declarations)]
#![allow(improper_ctypes)]

mod error;
pub use error::ErrorCode;

include!("bindings.rs");

pub mod frameinterpolation {
    use crate::*;

    include!("frameinterpolation_bindings.rs");
}

pub mod opticalflow {
    use crate::*;

    include!("opticalflow_bindings.rs");
}

pub mod fsr1 {
    use crate::*;

    include!("fsr1_bindings.rs");
}

pub mod fsr2 {
    use crate::*;

    include!("fsr2_bindings.rs");
}

pub mod fsr3upscaler {
    use crate::*;

    include!("fsr3upscaler_bindings.rs");
}

pub mod fsr3 {
    use crate::fsr3upscaler::*;
    use crate::*;

    include!("fsr3_bindings.rs");
}

// TODO(Marijn): Use `ash` and `windows` to provide the right types for
// Vulkan handles and D3D12 structures?

#[cfg(feature = "vulkan")]
pub mod vk {
    use crate::*;

    use ash::vk::{
        Buffer as VkBuffer, BufferCreateInfo as VkBufferCreateInfo,
        CommandBuffer as VkCommandBuffer, Device as VkDevice, Fence as VkFence, Format as VkFormat,
        Image as VkImage, ImageCreateInfo as VkImageCreateInfo, PFN_vkAcquireNextImageKHR,
        PFN_vkDestroySwapchainKHR, PFN_vkGetDeviceProcAddr, PFN_vkGetSwapchainImagesKHR,
        PFN_vkQueuePresentKHR, PFN_vkSetHdrMetadataEXT, PhysicalDevice as VkPhysicalDevice,
        Pipeline as VkPipeline, Queue as VkQueue, Result as VkResult, SubmitInfo as VkSubmitInfo,
        SwapchainCreateInfoKHR as VkSwapchainCreateInfoKHR, SwapchainKHR as VkSwapchainKHR,
    };
    type VkAllocationCallbacks = ash::vk::AllocationCallbacks<'static>;

    include!("vk_bindings.rs");
}

#[cfg(feature = "dx12")]
pub mod dx12 {
    use crate::*;

    // Interfaces must be defined as c_void type (or other private structure) because the `windows`
    // crate types internally define the pointer whereas C bindings refer to these opaque types with
    // a pointer.
    type ID3D12CommandList = std::ffi::c_void;
    type ID3D12Device = std::ffi::c_void;
    type ID3D12Resource = std::ffi::c_void;
    type IDXGISwapChain4 = std::ffi::c_void;
    type ID3D12CommandQueue = std::ffi::c_void;
    type IDXGIFactory = std::ffi::c_void;
    type ID3D12PipelineState = std::ffi::c_void;

    type DXGI_SWAP_CHAIN_DESC = std::ffi::c_void;
    type DXGI_SWAP_CHAIN_DESC1 = std::ffi::c_void;
    type DXGI_SWAP_CHAIN_FULLSCREEN_DESC = std::ffi::c_void;

    #[allow(clippy::upper_case_acronyms)]
    type UINT = u32;
    #[allow(clippy::upper_case_acronyms)]
    type HWND = UINT;
    type DXGI_FORMAT = u32;

    include!("dx12_bindings.rs");
}
