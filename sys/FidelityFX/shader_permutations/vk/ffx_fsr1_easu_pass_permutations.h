#include "ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af.h"
#include "ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e.h"
#include "ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab.h"
#include "ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4.h"

typedef union ffx_fsr1_easu_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_easu_pass_PermutationKey;

typedef struct ffx_fsr1_easu_pass_PermutationInfo {
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
} ffx_fsr1_easu_pass_PermutationInfo;

static const uint32_t g_ffx_fsr1_easu_pass_IndirectionTable[] = {
    3,
    2,
    3,
    2,
    1,
    0,
    1,
    0,
};

static const ffx_fsr1_easu_pass_PermutationInfo g_ffx_fsr1_easu_pass_PermutationInfo[] = {
    { g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_size, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_data, 1, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_CBVResourceNames, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_CBVResourceBindings, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_CBVResourceCounts, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_CBVResourceSets, 1, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_TextureSRVResourceSets, 1, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_SamplerResourceNames, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_SamplerResourceBindings, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_SamplerResourceCounts, g_ffx_fsr1_easu_pass_80cc6627ba6242cb819f6a80037ae3af_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_size, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_data, 1, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_CBVResourceNames, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_CBVResourceBindings, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_CBVResourceCounts, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_CBVResourceSets, 1, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_TextureSRVResourceSets, 1, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_SamplerResourceNames, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_SamplerResourceBindings, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_SamplerResourceCounts, g_ffx_fsr1_easu_pass_e150fad9c10ea518b221d8750a89322e_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_size, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_data, 1, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_CBVResourceNames, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_CBVResourceBindings, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_CBVResourceCounts, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_CBVResourceSets, 1, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_TextureSRVResourceSets, 1, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_SamplerResourceNames, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_SamplerResourceBindings, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_SamplerResourceCounts, g_ffx_fsr1_easu_pass_74342199e5d61437f14e8c5d1854a4ab_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_size, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_data, 1, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_CBVResourceNames, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_CBVResourceBindings, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_CBVResourceCounts, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_CBVResourceSets, 1, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_TextureSRVResourceSets, 1, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_SamplerResourceNames, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_SamplerResourceBindings, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_SamplerResourceCounts, g_ffx_fsr1_easu_pass_51187af737313ce928afc534d4a10cd4_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

