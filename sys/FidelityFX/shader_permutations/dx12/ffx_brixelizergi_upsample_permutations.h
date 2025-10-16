#include "ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c.h"
#include "ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3.h"

typedef union ffx_brixelizergi_upsample_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_upsample_PermutationKey;

typedef struct ffx_brixelizergi_upsample_PermutationInfo {
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
} ffx_brixelizergi_upsample_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_upsample_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_brixelizergi_upsample_PermutationInfo g_ffx_brixelizergi_upsample_PermutationInfo[] = {
    { g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_size, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_data, 2, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_CBVResourceNames, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_CBVResourceBindings, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_CBVResourceCounts, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_CBVResourceSpaces, 6, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_TextureSRVResourceNames, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_TextureSRVResourceBindings, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_TextureSRVResourceCounts, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_TextureUAVResourceNames, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_TextureUAVResourceBindings, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_TextureUAVResourceCounts, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_SamplerResourceNames, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_SamplerResourceBindings, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_SamplerResourceCounts, g_ffx_brixelizergi_upsample_467c9c0c6e18e2c8a59a7f3d722aa05c_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_size, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_data, 2, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_CBVResourceNames, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_CBVResourceBindings, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_CBVResourceCounts, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_CBVResourceSpaces, 6, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_TextureSRVResourceNames, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_TextureSRVResourceBindings, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_TextureSRVResourceCounts, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_TextureUAVResourceNames, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_TextureUAVResourceBindings, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_TextureUAVResourceCounts, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_SamplerResourceNames, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_SamplerResourceBindings, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_SamplerResourceCounts, g_ffx_brixelizergi_upsample_a3bf18a819959dbf817f7f3247e58da3_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

