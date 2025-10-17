#include "ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c.h"
#include "ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363.h"

typedef union ffx_fsr2_lock_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_lock_pass_16bit_PermutationKey;

typedef struct ffx_fsr2_lock_pass_16bit_PermutationInfo {
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
} ffx_fsr2_lock_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_lock_pass_16bit_IndirectionTable[] = {
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

static const ffx_fsr2_lock_pass_16bit_PermutationInfo g_ffx_fsr2_lock_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_size, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_data, 1, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_CBVResourceNames, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_CBVResourceBindings, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_CBVResourceCounts, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_16bit_e39ad184caf9e57e3dd551818942cf1c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_size, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_data, 1, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_CBVResourceNames, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_CBVResourceBindings, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_CBVResourceCounts, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_16bit_49824370b68c08719e03445815830363_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

