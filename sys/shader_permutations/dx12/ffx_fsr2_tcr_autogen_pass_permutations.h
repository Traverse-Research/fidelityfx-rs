#include "ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae.h"
#include "ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed.h"

typedef union ffx_fsr2_tcr_autogen_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_tcr_autogen_pass_PermutationKey;

typedef struct ffx_fsr2_tcr_autogen_pass_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numConstantBuffers;
    const char**    constantBufferNames;
    const uint32_t* constantBufferBindings;
    const uint32_t* constantBufferCounts;
    const uint32_t* constantBufferSpaces;

    const uint32_t  numSRVTextures;
    const char**    srvTextureNames;
    const uint32_t* srvTextureBindings;
    const uint32_t* srvTextureCounts;
    const uint32_t* srvTextureSpaces;

    const uint32_t  numUAVTextures;
    const char**    uavTextureNames;
    const uint32_t* uavTextureBindings;
    const uint32_t* uavTextureCounts;
    const uint32_t* uavTextureSpaces;

    const uint32_t  numSRVBuffers;
    const char**    srvBufferNames;
    const uint32_t* srvBufferBindings;
    const uint32_t* srvBufferCounts;
    const uint32_t* srvBufferSpaces;

    const uint32_t  numUAVBuffers;
    const char**    uavBufferNames;
    const uint32_t* uavBufferBindings;
    const uint32_t* uavBufferCounts;
    const uint32_t* uavBufferSpaces;

    const uint32_t  numSamplers;
    const char**    samplerNames;
    const uint32_t* samplerBindings;
    const uint32_t* samplerCounts;
    const uint32_t* samplerSpaces;

    const uint32_t  numRTAccelerationStructures;
    const char**    rtAccelerationStructureNames;
    const uint32_t* rtAccelerationStructureBindings;
    const uint32_t* rtAccelerationStructureCounts;
    const uint32_t* rtAccelerationStructureSpaces;
} ffx_fsr2_tcr_autogen_pass_PermutationInfo;

static const uint32_t g_ffx_fsr2_tcr_autogen_pass_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_fsr2_tcr_autogen_pass_PermutationInfo g_ffx_fsr2_tcr_autogen_pass_PermutationInfo[] = {
    { g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_size, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_data, 2, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_CBVResourceNames, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_CBVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_CBVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_CBVResourceSpaces, 7, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_TextureSRVResourceNames, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_TextureSRVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_TextureSRVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_TextureSRVResourceSpaces, 4, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_TextureUAVResourceNames, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_TextureUAVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_TextureUAVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_1ed8ce96382e8e755cb63004ea62b6ae_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_size, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_data, 2, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_CBVResourceNames, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_CBVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_CBVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_CBVResourceSpaces, 7, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_TextureSRVResourceNames, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_TextureSRVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_TextureSRVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_TextureSRVResourceSpaces, 4, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_TextureUAVResourceNames, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_TextureUAVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_TextureUAVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_57d0172a5f607d7b4fd25ebaa3172eed_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

