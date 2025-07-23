#include "Buck_BLDC_2023a_4_acc.h"
#include "Buck_BLDC_2023a_4_acc_types.h"
#include "Buck_BLDC_2023a_4_acc_private.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_lookup_functions.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simtarget/slSimTgtMdlrefSfcnBridge.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
real_T look1_binlcpw ( real_T u0 , const real_T bp0 [ ] , const real_T table
[ ] , uint32_T maxIndex ) { real_T frac ; real_T yL_0d0 ; uint32_T bpIdx ;
uint32_T iLeft ; uint32_T iRght ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac
= 0.0 ; } else if ( u0 < bp0 [ maxIndex ] ) { bpIdx = maxIndex >> 1U ; iLeft
= 0U ; iRght = maxIndex ; while ( iRght - iLeft > 1U ) { if ( u0 < bp0 [
bpIdx ] ) { iRght = bpIdx ; } else { iLeft = bpIdx ; } bpIdx = ( iRght +
iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) / ( bp0 [ iLeft + 1U ] - bp0
[ iLeft ] ) ; } else { iLeft = maxIndex - 1U ; frac = 1.0 ; } yL_0d0 = table
[ iLeft ] ; return ( table [ iLeft + 1U ] - yL_0d0 ) * frac + yL_0d0 ; } void
rt_ssGetBlockPath ( void * S , int_T sysIdx , int_T blkIdx , char_T * * path
) { _ssGetBlockPath ( ( SimStruct * ) S , sysIdx , blkIdx , path ) ; } void
rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * castedS = (
SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( castedS ) ) {
_ssSet_slErrMsg ( castedS , diag ) ; } else { _ssDiscardDiagnostic ( castedS
, diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S , void * diag )
{ _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; } void
rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } void
Buck_BLDC_2023a_4_Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0 (
SimStruct * S ) { DW_Buck_BLDC_2023a_4_T * _rtDW ; _rtDW = ( (
DW_Buck_BLDC_2023a_4_T * ) ssGetRootDWork ( S ) ) ; ssCallAccelRunBlock ( S ,
1 , _rtDW -> Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0_blkIdxToRun ,
SS_CALL_MDL_OUTPUTS ) ; } void
Buck_BLDC_2023a_4_Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0_Term (
SimStruct * const S ) { UNUSED_PARAMETER ( S ) ; } static void mdlOutputs (
SimStruct * S , int_T tid ) { static real_T tmp [ 6 ] ; B_Buck_BLDC_2023a_4_T
* _rtB ; DW_Buck_BLDC_2023a_4_T * _rtDW ; P_Buck_BLDC_2023a_4_T * _rtP ;
X_Buck_BLDC_2023a_4_T * _rtX ; real_T u0 ; real_T u1 ; real_T u2 ; real_T *
lastU ; int32_T i ; _rtDW = ( ( DW_Buck_BLDC_2023a_4_T * ) ssGetRootDWork ( S
) ) ; _rtX = ( ( X_Buck_BLDC_2023a_4_T * ) ssGetContStates ( S ) ) ; _rtP = (
( P_Buck_BLDC_2023a_4_T * ) ssGetModelRtp ( S ) ) ; _rtB = ( (
B_Buck_BLDC_2023a_4_T * ) _ssGetModelBlockIO ( S ) ) ; i = ssIsSampleHit ( S
, 2 , 0 ) ; if ( i != 0 ) { _rtB -> B_1_0_0 = _rtDW ->
DiscreteTimeIntegrator_DSTATE ; _rtB -> B_1_1_8 = _rtP -> P_3 * _rtB ->
B_1_0_0 ; _rtB -> B_1_2_16 = _rtDW -> UnitDelay_DSTATE ; _rtB -> B_1_3_24 =
_rtB -> B_1_1_8 - _rtB -> B_1_2_16 ; _rtB -> B_1_4_32 = _rtP -> P_5 * _rtB ->
B_1_3_24 ; _rtB -> B_1_5_40 = _rtDW -> Integrator_DSTATE ; _rtB -> B_1_6_48 =
_rtP -> P_10 * _rtB -> B_1_3_24 ; _rtB -> B_1_7_56 = _rtDW -> Filter_DSTATE ;
_rtB -> B_1_8_64 = _rtB -> B_1_6_48 - _rtB -> B_1_7_56 ; _rtB -> B_1_9_72 =
_rtP -> P_13 * _rtB -> B_1_8_64 ; _rtB -> B_1_10_80 = ( _rtB -> B_1_4_32 +
_rtB -> B_1_5_40 ) + _rtB -> B_1_9_72 ; u0 = _rtB -> B_1_10_80 ; u1 = _rtP ->
P_15 ; u2 = _rtP -> P_14 ; if ( u0 > u2 ) { _rtB -> B_1_11_88 = u2 ; } else
if ( u0 < u1 ) { _rtB -> B_1_11_88 = u1 ; } else { _rtB -> B_1_11_88 = u0 ; }
u0 = _rtB -> B_1_11_88 ; u1 = _rtP -> P_17 ; u2 = _rtP -> P_16 ; if ( u0 > u2
) { _rtB -> B_1_12_96 = u2 ; } else if ( u0 < u1 ) { _rtB -> B_1_12_96 = u1 ;
} else { _rtB -> B_1_12_96 = u0 ; } _rtB -> B_1_286_2268 = ( _rtB ->
B_1_12_96 != Buck_BLDC_2023a_4_rtC ( S ) -> B_1_317_2304 ) ; _rtB ->
B_1_13_104 = ssGetTaskTime ( S , 2 ) ; _rtB -> B_1_14_112 = _rtP -> P_18 ;
_rtB -> B_1_15_120 = _rtB -> B_1_13_104 + _rtB -> B_1_14_112 ; _rtB ->
B_1_16_128 = _rtP -> P_19 ; _rtB -> B_1_17_136 = muDoubleScalarRem ( _rtB ->
B_1_15_120 , _rtB -> B_1_16_128 ) ; _rtB -> B_1_18_144 = _rtP -> P_20 * _rtB
-> B_1_17_136 ; _rtB -> B_1_19_152 = 2.0 * _rtB -> B_1_18_144 - 1.0 ; _rtB ->
B_1_20_160 = ( _rtB -> B_1_19_152 + 1.0 ) * 0.5 ; _rtB -> B_1_287_2269 = (
_rtB -> B_1_12_96 >= _rtB -> B_1_20_160 ) ; _rtB -> B_1_288_2270 = ( _rtB ->
B_1_286_2268 && _rtB -> B_1_287_2269 ) ; _rtB -> B_1_21_168 = _rtB ->
B_1_288_2270 ; _rtB -> B_1_289_2271 = ! ( _rtB -> B_1_21_168 != 0.0 ) ; _rtB
-> B_1_22_176 = _rtB -> B_1_289_2271 ; i = ssIsSampleHit ( S , 2 , 0 ) ; if (
i != 0 ) { _rtB -> B_1_23_184 [ 0 ] = _rtB -> B_1_21_168 ; _rtB -> B_1_23_184
[ 1 ] = 0.0 ; _rtB -> B_1_23_184 [ 2 ] = 0.0 ; _rtDW -> INPUT_1_1_1_Discrete
[ 0 ] = ! ( _rtB -> B_1_23_184 [ 0 ] == _rtDW -> INPUT_1_1_1_Discrete [ 1 ] )
; _rtDW -> INPUT_1_1_1_Discrete [ 1 ] = _rtB -> B_1_23_184 [ 0 ] ; _rtB ->
B_1_23_184 [ 0 ] = _rtDW -> INPUT_1_1_1_Discrete [ 1 ] ; _rtB -> B_1_23_184 [
3 ] = _rtDW -> INPUT_1_1_1_Discrete [ 0 ] ; _rtB -> B_1_27_216 [ 0 ] = _rtB
-> B_1_22_176 ; _rtB -> B_1_27_216 [ 1 ] = 0.0 ; _rtB -> B_1_27_216 [ 2 ] =
0.0 ; _rtDW -> INPUT_2_1_1_Discrete [ 0 ] = ! ( _rtB -> B_1_27_216 [ 0 ] ==
_rtDW -> INPUT_2_1_1_Discrete [ 1 ] ) ; _rtDW -> INPUT_2_1_1_Discrete [ 1 ] =
_rtB -> B_1_27_216 [ 0 ] ; _rtB -> B_1_27_216 [ 0 ] = _rtDW ->
INPUT_2_1_1_Discrete [ 1 ] ; _rtB -> B_1_27_216 [ 3 ] = _rtDW ->
INPUT_2_1_1_Discrete [ 0 ] ; } _rtB -> B_1_31_248 = _rtP -> P_21 * _rtB ->
B_1_2_16 ; _rtB -> B_1_32_256 = _rtB -> B_1_31_248 * _rtB -> B_1_31_248 ;
_rtB -> B_1_33_264 = _rtP -> P_22 * _rtB -> B_1_32_256 ; _rtB -> B_1_34_272 =
_rtB -> B_1_262_2096 + _rtB -> B_1_33_264 ; _rtB -> B_1_35_280 = _rtP -> P_23
* _rtB -> B_1_34_272 ; _rtB -> B_1_36_288 = _rtP -> P_24 * _rtB -> B_1_35_280
; i = ssIsSampleHit ( S , 2 , 0 ) ; if ( i != 0 ) { _rtB -> B_1_37_296 [ 0 ]
= _rtB -> B_1_36_288 ; _rtB -> B_1_37_296 [ 1 ] = 0.0 ; _rtB -> B_1_37_296 [
2 ] = 0.0 ; _rtDW -> INPUT_3_1_1_Discrete [ 0 ] = ! ( _rtB -> B_1_37_296 [ 0
] == _rtDW -> INPUT_3_1_1_Discrete [ 1 ] ) ; _rtDW -> INPUT_3_1_1_Discrete [
1 ] = _rtB -> B_1_37_296 [ 0 ] ; _rtB -> B_1_37_296 [ 0 ] = _rtDW ->
INPUT_3_1_1_Discrete [ 1 ] ; _rtB -> B_1_37_296 [ 3 ] = _rtDW ->
INPUT_3_1_1_Discrete [ 0 ] ; } _rtB -> B_1_41_328 = _rtDW ->
UnitDelay_DSTATE_h ; _rtB -> B_1_42_336 = muDoubleScalarRem ( _rtB ->
B_1_41_328 , _rtB -> B_1_275_2200 ) ; _rtB -> B_1_290_2272 = ( _rtB ->
B_1_42_336 > _rtB -> B_1_263_2104 ) ; _rtB -> B_1_291_2273 = ( _rtB ->
B_1_42_336 <= _rtB -> B_1_264_2112 ) ; _rtB -> B_1_292_2274 = ( _rtB ->
B_1_290_2272 && _rtB -> B_1_291_2273 ) ; _rtB -> B_1_43_344 = _rtB ->
B_1_292_2274 ; _rtB -> B_1_44_352 = _rtP -> P_26 * _rtB -> B_1_43_344 ; _rtB
-> B_1_293_2275 = ( _rtB -> B_1_42_336 > _rtB -> B_1_267_2136 ) ; _rtB ->
B_1_294_2276 = ( _rtB -> B_1_42_336 <= _rtB -> B_1_268_2144 ) ; _rtB ->
B_1_295_2277 = ( _rtB -> B_1_293_2275 && _rtB -> B_1_294_2276 ) ; _rtB ->
B_1_45_360 = _rtB -> B_1_295_2277 ; _rtB -> B_1_46_368 = _rtP -> P_27 * _rtB
-> B_1_45_360 ; _rtB -> B_1_296_2278 = ( _rtB -> B_1_42_336 > _rtB ->
B_1_269_2152 ) ; _rtB -> B_1_297_2279 = ( _rtB -> B_1_42_336 <= _rtB ->
B_1_270_2160 ) ; _rtB -> B_1_298_2280 = ( _rtB -> B_1_296_2278 && _rtB ->
B_1_297_2279 ) ; _rtB -> B_1_47_376 = _rtB -> B_1_298_2280 ; _rtB ->
B_1_48_384 = _rtP -> P_28 * _rtB -> B_1_47_376 ; _rtB -> B_1_299_2281 = (
_rtB -> B_1_42_336 > _rtB -> B_1_271_2168 ) ; _rtB -> B_1_300_2282 = ( _rtB
-> B_1_42_336 <= _rtB -> B_1_272_2176 ) ; _rtB -> B_1_301_2283 = ( _rtB ->
B_1_299_2281 && _rtB -> B_1_300_2282 ) ; _rtB -> B_1_49_392 = _rtB ->
B_1_301_2283 ; _rtB -> B_1_50_400 = _rtP -> P_29 * _rtB -> B_1_49_392 ; _rtB
-> B_1_302_2284 = ( _rtB -> B_1_42_336 > _rtB -> B_1_273_2184 ) ; _rtB ->
B_1_303_2285 = ( _rtB -> B_1_42_336 <= _rtB -> B_1_274_2192 ) ; _rtB ->
B_1_304_2286 = ( _rtB -> B_1_302_2284 && _rtB -> B_1_303_2285 ) ; _rtB ->
B_1_51_408 = _rtB -> B_1_304_2286 ; _rtB -> B_1_52_416 = _rtP -> P_30 * _rtB
-> B_1_51_408 ; _rtB -> B_1_305_2287 = ( _rtB -> B_1_42_336 > _rtB ->
B_1_265_2120 ) ; _rtB -> B_1_306_2288 = ( _rtB -> B_1_42_336 <= _rtB ->
B_1_266_2128 ) ; _rtB -> B_1_307_2289 = ( _rtB -> B_1_305_2287 && _rtB ->
B_1_306_2288 ) ; _rtB -> B_1_53_424 = _rtB -> B_1_307_2289 ; _rtB ->
B_1_54_432 = _rtP -> P_31 * _rtB -> B_1_53_424 ; _rtB -> B_1_55_440 = ( ( ( (
_rtB -> B_1_44_352 + _rtB -> B_1_46_368 ) + _rtB -> B_1_48_384 ) + _rtB ->
B_1_50_400 ) + _rtB -> B_1_52_416 ) + _rtB -> B_1_54_432 ; u0 = _rtB ->
B_1_55_440 ; u1 = _rtP -> P_33 ; u2 = _rtP -> P_32 ; if ( u0 > u2 ) { _rtB ->
B_1_56_448 = u2 ; } else if ( u0 < u1 ) { _rtB -> B_1_56_448 = u1 ; } else {
_rtB -> B_1_56_448 = u0 ; } switch ( ( int32_T ) _rtB -> B_1_56_448 ) { case
1 : for ( i = 0 ; i < 6 ; i ++ ) { tmp [ i ] = _rtB -> B_1_226_1808 [ i ] ; }
break ; case 2 : for ( i = 0 ; i < 6 ; i ++ ) { tmp [ i ] = _rtB ->
B_1_232_1856 [ i ] ; } break ; case 3 : for ( i = 0 ; i < 6 ; i ++ ) { tmp [
i ] = _rtB -> B_1_238_1904 [ i ] ; } break ; case 4 : for ( i = 0 ; i < 6 ; i
++ ) { tmp [ i ] = _rtB -> B_1_244_1952 [ i ] ; } break ; case 5 : for ( i =
0 ; i < 6 ; i ++ ) { tmp [ i ] = _rtB -> B_1_250_2000 [ i ] ; } break ;
default : for ( i = 0 ; i < 6 ; i ++ ) { tmp [ i ] = _rtB -> B_1_256_2048 [ i
] ; } break ; } for ( i = 0 ; i < 6 ; i ++ ) { _rtB -> B_1_57_456 [ i ] = tmp
[ i ] ; } i = ssIsSampleHit ( S , 2 , 0 ) ; if ( i != 0 ) { _rtB ->
B_1_63_504 [ 0 ] = _rtB -> B_1_57_456 [ 1 ] ; _rtB -> B_1_63_504 [ 1 ] = 0.0
; _rtB -> B_1_63_504 [ 2 ] = 0.0 ; _rtDW -> INPUT_5_1_1_Discrete [ 0 ] = ! (
_rtB -> B_1_63_504 [ 0 ] == _rtDW -> INPUT_5_1_1_Discrete [ 1 ] ) ; _rtDW ->
INPUT_5_1_1_Discrete [ 1 ] = _rtB -> B_1_63_504 [ 0 ] ; _rtB -> B_1_63_504 [
0 ] = _rtDW -> INPUT_5_1_1_Discrete [ 1 ] ; _rtB -> B_1_63_504 [ 3 ] = _rtDW
-> INPUT_5_1_1_Discrete [ 0 ] ; _rtB -> B_1_67_536 [ 0 ] = _rtB -> B_1_57_456
[ 2 ] ; _rtB -> B_1_67_536 [ 1 ] = 0.0 ; _rtB -> B_1_67_536 [ 2 ] = 0.0 ;
_rtDW -> INPUT_6_1_1_Discrete [ 0 ] = ! ( _rtB -> B_1_67_536 [ 0 ] == _rtDW
-> INPUT_6_1_1_Discrete [ 1 ] ) ; _rtDW -> INPUT_6_1_1_Discrete [ 1 ] = _rtB
-> B_1_67_536 [ 0 ] ; _rtB -> B_1_67_536 [ 0 ] = _rtDW ->
INPUT_6_1_1_Discrete [ 1 ] ; _rtB -> B_1_67_536 [ 3 ] = _rtDW ->
INPUT_6_1_1_Discrete [ 0 ] ; _rtB -> B_1_71_568 [ 0 ] = _rtB -> B_1_57_456 [
3 ] ; _rtB -> B_1_71_568 [ 1 ] = 0.0 ; _rtB -> B_1_71_568 [ 2 ] = 0.0 ; _rtDW
-> INPUT_7_1_1_Discrete [ 0 ] = ! ( _rtB -> B_1_71_568 [ 0 ] == _rtDW ->
INPUT_7_1_1_Discrete [ 1 ] ) ; _rtDW -> INPUT_7_1_1_Discrete [ 1 ] = _rtB ->
B_1_71_568 [ 0 ] ; _rtB -> B_1_71_568 [ 0 ] = _rtDW -> INPUT_7_1_1_Discrete [
1 ] ; _rtB -> B_1_71_568 [ 3 ] = _rtDW -> INPUT_7_1_1_Discrete [ 0 ] ; _rtB
-> B_1_75_600 [ 0 ] = _rtB -> B_1_57_456 [ 4 ] ; _rtB -> B_1_75_600 [ 1 ] =
0.0 ; _rtB -> B_1_75_600 [ 2 ] = 0.0 ; _rtDW -> INPUT_8_1_1_Discrete [ 0 ] =
! ( _rtB -> B_1_75_600 [ 0 ] == _rtDW -> INPUT_8_1_1_Discrete [ 1 ] ) ; _rtDW
-> INPUT_8_1_1_Discrete [ 1 ] = _rtB -> B_1_75_600 [ 0 ] ; _rtB -> B_1_75_600
[ 0 ] = _rtDW -> INPUT_8_1_1_Discrete [ 1 ] ; _rtB -> B_1_75_600 [ 3 ] =
_rtDW -> INPUT_8_1_1_Discrete [ 0 ] ; _rtB -> B_1_79_632 [ 0 ] = _rtB ->
B_1_57_456 [ 5 ] ; _rtB -> B_1_79_632 [ 1 ] = 0.0 ; _rtB -> B_1_79_632 [ 2 ]
= 0.0 ; _rtDW -> INPUT_9_1_1_Discrete [ 0 ] = ! ( _rtB -> B_1_79_632 [ 0 ] ==
_rtDW -> INPUT_9_1_1_Discrete [ 1 ] ) ; _rtDW -> INPUT_9_1_1_Discrete [ 1 ] =
_rtB -> B_1_79_632 [ 0 ] ; _rtB -> B_1_79_632 [ 0 ] = _rtDW ->
INPUT_9_1_1_Discrete [ 1 ] ; _rtB -> B_1_79_632 [ 3 ] = _rtDW ->
INPUT_9_1_1_Discrete [ 0 ] ; _rtB -> B_1_83_664 [ 0 ] = _rtB -> B_1_57_456 [
0 ] ; _rtB -> B_1_83_664 [ 1 ] = 0.0 ; _rtB -> B_1_83_664 [ 2 ] = 0.0 ; _rtDW
-> INPUT_4_1_1_Discrete [ 0 ] = ! ( _rtB -> B_1_83_664 [ 0 ] == _rtDW ->
INPUT_4_1_1_Discrete [ 1 ] ) ; _rtDW -> INPUT_4_1_1_Discrete [ 1 ] = _rtB ->
B_1_83_664 [ 0 ] ; _rtB -> B_1_83_664 [ 0 ] = _rtDW -> INPUT_4_1_1_Discrete [
1 ] ; _rtB -> B_1_83_664 [ 3 ] = _rtDW -> INPUT_4_1_1_Discrete [ 0 ] ; }
ssCallAccelRunBlock ( S , 1 , 79 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 80 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 81 , SS_CALL_MDL_OUTPUTS ) ; } _rtB ->
B_1_188_1504 = _rtX -> Integrator_CSTATE ; _rtB -> B_1_189_1512 = _rtX ->
Integrator1_CSTATE ; ssCallAccelRunBlock ( S , 1 , 84 , SS_CALL_MDL_OUTPUTS )
; i = ssIsSampleHit ( S , 2 , 0 ) ; if ( i != 0 ) { _rtB -> B_1_190_1520 =
_rtB -> B_1_170_1360 [ 0 ] * _rtB -> B_1_170_1360 [ 3 ] ; ssCallAccelRunBlock
( S , 1 , 86 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_1_191_1528 = _rtB ->
B_1_170_1360 [ 1 ] * _rtB -> B_1_170_1360 [ 2 ] ; ssCallAccelRunBlock ( S , 1
, 88 , SS_CALL_MDL_OUTPUTS ) ; { if ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter1_at_outport_0_PWORK . AQHandles
&& ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter1_at_outport_0_PWORK . AQHandles
, ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_170_1360 [ 2 ] + 0 ) ; }
} { if ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter2_at_outport_0_PWORK . AQHandles
&& ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter2_at_outport_0_PWORK . AQHandles
, ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_170_1360 [ 1 ] + 0 ) ; }
} { if ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter3_at_outport_0_PWORK . AQHandles
&& ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter3_at_outport_0_PWORK . AQHandles
, ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_170_1360 [ 0 ] + 0 ) ; }
} { if ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter_at_outport_0_PWORK . AQHandles
&& ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter_at_outport_0_PWORK . AQHandles
, ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_170_1360 [ 3 ] + 0 ) ; }
} u0 = _rtB -> B_1_190_1520 ; u1 = _rtP -> P_37 ; u2 = _rtP -> P_36 ; if ( u0
> u2 ) { _rtB -> B_1_192_1536 = u2 ; } else if ( u0 < u1 ) { _rtB ->
B_1_192_1536 = u1 ; } else { _rtB -> B_1_192_1536 = u0 ; } u0 = _rtB ->
B_1_190_1520 ; u1 = _rtP -> P_39 ; u2 = _rtP -> P_38 ; if ( u0 > u2 ) { _rtB
-> B_1_193_1544 = u2 ; } else if ( u0 < u1 ) { _rtB -> B_1_193_1544 = u1 ; }
else { _rtB -> B_1_193_1544 = u0 ; } ssCallAccelRunBlock ( S , 1 , 113 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_1_194_1552 = _rtDW ->
DiscreteTimeIntegrator_DSTATE_m ; _rtB -> B_1_195_1560 = _rtP -> P_42 * _rtB
-> B_1_170_1360 [ 7 ] ; _rtB -> B_1_196_1568 = _rtB -> B_1_194_1552 * _rtB ->
B_1_195_1560 ; ssCallAccelRunBlock ( S , 1 , 117 , SS_CALL_MDL_OUTPUTS ) ; {
if ( _rtDW -> TAQSigLogging_InsertedFor_Desiredspeed_at_outport_0_PWORK .
AQHandles && ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_Desiredspeed_at_outport_0_PWORK . AQHandles ,
ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_1_8 + 0 ) ; } } { if (
_rtDW -> TAQSigLogging_InsertedFor_Sensor_at_outport_1_PWORK . AQHandles &&
ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_Sensor_at_outport_1_PWORK . AQHandles ,
ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_170_1360 [ 7 ] + 0 ) ; } }
{ if ( _rtDW -> TAQSigLogging_InsertedFor_Sum_at_outport_0_PWORK . AQHandles
&& ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_Sum_at_outport_0_PWORK . AQHandles , ssGetTaskTime
( S , 2 ) , ( char * ) & _rtB -> B_1_3_24 + 0 ) ; } } { if ( _rtDW ->
TAQSigLogging_InsertedFor_UnitDelay_at_outport_0_PWORK . AQHandles &&
ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_UnitDelay_at_outport_0_PWORK . AQHandles ,
ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_2_16 + 0 ) ; } }
ssCallAccelRunBlock ( S , 1 , 129 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 130 , SS_CALL_MDL_OUTPUTS ) ; { if ( _rtDW ->
_asyncqueue_inserted_for_ToWorkspace_PWORK . AQHandles && ssGetLogOutput ( S
) ) { sdiWriteSignal ( _rtDW -> _asyncqueue_inserted_for_ToWorkspace_PWORK .
AQHandles , ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_1_8 + 0 ) ; }
} { if ( _rtDW -> _asyncqueue_inserted_for_ToWorkspace1_PWORK . AQHandles &&
ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
_asyncqueue_inserted_for_ToWorkspace1_PWORK . AQHandles , ssGetTaskTime ( S ,
2 ) , ( char * ) & _rtB -> B_1_2_16 + 0 ) ; } } { if ( _rtDW ->
_asyncqueue_inserted_for_ToWorkspace2_PWORK . AQHandles && ssGetLogOutput ( S
) ) { sdiWriteSignal ( _rtDW -> _asyncqueue_inserted_for_ToWorkspace2_PWORK .
AQHandles , ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_2_16 + 0 ) ; }
} ssCallAccelRunBlock ( S , 1 , 147 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 148 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 149 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 150 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 151 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 152 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_1_197_1576 = _rtP -> P_43 * _rtB -> B_1_3_24 ; _rtB -> B_1_281_2248 = _rtDW
-> Output_DSTATE ; _rtB -> B_1_198_1584 = _rtB -> B_1_281_2248 ; _rtB ->
B_1_199_1592 = _rtB -> B_1_198_1584 * _rtP -> P_44 ; _rtB -> B_1_200_1600 =
look1_binlcpw ( _rtB -> B_1_199_1592 , _rtP -> P_46 , _rtP -> P_45 , 7U ) ;
_rtB -> B_1_201_1608 = _rtP -> P_47 * _rtB -> B_1_200_1600 ; _rtB ->
B_1_202_1616 = _rtB -> B_1_201_1608 - _rtB -> B_1_0_0 ; _rtB -> B_1_282_2252
= _rtB -> B_1_281_2248 + _rtB -> B_1_284_2260 ; if ( _rtB -> B_1_282_2252 >
_rtP -> P_89 ) { _rtB -> B_1_283_2256 = _rtB -> B_1_285_2264 ; } else { _rtB
-> B_1_283_2256 = _rtB -> B_1_282_2252 ; } ssCallAccelRunBlock ( S , 1 , 162
, SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_1_204_1632 = _rtB -> B_1_203_1624 - _rtB
-> B_1_194_1552 ; _rtB -> B_1_205_1640 = _rtP -> P_48 * _rtB -> B_1_170_1360
[ 6 ] ; ssCallAccelRunBlock ( S , 1 , 166 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_1_206_1648 = _rtP -> P_49 * _rtB -> B_1_205_1640 ; _rtB -> B_1_207_1656 =
_rtP -> P_50 * _rtB -> B_1_170_1360 [ 5 ] ; _rtB -> B_1_208_1664 = _rtP ->
P_51 * _rtB -> B_1_207_1656 ; } if ( ( _rtDW -> TimeStampA >= ssGetT ( S ) )
&& ( _rtDW -> TimeStampB >= ssGetT ( S ) ) ) { _rtB -> B_1_209_1672 = 0.0 ; }
else { u0 = _rtDW -> TimeStampA ; lastU = & _rtDW -> LastUAtTimeA ; if (
_rtDW -> TimeStampA < _rtDW -> TimeStampB ) { if ( _rtDW -> TimeStampB <
ssGetT ( S ) ) { u0 = _rtDW -> TimeStampB ; lastU = & _rtDW -> LastUAtTimeB ;
} } else if ( _rtDW -> TimeStampA >= ssGetT ( S ) ) { u0 = _rtDW ->
TimeStampB ; lastU = & _rtDW -> LastUAtTimeB ; } u0 = ssGetT ( S ) - u0 ;
_rtB -> B_1_209_1672 = ( _rtB -> B_1_207_1656 - * lastU ) / u0 ; }
ssCallAccelRunBlock ( S , 1 , 176 , SS_CALL_MDL_OUTPUTS ) ; i = ssIsSampleHit
( S , 2 , 0 ) ; if ( i != 0 ) { _rtB -> B_1_210_1680 = _rtDW ->
UnitDelay1_DSTATE ; _rtB -> B_1_211_1688 = 0.0 - _rtB -> B_1_210_1680 ; _rtB
-> B_1_212_1696 = muDoubleScalarAbs ( _rtB -> B_1_211_1688 ) ;
ssCallAccelRunBlock ( S , 1 , 184 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_1_308_2290 = ( _rtB -> B_1_212_1696 > _rtB -> B_1_276_2208 ) ;
ssCallAccelRunBlock ( S , 1 , 186 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_1_213_1704 = _rtDW -> UnitDelay1_DSTATE_o ; _rtB -> B_1_214_1712 = 0.0 -
_rtB -> B_1_213_1704 ; _rtB -> B_1_215_1720 = muDoubleScalarAbs ( _rtB ->
B_1_214_1712 ) ; ssCallAccelRunBlock ( S , 1 , 190 , SS_CALL_MDL_OUTPUTS ) ;
_rtB -> B_1_309_2291 = ( _rtB -> B_1_215_1720 < _rtB -> B_1_277_2216 ) ; _rtB
-> B_1_310_2292 = ! _rtB -> B_1_309_2291 ; if ( _rtB -> B_1_310_2292 && (
_rtDW -> DiscreteTimeIntegrator_PrevResetState <= 0 ) ) { _rtDW ->
DiscreteTimeIntegrator_DSTATE_f = _rtP -> P_55 ; } _rtB -> B_1_216_1728 =
_rtDW -> DiscreteTimeIntegrator_DSTATE_f ; ssCallAccelRunBlock ( S , 1 , 194
, SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_1_311_2293 = ( _rtB -> B_1_216_1728 >=
_rtB -> B_1_278_2224 ) ; ssCallAccelRunBlock ( S , 1 , 196 ,
SS_CALL_MDL_OUTPUTS ) ; } i = ssIsSampleHit ( S , 1 , 0 ) ; if ( i != 0 ) {
_rtB -> B_1_312_2294 = _rtDW -> Memory_PreviousInput ; _rtB -> B_1_313_2295 =
( _rtB -> B_1_311_2293 || _rtB -> B_1_312_2294 ) ; ssCallAccelRunBlock ( S ,
1 , 199 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_1_314_2296 = ( ( int32_T ) _rtB
-> B_1_313_2295 > ( int32_T ) Buck_BLDC_2023a_4_rtC ( S ) -> B_1_318_2312 ) ;
} i = ssIsSampleHit ( S , 2 , 0 ) ; if ( i != 0 ) { _rtB -> B_1_315_2297 =
_rtDW -> DelayInput1_DSTATE ; } i = ssIsSampleHit ( S , 1 , 0 ) ; if ( i != 0
) { _rtB -> B_1_316_2298 = ( ( int32_T ) _rtB -> B_1_314_2296 > ( int32_T )
_rtB -> B_1_315_2297 ) ; ssCallAccelRunBlock ( S , 1 , 203 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_1_217_1736 = _rtDW -> Memory1_PreviousInput
; if ( _rtB -> B_1_313_2295 ) { _rtB -> B_1_218_1744 = _rtB -> B_1_217_1736 ;
} else { _rtB -> B_1_218_1744 = 0.0 ; } ssCallAccelRunBlock ( S , 1 , 206 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 207 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , _rtDW ->
Synthesized_Atomic_Subsystem_For_Alg_Loop_1_Task_0_blkIdxToRun ,
SS_CALL_MDL_OUTPUTS ) ; } _rtB -> B_1_219_1752 = _rtX -> Integrator_CSTATE_l
; _rtB -> B_1_220_1760 = _rtX -> Integrator1_CSTATE_g ; _rtB -> B_1_221_1768
= _rtP -> P_59 * _rtB -> B_1_220_1760 ; ssCallAccelRunBlock ( S , 1 , 212 ,
SS_CALL_MDL_OUTPUTS ) ; i = ssIsSampleHit ( S , 2 , 0 ) ; if ( i != 0 ) {
_rtB -> B_1_222_1776 = _rtB -> B_1_170_1360 [ 8 ] * _rtB -> B_1_170_1360 [ 9
] ; ssCallAccelRunBlock ( S , 1 , 214 , SS_CALL_MDL_OUTPUTS ) ; { if ( _rtDW
-> TAQSigLogging_InsertedFor_PSSimulinkConverter1_at_outport_0_PWORK_k .
AQHandles && ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter1_at_outport_0_PWORK_k .
AQHandles , ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_170_1360 [ 8 ]
+ 0 ) ; } } { if ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter2_at_outport_0_PWORK_h .
AQHandles && ssGetLogOutput ( S ) ) { sdiWriteSignal ( _rtDW ->
TAQSigLogging_InsertedFor_PSSimulinkConverter2_at_outport_0_PWORK_h .
AQHandles , ssGetTaskTime ( S , 2 ) , ( char * ) & _rtB -> B_1_170_1360 [ 9 ]
+ 0 ) ; } } ssCallAccelRunBlock ( S , 1 , 217 , SS_CALL_MDL_OUTPUTS ) ; u0 =
_rtB -> B_1_222_1776 ; u1 = _rtP -> P_61 ; u2 = _rtP -> P_60 ; if ( u0 > u2 )
{ _rtB -> B_1_223_1784 = u2 ; } else if ( u0 < u1 ) { _rtB -> B_1_223_1784 =
u1 ; } else { _rtB -> B_1_223_1784 = u0 ; } u0 = _rtB -> B_1_222_1776 ; u1 =
_rtP -> P_63 ; u2 = _rtP -> P_62 ; if ( u0 > u2 ) { _rtB -> B_1_224_1792 = u2
; } else if ( u0 < u1 ) { _rtB -> B_1_224_1792 = u1 ; } else { _rtB ->
B_1_224_1792 = u0 ; } ssCallAccelRunBlock ( S , 1 , 227 , SS_CALL_MDL_OUTPUTS
) ; ssCallAccelRunBlock ( S , 1 , 230 , SS_CALL_MDL_OUTPUTS ) ; }
UNUSED_PARAMETER ( tid ) ; } static void mdlOutputsTID3 ( SimStruct * S ,
int_T tid ) { B_Buck_BLDC_2023a_4_T * _rtB ; P_Buck_BLDC_2023a_4_T * _rtP ;
int32_T i ; _rtP = ( ( P_Buck_BLDC_2023a_4_T * ) ssGetModelRtp ( S ) ) ; _rtB
= ( ( B_Buck_BLDC_2023a_4_T * ) _ssGetModelBlockIO ( S ) ) ; _rtB ->
B_1_225_1800 = _rtP -> P_64 ; for ( i = 0 ; i < 6 ; i ++ ) { _rtB ->
B_1_226_1808 [ i ] = _rtP -> P_65 [ i ] ; _rtB -> B_1_232_1856 [ i ] = _rtP
-> P_66 [ i ] ; _rtB -> B_1_238_1904 [ i ] = _rtP -> P_67 [ i ] ; _rtB ->
B_1_244_1952 [ i ] = _rtP -> P_68 [ i ] ; _rtB -> B_1_250_2000 [ i ] = _rtP
-> P_69 [ i ] ; _rtB -> B_1_256_2048 [ i ] = _rtP -> P_70 [ i ] ; } _rtB ->
B_1_284_2260 = _rtP -> P_90 ; _rtB -> B_1_285_2264 = _rtP -> P_91 ; _rtB ->
B_1_262_2096 = _rtP -> P_71 ; _rtB -> B_1_263_2104 = _rtP -> P_72 ; _rtB ->
B_1_264_2112 = _rtP -> P_73 ; _rtB -> B_1_265_2120 = _rtP -> P_74 ; _rtB ->
B_1_266_2128 = _rtP -> P_75 ; _rtB -> B_1_267_2136 = _rtP -> P_76 ; _rtB ->
B_1_268_2144 = _rtP -> P_77 ; _rtB -> B_1_269_2152 = _rtP -> P_78 ; _rtB ->
B_1_270_2160 = _rtP -> P_79 ; _rtB -> B_1_271_2168 = _rtP -> P_80 ; _rtB ->
B_1_272_2176 = _rtP -> P_81 ; _rtB -> B_1_273_2184 = _rtP -> P_82 ; _rtB ->
B_1_274_2192 = _rtP -> P_83 ; _rtB -> B_1_275_2200 = _rtP -> P_84 ; _rtB ->
B_1_276_2208 = _rtP -> P_85 ; _rtB -> B_1_277_2216 = _rtP -> P_86 ; _rtB ->
B_1_278_2224 = _rtP -> P_87 ; ssCallAccelRunBlock ( S , 1 , 271 ,
SS_CALL_MDL_OUTPUTS ) ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { B_Buck_BLDC_2023a_4_T *
_rtB ; DW_Buck_BLDC_2023a_4_T * _rtDW ; P_Buck_BLDC_2023a_4_T * _rtP ; real_T
* lastU ; int32_T isHit ; _rtDW = ( ( DW_Buck_BLDC_2023a_4_T * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( P_Buck_BLDC_2023a_4_T * ) ssGetModelRtp (
S ) ) ; _rtB = ( ( B_Buck_BLDC_2023a_4_T * ) _ssGetModelBlockIO ( S ) ) ;
isHit = ssIsSampleHit ( S , 2 , 0 ) ; if ( isHit != 0 ) { _rtDW ->
DiscreteTimeIntegrator_DSTATE += _rtP -> P_1 * _rtB -> B_1_202_1616 ; _rtDW
-> UnitDelay_DSTATE = _rtB -> B_1_170_1360 [ 7 ] ; _rtDW -> Integrator_DSTATE
+= _rtP -> P_6 * _rtB -> B_1_197_1576 ; if ( _rtDW -> Integrator_DSTATE >
_rtP -> P_8 ) { _rtDW -> Integrator_DSTATE = _rtP -> P_8 ; } else if ( _rtDW
-> Integrator_DSTATE < _rtP -> P_9 ) { _rtDW -> Integrator_DSTATE = _rtP ->
P_9 ; } _rtDW -> Filter_DSTATE += _rtP -> P_11 * _rtB -> B_1_9_72 ; _rtDW ->
UnitDelay_DSTATE_h = _rtB -> B_1_206_1648 ; ssCallAccelRunBlock ( S , 1 , 79
, SS_CALL_MDL_UPDATE ) ; _rtDW -> DiscreteTimeIntegrator_DSTATE_m += _rtP ->
P_40 * _rtB -> B_1_204_1632 ; _rtDW -> Output_DSTATE = _rtB -> B_1_283_2256 ;
} if ( _rtDW -> TimeStampA == ( rtInf ) ) { _rtDW -> TimeStampA = ssGetT ( S
) ; lastU = & _rtDW -> LastUAtTimeA ; } else if ( _rtDW -> TimeStampB == (
rtInf ) ) { _rtDW -> TimeStampB = ssGetT ( S ) ; lastU = & _rtDW ->
LastUAtTimeB ; } else if ( _rtDW -> TimeStampA < _rtDW -> TimeStampB ) {
_rtDW -> TimeStampA = ssGetT ( S ) ; lastU = & _rtDW -> LastUAtTimeA ; } else
{ _rtDW -> TimeStampB = ssGetT ( S ) ; lastU = & _rtDW -> LastUAtTimeB ; } *
lastU = _rtB -> B_1_207_1656 ; isHit = ssIsSampleHit ( S , 2 , 0 ) ; if (
isHit != 0 ) { _rtDW -> UnitDelay1_DSTATE = 0.0 ; _rtDW ->
UnitDelay1_DSTATE_o = 0.0 ; _rtDW -> DiscreteTimeIntegrator_DSTATE_f += _rtP
-> P_54 * ( real_T ) _rtB -> B_1_309_2291 ; _rtDW ->
DiscreteTimeIntegrator_PrevResetState = ( int8_T ) _rtB -> B_1_310_2292 ; }
isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) { _rtDW ->
Memory_PreviousInput = _rtB -> B_1_313_2295 ; } isHit = ssIsSampleHit ( S , 2
, 0 ) ; if ( isHit != 0 ) { _rtDW -> DelayInput1_DSTATE = _rtB ->
B_1_314_2296 ; } isHit = ssIsSampleHit ( S , 1 , 0 ) ; if ( isHit != 0 ) {
_rtDW -> Memory1_PreviousInput = _rtB -> B_0_280_2240 ; } UNUSED_PARAMETER (
tid ) ; }
#define MDL_UPDATE
static void mdlUpdateTID3 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { B_Buck_BLDC_2023a_4_T * _rtB ;
XDot_Buck_BLDC_2023a_4_T * _rtXdot ; _rtXdot = ( ( XDot_Buck_BLDC_2023a_4_T *
) ssGetdX ( S ) ) ; _rtB = ( ( B_Buck_BLDC_2023a_4_T * ) _ssGetModelBlockIO (
S ) ) ; _rtXdot -> Integrator_CSTATE = _rtB -> B_1_193_1544 ; _rtXdot ->
Integrator1_CSTATE = _rtB -> B_1_192_1536 ; _rtXdot -> Integrator_CSTATE_l =
_rtB -> B_1_224_1792 ; _rtXdot -> Integrator1_CSTATE_g = _rtB -> B_1_223_1784
; } static void mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S ,
0 , 3658286230U ) ; ssSetChecksumVal ( S , 1 , 244342795U ) ;
ssSetChecksumVal ( S , 2 , 1362540783U ) ; ssSetChecksumVal ( S , 3 ,
2560433400U ) ; { mxArray * slVerStructMat = ( NULL ) ; mxArray * slStrMat =
mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status =
mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if ( status
== 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 , "Version" ) ;
if ( slVerMat == ( NULL ) ) { status = 1 ; } else { status = mxGetString (
slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "24.1" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != ( SLSize )
sizeof ( DW_Buck_BLDC_2023a_4_T ) ) { static char msg [ 256 ] ; snprintf (
msg , 256 , "Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file (%ld vs %lu)." , ( signed long )
ssGetSizeofDWork ( S ) , ( unsigned long ) sizeof ( DW_Buck_BLDC_2023a_4_T )
) ; ssSetErrorStatus ( S , msg ) ; } if ( ssGetSizeofGlobalBlockIO ( S ) != (
SLSize ) sizeof ( B_Buck_BLDC_2023a_4_T ) ) { static char msg [ 256 ] ;
snprintf ( msg , 256 , "Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file (%ld vs %lu)." , ( signed long )
ssGetSizeofGlobalBlockIO ( S ) , ( unsigned long ) sizeof (
B_Buck_BLDC_2023a_4_T ) ) ; ssSetErrorStatus ( S , msg ) ; } { int
ssSizeofParams ; ssGetSizeofParams ( S , & ssSizeofParams ) ; if (
ssSizeofParams != sizeof ( P_Buck_BLDC_2023a_4_T ) ) { static char msg [ 256
] ; snprintf ( msg , 256 , "Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file (%d vs %lu)." , ssSizeofParams , (
unsigned long ) sizeof ( P_Buck_BLDC_2023a_4_T ) ) ; ssSetErrorStatus ( S ,
msg ) ; } } _ssSetModelRtp ( S , ( real_T * ) & Buck_BLDC_2023a_4_rtDefaultP
) ; _ssSetConstBlockIO ( S , & Buck_BLDC_2023a_4_rtInvariant ) ; } static
void mdlInitializeSampleTimes ( SimStruct * S ) { slAccRegPrmChangeFcn ( S ,
mdlOutputsTID3 ) ; } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
