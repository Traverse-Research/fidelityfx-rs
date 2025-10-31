#![allow(
    non_upper_case_globals,
    non_camel_case_types,
    non_snake_case,
    clippy::missing_safety_doc
)]

include!("bindings.rs");

pub mod upscale {
    use super::*;

    include!("upscale_bindings.rs");
}
