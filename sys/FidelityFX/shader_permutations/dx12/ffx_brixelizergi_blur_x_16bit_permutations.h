#include "ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2.h"
#include "ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec.h"
#include "ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e.h"
#include "ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df.h"

typedef union ffx_brixelizergi_blur_x_16bit_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_blur_x_16bit_PermutationKey;

typedef struct ffx_brixelizergi_blur_x_16bit_PermutationInfo {
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
} ffx_brixelizergi_blur_x_16bit_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_blur_x_16bit_IndirectionTable[] = {
    2,
    1,
    0,
    3,
    2,
    1,
    0,
    3,
};

static const ffx_brixelizergi_blur_x_16bit_PermutationInfo g_ffx_brixelizergi_blur_x_16bit_PermutationInfo[] = {
    { g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_size, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_data, 1, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_CBVResourceNames, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_CBVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_CBVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_TextureSRVResourceNames, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_TextureUAVResourceNames, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_172acc5eb815667a9c0861292af4c7d2_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_size, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_data, 1, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_CBVResourceNames, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_CBVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_CBVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_TextureSRVResourceNames, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_TextureUAVResourceNames, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_325af3ead0734798178ebb53d34d31ec_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_size, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_data, 1, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_CBVResourceNames, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_CBVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_CBVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_TextureSRVResourceNames, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_TextureUAVResourceNames, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_030724d05bf5e424f6d854191253f71e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_size, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_data, 1, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_CBVResourceNames, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_CBVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_CBVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_TextureSRVResourceNames, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_TextureUAVResourceNames, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_832f2dfb3c7475c0302c0333b5f8f5df_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

