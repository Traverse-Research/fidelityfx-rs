#include "ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d.h"
#include "ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd.h"

typedef union ffx_dof_composite_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_composite_pass_wave64_16bit_PermutationKey;

typedef struct ffx_dof_composite_pass_wave64_16bit_PermutationInfo {
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
} ffx_dof_composite_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_dof_composite_pass_wave64_16bit_IndirectionTable[] = {
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

static const ffx_dof_composite_pass_wave64_16bit_PermutationInfo g_ffx_dof_composite_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_size, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_data, 1, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_CBVResourceNames, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_CBVResourceBindings, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_CBVResourceCounts, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_CBVResourceSpaces, 2, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_TextureSRVResourceNames, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_TextureSRVResourceBindings, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_TextureSRVResourceCounts, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_TextureSRVResourceSpaces, 3, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_TextureUAVResourceNames, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_TextureUAVResourceBindings, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_TextureUAVResourceCounts, g_ffx_dof_composite_pass_wave64_16bit_5b3f066a99e3b1f1c1874523f3e71b3d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_size, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_data, 1, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_CBVResourceNames, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_CBVResourceBindings, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_CBVResourceCounts, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_CBVResourceSpaces, 3, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_TextureSRVResourceNames, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_TextureSRVResourceBindings, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_TextureSRVResourceCounts, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_TextureSRVResourceSpaces, 3, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_TextureUAVResourceNames, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_TextureUAVResourceBindings, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_TextureUAVResourceCounts, g_ffx_dof_composite_pass_wave64_16bit_afe1e4347104538f4f3164fe38de62fd_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

