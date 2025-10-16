#include "ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6.h"
#include "ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782.h"
#include "ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e.h"
#include "ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35.h"

typedef union ffx_fsr1_easu_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_easu_pass_PermutationKey;

typedef struct ffx_fsr1_easu_pass_PermutationInfo {
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
} ffx_fsr1_easu_pass_PermutationInfo;

static const uint32_t g_ffx_fsr1_easu_pass_IndirectionTable[] = {
    1,
    2,
    1,
    2,
    0,
    3,
    0,
    3,
};

static const ffx_fsr1_easu_pass_PermutationInfo g_ffx_fsr1_easu_pass_PermutationInfo[] = {
    { g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_size, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_data, 1, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_CBVResourceNames, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_CBVResourceBindings, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_CBVResourceCounts, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_SamplerResourceNames, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_SamplerResourceBindings, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_SamplerResourceCounts, g_ffx_fsr1_easu_pass_bbda8fce726e5e5b88bc278aebf1b2e6_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_size, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_data, 1, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_CBVResourceNames, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_CBVResourceBindings, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_CBVResourceCounts, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_SamplerResourceNames, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_SamplerResourceBindings, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_SamplerResourceCounts, g_ffx_fsr1_easu_pass_2c84a97dc70017d8aea99c661a0bd782_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_size, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_data, 1, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_CBVResourceNames, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_CBVResourceBindings, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_CBVResourceCounts, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_SamplerResourceNames, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_SamplerResourceBindings, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_SamplerResourceCounts, g_ffx_fsr1_easu_pass_d276b25ae8928a2d98dcf5b52d223b6e_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_size, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_data, 1, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_CBVResourceNames, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_CBVResourceBindings, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_CBVResourceCounts, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_SamplerResourceNames, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_SamplerResourceBindings, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_SamplerResourceCounts, g_ffx_fsr1_easu_pass_ca230974090a46d4b3e20cff35888f35_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

