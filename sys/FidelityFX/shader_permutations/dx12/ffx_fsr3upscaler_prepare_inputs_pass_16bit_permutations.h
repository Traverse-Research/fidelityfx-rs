#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd.h"

typedef union ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationKey;

typedef struct ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationInfo {
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
} ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_IndirectionTable[] = {
    1,
    4,
    3,
    7,
    2,
    6,
    5,
    0,
    1,
    4,
    3,
    7,
    2,
    6,
    5,
    0,
    1,
    4,
    3,
    7,
    2,
    6,
    5,
    0,
    1,
    4,
    3,
    7,
    2,
    6,
    5,
    0,
    1,
    4,
    3,
    7,
    2,
    6,
    5,
    0,
    1,
    4,
    3,
    7,
    2,
    6,
    5,
    0,
    1,
    4,
    3,
    7,
    2,
    6,
    5,
    0,
    1,
    4,
    3,
    7,
    2,
    6,
    5,
    0,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_0a46bc4286bebbf0373ad5bd7259b6d4_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_223c93b7d5ba269bb9a151a24dcbce8f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_3a933228a68034d6bdae60e5634c5c56_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_214d4fd706b34cdde7b796ce1e91ab5a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_e1e1ea6472f17afef098d7258a482887_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_a21cc83ff9a6f4164e123ea97974e2cf_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_035d806d451a4761e19c1518b5d6ddb0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_616c120e09d34674cc533971e2cca7fd_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

