//! Bindings to the new `ffx-api` abstraction, generated from <https://github.com/GPUOpen-LibrariesAndSDKs/FidelityFX-SDK/tree/v1.1.4/ffx-api>.
//!
//! See <https://github.com/GPUOpen-LibrariesAndSDKs/FidelityFX-SDK/blob/v1.1.4/docs/getting-started/ffx-api.md> for details on how to use this new API.

#![allow(
    non_upper_case_globals,
    non_camel_case_types,
    non_snake_case,
    clippy::missing_safety_doc
)]

use std::ffi::c_void;

mod return_code;

pub use return_code::ReturnCode;
type ReturnCode_t = ReturnCode;

/// # Safety
/// This trait must only be implemented for types that contain a [`Header`], have a valid
/// [`StructType_t`], and are safe to be zero-initialized.
pub unsafe trait TaggedStructure: Sized {
    const TAG: StructType_t;
    fn header_mut(&mut self) -> &mut Header;

    fn new() -> Self {
        // Original bindgen implementation
        let mut s = ::std::mem::MaybeUninit::<Self>::uninit();
        let mut s = unsafe {
            ::std::ptr::write_bytes(s.as_mut_ptr(), 0, 1);
            s.assume_init()
        };
        s.header_mut().type_ = Self::TAG;
        s
    }

    /// Inserts `next` into the chain of `self`, as long as `next` has no
    /// `pNext` pointers of itself.
    ///
    /// # Safety
    /// This function does not use Rust lifetimes to guarantee `next` outlives `self`
    unsafe fn extend(&mut self, next: &mut impl TaggedStructure) {
        assert!(
            next.header_mut().pNext.is_null(),
            "`next` should not have an existing pointer chain"
        );

        next.header_mut().pNext = self.header_mut().pNext;

        // Before pointing `self` to `next` without casts through its `header` field,
        // ensure that the `header` is actually the
        debug_assert_eq!(
            <*mut _>::cast::<c_void>(self.header_mut()),
            <*mut _>::cast::<c_void>(self)
        );
        self.header_mut().pNext = self.header_mut();
    }
}

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
        SwapchainKHR as VkSwapchainKHR,
    };
    type VkAllocationCallbacks = ash::vk::AllocationCallbacks<'static>;
    type VkSwapchainCreateInfoKHR = ash::vk::SwapchainCreateInfoKHR<'static>;
    type VkSubmitInfo = ash::vk::SubmitInfo<'static>;

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
