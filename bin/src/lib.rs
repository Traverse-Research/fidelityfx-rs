#![doc = include_str!("../README.md")]

use std::path::{Path, PathBuf};

const BIN_DIR: &str = concat!(
    env!("CARGO_MANIFEST_DIR"),
    "/../sys/FidelityFX-SDK/Kits/FidelityFX/signedbin/"
);

/// Feature variant.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Feature {
    Loader,
    Denoiser,
    FrameGeneration,
    RadianceCache,
    Upscaler,
}

impl Feature {
    pub fn name(self) -> &'static str {
        match self {
            Self::Loader => "loader",
            Self::Denoiser => "denoiser",
            Self::FrameGeneration => "framegeneration",
            Self::RadianceCache => "radiancecache",
            Self::Upscaler => "upscaler",
        }
    }
}

/// Target platform for libraries.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Platform {
    Windows,
}

impl Platform {
    /// Returns the platform matching the Cargo `CARGO_CFG_TARGET_OS` environment variable.
    ///
    /// Cargo sets this for build scripts. Panics outside that context or on
    /// unsupported targets.
    pub fn for_current_target() -> Self {
        let os = std::env::var("CARGO_CFG_TARGET_OS")
            .expect("CARGO_CFG_TARGET_OS not set (are you in a build script?)");
        match os.as_str() {
            "windows" => Self::Windows,
            _ => panic!("unsupported target OS {os} — only Windows has FidelityFX binaries"),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RenderApi {
    DirectX12,
}

impl RenderApi {
    pub fn name(self) -> &'static str {
        match self {
            Self::DirectX12 => "dx12",
        }
    }
}

/// Returns the path to a FidelityFX shared library for the given feature, platform and rendering API.
pub fn path(feature: Feature, platform: Platform, render_api: RenderApi) -> PathBuf {
    let bin_dir = Path::new(BIN_DIR);

    assert!(
        bin_dir.exists(),
        "Cannot find `{bin_dir:?}`. You might be trying to reference `fidelityfx-bin` without it being a git/path dependency!"
    );

    assert_eq!(platform, Platform::Windows);

    let filename = format!(
        "amd_fidelityfx_{}_{}.dll",
        feature.name(),
        render_api.name()
    );

    bin_dir.join(filename)
}
