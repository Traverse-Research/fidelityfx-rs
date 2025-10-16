#include "ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329.h"
#include "ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2.h"

typedef union ffx_brixelizergi_upsample_16bit_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_upsample_16bit_PermutationKey;

typedef struct ffx_brixelizergi_upsample_16bit_PermutationInfo {
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
} ffx_brixelizergi_upsample_16bit_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_upsample_16bit_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_brixelizergi_upsample_16bit_PermutationInfo g_ffx_brixelizergi_upsample_16bit_PermutationInfo[] = {
    { g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_size, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_data, 2, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_CBVResourceNames, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_CBVResourceBindings, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_CBVResourceCounts, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_CBVResourceSpaces, 6, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_TextureSRVResourceNames, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_TextureSRVResourceBindings, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_TextureSRVResourceCounts, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_TextureUAVResourceNames, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_TextureUAVResourceBindings, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_TextureUAVResourceCounts, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_SamplerResourceNames, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_SamplerResourceBindings, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_SamplerResourceCounts, g_ffx_brixelizergi_upsample_16bit_735240a02b14b59c7b733b2a2ea3f329_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_size, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_data, 2, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_CBVResourceNames, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_CBVResourceBindings, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_CBVResourceCounts, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_CBVResourceSpaces, 6, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_TextureSRVResourceNames, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_TextureSRVResourceBindings, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_TextureSRVResourceCounts, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_TextureUAVResourceNames, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_TextureUAVResourceBindings, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_TextureUAVResourceCounts, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_SamplerResourceNames, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_SamplerResourceBindings, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_SamplerResourceCounts, g_ffx_brixelizergi_upsample_16bit_f7f9f5e2db72887e52fb7177b8f6cfb2_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

