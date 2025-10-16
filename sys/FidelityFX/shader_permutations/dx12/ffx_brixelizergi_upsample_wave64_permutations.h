#include "ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a.h"
#include "ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593.h"

typedef union ffx_brixelizergi_upsample_wave64_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_upsample_wave64_PermutationKey;

typedef struct ffx_brixelizergi_upsample_wave64_PermutationInfo {
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
} ffx_brixelizergi_upsample_wave64_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_upsample_wave64_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_brixelizergi_upsample_wave64_PermutationInfo g_ffx_brixelizergi_upsample_wave64_PermutationInfo[] = {
    { g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_size, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_data, 2, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_CBVResourceNames, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_CBVResourceBindings, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_CBVResourceCounts, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_CBVResourceSpaces, 6, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_TextureSRVResourceNames, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_TextureSRVResourceBindings, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_TextureSRVResourceCounts, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_TextureUAVResourceNames, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_TextureUAVResourceBindings, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_TextureUAVResourceCounts, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_SamplerResourceNames, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_SamplerResourceBindings, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_SamplerResourceCounts, g_ffx_brixelizergi_upsample_wave64_25c015d4f89de94466c4830edb2b1f1a_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_size, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_data, 2, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_CBVResourceNames, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_CBVResourceBindings, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_CBVResourceCounts, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_CBVResourceSpaces, 6, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_TextureSRVResourceNames, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_TextureSRVResourceBindings, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_TextureSRVResourceCounts, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_TextureUAVResourceNames, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_TextureUAVResourceBindings, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_TextureUAVResourceCounts, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_SamplerResourceNames, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_SamplerResourceBindings, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_SamplerResourceCounts, g_ffx_brixelizergi_upsample_wave64_134c3746ca7aee861672f995cad2a593_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

