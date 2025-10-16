#include "ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf.h"
#include "ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139.h"

typedef union ffx_cacao_upscale_bilateral_5x5_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_CACAO_OPTION_APPLY_SMART : 1;
    };
    uint32_t index;
} ffx_cacao_upscale_bilateral_5x5_pass_wave64_PermutationKey;

typedef struct ffx_cacao_upscale_bilateral_5x5_pass_wave64_PermutationInfo {
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
} ffx_cacao_upscale_bilateral_5x5_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_IndirectionTable[] = {
    0,
    1,
};

static const ffx_cacao_upscale_bilateral_5x5_pass_wave64_PermutationInfo g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_PermutationInfo[] = {
    { g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_size, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_data, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_CBVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_CBVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_CBVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_CBVResourceSpaces, 3, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_TextureSRVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_TextureSRVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_TextureSRVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_TextureSRVResourceSpaces, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_TextureUAVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_TextureUAVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_TextureUAVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_SamplerResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_SamplerResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_SamplerResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_d882ffd8bbbd8a39f9d349c5d9115adf_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_size, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_data, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_CBVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_CBVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_CBVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_CBVResourceSpaces, 3, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_TextureSRVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_TextureSRVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_TextureSRVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_TextureSRVResourceSpaces, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_TextureUAVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_TextureUAVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_TextureUAVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_SamplerResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_SamplerResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_SamplerResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_f853b62af87e189ccd67789800d73139_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

