#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23.h"

typedef union ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationInfo {
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
} ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_IndirectionTable[] = {
    7,
    4,
    6,
    1,
    5,
    0,
    3,
    2,
    7,
    4,
    6,
    1,
    5,
    0,
    3,
    2,
    7,
    4,
    6,
    1,
    5,
    0,
    3,
    2,
    7,
    4,
    6,
    1,
    5,
    0,
    3,
    2,
    7,
    4,
    6,
    1,
    5,
    0,
    3,
    2,
    7,
    4,
    6,
    1,
    5,
    0,
    3,
    2,
    7,
    4,
    6,
    1,
    5,
    0,
    3,
    2,
    7,
    4,
    6,
    1,
    5,
    0,
    3,
    2,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_85c9bc664cf1257e3c08f2993d43c3e0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_5d589897c7ffc110f217a2cd4b6a8275_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ba1d8e874197264622b3ab1f8d967627_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_2cf6dbc57d366958a19de1ff7dcadd3b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c981ca10a7049e9f90e90ff8c8fe09f1_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_68219782f81584ded361feaa044b4ea7_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_e1cb31625d2fafbf9151d2e27a43fc45_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_0888b80a361dadcdbc23e6950fcd3b23_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

