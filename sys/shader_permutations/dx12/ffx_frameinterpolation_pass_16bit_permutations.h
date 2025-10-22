#include "ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1.h"

typedef union ffx_frameinterpolation_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_pass_16bit_PermutationKey;

typedef struct ffx_frameinterpolation_pass_16bit_PermutationInfo {
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
} ffx_frameinterpolation_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_pass_16bit_IndirectionTable[] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

static const ffx_frameinterpolation_pass_16bit_PermutationInfo g_ffx_frameinterpolation_pass_16bit_PermutationInfo[] = {
    { g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_size, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_data, 1, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_CBVResourceNames, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_CBVResourceBindings, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_CBVResourceCounts, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_CBVResourceSpaces, 8, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_TextureSRVResourceNames, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_TextureSRVResourceBindings, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_TextureSRVResourceCounts, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_TextureUAVResourceNames, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_TextureUAVResourceBindings, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_TextureUAVResourceCounts, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_TextureUAVResourceSpaces, 1, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_BufferSRVResourceNames, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_BufferSRVResourceBindings, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_BufferSRVResourceCounts, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_BufferSRVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_SamplerResourceNames, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_SamplerResourceBindings, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_SamplerResourceCounts, g_ffx_frameinterpolation_pass_16bit_ba5a331d3e475b79a437031903fbdaa1_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

