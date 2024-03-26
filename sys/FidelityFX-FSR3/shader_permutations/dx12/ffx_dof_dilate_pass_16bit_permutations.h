#include "ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82.h"

typedef union ffx_dof_dilate_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_dilate_pass_16bit_PermutationKey;

typedef struct ffx_dof_dilate_pass_16bit_PermutationInfo {
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
} ffx_dof_dilate_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_dof_dilate_pass_16bit_IndirectionTable[] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

static const ffx_dof_dilate_pass_16bit_PermutationInfo g_ffx_dof_dilate_pass_16bit_PermutationInfo[] = {
    { g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_size, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_data, 1, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_CBVResourceNames, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_CBVResourceBindings, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_CBVResourceCounts, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_CBVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_TextureUAVResourceNames, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_TextureUAVResourceBindings, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_TextureUAVResourceCounts, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_BufferUAVResourceNames, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_BufferUAVResourceBindings, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_BufferUAVResourceCounts, g_ffx_dof_dilate_pass_16bit_b8fa02fdf2e21fd562948a959da0cf82_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

