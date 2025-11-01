//! Defines a slightly-higher-level error code

use core::fmt;
use std::error; // Becomes core in 1.81

use super::ApiReturnCodes;

/// Wrapper around `ffxReturnCode_t` that delegates formatting to the defined names by [`FfxApiReturnCodes`][ApiReturnCodes].
#[repr(transparent)]
pub struct ReturnCode(pub ApiReturnCodes);

impl fmt::Debug for ReturnCode {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self.0 {
            ApiReturnCodes::OK => "OK",
            ApiReturnCodes::ERROR => "ERROR",
            ApiReturnCodes::ERROR_UNKNOWN_DESCTYPE => "ERROR_UNKNOWN_DESCTYPE",
            ApiReturnCodes::ERROR_RUNTIME_ERROR => "ERROR_RUNTIME_ERROR",
            ApiReturnCodes::NO_PROVIDER => "NO_PROVIDER",
            ApiReturnCodes::ERROR_MEMORY => "ERROR_MEMORY",
            ApiReturnCodes::ERROR_PARAMETER => "ERROR_PARAMETER",
            x => return write!(f, "Unknown error code {x:?}"),
        })
    }
}

impl fmt::Display for ReturnCode {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self.0 {
            ApiReturnCodes::OK => "The operation was successful.",
            ApiReturnCodes::ERROR => "An error occurred that is not further specified.",
            ApiReturnCodes::ERROR_UNKNOWN_DESCTYPE => "The structure type given was not recognized for the function or context with which it was used. This is likely a programming error.",
            ApiReturnCodes::ERROR_RUNTIME_ERROR => "The underlying runtime (e.g. D3D12, Vulkan) or effect returned an error code.",
            ApiReturnCodes::NO_PROVIDER => "No provider was found for the given structure type. This is likely a programming error.",
            ApiReturnCodes::ERROR_MEMORY => "A memory allocation failed.",
            ApiReturnCodes::ERROR_PARAMETER => "A parameter was invalid, e.g. a null pointer, empty resource or out-of-bounds enum value.",
            x => return write!(f, "Unknown error code {x:?}"),
        })
    }
}

impl error::Error for ReturnCode {}
