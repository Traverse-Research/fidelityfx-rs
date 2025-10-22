#include "ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3.h"
#include "ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039.h"

typedef union ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationKey;

typedef struct ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationInfo {
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
} ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationInfo g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationInfo[] = {
    { g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_size, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_data, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_CBVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_CBVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_CBVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_CBVResourceSpaces, 7, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_TextureSRVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_TextureSRVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_TextureSRVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_TextureUAVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_TextureUAVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_TextureUAVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_SamplerResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_SamplerResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_SamplerResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_77ddd039f9f68aeceb51c952640b31f3_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_size, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_data, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_CBVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_CBVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_CBVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_CBVResourceSpaces, 7, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_TextureSRVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_TextureSRVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_TextureSRVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_TextureUAVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_TextureUAVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_TextureUAVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_SamplerResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_SamplerResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_SamplerResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_5093d5795a7c3da6270b08572564b039_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

