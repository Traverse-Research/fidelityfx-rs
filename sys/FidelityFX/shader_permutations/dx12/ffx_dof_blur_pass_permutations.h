#include "ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526.h"
#include "ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240.h"

typedef union ffx_dof_blur_pass_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_blur_pass_PermutationKey;

typedef struct ffx_dof_blur_pass_PermutationInfo {
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
} ffx_dof_blur_pass_PermutationInfo;

static const uint32_t g_ffx_dof_blur_pass_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_dof_blur_pass_PermutationInfo g_ffx_dof_blur_pass_PermutationInfo[] = {
    { g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_size, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_data, 1, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_CBVResourceNames, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_CBVResourceBindings, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_CBVResourceCounts, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_CBVResourceSpaces, 2, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_TextureSRVResourceNames, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_TextureSRVResourceBindings, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_TextureSRVResourceCounts, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_TextureSRVResourceSpaces, 2, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_TextureUAVResourceNames, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_TextureUAVResourceBindings, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_TextureUAVResourceCounts, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_BufferUAVResourceNames, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_BufferUAVResourceBindings, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_BufferUAVResourceCounts, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_BufferUAVResourceSpaces, 2, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_SamplerResourceNames, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_SamplerResourceBindings, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_SamplerResourceCounts, g_ffx_dof_blur_pass_4cbb02821e4ad389e030974a9db56526_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_size, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_data, 1, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_CBVResourceNames, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_CBVResourceBindings, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_CBVResourceCounts, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_CBVResourceSpaces, 2, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_TextureSRVResourceNames, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_TextureSRVResourceBindings, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_TextureSRVResourceCounts, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_TextureSRVResourceSpaces, 2, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_TextureUAVResourceNames, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_TextureUAVResourceBindings, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_TextureUAVResourceCounts, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_BufferUAVResourceNames, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_BufferUAVResourceBindings, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_BufferUAVResourceCounts, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_BufferUAVResourceSpaces, 2, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_SamplerResourceNames, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_SamplerResourceBindings, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_SamplerResourceCounts, g_ffx_dof_blur_pass_c325d7f590b2ac199efae6d16dddf240_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

