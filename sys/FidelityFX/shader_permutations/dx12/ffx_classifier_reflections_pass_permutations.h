#include "ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2.h"
#include "ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853.h"

typedef union ffx_classifier_reflections_pass_PermutationKey {
    struct {
        uint32_t FFX_CLASSIFIER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_CLASSIFIER_OPTION_CLASSIFIER_MODE : 1;
    };
    uint32_t index;
} ffx_classifier_reflections_pass_PermutationKey;

typedef struct ffx_classifier_reflections_pass_PermutationInfo {
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
} ffx_classifier_reflections_pass_PermutationInfo;

static const uint32_t g_ffx_classifier_reflections_pass_IndirectionTable[] = {
    0,
    1,
    0,
    1,
};

static const ffx_classifier_reflections_pass_PermutationInfo g_ffx_classifier_reflections_pass_PermutationInfo[] = {
    { g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_size, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_data, 1, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_CBVResourceNames, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_CBVResourceBindings, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_CBVResourceCounts, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_CBVResourceSpaces, 7, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_TextureSRVResourceNames, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_TextureSRVResourceBindings, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_TextureSRVResourceCounts, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_TextureSRVResourceSpaces, 3, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_TextureUAVResourceNames, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_TextureUAVResourceBindings, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_TextureUAVResourceCounts, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 4, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_BufferUAVResourceNames, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_BufferUAVResourceBindings, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_BufferUAVResourceCounts, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_BufferUAVResourceSpaces, 2, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_SamplerResourceNames, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_SamplerResourceBindings, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_SamplerResourceCounts, g_ffx_classifier_reflections_pass_4a8c09f20a28dd2f998b9dcb8ddbfdf2_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_size, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_data, 1, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_CBVResourceNames, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_CBVResourceBindings, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_CBVResourceCounts, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_CBVResourceSpaces, 7, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_TextureSRVResourceNames, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_TextureSRVResourceBindings, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_TextureSRVResourceCounts, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_TextureSRVResourceSpaces, 3, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_TextureUAVResourceNames, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_TextureUAVResourceBindings, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_TextureUAVResourceCounts, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 4, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_BufferUAVResourceNames, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_BufferUAVResourceBindings, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_BufferUAVResourceCounts, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_BufferUAVResourceSpaces, 2, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_SamplerResourceNames, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_SamplerResourceBindings, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_SamplerResourceCounts, g_ffx_classifier_reflections_pass_53c5c05880bcc1a77515e2ff4833c853_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

