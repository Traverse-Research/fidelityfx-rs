pub mod backends;
pub mod interface;

pub mod components;

pub use fidelityfx_sys::Device;
pub use fidelityfx_sys::Fsr3InitializationFlagBits;
pub use fidelityfx_sys::ResourceFlags;
pub use fidelityfx_sys::ResourceStates;
pub use fidelityfx_sys::ResourceUsage;
pub use fidelityfx_sys::MsgType;
pub use fidelityfx_sys::Resource;

/// A typedef representing a command list or command buffer.
pub struct CommandList(fidelityfx_sys::CommandList);

pub mod error {
    #[repr(i32)]
    #[derive(Debug)]
    pub enum FfxError {
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

    impl std::fmt::Display for FfxError {
        fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
            write!(f, "{:?}", self)
        }
    }

    impl std::error::Error for FfxError {}

    impl FfxError {
        // TODO: Replace with num_enum crate
        pub fn from_error_code(value: fidelityfx_sys::ErrorCode) -> Self {
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

    // TODO: Move to backend?
    #[derive(Debug, thiserror::Error)]
    pub enum Error {
        #[error("Failed to allocate scratch buffer")]
        ScratchBuffer(#[source] std::alloc::LayoutError),

        #[error(transparent)]
        Ffx(#[from] FfxError),
    }

    pub type Result<T, E = Error> = std::result::Result<T, E>;
}
