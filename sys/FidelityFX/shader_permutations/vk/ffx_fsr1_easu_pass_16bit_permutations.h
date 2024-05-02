#include "ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb.h"
#include "ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab.h"
#include "ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573.h"
#include "ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388.h"

typedef union ffx_fsr1_easu_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_easu_pass_16bit_PermutationKey;

typedef struct ffx_fsr1_easu_pass_16bit_PermutationInfo {
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
} ffx_fsr1_easu_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr1_easu_pass_16bit_IndirectionTable[] = {
    3,
    1,
    3,
    1,
    2,
    0,
    2,
    0,
};

static const ffx_fsr1_easu_pass_16bit_PermutationInfo g_ffx_fsr1_easu_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_size, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_data, 1, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_CBVResourceNames, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_CBVResourceBindings, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_CBVResourceCounts, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_CBVResourceSets, 1, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_TextureSRVResourceSets, 1, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_SamplerResourceNames, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_SamplerResourceBindings, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_SamplerResourceCounts, g_ffx_fsr1_easu_pass_16bit_1ff8ac13267291ba1f28a799d2c49acb_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_size, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_data, 1, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_CBVResourceNames, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_CBVResourceBindings, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_CBVResourceCounts, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_CBVResourceSets, 1, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_TextureSRVResourceSets, 1, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_SamplerResourceNames, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_SamplerResourceBindings, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_SamplerResourceCounts, g_ffx_fsr1_easu_pass_16bit_a357ef7aa851da42ebc480226d9d9dab_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_size, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_data, 1, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_CBVResourceNames, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_CBVResourceBindings, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_CBVResourceCounts, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_CBVResourceSets, 1, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_TextureSRVResourceSets, 1, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_SamplerResourceNames, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_SamplerResourceBindings, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_SamplerResourceCounts, g_ffx_fsr1_easu_pass_16bit_e0431f49fdac46b57cfd7a1dffcf2573_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_size, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_data, 1, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_CBVResourceNames, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_CBVResourceBindings, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_CBVResourceCounts, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_CBVResourceSets, 1, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_TextureSRVResourceSets, 1, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_SamplerResourceNames, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_SamplerResourceBindings, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_SamplerResourceCounts, g_ffx_fsr1_easu_pass_16bit_4032d1daeb0e89986248d1249c698388_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

