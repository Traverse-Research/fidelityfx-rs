# Prebuilt binaries for AMD FidelityFX

This crate provides path accessors for the prebuilt FidelityFX shared libraries bundled in the FidelityFX-SDK submodule. Applications use these paths to locate and copy the DLLs at build or deploy time.

## Warning: git/path dependency only

This crate resolves the binaries via a relative path into the `sys/FidelityFX-SDK/` submodule (`CARGO_MANIFEST_DIR/../sys/FidelityFX-SDK/Kits/FidelityFX/signedbin/`). This **only works as a git or path dependency** — it cannot be published to crates.io (the binaries are tens of MiBs of proprietary AMD blobs that exceed the 10 MB crate size limit; their only alternative is downloading at build time from a public URL).
