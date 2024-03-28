#include "ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346.h"
#include "ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63.h"
#include "ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82.h"
#include "ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c.h"
#include "ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5.h"
#include "ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830.h"
#include "ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a.h"
#include "ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907.h"

typedef union ffx_fsr2_depth_clip_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_depth_clip_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr2_depth_clip_pass_wave64_16bit_PermutationInfo {
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
} ffx_fsr2_depth_clip_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_depth_clip_pass_wave64_16bit_IndirectionTable[] = {
    5,
    5,
    5,
    5,
    2,
    2,
    2,
    2,
    0,
    0,
    0,
    0,
    6,
    6,
    6,
    6,
    4,
    4,
    4,
    4,
    7,
    7,
    7,
    7,
    1,
    1,
    1,
    1,
    3,
    3,
    3,
    3,
    5,
    5,
    5,
    5,
    2,
    2,
    2,
    2,
    0,
    0,
    0,
    0,
    6,
    6,
    6,
    6,
    4,
    4,
    4,
    4,
    7,
    7,
    7,
    7,
    1,
    1,
    1,
    1,
    3,
    3,
    3,
    3,
};

static const ffx_fsr2_depth_clip_pass_wave64_16bit_PermutationInfo g_ffx_fsr2_depth_clip_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_size, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_91ebd9984d150b1d98123588add3c346_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_size, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_73f91b62cd3722959eeb53a5b8a2bf63_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_size, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_6491660e7cc959d07dfe68769afdcd82_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_size, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_1d0f4135b626250f5907558d33f3423c_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_size, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_2dcc33a6493ff8206df14a23944f66c5_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_size, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_59babbe41b00a18546b64c73c3d11830_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_size, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_0583f5745db0c8ea021c5eb89062776a_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_size, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_16bit_5987a93077d0d5015a3342a63bddb907_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

