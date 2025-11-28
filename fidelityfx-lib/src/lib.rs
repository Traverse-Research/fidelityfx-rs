use std::path::{Path, PathBuf};

pub fn dll_path_vk() -> PathBuf {
    Path::new(env!("CARGO_MANIFEST_DIR")).join("PrebuiltSignedDLL/amd_fidelityfx_vk.dll")
}
pub fn dll_path_dx12() -> PathBuf {
    Path::new(env!("CARGO_MANIFEST_DIR")).join("PrebuiltSignedDLL/amd_fidelityfx_dx12.dll")
}
