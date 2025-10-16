#include "ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869.h"
#include "ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905.h"

typedef union ffx_dof_blur_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_blur_pass_wave64_PermutationKey;

typedef struct ffx_dof_blur_pass_wave64_PermutationInfo {
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
} ffx_dof_blur_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_dof_blur_pass_wave64_IndirectionTable[] = {
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
};

static const ffx_dof_blur_pass_wave64_PermutationInfo g_ffx_dof_blur_pass_wave64_PermutationInfo[] = {
    { g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_size, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_data, 1, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_CBVResourceNames, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_CBVResourceBindings, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_CBVResourceCounts, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_CBVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_TextureSRVResourceNames, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_TextureSRVResourceBindings, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_TextureSRVResourceCounts, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_TextureSRVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_TextureUAVResourceNames, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_TextureUAVResourceBindings, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_TextureUAVResourceCounts, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_BufferUAVResourceNames, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_BufferUAVResourceBindings, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_BufferUAVResourceCounts, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_BufferUAVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_SamplerResourceNames, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_SamplerResourceBindings, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_SamplerResourceCounts, g_ffx_dof_blur_pass_wave64_3c63cc4fc5cc151f91dbea0306389869_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_size, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_data, 1, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_CBVResourceNames, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_CBVResourceBindings, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_CBVResourceCounts, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_CBVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_TextureSRVResourceNames, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_TextureSRVResourceBindings, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_TextureSRVResourceCounts, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_TextureSRVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_TextureUAVResourceNames, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_TextureUAVResourceBindings, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_TextureUAVResourceCounts, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_BufferUAVResourceNames, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_BufferUAVResourceBindings, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_BufferUAVResourceCounts, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_BufferUAVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_SamplerResourceNames, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_SamplerResourceBindings, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_SamplerResourceCounts, g_ffx_dof_blur_pass_wave64_230a2bdc2ca069e78e58a16512940905_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

