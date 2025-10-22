#include "ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92.h"
#include "ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133.h"

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
    { g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_size, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_data, 2, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_CBVResourceNames, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_CBVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_CBVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_CBVResourceSets, 7, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_TextureSRVResourceNames, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_TextureSRVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_TextureSRVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_TextureSRVResourceSets, 4, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_TextureUAVResourceNames, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_TextureUAVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_TextureUAVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_04b2c0046400acbf12c8581bf178ce92_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_size, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_data, 2, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_CBVResourceNames, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_CBVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_CBVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_CBVResourceSets, 7, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_TextureSRVResourceNames, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_TextureSRVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_TextureSRVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_TextureSRVResourceSets, 4, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_TextureUAVResourceNames, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_TextureUAVResourceBindings, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_TextureUAVResourceCounts, g_ffx_fsr2_tcr_autogen_pass_af3972de299737c97a2d6cf61bb04133_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

