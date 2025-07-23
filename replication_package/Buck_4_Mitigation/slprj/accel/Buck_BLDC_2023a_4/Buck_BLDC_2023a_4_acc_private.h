#ifndef Buck_BLDC_2023a_4_acc_private_h_
#define Buck_BLDC_2023a_4_acc_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Buck_BLDC_2023a_4_acc_types.h"
#include "Buck_BLDC_2023a_4_acc.h"
#if !defined(ss_VALIDATE_MEMORY)
#define ss_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern real_T look1_binlcpw ( real_T u0 , const real_T bp0 [ ] , const real_T
table [ ] , uint32_T maxIndex ) ; void
Buck_BLDC_2023a_4_Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0 (
SimStruct * S ) ; void
Buck_BLDC_2023a_4_Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0_Term (
SimStruct * const S ) ;
#endif
