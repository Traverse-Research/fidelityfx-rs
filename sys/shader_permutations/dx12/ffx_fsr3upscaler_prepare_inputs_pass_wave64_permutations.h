#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2.h"

typedef union ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationKey;

typedef struct ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationInfo {
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
} ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_IndirectionTable[] = {
    5,
    1,
    2,
    6,
    4,
    3,
    7,
    0,
    5,
    1,
    2,
    6,
    4,
    3,
    7,
    0,
    5,
    1,
    2,
    6,
    4,
    3,
    7,
    0,
    5,
    1,
    2,
    6,
    4,
    3,
    7,
    0,
    5,
    1,
    2,
    6,
    4,
    3,
    7,
    0,
    5,
    1,
    2,
    6,
    4,
    3,
    7,
    0,
    5,
    1,
    2,
    6,
    4,
    3,
    7,
    0,
    5,
    1,
    2,
    6,
    4,
    3,
    7,
    0,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_3ffb7ff675d7cc290cafbf16ecaa29c0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9ca474b8d2950d01ab7a175ed55d81ed_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6fe1a40b7fe4e2cbbbd94d447fd9f586_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_90884f20b750155c16ea53d3e996395a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7f24fbe08cb6f8b89c66fe49c6d69377_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_2ed3be4c424c33fcef669f5f1ccf472b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_7592a99de24836b394c31a375015cdd1_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f12545e5cab6b6b72cd6548bdf9ce7a2_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

