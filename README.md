# rust-template title

[![Actions Status](https://github.com/Traverse-Research/rust-template/actions/workflows/ci.yml/badge.svg)](https://github.com/Traverse-Research/rust-template/actions)
[![Latest version](https://img.shields.io/crates/v/rust-template.svg?logo=rust)](https://crates.io/crates/rust-template)
[![Documentation](https://docs.rs/rust-template/badge.svg)](https://docs.rs/rust-template)
[![MSRV](https://img.shields.io/badge/rustc-1.74.0+-ab6000.svg)](https://blog.rust-lang.org/2023/11/16/Rust-1.74.0.html)
[![Lines of code](https://tokei.rs/b1/github/Traverse-Research/rust-template)](https://github.com/Traverse-Research/rust-template)
![MIT](https://img.shields.io/badge/license-MIT-blue.svg)
[![Contributor Covenant](https://img.shields.io/badge/contributor%20covenant-v1.4%20adopted-ff69b4.svg)](./CODE_OF_CONDUCT.md)

[![Banner](banner.png)](https://traverseresearch.nl)

TODO: Write a description

## Usage

Add this to your Cargo.toml:

```toml
[dependencies]
rust-template = "0.0.0"
```

```rust
// A code example
```

## Template usage

> [!WARNING]
> Delete this section after inheriting from the template. It only explains how to utilize and configure this template effectively.

### Publishing strategy

The [publish workflow] relies on crates.io's [Trusted Publishing] to publish releases from GitHub Actions as soon as a tag is pushed.  To set this up, ensure your repository has a `release` environment.  After publishing an initial crate version to crates.io, add the repository as a Trusted Publisher using the `publish.yaml` filename and `release` environment for your GitHub repository.

[publish workflow]: ./.github/workflows/publish.yaml
[Trusted Publishing]: https://crates.io/docs/trusted-publishing
