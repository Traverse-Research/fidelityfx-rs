use fidelityfx_sys::vk::VkDeviceContext;

#[test]
fn get_device() {
    let entry = unsafe { ash::Entry::load() }.unwrap();

    let instance = unsafe {
        entry
            .create_instance(&ash::vk::InstanceCreateInfo::default(), None)
            .unwrap()
    };

    let pdevice = ash::vk::PhysicalDevice::default();
    let device = ash::vk::Device::default();

    let mut context = VkDeviceContext {
        vkDevice: device,
        vkPhysicalDevice: pdevice,
        vkDeviceProcAddr: instance.fp_v1_0().get_device_proc_addr,
    };

    let ffx_device = unsafe { fidelityfx_sys::vk::GetDeviceVK(&mut context) };

    let scratch_size = unsafe { fidelityfx_sys::vk::GetScratchMemorySizeVK(pdevice, 1) };
    let mut scratch = vec![0u8; scratch_size];

    let mut interface = std::mem::MaybeUninit::uninit();
    let err = unsafe {
        fidelityfx_sys::vk::GetInterfaceVK(
            interface.as_mut_ptr(),
            ffx_device,
            scratch.as_mut_ptr().cast(),
            scratch.len(),
            1,
        )
    };
    assert_eq!(err, fidelityfx_sys::FFX_OK, "{err:?}");
}
