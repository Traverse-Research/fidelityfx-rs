#include "ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667.h"
#include "ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604.h"
#include "ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9.h"
#include "ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e.h"
#include "ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a.h"
#include "ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d.h"
#include "ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d.h"
#include "ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff.h"
#include "ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c.h"
#include "ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b.h"
#include "ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c.h"
#include "ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c.h"
#include "ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f.h"
#include "ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03.h"
#include "ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70.h"
#include "ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710.h"
#include "ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22.h"
#include "ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5.h"
#include "ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1.h"
#include "ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5.h"
#include "ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21.h"
#include "ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8.h"
#include "ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94.h"
#include "ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147.h"
#include "ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94.h"
#include "ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94.h"
#include "ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0.h"
#include "ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2.h"
#include "ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9.h"
#include "ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49.h"

typedef union ffx_blur_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_BLUR_OPTION_KERNEL_DIMENSION : 4;
        uint32_t FFX_BLUR_OPTION_KERNEL_PERMUTATION : 2;
    };
    uint32_t index;
} ffx_blur_pass_wave64_PermutationKey;

typedef struct ffx_blur_pass_wave64_PermutationInfo {
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
} ffx_blur_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_blur_pass_wave64_IndirectionTable[] = {
    25,
    22,
    27,
    23,
    17,
    14,
    15,
    5,
    8,
    4,
    0,
    0,
    0,
    0,
    0,
    0,
    28,
    29,
    21,
    16,
    9,
    13,
    6,
    11,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    26,
    24,
    18,
    19,
    20,
    12,
    10,
    7,
    1,
    3,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

static const ffx_blur_pass_wave64_PermutationInfo g_ffx_blur_pass_wave64_PermutationInfo[] = {
    { g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_size, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_data, 1, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_CBVResourceNames, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_CBVResourceBindings, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_CBVResourceCounts, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_CBVResourceSets, 1, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_TextureSRVResourceNames, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_TextureUAVResourceNames, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_cf65e9513ab3c4e5b9caa677dcb3d667_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_size, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_data, 1, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_CBVResourceNames, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_CBVResourceBindings, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_CBVResourceCounts, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_CBVResourceSets, 1, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_TextureSRVResourceNames, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_TextureUAVResourceNames, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_4f33c90537ccfcd88227c1ee45387604_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_size, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_data, 1, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_CBVResourceNames, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_CBVResourceBindings, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_CBVResourceCounts, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_CBVResourceSets, 1, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_TextureSRVResourceNames, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_TextureUAVResourceNames, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_a28c9d640a1a6456cd79189910722bc9_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_size, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_data, 1, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_CBVResourceNames, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_CBVResourceBindings, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_CBVResourceCounts, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_CBVResourceSets, 1, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_TextureSRVResourceNames, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_TextureUAVResourceNames, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_ef698dac7e633c771a3a82f0fb96086e_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_size, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_data, 1, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_CBVResourceNames, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_CBVResourceBindings, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_CBVResourceCounts, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_CBVResourceSets, 1, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_TextureSRVResourceNames, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_TextureUAVResourceNames, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_a83cfa196153635dc1693f1a5352631a_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_size, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_data, 1, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_CBVResourceNames, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_CBVResourceBindings, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_CBVResourceCounts, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_CBVResourceSets, 1, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_TextureSRVResourceNames, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_TextureUAVResourceNames, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_cc10929b5caf2ff6b4311eddd7b77e1d_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_size, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_data, 1, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_CBVResourceNames, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_CBVResourceBindings, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_CBVResourceCounts, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_CBVResourceSets, 1, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_TextureSRVResourceNames, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_TextureUAVResourceNames, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_0ee8d3c24b25abd8c0111d5bab37ca9d_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_size, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_data, 1, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_CBVResourceNames, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_CBVResourceBindings, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_CBVResourceCounts, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_CBVResourceSets, 1, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_TextureSRVResourceNames, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_TextureUAVResourceNames, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_08c36ed355cbf75b5b3a06746b677dff_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_size, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_data, 1, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_CBVResourceNames, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_CBVResourceBindings, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_CBVResourceCounts, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_CBVResourceSets, 1, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_TextureSRVResourceNames, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_TextureUAVResourceNames, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_eb019c44bca440721fc3102573392d9c_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_size, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_data, 1, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_CBVResourceNames, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_CBVResourceBindings, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_CBVResourceCounts, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_CBVResourceSets, 1, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_TextureSRVResourceNames, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_TextureUAVResourceNames, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_98b9eeec5de25cccfdf65aa589251c8b_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_size, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_data, 1, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_CBVResourceNames, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_CBVResourceBindings, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_CBVResourceCounts, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_CBVResourceSets, 1, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_TextureSRVResourceNames, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_TextureUAVResourceNames, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_c69db080a3afed649a481cb307d7ef5c_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_size, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_data, 1, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_CBVResourceNames, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_CBVResourceBindings, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_CBVResourceCounts, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_CBVResourceSets, 1, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_TextureSRVResourceNames, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_TextureUAVResourceNames, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_e8a69698bf7a0d191e9f22ed3f24a13c_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_size, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_data, 1, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_CBVResourceNames, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_CBVResourceBindings, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_CBVResourceCounts, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_CBVResourceSets, 1, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_TextureSRVResourceNames, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_TextureUAVResourceNames, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_9db49b14ef44e4c8d6d9325fdc6c381f_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_size, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_data, 1, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_CBVResourceNames, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_CBVResourceBindings, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_CBVResourceCounts, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_CBVResourceSets, 1, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_TextureSRVResourceNames, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_TextureUAVResourceNames, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_a59c6f0d4182f2d8eba05a07641c6b03_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_size, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_data, 1, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_CBVResourceNames, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_CBVResourceBindings, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_CBVResourceCounts, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_CBVResourceSets, 1, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_TextureSRVResourceNames, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_TextureUAVResourceNames, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_b893781d9dc26d35507978f2de33cc70_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_size, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_data, 1, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_CBVResourceNames, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_CBVResourceBindings, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_CBVResourceCounts, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_CBVResourceSets, 1, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_TextureSRVResourceNames, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_TextureUAVResourceNames, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_15397821cd414ef16c13014118c6f710_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_size, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_data, 1, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_CBVResourceNames, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_CBVResourceBindings, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_CBVResourceCounts, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_CBVResourceSets, 1, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_TextureSRVResourceNames, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_TextureUAVResourceNames, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_2cc4f1afbd334881d303d53fa7634c22_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_size, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_data, 1, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_CBVResourceNames, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_CBVResourceBindings, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_CBVResourceCounts, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_CBVResourceSets, 1, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_TextureSRVResourceNames, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_TextureUAVResourceNames, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_3cc08832e971b3c49884bb4f762f81c5_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_size, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_data, 1, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_CBVResourceNames, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_CBVResourceBindings, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_CBVResourceCounts, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_CBVResourceSets, 1, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_TextureSRVResourceNames, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_TextureUAVResourceNames, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_449f64024d4ea1fa87fd7d45f4fd6ea1_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_size, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_data, 1, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_CBVResourceNames, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_CBVResourceBindings, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_CBVResourceCounts, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_CBVResourceSets, 1, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_TextureSRVResourceNames, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_TextureUAVResourceNames, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_15b69efa775ee4be6a5e668350b5bbe5_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_size, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_data, 1, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_CBVResourceNames, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_CBVResourceBindings, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_CBVResourceCounts, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_CBVResourceSets, 1, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_TextureSRVResourceNames, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_TextureUAVResourceNames, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_dd19d8b4d70103102f6e208328657b21_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_size, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_data, 1, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_CBVResourceNames, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_CBVResourceBindings, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_CBVResourceCounts, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_CBVResourceSets, 1, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_TextureSRVResourceNames, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_TextureUAVResourceNames, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_0f5ce871a0f73c20196d667115f738f8_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_size, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_data, 1, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_CBVResourceNames, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_CBVResourceBindings, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_CBVResourceCounts, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_CBVResourceSets, 1, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_TextureSRVResourceNames, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_TextureUAVResourceNames, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_ef765219d3e69e3ec966f4e9d8418b94_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_size, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_data, 1, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_CBVResourceNames, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_CBVResourceBindings, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_CBVResourceCounts, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_CBVResourceSets, 1, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_TextureSRVResourceNames, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_TextureUAVResourceNames, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_e6bea97e3aca5c291628435e80c2f147_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_size, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_data, 1, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_CBVResourceNames, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_CBVResourceBindings, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_CBVResourceCounts, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_CBVResourceSets, 1, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_TextureSRVResourceNames, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_TextureUAVResourceNames, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_de797f24c56cb766eb60dd532f985c94_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_size, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_data, 1, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_CBVResourceNames, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_CBVResourceBindings, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_CBVResourceCounts, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_CBVResourceSets, 1, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_TextureSRVResourceNames, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_TextureUAVResourceNames, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_74b354b222983f11bd9929ec18b52c94_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_size, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_data, 1, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_CBVResourceNames, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_CBVResourceBindings, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_CBVResourceCounts, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_CBVResourceSets, 1, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_TextureSRVResourceNames, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_TextureUAVResourceNames, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_cd28c267f2525ff1476ce4b632d6b2c0_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_size, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_data, 1, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_CBVResourceNames, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_CBVResourceBindings, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_CBVResourceCounts, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_CBVResourceSets, 1, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_TextureSRVResourceNames, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_TextureUAVResourceNames, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_605e19bd0f006d0853a76bb2fdbf9ba2_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_size, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_data, 1, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_CBVResourceNames, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_CBVResourceBindings, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_CBVResourceCounts, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_CBVResourceSets, 1, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_TextureSRVResourceNames, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_TextureUAVResourceNames, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_e32b1d123a5441cab23fdb7b98b73bd9_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_size, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_data, 1, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_CBVResourceNames, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_CBVResourceBindings, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_CBVResourceCounts, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_CBVResourceSets, 1, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_TextureSRVResourceNames, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_TextureSRVResourceBindings, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_TextureSRVResourceCounts, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_TextureSRVResourceSets, 1, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_TextureUAVResourceNames, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_TextureUAVResourceBindings, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_TextureUAVResourceCounts, g_ffx_blur_pass_wave64_9c57455774abdb9161988f0895f04a49_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

