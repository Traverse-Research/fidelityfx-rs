#include "ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa.h"
#include "ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc.h"

typedef union ffx_fsr2_lock_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_lock_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr2_lock_pass_wave64_16bit_PermutationInfo {
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
} ffx_fsr2_lock_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_lock_pass_wave64_16bit_IndirectionTable[] = {
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

static const ffx_fsr2_lock_pass_wave64_16bit_PermutationInfo g_ffx_fsr2_lock_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_size, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_data, 1, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_CBVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_CBVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_CBVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_2c1ad88b20655db6171f8a479f1cddaa_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_size, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_data, 1, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_CBVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_CBVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_CBVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_cedcf9c89907cf7f2b89408f7413f9cc_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

