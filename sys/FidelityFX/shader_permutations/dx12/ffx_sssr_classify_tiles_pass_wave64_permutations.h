#include "ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa.h"
#include "ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab.h"

typedef union ffx_sssr_classify_tiles_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_classify_tiles_pass_wave64_PermutationKey;

typedef struct ffx_sssr_classify_tiles_pass_wave64_PermutationInfo {
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
} ffx_sssr_classify_tiles_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_sssr_classify_tiles_pass_wave64_IndirectionTable[] = {
    1,
    0,
};

static const ffx_sssr_classify_tiles_pass_wave64_PermutationInfo g_ffx_sssr_classify_tiles_pass_wave64_PermutationInfo[] = {
    { g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_size, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_data, 1, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_CBVResourceSpaces, 5, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_TextureSRVResourceSpaces, 2, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_BufferUAVResourceSpaces, 1, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_316aee3780d1b7c6f3462f5cf89a08fa_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_size, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_data, 1, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_CBVResourceSpaces, 5, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_TextureSRVResourceSpaces, 2, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_BufferUAVResourceSpaces, 1, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_68a65d8fb0514b69239b1cd5f134e2ab_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

