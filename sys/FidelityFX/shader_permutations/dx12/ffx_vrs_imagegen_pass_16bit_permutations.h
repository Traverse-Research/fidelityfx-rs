#include "ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df.h"
#include "ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f.h"
#include "ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a.h"
#include "ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795.h"
#include "ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031.h"
#include "ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208.h"

typedef union ffx_vrs_imagegen_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_VRS_OPTION_ADDITIONALSHADINGRATES : 1;
        uint32_t FFX_VARIABLESHADING_TILESIZE : 2;
    };
    uint32_t index;
} ffx_vrs_imagegen_pass_16bit_PermutationKey;

typedef struct ffx_vrs_imagegen_pass_16bit_PermutationInfo {
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
} ffx_vrs_imagegen_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_vrs_imagegen_pass_16bit_IndirectionTable[] = {
    1,
    4,
    3,
    0,
    5,
    2,
    0,
    0,
};

static const ffx_vrs_imagegen_pass_16bit_PermutationInfo g_ffx_vrs_imagegen_pass_16bit_PermutationInfo[] = {
    { g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_size, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_data, 1, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_CBVResourceNames, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_CBVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_CBVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_f3b70f70a5c6997289d69c9816e087df_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_size, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_data, 1, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_CBVResourceNames, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_CBVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_CBVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_5c5c6fbc2c63d720c4d41c7d70b4616f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_size, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_data, 1, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_CBVResourceNames, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_CBVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_CBVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_ece0d944c227991c881880671015b09a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_size, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_data, 1, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_CBVResourceNames, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_CBVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_CBVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_30d777e209fc7e9296f172096ba25795_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_size, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_data, 1, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_CBVResourceNames, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_CBVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_CBVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_921653c21c4d0867750bdce9bcba2031_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_size, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_data, 1, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_CBVResourceNames, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_CBVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_CBVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_16bit_76d1d7a8f2bde15b0c725702b14c7208_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

