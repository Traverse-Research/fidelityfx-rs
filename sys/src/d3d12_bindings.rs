/* automatically generated by rust-bindgen 0.69.4 */

extern "C" {
    #[doc = " Query how much memory is required for the DirectX 12 backend's scratch buffer.\n\n @param [in] maxContexts                 The maximum number of simultaneous effect contexts that will share the backend.\n                                         (Note that some effects contain internal contexts which count towards this maximum)\n\n @returns\n The size (in bytes) of the required scratch memory buffer for the DX12 backend.\n @ingroup DX12Backend"]
    #[link_name = "\u{1}ffxGetScratchMemorySizeDX12"]
    pub fn GetScratchMemorySizeDX12(maxContexts: usize) -> usize;
}
extern "C" {
    #[doc = " Create a <c><i>FfxDevice</i></c> from a <c><i>ID3D12Device</i></c>.\n\n @param [in] device                      A pointer to the DirectX12 device.\n\n @returns\n An abstract FidelityFX device.\n\n @ingroup DX12Backend"]
    #[link_name = "\u{1}ffxGetDeviceDX12"]
    pub fn GetDeviceDX12(device: *mut ID3D12Device) -> Device;
}
extern "C" {
    #[doc = " Populate an interface with pointers for the DX12 backend.\n\n @param [out] backendInterface           A pointer to a <c><i>FfxInterface</i></c> structure to populate with pointers.\n @param [in] device                      A pointer to the DirectX12 device.\n @param [in] scratchBuffer               A pointer to a buffer of memory which can be used by the DirectX(R)12 backend.\n @param [in] scratchBufferSize           The size (in bytes) of the buffer pointed to by <c><i>scratchBuffer</i></c>.\n @param [in] maxContexts                 The maximum number of simultaneous effect contexts that will share the backend.\n                                         (Note that some effects contain internal contexts which count towards this maximum)\n\n @retval\n FFX_OK                                  The operation completed successfully.\n @retval\n FFX_ERROR_CODE_INVALID_POINTER          The <c><i>interface</i></c> pointer was <c><i>NULL</i></c>.\n\n @ingroup DX12Backend"]
    #[link_name = "\u{1}ffxGetInterfaceDX12"]
    pub fn GetInterfaceDX12(
        backendInterface: *mut Interface,
        device: Device,
        scratchBuffer: *mut ::std::os::raw::c_void,
        scratchBufferSize: usize,
        maxContexts: u32,
    ) -> ErrorCode;
}
extern "C" {
    #[doc = " Create a <c><i>FfxCommandList</i></c> from a <c><i>ID3D12CommandList</i></c>.\n\n @param [in] cmdList                     A pointer to the DirectX12 command list.\n\n @returns\n An abstract FidelityFX command list.\n\n @ingroup DX12Backend"]
    #[link_name = "\u{1}ffxGetCommandListDX12"]
    pub fn GetCommandListDX12(cmdList: *mut ID3D12CommandList) -> CommandList;
}
extern "C" {
    #[doc = " Fetch a <c><i>FfxResource</i></c> from a <c><i>GPUResource</i></c>.\n\n @param [in] dx12Resource                A pointer to the DX12 resource.\n @param [in] ffxResDescription           An <c><i>FfxResourceDescription</i></c> for the resource representation.\n @param [in] ffxResName                  (optional) A name string to identify the resource in debug mode.\n @param [in] state                       The state the resource is currently in.\n\n @returns\n An abstract FidelityFX resources.\n\n @ingroup DX12Backend"]
    #[link_name = "\u{1}ffxGetResourceDX12"]
    pub fn GetResourceDX12(
        dx12Resource: *const ID3D12Resource,
        ffxResDescription: ResourceDescription,
        ffxResName: *mut u16,
        state: ResourceStates,
    ) -> Resource;
}
extern "C" {
    #[link_name = "\u{1}ffxGetSurfaceFormatDX12"]
    pub fn GetSurfaceFormatDX12(format: DXGI_FORMAT) -> SurfaceFormat;
}
extern "C" {
    #[link_name = "\u{1}GetFfxResourceDescriptionDX12"]
    pub fn GetResourceDescriptionDX12(pResource: *mut ID3D12Resource) -> ResourceDescription;
}
extern "C" {
    #[link_name = "\u{1}ffxGetCommandQueueDX12"]
    pub fn GetCommandQueueDX12(pCommandQueue: *mut ID3D12CommandQueue) -> CommandQueue;
}
extern "C" {
    #[link_name = "\u{1}ffxGetSwapchainDX12"]
    pub fn GetSwapchainDX12(pSwapchain: *mut IDXGISwapChain4) -> Swapchain;
}
extern "C" {
    #[link_name = "\u{1}ffxGetDX12SwapchainPtr"]
    pub fn GetDX12SwapchainPtr(ffxSwapchain: Swapchain) -> *mut IDXGISwapChain4;
}
extern "C" {
    #[link_name = "\u{1}ffxReplaceSwapchainForFrameinterpolationDX12"]
    pub fn ReplaceSwapchainForFrameinterpolationDX12(
        gameQueue: CommandQueue,
        gameSwapChain: *mut Swapchain,
    ) -> ErrorCode;
}
extern "C" {
    #[link_name = "\u{1}ffxCreateFrameinterpolationSwapchainDX12"]
    pub fn CreateFrameinterpolationSwapchainDX12(
        desc: *const DXGI_SWAP_CHAIN_DESC,
        queue: *mut ID3D12CommandQueue,
        dxgiFactory: *mut IDXGIFactory,
        outGameSwapChain: *mut Swapchain,
    ) -> ErrorCode;
}
extern "C" {
    #[link_name = "\u{1}ffxCreateFrameinterpolationSwapchainForHwndDX12"]
    pub fn CreateFrameinterpolationSwapchainForHwndDX12(
        hWnd: HWND,
        desc1: *const DXGI_SWAP_CHAIN_DESC1,
        fullscreenDesc: *const DXGI_SWAP_CHAIN_FULLSCREEN_DESC,
        queue: *mut ID3D12CommandQueue,
        dxgiFactory: *mut IDXGIFactory,
        outGameSwapChain: *mut Swapchain,
    ) -> ErrorCode;
}
extern "C" {
    #[link_name = "\u{1}ffxWaitForPresents"]
    pub fn WaitForPresents(gameSwapChain: Swapchain) -> ErrorCode;
}
extern "C" {
    #[link_name = "\u{1}ffxRegisterFrameinterpolationUiResourceDX12"]
    pub fn RegisterFrameinterpolationUiResourceDX12(
        gameSwapChain: Swapchain,
        uiResource: Resource,
    ) -> ErrorCode;
}
extern "C" {
    #[link_name = "\u{1}ffxGetFrameinterpolationCommandlistDX12"]
    pub fn GetFrameinterpolationCommandlistDX12(
        gameSwapChain: Swapchain,
        gameCommandlist: *mut CommandList,
    ) -> ErrorCode;
}
extern "C" {
    #[link_name = "\u{1}ffxGetFrameinterpolationTextureDX12"]
    pub fn GetFrameinterpolationTextureDX12(gameSwapChain: Swapchain) -> Resource;
}
extern "C" {
    #[link_name = "\u{1}ffxSetFrameGenerationConfigToSwapchainDX12"]
    pub fn SetFrameGenerationConfigToSwapchainDX12(
        config: *const FrameGenerationConfig,
    ) -> ErrorCode;
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct FrameInterpolationContext {
    _unused: [u8; 0],
}
#[repr(C)]
#[derive(Debug, Copy, Clone)]
pub struct Fsr2Context {
    _unused: [u8; 0],
}
pub type CreateFiSwapchain = ::std::option::Option<
    unsafe extern "C" fn(
        fiContext: *mut FrameInterpolationContext,
        device: Device,
        gameQueue: CommandQueue,
        swapchain: *mut Swapchain,
    ) -> ErrorCode,
>;
pub type ReleaseFiSwapchain = ::std::option::Option<
    unsafe extern "C" fn(
        fiContext: *mut FrameInterpolationContext,
        outRealSwapchain: *mut Swapchain,
    ) -> ErrorCode,
>;
