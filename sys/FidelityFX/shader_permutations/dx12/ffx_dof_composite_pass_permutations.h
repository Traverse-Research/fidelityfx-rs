#include "ffx_dof_composite_pass_173a49f82759300f6b0169412240c664.h"
#include "ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3.h"

typedef union ffx_dof_composite_pass_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_composite_pass_PermutationKey;

typedef struct ffx_dof_composite_pass_PermutationInfo {
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
} ffx_dof_composite_pass_PermutationInfo;

static const uint32_t g_ffx_dof_composite_pass_IndirectionTable[] = {
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
};

static const ffx_dof_composite_pass_PermutationInfo g_ffx_dof_composite_pass_PermutationInfo[] = {
    { g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_size, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_data, 1, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_CBVResourceNames, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_CBVResourceBindings, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_CBVResourceCounts, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_CBVResourceSpaces, 3, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_TextureSRVResourceNames, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_TextureSRVResourceBindings, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_TextureSRVResourceCounts, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_TextureSRVResourceSpaces, 3, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_TextureUAVResourceNames, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_TextureUAVResourceBindings, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_TextureUAVResourceCounts, g_ffx_dof_composite_pass_173a49f82759300f6b0169412240c664_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_size, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_data, 1, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_CBVResourceNames, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_CBVResourceBindings, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_CBVResourceCounts, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_CBVResourceSpaces, 2, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_TextureSRVResourceNames, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_TextureSRVResourceBindings, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_TextureSRVResourceCounts, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_TextureSRVResourceSpaces, 3, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_TextureUAVResourceNames, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_TextureUAVResourceBindings, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_TextureUAVResourceCounts, g_ffx_dof_composite_pass_cc34c5fa70817b6773dbce60b07851b3_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

