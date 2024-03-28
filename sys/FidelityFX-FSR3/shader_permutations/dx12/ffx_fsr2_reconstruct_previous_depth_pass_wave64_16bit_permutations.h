#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f.h"

typedef union ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_PermutationInfo {
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
} ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_IndirectionTable[] = {
    2,
    2,
    11,
    11,
    14,
    14,
    9,
    9,
    7,
    7,
    1,
    1,
    4,
    4,
    6,
    6,
    12,
    12,
    13,
    13,
    0,
    0,
    8,
    8,
    3,
    3,
    10,
    10,
    15,
    15,
    5,
    5,
    2,
    2,
    11,
    11,
    14,
    14,
    9,
    9,
    7,
    7,
    1,
    1,
    4,
    4,
    6,
    6,
    12,
    12,
    13,
    13,
    0,
    0,
    8,
    8,
    3,
    3,
    10,
    10,
    15,
    15,
    5,
    5,
};

static const ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_PermutationInfo g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_5803cd6f3980bfee3d0264f04b2175ec_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_50841f0842e3cd775638768c70fb7e39_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_be84047f8dcf69d1b8ea907750439546_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_d1963bc35f96852835de00ed837c23d2_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_2981db2bed50c3df5885e22a7a94ab1b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1314b97bd3ec806677c16e89739cbef7_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1e0fff55729efcc17d482b25d23d105c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_385e5b41089e13b5dcde6a276b8f0b35_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_1d80ab32c122fae79de99436e8742b1f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_783d4fe0f920aa58073875f15ab8ccdc_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7cbd5ed85e400329754a9a0bdaa00e89_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_df516938d7b17e7e6ced323aa3d562cd_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_8a429160224f37ba2e0ae8f8faa0cffb_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_33d88fd3e6f5808ab255f37b840b00ec_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_7d27f6b96ff4e719483155e725a9d7d9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_CBVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_TextureSRVResourceSpaces, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_16bit_db6823f567160d272c83aa39b9cf1f1f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

