use std::marker::PhantomData;

use super::{CommandList, Device};
use crate::{
    error::{Error, Result},
    interface::{Interface, ScratchBuffer},
};
use widestring::U16String;
use windows::Win32::Graphics::{
    Direct3D12::{self, ID3D12CommandList, ID3D12Device, ID3D12Resource},
    Dxgi,
};

impl<'a> From<&'a ID3D12CommandList> for CommandList<'a> {
    fn from(value: &'a ID3D12CommandList) -> Self {
        CommandList(
            unsafe {
                fidelityfx_sys::d3d12::GetCommandListDX12(
                    // repr(transparent) around a pointer
                    std::mem::transmute_copy(value),
                )
            },
            PhantomData,
        )
    }
}

unsafe fn get_scratch_memory_size() -> usize {
    fidelityfx_sys::d3d12::GetScratchMemorySizeDX12(/*TODO */ 1)
}

pub unsafe fn get_interface(device: Device<'_>) -> Result<Interface> {
    let scratch_buffer =
        ScratchBuffer::new(get_scratch_memory_size()).map_err(|e| Error::ScratchBuffer(e))?;

    let mut retval = Interface {
        interface: fidelityfx_sys::Interface::default(),
        scratch_buffer,
    };

    fidelityfx_sys::d3d12::GetInterfaceDX12(
        &mut retval.interface,
        // TODO: Is the returned Interface going to hold a lifetime-less handle to our lifetimed device?
        device.0,
        retval.scratch_buffer.ptr().cast::<std::ffi::c_void>(),
        retval.scratch_buffer.len(),
        /* TODO */ 1,
    );

    Ok(retval)
}

// impl<'a> From<&'a ID3D12Device> for Device<'a> {
//     fn from(value: &'a ID3D12Device) -> Self {
//         Device(
//             unsafe { fidelityfx_sys::d3d12::GetDeviceDX12(std::mem::transmute_copy(value)) },
//             PhantomData,
//         )
//     }
// }

// TODO: Not unsafe because the Windows type should be sound
pub fn get_device<'a>(device: &'a ID3D12Device) -> Device<'a> {
    Device(
        // SAFETY: Should just be a cast internally. Knowing that the ID3D12Device is a sound/safe,
        // turning it into a Device is also safe.
        unsafe { fidelityfx_sys::d3d12::GetDeviceDX12(std::mem::transmute_copy(device)) },
        PhantomData,
    )
}

pub unsafe fn get_texture_resource(
    resource: &ID3D12Resource,
    type_: Direct3D12::D3D12_RESOURCE_DIMENSION,
    format: Dxgi::Common::DXGI_FORMAT,
    size: [u32; 3],
    mip_count: u32,
    flags: fidelityfx_sys::ResourceFlags,
    usage: fidelityfx_sys::ResourceUsage,
    state: fidelityfx_sys::ResourceStates,
    name: &str,
) -> fidelityfx_sys::Resource {
    let resource_description = fidelityfx_sys::ResourceDescription {
        type_: match type_ {
            Direct3D12::D3D12_RESOURCE_DIMENSION_TEXTURE1D => {
                fidelityfx_sys::FFX_RESOURCE_DIMENSION_TEXTURE_1D
            }
            Direct3D12::D3D12_RESOURCE_DIMENSION_TEXTURE2D => {
                fidelityfx_sys::FFX_RESOURCE_DIMENSION_TEXTURE_2D
            }
            _ => unimplemented!(),
        },
        format: format.0,
        __bindgen_anon_1: fidelityfx_sys::ResourceDescription__bindgen_ty_1 { width: size[0] },
        __bindgen_anon_2: fidelityfx_sys::ResourceDescription__bindgen_ty_2 { height: size[1] },
        __bindgen_anon_3: fidelityfx_sys::ResourceDescription__bindgen_ty_3 { depth: size[2] },
        mipCount: mip_count,
        flags,
        usage,
    };

    fidelityfx_sys::d3d12::GetResourceDX12(
        std::mem::transmute_copy(resource),
        resource_description,
        U16String::from_str(name).as_mut_ptr(),
        state,
    )
}
