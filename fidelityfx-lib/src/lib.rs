use std::path::{Path, PathBuf};

pub fn dll_path_vk() -> PathBuf {
    Path::new(&std::env::var("CARGO_MANIFEST_DIR").unwrap())
        .join("PrebuiltSignedDLL/amd_fidelityfx_vk.dll")
}
pub fn dll_path_dx12() -> PathBuf {
    Path::new(&std::env::var("CARGO_MANIFEST_DIR").unwrap())
        .join("PrebuiltSignedDLL/amd_fidelityfx_dx12.dll")
}
