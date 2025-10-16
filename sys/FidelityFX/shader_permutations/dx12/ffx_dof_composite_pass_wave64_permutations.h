#include "ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe.h"
#include "ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3.h"

typedef union ffx_dof_composite_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_composite_pass_wave64_PermutationKey;

typedef struct ffx_dof_composite_pass_wave64_PermutationInfo {
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
} ffx_dof_composite_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_dof_composite_pass_wave64_IndirectionTable[] = {
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

static const ffx_dof_composite_pass_wave64_PermutationInfo g_ffx_dof_composite_pass_wave64_PermutationInfo[] = {
    { g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_size, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_data, 1, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_CBVResourceNames, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_CBVResourceBindings, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_CBVResourceCounts, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_CBVResourceSpaces, 2, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_TextureSRVResourceNames, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_TextureSRVResourceBindings, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_TextureSRVResourceCounts, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_TextureSRVResourceSpaces, 3, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_TextureUAVResourceNames, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_TextureUAVResourceBindings, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_TextureUAVResourceCounts, g_ffx_dof_composite_pass_wave64_341622800b75508ddda622d7d805eabe_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_size, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_data, 1, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_CBVResourceNames, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_CBVResourceBindings, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_CBVResourceCounts, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_CBVResourceSpaces, 3, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_TextureSRVResourceNames, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_TextureSRVResourceBindings, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_TextureSRVResourceCounts, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_TextureSRVResourceSpaces, 3, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_TextureUAVResourceNames, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_TextureUAVResourceBindings, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_TextureUAVResourceCounts, g_ffx_dof_composite_pass_wave64_ba40dcbe70a6f83f8ee0ad6f1a2591b3_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

