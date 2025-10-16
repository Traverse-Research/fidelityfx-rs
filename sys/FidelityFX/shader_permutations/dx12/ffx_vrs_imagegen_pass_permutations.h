#include "ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb.h"
#include "ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e.h"
#include "ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4.h"
#include "ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f.h"
#include "ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea.h"
#include "ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a.h"

typedef union ffx_vrs_imagegen_pass_PermutationKey {
    struct {
        uint32_t FFX_VRS_OPTION_ADDITIONALSHADINGRATES : 1;
        uint32_t FFX_VARIABLESHADING_TILESIZE : 2;
    };
    uint32_t index;
} ffx_vrs_imagegen_pass_PermutationKey;

typedef struct ffx_vrs_imagegen_pass_PermutationInfo {
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
} ffx_vrs_imagegen_pass_PermutationInfo;

static const uint32_t g_ffx_vrs_imagegen_pass_IndirectionTable[] = {
    5,
    3,
    4,
    1,
    0,
    2,
    0,
    0,
};

static const ffx_vrs_imagegen_pass_PermutationInfo g_ffx_vrs_imagegen_pass_PermutationInfo[] = {
    { g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_size, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_data, 1, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_CBVResourceNames, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_CBVResourceBindings, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_CBVResourceCounts, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_d92cc5402766c2f656c6586da77822bb_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_size, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_data, 1, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_CBVResourceNames, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_CBVResourceBindings, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_CBVResourceCounts, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_9fc46dfa03fafa22ce0852c739e3464e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_size, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_data, 1, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_CBVResourceNames, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_CBVResourceBindings, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_CBVResourceCounts, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_696a9ec54c90f2de10fc4d5141a1b2b4_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_size, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_data, 1, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_CBVResourceNames, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_CBVResourceBindings, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_CBVResourceCounts, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_e2de5b9bbeffb0a6fb9cb4707f96f33f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_size, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_data, 1, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_CBVResourceNames, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_CBVResourceBindings, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_CBVResourceCounts, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_a37c7d1ae2e7d791eb0f70c2febc9aea_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_size, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_data, 1, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_CBVResourceNames, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_CBVResourceBindings, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_CBVResourceCounts, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_CBVResourceSpaces, 2, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_TextureSRVResourceNames, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_TextureSRVResourceBindings, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_TextureSRVResourceCounts, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_TextureSRVResourceSpaces, 1, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_TextureUAVResourceNames, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_TextureUAVResourceBindings, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_TextureUAVResourceCounts, g_ffx_vrs_imagegen_pass_dce58aac4ba04214efb7b3d47bd0013a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

