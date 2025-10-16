#include "ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb.h"
#include "ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1.h"

typedef union ffx_sssr_depth_downsample_pass_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_depth_downsample_pass_PermutationKey;

typedef struct ffx_sssr_depth_downsample_pass_PermutationInfo {
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
} ffx_sssr_depth_downsample_pass_PermutationInfo;

static const uint32_t g_ffx_sssr_depth_downsample_pass_IndirectionTable[] = {
    1,
    0,
};

static const ffx_sssr_depth_downsample_pass_PermutationInfo g_ffx_sssr_depth_downsample_pass_PermutationInfo[] = {
    { g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_size, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_data, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_TextureSRVResourceNames, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_TextureSRVResourceBindings, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_TextureSRVResourceCounts, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_TextureSRVResourceSpaces, 1, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_TextureUAVResourceNames, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_TextureUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_TextureUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_BufferUAVResourceNames, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_BufferUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_BufferUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_be8ff4d8509952725856b6ce93cb57fb_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_size, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_data, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_TextureSRVResourceNames, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_TextureSRVResourceBindings, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_TextureSRVResourceCounts, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_TextureSRVResourceSpaces, 1, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_TextureUAVResourceNames, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_TextureUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_TextureUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_BufferUAVResourceNames, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_BufferUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_BufferUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_b687861340bd9022970b3c7a867b44a1_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

