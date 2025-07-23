#include "Buck_BLDC_2023a_4_capi_host.h"
static Buck_BLDC_2023a_4_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Buck_BLDC_2023a_4_host_InitializeDataMapInfo(&(root), "Buck_BLDC_2023a_4");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
