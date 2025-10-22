#include "ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd.h"
#include "ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0.h"

typedef union ffx_fsr1_rcas_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_rcas_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr1_rcas_pass_wave64_16bit_PermutationInfo {
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
} ffx_fsr1_rcas_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr1_rcas_pass_wave64_16bit_IndirectionTable[] = {
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

static const ffx_fsr1_rcas_pass_wave64_16bit_PermutationInfo g_ffx_fsr1_rcas_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_size, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_data, 1, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_CBVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_CBVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_CBVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_CBVResourceSets, 1, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_TextureSRVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_TextureSRVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_TextureSRVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_TextureSRVResourceSets, 1, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_TextureUAVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_TextureUAVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_TextureUAVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16bit_13d2f4222af271a0bbf0017157a9f4cd_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_size, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_data, 1, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_CBVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_CBVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_CBVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_CBVResourceSets, 1, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_TextureSRVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_TextureSRVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_TextureSRVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_TextureSRVResourceSets, 1, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_TextureUAVResourceNames, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_TextureUAVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_TextureUAVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_16bit_e62f46e3f840395aefd330e5498755b0_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

