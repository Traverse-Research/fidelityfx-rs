//! Defines a slightly-higher-level error code

use core::fmt;
use std::error; // Becomes core in 1.81

use crate::ErrorCodes;

/// Wrapper around `FfxErrorCode` that delegates formatting to the defined names by [`FfxErrorCodes`][ErrorCodes].
#[repr(transparent)]
pub struct ErrorCode(pub ErrorCodes);

impl fmt::Debug for ErrorCode {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self.0 {
            ErrorCodes::OK => "OK",
            ErrorCodes::ERROR_INVALID_POINTER => "ERROR_INVALID_POINTER",
            ErrorCodes::ERROR_INVALID_ALIGNMENT => "ERROR_INVALID_ALIGNMENT",
            ErrorCodes::ERROR_INVALID_SIZE => "ERROR_INVALID_SIZE",
            ErrorCodes::EOF => "EOF",
            ErrorCodes::ERROR_INVALID_PATH => "ERROR_INVALID_PATH",
            ErrorCodes::ERROR_EOF => "ERROR_EOF",
            ErrorCodes::ERROR_MALFORMED_DATA => "ERROR_MALFORMED_DATA",
            ErrorCodes::ERROR_OUT_OF_MEMORY => "ERROR_OUT_OF_MEMORY",
            ErrorCodes::ERROR_INCOMPLETE_INTERFACE => "ERROR_INCOMPLETE_INTERFACE",
            ErrorCodes::ERROR_INVALID_ENUM => "ERROR_INVALID_ENUM",
            ErrorCodes::ERROR_INVALID_ARGUMENT => "ERROR_INVALID_ARGUMENT",
            ErrorCodes::ERROR_OUT_OF_RANGE => "ERROR_OUT_OF_RANGE",
            ErrorCodes::ERROR_NULL_DEVICE => "ERROR_NULL_DEVICE",
            ErrorCodes::ERROR_BACKEND_API_ERROR => "ERROR_BACKEND_API_ERROR",
            ErrorCodes::ERROR_INSUFFICIENT_MEMORY => "ERROR_INSUFFICIENT_MEMORY",
            x => return write!(f, "Unknown error code {x:?}"),
        })
    }
}

impl fmt::Display for ErrorCode {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.write_str(match self.0 {
            ErrorCodes::OK => "The operation completed successfully.",
            ErrorCodes::ERROR_INVALID_POINTER => "The operation failed due to an invalid pointer.",
            ErrorCodes::ERROR_INVALID_ALIGNMENT => {
                "The operation failed due to an invalid alignment."
            }
            ErrorCodes::ERROR_INVALID_SIZE => "The operation failed due to an invalid size.",
            ErrorCodes::EOF => "The end of the file was encountered.",
            ErrorCodes::ERROR_INVALID_PATH => {
                "The operation failed because the specified path was invalid."
            }
            ErrorCodes::ERROR_EOF => "The operation failed because end of file was reached.",
            ErrorCodes::ERROR_MALFORMED_DATA => {
                "The operation failed because of some malformed data."
            }
            ErrorCodes::ERROR_OUT_OF_MEMORY => "The operation failed because it ran out memory.",
            ErrorCodes::ERROR_INCOMPLETE_INTERFACE => {
                "The operation failed because the interface was not fully configured."
            }
            ErrorCodes::ERROR_INVALID_ENUM => {
                "The operation failed because of an invalid enumeration value."
            }
            ErrorCodes::ERROR_INVALID_ARGUMENT => {
                "The operation failed because an argument was invalid."
            }
            ErrorCodes::ERROR_OUT_OF_RANGE => {
                "The operation failed because a value was out of range."
            }
            ErrorCodes::ERROR_NULL_DEVICE => "The operation failed because a device was null.",
            ErrorCodes::ERROR_BACKEND_API_ERROR => {
                "The operation failed because the backend API returned an error code."
            }
            ErrorCodes::ERROR_INSUFFICIENT_MEMORY => {
                "The operation failed because there was not enough memory."
            }
            x => return write!(f, "Unknown error code {x:?}"),
        })
    }
}

impl error::Error for ErrorCode {}
