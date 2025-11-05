//! Bindings to the new `ffx-api` abstraction, generated from <https://github.com/GPUOpen-LibrariesAndSDKs/FidelityFX-SDK/tree/v1.1.4/ffx-api>.
//!
//! See <https://github.com/GPUOpen-LibrariesAndSDKs/FidelityFX-SDK/blob/v1.1.4/docs/getting-started/ffx-api.md> for details on how to use this new API.

#![allow(
    non_upper_case_globals,
    non_camel_case_types,
    non_snake_case,
    clippy::missing_safety_doc
)]

mod return_code;
pub use return_code::ReturnCode;
type ReturnCode_t = ReturnCode;

include!("bindings.rs");

pub mod upscale {
    use super::*;

    include!("upscale_bindings.rs");
}

pub mod framegeneration {
    use super::*;

    include!("framegeneration_bindings.rs");
}

#[cfg(feature = "vulkan")]
pub mod vk {
    use super::*;

    use ash::vk::{
        Device as VkDevice, Fence as VkFence, PFN_vkAcquireNextImageKHR, PFN_vkGetDeviceProcAddr,
        PFN_vkGetSwapchainImagesKHR, PFN_vkQueuePresentKHR, PFN_vkSetHdrMetadataEXT,
        PhysicalDevice as VkPhysicalDevice, Queue as VkQueue, Result as VkResult,
        SubmitInfo as VkSubmitInfo, SwapchainKHR as VkSwapchainKHR,
    };
    type VkAllocationCallbacks = ash::vk::AllocationCallbacks<'static>;
    type VkSwapchainCreateInfoKHR = ash::vk::SwapchainCreateInfoKHR<'static>;

    include!("vk_backend_bindings.rs");
}

#[cfg(feature = "dx12")]
pub mod dx12 {
    use super::*;

    // Interfaces must be defined as c_void type (or other private structure) because the `windows`
    // crate types internally define the pointer whereas C bindings refer to these opaque types with
    // a pointer.

    type ID3D12Device = std::ffi::c_void;

    type IDXGISwapChain4 = std::ffi::c_void;
    type ID3D12CommandQueue = std::ffi::c_void;
    type IDXGIFactory = std::ffi::c_void;

    type DXGI_SWAP_CHAIN_DESC = std::ffi::c_void;
    type DXGI_SWAP_CHAIN_DESC1 = std::ffi::c_void;
    type DXGI_SWAP_CHAIN_FULLSCREEN_DESC = std::ffi::c_void;

    #[allow(clippy::upper_case_acronyms)]
    type UINT = u32;
    #[allow(clippy::upper_case_acronyms)]
    type HWND = UINT;

    include!("dx12_backend_bindings.rs");
}
