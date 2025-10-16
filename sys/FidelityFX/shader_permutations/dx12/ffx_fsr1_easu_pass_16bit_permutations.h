#include "ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d.h"
#include "ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143.h"
#include "ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952.h"
#include "ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce.h"

typedef union ffx_fsr1_easu_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_easu_pass_16bit_PermutationKey;

typedef struct ffx_fsr1_easu_pass_16bit_PermutationInfo {
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
} ffx_fsr1_easu_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr1_easu_pass_16bit_IndirectionTable[] = {
    2,
    0,
    2,
    0,
    3,
    1,
    3,
    1,
};

static const ffx_fsr1_easu_pass_16bit_PermutationInfo g_ffx_fsr1_easu_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_size, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_data, 1, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_CBVResourceNames, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_CBVResourceBindings, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_CBVResourceCounts, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_SamplerResourceNames, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_SamplerResourceBindings, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_SamplerResourceCounts, g_ffx_fsr1_easu_pass_16bit_5701c4b4b218b796bf734b71bd1a242d_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_size, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_data, 1, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_CBVResourceNames, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_CBVResourceBindings, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_CBVResourceCounts, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_SamplerResourceNames, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_SamplerResourceBindings, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_SamplerResourceCounts, g_ffx_fsr1_easu_pass_16bit_4d247be0fa9e327685961284698a6143_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_size, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_data, 1, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_CBVResourceNames, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_CBVResourceBindings, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_CBVResourceCounts, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_SamplerResourceNames, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_SamplerResourceBindings, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_SamplerResourceCounts, g_ffx_fsr1_easu_pass_16bit_0b47090da58a79ad79af937f65118952_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_size, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_data, 1, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_CBVResourceNames, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_CBVResourceBindings, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_CBVResourceCounts, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_SamplerResourceNames, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_SamplerResourceBindings, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_SamplerResourceCounts, g_ffx_fsr1_easu_pass_16bit_a2c2f00bf91c1f6dcf59aa68328da3ce_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

