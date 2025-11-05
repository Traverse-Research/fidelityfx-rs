//! Defines a slightly-higher-level error code

use core::fmt;
use std::error; // Becomes core in 1.81

use super::ReturnCodes;

/// Wrapper around `ffxReturnCode_t` that delegates formatting to the defined names by [`FfxApiReturnCodes`][ReturnCodes].
#[repr(transparent)]
pub struct ReturnCode(pub ReturnCodes);

impl ReturnCode {
    pub fn is_ok(self) -> bool {
        self.0 == ReturnCodes::OK
    }
}

impl fmt::Debug for ReturnCode {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self.0 {
            ReturnCodes::OK => "OK",
            ReturnCodes::ERROR => "ERROR",
            ReturnCodes::ERROR_UNKNOWN_DESCTYPE => "ERROR_UNKNOWN_DESCTYPE",
            ReturnCodes::ERROR_RUNTIME_ERROR => "ERROR_RUNTIME_ERROR",
            ReturnCodes::NO_PROVIDER => "NO_PROVIDER",
            ReturnCodes::ERROR_MEMORY => "ERROR_MEMORY",
            ReturnCodes::ERROR_PARAMETER => "ERROR_PARAMETER",
            x => return write!(f, "Unknown error code {x:?}"),
        })
    }
}

impl fmt::Display for ReturnCode {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self.0 {
            ReturnCodes::OK => "The operation was successful.",
            ReturnCodes::ERROR => "An error occurred that is not further specified.",
            ReturnCodes::ERROR_UNKNOWN_DESCTYPE => "The structure type given was not recognized for the function or context with which it was used. This is likely a programming error.",
            ReturnCodes::ERROR_RUNTIME_ERROR => "The underlying runtime (e.g. D3D12, Vulkan) or effect returned an error code.",
            ReturnCodes::NO_PROVIDER => "No provider was found for the given structure type. This is likely a programming error.",
            ReturnCodes::ERROR_MEMORY => "A memory allocation failed.",
            ReturnCodes::ERROR_PARAMETER => "A parameter was invalid, e.g. a null pointer, empty resource or out-of-bounds enum value.",
            x => return write!(f, "Unknown error code {x:?}"),
        })
    }
}

impl error::Error for ReturnCode {}

impl ReturnCode {
    /// Returns [`Err`] for all variants but [`ReturnCodes::OK`], despite implementing
    /// [`error::Error`] for all of [`ReturnCode`] (which merely wraps a newtype integer).
    pub fn result(self) -> Result<(), Self> {
        match self {
            Self(ReturnCodes::OK) => Ok(()),
            x => Err(x),
        }
    }
}
