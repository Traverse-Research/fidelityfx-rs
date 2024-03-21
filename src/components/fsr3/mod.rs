//! Unsafe Rust bindings for [FidelityFX SDK](https://github.com/GPUOpen-Effects/FidelityFX-FSR2)
//! Main skeleton taken from [FSR2 Rust Bindings from Embark Studios](https://github.com/EmbarkStudios/fsr-rs)
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

use crate::backends::{CommandList, Device};
use crate::error::{Error, FfxError, Result};
pub use crate::interface::Interface;

// pub use fidelityfx_sys::Device;
pub use fidelityfx_sys::MsgType;
pub use fidelityfx_sys::Resource;

/// A structure encapsulating the FidelityFX Super Resolution 2 context.
pub struct Context {
    pub(crate) context: Box<fidelityfx_sys::Fsr3Context>,
    _interface: Interface,
}

pub struct ContextDescription<'a> {
    pub interface: Interface,
    pub flags: fidelityfx_sys::Fsr3InitializationFlagBits,
    pub max_render_size: [u32; 2],
    pub display_size: [u32; 2],
    // pub device: &'a Device,
    pub device: Device<'a>,
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
            // TODO(YIGIT): This requires a check
            upscaleOutputSize: fidelityfx_sys::Dimensions2D {
                width: val.display_size[0],
                height: val.display_size[1],
            },
            backendInterfaceSharedResources: val.interface.interface,
            backendInterfaceUpscaling: val.interface.interface,
            backendInterfaceFrameInterpolation: val.interface.interface,
            // TODO(YIGIT): Somehow need to decide what to use here
            // 0 would be unknown, fidelityfx_sys::FFX_SURFACE_FORMAT_R32G32B32A32_FLOAT
            backBufferFormat: 0,
        }
    }
}

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

pub struct DispatchDescription<'a> {
    pub cmd_list: CommandList<'a>,
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

    pub upscale_output: Resource,
}

impl<'a> DispatchDescription<'a> {
    pub fn new(
        cmd_list: CommandList<'a>,
        color: Resource,
        depth: Resource,
        motion_vectors: Resource,
        output: Resource,
        frame_time_delta: f32,
        render_size: [u32; 2],
        upscale_output: Resource,
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
            upscale_output,
        }
    }

    pub fn camera(mut self, near: f32, far: f32, fov_y: f32) -> Self {
        self.camera_near = near;
        self.camera_far = far;
        self.camera_fov_y = fov_y;
        self
    }

    pub fn pre_exposure(mut self, value: f32) -> Self {
        self.pre_exposure = value;
        self
    }

    pub fn view_space_to_meters_factor(mut self, value: f32) -> Self {
        self.view_space_to_meters_factor = value;
        self
    }

    pub fn exposure(mut self, resource: Resource) -> Self {
        self.exposure = Some(resource);
        self
    }

    pub fn reactive(mut self, resource: Resource) -> Self {
        self.reactive = Some(resource);
        self
    }

    pub fn motion_vector_scale(mut self, value: [f32; 2]) -> Self {
        self.motion_vector_scale = value;
        self
    }

    pub fn jitter_offset(mut self, value: [f32; 2]) -> Self {
        self.jitter_offset = value;
        self
    }

    pub fn sharpness(mut self, sharpness: f32) -> Self {
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
    ) -> Self {
        self.color_opaque_only = Some(color_opaque_only);
        self.transparency_and_composition = Some(transparency_and_composition);
        self.enable_auto_reactive = true;
        self.auto_reactive_max = auto_reactive_max;
        self.auto_tc_scale = auto_tc_scale;
        self.auto_reactive_scale = auto_reactive_scale;
        self.auto_tc_threshold = auto_tc_threshold;
        self
    }

    pub fn reset(mut self, value: bool) -> Self {
        self.reset = value;
        self
    }
}

impl From<DispatchDescription<'_>> for fidelityfx_sys::Fsr3DispatchUpscaleDescription {
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
            upscaleOutput: val.upscale_output,
        }
    }
}

impl Context {
    pub unsafe fn new(desc: ContextDescription<'_>) -> Result<Self> {
        let mut context = Box::<fidelityfx_sys::Fsr3Context>::default();
        let error =
            unsafe { fidelityfx_sys::Fsr3ContextCreate(context.as_mut(), &mut (&desc).into()) };
        if error != fidelityfx_sys::FFX_OK {
            return Err(FfxError::from_error_code(error).into());
        }
        // TODO: ContextDescription contains a borrow of Device. Is that also held internally by the created context?
        Ok(Context {
            context,
            _interface: desc.interface,
        })
    }

    pub unsafe fn dispatch(&mut self, desc: DispatchDescription) -> Result<()> {
        let error = unsafe {
            fidelityfx_sys::Fsr3ContextDispatchUpscale(self.context.as_mut(), &desc.into())
        };
        if error != fidelityfx_sys::FFX_OK {
            return Err(FfxError::from_error_code(error).into());
        }
        Ok(())
    }

    // TODO This should be in Drop
    pub unsafe fn destroy(&mut self) -> Result<()> {
        let error = unsafe { fidelityfx_sys::Fsr3ContextDestroy(self.context.as_mut()) };
        if error != fidelityfx_sys::FFX_OK {
            return Err(FfxError::from_error_code(error).into());
        }
        Ok(())
    }
}
