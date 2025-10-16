#include "ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781.h"
#include "ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46.h"

typedef union ffx_sssr_intersect_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_intersect_pass_wave64_16bit_PermutationKey;

typedef struct ffx_sssr_intersect_pass_wave64_16bit_PermutationInfo {
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
} ffx_sssr_intersect_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_sssr_intersect_pass_wave64_16bit_IndirectionTable[] = {
    0,
    1,
};

static const ffx_sssr_intersect_pass_wave64_16bit_PermutationInfo g_ffx_sssr_intersect_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_size, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_data, 1, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_CBVResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_CBVResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_CBVResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_CBVResourceSpaces, 6, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_TextureSRVResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_TextureSRVResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_TextureSRVResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_TextureSRVResourceSpaces, 1, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_TextureUAVResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_TextureUAVResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_TextureUAVResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_BufferUAVResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_BufferUAVResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_BufferUAVResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_BufferUAVResourceSpaces, 1, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_SamplerResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_SamplerResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_SamplerResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_b83b8d95aefa327211954c05b92f0781_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_size, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_data, 1, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_CBVResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_CBVResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_CBVResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_CBVResourceSpaces, 6, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_TextureSRVResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_TextureSRVResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_TextureSRVResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_TextureSRVResourceSpaces, 1, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_TextureUAVResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_TextureUAVResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_TextureUAVResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_BufferUAVResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_BufferUAVResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_BufferUAVResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_BufferUAVResourceSpaces, 1, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_SamplerResourceNames, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_SamplerResourceBindings, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_SamplerResourceCounts, g_ffx_sssr_intersect_pass_wave64_16bit_80c726ed5f5ef5d533b6f806eb6b2b46_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

