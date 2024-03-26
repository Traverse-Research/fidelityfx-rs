#include "ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517.h"
#include "ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e.h"
#include "ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c.h"
#include "ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd.h"
#include "ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763.h"
#include "ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb.h"
#include "ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173.h"
#include "ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e.h"

typedef union ffx_fsr2_depth_clip_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_depth_clip_pass_wave64_PermutationKey;

typedef struct ffx_fsr2_depth_clip_pass_wave64_PermutationInfo {
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
} ffx_fsr2_depth_clip_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr2_depth_clip_pass_wave64_IndirectionTable[] = {
    7,
    7,
    7,
    7,
    5,
    5,
    5,
    5,
    3,
    3,
    3,
    3,
    0,
    0,
    0,
    0,
    6,
    6,
    6,
    6,
    4,
    4,
    4,
    4,
    2,
    2,
    2,
    2,
    1,
    1,
    1,
    1,
    7,
    7,
    7,
    7,
    5,
    5,
    5,
    5,
    3,
    3,
    3,
    3,
    0,
    0,
    0,
    0,
    6,
    6,
    6,
    6,
    4,
    4,
    4,
    4,
    2,
    2,
    2,
    2,
    1,
    1,
    1,
    1,
};

static const ffx_fsr2_depth_clip_pass_wave64_PermutationInfo g_ffx_fsr2_depth_clip_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_size, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_126eb0bf2c9ffc9f365ba925a4e0e517_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_size, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_76d2e22acbd3b299e46a029f7409df1e_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_size, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_264cdb3217b81b1ebddaec137446fb5c_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_size, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_de88d9990bae78f539eadee00f44bafd_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_size, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_e0ed4cc66d5fa075ef2b1bf5b4739763_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_size, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_b89def0135a5309d66c634c3fe4c42cb_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_size, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_a2316dc927454905de6f6edf3669b173_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_size, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_data, 1, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_wave64_8549015eb38425b6bf8c44e602c1b96e_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

