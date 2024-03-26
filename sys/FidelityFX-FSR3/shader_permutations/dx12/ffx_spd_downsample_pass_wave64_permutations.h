#include "ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d.h"
#include "ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5.h"
#include "ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100.h"
#include "ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a.h"
#include "ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201.h"
#include "ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0.h"
#include "ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0.h"
#include "ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0.h"
#include "ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955.h"
#include "ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a.h"
#include "ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241.h"
#include "ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff.h"

typedef union ffx_spd_downsample_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_SPD_OPTION_LINEAR_SAMPLE : 1;
        uint32_t FFX_SPD_OPTION_WAVE_INTEROP_LDS : 1;
        uint32_t FFX_SPD_OPTION_DOWNSAMPLE_FILTER : 2;
    };
    uint32_t index;
} ffx_spd_downsample_pass_wave64_PermutationKey;

typedef struct ffx_spd_downsample_pass_wave64_PermutationInfo {
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
} ffx_spd_downsample_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_spd_downsample_pass_wave64_IndirectionTable[] = {
    1,
    4,
    10,
    7,
    6,
    0,
    2,
    9,
    8,
    5,
    3,
    11,
    0,
    0,
    0,
    0,
};

static const ffx_spd_downsample_pass_wave64_PermutationInfo g_ffx_spd_downsample_pass_wave64_PermutationInfo[] = {
    { g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_size, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_data, 1, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_CBVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_TextureSRVResourceNames, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_TextureSRVResourceBindings, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_TextureSRVResourceCounts, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_TextureSRVResourceSpaces, 2, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_BufferUAVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_SamplerResourceNames, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_SamplerResourceBindings, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_SamplerResourceCounts, g_ffx_spd_downsample_pass_wave64_a8d25c35950a5b5970fef1556951f18d_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_size, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_data, 1, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_CBVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_9f92f1b133f8203dbe1e90cd7e625be5_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_size, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_data, 1, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_CBVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_29dab2252fb986dc9ec846dbce8ab100_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_size, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_data, 1, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_CBVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_5e3639ec03bad5778d320d7d29a1fe4a_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_size, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_data, 1, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_CBVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_TextureSRVResourceNames, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_TextureSRVResourceBindings, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_TextureSRVResourceCounts, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_TextureSRVResourceSpaces, 2, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_BufferUAVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_SamplerResourceNames, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_SamplerResourceBindings, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_SamplerResourceCounts, g_ffx_spd_downsample_pass_wave64_c317fadd97f615820c7ccf181ea95201_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_size, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_data, 1, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_CBVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_TextureSRVResourceNames, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_TextureSRVResourceBindings, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_TextureSRVResourceCounts, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_TextureSRVResourceSpaces, 2, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_BufferUAVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_SamplerResourceNames, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_SamplerResourceBindings, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_SamplerResourceCounts, g_ffx_spd_downsample_pass_wave64_e6d4fc4204082f2a64f25aa7292fd5a0_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_size, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_data, 1, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_CBVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_83a19046e49d746fc3891274f27b49d0_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_size, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_data, 1, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_CBVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_TextureSRVResourceNames, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_TextureSRVResourceBindings, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_TextureSRVResourceCounts, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_TextureSRVResourceSpaces, 2, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_BufferUAVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_SamplerResourceNames, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_SamplerResourceBindings, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_SamplerResourceCounts, g_ffx_spd_downsample_pass_wave64_9be08892fff7d3d3b940ada82a3fa6d0_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_size, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_data, 1, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_CBVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_4254191b73e06f4ed2430d34f2895955_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_size, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_data, 1, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_CBVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_TextureSRVResourceNames, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_TextureSRVResourceBindings, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_TextureSRVResourceCounts, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_TextureSRVResourceSpaces, 2, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_BufferUAVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_SamplerResourceNames, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_SamplerResourceBindings, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_SamplerResourceCounts, g_ffx_spd_downsample_pass_wave64_5eda75165ecb180c04a5eeb5c29dae5a_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_size, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_data, 1, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_CBVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_ff40ad7789c01cbfe7914e297cb24241_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_size, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_data, 1, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_CBVResourceNames, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_CBVResourceBindings, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_CBVResourceCounts, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_CBVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_TextureSRVResourceNames, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_TextureSRVResourceBindings, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_TextureSRVResourceCounts, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_TextureSRVResourceSpaces, 2, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_TextureUAVResourceNames, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_TextureUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_TextureUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 1, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_BufferUAVResourceNames, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_BufferUAVResourceBindings, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_BufferUAVResourceCounts, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_BufferUAVResourceSpaces, 1, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_SamplerResourceNames, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_SamplerResourceBindings, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_SamplerResourceCounts, g_ffx_spd_downsample_pass_wave64_02b255645997bab03be8af62633f3bff_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

