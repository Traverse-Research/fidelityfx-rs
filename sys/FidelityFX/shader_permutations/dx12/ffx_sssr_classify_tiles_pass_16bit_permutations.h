#include "ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd.h"
#include "ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc.h"

typedef union ffx_sssr_classify_tiles_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_classify_tiles_pass_16bit_PermutationKey;

typedef struct ffx_sssr_classify_tiles_pass_16bit_PermutationInfo {
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
} ffx_sssr_classify_tiles_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_sssr_classify_tiles_pass_16bit_IndirectionTable[] = {
    1,
    0,
};

static const ffx_sssr_classify_tiles_pass_16bit_PermutationInfo g_ffx_sssr_classify_tiles_pass_16bit_PermutationInfo[] = {
    { g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_size, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_data, 1, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_CBVResourceSpaces, 5, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_TextureSRVResourceSpaces, 2, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_BufferUAVResourceSpaces, 1, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_80def772b731a338b441e62bffd856dd_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_size, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_data, 1, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_CBVResourceSpaces, 5, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_TextureSRVResourceSpaces, 2, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_BufferUAVResourceSpaces, 1, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_899937c500a458b28d5edabe3227fdbc_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

