#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_log.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_log ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t107 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 8 ] = { 0.027679120537720925 , 0.0 , - 0.027679120537720925 , -
0.027679120537720925 , 0.027679120537720925 , 0.027679120537720925 , 0.0 , -
0.027679120537720925 } ; static real_T _cg_const_2 [ 8 ] = { -
0.52359877559829893 , 0.0 , 0.52359877559829893 , 2.617993877991494 ,
3.6651914291880923 , 5.7595865315812871 , 6.2831853071795862 ,
6.8067840827778854 } ; ETTSf3049b48 t2 ; real_T
Three_Phase_Inverter_Converter_Three_Phase_G_V [ 12 ] ; real_T t22 [ 12 ] ;
real_T nonscalar1 [ 8 ] ; real_T nonscalar2 [ 8 ] ; real_T t20 [ 1 ] ; real_T
t21 [ 1 ] ; real_T BLDC_a_v ; real_T BLDC_b_v ; real_T BLDC_i_n ; real_T
BLDC_private_DphiA ; real_T BLDC_private_DphiDtheta_idx_0 ; real_T
BLDC_torque ; real_T Battery1_n_v ; real_T Battery1_p_v ; real_T
Buck_Converter_Capacitor1_p_v ; real_T Buck_Converter_Capacitor_i ; real_T
Buck_Converter_Current_Sensor1_I ; real_T Buck_Converter_Inductor1_v ; real_T
Buck_Converter_Inductor_v ; real_T Buck_Converter_S1_diode_i ; real_T
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
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode ; real_T t105 ;
real_T t44 ; real_T t60 ; real_T t61 ; real_T t62 ; real_T t65 ; real_T t70 ;
real_T t72 ; real_T t73 ; size_t t4 [ 1 ] ; size_t t5 [ 1 ] ; size_t t39 ; (
void ) LC ; nonscalar1 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar1 [ 1 ] =
_cg_const_1 [ 1 ] ; nonscalar1 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar1 [ 3 ] =
_cg_const_1 [ 3 ] ; nonscalar1 [ 4 ] = _cg_const_1 [ 4 ] ; nonscalar1 [ 5 ] =
_cg_const_1 [ 5 ] ; nonscalar1 [ 6 ] = _cg_const_1 [ 6 ] ; nonscalar1 [ 7 ] =
_cg_const_1 [ 7 ] ; nonscalar2 [ 0 ] = _cg_const_2 [ 0 ] ; nonscalar2 [ 1 ] =
_cg_const_2 [ 1 ] ; nonscalar2 [ 2 ] = _cg_const_2 [ 2 ] ; nonscalar2 [ 3 ] =
_cg_const_2 [ 3 ] ; nonscalar2 [ 4 ] = _cg_const_2 [ 4 ] ; nonscalar2 [ 5 ] =
_cg_const_2 [ 5 ] ; nonscalar2 [ 6 ] = _cg_const_2 [ 6 ] ; nonscalar2 [ 7 ] =
_cg_const_2 [ 7 ] ; BLDC_a_v = ( - t107 -> mX . mX [ 0ULL ] + t107 -> mX . mX
[ 21ULL ] * - 0.1 ) + t107 -> mX . mX [ 20ULL ] ; BLDC_b_v = ( - t107 -> mX .
mX [ 2ULL ] + t107 -> mX . mX [ 25ULL ] * - 0.1 ) + t107 -> mX . mX [ 20ULL ]
; BLDC_private_DphiA = t107 -> mX . mX [ 1ULL ] * 23.0 - 1.5707963267948966 ;
t21 [ 0ULL ] = atan2 ( - sin ( BLDC_private_DphiA ) , - cos (
BLDC_private_DphiA ) ) + 3.1415926535897931 ; t4 [ 0 ] = 8ULL ; t5 [ 0 ] =
1ULL ; tlu2_linear_nearest_prelookup ( & t2 . mField0 [ 0ULL ] , & t2 .
mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t21 [
0ULL ] , & t4 [ 0ULL ] , & t5 [ 0ULL ] ) ; tlu2_1d_linear_nearest_value ( &
t20 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , &
nonscalar1 [ 0ULL ] , & t4 [ 0ULL ] , & t5 [ 0ULL ] ) ;
BLDC_private_DphiDtheta_idx_0 = t20 [ 0ULL ] ; t21 [ 0ULL ] = atan2 ( - sin (
BLDC_private_DphiA - 2.0943951023931953 ) , - cos ( BLDC_private_DphiA -
2.0943951023931953 ) ) + 3.1415926535897931 ; tlu2_linear_nearest_prelookup (
& t2 . mField0 [ 0ULL ] , & t2 . mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] ,
& nonscalar2 [ 0ULL ] , & t21 [ 0ULL ] , & t4 [ 0ULL ] , & t5 [ 0ULL ] ) ;
tlu2_1d_linear_nearest_value ( & t20 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , &
t2 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t4 [ 0ULL ] , & t5 [ 0ULL ]
) ; t21 [ 0ULL ] = atan2 ( - sin ( BLDC_private_DphiA + 2.0943951023931953 )
, - cos ( BLDC_private_DphiA + 2.0943951023931953 ) ) + 3.1415926535897931 ;
tlu2_linear_nearest_prelookup ( & t2 . mField0 [ 0ULL ] , & t2 . mField1 [
0ULL ] , & t2 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t21 [ 0ULL ] , &
t4 [ 0ULL ] , & t5 [ 0ULL ] ) ; tlu2_1d_linear_nearest_value ( & t21 [ 0ULL ]
, & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] ,
& t4 [ 0ULL ] , & t5 [ 0ULL ] ) ; out -> mLOG . mX [ 5ULL ] =
BLDC_private_DphiDtheta_idx_0 * t107 -> mX . mX [ 23ULL ] * 23.0 ; out ->
mLOG . mX [ 6ULL ] = t20 [ 0ULL ] * t107 -> mX . mX [ 23ULL ] * 23.0 ; out ->
mLOG . mX [ 7ULL ] = t21 [ 0ULL ] * t107 -> mX . mX [ 23ULL ] * 23.0 ;
BLDC_private_DphiA = ( - t107 -> mX . mX [ 3ULL ] + t107 -> mX . mX [ 26ULL ]
* - 0.1 ) + t107 -> mX . mX [ 20ULL ] ; BLDC_private_DphiDtheta_idx_0 = -
t107 -> mX . mX [ 30ULL ] - t107 -> mX . mX [ 31ULL ] ; BLDC_i_n = ( ( t107
-> mX . mX [ 0ULL ] * 1.0E-9 + t107 -> mX . mX [ 35ULL ] * 1.0E-9 ) + t107 ->
mX . mX [ 20ULL ] * - 1.0E-9 ) + t107 -> mX . mX [ 21ULL ] *
1.0000000000000002E-10 ; t44 = ( ( - t107 -> mX . mX [ 0ULL ] - t107 -> mX .
mX [ 35ULL ] ) + t107 -> mX . mX [ 21ULL ] * - 0.1 ) + t107 -> mX . mX [
20ULL ] ; out -> mLOG . mX [ 21ULL ] = ( BLDC_private_DphiDtheta_idx_0 *
BLDC_private_DphiDtheta_idx_0 * 0.00012 + t107 -> mX . mX [ 30ULL ] * t107 ->
mX . mX [ 30ULL ] * 0.00012 ) + t107 -> mX . mX [ 31ULL ] * t107 -> mX . mX [
31ULL ] * 0.00012 ; out -> mLOG . mX [ 24ULL ] = ( ( ( - t107 -> mX . mX [
2ULL ] + t107 -> mX . mX [ 21ULL ] * 0.1 ) + t107 -> mX . mX [ 25ULL ] * -
0.1 ) + t107 -> mX . mX [ 35ULL ] ) + t107 -> mX . mX [ 0ULL ] ; out -> mLOG
. mX [ 25ULL ] = ( ( ( - t107 -> mX . mX [ 3ULL ] + t107 -> mX . mX [ 21ULL ]
* 0.1 ) + t107 -> mX . mX [ 26ULL ] * - 0.1 ) + t107 -> mX . mX [ 35ULL ] ) +
t107 -> mX . mX [ 0ULL ] ; BLDC_torque = - t107 -> mX . mX [ 37ULL ] + t107
-> mU . mX [ 2ULL ] ; Battery1_n_v = ( ( ( - t107 -> mX . mX [ 0ULL ] - t107
-> mX . mX [ 10ULL ] ) + t107 -> mX . mX [ 21ULL ] * - 0.1 ) + t107 -> mX .
mX [ 39ULL ] * - 0.1 ) + t107 -> mX . mX [ 20ULL ] ; Battery1_p_v = ( ( ( ( (
- t107 -> mX . mX [ 0ULL ] - t107 -> mX . mX [ 10ULL ] ) + t107 -> mX . mX [
38ULL ] * 0.005 ) + t107 -> mX . mX [ 21ULL ] * - 0.1 ) + t107 -> mX . mX [
39ULL ] * - 0.1 ) + t107 -> mX . mX [ 20ULL ] ) + 48.0 ; out -> mLOG . mX [
30ULL ] = t107 -> mX . mX [ 38ULL ] * t107 -> mX . mX [ 38ULL ] * 5.0E-6 ;
out -> mLOG . mX [ 32ULL ] = t107 -> mX . mX [ 38ULL ] * 0.005 + 48.0 ;
Buck_Converter_Capacitor_i = ( ( ( ( ( ( ( ( ( ( t107 -> mX . mX [ 20ULL ] *
- 1.0E-9 + t107 -> mX . mX [ 40ULL ] * 1.0E-9 ) - t107 -> mX . mX [ 39ULL ] )
- t107 -> mX . mX [ 41ULL ] ) - t107 -> mX . mX [ 42ULL ] ) - t107 -> mX . mX
[ 44ULL ] ) - t107 -> mX . mX [ 46ULL ] ) - t107 -> mX . mX [ 48ULL ] ) +
t107 -> mX . mX [ 11ULL ] ) + t107 -> mX . mX [ 43ULL ] ) + t107 -> mX . mX [
45ULL ] ) + t107 -> mX . mX [ 47ULL ] ; out -> mLOG . mX [ 38ULL ] =
Buck_Converter_Capacitor_i * Buck_Converter_Capacitor_i * 0.0002 ; out ->
mLOG . mX [ 36ULL ] = ( ( t107 -> mX . mX [ 21ULL ] * 0.1 + t107 -> mX . mX [
39ULL ] * 0.1 ) + t107 -> mX . mX [ 0ULL ] ) + t107 -> mX . mX [ 10ULL ] ;
Buck_Converter_Capacitor1_p_v = ( ( ( ( ( - t107 -> mX . mX [ 0ULL ] - t107
-> mX . mX [ 10ULL ] ) + t107 -> mX . mX [ 49ULL ] * 0.2 ) + t107 -> mX . mX
[ 21ULL ] * - 0.1 ) + t107 -> mX . mX [ 39ULL ] * - 0.1 ) + t107 -> mX . mX [
20ULL ] ) + t107 -> mX . mX [ 13ULL ] ; out -> mLOG . mX [ 44ULL ] = t107 ->
mX . mX [ 49ULL ] * t107 -> mX . mX [ 49ULL ] * 0.0002 ; out -> mLOG . mX [
42ULL ] = t107 -> mX . mX [ 49ULL ] * 0.2 + t107 -> mX . mX [ 13ULL ] ;
Buck_Converter_Current_Sensor1_I = ( ( ( ( ( ( ( - t107 -> mX . mX [ 43ULL ]
- t107 -> mX . mX [ 45ULL ] ) - t107 -> mX . mX [ 47ULL ] ) + t107 -> mX . mX
[ 39ULL ] ) + t107 -> mX . mX [ 41ULL ] ) + t107 -> mX . mX [ 42ULL ] ) +
t107 -> mX . mX [ 44ULL ] ) + t107 -> mX . mX [ 46ULL ] ) + t107 -> mX . mX [
48ULL ] ; out -> mLOG . mX [ 55ULL ] = ( t107 -> mX . mX [ 20ULL ] * - 1.0E-9
+ t107 -> mX . mX [ 40ULL ] * 1.0E-9 ) + t107 -> mX . mX [ 11ULL ] ;
Buck_Converter_Inductor_v = - t107 -> mX . mX [ 20ULL ] + t107 -> mX . mX [
40ULL ] ; out -> mLOG . mX [ 60ULL ] = t107 -> mX . mX [ 11ULL ] * t107 -> mX
. mX [ 11ULL ] * 0.0001 + Buck_Converter_Inductor_v *
Buck_Converter_Inductor_v * 1.0000000000000002E-12 ;
Buck_Converter_Inductor1_v = ( ( - t107 -> mX . mX [ 13ULL ] + t107 -> mX .
mX [ 38ULL ] * 0.005 ) + t107 -> mX . mX [ 49ULL ] * - 0.2 ) + 48.0 ; out ->
mLOG . mX [ 66ULL ] = t107 -> mX . mX [ 14ULL ] * t107 -> mX . mX [ 14ULL ] *
0.0001 + Buck_Converter_Inductor1_v * Buck_Converter_Inductor1_v *
1.0000000000000002E-12 ; Buck_Converter_S_diode_i = ( t107 -> mX . mX [ 38ULL
] + t107 -> mX . mX [ 49ULL ] ) + t107 -> mX . mX [ 50ULL ] ;
Buck_Converter_S_diode_v_diode = t107 -> mX . mX [ 40ULL ] -
Buck_Converter_Capacitor1_p_v ; out -> mLOG . mX [ 74ULL ] = ( ( ( ( ( ( -
t107 -> mX . mX [ 13ULL ] - t107 -> mX . mX [ 20ULL ] ) + t107 -> mX . mX [
49ULL ] * - 0.2 ) + t107 -> mX . mX [ 21ULL ] * 0.1 ) + t107 -> mX . mX [
39ULL ] * 0.1 ) + t107 -> mX . mX [ 40ULL ] ) + t107 -> mX . mX [ 0ULL ] ) +
t107 -> mX . mX [ 10ULL ] ; out -> mLOG . mX [ 84ULL ] =
Buck_Converter_S_diode_i * 0.001 + 0.099999999 ; out -> mLOG . mX [ 85ULL ] =
t107 -> mX . mX [ 50ULL ] - Buck_Converter_S_diode_i ; t65 = ( ( ( ( ( ( -
t107 -> mX . mX [ 0ULL ] - t107 -> mX . mX [ 10ULL ] ) + t107 -> mX . mX [
49ULL ] * 0.2 ) - t107 -> mX . mX [ 40ULL ] ) + t107 -> mX . mX [ 21ULL ] * -
0.1 ) + t107 -> mX . mX [ 39ULL ] * - 0.1 ) + t107 -> mX . mX [ 20ULL ] ) +
t107 -> mX . mX [ 13ULL ] ; out -> mLOG . mX [ 92ULL ] = t107 -> mU . mX [
0ULL ] ; out -> mLOG . mX [ 93ULL ] = Buck_Converter_Capacitor1_p_v - t107 ->
mX . mX [ 40ULL ] ; Buck_Converter_S1_diode_i = ( ( ( ( t107 -> mX . mX [
20ULL ] * - 1.0E-9 + t107 -> mX . mX [ 40ULL ] * 1.0E-9 ) + t107 -> mX . mX [
38ULL ] ) + t107 -> mX . mX [ 49ULL ] ) + t107 -> mX . mX [ 11ULL ] ) + t107
-> mX . mX [ 52ULL ] ; Buck_Converter_S1_diode_v_diode = Battery1_n_v - t107
-> mX . mX [ 40ULL ] ; out -> mLOG . mX [ 101ULL ] = ( ( ( ( - t107 -> mX .
mX [ 0ULL ] - t107 -> mX . mX [ 10ULL ] ) - t107 -> mX . mX [ 40ULL ] ) +
t107 -> mX . mX [ 21ULL ] * - 0.1 ) + t107 -> mX . mX [ 39ULL ] * - 0.1 ) +
t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 111ULL ] =
Buck_Converter_S1_diode_i * 0.001 + 0.099999999 ; out -> mLOG . mX [ 112ULL ]
= t107 -> mX . mX [ 52ULL ] - Buck_Converter_S1_diode_i ; t70 = ( ( ( ( -
t107 -> mX . mX [ 20ULL ] + t107 -> mX . mX [ 21ULL ] * 0.1 ) + t107 -> mX .
mX [ 39ULL ] * 0.1 ) + t107 -> mX . mX [ 40ULL ] ) + t107 -> mX . mX [ 0ULL ]
) + t107 -> mX . mX [ 10ULL ] ; out -> mLOG . mX [ 119ULL ] = t107 -> mU . mX
[ 1ULL ] ; out -> mLOG . mX [ 120ULL ] = t107 -> mX . mX [ 40ULL ] -
Battery1_n_v ; t72 = t107 -> mX . mX [ 20ULL ] - Battery1_n_v ; t73 =
Battery1_p_v - Battery1_n_v ; out -> mLOG . mX [ 151ULL ] = BLDC_i_n *
BLDC_i_n * 1.0E+9 ; out -> mLOG . mX [ 183ULL ] = t107 -> mX . mX [ 21ULL ] *
t107 -> mX . mX [ 21ULL ] * 0.0001 ;
Three_Phase_Inverter_Converter_Three_Phase_C1_v = t107 -> mX . mX [ 21ULL ] *
0.1 + t107 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 189ULL ] = t107 -> mX .
mX [ 39ULL ] * t107 -> mX . mX [ 39ULL ] * 0.0001 ;
Three_Phase_Inverter_Converter_Three_Phase_C2_v = t107 -> mX . mX [ 39ULL ] *
0.1 + t107 -> mX . mX [ 10ULL ] ; out -> mLOG . mX [ 195ULL ] = t107 -> mX .
mX [ 25ULL ] * t107 -> mX . mX [ 25ULL ] * 0.0001 ;
Three_Phase_Inverter_Converter_Three_Phase_C3_v = t107 -> mX . mX [ 25ULL ] *
0.1 + t107 -> mX . mX [ 2ULL ] ; out -> mLOG . mX [ 201ULL ] = t107 -> mX .
mX [ 41ULL ] * t107 -> mX . mX [ 41ULL ] * 0.0001 ;
Three_Phase_Inverter_Converter_Three_Phase_C4_v = ( ( ( ( - t107 -> mX . mX [
2ULL ] + t107 -> mX . mX [ 21ULL ] * 0.1 ) + t107 -> mX . mX [ 39ULL ] * 0.1
) + t107 -> mX . mX [ 25ULL ] * - 0.1 ) + t107 -> mX . mX [ 0ULL ] ) + t107
-> mX . mX [ 10ULL ] ; out -> mLOG . mX [ 207ULL ] = t107 -> mX . mX [ 26ULL
] * t107 -> mX . mX [ 26ULL ] * 0.0001 ;
Three_Phase_Inverter_Converter_Three_Phase_C5_v = t107 -> mX . mX [ 26ULL ] *
0.1 + t107 -> mX . mX [ 3ULL ] ; out -> mLOG . mX [ 213ULL ] = t107 -> mX .
mX [ 42ULL ] * t107 -> mX . mX [ 42ULL ] * 0.0001 ;
Three_Phase_Inverter_Converter_Three_Phase_C6_v = ( ( ( ( - t107 -> mX . mX [
3ULL ] + t107 -> mX . mX [ 21ULL ] * 0.1 ) + t107 -> mX . mX [ 39ULL ] * 0.1
) + t107 -> mX . mX [ 26ULL ] * - 0.1 ) + t107 -> mX . mX [ 0ULL ] ) + t107
-> mX . mX [ 10ULL ] ; t22 [ 0ULL ] = t107 -> mU . mX [ 8ULL ] ; t22 [ 1ULL ]
= 0.0 ; t22 [ 2ULL ] = t107 -> mU . mX [ 3ULL ] ; t22 [ 3ULL ] = 0.0 ; t22 [
4ULL ] = t107 -> mU . mX [ 4ULL ] ; t22 [ 5ULL ] = 0.0 ; t22 [ 6ULL ] = t107
-> mU . mX [ 5ULL ] ; t22 [ 7ULL ] = 0.0 ; t22 [ 8ULL ] = t107 -> mU . mX [
6ULL ] ; t22 [ 9ULL ] = 0.0 ; t22 [ 10ULL ] = t107 -> mU . mX [ 7ULL ] ; t22
[ 11ULL ] = 0.0 ; for ( t39 = 0ULL ; t39 < 12ULL ; t39 ++ ) {
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t39 ] = t22 [ t39 ] ; }
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i = ( ( ( ( ( - t107 ->
mX . mX [ 39ULL ] - t107 -> mX . mX [ 44ULL ] ) + t107 -> mX . mX [ 30ULL ] )
+ t107 -> mX . mX [ 31ULL ] ) + t107 -> mX . mX [ 21ULL ] ) + t107 -> mX . mX
[ 55ULL ] ) + t107 -> mX . mX [ 43ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode = BLDC_a_v - t107
-> mX . mX [ 20ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode = Battery1_n_v -
BLDC_a_v ; Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i = ( ( ( ( -
t107 -> mX . mX [ 30ULL ] - t107 -> mX . mX [ 41ULL ] ) - t107 -> mX . mX [
46ULL ] ) + t107 -> mX . mX [ 25ULL ] ) + t107 -> mX . mX [ 58ULL ] ) + t107
-> mX . mX [ 45ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode = BLDC_b_v - t107
-> mX . mX [ 20ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode = Battery1_n_v -
BLDC_b_v ; Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i = ( ( ( ( -
t107 -> mX . mX [ 31ULL ] - t107 -> mX . mX [ 42ULL ] ) - t107 -> mX . mX [
48ULL ] ) + t107 -> mX . mX [ 26ULL ] ) + t107 -> mX . mX [ 61ULL ] ) + t107
-> mX . mX [ 47ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode =
BLDC_private_DphiA - t107 -> mX . mX [ 20ULL ] ;
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode = Battery1_n_v -
BLDC_private_DphiA ; t60 = ( ( - t107 -> mX . mX [ 0ULL ] + t107 -> mX . mX [
21ULL ] * - 0.1 ) + t107 -> mX . mX [ 25ULL ] * 0.1 ) + t107 -> mX . mX [
2ULL ] ; t61 = ( ( - t107 -> mX . mX [ 2ULL ] + t107 -> mX . mX [ 25ULL ] * -
0.1 ) + t107 -> mX . mX [ 26ULL ] * 0.1 ) + t107 -> mX . mX [ 3ULL ] ; t62 =
( ( - t107 -> mX . mX [ 3ULL ] + t107 -> mX . mX [ 21ULL ] * 0.1 ) + t107 ->
mX . mX [ 26ULL ] * - 0.1 ) + t107 -> mX . mX [ 0ULL ] ; t105 =
BLDC_private_DphiA - t44 ; out -> mLOG . mX [ 0ULL ] = t107 -> mX . mX [ 1ULL
] * 57.295779513082323 ; out -> mLOG . mX [ 1ULL ] = t107 -> mX . mX [ 15ULL
] ; out -> mLOG . mX [ 2ULL ] = BLDC_a_v ; out -> mLOG . mX [ 3ULL ] = t107
-> mX . mX [ 23ULL ] * 9.5492965855137211 ; out -> mLOG . mX [ 4ULL ] =
BLDC_b_v ; out -> mLOG . mX [ 8ULL ] = BLDC_private_DphiA ; out -> mLOG . mX
[ 9ULL ] = t107 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 10ULL ] = t107 ->
mX . mX [ 28ULL ] ; out -> mLOG . mX [ 11ULL ] =
BLDC_private_DphiDtheta_idx_0 ; out -> mLOG . mX [ 12ULL ] = t107 -> mX . mX
[ 30ULL ] ; out -> mLOG . mX [ 13ULL ] = t107 -> mX . mX [ 31ULL ] ; out ->
mLOG . mX [ 14ULL ] = t107 -> mX . mX [ 4ULL ] ; out -> mLOG . mX [ 15ULL ] =
BLDC_i_n ; out -> mLOG . mX [ 16ULL ] = t107 -> mX . mX [ 5ULL ] ; out ->
mLOG . mX [ 17ULL ] = t44 ; out -> mLOG . mX [ 18ULL ] = t107 -> mX . mX [
6ULL ] ; out -> mLOG . mX [ 19ULL ] = t107 -> mX . mX [ 7ULL ] ; out -> mLOG
. mX [ 20ULL ] = t107 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 22ULL ] =
BLDC_torque ; out -> mLOG . mX [ 23ULL ] = t107 -> mX . mX [ 35ULL ] ; out ->
mLOG . mX [ 26ULL ] = t107 -> mX . mX [ 38ULL ] ; out -> mLOG . mX [ 27ULL ]
= t107 -> mX . mX [ 9ULL ] * 0.00027777777777777778 ; out -> mLOG . mX [
28ULL ] = Battery1_n_v ; out -> mLOG . mX [ 29ULL ] = Battery1_p_v ; out ->
mLOG . mX [ 31ULL ] = t107 -> mX . mX [ 9ULL ] ; out -> mLOG . mX [ 33ULL ] =
Buck_Converter_Capacitor_i ; out -> mLOG . mX [ 34ULL ] = Battery1_n_v ; out
-> mLOG . mX [ 35ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 37ULL
] = t107 -> mX . mX [ 12ULL ] ; out -> mLOG . mX [ 39ULL ] = t107 -> mX . mX
[ 49ULL ] ; out -> mLOG . mX [ 40ULL ] = Battery1_n_v ; out -> mLOG . mX [
41ULL ] = Buck_Converter_Capacitor1_p_v ; out -> mLOG . mX [ 43ULL ] = t107
-> mX . mX [ 13ULL ] ; out -> mLOG . mX [ 45ULL ] = - t107 -> mX . mX [ 38ULL
] ; out -> mLOG . mX [ 46ULL ] = - t107 -> mX . mX [ 38ULL ] ; out -> mLOG .
mX [ 47ULL ] = Battery1_p_v ; out -> mLOG . mX [ 48ULL ] = Battery1_p_v ; out
-> mLOG . mX [ 49ULL ] = Buck_Converter_Current_Sensor1_I ; out -> mLOG . mX
[ 50ULL ] = Buck_Converter_Current_Sensor1_I ; out -> mLOG . mX [ 51ULL ] =
t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 52ULL ] = t107 -> mX . mX [
20ULL ] ; out -> mLOG . mX [ 53ULL ] = Buck_Converter_Current_Sensor1_I ; out
-> mLOG . mX [ 54ULL ] = - t107 -> mX . mX [ 38ULL ] ; out -> mLOG . mX [
56ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 57ULL ] = t107 -> mX
. mX [ 40ULL ] ; out -> mLOG . mX [ 58ULL ] = Buck_Converter_Inductor_v ; out
-> mLOG . mX [ 59ULL ] = t107 -> mX . mX [ 11ULL ] ; out -> mLOG . mX [ 61ULL
] = - t107 -> mX . mX [ 38ULL ] ; out -> mLOG . mX [ 62ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mLOG . mX [ 63ULL ] = Battery1_p_v ;
out -> mLOG . mX [ 64ULL ] = Buck_Converter_Inductor1_v ; out -> mLOG . mX [
65ULL ] = t107 -> mX . mX [ 14ULL ] ; out -> mLOG . mX [ 67ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mLOG . mX [ 68ULL ] = t107 -> mU . mX
[ 0ULL ] ; out -> mLOG . mX [ 69ULL ] = t107 -> mX . mX [ 40ULL ] ; out ->
mLOG . mX [ 70ULL ] = Buck_Converter_S_diode_i ; out -> mLOG . mX [ 71ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mLOG . mX [ 72ULL ] = t107 -> mX . mX
[ 40ULL ] ; out -> mLOG . mX [ 73ULL ] = t107 -> mX . mX [ 51ULL ] ; out ->
mLOG . mX [ 75ULL ] = Buck_Converter_Capacitor1_p_v ; out -> mLOG . mX [
76ULL ] = Buck_Converter_S_diode_i ; out -> mLOG . mX [ 77ULL ] =
Buck_Converter_S_diode_i ; out -> mLOG . mX [ 78ULL ] =
Buck_Converter_S_diode_i ; out -> mLOG . mX [ 79ULL ] =
Buck_Converter_Capacitor1_p_v ; out -> mLOG . mX [ 80ULL ] = t107 -> mX . mX
[ 40ULL ] ; out -> mLOG . mX [ 81ULL ] = Buck_Converter_S_diode_i *
Buck_Converter_S_diode_v_diode * 0.001 * 1000.0 ; out -> mLOG . mX [ 82ULL ]
= Buck_Converter_S_diode_v_diode ; out -> mLOG . mX [ 83ULL ] =
Buck_Converter_S_diode_v_diode ; out -> mLOG . mX [ 86ULL ] = t107 -> mU . mX
[ 0ULL ] ; out -> mLOG . mX [ 87ULL ] = t107 -> mX . mX [ 50ULL ] ; out ->
mLOG . mX [ 88ULL ] = t107 -> mX . mX [ 40ULL ] ; out -> mLOG . mX [ 89ULL ]
= Buck_Converter_Capacitor1_p_v ; out -> mLOG . mX [ 90ULL ] = t107 -> mX .
mX [ 50ULL ] * t65 * 0.001 * 1000.0 ; out -> mLOG . mX [ 91ULL ] = t65 ; out
-> mLOG . mX [ 94ULL ] = t107 -> mX . mX [ 40ULL ] ; out -> mLOG . mX [ 95ULL
] = t107 -> mU . mX [ 1ULL ] ; out -> mLOG . mX [ 96ULL ] = Battery1_n_v ;
out -> mLOG . mX [ 97ULL ] = Buck_Converter_S1_diode_i ; out -> mLOG . mX [
98ULL ] = t107 -> mX . mX [ 40ULL ] ; out -> mLOG . mX [ 99ULL ] =
Battery1_n_v ; out -> mLOG . mX [ 100ULL ] = t107 -> mX . mX [ 53ULL ] ; out
-> mLOG . mX [ 102ULL ] = t107 -> mX . mX [ 40ULL ] ; out -> mLOG . mX [
103ULL ] = Buck_Converter_S1_diode_i ; out -> mLOG . mX [ 104ULL ] =
Buck_Converter_S1_diode_i ; out -> mLOG . mX [ 105ULL ] =
Buck_Converter_S1_diode_i ; out -> mLOG . mX [ 106ULL ] = t107 -> mX . mX [
40ULL ] ; out -> mLOG . mX [ 107ULL ] = Battery1_n_v ; out -> mLOG . mX [
108ULL ] = Buck_Converter_S1_diode_i * Buck_Converter_S1_diode_v_diode *
0.001 * 1000.0 ; out -> mLOG . mX [ 109ULL ] =
Buck_Converter_S1_diode_v_diode ; out -> mLOG . mX [ 110ULL ] =
Buck_Converter_S1_diode_v_diode ; out -> mLOG . mX [ 113ULL ] = t107 -> mU .
mX [ 1ULL ] ; out -> mLOG . mX [ 114ULL ] = t107 -> mX . mX [ 52ULL ] ; out
-> mLOG . mX [ 115ULL ] = Battery1_n_v ; out -> mLOG . mX [ 116ULL ] = t107
-> mX . mX [ 40ULL ] ; out -> mLOG . mX [ 117ULL ] = t107 -> mX . mX [ 52ULL
] * t70 * 0.001 * 1000.0 ; out -> mLOG . mX [ 118ULL ] = t70 ; out -> mLOG .
mX [ 121ULL ] = t107 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 122ULL ] = t107
-> mU . mX [ 1ULL ] ; out -> mLOG . mX [ 123ULL ] = t72 ; out -> mLOG . mX [
124ULL ] = Battery1_n_v ; out -> mLOG . mX [ 125ULL ] = t107 -> mX . mX [
20ULL ] ; out -> mLOG . mX [ 126ULL ] = t73 ; out -> mLOG . mX [ 127ULL ] =
Battery1_n_v ; out -> mLOG . mX [ 128ULL ] = Battery1_p_v ; out -> mLOG . mX
[ 129ULL ] = t73 ; out -> mLOG . mX [ 130ULL ] = t72 ; out -> mLOG . mX [
131ULL ] = Battery1_p_v ; out -> mLOG . mX [ 132ULL ] = Battery1_n_v ; out ->
mLOG . mX [ 133ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 134ULL
] = t107 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [ 135ULL ] = t107 -> mX . mX
[ 31ULL ] ; out -> mLOG . mX [ 136ULL ] = BLDC_private_DphiA ; out -> mLOG .
mX [ 137ULL ] = BLDC_private_DphiA ; out -> mLOG . mX [ 138ULL ] = t107 -> mX
. mX [ 31ULL ] ; out -> mLOG . mX [ 139ULL ] = t107 -> mX . mX [ 15ULL ] ;
out -> mLOG . mX [ 140ULL ] = t107 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [
141ULL ] = - BLDC_torque ; out -> mLOG . mX [ 142ULL ] = - BLDC_torque ; out
-> mLOG . mX [ 143ULL ] = - BLDC_torque ; out -> mLOG . mX [ 144ULL ] = t107
-> mX . mX [ 15ULL ] ; out -> mLOG . mX [ 145ULL ] = t107 -> mX . mX [ 15ULL
] ; out -> mLOG . mX [ 146ULL ] = t107 -> mX . mX [ 37ULL ] ; out -> mLOG .
mX [ 147ULL ] = t107 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [ 148ULL ] = -
BLDC_i_n ; out -> mLOG . mX [ 149ULL ] = t44 ; out -> mLOG . mX [ 150ULL ] =
BLDC_i_n * - 1.0E+9 ; out -> mLOG . mX [ 152ULL ] = t107 -> mX . mX [ 16ULL ]
; out -> mLOG . mX [ 153ULL ] = t107 -> mX . mX [ 15ULL ] ; out -> mLOG . mX
[ 154ULL ] = t107 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [ 155ULL ] = t107
-> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 156ULL ] = t107 -> mX . mX [ 15ULL
] * 9.5492965855137211 ; out -> mLOG . mX [ 157ULL ] = t107 -> mX . mX [
15ULL ] ; out -> mLOG . mX [ 158ULL ] = t107 -> mX . mX [ 17ULL ] ; out ->
mLOG . mX [ 159ULL ] = t107 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [ 160ULL
] = t107 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [ 161ULL ] = t107 -> mX . mX
[ 17ULL ] * 57.295779513082323 ; out -> mLOG . mX [ 162ULL ] = t107 -> mX .
mX [ 17ULL ] ; out -> mLOG . mX [ 163ULL ] = t107 -> mX . mX [ 15ULL ] *
9.5492965855137211 ; out -> mLOG . mX [ 164ULL ] = t107 -> mX . mX [ 15ULL ]
; out -> mLOG . mX [ 165ULL ] = t107 -> mU . mX [ 2ULL ] ; out -> mLOG . mX [
166ULL ] = - t107 -> mX . mX [ 38ULL ] ; out -> mLOG . mX [ 167ULL ] = - t107
-> mX . mX [ 38ULL ] ; out -> mLOG . mX [ 168ULL ] = Battery1_p_v ; out ->
mLOG . mX [ 169ULL ] = Battery1_p_v ; out -> mLOG . mX [ 170ULL ] = - t107 ->
mX . mX [ 38ULL ] ; out -> mLOG . mX [ 171ULL ] = t73 ; out -> mLOG . mX [
172ULL ] = Battery1_n_v ; out -> mLOG . mX [ 173ULL ] = Battery1_p_v ; out ->
mLOG . mX [ 174ULL ] = t73 ; out -> mLOG . mX [ 175ULL ] = Battery1_p_v ; out
-> mLOG . mX [ 176ULL ] = Battery1_n_v ; out -> mLOG . mX [ 177ULL ] =
Battery1_p_v ; out -> mLOG . mX [ 178ULL ] = t107 -> mX . mX [ 21ULL ] ; out
-> mLOG . mX [ 179ULL ] = BLDC_a_v ; out -> mLOG . mX [ 180ULL ] = t107 -> mX
. mX [ 20ULL ] ; out -> mLOG . mX [ 181ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C1_v ; out -> mLOG . mX [ 182ULL ]
= t107 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 184ULL ] = t107 -> mX . mX [
39ULL ] ; out -> mLOG . mX [ 185ULL ] = Battery1_n_v ; out -> mLOG . mX [
186ULL ] = BLDC_a_v ; out -> mLOG . mX [ 187ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C2_v ; out -> mLOG . mX [ 188ULL ]
= t107 -> mX . mX [ 10ULL ] ; out -> mLOG . mX [ 190ULL ] = t107 -> mX . mX [
25ULL ] ; out -> mLOG . mX [ 191ULL ] = BLDC_b_v ; out -> mLOG . mX [ 192ULL
] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 193ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C3_v ; out -> mLOG . mX [ 194ULL ]
= t107 -> mX . mX [ 2ULL ] ; out -> mLOG . mX [ 196ULL ] = t107 -> mX . mX [
41ULL ] ; out -> mLOG . mX [ 197ULL ] = Battery1_n_v ; out -> mLOG . mX [
198ULL ] = BLDC_b_v ; out -> mLOG . mX [ 199ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C4_v ; out -> mLOG . mX [ 200ULL ]
= t107 -> mX . mX [ 18ULL ] ; out -> mLOG . mX [ 202ULL ] = t107 -> mX . mX [
26ULL ] ; out -> mLOG . mX [ 203ULL ] = BLDC_private_DphiA ; out -> mLOG . mX
[ 204ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 205ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C5_v ; out -> mLOG . mX [ 206ULL ]
= t107 -> mX . mX [ 3ULL ] ; out -> mLOG . mX [ 208ULL ] = t107 -> mX . mX [
42ULL ] ; out -> mLOG . mX [ 209ULL ] = Battery1_n_v ; out -> mLOG . mX [
210ULL ] = BLDC_private_DphiA ; out -> mLOG . mX [ 211ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C6_v ; out -> mLOG . mX [ 212ULL ]
= t107 -> mX . mX [ 19ULL ] ; for ( t39 = 0ULL ; t39 < 12ULL ; t39 ++ ) { out
-> mLOG . mX [ t39 + 214ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t39 ] ; } out -> mLOG . mX [
226ULL ] = t107 -> mU . mX [ 8ULL ] ; out -> mLOG . mX [ 227ULL ] = t107 ->
mU . mX [ 8ULL ] ; out -> mLOG . mX [ 228ULL ] = t107 -> mU . mX [ 3ULL ] ;
out -> mLOG . mX [ 229ULL ] = t107 -> mU . mX [ 3ULL ] ; out -> mLOG . mX [
230ULL ] = t107 -> mU . mX [ 4ULL ] ; out -> mLOG . mX [ 231ULL ] = t107 ->
mU . mX [ 4ULL ] ; out -> mLOG . mX [ 232ULL ] = t107 -> mU . mX [ 5ULL ] ;
out -> mLOG . mX [ 233ULL ] = t107 -> mU . mX [ 5ULL ] ; out -> mLOG . mX [
234ULL ] = t107 -> mU . mX [ 6ULL ] ; out -> mLOG . mX [ 235ULL ] = t107 ->
mU . mX [ 6ULL ] ; out -> mLOG . mX [ 236ULL ] = t107 -> mU . mX [ 7ULL ] ;
out -> mLOG . mX [ 237ULL ] = t107 -> mU . mX [ 7ULL ] ; for ( t39 = 0ULL ;
t39 < 12ULL ; t39 ++ ) { out -> mLOG . mX [ t39 + 238ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t39 ] ; } out -> mLOG . mX [
250ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 251ULL ] = t107 ->
mU . mX [ 8ULL ] ; out -> mLOG . mX [ 252ULL ] = BLDC_a_v ; out -> mLOG . mX
[ 253ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out ->
mLOG . mX [ 254ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 255ULL
] = BLDC_a_v ; out -> mLOG . mX [ 256ULL ] = t107 -> mX . mX [ 56ULL ] ; out
-> mLOG . mX [ 257ULL ] = - t107 -> mX . mX [ 0ULL ] + t107 -> mX . mX [
21ULL ] * - 0.1 ; out -> mLOG . mX [ 258ULL ] = t107 -> mX . mX [ 20ULL ] ;
out -> mLOG . mX [ 259ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mLOG . mX [
260ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out ->
mLOG . mX [ 261ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i
; out -> mLOG . mX [ 262ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX
[ 263ULL ] = BLDC_a_v ; out -> mLOG . mX [ 264ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode * 0.001 * 1000.0
; out -> mLOG . mX [ 265ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode ; out -> mLOG .
mX [ 266ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_v_diode ;
out -> mLOG . mX [ 267ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i * 0.001 +
0.69999999299999993 ; out -> mLOG . mX [ 268ULL ] = t107 -> mX . mX [ 55ULL ]
- Three_Phase_Inverter_Converter_Three_Phase_Q1_diode_i ; out -> mLOG . mX [
269ULL ] = t107 -> mU . mX [ 8ULL ] ; out -> mLOG . mX [ 270ULL ] = t107 ->
mX . mX [ 55ULL ] ; out -> mLOG . mX [ 271ULL ] = BLDC_a_v ; out -> mLOG . mX
[ 272ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 273ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C1_v * t107 -> mX . mX [ 55ULL ] *
0.001 * 1000.0 ; out -> mLOG . mX [ 274ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C1_v ; out -> mLOG . mX [ 275ULL ]
= t107 -> mU . mX [ 8ULL ] ; out -> mLOG . mX [ 276ULL ] = t107 -> mX . mX [
20ULL ] - BLDC_a_v ; out -> mLOG . mX [ 277ULL ] = BLDC_a_v ; out -> mLOG .
mX [ 278ULL ] = t107 -> mU . mX [ 3ULL ] ; out -> mLOG . mX [ 279ULL ] =
Battery1_n_v ; out -> mLOG . mX [ 280ULL ] = t107 -> mX . mX [ 43ULL ] ; out
-> mLOG . mX [ 281ULL ] = BLDC_a_v ; out -> mLOG . mX [ 282ULL ] =
Battery1_n_v ; out -> mLOG . mX [ 283ULL ] = t107 -> mX . mX [ 57ULL ] ; out
-> mLOG . mX [ 284ULL ] = - t107 -> mX . mX [ 10ULL ] + t107 -> mX . mX [
39ULL ] * - 0.1 ; out -> mLOG . mX [ 285ULL ] = BLDC_a_v ; out -> mLOG . mX [
286ULL ] = t107 -> mX . mX [ 43ULL ] ; out -> mLOG . mX [ 287ULL ] = t107 ->
mX . mX [ 43ULL ] ; out -> mLOG . mX [ 288ULL ] = t107 -> mX . mX [ 43ULL ] ;
out -> mLOG . mX [ 289ULL ] = BLDC_a_v ; out -> mLOG . mX [ 290ULL ] =
Battery1_n_v ; out -> mLOG . mX [ 291ULL ] = t107 -> mX . mX [ 43ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode * 0.001 * 1000.0
; out -> mLOG . mX [ 292ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode ; out -> mLOG .
mX [ 293ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q2_diode_v_diode ;
out -> mLOG . mX [ 294ULL ] = t107 -> mX . mX [ 43ULL ] * 0.001 +
0.69999999299999993 ; out -> mLOG . mX [ 295ULL ] = t107 -> mX . mX [ 44ULL ]
- t107 -> mX . mX [ 43ULL ] ; out -> mLOG . mX [ 296ULL ] = t107 -> mU . mX [
3ULL ] ; out -> mLOG . mX [ 297ULL ] = t107 -> mX . mX [ 44ULL ] ; out ->
mLOG . mX [ 298ULL ] = Battery1_n_v ; out -> mLOG . mX [ 299ULL ] = BLDC_a_v
; out -> mLOG . mX [ 300ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C2_v * t107 -> mX . mX [ 44ULL ] *
0.001 * 1000.0 ; out -> mLOG . mX [ 301ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C2_v ; out -> mLOG . mX [ 302ULL ]
= t107 -> mU . mX [ 3ULL ] ; out -> mLOG . mX [ 303ULL ] = BLDC_a_v -
Battery1_n_v ; out -> mLOG . mX [ 304ULL ] = t107 -> mX . mX [ 20ULL ] ; out
-> mLOG . mX [ 305ULL ] = t107 -> mU . mX [ 4ULL ] ; out -> mLOG . mX [
306ULL ] = BLDC_b_v ; out -> mLOG . mX [ 307ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mLOG . mX [
308ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 309ULL ] = BLDC_b_v
; out -> mLOG . mX [ 310ULL ] = t107 -> mX . mX [ 59ULL ] ; out -> mLOG . mX
[ 311ULL ] = - t107 -> mX . mX [ 2ULL ] + t107 -> mX . mX [ 25ULL ] * - 0.1 ;
out -> mLOG . mX [ 312ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [
313ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out ->
mLOG . mX [ 314ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i
; out -> mLOG . mX [ 315ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mLOG . mX [
316ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 317ULL ] = BLDC_b_v
; out -> mLOG . mX [ 318ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode * 0.001 * 1000.0
; out -> mLOG . mX [ 319ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode ; out -> mLOG .
mX [ 320ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_v_diode ;
out -> mLOG . mX [ 321ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i * 0.001 +
0.69999999299999993 ; out -> mLOG . mX [ 322ULL ] = t107 -> mX . mX [ 58ULL ]
- Three_Phase_Inverter_Converter_Three_Phase_Q3_diode_i ; out -> mLOG . mX [
323ULL ] = t107 -> mU . mX [ 4ULL ] ; out -> mLOG . mX [ 324ULL ] = t107 ->
mX . mX [ 58ULL ] ; out -> mLOG . mX [ 325ULL ] = BLDC_b_v ; out -> mLOG . mX
[ 326ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 327ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C3_v * t107 -> mX . mX [ 58ULL ] *
0.001 * 1000.0 ; out -> mLOG . mX [ 328ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C3_v ; out -> mLOG . mX [ 329ULL ]
= t107 -> mU . mX [ 4ULL ] ; out -> mLOG . mX [ 330ULL ] = t107 -> mX . mX [
20ULL ] - BLDC_b_v ; out -> mLOG . mX [ 331ULL ] = BLDC_b_v ; out -> mLOG .
mX [ 332ULL ] = t107 -> mU . mX [ 5ULL ] ; out -> mLOG . mX [ 333ULL ] =
Battery1_n_v ; out -> mLOG . mX [ 334ULL ] = t107 -> mX . mX [ 45ULL ] ; out
-> mLOG . mX [ 335ULL ] = BLDC_b_v ; out -> mLOG . mX [ 336ULL ] =
Battery1_n_v ; out -> mLOG . mX [ 337ULL ] = t107 -> mX . mX [ 60ULL ] ; out
-> mLOG . mX [ 338ULL ] = ( ( ( ( - t107 -> mX . mX [ 0ULL ] - t107 -> mX .
mX [ 10ULL ] ) + t107 -> mX . mX [ 21ULL ] * - 0.1 ) + t107 -> mX . mX [
39ULL ] * - 0.1 ) + t107 -> mX . mX [ 25ULL ] * 0.1 ) + t107 -> mX . mX [
2ULL ] ; out -> mLOG . mX [ 339ULL ] = BLDC_b_v ; out -> mLOG . mX [ 340ULL ]
= t107 -> mX . mX [ 45ULL ] ; out -> mLOG . mX [ 341ULL ] = t107 -> mX . mX [
45ULL ] ; out -> mLOG . mX [ 342ULL ] = t107 -> mX . mX [ 45ULL ] ; out ->
mLOG . mX [ 343ULL ] = BLDC_b_v ; out -> mLOG . mX [ 344ULL ] = Battery1_n_v
; out -> mLOG . mX [ 345ULL ] = t107 -> mX . mX [ 45ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode * 0.001 * 1000.0
; out -> mLOG . mX [ 346ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode ; out -> mLOG .
mX [ 347ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q4_diode_v_diode ;
out -> mLOG . mX [ 348ULL ] = t107 -> mX . mX [ 45ULL ] * 0.001 +
0.69999999299999993 ; out -> mLOG . mX [ 349ULL ] = t107 -> mX . mX [ 46ULL ]
- t107 -> mX . mX [ 45ULL ] ; out -> mLOG . mX [ 350ULL ] = t107 -> mU . mX [
5ULL ] ; out -> mLOG . mX [ 351ULL ] = t107 -> mX . mX [ 46ULL ] ; out ->
mLOG . mX [ 352ULL ] = Battery1_n_v ; out -> mLOG . mX [ 353ULL ] = BLDC_b_v
; out -> mLOG . mX [ 354ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C4_v * t107 -> mX . mX [ 46ULL ] *
0.001 * 1000.0 ; out -> mLOG . mX [ 355ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C4_v ; out -> mLOG . mX [ 356ULL ]
= t107 -> mU . mX [ 5ULL ] ; out -> mLOG . mX [ 357ULL ] = BLDC_b_v -
Battery1_n_v ; out -> mLOG . mX [ 358ULL ] = t107 -> mX . mX [ 20ULL ] ; out
-> mLOG . mX [ 359ULL ] = t107 -> mU . mX [ 6ULL ] ; out -> mLOG . mX [
360ULL ] = BLDC_private_DphiA ; out -> mLOG . mX [ 361ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mLOG . mX [
362ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 363ULL ] =
BLDC_private_DphiA ; out -> mLOG . mX [ 364ULL ] = t107 -> mX . mX [ 62ULL ]
; out -> mLOG . mX [ 365ULL ] = - t107 -> mX . mX [ 3ULL ] + t107 -> mX . mX
[ 26ULL ] * - 0.1 ; out -> mLOG . mX [ 366ULL ] = t107 -> mX . mX [ 20ULL ] ;
out -> mLOG . mX [ 367ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mLOG . mX [
368ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out ->
mLOG . mX [ 369ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i
; out -> mLOG . mX [ 370ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX
[ 371ULL ] = BLDC_private_DphiA ; out -> mLOG . mX [ 372ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i *
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode * 0.001 * 1000.0
; out -> mLOG . mX [ 373ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode ; out -> mLOG .
mX [ 374ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_v_diode ;
out -> mLOG . mX [ 375ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i * 0.001 +
0.69999999299999993 ; out -> mLOG . mX [ 376ULL ] = t107 -> mX . mX [ 61ULL ]
- Three_Phase_Inverter_Converter_Three_Phase_Q5_diode_i ; out -> mLOG . mX [
377ULL ] = t107 -> mU . mX [ 6ULL ] ; out -> mLOG . mX [ 378ULL ] = t107 ->
mX . mX [ 61ULL ] ; out -> mLOG . mX [ 379ULL ] = BLDC_private_DphiA ; out ->
mLOG . mX [ 380ULL ] = t107 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 381ULL
] = Three_Phase_Inverter_Converter_Three_Phase_C5_v * t107 -> mX . mX [ 61ULL
] * 0.001 * 1000.0 ; out -> mLOG . mX [ 382ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C5_v ; out -> mLOG . mX [ 383ULL ]
= t107 -> mU . mX [ 6ULL ] ; out -> mLOG . mX [ 384ULL ] = t107 -> mX . mX [
20ULL ] - BLDC_private_DphiA ; out -> mLOG . mX [ 385ULL ] =
BLDC_private_DphiA ; out -> mLOG . mX [ 386ULL ] = t107 -> mU . mX [ 7ULL ] ;
out -> mLOG . mX [ 387ULL ] = Battery1_n_v ; out -> mLOG . mX [ 388ULL ] =
t107 -> mX . mX [ 47ULL ] ; out -> mLOG . mX [ 389ULL ] = BLDC_private_DphiA
; out -> mLOG . mX [ 390ULL ] = Battery1_n_v ; out -> mLOG . mX [ 391ULL ] =
t107 -> mX . mX [ 63ULL ] ; out -> mLOG . mX [ 392ULL ] = ( ( ( ( - t107 ->
mX . mX [ 0ULL ] - t107 -> mX . mX [ 10ULL ] ) + t107 -> mX . mX [ 21ULL ] *
- 0.1 ) + t107 -> mX . mX [ 39ULL ] * - 0.1 ) + t107 -> mX . mX [ 26ULL ] *
0.1 ) + t107 -> mX . mX [ 3ULL ] ; out -> mLOG . mX [ 393ULL ] =
BLDC_private_DphiA ; out -> mLOG . mX [ 394ULL ] = t107 -> mX . mX [ 47ULL ]
; out -> mLOG . mX [ 395ULL ] = t107 -> mX . mX [ 47ULL ] ; out -> mLOG . mX
[ 396ULL ] = t107 -> mX . mX [ 47ULL ] ; out -> mLOG . mX [ 397ULL ] =
BLDC_private_DphiA ; out -> mLOG . mX [ 398ULL ] = Battery1_n_v ; out -> mLOG
. mX [ 399ULL ] = t107 -> mX . mX [ 47ULL ] *
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode * 0.001 * 1000.0
; out -> mLOG . mX [ 400ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode ; out -> mLOG .
mX [ 401ULL ] = Three_Phase_Inverter_Converter_Three_Phase_Q6_diode_v_diode ;
out -> mLOG . mX [ 402ULL ] = t107 -> mX . mX [ 47ULL ] * 0.001 +
0.69999999299999993 ; out -> mLOG . mX [ 403ULL ] = t107 -> mX . mX [ 48ULL ]
- t107 -> mX . mX [ 47ULL ] ; out -> mLOG . mX [ 404ULL ] = t107 -> mU . mX [
7ULL ] ; out -> mLOG . mX [ 405ULL ] = t107 -> mX . mX [ 48ULL ] ; out ->
mLOG . mX [ 406ULL ] = Battery1_n_v ; out -> mLOG . mX [ 407ULL ] =
BLDC_private_DphiA ; out -> mLOG . mX [ 408ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C6_v * t107 -> mX . mX [ 48ULL ] *
0.001 * 1000.0 ; out -> mLOG . mX [ 409ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_C6_v ; out -> mLOG . mX [ 410ULL ]
= t107 -> mU . mX [ 7ULL ] ; out -> mLOG . mX [ 411ULL ] = BLDC_private_DphiA
- Battery1_n_v ; out -> mLOG . mX [ 412ULL ] = BLDC_a_v ; out -> mLOG . mX [
413ULL ] = BLDC_b_v ; out -> mLOG . mX [ 414ULL ] = BLDC_private_DphiA ; out
-> mLOG . mX [ 415ULL ] = Battery1_n_v ; out -> mLOG . mX [ 416ULL ] = t107
-> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 417ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mLOG . mX [ 418ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mLOG . mX [ 419ULL ] = t107 -> mX .
mX [ 20ULL ] ; out -> mLOG . mX [ 420ULL ] = t107 -> mX . mX [ 20ULL ] ; out
-> mLOG . mX [ 421ULL ] = Buck_Converter_Current_Sensor1_I ; out -> mLOG . mX
[ 422ULL ] = BLDC_private_DphiDtheta_idx_0 ; out -> mLOG . mX [ 423ULL ] =
t107 -> mX . mX [ 30ULL ] ; out -> mLOG . mX [ 424ULL ] = t107 -> mX . mX [
31ULL ] ; out -> mLOG . mX [ 425ULL ] = BLDC_a_v ; out -> mLOG . mX [ 426ULL
] = BLDC_a_v ; out -> mLOG . mX [ 427ULL ] = BLDC_b_v ; out -> mLOG . mX [
428ULL ] = BLDC_b_v ; out -> mLOG . mX [ 429ULL ] = BLDC_private_DphiA ; out
-> mLOG . mX [ 430ULL ] = BLDC_private_DphiA ; out -> mLOG . mX [ 431ULL ] =
BLDC_private_DphiDtheta_idx_0 ; out -> mLOG . mX [ 432ULL ] = t107 -> mX . mX
[ 30ULL ] ; out -> mLOG . mX [ 433ULL ] = t107 -> mX . mX [ 31ULL ] ; out ->
mLOG . mX [ 434ULL ] = BLDC_private_DphiDtheta_idx_0 ; out -> mLOG . mX [
435ULL ] = t107 -> mX . mX [ 30ULL ] ; out -> mLOG . mX [ 436ULL ] = t107 ->
mX . mX [ 31ULL ] ; out -> mLOG . mX [ 437ULL ] = t60 ; out -> mLOG . mX [
438ULL ] = t61 ; out -> mLOG . mX [ 439ULL ] = t62 ; out -> mLOG . mX [
440ULL ] = BLDC_a_v ; out -> mLOG . mX [ 441ULL ] = BLDC_b_v ; out -> mLOG .
mX [ 442ULL ] = BLDC_private_DphiA ; out -> mLOG . mX [ 443ULL ] = t60 ; out
-> mLOG . mX [ 444ULL ] = t61 ; out -> mLOG . mX [ 445ULL ] = t62 ; out ->
mLOG . mX [ 446ULL ] = t107 -> mU . mX [ 3ULL ] ; out -> mLOG . mX [ 447ULL ]
= t107 -> mU . mX [ 4ULL ] ; out -> mLOG . mX [ 448ULL ] = t107 -> mU . mX [
5ULL ] ; out -> mLOG . mX [ 449ULL ] = t107 -> mU . mX [ 6ULL ] ; out -> mLOG
. mX [ 450ULL ] = t107 -> mU . mX [ 7ULL ] ; out -> mLOG . mX [ 451ULL ] =
t107 -> mU . mX [ 8ULL ] ; out -> mLOG . mX [ 452ULL ] = t107 -> mU . mX [
8ULL ] ; out -> mLOG . mX [ 453ULL ] = t107 -> mU . mX [ 3ULL ] ; out -> mLOG
. mX [ 454ULL ] = t107 -> mU . mX [ 4ULL ] ; out -> mLOG . mX [ 455ULL ] =
t107 -> mU . mX [ 5ULL ] ; out -> mLOG . mX [ 456ULL ] = t107 -> mU . mX [
6ULL ] ; out -> mLOG . mX [ 457ULL ] = t107 -> mU . mX [ 7ULL ] ; for ( t39 =
0ULL ; t39 < 12ULL ; t39 ++ ) { out -> mLOG . mX [ t39 + 458ULL ] =
Three_Phase_Inverter_Converter_Three_Phase_G_V [ t39 ] ; } out -> mLOG . mX [
470ULL ] = BLDC_a_v ; out -> mLOG . mX [ 471ULL ] = BLDC_b_v ; out -> mLOG .
mX [ 472ULL ] = BLDC_private_DphiA ; out -> mLOG . mX [ 473ULL ] = t107 -> mX
. mX [ 20ULL ] ; out -> mLOG . mX [ 474ULL ] = Battery1_n_v ; out -> mLOG .
mX [ 475ULL ] = t107 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [ 476ULL ] =
t107 -> mU . mX [ 2ULL ] ; out -> mLOG . mX [ 477ULL ] = - t107 -> mU . mX [
2ULL ] ; out -> mLOG . mX [ 478ULL ] = - t107 -> mX . mX [ 15ULL ] ; out ->
mLOG . mX [ 479ULL ] = t105 ; out -> mLOG . mX [ 480ULL ] = t44 ; out -> mLOG
. mX [ 481ULL ] = BLDC_private_DphiA ; out -> mLOG . mX [ 482ULL ] = t105 ;
out -> mLOG . mX [ 483ULL ] = t107 -> mX . mX [ 29ULL ] ; out -> mLOG . mX [
484ULL ] = t107 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 485ULL ] = t107 ->
mX . mX [ 32ULL ] ; out -> mLOG . mX [ 486ULL ] = t107 -> mX . mX [ 33ULL ] ;
out -> mLOG . mX [ 487ULL ] = t107 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [
488ULL ] = t107 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 489ULL ] = t107 ->
mX . mX [ 36ULL ] ; out -> mLOG . mX [ 490ULL ] = t107 -> mX . mX [ 54ULL ] ;
( void ) LC ; ( void ) out ; return 0 ; }
