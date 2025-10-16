# Raw FFI bindings for FidelityFX

[![Actions Status](https://github.com/Traverse-Research/fidelityfx-rs/actions/workflows/ci.yml/badge.svg)](https://github.com/Traverse-Research/fidelityfx-rs/actions)
[![Latest version](https://img.shields.io/crates/v/fidelityfx-sys.svg?logo=rust)](https://crates.io/crates/fidelityfx-sys)
[![Documentation](https://docs.rs/fidelityfx-sys/badge.svg)](https://docs.rs/fidelityfx-sys)
[![MSRV](https://img.shields.io/badge/rustc-1.74.0+-ab6000.svg)](https://blog.rust-lang.org/2023/11/16/Rust-1.74.0.html)
[![Lines of code](https://tokei.rs/b1/github/Traverse-Research/fidelityfx-rs)](https://github.com/Traverse-Research/fidelityfx-rs)
![MIT](https://img.shields.io/badge/license-MIT-blue.svg)
[![Contributor Covenant](https://img.shields.io/badge/contributor%20covenant-v1.4%20adopted-ff69b4.svg)](./CODE_OF_CONDUCT.md)

[![Banner](banner.png)](https://traverseresearch.nl)

[AMD's FidelityFX SDK] in Rust.

Compiles some components from [AMD's FidelityFX SDK], and provides raw FFI bindings into the backends and those components.

[AMD's FidelityFX SDK]: https://github.com/GPUOpen-LibrariesAndSDKs/FidelityFX-SDK

## Usage

Add this to your Cargo.toml:

```toml
[dependencies]
fidelityfx-sys = "0.1.0"
```
