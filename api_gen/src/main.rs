use std::path::Path;

use heck::ToShoutySnekCase;

fn main() {
    let api_dir = Path::new("sys/FidelityFX-SDK/ffx-api/");

    generate_api_bindings(api_dir);
}

#[derive(Debug)]
struct Renamer;
impl bindgen::callbacks::ParseCallbacks for Renamer {
    fn item_name(&self, item_info: bindgen::callbacks::ItemInfo) -> Option<String> {
        // Remove ffx prefixes
        match item_info.kind {
            bindgen::callbacks::ItemKind::Module => None,
            bindgen::callbacks::ItemKind::Type => item_info
                .name
                .strip_prefix("FfxApi")
                .or_else(|| item_info.name.strip_prefix("ffxApi"))
                .or_else(|| item_info.name.strip_prefix("Ffx"))
                .or_else(|| item_info.name.strip_prefix("ffx")),
            bindgen::callbacks::ItemKind::Function => item_info
                .name
                .strip_prefix("ffxApi")
                .or_else(|| item_info.name.strip_prefix("ffx")),
            bindgen::callbacks::ItemKind::Var => item_info
                .name
                .strip_prefix("FFX_API_")
                .or_else(|| item_info.name.strip_prefix("FFX_")),
            _ => None,
        }
        .map(str::to_owned)
    }

    // Remove enum prefixes
    fn enum_variant_name(
        &self,
        enum_name: Option<&str>,
        original_variant_name: &str,
        _variant_value: bindgen::callbacks::EnumVariantValue,
    ) -> Option<String> {
        let enum_name = enum_name?;

        if enum_name.starts_with("Ffx") {
            // Exceptions
            let common_prefix = match enum_name {
                "FfxApiReturnCodes" => "FFX_API_RETURN".to_owned(),
                "FfxApiMsgType" => "FFX_API_MESSAGE_TYPE".to_owned(),
                e => e.TO_SHOUTY_SNEK_CASE(),
            };
            let variant_name = original_variant_name.strip_prefix(&common_prefix).unwrap();
            let no_prefix = variant_name.strip_prefix("_").expect(variant_name);
            // Keep the leading _ if the variant otherwise starts with a number, which is invalid
            Some(no_prefix.to_owned())
        } else {
            None
        }
    }

    fn int_macro(&self, name: &str, _value: i64) -> Option<bindgen::callbacks::IntKind> {
        if name.contains("DESC_TYPE") {
            Some(bindgen::callbacks::IntKind::Custom {
                name: "StructType_t",
                is_signed: false,
            })
        } else {
            None
        }
    }
}

fn bindgen(root_dir: &Path) -> bindgen::Builder {
    let mut bindings = bindgen::Builder::default()
        .layout_tests(false)
        .derive_default(true)
        .prepend_enum_name(false) // Not the default, but changes nothing
        .clang_arg("-xc++")
        .default_non_copy_union_style(bindgen::NonCopyUnionStyle::ManuallyDrop)
        .allowlist_recursively(false)
        .dynamic_library_name("Functions")
        .dynamic_link_require_all(true)
        .parse_callbacks(Box::new(Renamer))
        .default_enum_style(bindgen::EnumVariation::Rust {
            non_exhaustive: true,
        });

    bindings
}

fn generate_api_bindings(api_dir: &Path) {
    generate_api_root_bindings(api_dir);
}

fn generate_api_root_bindings(api_dir: &Path) {
    let wrapper = api_dir.join("include/ffx_api/ffx_api.h");
    let types = api_dir.join("include/ffx_api/ffx_api_types.h");

    let bindings = bindgen(api_dir)
        .headers([wrapper.to_string_lossy(), types.to_string_lossy()])
        .allowlist_function("ffx\\w+")
        .allowlist_type("[fF]fx\\w+")
        // Intentionally skip unused PfnFfx* functions which are only used by the internal
        // ffxFunctions loader; a Rust version of the libloading code that we already generate:
        // .allowlist_type("PfnFfx\\w+")
        .allowlist_var("FFX\\w+")
        // Hand-written to debug-print ErrorCode with defined ErrorCodes
        .blocklist_type("ffxReturnCode_t")
        .newtype_enum("FfxApiReturnCodes")
        .generate()
        .expect("Unable to generate bindings");

    let out_path = Path::new("sys/src/api");
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}
