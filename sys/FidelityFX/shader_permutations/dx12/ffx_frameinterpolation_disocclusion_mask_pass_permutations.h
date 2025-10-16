#include "ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9.h"
#include "ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80.h"

typedef union ffx_frameinterpolation_disocclusion_mask_pass_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_disocclusion_mask_pass_PermutationKey;

typedef struct ffx_frameinterpolation_disocclusion_mask_pass_PermutationInfo {
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
} ffx_frameinterpolation_disocclusion_mask_pass_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_disocclusion_mask_pass_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_frameinterpolation_disocclusion_mask_pass_PermutationInfo g_ffx_frameinterpolation_disocclusion_mask_pass_PermutationInfo[] = {
    { g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_size, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_data, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_CBVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_CBVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_CBVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_CBVResourceSpaces, 7, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_TextureSRVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_TextureSRVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_TextureSRVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_TextureUAVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_TextureUAVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_TextureUAVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_SamplerResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_SamplerResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_SamplerResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_5744407c26f20a821595d1ebb13f92b9_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_size, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_data, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_CBVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_CBVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_CBVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_CBVResourceSpaces, 7, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_TextureSRVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_TextureSRVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_TextureSRVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_TextureUAVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_TextureUAVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_TextureUAVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_SamplerResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_SamplerResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_SamplerResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_5e40f3749fe0bcaa5ff25e6e973c7f80_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

