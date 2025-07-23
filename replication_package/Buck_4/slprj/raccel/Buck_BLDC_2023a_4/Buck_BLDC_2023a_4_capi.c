#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Buck_BLDC_2023a_4_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 18
#endif
#ifndef SS_INT64
#define SS_INT64 19
#endif
#else
#include "builtin_typeid_types.h"
#include "Buck_BLDC_2023a_4.h"
#include "Buck_BLDC_2023a_4_capi.h"
#include "Buck_BLDC_2023a_4_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Derivative" ) , TARGET_STRING ( "acc m/s^2" ) , 0 , 0 , 0
, 0 , 0 } , { 1 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Multiply" ) ,
TARGET_STRING ( "speed kph" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING
( "Buck_BLDC_2023a_4/converts into (m//s)" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/converts into (rad//s)" ) , TARGET_STRING (
"speed (rad/s)" ) , 0 , 0 , 0 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Product" ) , TARGET_STRING ( "Power (W)" ) , 0 , 0 , 0 , 0
, 1 } , { 5 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Unit Delay" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 7 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/Data Type Conversion" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/Integrator" ) , TARGET_STRING (
"out Energy" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/Integrator1" ) , TARGET_STRING (
"in Energy" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/Logical Operator" ) , TARGET_STRING ( "" )
, 0 , 1 , 0 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/Product" ) , TARGET_STRING (
"Power In Motor" ) , 0 , 0 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/Product1" ) , TARGET_STRING (
"Power In Battery" ) , 0 , 0 , 0 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/only negative" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/only positive" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Commutation Logic/Multiport Switch" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 17 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 18 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Desired speed/rpm2pu"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/T=F*r_wheel" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/coeff_aero= r*Cw*A//2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/converts into (m//s)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/load torque" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/v^2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/Sum1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/LPF/Discrete-Time Integrator" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/LPF/Sum" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Data Type Conversion" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Data Type Conversion1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Data Type Conversion2" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Data Type Conversion3" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Data Type Conversion4" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Data Type Conversion5" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Gain10" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
1 } , { 34 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Gain11" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 36 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Gain6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Gain7" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 38 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Gain8" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Gain9" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 40 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/pole pairs" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Logical Operator" ) , TARGET_STRING ( "" ) , 0 , 1
, 0 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Logical Operator1" ) , TARGET_STRING ( "" ) , 0 , 1
, 0 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Logical Operator2" ) , TARGET_STRING ( "" ) , 0 , 1
, 0 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Logical Operator3" ) , TARGET_STRING ( "" ) , 0 , 1
, 0 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Logical Operator4" ) , TARGET_STRING ( "" ) , 0 , 1
, 0 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Logical Operator5" ) , TARGET_STRING ( "" ) , 0 , 1
, 0 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Math Function" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 48 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator1" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator10" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator11" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator12" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator2" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator3" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator4" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator5" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 56 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator6" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator7" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator8" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 59 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Relational Operator9" ) , TARGET_STRING ( "" ) , 0
, 1 , 0 , 0 , 1 } , { 60 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 61 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Sum2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Unit Delay" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 63 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/RTP_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/Multiply" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 65 , 0 , TARGET_STRING ( "Buck_BLDC_2023a_4/Subsystem/Integrator"
) , TARGET_STRING ( "out Energy" ) , 0 , 0 , 0 , 0 , 0 } , { 66 , 0 ,
TARGET_STRING ( "Buck_BLDC_2023a_4/Subsystem/Integrator1" ) , TARGET_STRING (
"in Energy" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/Product" ) , TARGET_STRING ( "power" ) , 0 , 0 ,
0 , 0 , 1 } , { 68 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/only negative" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 1 } , { 69 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/only positive" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 1 } , { 70 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 71 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Fcn" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 72 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 1 } , { 73 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Relational Operator"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 1 } , { 74 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/LPF/Discrete-Time Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 75 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/LPF/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 76 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/Data Type Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 77 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/Lookup" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 78 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/Sample Time Math"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 79 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 80 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 81 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 82 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 83 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 84 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 85 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_7_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 86 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_8_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 87 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/INPUT_9_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 88 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 89 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 90 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 1 } , { 91 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Compare To Zero/Compare"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 1 } , { 92 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/LimitedCounter/Output"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Digital Clock"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 94 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 95 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Sawtooth Generator/Model/1\\ib1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 96 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Math Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 97 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 98 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 99 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 100 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Filter/Disc. Forward Euler Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 101 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 102 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 103 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 104 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 105 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 106 , 0 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Sum/Sum_PID/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 107 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/LimitedCounter/Increment Real World/FixPt Sum1"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 1 } , { 108 , 0 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/LimitedCounter/Wrap To Zero/FixPt Switch"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 109 , TARGET_STRING (
"Buck_BLDC_2023a_4/Multiply" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
110 , TARGET_STRING ( "Buck_BLDC_2023a_4/converts into (m//s)" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING (
"Buck_BLDC_2023a_4/converts into (rad//s)" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 112 , TARGET_STRING ( "Buck_BLDC_2023a_4/Unit Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 114 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 115 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/only negative" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 116 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/only negative" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 117 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/only positive" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING (
"Buck_BLDC_2023a_4/Buck Converter/only positive" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING (
"Buck_BLDC_2023a_4/Commutation Logic/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 5 , 0 } , { 120 , TARGET_STRING (
"Buck_BLDC_2023a_4/Commutation Logic/Constant1" ) , TARGET_STRING ( "Value" )
, 0 , 5 , 0 } , { 121 , TARGET_STRING (
"Buck_BLDC_2023a_4/Commutation Logic/Constant2" ) , TARGET_STRING ( "Value" )
, 0 , 5 , 0 } , { 122 , TARGET_STRING (
"Buck_BLDC_2023a_4/Commutation Logic/Constant4" ) , TARGET_STRING ( "Value" )
, 0 , 5 , 0 } , { 123 , TARGET_STRING (
"Buck_BLDC_2023a_4/Commutation Logic/Constant5" ) , TARGET_STRING ( "Value" )
, 0 , 5 , 0 } , { 124 , TARGET_STRING (
"Buck_BLDC_2023a_4/Commutation Logic/Constant6" ) , TARGET_STRING ( "Value" )
, 0 , 5 , 0 } , { 125 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"P" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"I" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"D" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"N" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 131 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 133 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"UpperIntegratorSaturationLimit" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Discrete PID Controller" ) , TARGET_STRING (
"LowerIntegratorSaturationLimit" ) , 0 , 0 , 0 } , { 135 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Saturation" ) , TARGET_STRING ( "UpperLimit" )
, 0 , 0 , 0 } , { 136 , TARGET_STRING (
"Buck_BLDC_2023a_4/Controller/Saturation" ) , TARGET_STRING ( "LowerLimit" )
, 0 , 0 , 0 } , { 137 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2" ) ,
TARGET_STRING ( "OutValues" ) , 0 , 6 , 0 } , { 138 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2" ) ,
TARGET_STRING ( "TimeValues" ) , 0 , 6 , 0 } , { 139 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 140 , TARGET_STRING ( "Buck_BLDC_2023a_4/Desired speed/rpm2pu" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/Rolling_friction" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 142 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/T=F*r_wheel" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 143 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/coeff_aero= r*Cw*A//2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 144 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/converts into (m//s)" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 145 , TARGET_STRING (
"Buck_BLDC_2023a_4/Friction and aero torque/load torque" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 146 , TARGET_STRING (
"Buck_BLDC_2023a_4/LPF/Discrete-Time Integrator" ) , TARGET_STRING (
"gainval" ) , 0 , 0 , 0 } , { 147 , TARGET_STRING (
"Buck_BLDC_2023a_4/LPF/Discrete-Time Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 148 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Constant12" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 149 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Constant13" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Constant14" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 151 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Constant15" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 152 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Constant16" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 153 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Constant17" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 154 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Constant18" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 155 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Constant19" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 156 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Constant20" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 157 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Constant21" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 158 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Constant22" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 159 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Constant23" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 160 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 161 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Gain10" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 162 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Gain11" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 }
, { 163 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Gain2" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 164 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Gain6" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 165 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Gain7" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 166 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Gain8" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 167 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Gain9" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 168 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/pole pairs" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 169 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 170 , TARGET_STRING (
"Buck_BLDC_2023a_4/Sensor/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0
, 0 , 0 } , { 171 , TARGET_STRING ( "Buck_BLDC_2023a_4/Sensor/Unit Delay" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 172 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/Multiply" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 173 , TARGET_STRING ( "Buck_BLDC_2023a_4/Subsystem/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 174 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 175 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/only negative" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 176 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/only negative" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 177 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/only positive" ) , TARGET_STRING ( "UpperLimit"
) , 0 , 0 , 0 } , { 178 , TARGET_STRING (
"Buck_BLDC_2023a_4/Subsystem/only positive" ) , TARGET_STRING ( "LowerLimit"
) , 0 , 0 , 0 } , { 179 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/Subsystem_around_RTP_DBEA2577_vc/Subsystem_around_RTP_DBEA2577_vc"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 180 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/LPF/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 181 , TARGET_STRING (
"Buck_BLDC_2023a_4/Desired speed/LPF/Discrete-Time Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 182 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/Sample Time Math"
) , TARGET_STRING ( "WtEt" ) , 0 , 0 , 0 } , { 183 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 184 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/LimitedCounter/Wrap To Zero"
) , TARGET_STRING ( "Threshold" ) , 2 , 0 , 0 } , { 185 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/LimitedCounter/Output"
) , TARGET_STRING ( "InitialCondition" ) , 2 , 0 , 0 } , { 186 ,
TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 187 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Sawtooth Generator/Model/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 188 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Buck Converter/PWM Generator (DC-DC)/Sawtooth Generator/Model/1\\ib1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 189 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 190 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 191 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/LimitedCounter/Increment Real World/FixPt Constant"
) , TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , { 192 , TARGET_STRING (
 "Buck_BLDC_2023a_4/Desired speed/Repeating Sequence Interpolated2/LimitedCounter/Wrap To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ncb1snsfz2 , & rtB . loux1l3u5w ,
& rtB . fax5qeeyc1 , & rtB . ffh3vaqhha , & rtB . fxrcnp5bjm , & rtB .
edxvioyzlc , & rtB . kuelqyv3wb , & rtB . dquprl145n , & rtB . mdhsmk0z5v , &
rtB . fylncoh0hg , & rtB . dnqdrumv1i , & rtB . la0lywfzq3 , & rtB .
n5buikirfg , & rtB . ohmkvyyvno , & rtB . kahmn5kkv5 , & rtB . jkk4cu5kch [ 0
] , & rtB . mv2egnitku , & rtB . dhj2kqscw2 , & rtB . eyqv0xj1ug , & rtB .
cjhohfslts , & rtB . k1rj25ivdk , & rtB . igqbtwb1cb , & rtB . aoj0xh52vh , &
rtB . ntau2arxhc , & rtB . mklcfmrns4 , & rtB . o1wvh1f3fj , & rtB .
ou3ioysjfo , & rtB . cngejipk01 , & rtB . lidvtlakg4 , & rtB . k0jkfliw3f , &
rtB . mgtbco3ykj , & rtB . e5xs1fgp0p , & rtB . howt2qok0i , & rtB .
p5xsnshbs2 , & rtB . jjm52urekq , & rtB . jvh2ohto52 , & rtB . e4ir2xx5wg , &
rtB . lut33f4odj , & rtB . bqudhrxhmu , & rtB . ltac0jcdqm , & rtB .
pdykrtncmz , & rtB . dhojtt4r2r , & rtB . fqj12khujg , & rtB . f5vvbgw04z , &
rtB . g3q3b4gkk1 , & rtB . obpxpmwwxu , & rtB . ajs0qdm2js , & rtB .
ndvl0vsmvk , & rtB . dehruik5oa , & rtB . bov2zzmsnh , & rtB . oo1b0vvxiu , &
rtB . nf5mwr2amm , & rtB . cri2ighsbt , & rtB . cprrfu52rw , & rtB .
ny0skh2lmi , & rtB . pwxvkz4cs3 , & rtB . m4jno1bkib , & rtB . pg44xwiojj , &
rtB . mur22rltjv , & rtB . ioaefphlhe , & rtB . kn3hi4jtzs , & rtB .
ldg3ehsse5 , & rtB . k5fkctjwt3 , & rtB . pftutvvgoa , & rtB . a41vzzxren , &
rtB . nhvdwogyzu , & rtB . kz5tpkq11l , & rtB . eud0zgm0r5 , & rtB .
do4skprury , & rtB . ouvlgrsc5y , & rtB . d4qoidu0ry , & rtB . lrnvfgtgd0 , &
rtB . lbwft3qm51 , & rtB . az1w2epyt0 , & rtB . boxlro0v4w , & rtB .
ieawd2cbze , & rtB . fmrmomooue , & rtB . nj4juwhgqw , & rtB . llbtqnhtpl , &
rtB . bvmbcuedts [ 0 ] , & rtB . alvydcpetd [ 0 ] , & rtB . k1eonvu0jk [ 0 ]
, & rtB . llsv3ekyqe [ 0 ] , & rtB . fx4wpmz5u0 [ 0 ] , & rtB . by1nqwksec [
0 ] , & rtB . hazdzaaae3 [ 0 ] , & rtB . j2a44cvuzt [ 0 ] , & rtB .
lrl4sovswi [ 0 ] , & rtB . mb2uqnl0dc [ 0 ] , & rtB . di3f3nhukn , & rtB .
jhdkhjxll0 [ 0 ] , & rtB . j5vnwqxvus , & rtB . fwe1oukzth , & rtB .
i230d00p4f , & rtB . oepjxvzqvl , & rtB . l1gsa3trsh , & rtB . myvwt33bkt , &
rtB . kyvlw1eg1j , & rtB . lsgonhap4q , & rtB . ccdpg2e51c , & rtB .
et2gzftmfl , & rtB . awkvkk5zk5 , & rtB . ez4vimsggj , & rtB . hmsv5lubrs , &
rtB . crw5li1kzs , & rtB . e32tu1k5dy , & rtB . k0h0smmumn , & rtB .
fj0htoh5tj , & rtB . ncvg3pf1ks , & rtP . Multiply_Gain , & rtP .
convertsintoms_Gain_fiqpesw42p , & rtP . convertsintorads_Gain , & rtP .
UnitDelay_InitialCondition , & rtP . Integrator_IC , & rtP . Integrator1_IC ,
& rtP . onlynegative_UpperSat , & rtP . onlynegative_LowerSat , & rtP .
onlypositive_UpperSat , & rtP . onlypositive_LowerSat , & rtP .
Constant_Value_oq05l1rpow [ 0 ] , & rtP . Constant1_Value [ 0 ] , & rtP .
Constant2_Value_p0oprvq4dx [ 0 ] , & rtP . Constant4_Value [ 0 ] , & rtP .
Constant5_Value [ 0 ] , & rtP . Constant6_Value [ 0 ] , & rtP .
DiscretePIDController_P , & rtP . DiscretePIDController_I , & rtP .
DiscretePIDController_D , & rtP . DiscretePIDController_N , & rtP .
DiscretePIDController_InitialConditionForIntegrator , & rtP .
DiscretePIDController_InitialConditionForFilter , & rtP .
DiscretePIDController_UpperSaturationLimit , & rtP .
DiscretePIDController_LowerSaturationLimit , & rtP .
DiscretePIDController_UpperIntegratorSaturationLimit , & rtP .
DiscretePIDController_LowerIntegratorSaturationLimit , & rtP .
Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP .
RepeatingSequenceInterpolated2_OutValues [ 0 ] , & rtP .
RepeatingSequenceInterpolated2_TimeValues [ 0 ] , & rtP . Gain_Gain , & rtP .
rpm2pu_Gain , & rtP . Rolling_friction_Value , & rtP . TFr_wheel_Gain , & rtP
. coeff_aerorCwA2_Gain , & rtP . convertsintoms_Gain , & rtP .
loadtorque_Gain , & rtP . DiscreteTimeIntegrator_gainval_ironaljz5i , & rtP .
DiscreteTimeIntegrator_IC_p0emdu1vo0 , & rtP . Constant12_Value , & rtP .
Constant13_Value , & rtP . Constant14_Value , & rtP . Constant15_Value , &
rtP . Constant16_Value , & rtP . Constant17_Value , & rtP . Constant18_Value
, & rtP . Constant19_Value , & rtP . Constant20_Value , & rtP .
Constant21_Value , & rtP . Constant22_Value , & rtP . Constant23_Value , &
rtP . Constant3_Value_ja55kf1ii0 , & rtP . Gain10_Gain , & rtP . Gain11_Gain
, & rtP . Gain2_Gain , & rtP . Gain6_Gain , & rtP . Gain7_Gain , & rtP .
Gain8_Gain , & rtP . Gain9_Gain , & rtP . polepairs_Gain , & rtP .
Saturation_UpperSat_i0xk5bf3au , & rtP . Saturation_LowerSat_ds3qzssna2 , &
rtP . UnitDelay_InitialCondition_k3ms2yvusv , & rtP .
Multiply_Gain_mmgzpqegcd , & rtP . Integrator_IC_enr3uyn1pn , & rtP .
Integrator1_IC_iytltsacmf , & rtP . onlynegative_UpperSat_n10o4huijb , & rtP
. onlynegative_LowerSat_fmq51hroac , & rtP . onlypositive_UpperSat_miyd3oypjf
, & rtP . onlypositive_LowerSat_fr1olx4dcr , & rtP . RTP_DBEA2577_vc_Value ,
& rtP . DiscreteTimeIntegrator_gainval , & rtP . DiscreteTimeIntegrator_IC ,
& rtP . SampleTimeMath_WtEt , & rtP . Constant_Value , & rtP .
WrapToZero_Threshold , & rtP . Output_InitialCondition , & rtP .
Constant2_Value , & rtP . Constant3_Value , & rtP . uib1_Gain , & rtP .
Filter_gainval , & rtP . Integrator_gainval , & rtP . FixPtConstant_Value , &
rtP . Constant_Value_h50w2jt11b , } ; static int32_T * rtVarDimsAddrMap [ ] =
{ ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof (
uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 1 , 1 , 6 , 1 , 4 , 1 , 18 , 1 , 83 , 1 , 1 , 6 , 1 , 8 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 , 5.0E-5 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 1 , ( uint8_T ) 0
} } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals ,
109 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 84 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3779561728U , 3522019344U , 2004016594U , 3022508733U } , ( NULL ) , 0 ,
( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Buck_BLDC_2023a_4_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Buck_BLDC_2023a_4_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Buck_BLDC_2023a_4_host_InitializeDataMapInfo (
Buck_BLDC_2023a_4_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
