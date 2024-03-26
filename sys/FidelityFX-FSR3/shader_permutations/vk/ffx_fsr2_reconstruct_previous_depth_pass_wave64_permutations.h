#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97.h"
#include "ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2.h"

typedef union ffx_fsr2_reconstruct_previous_depth_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_reconstruct_previous_depth_pass_wave64_PermutationKey;

typedef struct ffx_fsr2_reconstruct_previous_depth_pass_wave64_PermutationInfo {
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
} ffx_fsr2_reconstruct_previous_depth_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_IndirectionTable[] = {
    14,
    14,
    4,
    4,
    11,
    11,
    3,
    3,
    13,
    13,
    6,
    6,
    9,
    9,
    1,
    1,
    12,
    12,
    8,
    8,
    10,
    10,
    2,
    2,
    15,
    15,
    5,
    5,
    7,
    7,
    0,
    0,
    14,
    14,
    4,
    4,
    11,
    11,
    3,
    3,
    13,
    13,
    6,
    6,
    9,
    9,
    1,
    1,
    12,
    12,
    8,
    8,
    10,
    10,
    2,
    2,
    15,
    15,
    5,
    5,
    7,
    7,
    0,
    0,
};

static const ffx_fsr2_reconstruct_previous_depth_pass_wave64_PermutationInfo g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_5002ac749992c93e2e6c4b7077a9756d_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_e439e83ea8155563262c75c3e805b4ee_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_aa36d13c7876dd47da304575ef9c6e2c_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6ebba9681b47190d59308f747f91bb9c_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_6f664fa44a2606e550cdeff6e1a49b45_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_be3d9d4f65f9f461b48900a91aa09b5a_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_343ae3ec3504477ef4eb05bcb1e5059a_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_8ad19580f820b3477075babd9714a91f_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_58f0a8f1088ebad2f9c8bba16dfc776e_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_7f025f43cc6125709f2b72e3f59495ab_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_d01eb7557ead70435a206eb862e42b87_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_dfc72a1c0f80394eebcc238d1d88c3e0_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_2f70862189586ac7d21ede5fe6a1e249_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_ac6eaaf95e92b0112cf83eb48d8a6ca6_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a9cc013215d59b9b947a35569bad0f97_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_size, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_data, 1, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_CBVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_CBVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_CBVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_CBVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_TextureSRVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_TextureSRVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_TextureSRVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_TextureSRVResourceSets, 4, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_TextureUAVResourceNames, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_TextureUAVResourceBindings, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_TextureUAVResourceCounts, g_ffx_fsr2_reconstruct_previous_depth_pass_wave64_a3cf0e6618d0e99f0160abd44e743cb2_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

