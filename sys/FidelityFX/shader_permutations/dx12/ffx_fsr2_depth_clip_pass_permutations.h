#include "ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483.h"
#include "ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6.h"
#include "ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2.h"
#include "ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81.h"
#include "ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94.h"
#include "ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601.h"
#include "ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7.h"
#include "ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41.h"

typedef union ffx_fsr2_depth_clip_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_depth_clip_pass_PermutationKey;

typedef struct ffx_fsr2_depth_clip_pass_PermutationInfo {
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
} ffx_fsr2_depth_clip_pass_PermutationInfo;

static const uint32_t g_ffx_fsr2_depth_clip_pass_IndirectionTable[] = {
    4,
    5,
    3,
    2,
    7,
    1,
    6,
    0,
    4,
    5,
    3,
    2,
    7,
    1,
    6,
    0,
    4,
    5,
    3,
    2,
    7,
    1,
    6,
    0,
    4,
    5,
    3,
    2,
    7,
    1,
    6,
    0,
    4,
    5,
    3,
    2,
    7,
    1,
    6,
    0,
    4,
    5,
    3,
    2,
    7,
    1,
    6,
    0,
    4,
    5,
    3,
    2,
    7,
    1,
    6,
    0,
    4,
    5,
    3,
    2,
    7,
    1,
    6,
    0,
};

static const ffx_fsr2_depth_clip_pass_PermutationInfo g_ffx_fsr2_depth_clip_pass_PermutationInfo[] = {
    { g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_size, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_data, 1, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_530b41f8b087dbdb03fcb1a42215f483_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_size, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_data, 1, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_18650c1acf413462580eafa3d725bce6_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_size, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_data, 1, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_3d7c67cb6ae8fafe180edd1839956bb2_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_size, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_data, 1, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_ae6004aba456cc8905809c2629af4b81_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_size, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_data, 1, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_6b5d523f784fee910b76e4e477fffd94_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_size, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_data, 1, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_e5956632e842896b9ae40a717d28b601_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_size, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_data, 1, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_ba34ddb460f7f8e1ede396e4712fc7c7_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_size, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_data, 1, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_443303d34ed24ddf1480f085191e8f41_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

