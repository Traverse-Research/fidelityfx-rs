#include "ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260.h"
#include "ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b.h"

typedef union ffx_dof_blur_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_blur_pass_16bit_PermutationKey;

typedef struct ffx_dof_blur_pass_16bit_PermutationInfo {
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
} ffx_dof_blur_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_dof_blur_pass_16bit_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_dof_blur_pass_16bit_PermutationInfo g_ffx_dof_blur_pass_16bit_PermutationInfo[] = {
    { g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_size, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_data, 1, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_CBVResourceNames, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_CBVResourceBindings, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_CBVResourceCounts, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_CBVResourceSpaces, 2, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_TextureSRVResourceNames, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_TextureSRVResourceBindings, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_TextureSRVResourceCounts, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_TextureSRVResourceSpaces, 2, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_TextureUAVResourceNames, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_TextureUAVResourceBindings, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_TextureUAVResourceCounts, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_BufferUAVResourceNames, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_BufferUAVResourceBindings, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_BufferUAVResourceCounts, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_BufferUAVResourceSpaces, 2, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_SamplerResourceNames, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_SamplerResourceBindings, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_SamplerResourceCounts, g_ffx_dof_blur_pass_16bit_a7b6768b78b8a5c3eae275d12b4c9260_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_size, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_data, 1, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_CBVResourceNames, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_CBVResourceBindings, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_CBVResourceCounts, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_CBVResourceSpaces, 2, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_TextureSRVResourceNames, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_TextureSRVResourceBindings, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_TextureSRVResourceCounts, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_TextureSRVResourceSpaces, 2, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_TextureUAVResourceNames, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_TextureUAVResourceBindings, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_TextureUAVResourceCounts, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_BufferUAVResourceNames, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_BufferUAVResourceBindings, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_BufferUAVResourceCounts, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_BufferUAVResourceSpaces, 2, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_SamplerResourceNames, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_SamplerResourceBindings, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_SamplerResourceCounts, g_ffx_dof_blur_pass_16bit_57941f7a24c5354b57c1c9603463f94b_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

