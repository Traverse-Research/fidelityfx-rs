//! Unsafe Rust bindings for [FidelityFX Super Resolution 2](https://github.com/GPUOpen-Effects/FidelityFX-FSR2)
//!
//!
//! # Vulkan psuedo code
//! ```no_run
//! // Create the FSR interface
//! // The context created below should not out live the scratch buffer.
//! let mut scratch_buffer =
//!     vec![0u8; fsr::vk::get_scratch_memory_size(&vk_instance, vk_physical_device)];
//! let interface = fsr::vk::get_interface(
//!     &vk_entry,
//!     &vk_instance,
//!     vk_physical_device,
//!     &mut scratch_buffer,
//! ).unwrap();
//!
//! // Create the FSR context
//! let context_desc = fsr::ContextDescription {
//!     interface: fsr_interface,
//!     device: &fsr::vk::get_device(vk_device),
//!     display_size: [1920, 1080],
//!     max_render_size: [1280, 720],
//!     flags: fsr::InitializationFlagBits::ENABLE_HIGH_DYNAMIC_RANGE
//!     message_callback: None,
//! };
//! let context = fsr::Context::new(context_desc).unwrap();
//!
//! // Dispatch gpu work
//! let desc = fsr::DispatchDescription::new(
//!     vk_command_list.into(),
//!     color,
//!     depth,
//!     velocity,
//!     output,
//!     delta_time_s,
//!     [1280, 720],
//! );
//! fsr_context.dispatch(desc).expect("Failed to dispatch fsr");
//! ```

pub use crate::interface::Interface;

pub use fidelityfx_sys::Device;
pub use fidelityfx_sys::MsgType;
pub use fidelityfx_sys::Resource;
pub use fidelityfx_sys::ResourceStates;

/// A typedef representing a command list or command buffer.
pub struct CommandList(fidelityfx_sys::CommandList);
/// A structure encapsulating the FidelityFX Super Resolution 2 context.
pub struct Context {
    pub(crate) context: Box<fidelityfx_sys::Fsr3Context>,
    _interface: Interface,
}

#[repr(i32)]
#[derive(Debug)]
pub enum FsrError {
    InvalidPointer = fidelityfx_sys::FFX_ERROR_INVALID_POINTER,
    InvalidAlignment = fidelityfx_sys::FFX_ERROR_INVALID_ALIGNMENT,
    InvalidSize = fidelityfx_sys::FFX_ERROR_INVALID_SIZE,
    Eof = fidelityfx_sys::FFX_ERROR_EOF,
    InvalidPath = fidelityfx_sys::FFX_ERROR_INVALID_PATH,
    MalfmoredData = fidelityfx_sys::FFX_ERROR_MALFORMED_DATA,
    OutOfMemory = fidelityfx_sys::FFX_ERROR_OUT_OF_MEMORY,
    IncompleteInterface = fidelityfx_sys::FFX_ERROR_INCOMPLETE_INTERFACE,
    InvalidEnum = fidelityfx_sys::FFX_ERROR_INVALID_ENUM,
    InvalidArgument = fidelityfx_sys::FFX_ERROR_INVALID_ARGUMENT,
    OutOfRange = fidelityfx_sys::FFX_ERROR_OUT_OF_RANGE,
    NullDevice = fidelityfx_sys::FFX_ERROR_NULL_DEVICE,
    BackendApiError = fidelityfx_sys::FFX_ERROR_BACKEND_API_ERROR,
    InsufficientMemory = fidelityfx_sys::FFX_ERROR_INSUFFICIENT_MEMORY,
    Unknown = 0,
}

impl std::fmt::Display for FsrError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "SuperError is here!")
    }
}

impl std::error::Error for FsrError {}

impl FsrError {
    fn from_error_code(value: fidelityfx_sys::ErrorCode) -> Self {
        match value {
            fidelityfx_sys::FFX_ERROR_INVALID_POINTER => Self::InvalidPointer,
            fidelityfx_sys::FFX_ERROR_INVALID_ALIGNMENT => Self::InvalidAlignment,
            fidelityfx_sys::FFX_ERROR_INVALID_SIZE => Self::InvalidSize,
            fidelityfx_sys::FFX_ERROR_EOF => Self::Eof,
            fidelityfx_sys::FFX_ERROR_INVALID_PATH => Self::InvalidPath,
            fidelityfx_sys::FFX_ERROR_MALFORMED_DATA => Self::MalfmoredData,
            fidelityfx_sys::FFX_ERROR_OUT_OF_MEMORY => Self::OutOfMemory,
            fidelityfx_sys::FFX_ERROR_INCOMPLETE_INTERFACE => Self::IncompleteInterface,
            fidelityfx_sys::FFX_ERROR_INVALID_ENUM => Self::InvalidEnum,
            fidelityfx_sys::FFX_ERROR_INVALID_ARGUMENT => Self::InvalidArgument,
            fidelityfx_sys::FFX_ERROR_OUT_OF_RANGE => Self::OutOfRange,
            fidelityfx_sys::FFX_ERROR_NULL_DEVICE => Self::NullDevice,
            fidelityfx_sys::FFX_ERROR_BACKEND_API_ERROR => Self::BackendApiError,
            fidelityfx_sys::FFX_ERROR_INSUFFICIENT_MEMORY => Self::InsufficientMemory,
            _ => Self::Unknown,
        }
    }
}

#[derive(Debug, thiserror::Error)]
pub enum Error {
    #[error("Failed to allocate scratch buffer")]
    ScratchBuffer(#[source] std::alloc::LayoutError),

    #[error("Failed compiling module dependency")] // TODO: show which
    Fsr(#[source] FsrError),
}

pub struct ContextDescription<'a> {
    pub interface: Interface,
    pub flags: fidelityfx_sys::Fsr3InitializationFlagBits,
    pub max_render_size: [u32; 2],
    pub display_size: [u32; 2],
    pub device: &'a Device,
    pub message_callback: Option<unsafe extern "C" fn(MsgType, *const widestring::WideChar)>,
}

impl From<&ContextDescription<'_>> for fidelityfx_sys::Fsr3ContextDescription {
    fn from(val: &ContextDescription<'_>) -> Self {
        Self {
            flags: val.flags.0 as u32,
            maxRenderSize: fidelityfx_sys::Dimensions2D {
                width: val.max_render_size[0],
                height: val.max_render_size[1],
            },
            displaySize: fidelityfx_sys::Dimensions2D {
                width: val.display_size[0],
                height: val.display_size[1],
            },
            fpMessage: val.message_callback,

            // TODO
            // callbacks: val.interface.interface,
            // device: *val.device,
            upscaleOutputSize: todo!(),
            backendInterfaceSharedResources: todo!(),
            backendInterfaceUpscaling: todo!(),
            backendInterfaceFrameInterpolation: todo!(),
            backBufferFormat: todo!(),
        }
    }
}

use fidelityfx_sys::Fsr3InitializationFlagBits;

// bitflags::bitflags! {
//     #[repr(transparent)]
//     #[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
//     pub struct Fsr3InitializationFlagBits: 32 {
//         const HIGH_DYNAMIC_RANGE = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_HIGH_DYNAMIC_RANGE;
//         const DISPLAY_RESOLUTION_MOTION_VECTORS = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_DISPLAY_RESOLUTION_MOTION_VECTORS;
//         const MOTION_VECTORS_JITTER_CANCELLATION = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_MOTION_VECTORS_JITTER_CANCELLATION;
//         const DEPTH_INVERTED = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_DEPTH_INVERTED;
//         const DEPTH_INFINITE = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_DEPTH_INFINITE;
//         const AUTO_EXPOSURE = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_AUTO_EXPOSURE;
//         const DYNAMIC_RESOLUTION = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_DYNAMIC_RESOLUTION;
//         const TEXTURE1D_USAGE = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_TEXTURE1D_USAGE;
//         const DEBUG_CHECKING = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_DEBUG_CHECKING;
//         const UPSCALING_ONLY = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_UPSCALING_ONLY;
//         const HDR_UPSCALE_SDR_FINALOUTPUT = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_HDR_UPSCALE_SDR_FINALOUTPUT;
//         const SDR_UPSCALE_HDR_FINALOUTPUT = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_SDR_UPSCALE_HDR_FINALOUTPUT;
//         const ASYNC_WORKLOAD_SUPPORT = fidelityfx_sys::Fsr3InitializationFlagBits::FFX_FSR3_ENABLE_ASYNC_WORKLOAD_SUPPORT;
//     }
// }

pub struct DispatchDescription {
    pub cmd_list: CommandList,
    pub output: Resource,

    pub color: Resource,
    pub depth: Resource,
    pub motion_vectors: Resource,
    pub color_opaque_only: Option<Resource>,
    pub exposure: Option<Resource>,
    pub reactive: Option<Resource>,
    pub transparency_and_composition: Option<Resource>,

    pub enable_auto_reactive: bool,
    pub enable_sharpening: bool,

    pub auto_reactive_max: f32,
    pub auto_tc_scale: f32,
    pub auto_reactive_scale: f32,
    pub auto_tc_threshold: f32,

    pub motion_vector_scale: [f32; 2],

    pub pre_exposure: f32,
    pub frame_time_delta: f32,

    pub jitter_offset: [f32; 2],

    pub render_size: [u32; 2],

    pub camera_near: f32,
    pub camera_far: f32,
    pub camera_fov_y: f32,

    pub sharpness: f32,

    pub view_space_to_meters_factor: f32,

    pub reset: bool,
}

impl DispatchDescription {
    pub fn new(
        cmd_list: CommandList,
        color: Resource,
        depth: Resource,
        motion_vectors: Resource,
        output: Resource,
        frame_time_delta: f32,
        render_size: [u32; 2],
    ) -> Self {
        Self {
            cmd_list,
            color,
            color_opaque_only: None,
            depth,
            exposure: None,
            motion_vectors,
            reactive: None,
            transparency_and_composition: None,
            output,
            enable_auto_reactive: false,
            enable_sharpening: false,
            auto_reactive_max: 0.0,
            auto_tc_scale: 1.0,
            auto_reactive_scale: 1.0,
            auto_tc_threshold: 0.0,
            motion_vector_scale: [1.0, 1.0],
            pre_exposure: 1.0,
            frame_time_delta,
            jitter_offset: [0.0, 0.0],
            render_size,
            camera_near: 0.01,
            camera_far: 1000.0,
            camera_fov_y: 1.0,
            sharpness: 0.0,
            view_space_to_meters_factor: 1.0,
            reset: false,
        }
    }

    pub fn camera(mut self, near: f32, far: f32, fov_y: f32) -> DispatchDescription {
        self.camera_near = near;
        self.camera_far = far;
        self.camera_fov_y = fov_y;
        self
    }

    pub fn pre_exposure(mut self, value: f32) -> DispatchDescription {
        self.pre_exposure = value;
        self
    }

    pub fn view_space_to_meters_factor(mut self, value: f32) -> DispatchDescription {
        self.view_space_to_meters_factor = value;
        self
    }

    pub fn exposure(mut self, resource: Resource) -> DispatchDescription {
        self.exposure = Some(resource);
        self
    }

    pub fn reactive(mut self, resource: Resource) -> DispatchDescription {
        self.reactive = Some(resource);
        self
    }

    pub fn motion_vector_scale(mut self, value: [f32; 2]) -> DispatchDescription {
        self.motion_vector_scale = value;
        self
    }

    pub fn jitter_offset(mut self, value: [f32; 2]) -> DispatchDescription {
        self.jitter_offset = value;
        self
    }

    pub fn sharpness(mut self, sharpness: f32) -> DispatchDescription {
        self.enable_sharpening = true;
        self.sharpness = sharpness;
        self
    }

    pub fn auto_reactive(
        mut self,
        color_opaque_only: Resource,
        transparency_and_composition: Resource,
        auto_reactive_max: f32,
        auto_tc_scale: f32,
        auto_reactive_scale: f32,
        auto_tc_threshold: f32,
    ) -> DispatchDescription {
        self.color_opaque_only = Some(color_opaque_only);
        self.transparency_and_composition = Some(transparency_and_composition);
        self.enable_auto_reactive = true;
        self.auto_reactive_max = auto_reactive_max;
        self.auto_tc_scale = auto_tc_scale;
        self.auto_reactive_scale = auto_reactive_scale;
        self.auto_tc_threshold = auto_tc_threshold;
        self
    }

    pub fn reset(mut self, value: bool) -> DispatchDescription {
        self.reset = value;
        self
    }
}

impl From<DispatchDescription> for fidelityfx_sys::Fsr3DispatchUpscaleDescription {
    fn from(val: DispatchDescription) -> Self {
        Self {
            commandList: val.cmd_list.0,
            // output: val.output,
            color: val.color,
            transparencyAndComposition: val.transparency_and_composition.unwrap_or_default(),
            // colorOpaqueOnly: val.color_opaque_only.unwrap_or_default(),
            depth: val.depth,
            exposure: val.exposure.unwrap_or_default(),
            reactive: val.reactive.unwrap_or_default(),
            motionVectors: val.motion_vectors,
            // autoReactiveMax: val.auto_reactive_max,
            // autoTcScale: val.auto_tc_scale,
            enableSharpening: val.enable_sharpening,
            // enableAutoReactive: val.enable_auto_reactive,
            // autoReactiveScale: val.auto_reactive_scale,
            // autoTcThreshold: val.auto_tc_threshold,
            cameraNear: val.camera_near,
            cameraFar: val.camera_far,
            viewSpaceToMetersFactor: val.view_space_to_meters_factor,
            renderSize: fidelityfx_sys::Dimensions2D {
                width: val.render_size[0],
                height: val.render_size[1],
            },
            frameTimeDelta: val.frame_time_delta,
            motionVectorScale: fidelityfx_sys::FloatCoords2D {
                x: val.motion_vector_scale[0],
                y: val.motion_vector_scale[1],
            },
            preExposure: val.pre_exposure,
            jitterOffset: fidelityfx_sys::FloatCoords2D {
                x: val.jitter_offset[0],
                y: val.jitter_offset[1],
            },
            cameraFovAngleVertical: val.camera_fov_y,
            sharpness: val.sharpness,
            reset: val.reset,
            upscaleOutput: todo!(),
        }
    }
}

impl Context {
    pub unsafe fn new(desc: ContextDescription<'_>) -> Result<Self, Error> {
        let mut context = Box::<fidelityfx_sys::Fsr3Context>::default();
        unsafe {
            let error = fidelityfx_sys::Fsr3ContextCreate(context.as_mut(), &mut (&desc).into());
            if error != fidelityfx_sys::FFX_OK {
                return Err(Error::Fsr(FsrError::from_error_code(error)));
            }
        }
        Ok(Context {
            context,
            _interface: desc.interface,
        })
    }

    pub unsafe fn dispatch(&mut self, desc: DispatchDescription) -> Result<(), Error> {
        let error = unsafe {
            fidelityfx_sys::Fsr3ContextDispatchUpscale(self.context.as_mut(), &desc.into())
        };
        if error != fidelityfx_sys::FFX_OK {
            return Err(Error::Fsr(FsrError::from_error_code(error)));
        }
        Ok(())
    }

    pub unsafe fn destroy(&mut self) -> Result<(), Error> {
        let error = unsafe { fidelityfx_sys::Fsr3ContextDestroy(self.context.as_mut()) };
        if error != fidelityfx_sys::FFX_OK {
            return Err(Error::Fsr(FsrError::from_error_code(error)));
        }
        Ok(())
    }
}