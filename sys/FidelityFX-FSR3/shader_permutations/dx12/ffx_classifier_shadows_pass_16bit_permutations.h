#include "ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b.h"
#include "ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5.h"
#include "ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab.h"
#include "ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292.h"

typedef union ffx_classifier_shadows_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_CLASSIFIER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_CLASSIFIER_OPTION_CLASSIFIER_MODE : 1;
    };
    uint32_t index;
} ffx_classifier_shadows_pass_16bit_PermutationKey;

typedef struct ffx_classifier_shadows_pass_16bit_PermutationInfo {
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
} ffx_classifier_shadows_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_classifier_shadows_pass_16bit_IndirectionTable[] = {
    1,
    0,
    2,
    3,
};

static const ffx_classifier_shadows_pass_16bit_PermutationInfo g_ffx_classifier_shadows_pass_16bit_PermutationInfo[] = {
    { g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_size, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_data, 1, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_CBVResourceNames, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_CBVResourceBindings, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_CBVResourceCounts, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_CBVResourceSpaces, 2, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_TextureSRVResourceNames, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_TextureSRVResourceBindings, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_TextureSRVResourceCounts, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_TextureSRVResourceSpaces, 1, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_TextureUAVResourceNames, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_TextureUAVResourceBindings, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_TextureUAVResourceCounts, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_BufferUAVResourceNames, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_BufferUAVResourceBindings, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_BufferUAVResourceCounts, g_ffx_classifier_shadows_pass_16bit_984c7036b40e1fe72dbfa5f50752c91b_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_size, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_data, 1, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_CBVResourceNames, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_CBVResourceBindings, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_CBVResourceCounts, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_CBVResourceSpaces, 2, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_TextureSRVResourceNames, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_TextureSRVResourceBindings, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_TextureSRVResourceCounts, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_TextureSRVResourceSpaces, 1, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_TextureUAVResourceNames, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_TextureUAVResourceBindings, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_TextureUAVResourceCounts, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_BufferUAVResourceNames, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_BufferUAVResourceBindings, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_BufferUAVResourceCounts, g_ffx_classifier_shadows_pass_16bit_ba03e2a8946ac869c4253718364404c5_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_size, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_data, 1, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_CBVResourceNames, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_CBVResourceBindings, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_CBVResourceCounts, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_CBVResourceSpaces, 3, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_TextureSRVResourceNames, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_TextureSRVResourceBindings, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_TextureSRVResourceCounts, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_TextureSRVResourceSpaces, 1, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_TextureUAVResourceNames, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_TextureUAVResourceBindings, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_TextureUAVResourceCounts, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_BufferUAVResourceNames, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_BufferUAVResourceBindings, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_BufferUAVResourceCounts, g_ffx_classifier_shadows_pass_16bit_269037006a2f60cca20172af06f083ab_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_size, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_data, 1, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_CBVResourceNames, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_CBVResourceBindings, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_CBVResourceCounts, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_CBVResourceSpaces, 3, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_TextureSRVResourceNames, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_TextureSRVResourceBindings, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_TextureSRVResourceCounts, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_TextureSRVResourceSpaces, 1, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_TextureUAVResourceNames, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_TextureUAVResourceBindings, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_TextureUAVResourceCounts, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 2, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_BufferUAVResourceNames, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_BufferUAVResourceBindings, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_BufferUAVResourceCounts, g_ffx_classifier_shadows_pass_16bit_0a2772902bf4c698be1329cc262b8292_BufferUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

