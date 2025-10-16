#include "ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224.h"
#include "ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819.h"

typedef union ffx_classifier_reflections_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_CLASSIFIER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_CLASSIFIER_OPTION_CLASSIFIER_MODE : 1;
    };
    uint32_t index;
} ffx_classifier_reflections_pass_16bit_PermutationKey;

typedef struct ffx_classifier_reflections_pass_16bit_PermutationInfo {
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
} ffx_classifier_reflections_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_classifier_reflections_pass_16bit_IndirectionTable[] = {
    1,
    0,
    1,
    0,
};

static const ffx_classifier_reflections_pass_16bit_PermutationInfo g_ffx_classifier_reflections_pass_16bit_PermutationInfo[] = {
    { g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_size, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_data, 1, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_CBVResourceNames, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_CBVResourceBindings, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_CBVResourceCounts, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_CBVResourceSpaces, 7, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_TextureSRVResourceNames, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_TextureSRVResourceBindings, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_TextureSRVResourceCounts, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_TextureSRVResourceSpaces, 3, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_TextureUAVResourceNames, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_TextureUAVResourceBindings, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_TextureUAVResourceCounts, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 4, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_BufferUAVResourceNames, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_BufferUAVResourceBindings, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_BufferUAVResourceCounts, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_BufferUAVResourceSpaces, 2, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_SamplerResourceNames, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_SamplerResourceBindings, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_SamplerResourceCounts, g_ffx_classifier_reflections_pass_16bit_e34c864248b1deb385cae0f40d1a7224_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_size, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_data, 1, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_CBVResourceNames, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_CBVResourceBindings, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_CBVResourceCounts, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_CBVResourceSpaces, 7, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_TextureSRVResourceNames, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_TextureSRVResourceBindings, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_TextureSRVResourceCounts, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_TextureSRVResourceSpaces, 3, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_TextureUAVResourceNames, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_TextureUAVResourceBindings, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_TextureUAVResourceCounts, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 4, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_BufferUAVResourceNames, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_BufferUAVResourceBindings, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_BufferUAVResourceCounts, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_BufferUAVResourceSpaces, 2, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_SamplerResourceNames, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_SamplerResourceBindings, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_SamplerResourceCounts, g_ffx_classifier_reflections_pass_16bit_b64a341b00fc9fb3ec7590b04daf1819_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

