#include "ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40.h"
#include "ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed.h"

typedef union ffx_sssr_intersect_pass_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_intersect_pass_PermutationKey;

typedef struct ffx_sssr_intersect_pass_PermutationInfo {
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
} ffx_sssr_intersect_pass_PermutationInfo;

static const uint32_t g_ffx_sssr_intersect_pass_IndirectionTable[] = {
    0,
    1,
};

static const ffx_sssr_intersect_pass_PermutationInfo g_ffx_sssr_intersect_pass_PermutationInfo[] = {
    { g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_size, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_data, 1, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_CBVResourceNames, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_CBVResourceBindings, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_CBVResourceCounts, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_CBVResourceSpaces, 6, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_TextureSRVResourceNames, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_TextureSRVResourceBindings, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_TextureSRVResourceCounts, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_TextureSRVResourceSpaces, 1, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_TextureUAVResourceNames, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_TextureUAVResourceBindings, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_TextureUAVResourceCounts, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_BufferUAVResourceNames, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_BufferUAVResourceBindings, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_BufferUAVResourceCounts, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_BufferUAVResourceSpaces, 1, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_SamplerResourceNames, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_SamplerResourceBindings, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_SamplerResourceCounts, g_ffx_sssr_intersect_pass_7ef88d2d3b84454df8161b702af1ce40_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_size, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_data, 1, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_CBVResourceNames, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_CBVResourceBindings, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_CBVResourceCounts, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_CBVResourceSpaces, 6, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_TextureSRVResourceNames, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_TextureSRVResourceBindings, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_TextureSRVResourceCounts, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_TextureSRVResourceSpaces, 1, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_TextureUAVResourceNames, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_TextureUAVResourceBindings, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_TextureUAVResourceCounts, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_BufferUAVResourceNames, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_BufferUAVResourceBindings, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_BufferUAVResourceCounts, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_BufferUAVResourceSpaces, 1, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_SamplerResourceNames, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_SamplerResourceBindings, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_SamplerResourceCounts, g_ffx_sssr_intersect_pass_d3fada5adfec5909f190fa9cc0edb0ed_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

