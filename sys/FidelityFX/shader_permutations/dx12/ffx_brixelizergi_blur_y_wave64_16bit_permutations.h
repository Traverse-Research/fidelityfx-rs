#include "ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153.h"
#include "ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1.h"
#include "ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e.h"
#include "ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f.h"

typedef union ffx_brixelizergi_blur_y_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_blur_y_wave64_16bit_PermutationKey;

typedef struct ffx_brixelizergi_blur_y_wave64_16bit_PermutationInfo {
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
} ffx_brixelizergi_blur_y_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_blur_y_wave64_16bit_IndirectionTable[] = {
    1,
    2,
    3,
    0,
    1,
    2,
    3,
    0,
};

static const ffx_brixelizergi_blur_y_wave64_16bit_PermutationInfo g_ffx_brixelizergi_blur_y_wave64_16bit_PermutationInfo[] = {
    { g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_size, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_data, 1, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_CBVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_CBVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_CBVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_TextureSRVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_TextureUAVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_6fae6a37f305771e2dc63b3fe488e153_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_size, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_data, 1, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_CBVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_CBVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_CBVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_TextureSRVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_TextureUAVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_d0cd8b7b636a8cc2461af9afdb239bd1_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_size, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_data, 1, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_CBVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_CBVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_CBVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_TextureSRVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_TextureUAVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_16884687b6a022dde530c41bbe19ec5e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_size, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_data, 1, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_CBVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_CBVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_CBVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_TextureSRVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_TextureUAVResourceNames, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_y_wave64_16bit_f5ba013ef7130ff9d5e6488c44c1da3f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

