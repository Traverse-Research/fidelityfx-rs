use std::marker::PhantomData;

use super::{CommandList, Device};
use crate::{
    error::{Error, FfxError, Result},
    interface::{Interface, ScratchBuffer},
};
use ash::vk::{self, Handle};
use widestring::WideString;

impl From<vk::CommandBuffer> for CommandList<'static> {
    // Don't know a lifetime for a low-level ash::vk::CommandBuffer
    fn from(value: vk::CommandBuffer) -> Self {
        CommandList(
            unsafe { fidelityfx_sys::vk::GetCommandListVK(value.as_raw()) },
            PhantomData,
        )
    }
}

pub unsafe fn get_interface(
    // entry: &ash::Entry,
    device: Device<'_>,
    instance: &ash::Instance,
    physical_device: vk::PhysicalDevice,
) -> Result<Interface> {
    let scratch_buffer_size = unsafe {
        fidelityfx_sys::vk::GetScratchMemorySizeVK(
            physical_device.as_raw(),
            std::mem::transmute(Some(
                instance.fp_v1_0().enumerate_device_extension_properties,
            )),
        )
    };

    let mut retval = Interface {
        scratch_buffer: ScratchBuffer::new(scratch_buffer_size)
            .map_err(|e| Error::ScratchBuffer(e))?,
        interface: Default::default(),
    };

    // Create the actual fsr interface
    let error = unsafe {
        fidelityfx_sys::vk::GetInterfaceVK(
            &mut retval.interface,
            // TODO: Is the returned Interface going to hold a lifetime-less handle to our lifetimed device?
            device.0,
            retval.scratch_buffer.ptr().cast::<std::ffi::c_void>(),
            retval.scratch_buffer.len(),
            /* maxContexts */ 1,
        )
    };
    if error != fidelityfx_sys::FFX_OK {
        return Err(FfxError::from_error_code(error).into());
    }

    Ok(retval)
}

pub unsafe fn get_device(
    instance: &ash::Instance,
    device: &ash::Device,
    physical_device: vk::PhysicalDevice,
) -> Device<'static> {
    let mut device_context = fidelityfx_sys::vk::VkDeviceContext {
        vkDevice: device.handle().as_raw(),
        vkPhysicalDevice: physical_device.as_raw(),
        vkDeviceProcAddr: std::mem::transmute(Some(instance.fp_v1_0().get_device_proc_addr)),
    };
    Device(
        unsafe { fidelityfx_sys::vk::GetDeviceVK(&mut device_context) },
        PhantomData,
    )
}

pub unsafe fn get_texture_resource(
    image: vk::Image,
    type_: vk::ImageType,
    format: vk::Format,
    size: [u32; 3],
    mip_count: u32,
    flags: fidelityfx_sys::ResourceFlags,
    usage: fidelityfx_sys::ResourceUsage,
    state: fidelityfx_sys::ResourceStates,
    name: &str,
) -> fidelityfx_sys::Resource {
    let resource_description = fidelityfx_sys::ResourceDescription {
        type_: match type_ {
            vk::ImageType::TYPE_1D => fidelityfx_sys::FFX_RESOURCE_DIMENSION_TEXTURE_1D,
            vk::ImageType::TYPE_2D => fidelityfx_sys::FFX_RESOURCE_DIMENSION_TEXTURE_2D,
            // vk::ImageType::TYPE_3D => fidelityfx_sys::FFX_RESOURCE_DIMENSION_TEXTURE_3D,
            _ => unimplemented!(),
        },
        format: format.as_raw(),
        __bindgen_anon_1: fidelityfx_sys::ResourceDescription__bindgen_ty_1 { width: size[0] },
        __bindgen_anon_2: fidelityfx_sys::ResourceDescription__bindgen_ty_2 { height: size[1] },
        __bindgen_anon_3: fidelityfx_sys::ResourceDescription__bindgen_ty_3 { depth: size[2] },
        mipCount: mip_count,
        flags,
        usage,
    };

    unsafe {
        fidelityfx_sys::vk::GetResourceVK(
            // TODO(YIGIT): what pointer do they want? On dx12 it seems to be the ID3D12Resource. Is the Vulkan equivalent memory/buffer/image?
            image.as_raw() as *mut _,
            resource_description,
            WideString::from_str(name).as_mut_ptr(),
            state,
        )
    }
}
