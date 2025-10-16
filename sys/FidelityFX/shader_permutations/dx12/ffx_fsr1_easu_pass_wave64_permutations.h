#include "ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245.h"
#include "ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088.h"
#include "ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f.h"
#include "ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95.h"

typedef union ffx_fsr1_easu_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_easu_pass_wave64_PermutationKey;

typedef struct ffx_fsr1_easu_pass_wave64_PermutationInfo {
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
} ffx_fsr1_easu_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr1_easu_pass_wave64_IndirectionTable[] = {
    3,
    1,
    3,
    1,
    0,
    2,
    0,
    2,
};

static const ffx_fsr1_easu_pass_wave64_PermutationInfo g_ffx_fsr1_easu_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_size, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_data, 1, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_CBVResourceNames, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_CBVResourceBindings, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_CBVResourceCounts, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_SamplerResourceNames, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_SamplerResourceBindings, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_SamplerResourceCounts, g_ffx_fsr1_easu_pass_wave64_36278bad6030a54c0d7f4af54d231245_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_size, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_data, 1, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_CBVResourceNames, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_CBVResourceBindings, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_CBVResourceCounts, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_SamplerResourceNames, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_SamplerResourceBindings, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_SamplerResourceCounts, g_ffx_fsr1_easu_pass_wave64_0044d902d6f99c5935b9d4119359f088_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_size, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_data, 1, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_CBVResourceNames, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_CBVResourceBindings, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_CBVResourceCounts, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_SamplerResourceNames, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_SamplerResourceBindings, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_SamplerResourceCounts, g_ffx_fsr1_easu_pass_wave64_9a5b757213aaa4f12495ef724ea94c0f_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_size, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_data, 1, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_CBVResourceNames, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_CBVResourceBindings, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_CBVResourceCounts, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_SamplerResourceNames, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_SamplerResourceBindings, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_SamplerResourceCounts, g_ffx_fsr1_easu_pass_wave64_1d7df1222ef56be17c71de88499a7b95_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

