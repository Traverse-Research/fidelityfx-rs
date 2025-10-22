#include "ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797.h"
#include "ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310.h"

typedef union ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationKey;

typedef struct ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationInfo {
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
} ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationInfo g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationInfo[] = {
    { g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_size, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_data, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_CBVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_CBVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_CBVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_CBVResourceSpaces, 3, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_TextureSRVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_TextureSRVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_TextureSRVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_TextureUAVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_TextureUAVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_TextureUAVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_SamplerResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_SamplerResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_SamplerResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7f2778a37418c8c25ad78a43249af797_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_size, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_data, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_CBVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_CBVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_CBVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_CBVResourceSpaces, 3, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_TextureSRVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_TextureSRVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_TextureSRVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_TextureUAVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_TextureUAVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_TextureUAVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_SamplerResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_SamplerResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_SamplerResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_3096eec13f6c0a35feb79e2ed70ae310_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

