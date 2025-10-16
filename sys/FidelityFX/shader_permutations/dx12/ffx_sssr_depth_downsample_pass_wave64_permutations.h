#include "ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365.h"
#include "ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48.h"

typedef union ffx_sssr_depth_downsample_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_depth_downsample_pass_wave64_PermutationKey;

typedef struct ffx_sssr_depth_downsample_pass_wave64_PermutationInfo {
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
} ffx_sssr_depth_downsample_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_sssr_depth_downsample_pass_wave64_IndirectionTable[] = {
    1,
    0,
};

static const ffx_sssr_depth_downsample_pass_wave64_PermutationInfo g_ffx_sssr_depth_downsample_pass_wave64_PermutationInfo[] = {
    { g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_size, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_data, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_TextureSRVResourceNames, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_TextureSRVResourceBindings, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_TextureSRVResourceCounts, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_TextureSRVResourceSpaces, 1, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_TextureUAVResourceNames, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_TextureUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_TextureUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_BufferUAVResourceNames, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_BufferUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_BufferUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_wave64_8266d7eb52b7e8eb2c600b05d6ced365_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_size, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_data, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_TextureSRVResourceNames, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_TextureSRVResourceBindings, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_TextureSRVResourceCounts, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_TextureSRVResourceSpaces, 1, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_TextureUAVResourceNames, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_TextureUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_TextureUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_BufferUAVResourceNames, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_BufferUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_BufferUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_wave64_336fc7e196c3323f30fd3ccd1372ac48_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

