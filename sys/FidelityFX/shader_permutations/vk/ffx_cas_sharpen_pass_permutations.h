#include "ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5.h"
#include "ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85.h"
#include "ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae.h"
#include "ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456.h"
#include "ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14.h"
#include "ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844.h"
#include "ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98.h"
#include "ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260.h"
#include "ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249.h"
#include "ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222.h"

typedef union ffx_cas_sharpen_pass_PermutationKey {
    struct {
        uint32_t FFX_CAS_OPTION_SHARPEN_ONLY : 1;
        uint32_t FFX_CAS_COLOR_SPACE_CONVERSION : 3;
    };
    uint32_t index;
} ffx_cas_sharpen_pass_PermutationKey;

typedef struct ffx_cas_sharpen_pass_PermutationInfo {
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
} ffx_cas_sharpen_pass_PermutationInfo;

static const uint32_t g_ffx_cas_sharpen_pass_IndirectionTable[] = {
    1,
    0,
    7,
    6,
    5,
    3,
    2,
    4,
    9,
    8,
    0,
    0,
    0,
    0,
    0,
    0,
};

static const ffx_cas_sharpen_pass_PermutationInfo g_ffx_cas_sharpen_pass_PermutationInfo[] = {
    { g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_size, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_data, 1, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_CBVResourceNames, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_CBVResourceBindings, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_CBVResourceCounts, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_903ec3e8f5543104d6a9b334778e93e5_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_size, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_data, 1, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_CBVResourceNames, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_CBVResourceBindings, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_CBVResourceCounts, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_3985774ad2c941722091698c01632d85_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_size, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_data, 1, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_CBVResourceNames, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_CBVResourceBindings, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_CBVResourceCounts, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_5966145e7c1aa033ca1168ac19940dae_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_size, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_data, 1, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_CBVResourceNames, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_CBVResourceBindings, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_CBVResourceCounts, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_ae45e569a7eaefcca2edc059ad4ca456_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_size, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_data, 1, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_CBVResourceNames, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_CBVResourceBindings, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_CBVResourceCounts, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_125bea22a03574e368028fecac656e14_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_size, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_data, 1, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_CBVResourceNames, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_CBVResourceBindings, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_CBVResourceCounts, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_423ccce69028a1c6bd185b499c8cf844_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_size, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_data, 1, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_CBVResourceNames, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_CBVResourceBindings, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_CBVResourceCounts, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_19df80586557ca7f0dd832e4320cdf98_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_size, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_data, 1, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_CBVResourceNames, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_CBVResourceBindings, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_CBVResourceCounts, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_b235df238d563cc18cad846c2e8a8260_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_size, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_data, 1, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_CBVResourceNames, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_CBVResourceBindings, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_CBVResourceCounts, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_2d28b3918732285f96302c29bce37249_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_size, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_data, 1, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_CBVResourceNames, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_CBVResourceBindings, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_CBVResourceCounts, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_CBVResourceSets, 1, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_TextureSRVResourceNames, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_TextureSRVResourceBindings, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_TextureSRVResourceCounts, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_TextureSRVResourceSets, 1, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_TextureUAVResourceNames, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_TextureUAVResourceBindings, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_TextureUAVResourceCounts, g_ffx_cas_sharpen_pass_463bf079c9d02424d87e19b1ac6d0222_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

