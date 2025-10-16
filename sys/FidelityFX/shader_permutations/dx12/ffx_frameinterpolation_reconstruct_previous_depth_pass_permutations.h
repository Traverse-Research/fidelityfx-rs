#include "ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba.h"
#include "ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60.h"

typedef union ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationKey;

typedef struct ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationInfo {
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
} ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_reconstruct_previous_depth_pass_IndirectionTable[] = {
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
};

static const ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationInfo g_ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationInfo[] = {
    { g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_size, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_data, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_CBVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_CBVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_CBVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_CBVResourceSpaces, 3, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_TextureSRVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_TextureSRVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_TextureSRVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_TextureUAVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_TextureUAVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_TextureUAVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_SamplerResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_SamplerResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_SamplerResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_b6ab72d3a736f582b7490afd4c4e1fba_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_size, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_data, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_CBVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_CBVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_CBVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_CBVResourceSpaces, 3, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_TextureSRVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_TextureSRVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_TextureSRVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_TextureUAVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_TextureUAVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_TextureUAVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_SamplerResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_SamplerResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_SamplerResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_bc94c7d6cc41120d7fe545b6068e0d60_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

