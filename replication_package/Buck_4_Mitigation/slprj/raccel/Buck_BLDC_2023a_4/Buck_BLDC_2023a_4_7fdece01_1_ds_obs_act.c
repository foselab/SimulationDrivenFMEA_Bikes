#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_obs_act.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_obs_act ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t93 , NeDsMethodOutput * out ) { real_T
Three_Phase_Inverter_Converter_Three_Phase_G_V [ 12 ] ; real_T t1 [ 12 ] ;
real_T BLDC_a_v ; real_T BLDC_b_v ; real_T BLDC_c_v ; real_T BLDC_i_a ;
real_T BLDC_i_n ; real_T BLDC_n_v ; real_T BLDC_torque ; real_T Battery1_n_v
; real_T Battery1_p_v ; real_T Buck_Converter_Capacitor1_p_v ; real_T
Buck_Converter_Current_Sensor1_I ; real_T Buck_Converter_S1_diode_i ; real_T
Buck_Converter_S1_diode_v_diode ; real_T Buck_Converter_S_diode_i ; real_T
Buck_Converter_S_diode_v_diode ; real_T
Three_Phase_Inverter_Converter_Three_Phase_C1_v ; real_T
Three_Phase_Inverter_Converter_Three_Phase_C2_v ; real_T
Three_Phase_Inverter_Converter_Three_Phase_C3_v ; real_T
Three_Phase_Inverter_Converter_Three_Phase_C4_v ; real_T
Three_Phase_Inverter_Converter_Three_Phase_C5_v ; real_T
Three_Phase_Inverter_Converter_Three_Phase_C6_v ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode ; real_T
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode ; real_T t34 ;
real_T t35 ; real_T t36 ; real_T t51 ; real_T t56 ; real_T t58 ; real_T t59 ;
real_T t91 ; size_t t22 ; out -> mOBS_ACT . mX [ 47ULL ] = 298.15 ; BLDC_a_v
= ( - t93 -> mX . mX [ 0ULL ] + t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93 ->
mX . mX [ 20ULL ] ; BLDC_b_v = ( - t93 -> mX . mX [ 2ULL ] + t93 -> mX . mX [
25ULL ] * - 0.1 ) + t93 -> mX . mX [ 20ULL ] ; BLDC_c_v = ( - t93 -> mX . mX
[ 3ULL ] + t93 -> mX . mX [ 26ULL ] * - 0.1 ) + t93 -> mX . mX [ 20ULL ] ;
BLDC_i_a = - t93 -> mX . mX [ 30ULL ] - t93 -> mX . mX [ 31ULL ] ; BLDC_i_n =
( ( t93 -> mX . mX [ 0ULL ] * 1.0E-9 + t93 -> mX . mX [ 35ULL ] * 1.0E-9 ) +
t93 -> mX . mX [ 20ULL ] * - 1.0E-9 ) + t93 -> mX . mX [ 21ULL ] *
1.0000000000000002E-10 ; BLDC_n_v = ( ( - t93 -> mX . mX [ 0ULL ] - t93 -> mX
. mX [ 35ULL ] ) + t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93 -> mX . mX [
20ULL ] ; out -> mOBS_ACT . mX [ 43ULL ] = ( ( ( - t93 -> mX . mX [ 2ULL ] +
t93 -> mX . mX [ 21ULL ] * 0.1 ) + t93 -> mX . mX [ 25ULL ] * - 0.1 ) + t93
-> mX . mX [ 35ULL ] ) + t93 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT . mX [
44ULL ] = ( ( ( - t93 -> mX . mX [ 3ULL ] + t93 -> mX . mX [ 21ULL ] * 0.1 )
+ t93 -> mX . mX [ 26ULL ] * - 0.1 ) + t93 -> mX . mX [ 35ULL ] ) + t93 -> mX
. mX [ 0ULL ] ; BLDC_torque = - t93 -> mX . mX [ 37ULL ] + t93 -> mU . mX [
2ULL ] ; Battery1_n_v = ( ( ( - t93 -> mX . mX [ 0ULL ] - t93 -> mX . mX [
10ULL ] ) + t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * -
0.1 ) + t93 -> mX . mX [ 20ULL ] ; Battery1_p_v = ( ( ( ( ( - t93 -> mX . mX
[ 0ULL ] - t93 -> mX . mX [ 10ULL ] ) + t93 -> mX . mX [ 38ULL ] * 0.005 ) +
t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93
-> mX . mX [ 20ULL ] ) + 48.0 ; out -> mOBS_ACT . mX [ 58ULL ] = t93 -> mX .
mX [ 38ULL ] * 0.005 + 48.0 ; out -> mOBS_ACT . mX [ 59ULL ] = ( ( ( ( ( ( (
( ( ( t93 -> mX . mX [ 20ULL ] * - 1.0E-9 + t93 -> mX . mX [ 40ULL ] * 1.0E-9
) - t93 -> mX . mX [ 39ULL ] ) - t93 -> mX . mX [ 41ULL ] ) - t93 -> mX . mX
[ 42ULL ] ) - t93 -> mX . mX [ 44ULL ] ) - t93 -> mX . mX [ 46ULL ] ) - t93
-> mX . mX [ 48ULL ] ) + t93 -> mX . mX [ 11ULL ] ) + t93 -> mX . mX [ 43ULL
] ) + t93 -> mX . mX [ 45ULL ] ) + t93 -> mX . mX [ 47ULL ] ; out -> mOBS_ACT
. mX [ 62ULL ] = ( ( t93 -> mX . mX [ 21ULL ] * 0.1 + t93 -> mX . mX [ 39ULL
] * 0.1 ) + t93 -> mX . mX [ 0ULL ] ) + t93 -> mX . mX [ 10ULL ] ;
Buck_Converter_Capacitor1_p_v = ( ( ( ( ( - t93 -> mX . mX [ 0ULL ] - t93 ->
mX . mX [ 10ULL ] ) + t93 -> mX . mX [ 49ULL ] * 0.2 ) + t93 -> mX . mX [
21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [
20ULL ] ) + t93 -> mX . mX [ 13ULL ] ; out -> mOBS_ACT . mX [ 67ULL ] = t93
-> mX . mX [ 49ULL ] * 0.2 + t93 -> mX . mX [ 13ULL ] ;
Buck_Converter_Current_Sensor1_I = ( ( ( ( ( ( ( - t93 -> mX . mX [ 43ULL ] -
t93 -> mX . mX [ 45ULL ] ) - t93 -> mX . mX [ 47ULL ] ) + t93 -> mX . mX [
39ULL ] ) + t93 -> mX . mX [ 41ULL ] ) + t93 -> mX . mX [ 42ULL ] ) + t93 ->
mX . mX [ 44ULL ] ) + t93 -> mX . mX [ 46ULL ] ) + t93 -> mX . mX [ 48ULL ] ;
out -> mOBS_ACT . mX [ 79ULL ] = ( t93 -> mX . mX [ 20ULL ] * - 1.0E-9 + t93
-> mX . mX [ 40ULL ] * 1.0E-9 ) + t93 -> mX . mX [ 11ULL ] ; out -> mOBS_ACT
. mX [ 82ULL ] = - t93 -> mX . mX [ 20ULL ] + t93 -> mX . mX [ 40ULL ] ; out
-> mOBS_ACT . mX [ 87ULL ] = ( ( - t93 -> mX . mX [ 13ULL ] + t93 -> mX . mX
[ 38ULL ] * 0.005 ) + t93 -> mX . mX [ 49ULL ] * - 0.2 ) + 48.0 ;
Buck_Converter_S_diode_i = ( t93 -> mX . mX [ 38ULL ] + t93 -> mX . mX [
49ULL ] ) + t93 -> mX . mX [ 50ULL ] ; Buck_Converter_S_diode_v_diode = t93
-> mX . mX [ 40ULL ] - Buck_Converter_Capacitor1_p_v ; out -> mOBS_ACT . mX [
101ULL ] = ( ( ( ( ( ( - t93 -> mX . mX [ 13ULL ] - t93 -> mX . mX [ 20ULL ]
) + t93 -> mX . mX [ 49ULL ] * - 0.2 ) + t93 -> mX . mX [ 21ULL ] * 0.1 ) +
t93 -> mX . mX [ 39ULL ] * 0.1 ) + t93 -> mX . mX [ 40ULL ] ) + t93 -> mX .
mX [ 0ULL ] ) + t93 -> mX . mX [ 10ULL ] ; out -> mOBS_ACT . mX [ 118ULL ] =
t93 -> mX . mX [ 50ULL ] - Buck_Converter_S_diode_i ; t51 = ( ( ( ( ( ( - t93
-> mX . mX [ 0ULL ] - t93 -> mX . mX [ 10ULL ] ) + t93 -> mX . mX [ 49ULL ] *
0.2 ) - t93 -> mX . mX [ 40ULL ] ) + t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93
-> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [ 20ULL ] ) + t93 -> mX . mX
[ 13ULL ] ; out -> mOBS_ACT . mX [ 125ULL ] = t93 -> mU . mX [ 0ULL ] ; out
-> mOBS_ACT . mX [ 126ULL ] = Buck_Converter_Capacitor1_p_v - t93 -> mX . mX
[ 40ULL ] ; Buck_Converter_S1_diode_i = ( ( ( ( t93 -> mX . mX [ 20ULL ] * -
1.0E-9 + t93 -> mX . mX [ 40ULL ] * 1.0E-9 ) + t93 -> mX . mX [ 38ULL ] ) +
t93 -> mX . mX [ 49ULL ] ) + t93 -> mX . mX [ 11ULL ] ) + t93 -> mX . mX [
52ULL ] ; Buck_Converter_S1_diode_v_diode = Battery1_n_v - t93 -> mX . mX [
40ULL ] ; out -> mOBS_ACT . mX [ 140ULL ] = ( ( ( ( - t93 -> mX . mX [ 0ULL ]
- t93 -> mX . mX [ 10ULL ] ) - t93 -> mX . mX [ 40ULL ] ) + t93 -> mX . mX [
21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [
20ULL ] ; out -> mOBS_ACT . mX [ 157ULL ] = t93 -> mX . mX [ 52ULL ] -
Buck_Converter_S1_diode_i ; t56 = ( ( ( ( - t93 -> mX . mX [ 20ULL ] + t93 ->
mX . mX [ 21ULL ] * 0.1 ) + t93 -> mX . mX [ 39ULL ] * 0.1 ) + t93 -> mX . mX
[ 40ULL ] ) + t93 -> mX . mX [ 0ULL ] ) + t93 -> mX . mX [ 10ULL ] ; out ->
mOBS_ACT . mX [ 164ULL ] = t93 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX [
165ULL ] = t93 -> mX . mX [ 40ULL ] - Battery1_n_v ; t58 = t93 -> mX . mX [
20ULL ] - Battery1_n_v ; t59 = Battery1_p_v - Battery1_n_v ;
Three_Phase_Inverter_Converter_Three_Phase_C1_v = t93 -> mX . mX [ 21ULL ] *
0.1 + t93 -> mX . mX [ 0ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_C2_v = t93 -> mX . mX [ 39ULL ] *
0.1 + t93 -> mX . mX [ 10ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_C3_v = t93 -> mX . mX [ 25ULL ] *
0.1 + t93 -> mX . mX [ 2ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_C4_v = ( ( ( ( - t93 -> mX . mX [
2ULL ] + t93 -> mX . mX [ 21ULL ] * 0.1 ) + t93 -> mX . mX [ 39ULL ] * 0.1 )
+ t93 -> mX . mX [ 25ULL ] * - 0.1 ) + t93 -> mX . mX [ 0ULL ] ) + t93 -> mX
. mX [ 10ULL ] ; Three_Phase_Inverter_Converter_Three_Phase_C5_v = t93 -> mX
. mX [ 26ULL ] * 0.1 + t93 -> mX . mX [ 3ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_C6_v = ( ( ( ( - t93 -> mX . mX [
3ULL ] + t93 -> mX . mX [ 21ULL ] * 0.1 ) + t93 -> mX . mX [ 39ULL ] * 0.1 )
+ t93 -> mX . mX [ 26ULL ] * - 0.1 ) + t93 -> mX . mX [ 0ULL ] ) + t93 -> mX
. mX [ 10ULL ] ; t1 [ 0ULL ] = t93 -> mU . mX [ 8ULL ] ; t1 [ 1ULL ] = 0.0 ;
t1 [ 2ULL ] = t93 -> mU . mX [ 3ULL ] ; t1 [ 3ULL ] = 0.0 ; t1 [ 4ULL ] = t93
-> mU . mX [ 4ULL ] ; t1 [ 5ULL ] = 0.0 ; t1 [ 6ULL ] = t93 -> mU . mX [ 5ULL
] ; t1 [ 7ULL ] = 0.0 ; t1 [ 8ULL ] = t93 -> mU . mX [ 6ULL ] ; t1 [ 9ULL ] =
0.0 ; t1 [ 10ULL ] = t93 -> mU . mX [ 7ULL ] ; t1 [ 11ULL ] = 0.0 ; for ( t22
= 0ULL ; t22 < 12ULL ; t22 ++ ) {
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t22 ] = t1 [ t22 ] ; }
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i = ( ( ( ( ( - t93 -> mX
. mX [ 39ULL ] - t93 -> mX . mX [ 44ULL ] ) + t93 -> mX . mX [ 30ULL ] ) +
t93 -> mX . mX [ 31ULL ] ) + t93 -> mX . mX [ 21ULL ] ) + t93 -> mX . mX [
55ULL ] ) + t93 -> mX . mX [ 43ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode = BLDC_a_v - t93
-> mX . mX [ 20ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode = Battery1_n_v -
BLDC_a_v ; Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i = ( ( ( ( -
t93 -> mX . mX [ 30ULL ] - t93 -> mX . mX [ 41ULL ] ) - t93 -> mX . mX [
46ULL ] ) + t93 -> mX . mX [ 25ULL ] ) + t93 -> mX . mX [ 58ULL ] ) + t93 ->
mX . mX [ 45ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode = BLDC_b_v - t93
-> mX . mX [ 20ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode = Battery1_n_v -
BLDC_b_v ; Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i = ( ( ( ( -
t93 -> mX . mX [ 31ULL ] - t93 -> mX . mX [ 42ULL ] ) - t93 -> mX . mX [
48ULL ] ) + t93 -> mX . mX [ 26ULL ] ) + t93 -> mX . mX [ 61ULL ] ) + t93 ->
mX . mX [ 47ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode = BLDC_c_v - t93
-> mX . mX [ 20ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode = Battery1_n_v -
BLDC_c_v ; t34 = ( ( - t93 -> mX . mX [ 0ULL ] + t93 -> mX . mX [ 21ULL ] * -
0.1 ) + t93 -> mX . mX [ 25ULL ] * 0.1 ) + t93 -> mX . mX [ 2ULL ] ; t35 = (
( - t93 -> mX . mX [ 2ULL ] + t93 -> mX . mX [ 25ULL ] * - 0.1 ) + t93 -> mX
. mX [ 26ULL ] * 0.1 ) + t93 -> mX . mX [ 3ULL ] ; t36 = ( ( - t93 -> mX . mX
[ 3ULL ] + t93 -> mX . mX [ 21ULL ] * 0.1 ) + t93 -> mX . mX [ 26ULL ] * -
0.1 ) + t93 -> mX . mX [ 0ULL ] ; t91 = BLDC_c_v - BLDC_n_v ; out -> mOBS_ACT
. mX [ 0ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 1ULL ] = t93 -> mX . mX [ 1ULL ]
* 57.295779513082323 ; out -> mOBS_ACT . mX [ 2ULL ] = 1.0 ; out -> mOBS_ACT
. mX [ 3ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 4ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 5ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 6ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 7ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 8ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 9ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 10ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 11ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 12ULL ] = t93 -> mX . mX [ 15ULL
] ; out -> mOBS_ACT . mX [ 13ULL ] = 0.12 ; out -> mOBS_ACT . mX [ 14ULL ] =
0.12 ; out -> mOBS_ACT . mX [ 15ULL ] = 0.12 ; out -> mOBS_ACT . mX [ 16ULL ]
= 0.0 ; out -> mOBS_ACT . mX [ 17ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 18ULL ]
= BLDC_a_v ; out -> mOBS_ACT . mX [ 19ULL ] = 0.0 ; out -> mOBS_ACT . mX [
20ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 21ULL ] = t93 -> mX . mX [ 23ULL ] *
9.5492965855137211 ; out -> mOBS_ACT . mX [ 22ULL ] = BLDC_b_v ; out ->
mOBS_ACT . mX [ 23ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 24ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 25ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 26ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 27ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 28ULL ] = t93
-> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX [ 29ULL ] = t93 -> mX . mX [
28ULL ] ; out -> mOBS_ACT . mX [ 30ULL ] = BLDC_i_a ; out -> mOBS_ACT . mX [
31ULL ] = t93 -> mX . mX [ 30ULL ] ; out -> mOBS_ACT . mX [ 32ULL ] = t93 ->
mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 33ULL ] = t93 -> mX . mX [ 4ULL ]
; out -> mOBS_ACT . mX [ 34ULL ] = BLDC_i_n ; out -> mOBS_ACT . mX [ 35ULL ]
= t93 -> mX . mX [ 5ULL ] ; out -> mOBS_ACT . mX [ 36ULL ] = BLDC_n_v ; out
-> mOBS_ACT . mX [ 37ULL ] = t93 -> mX . mX [ 6ULL ] ; out -> mOBS_ACT . mX [
38ULL ] = t93 -> mX . mX [ 7ULL ] ; out -> mOBS_ACT . mX [ 39ULL ] = t93 ->
mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 40ULL ] = BLDC_torque ; out ->
mOBS_ACT . mX [ 41ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 42ULL ] = t93 -> mX .
mX [ 35ULL ] ; out -> mOBS_ACT . mX [ 45ULL ] = 0.0 ; out -> mOBS_ACT . mX [
46ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 48ULL ] = t93 -> mX . mX [ 38ULL ] ;
out -> mOBS_ACT . mX [ 49ULL ] = t93 -> mX . mX [ 9ULL ] *
0.00027777777777777778 ; out -> mOBS_ACT . mX [ 50ULL ] = Battery1_n_v ; out
-> mOBS_ACT . mX [ 51ULL ] = Battery1_p_v ; out -> mOBS_ACT . mX [ 52ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 53ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 54ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 55ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 56ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 57ULL ] = t93 -> mX . mX [ 9ULL ] ; out ->
mOBS_ACT . mX [ 60ULL ] = Battery1_n_v ; out -> mOBS_ACT . mX [ 61ULL ] = t93
-> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 63ULL ] = t93 -> mX . mX [
12ULL ] ; out -> mOBS_ACT . mX [ 64ULL ] = t93 -> mX . mX [ 49ULL ] ; out ->
mOBS_ACT . mX [ 65ULL ] = Battery1_n_v ; out -> mOBS_ACT . mX [ 66ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mOBS_ACT . mX [ 68ULL ] = t93 -> mX .
mX [ 13ULL ] ; out -> mOBS_ACT . mX [ 69ULL ] = - t93 -> mX . mX [ 38ULL ] ;
out -> mOBS_ACT . mX [ 70ULL ] = - t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT
. mX [ 71ULL ] = Battery1_p_v ; out -> mOBS_ACT . mX [ 72ULL ] = Battery1_p_v
; out -> mOBS_ACT . mX [ 73ULL ] = Buck_Converter_Current_Sensor1_I ; out ->
mOBS_ACT . mX [ 74ULL ] = Buck_Converter_Current_Sensor1_I ; out -> mOBS_ACT
. mX [ 75ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 76ULL ] =
t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 77ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mOBS_ACT . mX [ 78ULL ] = - t93 ->
mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 80ULL ] = t93 -> mX . mX [ 20ULL ]
; out -> mOBS_ACT . mX [ 81ULL ] = t93 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT
. mX [ 83ULL ] = t93 -> mX . mX [ 11ULL ] ; out -> mOBS_ACT . mX [ 84ULL ] =
- t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 85ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mOBS_ACT . mX [ 86ULL ] = Battery1_p_v
; out -> mOBS_ACT . mX [ 88ULL ] = t93 -> mX . mX [ 14ULL ] ; out -> mOBS_ACT
. mX [ 89ULL ] = Buck_Converter_Capacitor1_p_v ; out -> mOBS_ACT . mX [ 90ULL
] = t93 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 91ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 92ULL ] = t93 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [
93ULL ] = - 1.0 ; out -> mOBS_ACT . mX [ 94ULL ] = 1.0 ; out -> mOBS_ACT . mX
[ 95ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 96ULL ] = Buck_Converter_S_diode_i ;
out -> mOBS_ACT . mX [ 97ULL ] = Buck_Converter_Capacitor1_p_v ; out ->
mOBS_ACT . mX [ 98ULL ] = t93 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [
99ULL ] = t93 -> mX . mX [ 51ULL ] ; out -> mOBS_ACT . mX [ 100ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 102ULL ] = Buck_Converter_Capacitor1_p_v ; out ->
mOBS_ACT . mX [ 103ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 104ULL ] = 298.15 ;
out -> mOBS_ACT . mX [ 105ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 106ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 107ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 108ULL ]
= Buck_Converter_S_diode_i ; out -> mOBS_ACT . mX [ 109ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 110ULL ] = Buck_Converter_S_diode_i ; out -> mOBS_ACT . mX [
111ULL ] = Buck_Converter_S_diode_i ; out -> mOBS_ACT . mX [ 112ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mOBS_ACT . mX [ 113ULL ] = t93 -> mX .
mX [ 40ULL ] ; out -> mOBS_ACT . mX [ 114ULL ] = Buck_Converter_S_diode_i *
Buck_Converter_S_diode_v_diode * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [
115ULL ] = Buck_Converter_S_diode_v_diode ; out -> mOBS_ACT . mX [ 116ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 117ULL ] = Buck_Converter_S_diode_v_diode ; out
-> mOBS_ACT . mX [ 119ULL ] = t93 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT . mX
[ 120ULL ] = t93 -> mX . mX [ 50ULL ] ; out -> mOBS_ACT . mX [ 121ULL ] = t93
-> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [ 122ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mOBS_ACT . mX [ 123ULL ] = t93 -> mX .
mX [ 50ULL ] * t51 * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 124ULL ] = t51 ;
out -> mOBS_ACT . mX [ 127ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 128ULL ] = t93
-> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [ 129ULL ] = t93 -> mU . mX [
1ULL ] ; out -> mOBS_ACT . mX [ 130ULL ] = 0.0 ; out -> mOBS_ACT . mX [
131ULL ] = Battery1_n_v ; out -> mOBS_ACT . mX [ 132ULL ] = - 1.0 ; out ->
mOBS_ACT . mX [ 133ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 134ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 135ULL ] = Buck_Converter_S1_diode_i ; out -> mOBS_ACT .
mX [ 136ULL ] = t93 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [ 137ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 138ULL ] = t93 -> mX . mX [ 53ULL ] ;
out -> mOBS_ACT . mX [ 139ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 141ULL ] = t93
-> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [ 142ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 143ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 144ULL ] = 298.15
; out -> mOBS_ACT . mX [ 145ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 146ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 147ULL ] = Buck_Converter_S1_diode_i ; out ->
mOBS_ACT . mX [ 148ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 149ULL ] =
Buck_Converter_S1_diode_i ; out -> mOBS_ACT . mX [ 150ULL ] =
Buck_Converter_S1_diode_i ; out -> mOBS_ACT . mX [ 151ULL ] = t93 -> mX . mX
[ 40ULL ] ; out -> mOBS_ACT . mX [ 152ULL ] = Battery1_n_v ; out -> mOBS_ACT
. mX [ 153ULL ] = Buck_Converter_S1_diode_i * Buck_Converter_S1_diode_v_diode
* 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 154ULL ] =
Buck_Converter_S1_diode_v_diode ; out -> mOBS_ACT . mX [ 155ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 156ULL ] = Buck_Converter_S1_diode_v_diode ; out ->
mOBS_ACT . mX [ 158ULL ] = t93 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX [
159ULL ] = t93 -> mX . mX [ 52ULL ] ; out -> mOBS_ACT . mX [ 160ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 161ULL ] = t93 -> mX . mX [ 40ULL ] ;
out -> mOBS_ACT . mX [ 162ULL ] = t93 -> mX . mX [ 52ULL ] * t56 * 0.001 *
1000.0 ; out -> mOBS_ACT . mX [ 163ULL ] = t56 ; out -> mOBS_ACT . mX [
166ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 167ULL ] = t93 -> mU . mX [ 0ULL ] ;
out -> mOBS_ACT . mX [ 168ULL ] = t93 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT .
mX [ 169ULL ] = t58 ; out -> mOBS_ACT . mX [ 170ULL ] = Battery1_n_v ; out ->
mOBS_ACT . mX [ 171ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
172ULL ] = t59 ; out -> mOBS_ACT . mX [ 173ULL ] = Battery1_n_v ; out ->
mOBS_ACT . mX [ 174ULL ] = Battery1_p_v ; out -> mOBS_ACT . mX [ 175ULL ] =
t59 ; out -> mOBS_ACT . mX [ 176ULL ] = t58 ; out -> mOBS_ACT . mX [ 177ULL ]
= Battery1_p_v ; out -> mOBS_ACT . mX [ 178ULL ] = Battery1_n_v ; out ->
mOBS_ACT . mX [ 179ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
180ULL ] = t93 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 181ULL ] = t93
-> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 182ULL ] = BLDC_c_v ; out ->
mOBS_ACT . mX [ 183ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 184ULL ] = t93
-> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 185ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 186ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [
187ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [ 188ULL ] = -
BLDC_torque ; out -> mOBS_ACT . mX [ 189ULL ] = - BLDC_torque ; out ->
mOBS_ACT . mX [ 190ULL ] = - BLDC_torque ; out -> mOBS_ACT . mX [ 191ULL ] =
t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [ 192ULL ] = t93 -> mX . mX [
15ULL ] ; out -> mOBS_ACT . mX [ 193ULL ] = t93 -> mX . mX [ 37ULL ] ; out ->
mOBS_ACT . mX [ 194ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [
195ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 196ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 197ULL ] = - BLDC_i_n ; out -> mOBS_ACT . mX [ 198ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 199ULL ] = BLDC_n_v ; out -> mOBS_ACT . mX [ 200ULL ] =
BLDC_i_n * - 1.0E+9 ; out -> mOBS_ACT . mX [ 201ULL ] = t93 -> mX . mX [
16ULL ] ; out -> mOBS_ACT . mX [ 202ULL ] = 0.0 ; out -> mOBS_ACT . mX [
203ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [ 204ULL ] = t93
-> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [ 205ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 206ULL ] = t93 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT . mX [
207ULL ] = t93 -> mX . mX [ 15ULL ] * 9.5492965855137211 ; out -> mOBS_ACT .
mX [ 208ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 209ULL ] = t93 -> mX . mX [
15ULL ] ; out -> mOBS_ACT . mX [ 210ULL ] = 0.0 ; out -> mOBS_ACT . mX [
211ULL ] = t93 -> mX . mX [ 17ULL ] ; out -> mOBS_ACT . mX [ 212ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 213ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT
. mX [ 214ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [ 215ULL ]
= 0.0 ; out -> mOBS_ACT . mX [ 216ULL ] = t93 -> mX . mX [ 17ULL ] *
57.295779513082323 ; out -> mOBS_ACT . mX [ 217ULL ] = t93 -> mX . mX [ 17ULL
] ; out -> mOBS_ACT . mX [ 218ULL ] = t93 -> mX . mX [ 15ULL ] *
9.5492965855137211 ; out -> mOBS_ACT . mX [ 219ULL ] = t93 -> mX . mX [ 15ULL
] ; out -> mOBS_ACT . mX [ 220ULL ] = t93 -> mU . mX [ 2ULL ] ; out ->
mOBS_ACT . mX [ 221ULL ] = - t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX
[ 222ULL ] = - t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX [ 223ULL ] =
Battery1_p_v ; out -> mOBS_ACT . mX [ 224ULL ] = Battery1_p_v ; out ->
mOBS_ACT . mX [ 225ULL ] = - t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ACT . mX
[ 226ULL ] = t59 ; out -> mOBS_ACT . mX [ 227ULL ] = Battery1_n_v ; out ->
mOBS_ACT . mX [ 228ULL ] = Battery1_p_v ; out -> mOBS_ACT . mX [ 229ULL ] =
t59 ; out -> mOBS_ACT . mX [ 230ULL ] = Battery1_p_v ; out -> mOBS_ACT . mX [
231ULL ] = Battery1_n_v ; out -> mOBS_ACT . mX [ 232ULL ] = Battery1_p_v ;
out -> mOBS_ACT . mX [ 233ULL ] = t93 -> mX . mX [ 21ULL ] ; out -> mOBS_ACT
. mX [ 234ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 235ULL ] = t93 -> mX . mX
[ 20ULL ] ; out -> mOBS_ACT . mX [ 236ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C1_v ; out -> mOBS_ACT . mX [
237ULL ] = t93 -> mX . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 238ULL ] = t93 ->
mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 239ULL ] = Battery1_n_v ; out ->
mOBS_ACT . mX [ 240ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 241ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C2_v ; out -> mOBS_ACT . mX [
242ULL ] = t93 -> mX . mX [ 10ULL ] ; out -> mOBS_ACT . mX [ 243ULL ] = t93
-> mX . mX [ 25ULL ] ; out -> mOBS_ACT . mX [ 244ULL ] = BLDC_b_v ; out ->
mOBS_ACT . mX [ 245ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
246ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C3_v ; out -> mOBS_ACT
. mX [ 247ULL ] = t93 -> mX . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 248ULL ] =
t93 -> mX . mX [ 41ULL ] ; out -> mOBS_ACT . mX [ 249ULL ] = Battery1_n_v ;
out -> mOBS_ACT . mX [ 250ULL ] = BLDC_b_v ; out -> mOBS_ACT . mX [ 251ULL ]
= Three_Phase_Inverter_Converter_Three_Phase_C4_v ; out -> mOBS_ACT . mX [
252ULL ] = t93 -> mX . mX [ 18ULL ] ; out -> mOBS_ACT . mX [ 253ULL ] = t93
-> mX . mX [ 26ULL ] ; out -> mOBS_ACT . mX [ 254ULL ] = BLDC_c_v ; out ->
mOBS_ACT . mX [ 255ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
256ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C5_v ; out -> mOBS_ACT
. mX [ 257ULL ] = t93 -> mX . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 258ULL ] =
t93 -> mX . mX [ 42ULL ] ; out -> mOBS_ACT . mX [ 259ULL ] = Battery1_n_v ;
out -> mOBS_ACT . mX [ 260ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 261ULL ]
= Three_Phase_Inverter_Converter_Three_Phase_C6_v ; out -> mOBS_ACT . mX [
262ULL ] = t93 -> mX . mX [ 19ULL ] ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++
) { out -> mOBS_ACT . mX [ t22 + 263ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t22 ] ; } out -> mOBS_ACT .
mX [ 275ULL ] = t93 -> mU . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 276ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 277ULL ] = t93 -> mU . mX [ 8ULL ] ; out ->
mOBS_ACT . mX [ 278ULL ] = t93 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX [
279ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 280ULL ] = t93 -> mU . mX [ 3ULL ] ;
out -> mOBS_ACT . mX [ 281ULL ] = t93 -> mU . mX [ 4ULL ] ; out -> mOBS_ACT .
mX [ 282ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 283ULL ] = t93 -> mU . mX [ 4ULL
] ; out -> mOBS_ACT . mX [ 284ULL ] = t93 -> mU . mX [ 5ULL ] ; out ->
mOBS_ACT . mX [ 285ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 286ULL ] = t93 -> mU
. mX [ 5ULL ] ; out -> mOBS_ACT . mX [ 287ULL ] = t93 -> mU . mX [ 6ULL ] ;
out -> mOBS_ACT . mX [ 288ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 289ULL ] = t93
-> mU . mX [ 6ULL ] ; out -> mOBS_ACT . mX [ 290ULL ] = t93 -> mU . mX [ 7ULL
] ; out -> mOBS_ACT . mX [ 291ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 292ULL ] =
t93 -> mU . mX [ 7ULL ] ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++ ) { out ->
mOBS_ACT . mX [ t22 + 293ULL ] = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0
[ t22 ] ; } out -> mOBS_ACT . mX [ 305ULL ] = 0.0 ; out -> mOBS_ACT . mX [
306ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 307ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 308ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 309ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 310ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 311ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 312ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 313ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 314ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 315ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 316ULL ] = 0.0 ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++ )
{ out -> mOBS_ACT . mX [ t22 + 317ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t22 ] ; } out -> mOBS_ACT .
mX [ 329ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 330ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 331ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 332ULL ] = t93 -> mX . mX [
20ULL ] ; out -> mOBS_ACT . mX [ 333ULL ] = t93 -> mU . mX [ 8ULL ] ; out ->
mOBS_ACT . mX [ 334ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 335ULL ] = BLDC_a_v ;
out -> mOBS_ACT . mX [ 336ULL ] = - 1.0 ; out -> mOBS_ACT . mX [ 337ULL ] =
1.0 ; out -> mOBS_ACT . mX [ 338ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 339ULL ]
= Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mOBS_ACT .
mX [ 340ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 341ULL ] =
BLDC_a_v ; out -> mOBS_ACT . mX [ 342ULL ] = t93 -> mX . mX [ 56ULL ] ; out
-> mOBS_ACT . mX [ 343ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 344ULL ] = - t93
-> mX . mX [ 0ULL ] + t93 -> mX . mX [ 21ULL ] * - 0.1 ; out -> mOBS_ACT . mX
[ 345ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 346ULL ] = 0.0
; out -> mOBS_ACT . mX [ 347ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 348ULL ]
= 298.15 ; out -> mOBS_ACT . mX [ 349ULL ] = 0.0 ; out -> mOBS_ACT . mX [
350ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 351ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mOBS_ACT . mX
[ 352ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 353ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mOBS_ACT . mX
[ 354ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out ->
mOBS_ACT . mX [ 355ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
356ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 357ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ACT . mX [ 358ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode ; out -> mOBS_ACT
. mX [ 359ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 360ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode ; out -> mOBS_ACT
. mX [ 361ULL ] = t93 -> mX . mX [ 55ULL ] -
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mOBS_ACT . mX
[ 362ULL ] = t93 -> mU . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 363ULL ] = t93
-> mX . mX [ 55ULL ] ; out -> mOBS_ACT . mX [ 364ULL ] = BLDC_a_v ; out ->
mOBS_ACT . mX [ 365ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
366ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C1_v * t93 -> mX . mX [
55ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 367ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C1_v ; out -> mOBS_ACT . mX [
368ULL ] = t93 -> mU . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 369ULL ] = t93 ->
mX . mX [ 20ULL ] - BLDC_a_v ; out -> mOBS_ACT . mX [ 370ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 371ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 372ULL ] = t93
-> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 373ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 374ULL ] = Battery1_n_v ; out -> mOBS_ACT . mX [ 375ULL ] = - 1.0 ;
out -> mOBS_ACT . mX [ 376ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 377ULL ] = 0.0
; out -> mOBS_ACT . mX [ 378ULL ] = t93 -> mX . mX [ 43ULL ] ; out ->
mOBS_ACT . mX [ 379ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 380ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 381ULL ] = t93 -> mX . mX [ 57ULL ] ;
out -> mOBS_ACT . mX [ 382ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 383ULL ] = -
t93 -> mX . mX [ 10ULL ] + t93 -> mX . mX [ 39ULL ] * - 0.1 ; out -> mOBS_ACT
. mX [ 384ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 385ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 386ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 387ULL ] = 298.15
; out -> mOBS_ACT . mX [ 388ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 389ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 390ULL ] = t93 -> mX . mX [ 43ULL ] ; out ->
mOBS_ACT . mX [ 391ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 392ULL ] = t93 -> mX
. mX [ 43ULL ] ; out -> mOBS_ACT . mX [ 393ULL ] = t93 -> mX . mX [ 43ULL ] ;
out -> mOBS_ACT . mX [ 394ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 395ULL ]
= Battery1_n_v ; out -> mOBS_ACT . mX [ 396ULL ] = t93 -> mX . mX [ 43ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ACT . mX [ 397ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode ; out -> mOBS_ACT
. mX [ 398ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 399ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode ; out -> mOBS_ACT
. mX [ 400ULL ] = t93 -> mX . mX [ 44ULL ] - t93 -> mX . mX [ 43ULL ] ; out
-> mOBS_ACT . mX [ 401ULL ] = t93 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX
[ 402ULL ] = t93 -> mX . mX [ 44ULL ] ; out -> mOBS_ACT . mX [ 403ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 404ULL ] = BLDC_a_v ; out -> mOBS_ACT .
mX [ 405ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C2_v * t93 -> mX .
mX [ 44ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 406ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C2_v ; out -> mOBS_ACT . mX [
407ULL ] = t93 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 408ULL ] =
BLDC_a_v - Battery1_n_v ; out -> mOBS_ACT . mX [ 409ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 410ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
411ULL ] = t93 -> mU . mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 412ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 413ULL ] = BLDC_b_v ; out -> mOBS_ACT . mX [ 414ULL ]
= - 1.0 ; out -> mOBS_ACT . mX [ 415ULL ] = 1.0 ; out -> mOBS_ACT . mX [
416ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 417ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mOBS_ACT . mX
[ 418ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 419ULL ] =
BLDC_b_v ; out -> mOBS_ACT . mX [ 420ULL ] = t93 -> mX . mX [ 59ULL ] ; out
-> mOBS_ACT . mX [ 421ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 422ULL ] = - t93
-> mX . mX [ 2ULL ] + t93 -> mX . mX [ 25ULL ] * - 0.1 ; out -> mOBS_ACT . mX
[ 423ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 424ULL ] = 0.0
; out -> mOBS_ACT . mX [ 425ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 426ULL ]
= 298.15 ; out -> mOBS_ACT . mX [ 427ULL ] = 0.0 ; out -> mOBS_ACT . mX [
428ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 429ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mOBS_ACT . mX
[ 430ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 431ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mOBS_ACT . mX
[ 432ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out ->
mOBS_ACT . mX [ 433ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
434ULL ] = BLDC_b_v ; out -> mOBS_ACT . mX [ 435ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ACT . mX [ 436ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode ; out -> mOBS_ACT
. mX [ 437ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 438ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode ; out -> mOBS_ACT
. mX [ 439ULL ] = t93 -> mX . mX [ 58ULL ] -
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mOBS_ACT . mX
[ 440ULL ] = t93 -> mU . mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 441ULL ] = t93
-> mX . mX [ 58ULL ] ; out -> mOBS_ACT . mX [ 442ULL ] = BLDC_b_v ; out ->
mOBS_ACT . mX [ 443ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
444ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C3_v * t93 -> mX . mX [
58ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 445ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C3_v ; out -> mOBS_ACT . mX [
446ULL ] = t93 -> mU . mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 447ULL ] = t93 ->
mX . mX [ 20ULL ] - BLDC_b_v ; out -> mOBS_ACT . mX [ 448ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 449ULL ] = BLDC_b_v ; out -> mOBS_ACT . mX [ 450ULL ] = t93
-> mU . mX [ 5ULL ] ; out -> mOBS_ACT . mX [ 451ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 452ULL ] = Battery1_n_v ; out -> mOBS_ACT . mX [ 453ULL ] = - 1.0 ;
out -> mOBS_ACT . mX [ 454ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 455ULL ] = 0.0
; out -> mOBS_ACT . mX [ 456ULL ] = t93 -> mX . mX [ 45ULL ] ; out ->
mOBS_ACT . mX [ 457ULL ] = BLDC_b_v ; out -> mOBS_ACT . mX [ 458ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 459ULL ] = t93 -> mX . mX [ 60ULL ] ;
out -> mOBS_ACT . mX [ 460ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 461ULL ] = ( (
( ( - t93 -> mX . mX [ 0ULL ] - t93 -> mX . mX [ 10ULL ] ) + t93 -> mX . mX [
21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [
25ULL ] * 0.1 ) + t93 -> mX . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 462ULL ] =
BLDC_b_v ; out -> mOBS_ACT . mX [ 463ULL ] = 0.0 ; out -> mOBS_ACT . mX [
464ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 465ULL ] = 298.15 ; out ->
mOBS_ACT . mX [ 466ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 467ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 468ULL ] = t93 -> mX . mX [ 45ULL ] ; out -> mOBS_ACT . mX
[ 469ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 470ULL ] = t93 -> mX . mX [ 45ULL ]
; out -> mOBS_ACT . mX [ 471ULL ] = t93 -> mX . mX [ 45ULL ] ; out ->
mOBS_ACT . mX [ 472ULL ] = BLDC_b_v ; out -> mOBS_ACT . mX [ 473ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 474ULL ] = t93 -> mX . mX [ 45ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ACT . mX [ 475ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode ; out -> mOBS_ACT
. mX [ 476ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 477ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode ; out -> mOBS_ACT
. mX [ 478ULL ] = t93 -> mX . mX [ 46ULL ] - t93 -> mX . mX [ 45ULL ] ; out
-> mOBS_ACT . mX [ 479ULL ] = t93 -> mU . mX [ 5ULL ] ; out -> mOBS_ACT . mX
[ 480ULL ] = t93 -> mX . mX [ 46ULL ] ; out -> mOBS_ACT . mX [ 481ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 482ULL ] = BLDC_b_v ; out -> mOBS_ACT .
mX [ 483ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C4_v * t93 -> mX .
mX [ 46ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 484ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C4_v ; out -> mOBS_ACT . mX [
485ULL ] = t93 -> mU . mX [ 5ULL ] ; out -> mOBS_ACT . mX [ 486ULL ] =
BLDC_b_v - Battery1_n_v ; out -> mOBS_ACT . mX [ 487ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 488ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
489ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ACT . mX [ 490ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 491ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 492ULL ]
= - 1.0 ; out -> mOBS_ACT . mX [ 493ULL ] = 1.0 ; out -> mOBS_ACT . mX [
494ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 495ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mOBS_ACT . mX
[ 496ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 497ULL ] =
BLDC_c_v ; out -> mOBS_ACT . mX [ 498ULL ] = t93 -> mX . mX [ 62ULL ] ; out
-> mOBS_ACT . mX [ 499ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 500ULL ] = - t93
-> mX . mX [ 3ULL ] + t93 -> mX . mX [ 26ULL ] * - 0.1 ; out -> mOBS_ACT . mX
[ 501ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 502ULL ] = 0.0
; out -> mOBS_ACT . mX [ 503ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 504ULL ]
= 298.15 ; out -> mOBS_ACT . mX [ 505ULL ] = 0.0 ; out -> mOBS_ACT . mX [
506ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 507ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mOBS_ACT . mX
[ 508ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 509ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mOBS_ACT . mX
[ 510ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out ->
mOBS_ACT . mX [ 511ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
512ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 513ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ACT . mX [ 514ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode ; out -> mOBS_ACT
. mX [ 515ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 516ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode ; out -> mOBS_ACT
. mX [ 517ULL ] = t93 -> mX . mX [ 61ULL ] -
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mOBS_ACT . mX
[ 518ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ACT . mX [ 519ULL ] = t93
-> mX . mX [ 61ULL ] ; out -> mOBS_ACT . mX [ 520ULL ] = BLDC_c_v ; out ->
mOBS_ACT . mX [ 521ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [
522ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C5_v * t93 -> mX . mX [
61ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 523ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C5_v ; out -> mOBS_ACT . mX [
524ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ACT . mX [ 525ULL ] = t93 ->
mX . mX [ 20ULL ] - BLDC_c_v ; out -> mOBS_ACT . mX [ 526ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 527ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 528ULL ] = t93
-> mU . mX [ 7ULL ] ; out -> mOBS_ACT . mX [ 529ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 530ULL ] = Battery1_n_v ; out -> mOBS_ACT . mX [ 531ULL ] = - 1.0 ;
out -> mOBS_ACT . mX [ 532ULL ] = 1.0 ; out -> mOBS_ACT . mX [ 533ULL ] = 0.0
; out -> mOBS_ACT . mX [ 534ULL ] = t93 -> mX . mX [ 47ULL ] ; out ->
mOBS_ACT . mX [ 535ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 536ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 537ULL ] = t93 -> mX . mX [ 63ULL ] ;
out -> mOBS_ACT . mX [ 538ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 539ULL ] = ( (
( ( - t93 -> mX . mX [ 0ULL ] - t93 -> mX . mX [ 10ULL ] ) + t93 -> mX . mX [
21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [
26ULL ] * 0.1 ) + t93 -> mX . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 540ULL ] =
BLDC_c_v ; out -> mOBS_ACT . mX [ 541ULL ] = 0.0 ; out -> mOBS_ACT . mX [
542ULL ] = 298.15 ; out -> mOBS_ACT . mX [ 543ULL ] = 298.15 ; out ->
mOBS_ACT . mX [ 544ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 545ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 546ULL ] = t93 -> mX . mX [ 47ULL ] ; out -> mOBS_ACT . mX
[ 547ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 548ULL ] = t93 -> mX . mX [ 47ULL ]
; out -> mOBS_ACT . mX [ 549ULL ] = t93 -> mX . mX [ 47ULL ] ; out ->
mOBS_ACT . mX [ 550ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 551ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 552ULL ] = t93 -> mX . mX [ 47ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ACT . mX [ 553ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode ; out -> mOBS_ACT
. mX [ 554ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 555ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode ; out -> mOBS_ACT
. mX [ 556ULL ] = t93 -> mX . mX [ 48ULL ] - t93 -> mX . mX [ 47ULL ] ; out
-> mOBS_ACT . mX [ 557ULL ] = t93 -> mU . mX [ 7ULL ] ; out -> mOBS_ACT . mX
[ 558ULL ] = t93 -> mX . mX [ 48ULL ] ; out -> mOBS_ACT . mX [ 559ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 560ULL ] = BLDC_c_v ; out -> mOBS_ACT .
mX [ 561ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C6_v * t93 -> mX .
mX [ 48ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 562ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C6_v ; out -> mOBS_ACT . mX [
563ULL ] = t93 -> mU . mX [ 7ULL ] ; out -> mOBS_ACT . mX [ 564ULL ] =
BLDC_c_v - Battery1_n_v ; out -> mOBS_ACT . mX [ 565ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 566ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 567ULL ] =
BLDC_b_v ; out -> mOBS_ACT . mX [ 568ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX
[ 569ULL ] = Battery1_n_v ; out -> mOBS_ACT . mX [ 570ULL ] = t93 -> mX . mX
[ 20ULL ] ; out -> mOBS_ACT . mX [ 571ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mOBS_ACT . mX [ 572ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mOBS_ACT . mX [ 573ULL ] = t93 ->
mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 574ULL ] = t93 -> mX . mX [ 20ULL
] ; out -> mOBS_ACT . mX [ 575ULL ] = Buck_Converter_Current_Sensor1_I ; out
-> mOBS_ACT . mX [ 576ULL ] = BLDC_i_a ; out -> mOBS_ACT . mX [ 577ULL ] =
t93 -> mX . mX [ 30ULL ] ; out -> mOBS_ACT . mX [ 578ULL ] = t93 -> mX . mX [
31ULL ] ; out -> mOBS_ACT . mX [ 579ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [
580ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 581ULL ] = BLDC_b_v ; out ->
mOBS_ACT . mX [ 582ULL ] = BLDC_b_v ; out -> mOBS_ACT . mX [ 583ULL ] =
BLDC_c_v ; out -> mOBS_ACT . mX [ 584ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX
[ 585ULL ] = BLDC_i_a ; out -> mOBS_ACT . mX [ 586ULL ] = t93 -> mX . mX [
30ULL ] ; out -> mOBS_ACT . mX [ 587ULL ] = t93 -> mX . mX [ 31ULL ] ; out ->
mOBS_ACT . mX [ 588ULL ] = BLDC_i_a ; out -> mOBS_ACT . mX [ 589ULL ] = t93
-> mX . mX [ 30ULL ] ; out -> mOBS_ACT . mX [ 590ULL ] = t93 -> mX . mX [
31ULL ] ; out -> mOBS_ACT . mX [ 591ULL ] = t34 ; out -> mOBS_ACT . mX [
592ULL ] = t35 ; out -> mOBS_ACT . mX [ 593ULL ] = t36 ; out -> mOBS_ACT . mX
[ 594ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 595ULL ] = BLDC_b_v ; out ->
mOBS_ACT . mX [ 596ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX [ 597ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 598ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 599ULL ] = 0.0
; out -> mOBS_ACT . mX [ 600ULL ] = t34 ; out -> mOBS_ACT . mX [ 601ULL ] =
t35 ; out -> mOBS_ACT . mX [ 602ULL ] = t36 ; out -> mOBS_ACT . mX [ 603ULL ]
= t93 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 604ULL ] = t93 -> mU . mX
[ 4ULL ] ; out -> mOBS_ACT . mX [ 605ULL ] = t93 -> mU . mX [ 5ULL ] ; out ->
mOBS_ACT . mX [ 606ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ACT . mX [
607ULL ] = t93 -> mU . mX [ 7ULL ] ; out -> mOBS_ACT . mX [ 608ULL ] = t93 ->
mU . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 609ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 610ULL ] = t93 -> mU . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 611ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 612ULL ] = t93 -> mU . mX [ 3ULL ] ; out ->
mOBS_ACT . mX [ 613ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 614ULL ] = t93 -> mU
. mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 615ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 616ULL ] = t93 -> mU . mX [ 5ULL ] ; out -> mOBS_ACT . mX [ 617ULL ] = 0.0
; out -> mOBS_ACT . mX [ 618ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ACT
. mX [ 619ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 620ULL ] = t93 -> mU . mX [
7ULL ] ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++ ) { out -> mOBS_ACT . mX [
t22 + 621ULL ] = - ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t22 ] ; }
out -> mOBS_ACT . mX [ 633ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 634ULL ] = 0.0
; out -> mOBS_ACT . mX [ 635ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 636ULL ] =
0.0 ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++ ) { out -> mOBS_ACT . mX [ t22
+ 637ULL ] = Three_Phase_Inverter_Converter_Three_Phase_G_V [ t22 ] ; } out
-> mOBS_ACT . mX [ 649ULL ] = BLDC_a_v ; out -> mOBS_ACT . mX [ 650ULL ] =
BLDC_b_v ; out -> mOBS_ACT . mX [ 651ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX
[ 652ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 653ULL ] =
Battery1_n_v ; out -> mOBS_ACT . mX [ 654ULL ] = 0.0 ; out -> mOBS_ACT . mX [
655ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [ 656ULL ] = t93
-> mU . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 657ULL ] = - t93 -> mU . mX [
2ULL ] ; out -> mOBS_ACT . mX [ 658ULL ] = - t93 -> mX . mX [ 15ULL ] ; out
-> mOBS_ACT . mX [ 659ULL ] = t91 ; out -> mOBS_ACT . mX [ 660ULL ] =
BLDC_n_v ; out -> mOBS_ACT . mX [ 661ULL ] = BLDC_c_v ; out -> mOBS_ACT . mX
[ 662ULL ] = t91 ; ( void ) LC ; ( void ) out ; return 0 ; }
