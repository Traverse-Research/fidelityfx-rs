#include "ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487.h"
#include "ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec.h"

typedef union ffx_denoiser_shadows_tile_classification_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_DENOISER_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_denoiser_shadows_tile_classification_pass_wave64_PermutationKey;

typedef struct ffx_denoiser_shadows_tile_classification_pass_wave64_PermutationInfo {
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
} ffx_denoiser_shadows_tile_classification_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_denoiser_shadows_tile_classification_pass_wave64_IndirectionTable[] = {
    1,
    0,
};

static const ffx_denoiser_shadows_tile_classification_pass_wave64_PermutationInfo g_ffx_denoiser_shadows_tile_classification_pass_wave64_PermutationInfo[] = {
    { g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_size, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_data, 1, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_CBVResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_CBVResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_CBVResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_CBVResourceSpaces, 6, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_TextureSRVResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_TextureSRVResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_TextureSRVResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_TextureSRVResourceSpaces, 2, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_TextureUAVResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_TextureUAVResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_TextureUAVResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_BufferUAVResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_BufferUAVResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_BufferUAVResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_BufferUAVResourceSpaces, 1, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_SamplerResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_SamplerResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_SamplerResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_040a882915935b0861343cd2fcd20487_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_size, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_data, 1, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_CBVResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_CBVResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_CBVResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_CBVResourceSpaces, 6, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_TextureSRVResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_TextureSRVResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_TextureSRVResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_TextureSRVResourceSpaces, 2, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_TextureUAVResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_TextureUAVResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_TextureUAVResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_BufferUAVResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_BufferUAVResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_BufferUAVResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_BufferUAVResourceSpaces, 1, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_SamplerResourceNames, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_SamplerResourceBindings, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_SamplerResourceCounts, g_ffx_denoiser_shadows_tile_classification_pass_wave64_850884d7c585c6fa0e2e7c9f0faf8cec_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

