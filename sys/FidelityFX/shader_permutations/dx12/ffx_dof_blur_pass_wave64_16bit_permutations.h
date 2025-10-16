#include "ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4.h"
#include "ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf.h"

typedef union ffx_dof_blur_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_blur_pass_wave64_16bit_PermutationKey;

typedef struct ffx_dof_blur_pass_wave64_16bit_PermutationInfo {
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
} ffx_dof_blur_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_dof_blur_pass_wave64_16bit_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_dof_blur_pass_wave64_16bit_PermutationInfo g_ffx_dof_blur_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_size, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_data, 1, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_CBVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_CBVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_CBVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_CBVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_TextureSRVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_TextureSRVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_TextureSRVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_TextureSRVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_TextureUAVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_TextureUAVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_TextureUAVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_BufferUAVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_BufferUAVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_BufferUAVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_BufferUAVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_SamplerResourceNames, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_SamplerResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_SamplerResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_3ce65dcabe5e4b98824ca0c62cb8f9c4_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_size, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_data, 1, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_CBVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_CBVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_CBVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_CBVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_TextureSRVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_TextureSRVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_TextureSRVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_TextureSRVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_TextureUAVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_TextureUAVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_TextureUAVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_BufferUAVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_BufferUAVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_BufferUAVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_BufferUAVResourceSpaces, 2, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_SamplerResourceNames, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_SamplerResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_SamplerResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_06a21206a6cae20767939a91001f09bf_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

