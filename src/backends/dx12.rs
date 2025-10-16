use std::marker::PhantomData;

use widestring::U16String;
use windows::{
    core::Interface as _,
    Win32::Graphics::{
        Direct3D12::{self},
        Dxgi,
    },
};

use super::{CommandList, Device, Resource};
use crate::{
    error::{Error, Result},
    interface::{Interface, ScratchBuffer},
};

// impl<'a> From<&'a ID3D12Device> for Device<'a> {
//     fn from(value: &'a ID3D12Device) -> Self {
//         Device(
//             unsafe { fidelityfx_sys::dx12::GetDeviceDX12(std::mem::transmute_copy(value)) },
//             PhantomData,
//         )
//     }
// }

// TODO: Lifetime on COM object is futile
impl<'a> Device<'a> {
    pub fn from_dx12(device: &'a Direct3D12::ID3D12Device) -> Self {
        Self(
            // SAFETY: Should just be a cast internally. Knowing that the ID3D12Device is a sound/safe,
            // turning it into a Device is also safe.
            unsafe { fidelityfx_sys::dx12::GetDeviceDX12(device.as_raw()) },
            PhantomData,
        )
    }
}

// TODO: Lifetime on COM object is futile
impl<'a> From<&'a Direct3D12::ID3D12CommandList> for CommandList<'a> {
    fn from(value: &'a Direct3D12::ID3D12CommandList) -> Self {
        CommandList(
            unsafe {
                // TODO: This looks like a new() kind of function, that may
                // be incrementing the refcount on the Windows type?
                fidelityfx_sys::dx12::GetCommandListDX12(value.as_raw())
            },
            PhantomData,
        )
    }
}

impl<'a> Resource<'a> {
    pub unsafe fn from_dx12_texture(
        resource: &Direct3D12::ID3D12Resource,
        type_: Direct3D12::D3D12_RESOURCE_DIMENSION,
        format: Dxgi::Common::DXGI_FORMAT,
        size: [u32; 3],
        mip_count: u32,
        flags: fidelityfx_sys::ResourceFlags,
        usage: fidelityfx_sys::ResourceUsage,
        state: fidelityfx_sys::ResourceStates,
        name: Option<&str>,
    ) -> Self {
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
            // Also allows size/stride/alignment for buffer resources
            __bindgen_anon_1: fidelityfx_sys::ResourceDescription__bindgen_ty_1 { width: size[0] },
            __bindgen_anon_2: fidelityfx_sys::ResourceDescription__bindgen_ty_2 { height: size[1] },
            __bindgen_anon_3: fidelityfx_sys::ResourceDescription__bindgen_ty_3 { depth: size[2] },
            mipCount: mip_count,
            flags,
            usage,
        };

        Self(
            fidelityfx_sys::dx12::GetResourceDX12(
                resource.as_raw(),
                resource_description,
                // TODO: Use Rust or windows conversion facilities.
                name.map_or(std::ptr::null_mut(), |name| {
                    // INVALID: This is NOT NUL-terminated?
                    U16String::from_str(name).as_mut_ptr()
                }),
                state,
            ),
            PhantomData,
        )
    }
}

unsafe fn get_scratch_memory_size() -> usize {
    fidelityfx_sys::dx12::GetScratchMemorySizeDX12(/*TODO */ 1)
}

pub unsafe fn get_interface(device: Device<'_>) -> Result<Interface> {
    let scratch_buffer =
        ScratchBuffer::new(get_scratch_memory_size()).map_err(Error::ScratchBuffer)?;

    let mut retval = Interface {
        interface: Default::default(),
        scratch_buffer,
    };

    let error = fidelityfx_sys::dx12::GetInterfaceDX12(
        &mut retval.interface,
        // TODO: Is the returned Interface going to hold a lifetime-less handle to our lifetimed device?
        device.0,
        retval.scratch_buffer.ptr().cast::<std::ffi::c_void>(),
        retval.scratch_buffer.len(),
        /* TODO */ 1,
    );
    if error != fidelityfx_sys::FFX_OK {
        return Err(FfxError::from_error_code(error).into());
    }

    Ok(retval)
}
