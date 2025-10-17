#include "ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8.h"
#include "ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b.h"

typedef union ffx_fsr2_lock_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_lock_pass_PermutationKey;

typedef struct ffx_fsr2_lock_pass_PermutationInfo {
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
} ffx_fsr2_lock_pass_PermutationInfo;

static const uint32_t g_ffx_fsr2_lock_pass_IndirectionTable[] = {
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

static const ffx_fsr2_lock_pass_PermutationInfo g_ffx_fsr2_lock_pass_PermutationInfo[] = {
    { g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_size, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_data, 1, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_CBVResourceNames, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_CBVResourceBindings, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_CBVResourceCounts, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_831d19907d9e5cc89e18f5757f1555d8_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_size, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_data, 1, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_CBVResourceNames, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_CBVResourceBindings, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_CBVResourceCounts, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_4760f4bbc87e3885b29cfe1652c8a64b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

