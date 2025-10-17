#include "ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf.h"

typedef union ffx_fsr3upscaler_prepare_inputs_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_prepare_inputs_pass_PermutationKey;

typedef struct ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo {
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
} ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_prepare_inputs_pass_IndirectionTable[] = {
    3,
    4,
    6,
    2,
    5,
    1,
    7,
    0,
    3,
    4,
    6,
    2,
    5,
    1,
    7,
    0,
    3,
    4,
    6,
    2,
    5,
    1,
    7,
    0,
    3,
    4,
    6,
    2,
    5,
    1,
    7,
    0,
    3,
    4,
    6,
    2,
    5,
    1,
    7,
    0,
    3,
    4,
    6,
    2,
    5,
    1,
    7,
    0,
    3,
    4,
    6,
    2,
    5,
    1,
    7,
    0,
    3,
    4,
    6,
    2,
    5,
    1,
    7,
    0,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_size, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_5b789bbbd72c91e94f3413b74435d427_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_size, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_f35c4196a6265c23263f0a49151918d3_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_size, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_010c6c63ba890234342832584fde3874_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_size, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_f03775b4e7181cdbe334a511bdb7d82e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_size, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8fdd25ad7db585779d6e4856edce3918_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_size, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_b24cac747e3d6c225d022aa107fb9b31_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_size, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_02538ff19ff03e7cc63d538a97b6dab7_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_size, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_686434ed01bad57c7646ab72319f76bf_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

