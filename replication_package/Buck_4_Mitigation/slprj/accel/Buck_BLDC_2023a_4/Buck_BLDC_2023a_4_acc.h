#ifndef Buck_BLDC_2023a_4_acc_h_
#define Buck_BLDC_2023a_4_acc_h_
#ifndef Buck_BLDC_2023a_4_acc_COMMON_INCLUDES_
#define Buck_BLDC_2023a_4_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn
#define S_FUNCTION_LEVEL 2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif
#include "Buck_BLDC_2023a_4_acc_types.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include <stddef.h>
typedef struct { real_T B_1_0_0 ; real_T B_1_1_8 ; real_T B_1_2_16 ; real_T
B_1_3_24 ; real_T B_1_4_32 ; real_T B_1_5_40 ; real_T B_1_6_48 ; real_T
B_1_7_56 ; real_T B_1_8_64 ; real_T B_1_9_72 ; real_T B_1_10_80 ; real_T
B_1_11_88 ; real_T B_1_12_96 ; real_T B_1_13_104 ; real_T B_1_14_112 ; real_T
B_1_15_120 ; real_T B_1_16_128 ; real_T B_1_17_136 ; real_T B_1_18_144 ;
real_T B_1_19_152 ; real_T B_1_20_160 ; real_T B_1_21_168 ; real_T B_1_22_176
; real_T B_1_23_184 [ 4 ] ; real_T B_1_27_216 [ 4 ] ; real_T B_1_31_248 ;
real_T B_1_32_256 ; real_T B_1_33_264 ; real_T B_1_34_272 ; real_T B_1_35_280
; real_T B_1_36_288 ; real_T B_1_37_296 [ 4 ] ; real_T B_1_41_328 ; real_T
B_1_42_336 ; real_T B_1_43_344 ; real_T B_1_44_352 ; real_T B_1_45_360 ;
real_T B_1_46_368 ; real_T B_1_47_376 ; real_T B_1_48_384 ; real_T B_1_49_392
; real_T B_1_50_400 ; real_T B_1_51_408 ; real_T B_1_52_416 ; real_T
B_1_53_424 ; real_T B_1_54_432 ; real_T B_1_55_440 ; real_T B_1_56_448 ;
real_T B_1_57_456 [ 6 ] ; real_T B_1_63_504 [ 4 ] ; real_T B_1_67_536 [ 4 ] ;
real_T B_1_71_568 [ 4 ] ; real_T B_1_75_600 [ 4 ] ; real_T B_1_79_632 [ 4 ] ;
real_T B_1_83_664 [ 4 ] ; real_T B_1_87_696 [ 83 ] ; real_T B_1_170_1360 [ 18
] ; real_T B_1_188_1504 ; real_T B_1_189_1512 ; real_T B_1_190_1520 ; real_T
B_1_191_1528 ; real_T B_1_192_1536 ; real_T B_1_193_1544 ; real_T
B_1_194_1552 ; real_T B_1_195_1560 ; real_T B_1_196_1568 ; real_T
B_1_197_1576 ; real_T B_1_198_1584 ; real_T B_1_199_1592 ; real_T
B_1_200_1600 ; real_T B_1_201_1608 ; real_T B_1_202_1616 ; real_T
B_1_203_1624 ; real_T B_1_204_1632 ; real_T B_1_205_1640 ; real_T
B_1_206_1648 ; real_T B_1_207_1656 ; real_T B_1_208_1664 ; real_T
B_1_209_1672 ; real_T B_1_210_1680 ; real_T B_1_211_1688 ; real_T
B_1_212_1696 ; real_T B_1_213_1704 ; real_T B_1_214_1712 ; real_T
B_1_215_1720 ; real_T B_1_216_1728 ; real_T B_1_217_1736 ; real_T
B_1_218_1744 ; real_T B_1_219_1752 ; real_T B_1_220_1760 ; real_T
B_1_221_1768 ; real_T B_1_222_1776 ; real_T B_1_223_1784 ; real_T
B_1_224_1792 ; real_T B_1_225_1800 ; real_T B_1_226_1808 [ 6 ] ; real_T
B_1_232_1856 [ 6 ] ; real_T B_1_238_1904 [ 6 ] ; real_T B_1_244_1952 [ 6 ] ;
real_T B_1_250_2000 [ 6 ] ; real_T B_1_256_2048 [ 6 ] ; real_T B_1_262_2096 ;
real_T B_1_263_2104 ; real_T B_1_264_2112 ; real_T B_1_265_2120 ; real_T
B_1_266_2128 ; real_T B_1_267_2136 ; real_T B_1_268_2144 ; real_T
B_1_269_2152 ; real_T B_1_270_2160 ; real_T B_1_271_2168 ; real_T
B_1_272_2176 ; real_T B_1_273_2184 ; real_T B_1_274_2192 ; real_T
B_1_275_2200 ; real_T B_1_276_2208 ; real_T B_1_277_2216 ; real_T
B_1_278_2224 ; real_T B_1_279_2232 ; real_T B_0_280_2240 ; uint32_T
B_1_281_2248 ; uint32_T B_1_282_2252 ; uint32_T B_1_283_2256 ; uint32_T
B_1_284_2260 ; uint32_T B_1_285_2264 ; boolean_T B_1_286_2268 ; boolean_T
B_1_287_2269 ; boolean_T B_1_288_2270 ; boolean_T B_1_289_2271 ; boolean_T
B_1_290_2272 ; boolean_T B_1_291_2273 ; boolean_T B_1_292_2274 ; boolean_T
B_1_293_2275 ; boolean_T B_1_294_2276 ; boolean_T B_1_295_2277 ; boolean_T
B_1_296_2278 ; boolean_T B_1_297_2279 ; boolean_T B_1_298_2280 ; boolean_T
B_1_299_2281 ; boolean_T B_1_300_2282 ; boolean_T B_1_301_2283 ; boolean_T
B_1_302_2284 ; boolean_T B_1_303_2285 ; boolean_T B_1_304_2286 ; boolean_T
B_1_305_2287 ; boolean_T B_1_306_2288 ; boolean_T B_1_307_2289 ; boolean_T
B_1_308_2290 ; boolean_T B_1_309_2291 ; boolean_T B_1_310_2292 ; boolean_T
B_1_311_2293 ; boolean_T B_1_312_2294 ; boolean_T B_1_313_2295 ; boolean_T
B_1_314_2296 ; boolean_T B_1_315_2297 ; boolean_T B_1_316_2298 ; char_T
pad_B_1_316_2298 [ 5 ] ; } B_Buck_BLDC_2023a_4_T ; typedef struct { real_T
DiscreteTimeIntegrator_DSTATE ; real_T UnitDelay_DSTATE ; real_T
Integrator_DSTATE ; real_T Filter_DSTATE ; real_T INPUT_1_1_1_Discrete [ 2 ]
; real_T INPUT_2_1_1_Discrete [ 2 ] ; real_T INPUT_3_1_1_Discrete [ 2 ] ;
real_T UnitDelay_DSTATE_h ; real_T INPUT_5_1_1_Discrete [ 2 ] ; real_T
INPUT_6_1_1_Discrete [ 2 ] ; real_T INPUT_7_1_1_Discrete [ 2 ] ; real_T
INPUT_8_1_1_Discrete [ 2 ] ; real_T INPUT_9_1_1_Discrete [ 2 ] ; real_T
INPUT_4_1_1_Discrete [ 2 ] ; real_T STATE_1_Discrete [ 64 ] ; real_T
DiscreteTimeIntegrator_DSTATE_m ; real_T UnitDelay1_DSTATE ; real_T
UnitDelay1_DSTATE_o ; real_T DiscreteTimeIntegrator_DSTATE_f ; real_T
STATE_1_ZcValueStore ; real_T OUTPUT_1_0_Discrete ; real_T
OUTPUT_1_0_ZcValueStore ; real_T OUTPUT_1_1_Discrete ; real_T
OUTPUT_1_1_ZcValueStore ; real_T TimeStampA ; real_T LastUAtTimeA ; real_T
TimeStampB ; real_T LastUAtTimeB ; real_T Memory1_PreviousInput ; void *
STATE_1_Simulator ; void * STATE_1_SimData ; void * STATE_1_DiagMgr ; void *
STATE_1_ZcLogger ; void * STATE_1_TsInfo ; void * OUTPUT_1_0_Simulator ; void
* OUTPUT_1_0_SimData ; void * OUTPUT_1_0_DiagMgr ; void * OUTPUT_1_0_ZcLogger
; void * OUTPUT_1_0_TsInfo ; void * Scope_PWORK [ 3 ] ; void * Scope1_PWORK [
2 ] ; void * Scope2_PWORK [ 3 ] ; void * Scope3_PWORK [ 3 ] ; struct { void *
AQHandles ; }
TAQSigLogging_InsertedFor_PSSimulinkConverter1_at_outport_0_PWORK ; struct {
void * AQHandles ; }
TAQSigLogging_InsertedFor_PSSimulinkConverter2_at_outport_0_PWORK ; struct {
void * AQHandles ; }
TAQSigLogging_InsertedFor_PSSimulinkConverter3_at_outport_0_PWORK ; struct {
void * AQHandles ; }
TAQSigLogging_InsertedFor_PSSimulinkConverter_at_outport_0_PWORK ; void *
DutyCycle_PWORK ; void * Scope1_PWORK_k [ 3 ] ; struct { void * AQHandles ; }
TAQSigLogging_InsertedFor_Desiredspeed_at_outport_0_PWORK ; struct { void *
AQHandles ; } TAQSigLogging_InsertedFor_Sensor_at_outport_1_PWORK ; struct {
void * AQHandles ; } TAQSigLogging_InsertedFor_Sum_at_outport_0_PWORK ;
struct { void * AQHandles ; }
TAQSigLogging_InsertedFor_UnitDelay_at_outport_0_PWORK ; void *
Threephasecurrents_PWORK [ 3 ] ; void * Threephasevoltages_PWORK ; struct {
void * AQHandles ; } _asyncqueue_inserted_for_ToWorkspace_PWORK ; struct {
void * AQHandles ; } _asyncqueue_inserted_for_ToWorkspace1_PWORK ; struct {
void * AQHandles ; } _asyncqueue_inserted_for_ToWorkspace2_PWORK ; void *
phaseval1_PWORK [ 5 ] ; void * speedloop_PWORK [ 2 ] ; void * Scope_PWORK_p [
7 ] ; void * Scope_PWORK_h ; void * Scope1_PWORK_b ; void * Scope2_PWORK_h ;
void * OUTPUT_1_1_Simulator ; void * OUTPUT_1_1_SimData ; void *
OUTPUT_1_1_DiagMgr ; void * OUTPUT_1_1_ZcLogger ; void * OUTPUT_1_1_TsInfo ;
void * Scope3_PWORK_h ; void * phaseval2_PWORK [ 2 ] ; void * Scope_PWORK_f ;
void * Scope2_PWORK_h2 ; void * Scope_PWORK_a ; void * Scope1_PWORK_a ; void
* Scope2_PWORK_c ; void * Scope3_PWORK_k ; void * Scope4_PWORK ; void *
Scope5_PWORK ; void * Scope6_PWORK ; void * Energy_PWORK [ 2 ] ; void *
battvalue_PWORK [ 3 ] ; struct { void * AQHandles ; }
TAQSigLogging_InsertedFor_PSSimulinkConverter1_at_outport_0_PWORK_k ; struct
{ void * AQHandles ; }
TAQSigLogging_InsertedFor_PSSimulinkConverter2_at_outport_0_PWORK_h ; void *
battvalue_PWORK_f [ 3 ] ; void * phaseval_PWORK [ 2 ] ; void *
SINK_1_RtwLogger ; void * SINK_1_RtwLogBuffer ; void *
SINK_1_RtwLogFcnManager ; void * RTP_1_RtpManager ; void *
Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0_AlgLoopData ; uint32_T
Output_DSTATE ; int32_T
Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0_sysIdxToRun ; int32_T
Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0_blkIdxToRun ; int32_T
Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0_parentSysIdxToRun ; int_T
STATE_1_Modes [ 19 ] ; int_T OUTPUT_1_0_Modes ; int_T OUTPUT_1_1_Modes ;
boolean_T DelayInput1_DSTATE ; int8_T DiscreteTimeIntegrator_PrevResetState ;
uint8_T STATE_1_ZcSignalDir ; uint8_T STATE_1_ZcStateStore ; uint8_T
OUTPUT_1_0_ZcSignalDir ; uint8_T OUTPUT_1_0_ZcStateStore ; uint8_T
OUTPUT_1_1_ZcSignalDir ; uint8_T OUTPUT_1_1_ZcStateStore ; boolean_T
STATE_1_FirstOutput ; boolean_T OUTPUT_1_0_FirstOutput ; boolean_T
OUTPUT_1_1_FirstOutput ; boolean_T Memory_PreviousInput ; boolean_T
RTP_1_SetParametersNeeded ; char_T pad_RTP_1_SetParametersNeeded [ 7 ] ; }
DW_Buck_BLDC_2023a_4_T ; typedef struct { real_T Integrator_CSTATE ; real_T
Integrator1_CSTATE ; real_T Integrator_CSTATE_l ; real_T Integrator1_CSTATE_g
; } X_Buck_BLDC_2023a_4_T ; typedef struct { real_T Integrator_CSTATE ;
real_T Integrator1_CSTATE ; real_T Integrator_CSTATE_l ; real_T
Integrator1_CSTATE_g ; } XDot_Buck_BLDC_2023a_4_T ; typedef struct {
boolean_T Integrator_CSTATE ; boolean_T Integrator1_CSTATE ; boolean_T
Integrator_CSTATE_l ; boolean_T Integrator1_CSTATE_g ; }
XDis_Buck_BLDC_2023a_4_T ; typedef struct { real_T Integrator_CSTATE ; real_T
Integrator1_CSTATE ; real_T Integrator_CSTATE_l ; real_T Integrator1_CSTATE_g
; } CStateAbsTol_Buck_BLDC_2023a_4_T ; typedef struct { real_T
Integrator_CSTATE ; real_T Integrator1_CSTATE ; real_T Integrator_CSTATE_l ;
real_T Integrator1_CSTATE_g ; } CXPtMin_Buck_BLDC_2023a_4_T ; typedef struct
{ real_T Integrator_CSTATE ; real_T Integrator1_CSTATE ; real_T
Integrator_CSTATE_l ; real_T Integrator1_CSTATE_g ; }
CXPtMax_Buck_BLDC_2023a_4_T ; typedef struct { const real_T B_1_317_2304 ;
const boolean_T B_1_318_2312 ; char_T pad_B_1_318_2312 [ 7 ] ; }
ConstB_Buck_BLDC_2023a_4_T ;
#define Buck_BLDC_2023a_4_rtC(S) ((ConstB_Buck_BLDC_2023a_4_T *) _ssGetConstBlockIO(S))
struct P_Buck_BLDC_2023a_4_T_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T
P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T
P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14 ;
real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T
P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ;
real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T
P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ;
real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T
P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 [ 8 ] ; real_T P_46 [ 8 ] ;
real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T
P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ;
real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T
P_63 ; real_T P_64 ; real_T P_65 [ 6 ] ; real_T P_66 [ 6 ] ; real_T P_67 [ 6
] ; real_T P_68 [ 6 ] ; real_T P_69 [ 6 ] ; real_T P_70 [ 6 ] ; real_T P_71 ;
real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T
P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ;
real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ;
uint32_T P_88 ; uint32_T P_89 ; uint32_T P_90 ; uint32_T P_91 ; boolean_T
P_92 ; boolean_T P_93 ; boolean_T P_94 ; char_T pad_P_94 [ 5 ] ; } ; extern
P_Buck_BLDC_2023a_4_T Buck_BLDC_2023a_4_rtDefaultP ; extern const
ConstB_Buck_BLDC_2023a_4_T Buck_BLDC_2023a_4_rtInvariant ;
#endif
