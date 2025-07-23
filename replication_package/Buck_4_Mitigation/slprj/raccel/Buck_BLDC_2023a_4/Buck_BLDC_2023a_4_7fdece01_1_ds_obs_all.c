#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_obs_all.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_obs_all ( const NeDynamicSystem * LC
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
real_T t91 ; size_t t22 ; out -> mOBS_ALL . mX [ 47ULL ] = 298.15 ; BLDC_a_v
= ( - t93 -> mX . mX [ 0ULL ] + t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93 ->
mX . mX [ 20ULL ] ; BLDC_b_v = ( - t93 -> mX . mX [ 2ULL ] + t93 -> mX . mX [
25ULL ] * - 0.1 ) + t93 -> mX . mX [ 20ULL ] ; BLDC_c_v = ( - t93 -> mX . mX
[ 3ULL ] + t93 -> mX . mX [ 26ULL ] * - 0.1 ) + t93 -> mX . mX [ 20ULL ] ;
BLDC_i_a = - t93 -> mX . mX [ 30ULL ] - t93 -> mX . mX [ 31ULL ] ; BLDC_i_n =
( ( t93 -> mX . mX [ 0ULL ] * 1.0E-9 + t93 -> mX . mX [ 35ULL ] * 1.0E-9 ) +
t93 -> mX . mX [ 20ULL ] * - 1.0E-9 ) + t93 -> mX . mX [ 21ULL ] *
1.0000000000000002E-10 ; BLDC_n_v = ( ( - t93 -> mX . mX [ 0ULL ] - t93 -> mX
. mX [ 35ULL ] ) + t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93 -> mX . mX [
20ULL ] ; out -> mOBS_ALL . mX [ 43ULL ] = ( ( ( - t93 -> mX . mX [ 2ULL ] +
t93 -> mX . mX [ 21ULL ] * 0.1 ) + t93 -> mX . mX [ 25ULL ] * - 0.1 ) + t93
-> mX . mX [ 35ULL ] ) + t93 -> mX . mX [ 0ULL ] ; out -> mOBS_ALL . mX [
44ULL ] = ( ( ( - t93 -> mX . mX [ 3ULL ] + t93 -> mX . mX [ 21ULL ] * 0.1 )
+ t93 -> mX . mX [ 26ULL ] * - 0.1 ) + t93 -> mX . mX [ 35ULL ] ) + t93 -> mX
. mX [ 0ULL ] ; BLDC_torque = - t93 -> mX . mX [ 37ULL ] + t93 -> mU . mX [
2ULL ] ; Battery1_n_v = ( ( ( - t93 -> mX . mX [ 0ULL ] - t93 -> mX . mX [
10ULL ] ) + t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * -
0.1 ) + t93 -> mX . mX [ 20ULL ] ; Battery1_p_v = ( ( ( ( ( - t93 -> mX . mX
[ 0ULL ] - t93 -> mX . mX [ 10ULL ] ) + t93 -> mX . mX [ 38ULL ] * 0.005 ) +
t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93
-> mX . mX [ 20ULL ] ) + 48.0 ; out -> mOBS_ALL . mX [ 58ULL ] = t93 -> mX .
mX [ 38ULL ] * 0.005 + 48.0 ; out -> mOBS_ALL . mX [ 59ULL ] = ( ( ( ( ( ( (
( ( ( t93 -> mX . mX [ 20ULL ] * - 1.0E-9 + t93 -> mX . mX [ 40ULL ] * 1.0E-9
) - t93 -> mX . mX [ 39ULL ] ) - t93 -> mX . mX [ 41ULL ] ) - t93 -> mX . mX
[ 42ULL ] ) - t93 -> mX . mX [ 44ULL ] ) - t93 -> mX . mX [ 46ULL ] ) - t93
-> mX . mX [ 48ULL ] ) + t93 -> mX . mX [ 11ULL ] ) + t93 -> mX . mX [ 43ULL
] ) + t93 -> mX . mX [ 45ULL ] ) + t93 -> mX . mX [ 47ULL ] ; out -> mOBS_ALL
. mX [ 62ULL ] = ( ( t93 -> mX . mX [ 21ULL ] * 0.1 + t93 -> mX . mX [ 39ULL
] * 0.1 ) + t93 -> mX . mX [ 0ULL ] ) + t93 -> mX . mX [ 10ULL ] ;
Buck_Converter_Capacitor1_p_v = ( ( ( ( ( - t93 -> mX . mX [ 0ULL ] - t93 ->
mX . mX [ 10ULL ] ) + t93 -> mX . mX [ 49ULL ] * 0.2 ) + t93 -> mX . mX [
21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [
20ULL ] ) + t93 -> mX . mX [ 13ULL ] ; out -> mOBS_ALL . mX [ 67ULL ] = t93
-> mX . mX [ 49ULL ] * 0.2 + t93 -> mX . mX [ 13ULL ] ;
Buck_Converter_Current_Sensor1_I = ( ( ( ( ( ( ( - t93 -> mX . mX [ 43ULL ] -
t93 -> mX . mX [ 45ULL ] ) - t93 -> mX . mX [ 47ULL ] ) + t93 -> mX . mX [
39ULL ] ) + t93 -> mX . mX [ 41ULL ] ) + t93 -> mX . mX [ 42ULL ] ) + t93 ->
mX . mX [ 44ULL ] ) + t93 -> mX . mX [ 46ULL ] ) + t93 -> mX . mX [ 48ULL ] ;
out -> mOBS_ALL . mX [ 79ULL ] = ( t93 -> mX . mX [ 20ULL ] * - 1.0E-9 + t93
-> mX . mX [ 40ULL ] * 1.0E-9 ) + t93 -> mX . mX [ 11ULL ] ; out -> mOBS_ALL
. mX [ 82ULL ] = - t93 -> mX . mX [ 20ULL ] + t93 -> mX . mX [ 40ULL ] ; out
-> mOBS_ALL . mX [ 87ULL ] = ( ( - t93 -> mX . mX [ 13ULL ] + t93 -> mX . mX
[ 38ULL ] * 0.005 ) + t93 -> mX . mX [ 49ULL ] * - 0.2 ) + 48.0 ;
Buck_Converter_S_diode_i = ( t93 -> mX . mX [ 38ULL ] + t93 -> mX . mX [
49ULL ] ) + t93 -> mX . mX [ 50ULL ] ; Buck_Converter_S_diode_v_diode = t93
-> mX . mX [ 40ULL ] - Buck_Converter_Capacitor1_p_v ; out -> mOBS_ALL . mX [
101ULL ] = ( ( ( ( ( ( - t93 -> mX . mX [ 13ULL ] - t93 -> mX . mX [ 20ULL ]
) + t93 -> mX . mX [ 49ULL ] * - 0.2 ) + t93 -> mX . mX [ 21ULL ] * 0.1 ) +
t93 -> mX . mX [ 39ULL ] * 0.1 ) + t93 -> mX . mX [ 40ULL ] ) + t93 -> mX .
mX [ 0ULL ] ) + t93 -> mX . mX [ 10ULL ] ; out -> mOBS_ALL . mX [ 118ULL ] =
t93 -> mX . mX [ 50ULL ] - Buck_Converter_S_diode_i ; t51 = ( ( ( ( ( ( - t93
-> mX . mX [ 0ULL ] - t93 -> mX . mX [ 10ULL ] ) + t93 -> mX . mX [ 49ULL ] *
0.2 ) - t93 -> mX . mX [ 40ULL ] ) + t93 -> mX . mX [ 21ULL ] * - 0.1 ) + t93
-> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [ 20ULL ] ) + t93 -> mX . mX
[ 13ULL ] ; out -> mOBS_ALL . mX [ 125ULL ] = t93 -> mU . mX [ 0ULL ] ; out
-> mOBS_ALL . mX [ 126ULL ] = Buck_Converter_Capacitor1_p_v - t93 -> mX . mX
[ 40ULL ] ; Buck_Converter_S1_diode_i = ( ( ( ( t93 -> mX . mX [ 20ULL ] * -
1.0E-9 + t93 -> mX . mX [ 40ULL ] * 1.0E-9 ) + t93 -> mX . mX [ 38ULL ] ) +
t93 -> mX . mX [ 49ULL ] ) + t93 -> mX . mX [ 11ULL ] ) + t93 -> mX . mX [
52ULL ] ; Buck_Converter_S1_diode_v_diode = Battery1_n_v - t93 -> mX . mX [
40ULL ] ; out -> mOBS_ALL . mX [ 140ULL ] = ( ( ( ( - t93 -> mX . mX [ 0ULL ]
- t93 -> mX . mX [ 10ULL ] ) - t93 -> mX . mX [ 40ULL ] ) + t93 -> mX . mX [
21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [
20ULL ] ; out -> mOBS_ALL . mX [ 157ULL ] = t93 -> mX . mX [ 52ULL ] -
Buck_Converter_S1_diode_i ; t56 = ( ( ( ( - t93 -> mX . mX [ 20ULL ] + t93 ->
mX . mX [ 21ULL ] * 0.1 ) + t93 -> mX . mX [ 39ULL ] * 0.1 ) + t93 -> mX . mX
[ 40ULL ] ) + t93 -> mX . mX [ 0ULL ] ) + t93 -> mX . mX [ 10ULL ] ; out ->
mOBS_ALL . mX [ 164ULL ] = t93 -> mU . mX [ 1ULL ] ; out -> mOBS_ALL . mX [
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
0.1 ) + t93 -> mX . mX [ 0ULL ] ; t91 = BLDC_c_v - BLDC_n_v ; out -> mOBS_ALL
. mX [ 0ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 1ULL ] = t93 -> mX . mX [ 1ULL ]
* 57.295779513082323 ; out -> mOBS_ALL . mX [ 2ULL ] = 1.0 ; out -> mOBS_ALL
. mX [ 3ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 4ULL ] = 0.0 ; out -> mOBS_ALL .
mX [ 5ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 6ULL ] = 0.0 ; out -> mOBS_ALL .
mX [ 7ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 8ULL ] = 0.0 ; out -> mOBS_ALL .
mX [ 9ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 10ULL ] = 0.0 ; out -> mOBS_ALL .
mX [ 11ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 12ULL ] = t93 -> mX . mX [ 15ULL
] ; out -> mOBS_ALL . mX [ 13ULL ] = 0.12 ; out -> mOBS_ALL . mX [ 14ULL ] =
0.12 ; out -> mOBS_ALL . mX [ 15ULL ] = 0.12 ; out -> mOBS_ALL . mX [ 16ULL ]
= 0.0 ; out -> mOBS_ALL . mX [ 17ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 18ULL ]
= BLDC_a_v ; out -> mOBS_ALL . mX [ 19ULL ] = 0.0 ; out -> mOBS_ALL . mX [
20ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 21ULL ] = t93 -> mX . mX [ 23ULL ] *
9.5492965855137211 ; out -> mOBS_ALL . mX [ 22ULL ] = BLDC_b_v ; out ->
mOBS_ALL . mX [ 23ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 24ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 25ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 26ULL ] = 0.0 ;
out -> mOBS_ALL . mX [ 27ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 28ULL ] = t93
-> mX . mX [ 27ULL ] ; out -> mOBS_ALL . mX [ 29ULL ] = t93 -> mX . mX [
28ULL ] ; out -> mOBS_ALL . mX [ 30ULL ] = BLDC_i_a ; out -> mOBS_ALL . mX [
31ULL ] = t93 -> mX . mX [ 30ULL ] ; out -> mOBS_ALL . mX [ 32ULL ] = t93 ->
mX . mX [ 31ULL ] ; out -> mOBS_ALL . mX [ 33ULL ] = t93 -> mX . mX [ 4ULL ]
; out -> mOBS_ALL . mX [ 34ULL ] = BLDC_i_n ; out -> mOBS_ALL . mX [ 35ULL ]
= t93 -> mX . mX [ 5ULL ] ; out -> mOBS_ALL . mX [ 36ULL ] = BLDC_n_v ; out
-> mOBS_ALL . mX [ 37ULL ] = t93 -> mX . mX [ 6ULL ] ; out -> mOBS_ALL . mX [
38ULL ] = t93 -> mX . mX [ 7ULL ] ; out -> mOBS_ALL . mX [ 39ULL ] = t93 ->
mX . mX [ 8ULL ] ; out -> mOBS_ALL . mX [ 40ULL ] = BLDC_torque ; out ->
mOBS_ALL . mX [ 41ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 42ULL ] = t93 -> mX .
mX [ 35ULL ] ; out -> mOBS_ALL . mX [ 45ULL ] = 0.0 ; out -> mOBS_ALL . mX [
46ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 48ULL ] = t93 -> mX . mX [ 38ULL ] ;
out -> mOBS_ALL . mX [ 49ULL ] = t93 -> mX . mX [ 9ULL ] *
0.00027777777777777778 ; out -> mOBS_ALL . mX [ 50ULL ] = Battery1_n_v ; out
-> mOBS_ALL . mX [ 51ULL ] = Battery1_p_v ; out -> mOBS_ALL . mX [ 52ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 53ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 54ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 55ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 56ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 57ULL ] = t93 -> mX . mX [ 9ULL ] ; out ->
mOBS_ALL . mX [ 60ULL ] = Battery1_n_v ; out -> mOBS_ALL . mX [ 61ULL ] = t93
-> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 63ULL ] = t93 -> mX . mX [
12ULL ] ; out -> mOBS_ALL . mX [ 64ULL ] = t93 -> mX . mX [ 49ULL ] ; out ->
mOBS_ALL . mX [ 65ULL ] = Battery1_n_v ; out -> mOBS_ALL . mX [ 66ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mOBS_ALL . mX [ 68ULL ] = t93 -> mX .
mX [ 13ULL ] ; out -> mOBS_ALL . mX [ 69ULL ] = - t93 -> mX . mX [ 38ULL ] ;
out -> mOBS_ALL . mX [ 70ULL ] = - t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ALL
. mX [ 71ULL ] = Battery1_p_v ; out -> mOBS_ALL . mX [ 72ULL ] = Battery1_p_v
; out -> mOBS_ALL . mX [ 73ULL ] = Buck_Converter_Current_Sensor1_I ; out ->
mOBS_ALL . mX [ 74ULL ] = Buck_Converter_Current_Sensor1_I ; out -> mOBS_ALL
. mX [ 75ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 76ULL ] =
t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 77ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mOBS_ALL . mX [ 78ULL ] = - t93 ->
mX . mX [ 38ULL ] ; out -> mOBS_ALL . mX [ 80ULL ] = t93 -> mX . mX [ 20ULL ]
; out -> mOBS_ALL . mX [ 81ULL ] = t93 -> mX . mX [ 40ULL ] ; out -> mOBS_ALL
. mX [ 83ULL ] = t93 -> mX . mX [ 11ULL ] ; out -> mOBS_ALL . mX [ 84ULL ] =
- t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ALL . mX [ 85ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mOBS_ALL . mX [ 86ULL ] = Battery1_p_v
; out -> mOBS_ALL . mX [ 88ULL ] = t93 -> mX . mX [ 14ULL ] ; out -> mOBS_ALL
. mX [ 89ULL ] = Buck_Converter_Capacitor1_p_v ; out -> mOBS_ALL . mX [ 90ULL
] = t93 -> mU . mX [ 0ULL ] ; out -> mOBS_ALL . mX [ 91ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 92ULL ] = t93 -> mX . mX [ 40ULL ] ; out -> mOBS_ALL . mX [
93ULL ] = - 1.0 ; out -> mOBS_ALL . mX [ 94ULL ] = 1.0 ; out -> mOBS_ALL . mX
[ 95ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 96ULL ] = Buck_Converter_S_diode_i ;
out -> mOBS_ALL . mX [ 97ULL ] = Buck_Converter_Capacitor1_p_v ; out ->
mOBS_ALL . mX [ 98ULL ] = t93 -> mX . mX [ 40ULL ] ; out -> mOBS_ALL . mX [
99ULL ] = t93 -> mX . mX [ 51ULL ] ; out -> mOBS_ALL . mX [ 100ULL ] = 0.0 ;
out -> mOBS_ALL . mX [ 102ULL ] = Buck_Converter_Capacitor1_p_v ; out ->
mOBS_ALL . mX [ 103ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 104ULL ] = 298.15 ;
out -> mOBS_ALL . mX [ 105ULL ] = 298.15 ; out -> mOBS_ALL . mX [ 106ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 107ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 108ULL ]
= Buck_Converter_S_diode_i ; out -> mOBS_ALL . mX [ 109ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 110ULL ] = Buck_Converter_S_diode_i ; out -> mOBS_ALL . mX [
111ULL ] = Buck_Converter_S_diode_i ; out -> mOBS_ALL . mX [ 112ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mOBS_ALL . mX [ 113ULL ] = t93 -> mX .
mX [ 40ULL ] ; out -> mOBS_ALL . mX [ 114ULL ] = Buck_Converter_S_diode_i *
Buck_Converter_S_diode_v_diode * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [
115ULL ] = Buck_Converter_S_diode_v_diode ; out -> mOBS_ALL . mX [ 116ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 117ULL ] = Buck_Converter_S_diode_v_diode ; out
-> mOBS_ALL . mX [ 119ULL ] = t93 -> mU . mX [ 0ULL ] ; out -> mOBS_ALL . mX
[ 120ULL ] = t93 -> mX . mX [ 50ULL ] ; out -> mOBS_ALL . mX [ 121ULL ] = t93
-> mX . mX [ 40ULL ] ; out -> mOBS_ALL . mX [ 122ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mOBS_ALL . mX [ 123ULL ] = t93 -> mX .
mX [ 50ULL ] * t51 * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [ 124ULL ] = t51 ;
out -> mOBS_ALL . mX [ 127ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 128ULL ] = t93
-> mX . mX [ 40ULL ] ; out -> mOBS_ALL . mX [ 129ULL ] = t93 -> mU . mX [
1ULL ] ; out -> mOBS_ALL . mX [ 130ULL ] = 0.0 ; out -> mOBS_ALL . mX [
131ULL ] = Battery1_n_v ; out -> mOBS_ALL . mX [ 132ULL ] = - 1.0 ; out ->
mOBS_ALL . mX [ 133ULL ] = 1.0 ; out -> mOBS_ALL . mX [ 134ULL ] = 0.0 ; out
-> mOBS_ALL . mX [ 135ULL ] = Buck_Converter_S1_diode_i ; out -> mOBS_ALL .
mX [ 136ULL ] = t93 -> mX . mX [ 40ULL ] ; out -> mOBS_ALL . mX [ 137ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 138ULL ] = t93 -> mX . mX [ 53ULL ] ;
out -> mOBS_ALL . mX [ 139ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 141ULL ] = t93
-> mX . mX [ 40ULL ] ; out -> mOBS_ALL . mX [ 142ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 143ULL ] = 298.15 ; out -> mOBS_ALL . mX [ 144ULL ] = 298.15
; out -> mOBS_ALL . mX [ 145ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 146ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 147ULL ] = Buck_Converter_S1_diode_i ; out ->
mOBS_ALL . mX [ 148ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 149ULL ] =
Buck_Converter_S1_diode_i ; out -> mOBS_ALL . mX [ 150ULL ] =
Buck_Converter_S1_diode_i ; out -> mOBS_ALL . mX [ 151ULL ] = t93 -> mX . mX
[ 40ULL ] ; out -> mOBS_ALL . mX [ 152ULL ] = Battery1_n_v ; out -> mOBS_ALL
. mX [ 153ULL ] = Buck_Converter_S1_diode_i * Buck_Converter_S1_diode_v_diode
* 0.001 * 1000.0 ; out -> mOBS_ALL . mX [ 154ULL ] =
Buck_Converter_S1_diode_v_diode ; out -> mOBS_ALL . mX [ 155ULL ] = 0.0 ; out
-> mOBS_ALL . mX [ 156ULL ] = Buck_Converter_S1_diode_v_diode ; out ->
mOBS_ALL . mX [ 158ULL ] = t93 -> mU . mX [ 1ULL ] ; out -> mOBS_ALL . mX [
159ULL ] = t93 -> mX . mX [ 52ULL ] ; out -> mOBS_ALL . mX [ 160ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 161ULL ] = t93 -> mX . mX [ 40ULL ] ;
out -> mOBS_ALL . mX [ 162ULL ] = t93 -> mX . mX [ 52ULL ] * t56 * 0.001 *
1000.0 ; out -> mOBS_ALL . mX [ 163ULL ] = t56 ; out -> mOBS_ALL . mX [
166ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 167ULL ] = t93 -> mU . mX [ 0ULL ] ;
out -> mOBS_ALL . mX [ 168ULL ] = t93 -> mU . mX [ 1ULL ] ; out -> mOBS_ALL .
mX [ 169ULL ] = t58 ; out -> mOBS_ALL . mX [ 170ULL ] = Battery1_n_v ; out ->
mOBS_ALL . mX [ 171ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
172ULL ] = t59 ; out -> mOBS_ALL . mX [ 173ULL ] = Battery1_n_v ; out ->
mOBS_ALL . mX [ 174ULL ] = Battery1_p_v ; out -> mOBS_ALL . mX [ 175ULL ] =
t59 ; out -> mOBS_ALL . mX [ 176ULL ] = t58 ; out -> mOBS_ALL . mX [ 177ULL ]
= Battery1_p_v ; out -> mOBS_ALL . mX [ 178ULL ] = Battery1_n_v ; out ->
mOBS_ALL . mX [ 179ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
180ULL ] = t93 -> mX . mX [ 31ULL ] ; out -> mOBS_ALL . mX [ 181ULL ] = t93
-> mX . mX [ 31ULL ] ; out -> mOBS_ALL . mX [ 182ULL ] = BLDC_c_v ; out ->
mOBS_ALL . mX [ 183ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 184ULL ] = t93
-> mX . mX [ 31ULL ] ; out -> mOBS_ALL . mX [ 185ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 186ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ALL . mX [
187ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ALL . mX [ 188ULL ] = -
BLDC_torque ; out -> mOBS_ALL . mX [ 189ULL ] = - BLDC_torque ; out ->
mOBS_ALL . mX [ 190ULL ] = - BLDC_torque ; out -> mOBS_ALL . mX [ 191ULL ] =
t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ALL . mX [ 192ULL ] = t93 -> mX . mX [
15ULL ] ; out -> mOBS_ALL . mX [ 193ULL ] = t93 -> mX . mX [ 37ULL ] ; out ->
mOBS_ALL . mX [ 194ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ALL . mX [
195ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 196ULL ] = 0.0 ; out -> mOBS_ALL . mX
[ 197ULL ] = - BLDC_i_n ; out -> mOBS_ALL . mX [ 198ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 199ULL ] = BLDC_n_v ; out -> mOBS_ALL . mX [ 200ULL ] =
BLDC_i_n * - 1.0E+9 ; out -> mOBS_ALL . mX [ 201ULL ] = t93 -> mX . mX [
16ULL ] ; out -> mOBS_ALL . mX [ 202ULL ] = 0.0 ; out -> mOBS_ALL . mX [
203ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ALL . mX [ 204ULL ] = t93
-> mX . mX [ 15ULL ] ; out -> mOBS_ALL . mX [ 205ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 206ULL ] = t93 -> mX . mX [ 16ULL ] ; out -> mOBS_ALL . mX [
207ULL ] = t93 -> mX . mX [ 15ULL ] * 9.5492965855137211 ; out -> mOBS_ALL .
mX [ 208ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 209ULL ] = t93 -> mX . mX [
15ULL ] ; out -> mOBS_ALL . mX [ 210ULL ] = 0.0 ; out -> mOBS_ALL . mX [
211ULL ] = t93 -> mX . mX [ 17ULL ] ; out -> mOBS_ALL . mX [ 212ULL ] = 0.0 ;
out -> mOBS_ALL . mX [ 213ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ALL
. mX [ 214ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ALL . mX [ 215ULL ]
= 0.0 ; out -> mOBS_ALL . mX [ 216ULL ] = t93 -> mX . mX [ 17ULL ] *
57.295779513082323 ; out -> mOBS_ALL . mX [ 217ULL ] = t93 -> mX . mX [ 17ULL
] ; out -> mOBS_ALL . mX [ 218ULL ] = t93 -> mX . mX [ 15ULL ] *
9.5492965855137211 ; out -> mOBS_ALL . mX [ 219ULL ] = t93 -> mX . mX [ 15ULL
] ; out -> mOBS_ALL . mX [ 220ULL ] = t93 -> mU . mX [ 2ULL ] ; out ->
mOBS_ALL . mX [ 221ULL ] = - t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ALL . mX
[ 222ULL ] = - t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ALL . mX [ 223ULL ] =
Battery1_p_v ; out -> mOBS_ALL . mX [ 224ULL ] = Battery1_p_v ; out ->
mOBS_ALL . mX [ 225ULL ] = - t93 -> mX . mX [ 38ULL ] ; out -> mOBS_ALL . mX
[ 226ULL ] = t59 ; out -> mOBS_ALL . mX [ 227ULL ] = Battery1_n_v ; out ->
mOBS_ALL . mX [ 228ULL ] = Battery1_p_v ; out -> mOBS_ALL . mX [ 229ULL ] =
t59 ; out -> mOBS_ALL . mX [ 230ULL ] = Battery1_p_v ; out -> mOBS_ALL . mX [
231ULL ] = Battery1_n_v ; out -> mOBS_ALL . mX [ 232ULL ] = Battery1_p_v ;
out -> mOBS_ALL . mX [ 233ULL ] = t93 -> mX . mX [ 21ULL ] ; out -> mOBS_ALL
. mX [ 234ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 235ULL ] = t93 -> mX . mX
[ 20ULL ] ; out -> mOBS_ALL . mX [ 236ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C1_v ; out -> mOBS_ALL . mX [
237ULL ] = t93 -> mX . mX [ 0ULL ] ; out -> mOBS_ALL . mX [ 238ULL ] = t93 ->
mX . mX [ 39ULL ] ; out -> mOBS_ALL . mX [ 239ULL ] = Battery1_n_v ; out ->
mOBS_ALL . mX [ 240ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 241ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C2_v ; out -> mOBS_ALL . mX [
242ULL ] = t93 -> mX . mX [ 10ULL ] ; out -> mOBS_ALL . mX [ 243ULL ] = t93
-> mX . mX [ 25ULL ] ; out -> mOBS_ALL . mX [ 244ULL ] = BLDC_b_v ; out ->
mOBS_ALL . mX [ 245ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
246ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C3_v ; out -> mOBS_ALL
. mX [ 247ULL ] = t93 -> mX . mX [ 2ULL ] ; out -> mOBS_ALL . mX [ 248ULL ] =
t93 -> mX . mX [ 41ULL ] ; out -> mOBS_ALL . mX [ 249ULL ] = Battery1_n_v ;
out -> mOBS_ALL . mX [ 250ULL ] = BLDC_b_v ; out -> mOBS_ALL . mX [ 251ULL ]
= Three_Phase_Inverter_Converter_Three_Phase_C4_v ; out -> mOBS_ALL . mX [
252ULL ] = t93 -> mX . mX [ 18ULL ] ; out -> mOBS_ALL . mX [ 253ULL ] = t93
-> mX . mX [ 26ULL ] ; out -> mOBS_ALL . mX [ 254ULL ] = BLDC_c_v ; out ->
mOBS_ALL . mX [ 255ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
256ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C5_v ; out -> mOBS_ALL
. mX [ 257ULL ] = t93 -> mX . mX [ 3ULL ] ; out -> mOBS_ALL . mX [ 258ULL ] =
t93 -> mX . mX [ 42ULL ] ; out -> mOBS_ALL . mX [ 259ULL ] = Battery1_n_v ;
out -> mOBS_ALL . mX [ 260ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 261ULL ]
= Three_Phase_Inverter_Converter_Three_Phase_C6_v ; out -> mOBS_ALL . mX [
262ULL ] = t93 -> mX . mX [ 19ULL ] ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++
) { out -> mOBS_ALL . mX [ t22 + 263ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t22 ] ; } out -> mOBS_ALL .
mX [ 275ULL ] = t93 -> mU . mX [ 8ULL ] ; out -> mOBS_ALL . mX [ 276ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 277ULL ] = t93 -> mU . mX [ 8ULL ] ; out ->
mOBS_ALL . mX [ 278ULL ] = t93 -> mU . mX [ 3ULL ] ; out -> mOBS_ALL . mX [
279ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 280ULL ] = t93 -> mU . mX [ 3ULL ] ;
out -> mOBS_ALL . mX [ 281ULL ] = t93 -> mU . mX [ 4ULL ] ; out -> mOBS_ALL .
mX [ 282ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 283ULL ] = t93 -> mU . mX [ 4ULL
] ; out -> mOBS_ALL . mX [ 284ULL ] = t93 -> mU . mX [ 5ULL ] ; out ->
mOBS_ALL . mX [ 285ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 286ULL ] = t93 -> mU
. mX [ 5ULL ] ; out -> mOBS_ALL . mX [ 287ULL ] = t93 -> mU . mX [ 6ULL ] ;
out -> mOBS_ALL . mX [ 288ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 289ULL ] = t93
-> mU . mX [ 6ULL ] ; out -> mOBS_ALL . mX [ 290ULL ] = t93 -> mU . mX [ 7ULL
] ; out -> mOBS_ALL . mX [ 291ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 292ULL ] =
t93 -> mU . mX [ 7ULL ] ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++ ) { out ->
mOBS_ALL . mX [ t22 + 293ULL ] = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0
[ t22 ] ; } out -> mOBS_ALL . mX [ 305ULL ] = 0.0 ; out -> mOBS_ALL . mX [
306ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 307ULL ] = 0.0 ; out -> mOBS_ALL . mX
[ 308ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 309ULL ] = 0.0 ; out -> mOBS_ALL .
mX [ 310ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 311ULL ] = 0.0 ; out -> mOBS_ALL
. mX [ 312ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 313ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 314ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 315ULL ] = 0.0 ; out
-> mOBS_ALL . mX [ 316ULL ] = 0.0 ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++ )
{ out -> mOBS_ALL . mX [ t22 + 317ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t22 ] ; } out -> mOBS_ALL .
mX [ 329ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 330ULL ] = 0.0 ; out -> mOBS_ALL
. mX [ 331ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 332ULL ] = t93 -> mX . mX [
20ULL ] ; out -> mOBS_ALL . mX [ 333ULL ] = t93 -> mU . mX [ 8ULL ] ; out ->
mOBS_ALL . mX [ 334ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 335ULL ] = BLDC_a_v ;
out -> mOBS_ALL . mX [ 336ULL ] = - 1.0 ; out -> mOBS_ALL . mX [ 337ULL ] =
1.0 ; out -> mOBS_ALL . mX [ 338ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 339ULL ]
= Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mOBS_ALL .
mX [ 340ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 341ULL ] =
BLDC_a_v ; out -> mOBS_ALL . mX [ 342ULL ] = t93 -> mX . mX [ 56ULL ] ; out
-> mOBS_ALL . mX [ 343ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 344ULL ] = - t93
-> mX . mX [ 0ULL ] + t93 -> mX . mX [ 21ULL ] * - 0.1 ; out -> mOBS_ALL . mX
[ 345ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 346ULL ] = 0.0
; out -> mOBS_ALL . mX [ 347ULL ] = 298.15 ; out -> mOBS_ALL . mX [ 348ULL ]
= 298.15 ; out -> mOBS_ALL . mX [ 349ULL ] = 0.0 ; out -> mOBS_ALL . mX [
350ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 351ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mOBS_ALL . mX
[ 352ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 353ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mOBS_ALL . mX
[ 354ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out ->
mOBS_ALL . mX [ 355ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
356ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 357ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ALL . mX [ 358ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode ; out -> mOBS_ALL
. mX [ 359ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 360ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode ; out -> mOBS_ALL
. mX [ 361ULL ] = t93 -> mX . mX [ 55ULL ] -
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mOBS_ALL . mX
[ 362ULL ] = t93 -> mU . mX [ 8ULL ] ; out -> mOBS_ALL . mX [ 363ULL ] = t93
-> mX . mX [ 55ULL ] ; out -> mOBS_ALL . mX [ 364ULL ] = BLDC_a_v ; out ->
mOBS_ALL . mX [ 365ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
366ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C1_v * t93 -> mX . mX [
55ULL ] * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [ 367ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C1_v ; out -> mOBS_ALL . mX [
368ULL ] = t93 -> mU . mX [ 8ULL ] ; out -> mOBS_ALL . mX [ 369ULL ] = t93 ->
mX . mX [ 20ULL ] - BLDC_a_v ; out -> mOBS_ALL . mX [ 370ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 371ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 372ULL ] = t93
-> mU . mX [ 3ULL ] ; out -> mOBS_ALL . mX [ 373ULL ] = 0.0 ; out -> mOBS_ALL
. mX [ 374ULL ] = Battery1_n_v ; out -> mOBS_ALL . mX [ 375ULL ] = - 1.0 ;
out -> mOBS_ALL . mX [ 376ULL ] = 1.0 ; out -> mOBS_ALL . mX [ 377ULL ] = 0.0
; out -> mOBS_ALL . mX [ 378ULL ] = t93 -> mX . mX [ 43ULL ] ; out ->
mOBS_ALL . mX [ 379ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 380ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 381ULL ] = t93 -> mX . mX [ 57ULL ] ;
out -> mOBS_ALL . mX [ 382ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 383ULL ] = -
t93 -> mX . mX [ 10ULL ] + t93 -> mX . mX [ 39ULL ] * - 0.1 ; out -> mOBS_ALL
. mX [ 384ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 385ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 386ULL ] = 298.15 ; out -> mOBS_ALL . mX [ 387ULL ] = 298.15
; out -> mOBS_ALL . mX [ 388ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 389ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 390ULL ] = t93 -> mX . mX [ 43ULL ] ; out ->
mOBS_ALL . mX [ 391ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 392ULL ] = t93 -> mX
. mX [ 43ULL ] ; out -> mOBS_ALL . mX [ 393ULL ] = t93 -> mX . mX [ 43ULL ] ;
out -> mOBS_ALL . mX [ 394ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 395ULL ]
= Battery1_n_v ; out -> mOBS_ALL . mX [ 396ULL ] = t93 -> mX . mX [ 43ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ALL . mX [ 397ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode ; out -> mOBS_ALL
. mX [ 398ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 399ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode ; out -> mOBS_ALL
. mX [ 400ULL ] = t93 -> mX . mX [ 44ULL ] - t93 -> mX . mX [ 43ULL ] ; out
-> mOBS_ALL . mX [ 401ULL ] = t93 -> mU . mX [ 3ULL ] ; out -> mOBS_ALL . mX
[ 402ULL ] = t93 -> mX . mX [ 44ULL ] ; out -> mOBS_ALL . mX [ 403ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 404ULL ] = BLDC_a_v ; out -> mOBS_ALL .
mX [ 405ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C2_v * t93 -> mX .
mX [ 44ULL ] * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [ 406ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C2_v ; out -> mOBS_ALL . mX [
407ULL ] = t93 -> mU . mX [ 3ULL ] ; out -> mOBS_ALL . mX [ 408ULL ] =
BLDC_a_v - Battery1_n_v ; out -> mOBS_ALL . mX [ 409ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 410ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
411ULL ] = t93 -> mU . mX [ 4ULL ] ; out -> mOBS_ALL . mX [ 412ULL ] = 0.0 ;
out -> mOBS_ALL . mX [ 413ULL ] = BLDC_b_v ; out -> mOBS_ALL . mX [ 414ULL ]
= - 1.0 ; out -> mOBS_ALL . mX [ 415ULL ] = 1.0 ; out -> mOBS_ALL . mX [
416ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 417ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mOBS_ALL . mX
[ 418ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 419ULL ] =
BLDC_b_v ; out -> mOBS_ALL . mX [ 420ULL ] = t93 -> mX . mX [ 59ULL ] ; out
-> mOBS_ALL . mX [ 421ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 422ULL ] = - t93
-> mX . mX [ 2ULL ] + t93 -> mX . mX [ 25ULL ] * - 0.1 ; out -> mOBS_ALL . mX
[ 423ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 424ULL ] = 0.0
; out -> mOBS_ALL . mX [ 425ULL ] = 298.15 ; out -> mOBS_ALL . mX [ 426ULL ]
= 298.15 ; out -> mOBS_ALL . mX [ 427ULL ] = 0.0 ; out -> mOBS_ALL . mX [
428ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 429ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mOBS_ALL . mX
[ 430ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 431ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mOBS_ALL . mX
[ 432ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out ->
mOBS_ALL . mX [ 433ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
434ULL ] = BLDC_b_v ; out -> mOBS_ALL . mX [ 435ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ALL . mX [ 436ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode ; out -> mOBS_ALL
. mX [ 437ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 438ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode ; out -> mOBS_ALL
. mX [ 439ULL ] = t93 -> mX . mX [ 58ULL ] -
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mOBS_ALL . mX
[ 440ULL ] = t93 -> mU . mX [ 4ULL ] ; out -> mOBS_ALL . mX [ 441ULL ] = t93
-> mX . mX [ 58ULL ] ; out -> mOBS_ALL . mX [ 442ULL ] = BLDC_b_v ; out ->
mOBS_ALL . mX [ 443ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
444ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C3_v * t93 -> mX . mX [
58ULL ] * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [ 445ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C3_v ; out -> mOBS_ALL . mX [
446ULL ] = t93 -> mU . mX [ 4ULL ] ; out -> mOBS_ALL . mX [ 447ULL ] = t93 ->
mX . mX [ 20ULL ] - BLDC_b_v ; out -> mOBS_ALL . mX [ 448ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 449ULL ] = BLDC_b_v ; out -> mOBS_ALL . mX [ 450ULL ] = t93
-> mU . mX [ 5ULL ] ; out -> mOBS_ALL . mX [ 451ULL ] = 0.0 ; out -> mOBS_ALL
. mX [ 452ULL ] = Battery1_n_v ; out -> mOBS_ALL . mX [ 453ULL ] = - 1.0 ;
out -> mOBS_ALL . mX [ 454ULL ] = 1.0 ; out -> mOBS_ALL . mX [ 455ULL ] = 0.0
; out -> mOBS_ALL . mX [ 456ULL ] = t93 -> mX . mX [ 45ULL ] ; out ->
mOBS_ALL . mX [ 457ULL ] = BLDC_b_v ; out -> mOBS_ALL . mX [ 458ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 459ULL ] = t93 -> mX . mX [ 60ULL ] ;
out -> mOBS_ALL . mX [ 460ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 461ULL ] = ( (
( ( - t93 -> mX . mX [ 0ULL ] - t93 -> mX . mX [ 10ULL ] ) + t93 -> mX . mX [
21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [
25ULL ] * 0.1 ) + t93 -> mX . mX [ 2ULL ] ; out -> mOBS_ALL . mX [ 462ULL ] =
BLDC_b_v ; out -> mOBS_ALL . mX [ 463ULL ] = 0.0 ; out -> mOBS_ALL . mX [
464ULL ] = 298.15 ; out -> mOBS_ALL . mX [ 465ULL ] = 298.15 ; out ->
mOBS_ALL . mX [ 466ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 467ULL ] = 0.0 ; out
-> mOBS_ALL . mX [ 468ULL ] = t93 -> mX . mX [ 45ULL ] ; out -> mOBS_ALL . mX
[ 469ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 470ULL ] = t93 -> mX . mX [ 45ULL ]
; out -> mOBS_ALL . mX [ 471ULL ] = t93 -> mX . mX [ 45ULL ] ; out ->
mOBS_ALL . mX [ 472ULL ] = BLDC_b_v ; out -> mOBS_ALL . mX [ 473ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 474ULL ] = t93 -> mX . mX [ 45ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ALL . mX [ 475ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode ; out -> mOBS_ALL
. mX [ 476ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 477ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode ; out -> mOBS_ALL
. mX [ 478ULL ] = t93 -> mX . mX [ 46ULL ] - t93 -> mX . mX [ 45ULL ] ; out
-> mOBS_ALL . mX [ 479ULL ] = t93 -> mU . mX [ 5ULL ] ; out -> mOBS_ALL . mX
[ 480ULL ] = t93 -> mX . mX [ 46ULL ] ; out -> mOBS_ALL . mX [ 481ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 482ULL ] = BLDC_b_v ; out -> mOBS_ALL .
mX [ 483ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C4_v * t93 -> mX .
mX [ 46ULL ] * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [ 484ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C4_v ; out -> mOBS_ALL . mX [
485ULL ] = t93 -> mU . mX [ 5ULL ] ; out -> mOBS_ALL . mX [ 486ULL ] =
BLDC_b_v - Battery1_n_v ; out -> mOBS_ALL . mX [ 487ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 488ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
489ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ALL . mX [ 490ULL ] = 0.0 ;
out -> mOBS_ALL . mX [ 491ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 492ULL ]
= - 1.0 ; out -> mOBS_ALL . mX [ 493ULL ] = 1.0 ; out -> mOBS_ALL . mX [
494ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 495ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mOBS_ALL . mX
[ 496ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 497ULL ] =
BLDC_c_v ; out -> mOBS_ALL . mX [ 498ULL ] = t93 -> mX . mX [ 62ULL ] ; out
-> mOBS_ALL . mX [ 499ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 500ULL ] = - t93
-> mX . mX [ 3ULL ] + t93 -> mX . mX [ 26ULL ] * - 0.1 ; out -> mOBS_ALL . mX
[ 501ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 502ULL ] = 0.0
; out -> mOBS_ALL . mX [ 503ULL ] = 298.15 ; out -> mOBS_ALL . mX [ 504ULL ]
= 298.15 ; out -> mOBS_ALL . mX [ 505ULL ] = 0.0 ; out -> mOBS_ALL . mX [
506ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 507ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mOBS_ALL . mX
[ 508ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 509ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mOBS_ALL . mX
[ 510ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out ->
mOBS_ALL . mX [ 511ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
512ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 513ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ALL . mX [ 514ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode ; out -> mOBS_ALL
. mX [ 515ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 516ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode ; out -> mOBS_ALL
. mX [ 517ULL ] = t93 -> mX . mX [ 61ULL ] -
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mOBS_ALL . mX
[ 518ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ALL . mX [ 519ULL ] = t93
-> mX . mX [ 61ULL ] ; out -> mOBS_ALL . mX [ 520ULL ] = BLDC_c_v ; out ->
mOBS_ALL . mX [ 521ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [
522ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C5_v * t93 -> mX . mX [
61ULL ] * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [ 523ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C5_v ; out -> mOBS_ALL . mX [
524ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ALL . mX [ 525ULL ] = t93 ->
mX . mX [ 20ULL ] - BLDC_c_v ; out -> mOBS_ALL . mX [ 526ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 527ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 528ULL ] = t93
-> mU . mX [ 7ULL ] ; out -> mOBS_ALL . mX [ 529ULL ] = 0.0 ; out -> mOBS_ALL
. mX [ 530ULL ] = Battery1_n_v ; out -> mOBS_ALL . mX [ 531ULL ] = - 1.0 ;
out -> mOBS_ALL . mX [ 532ULL ] = 1.0 ; out -> mOBS_ALL . mX [ 533ULL ] = 0.0
; out -> mOBS_ALL . mX [ 534ULL ] = t93 -> mX . mX [ 47ULL ] ; out ->
mOBS_ALL . mX [ 535ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 536ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 537ULL ] = t93 -> mX . mX [ 63ULL ] ;
out -> mOBS_ALL . mX [ 538ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 539ULL ] = ( (
( ( - t93 -> mX . mX [ 0ULL ] - t93 -> mX . mX [ 10ULL ] ) + t93 -> mX . mX [
21ULL ] * - 0.1 ) + t93 -> mX . mX [ 39ULL ] * - 0.1 ) + t93 -> mX . mX [
26ULL ] * 0.1 ) + t93 -> mX . mX [ 3ULL ] ; out -> mOBS_ALL . mX [ 540ULL ] =
BLDC_c_v ; out -> mOBS_ALL . mX [ 541ULL ] = 0.0 ; out -> mOBS_ALL . mX [
542ULL ] = 298.15 ; out -> mOBS_ALL . mX [ 543ULL ] = 298.15 ; out ->
mOBS_ALL . mX [ 544ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 545ULL ] = 0.0 ; out
-> mOBS_ALL . mX [ 546ULL ] = t93 -> mX . mX [ 47ULL ] ; out -> mOBS_ALL . mX
[ 547ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 548ULL ] = t93 -> mX . mX [ 47ULL ]
; out -> mOBS_ALL . mX [ 549ULL ] = t93 -> mX . mX [ 47ULL ] ; out ->
mOBS_ALL . mX [ 550ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 551ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 552ULL ] = t93 -> mX . mX [ 47ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode * 0.001 * 1000.0
; out -> mOBS_ALL . mX [ 553ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode ; out -> mOBS_ALL
. mX [ 554ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 555ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode ; out -> mOBS_ALL
. mX [ 556ULL ] = t93 -> mX . mX [ 48ULL ] - t93 -> mX . mX [ 47ULL ] ; out
-> mOBS_ALL . mX [ 557ULL ] = t93 -> mU . mX [ 7ULL ] ; out -> mOBS_ALL . mX
[ 558ULL ] = t93 -> mX . mX [ 48ULL ] ; out -> mOBS_ALL . mX [ 559ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 560ULL ] = BLDC_c_v ; out -> mOBS_ALL .
mX [ 561ULL ] = Three_Phase_Inverter_Converter_Three_Phase_C6_v * t93 -> mX .
mX [ 48ULL ] * 0.001 * 1000.0 ; out -> mOBS_ALL . mX [ 562ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C6_v ; out -> mOBS_ALL . mX [
563ULL ] = t93 -> mU . mX [ 7ULL ] ; out -> mOBS_ALL . mX [ 564ULL ] =
BLDC_c_v - Battery1_n_v ; out -> mOBS_ALL . mX [ 565ULL ] = 0.0 ; out ->
mOBS_ALL . mX [ 566ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 567ULL ] =
BLDC_b_v ; out -> mOBS_ALL . mX [ 568ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX
[ 569ULL ] = Battery1_n_v ; out -> mOBS_ALL . mX [ 570ULL ] = t93 -> mX . mX
[ 20ULL ] ; out -> mOBS_ALL . mX [ 571ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mOBS_ALL . mX [ 572ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mOBS_ALL . mX [ 573ULL ] = t93 ->
mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 574ULL ] = t93 -> mX . mX [ 20ULL
] ; out -> mOBS_ALL . mX [ 575ULL ] = Buck_Converter_Current_Sensor1_I ; out
-> mOBS_ALL . mX [ 576ULL ] = BLDC_i_a ; out -> mOBS_ALL . mX [ 577ULL ] =
t93 -> mX . mX [ 30ULL ] ; out -> mOBS_ALL . mX [ 578ULL ] = t93 -> mX . mX [
31ULL ] ; out -> mOBS_ALL . mX [ 579ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [
580ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 581ULL ] = BLDC_b_v ; out ->
mOBS_ALL . mX [ 582ULL ] = BLDC_b_v ; out -> mOBS_ALL . mX [ 583ULL ] =
BLDC_c_v ; out -> mOBS_ALL . mX [ 584ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX
[ 585ULL ] = BLDC_i_a ; out -> mOBS_ALL . mX [ 586ULL ] = t93 -> mX . mX [
30ULL ] ; out -> mOBS_ALL . mX [ 587ULL ] = t93 -> mX . mX [ 31ULL ] ; out ->
mOBS_ALL . mX [ 588ULL ] = BLDC_i_a ; out -> mOBS_ALL . mX [ 589ULL ] = t93
-> mX . mX [ 30ULL ] ; out -> mOBS_ALL . mX [ 590ULL ] = t93 -> mX . mX [
31ULL ] ; out -> mOBS_ALL . mX [ 591ULL ] = t34 ; out -> mOBS_ALL . mX [
592ULL ] = t35 ; out -> mOBS_ALL . mX [ 593ULL ] = t36 ; out -> mOBS_ALL . mX
[ 594ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 595ULL ] = BLDC_b_v ; out ->
mOBS_ALL . mX [ 596ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX [ 597ULL ] = 0.0 ;
out -> mOBS_ALL . mX [ 598ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 599ULL ] = 0.0
; out -> mOBS_ALL . mX [ 600ULL ] = t34 ; out -> mOBS_ALL . mX [ 601ULL ] =
t35 ; out -> mOBS_ALL . mX [ 602ULL ] = t36 ; out -> mOBS_ALL . mX [ 603ULL ]
= t93 -> mU . mX [ 3ULL ] ; out -> mOBS_ALL . mX [ 604ULL ] = t93 -> mU . mX
[ 4ULL ] ; out -> mOBS_ALL . mX [ 605ULL ] = t93 -> mU . mX [ 5ULL ] ; out ->
mOBS_ALL . mX [ 606ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ALL . mX [
607ULL ] = t93 -> mU . mX [ 7ULL ] ; out -> mOBS_ALL . mX [ 608ULL ] = t93 ->
mU . mX [ 8ULL ] ; out -> mOBS_ALL . mX [ 609ULL ] = 0.0 ; out -> mOBS_ALL .
mX [ 610ULL ] = t93 -> mU . mX [ 8ULL ] ; out -> mOBS_ALL . mX [ 611ULL ] =
0.0 ; out -> mOBS_ALL . mX [ 612ULL ] = t93 -> mU . mX [ 3ULL ] ; out ->
mOBS_ALL . mX [ 613ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 614ULL ] = t93 -> mU
. mX [ 4ULL ] ; out -> mOBS_ALL . mX [ 615ULL ] = 0.0 ; out -> mOBS_ALL . mX
[ 616ULL ] = t93 -> mU . mX [ 5ULL ] ; out -> mOBS_ALL . mX [ 617ULL ] = 0.0
; out -> mOBS_ALL . mX [ 618ULL ] = t93 -> mU . mX [ 6ULL ] ; out -> mOBS_ALL
. mX [ 619ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 620ULL ] = t93 -> mU . mX [
7ULL ] ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++ ) { out -> mOBS_ALL . mX [
t22 + 621ULL ] = - ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t22 ] ; }
out -> mOBS_ALL . mX [ 633ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 634ULL ] = 0.0
; out -> mOBS_ALL . mX [ 635ULL ] = 0.0 ; out -> mOBS_ALL . mX [ 636ULL ] =
0.0 ; for ( t22 = 0ULL ; t22 < 12ULL ; t22 ++ ) { out -> mOBS_ALL . mX [ t22
+ 637ULL ] = Three_Phase_Inverter_Converter_Three_Phase_G_V [ t22 ] ; } out
-> mOBS_ALL . mX [ 649ULL ] = BLDC_a_v ; out -> mOBS_ALL . mX [ 650ULL ] =
BLDC_b_v ; out -> mOBS_ALL . mX [ 651ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX
[ 652ULL ] = t93 -> mX . mX [ 20ULL ] ; out -> mOBS_ALL . mX [ 653ULL ] =
Battery1_n_v ; out -> mOBS_ALL . mX [ 654ULL ] = 0.0 ; out -> mOBS_ALL . mX [
655ULL ] = t93 -> mX . mX [ 15ULL ] ; out -> mOBS_ALL . mX [ 656ULL ] = t93
-> mU . mX [ 2ULL ] ; out -> mOBS_ALL . mX [ 657ULL ] = - t93 -> mU . mX [
2ULL ] ; out -> mOBS_ALL . mX [ 658ULL ] = - t93 -> mX . mX [ 15ULL ] ; out
-> mOBS_ALL . mX [ 659ULL ] = t91 ; out -> mOBS_ALL . mX [ 660ULL ] =
BLDC_n_v ; out -> mOBS_ALL . mX [ 661ULL ] = BLDC_c_v ; out -> mOBS_ALL . mX
[ 662ULL ] = t91 ; ( void ) LC ; ( void ) out ; return 0 ; }
