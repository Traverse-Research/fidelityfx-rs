#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835.h"

typedef union ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationKey;

typedef struct ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationInfo {
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
} ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_IndirectionTable[] = {
    14,
    14,
    10,
    10,
    11,
    11,
    3,
    3,
    13,
    13,
    4,
    4,
    8,
    8,
    0,
    0,
    15,
    15,
    5,
    5,
    9,
    9,
    2,
    2,
    12,
    12,
    6,
    6,
    7,
    7,
    1,
    1,
    14,
    14,
    10,
    10,
    11,
    11,
    3,
    3,
    13,
    13,
    4,
    4,
    8,
    8,
    0,
    0,
    15,
    15,
    5,
    5,
    9,
    9,
    2,
    2,
    12,
    12,
    6,
    6,
    7,
    7,
    1,
    1,
};

static const ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationInfo g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_b37a8f7e104f93eecba2ad7053a8474b_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_842cf7b01b40cef0925e3904501cce93_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9cb6d0a61acf686c73c948b580539e1f_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_9c5c496c12fd8116f71bd3a1880d5f67_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_71d5a96e0faf73659215f64d4d8e5089_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_3b9df24ce64ff05ae8bfcbc6f5345e20_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_73e4c1a4fff79e2988366f8430bb931f_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4736c98c3db3d218596c5f9b245f9540_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_7e0095f7d55b31d61828620d3dd53f39_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_8c0a07e7b247305146a6a91cdc751081_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b6973622762ced21a2b105dc25f363_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_4ad437864d230c241d6df5b67ba2b113_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_0b541155a76c4cb727291e60be3ed663_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_72b17f87cc8796230511034dfc6919c9_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_07a91c9fd47dc6f18aa63bacedf2cc2e_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_size, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_16bit_82de6c56d129c738a7e31e72d8221835_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

