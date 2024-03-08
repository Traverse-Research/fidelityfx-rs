use crate::{
    error::{Error, FfxError, Result},
    interface::{Interface, ScratchBuffer},
    CommandList,
};
use fidelityfx_sys::{Device, ResourceStates};
use widestring::U16String;
use windows::Win32::Graphics::{
    Direct3D12::{ID3D12CommandList, ID3D12Device, ID3D12Resource},
    Dxgi,
};

impl From<&mut ID3D12CommandList> for CommandList {
    fn from(value: &mut ID3D12CommandList) -> Self {
        unsafe {
            CommandList(fidelityfx_sys::d3d12::GetCommandListDX12(
                value as *mut _ as _,
            ))
        }
    }
}

unsafe fn get_scratch_memory_size() -> usize {
    fidelityfx_sys::d3d12::GetScratchMemorySizeDX12(/*TODO */ 1)
}

pub unsafe fn get_interface(device: fidelityfx_sys::Device) -> Result<Interface> {
    let scratch_buffer =
        ScratchBuffer::new(get_scratch_memory_size()).map_err(|e| Error::ScratchBuffer(e))?;

    let mut retval = Interface {
        interface: fidelityfx_sys::Interface::default(),
        scratch_buffer,
    };

    fidelityfx_sys::d3d12::GetInterfaceDX12(
        &mut retval.interface,
        device,
        retval.scratch_buffer.ptr().cast::<std::ffi::c_void>(),
        retval.scratch_buffer.len(),
        /* TODO */ 1,
    );

    Ok(retval)
}

pub unsafe fn get_device(device: &ID3D12Device) -> Device {
    fidelityfx_sys::d3d12::GetDeviceDX12(device as *const _ as _)
    // fidelityfx_sys::d3d12::GetDeviceDX12(device.0.as_raw())
}

pub unsafe fn get_texture_resource(
    resource: &mut ID3D12Resource,
    type_: fidelityfx_sys::ResourceType,
    format: Dxgi::Common::DXGI_FORMAT,
    size: [u32; 3],
    mip_count: u32,
    flags: fidelityfx_sys::ResourceFlags,
    usage: fidelityfx_sys::ResourceUsage,
    state: ResourceStates,
    name: &str,
) {
    let resource_description = fidelityfx_sys::ResourceDescription {
        type_,
        format: format.0,
        __bindgen_anon_1: fidelityfx_sys::ResourceDescription__bindgen_ty_1 { width: size[0] },
        __bindgen_anon_2: fidelityfx_sys::ResourceDescription__bindgen_ty_2 { height: size[1] },
        __bindgen_anon_3: fidelityfx_sys::ResourceDescription__bindgen_ty_3 { depth: size[2] },
        mipCount: mip_count,
        flags,
        usage,
    };

    fidelityfx_sys::d3d12::GetResourceDX12(
        resource as *mut _ as _,
        resource_description,
        U16String::from_str(name).as_mut_ptr(),
        state,
    );
}
