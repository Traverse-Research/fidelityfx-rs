#include "ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b.h"
#include "ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53.h"

typedef union ffx_sssr_classify_tiles_pass_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_classify_tiles_pass_PermutationKey;

typedef struct ffx_sssr_classify_tiles_pass_PermutationInfo {
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
} ffx_sssr_classify_tiles_pass_PermutationInfo;

static const uint32_t g_ffx_sssr_classify_tiles_pass_IndirectionTable[] = {
    0,
    1,
};

static const ffx_sssr_classify_tiles_pass_PermutationInfo g_ffx_sssr_classify_tiles_pass_PermutationInfo[] = {
    { g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_size, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_data, 1, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_CBVResourceSpaces, 5, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_TextureSRVResourceSpaces, 2, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_BufferUAVResourceSpaces, 1, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_7b5dde9281a89a7cc5ea687c9504531b_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_size, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_data, 1, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_CBVResourceSpaces, 5, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_TextureSRVResourceSpaces, 2, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_BufferUAVResourceSpaces, 1, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_2229776de71070c7c96a4d6d1974bd53_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

