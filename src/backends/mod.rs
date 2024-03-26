use std::marker::PhantomData;

#[cfg(feature = "d3d12")]
pub mod d3d12;
#[cfg(feature = "vulkan")]
pub mod vk;

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Device<'a>(fidelityfx_sys::Device, PhantomData<&'a ()>);
#[derive(Clone, Copy, Debug)]
pub struct CommandList<'a>(pub(crate) fidelityfx_sys::CommandList, PhantomData<&'a ()>);

// pub enum Device<'a> {
//     // D3d12(ID3D12Device),
//     D3d12(&'a ID3D12Device),
//     Vulkan(ash::vk::Device),
// }

// impl Device {
//     pub fn foo_bar_as_low_level_fidelityfx_device(&self) -> fidelityfx_sys::Device {
//         match self {
//             Device::D3d12(d) => d,
//             Device::Vulkan(_) => todo!(),
//         }
//     }
// }
