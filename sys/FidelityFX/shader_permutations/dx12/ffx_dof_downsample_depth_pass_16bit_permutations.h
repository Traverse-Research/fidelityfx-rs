#include "ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5.h"
#include "ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0.h"

typedef union ffx_dof_downsample_depth_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_downsample_depth_pass_16bit_PermutationKey;

typedef struct ffx_dof_downsample_depth_pass_16bit_PermutationInfo {
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
} ffx_dof_downsample_depth_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_dof_downsample_depth_pass_16bit_IndirectionTable[] = {
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
};

static const ffx_dof_downsample_depth_pass_16bit_PermutationInfo g_ffx_dof_downsample_depth_pass_16bit_PermutationInfo[] = {
    { g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_size, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_data, 1, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_CBVResourceNames, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_CBVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_TextureSRVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_BufferUAVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_d9e84407cabf53371eab6d770a39e1c5_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_size, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_data, 1, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_CBVResourceNames, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_CBVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_TextureSRVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_BufferUAVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_16bit_c6b07b9c495eae42c39e8c731097b7d0_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

