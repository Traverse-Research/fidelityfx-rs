#include "ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756.h"
#include "ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace.h"

typedef union ffx_fsr1_rcas_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_rcas_pass_wave64_PermutationKey;

typedef struct ffx_fsr1_rcas_pass_wave64_PermutationInfo {
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
} ffx_fsr1_rcas_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr1_rcas_pass_wave64_IndirectionTable[] = {
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
};

static const ffx_fsr1_rcas_pass_wave64_PermutationInfo g_ffx_fsr1_rcas_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_size, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_data, 1, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_CBVResourceNames, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_CBVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_CBVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_CBVResourceSpaces, 1, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_TextureSRVResourceNames, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_TextureSRVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_TextureSRVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_TextureSRVResourceSpaces, 1, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_TextureUAVResourceNames, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_TextureUAVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_TextureUAVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_963d4e93c20688cbb6f20ba758b20756_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_size, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_data, 1, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_CBVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_CBVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_CBVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_CBVResourceSpaces, 1, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_TextureSRVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_TextureSRVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_TextureSRVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_TextureSRVResourceSpaces, 1, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_TextureUAVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_TextureUAVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_TextureUAVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16c9912dd11a52c3a0f8da0b4dfb3ace_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

