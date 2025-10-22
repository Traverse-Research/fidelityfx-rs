#include "ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9.h"
#include "ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66.h"

typedef union ffx_fsr1_rcas_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_rcas_pass_PermutationKey;

typedef struct ffx_fsr1_rcas_pass_PermutationInfo {
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
} ffx_fsr1_rcas_pass_PermutationInfo;

static const uint32_t g_ffx_fsr1_rcas_pass_IndirectionTable[] = {
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

static const ffx_fsr1_rcas_pass_PermutationInfo g_ffx_fsr1_rcas_pass_PermutationInfo[] = {
    { g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_size, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_data, 1, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_CBVResourceNames, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_CBVResourceBindings, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_CBVResourceCounts, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_CBVResourceSpaces, 1, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_TextureSRVResourceNames, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_TextureSRVResourceBindings, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_TextureSRVResourceCounts, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_TextureSRVResourceSpaces, 1, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_TextureUAVResourceNames, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_TextureUAVResourceBindings, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_TextureUAVResourceCounts, g_ffx_fsr1_rcas_pass_b7948efa8b3bf9a2675ca6a6b29b5fc9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_size, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_data, 1, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_CBVResourceNames, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_CBVResourceBindings, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_CBVResourceCounts, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_CBVResourceSpaces, 1, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_TextureSRVResourceNames, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_TextureSRVResourceBindings, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_TextureSRVResourceCounts, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_TextureSRVResourceSpaces, 1, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_TextureUAVResourceNames, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_TextureUAVResourceBindings, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_TextureUAVResourceCounts, g_ffx_fsr1_rcas_pass_74a8a56598c00e7f40778c508d65ae66_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

