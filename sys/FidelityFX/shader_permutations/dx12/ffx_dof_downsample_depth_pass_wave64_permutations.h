#include "ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c.h"
#include "ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9.h"

typedef union ffx_dof_downsample_depth_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_downsample_depth_pass_wave64_PermutationKey;

typedef struct ffx_dof_downsample_depth_pass_wave64_PermutationInfo {
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
} ffx_dof_downsample_depth_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_dof_downsample_depth_pass_wave64_IndirectionTable[] = {
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
};

static const ffx_dof_downsample_depth_pass_wave64_PermutationInfo g_ffx_dof_downsample_depth_pass_wave64_PermutationInfo[] = {
    { g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_size, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_data, 1, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_CBVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_CBVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_TextureSRVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_BufferUAVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_b3f077488892cffb49ca1f03b722011c_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_size, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_data, 1, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_CBVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_CBVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_TextureSRVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_BufferUAVResourceSpaces, 1, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_7da15c611975ea73ade91933e99de7f9_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

