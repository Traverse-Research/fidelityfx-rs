#include "ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f.h"
#include "ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f.h"
#include "ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42.h"
#include "ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff.h"

typedef union ffx_brixelizergi_blur_y_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_blur_y_PermutationKey;

typedef struct ffx_brixelizergi_blur_y_PermutationInfo {
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
} ffx_brixelizergi_blur_y_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_blur_y_IndirectionTable[] = {
    2,
    3,
    0,
    1,
    2,
    3,
    0,
    1,
};

static const ffx_brixelizergi_blur_y_PermutationInfo g_ffx_brixelizergi_blur_y_PermutationInfo[] = {
    { g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_size, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_data, 1, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_CBVResourceNames, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_CBVResourceBindings, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_CBVResourceCounts, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_TextureSRVResourceNames, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_TextureUAVResourceNames, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_y_496afc58485e1ba79c5c70290c79e12f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_size, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_data, 1, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_CBVResourceNames, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_CBVResourceBindings, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_CBVResourceCounts, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_TextureSRVResourceNames, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_TextureUAVResourceNames, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_y_e3ccf65bb9db8ddaf2db1bbd463f3c6f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_size, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_data, 1, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_CBVResourceNames, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_CBVResourceBindings, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_CBVResourceCounts, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_TextureSRVResourceNames, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_TextureUAVResourceNames, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_y_3759a4c9ab651c46d9b31f03000e1f42_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_size, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_data, 1, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_CBVResourceNames, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_CBVResourceBindings, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_CBVResourceCounts, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_CBVResourceSpaces, 4, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_TextureSRVResourceNames, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_TextureSRVResourceSpaces, 2, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_TextureUAVResourceNames, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_y_46d702f1c7dbcc7be2547653ba55e4ff_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

