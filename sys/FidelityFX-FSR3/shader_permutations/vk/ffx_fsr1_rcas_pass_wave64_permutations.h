#include "ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e.h"
#include "ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26.h"

typedef union ffx_fsr1_rcas_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_rcas_pass_wave64_PermutationKey;

typedef struct ffx_fsr1_rcas_pass_wave64_PermutationInfo {
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
} ffx_fsr1_rcas_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr1_rcas_pass_wave64_IndirectionTable[] = {
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
};

static const ffx_fsr1_rcas_pass_wave64_PermutationInfo g_ffx_fsr1_rcas_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_size, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_data, 1, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_CBVResourceNames, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_CBVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_CBVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_CBVResourceSets, 1, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_TextureSRVResourceNames, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_TextureSRVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_TextureSRVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_TextureSRVResourceSets, 1, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_TextureUAVResourceNames, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_TextureUAVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_TextureUAVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_fc6df04c3f8eba9c597cbf2867e8027e_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_size, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_data, 1, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_CBVResourceNames, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_CBVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_CBVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_CBVResourceSets, 1, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_TextureSRVResourceNames, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_TextureSRVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_TextureSRVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_TextureSRVResourceSets, 1, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_TextureUAVResourceNames, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_TextureUAVResourceBindings, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_TextureUAVResourceCounts, g_ffx_fsr1_rcas_pass_wave64_28bd528f9ab275fb3a04d47bc77dfb26_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

