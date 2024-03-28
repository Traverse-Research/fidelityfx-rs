#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035.h"
#include "ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb.h"

typedef union ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_PermutationInfo {
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
} ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_IndirectionTable[] = {
    8,
    8,
    12,
    12,
    4,
    4,
    3,
    3,
    6,
    6,
    2,
    2,
    13,
    13,
    0,
    0,
    11,
    11,
    14,
    14,
    10,
    10,
    1,
    1,
    5,
    5,
    9,
    9,
    7,
    7,
    15,
    15,
    8,
    8,
    12,
    12,
    4,
    4,
    3,
    3,
    6,
    6,
    2,
    2,
    13,
    13,
    0,
    0,
    11,
    11,
    14,
    14,
    10,
    10,
    1,
    1,
    5,
    5,
    9,
    9,
    7,
    7,
    15,
    15,
};

static const ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_PermutationInfo g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8646864fa10b2ae4892c596a4db2cf8_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_eaae2a562d382c57a59a0fd9037aa795_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_961ee0e2cf9a6aebe35efe9c278f532e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c5da8ac55ec94a5011e3ef0ea5ab92bf_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_c69ef1b10116d7dc4a64d97e9196457f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_7139f5cc4a91b841a20f23ff97bce4f9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_ff4098ddddc5880d831e1cd1082d5a5d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_292bcddf69bd2de11f8be0536bb72181_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_2236a664fe17e477f754e1a8f82f89ea_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_78d90084255a62a5a194b66bdbcea12d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_947237f72ca6c09307ed27ff5b6a4515_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_6fe784d03f6fc9444c1616d45e4d5f5b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_d920bf99d453c3d782c09b330923f125_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_64cced938d0cec4ae96642d4cbc019a6_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_44726dff92ee5ce461346c0927fff035_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_size, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_data, 1, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_CBVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_CBVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_CBVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_CBVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_TextureSRVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_TextureSRVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_TextureSRVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_TextureSRVResourceSpaces, 4, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_TextureUAVResourceNames, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_TextureUAVResourceBindings, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_TextureUAVResourceCounts, g_ffx_fsr3upscaler_reconstruct_previous_depth_pass_wave64_16bit_f8b6d05dbc885066610e003e5a2636bb_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

