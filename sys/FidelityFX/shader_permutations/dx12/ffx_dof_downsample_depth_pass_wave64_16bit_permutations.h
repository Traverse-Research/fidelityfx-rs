#include "ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac.h"
#include "ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818.h"

typedef union ffx_dof_downsample_depth_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_downsample_depth_pass_wave64_16bit_PermutationKey;

typedef struct ffx_dof_downsample_depth_pass_wave64_16bit_PermutationInfo {
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
} ffx_dof_downsample_depth_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_dof_downsample_depth_pass_wave64_16bit_IndirectionTable[] = {
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
};

static const ffx_dof_downsample_depth_pass_wave64_16bit_PermutationInfo g_ffx_dof_downsample_depth_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_size, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_data, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_CBVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_CBVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_TextureSRVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_BufferUAVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a7ddfc954e5731d22b508ea9504e8eac_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_size, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_data, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_CBVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_CBVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_TextureSRVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_BufferUAVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_f931ed413af3e47aaffc890d8a6c8818_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

