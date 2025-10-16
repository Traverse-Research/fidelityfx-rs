#include "ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029.h"
#include "ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6.h"

typedef union ffx_cacao_upscale_bilateral_5x5_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_CACAO_OPTION_APPLY_SMART : 1;
    };
    uint32_t index;
} ffx_cacao_upscale_bilateral_5x5_pass_16bit_PermutationKey;

typedef struct ffx_cacao_upscale_bilateral_5x5_pass_16bit_PermutationInfo {
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
} ffx_cacao_upscale_bilateral_5x5_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_IndirectionTable[] = {
    0,
    1,
};

static const ffx_cacao_upscale_bilateral_5x5_pass_16bit_PermutationInfo g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_PermutationInfo[] = {
    { g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_size, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_data, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_CBVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_CBVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_CBVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_CBVResourceSpaces, 3, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_TextureSRVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_TextureSRVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_TextureSRVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_TextureSRVResourceSpaces, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_TextureUAVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_TextureUAVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_TextureUAVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_SamplerResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_SamplerResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_SamplerResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_09707ee7061391bdc8a423d7a7b1f029_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_size, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_data, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_CBVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_CBVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_CBVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_CBVResourceSpaces, 3, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_TextureSRVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_TextureSRVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_TextureSRVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_TextureSRVResourceSpaces, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_TextureUAVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_TextureUAVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_TextureUAVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_SamplerResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_SamplerResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_SamplerResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_16bit_e738801ee258821c7e6c10b661d6c9f6_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

