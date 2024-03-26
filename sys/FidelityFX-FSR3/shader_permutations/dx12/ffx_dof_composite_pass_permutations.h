#include "ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded.h"
#include "ffx_dof_composite_pass_9623283064a201a3a4414367d4545756.h"

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
    { g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_size, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_data, 1, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_CBVResourceNames, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_CBVResourceBindings, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_CBVResourceCounts, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_CBVResourceSpaces, 3, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_TextureSRVResourceNames, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_TextureSRVResourceBindings, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_TextureSRVResourceCounts, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_TextureSRVResourceSpaces, 3, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_TextureUAVResourceNames, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_TextureUAVResourceBindings, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_TextureUAVResourceCounts, g_ffx_dof_composite_pass_f26e058cae8d71280bfd78ea0348bded_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_size, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_data, 1, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_CBVResourceNames, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_CBVResourceBindings, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_CBVResourceCounts, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_CBVResourceSpaces, 2, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_TextureSRVResourceNames, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_TextureSRVResourceBindings, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_TextureSRVResourceCounts, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_TextureSRVResourceSpaces, 3, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_TextureUAVResourceNames, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_TextureUAVResourceBindings, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_TextureUAVResourceCounts, g_ffx_dof_composite_pass_9623283064a201a3a4414367d4545756_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

