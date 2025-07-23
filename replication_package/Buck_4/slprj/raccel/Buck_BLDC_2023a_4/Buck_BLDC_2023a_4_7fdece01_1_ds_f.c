#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_f.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_f ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t83 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 8 ] = { 0.027679120537720925 , 0.0 , - 0.027679120537720925 , -
0.027679120537720925 , 0.027679120537720925 , 0.027679120537720925 , 0.0 , -
0.027679120537720925 } ; static real_T _cg_const_2 [ 8 ] = { -
0.52359877559829893 , 0.0 , 0.52359877559829893 , 2.617993877991494 ,
3.6651914291880923 , 5.7595865315812871 , 6.2831853071795862 ,
6.8067840827778854 } ; ETTSf3049b48 t2 ; real_T nonscalar1 [ 8 ] ; real_T
nonscalar2 [ 8 ] ; real_T t37 [ 1 ] ; real_T t44 [ 1 ] ; real_T BLDC_i_a ;
real_T piece0 ; real_T piece6 ; real_T t10 ; real_T t11 ; real_T t12 ; real_T
t13 ; real_T t15 ; real_T t16 ; real_T t17 ; real_T t18 ; real_T t19 ; real_T
t21 ; real_T t22 ; real_T t23 ; real_T t24 ; real_T t25 ; real_T t3 ; real_T
t4 ; real_T t5 ; real_T t55 ; real_T t56 ; real_T t57 ; real_T t58 ; real_T
t59 ; real_T t6 ; real_T t60 ; real_T t61 ; real_T t62 ; real_T t63 ; real_T
t64 ; real_T t65 ; real_T t66 ; real_T t67 ; real_T t69 ; real_T t7 ; real_T
t70 ; real_T t72 ; real_T t73 ; real_T t8 ; real_T t82 ; real_T t9 ; real_T
zc_int6_idx_0 ; size_t t28 [ 1 ] ; size_t t29 [ 1 ] ; ( void ) LC ;
nonscalar1 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar1 [ 1 ] = _cg_const_1 [ 1 ] ;
nonscalar1 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar1 [ 3 ] = _cg_const_1 [ 3 ] ;
nonscalar1 [ 4 ] = _cg_const_1 [ 4 ] ; nonscalar1 [ 5 ] = _cg_const_1 [ 5 ] ;
nonscalar1 [ 6 ] = _cg_const_1 [ 6 ] ; nonscalar1 [ 7 ] = _cg_const_1 [ 7 ] ;
nonscalar2 [ 0 ] = _cg_const_2 [ 0 ] ; nonscalar2 [ 1 ] = _cg_const_2 [ 1 ] ;
nonscalar2 [ 2 ] = _cg_const_2 [ 2 ] ; nonscalar2 [ 3 ] = _cg_const_2 [ 3 ] ;
nonscalar2 [ 4 ] = _cg_const_2 [ 4 ] ; nonscalar2 [ 5 ] = _cg_const_2 [ 5 ] ;
nonscalar2 [ 6 ] = _cg_const_2 [ 6 ] ; nonscalar2 [ 7 ] = _cg_const_2 [ 7 ] ;
BLDC_i_a = t83 -> mX . mX [ 1ULL ] * 23.0 - 1.5707963267948966 ; t57 =
BLDC_i_a ; t58 = BLDC_i_a - 2.0943951023931953 ; t59 = BLDC_i_a +
2.0943951023931953 ; BLDC_i_a = - t83 -> mX . mX [ 30ULL ] - t83 -> mX . mX [
31ULL ] ; t60 = cos ( t57 ) * 0.66666666666666663 ; t61 = cos ( t58 ) *
0.66666666666666663 ; t62 = cos ( t59 ) * 0.66666666666666663 ; t63 = - sin (
t57 ) * 0.66666666666666663 ; t64 = - sin ( t58 ) * 0.66666666666666663 ; t65
= - sin ( t59 ) * 0.66666666666666663 ; t66 = cos ( t57 ) ; t67 = - sin ( t57
) ; t69 = cos ( t58 ) ; t70 = - sin ( t58 ) ; t72 = cos ( t59 ) ; t73 = - sin
( t59 ) ; t55 = t83 -> mX . mX [ 4ULL ] * 0.00013 ; t56 = t83 -> mX . mX [
5ULL ] * 0.00013 ; piece0 = t83 -> mX . mX [ 35ULL ] - BLDC_i_a * 0.12 ;
piece6 = ( ( ( ( - t83 -> mX . mX [ 2ULL ] + t83 -> mX . mX [ 21ULL ] * 0.1 )
+ t83 -> mX . mX [ 25ULL ] * - 0.1 ) + t83 -> mX . mX [ 35ULL ] ) + t83 -> mX
. mX [ 0ULL ] ) - t83 -> mX . mX [ 30ULL ] * 0.12 ; t3 = ( ( ( ( - t83 -> mX
. mX [ 3ULL ] + t83 -> mX . mX [ 21ULL ] * 0.1 ) + t83 -> mX . mX [ 26ULL ] *
- 0.1 ) + t83 -> mX . mX [ 35ULL ] ) + t83 -> mX . mX [ 0ULL ] ) - t83 -> mX
. mX [ 31ULL ] * 0.12 ; t5 = ( t83 -> mX . mX [ 38ULL ] + t83 -> mX . mX [
49ULL ] ) + t83 -> mX . mX [ 50ULL ] ; t4 = ( ( ( ( ( ( - t83 -> mX . mX [
13ULL ] - t83 -> mX . mX [ 20ULL ] ) + t83 -> mX . mX [ 49ULL ] * - 0.2 ) +
t83 -> mX . mX [ 21ULL ] * 0.1 ) + t83 -> mX . mX [ 39ULL ] * 0.1 ) + t83 ->
mX . mX [ 40ULL ] ) + t83 -> mX . mX [ 0ULL ] ) + t83 -> mX . mX [ 10ULL ] ;
t6 = ( ( ( ( ( ( - t83 -> mX . mX [ 0ULL ] - t83 -> mX . mX [ 10ULL ] ) + t83
-> mX . mX [ 49ULL ] * 0.2 ) - t83 -> mX . mX [ 40ULL ] ) + t83 -> mX . mX [
21ULL ] * - 0.1 ) + t83 -> mX . mX [ 39ULL ] * - 0.1 ) + t83 -> mX . mX [
20ULL ] ) + t83 -> mX . mX [ 13ULL ] ; t8 = ( ( ( ( t83 -> mX . mX [ 20ULL ]
* - 1.0E-9 + t83 -> mX . mX [ 40ULL ] * 1.0E-9 ) + t83 -> mX . mX [ 38ULL ] )
+ t83 -> mX . mX [ 49ULL ] ) + t83 -> mX . mX [ 11ULL ] ) + t83 -> mX . mX [
52ULL ] ; t7 = ( ( ( ( - t83 -> mX . mX [ 0ULL ] - t83 -> mX . mX [ 10ULL ] )
- t83 -> mX . mX [ 40ULL ] ) + t83 -> mX . mX [ 21ULL ] * - 0.1 ) + t83 -> mX
. mX [ 39ULL ] * - 0.1 ) + t83 -> mX . mX [ 20ULL ] ; t9 = ( ( ( ( - t83 ->
mX . mX [ 20ULL ] + t83 -> mX . mX [ 21ULL ] * 0.1 ) + t83 -> mX . mX [ 39ULL
] * 0.1 ) + t83 -> mX . mX [ 40ULL ] ) + t83 -> mX . mX [ 0ULL ] ) + t83 ->
mX . mX [ 10ULL ] ; t12 = t83 -> mX . mX [ 21ULL ] * 0.1 + t83 -> mX . mX [
0ULL ] ; t15 = t83 -> mX . mX [ 39ULL ] * 0.1 + t83 -> mX . mX [ 10ULL ] ;
t18 = t83 -> mX . mX [ 25ULL ] * 0.1 + t83 -> mX . mX [ 2ULL ] ; t21 = ( ( (
( - t83 -> mX . mX [ 2ULL ] + t83 -> mX . mX [ 21ULL ] * 0.1 ) + t83 -> mX .
mX [ 39ULL ] * 0.1 ) + t83 -> mX . mX [ 25ULL ] * - 0.1 ) + t83 -> mX . mX [
0ULL ] ) + t83 -> mX . mX [ 10ULL ] ; t24 = t83 -> mX . mX [ 26ULL ] * 0.1 +
t83 -> mX . mX [ 3ULL ] ; t82 = ( ( ( ( - t83 -> mX . mX [ 3ULL ] + t83 -> mX
. mX [ 21ULL ] * 0.1 ) + t83 -> mX . mX [ 39ULL ] * 0.1 ) + t83 -> mX . mX [
26ULL ] * - 0.1 ) + t83 -> mX . mX [ 0ULL ] ) + t83 -> mX . mX [ 10ULL ] ;
t11 = ( ( ( ( ( - t83 -> mX . mX [ 39ULL ] - t83 -> mX . mX [ 44ULL ] ) + t83
-> mX . mX [ 30ULL ] ) + t83 -> mX . mX [ 31ULL ] ) + t83 -> mX . mX [ 21ULL
] ) + t83 -> mX . mX [ 55ULL ] ) + t83 -> mX . mX [ 43ULL ] ; t10 = - t83 ->
mX . mX [ 0ULL ] + t83 -> mX . mX [ 21ULL ] * - 0.1 ; t13 = - t83 -> mX . mX
[ 10ULL ] + t83 -> mX . mX [ 39ULL ] * - 0.1 ; t17 = ( ( ( ( - t83 -> mX . mX
[ 30ULL ] - t83 -> mX . mX [ 41ULL ] ) - t83 -> mX . mX [ 46ULL ] ) + t83 ->
mX . mX [ 25ULL ] ) + t83 -> mX . mX [ 58ULL ] ) + t83 -> mX . mX [ 45ULL ] ;
t16 = - t83 -> mX . mX [ 2ULL ] + t83 -> mX . mX [ 25ULL ] * - 0.1 ; t19 = (
( ( ( - t83 -> mX . mX [ 0ULL ] - t83 -> mX . mX [ 10ULL ] ) + t83 -> mX . mX
[ 21ULL ] * - 0.1 ) + t83 -> mX . mX [ 39ULL ] * - 0.1 ) + t83 -> mX . mX [
25ULL ] * 0.1 ) + t83 -> mX . mX [ 2ULL ] ; t23 = ( ( ( ( - t83 -> mX . mX [
31ULL ] - t83 -> mX . mX [ 42ULL ] ) - t83 -> mX . mX [ 48ULL ] ) + t83 -> mX
. mX [ 26ULL ] ) + t83 -> mX . mX [ 61ULL ] ) + t83 -> mX . mX [ 47ULL ] ;
t22 = - t83 -> mX . mX [ 3ULL ] + t83 -> mX . mX [ 26ULL ] * - 0.1 ; t25 = (
( ( ( - t83 -> mX . mX [ 0ULL ] - t83 -> mX . mX [ 10ULL ] ) + t83 -> mX . mX
[ 21ULL ] * - 0.1 ) + t83 -> mX . mX [ 39ULL ] * - 0.1 ) + t83 -> mX . mX [
26ULL ] * 0.1 ) + t83 -> mX . mX [ 3ULL ] ; t37 [ 0ULL ] = ( atan2 ( fabs ( -
sin ( t57 ) ) , - cos ( t57 ) ) * ( real_T ) ( t83 -> mM . mX [ 0ULL ] != 0 )
+ - atan2 ( fabs ( - sin ( t57 ) ) , - cos ( t57 ) ) * ( real_T ) ( t83 -> mM
. mX [ 0ULL ] == 0 ) ) + 3.1415926535897931 ; t28 [ 0 ] = 8ULL ; t29 [ 0 ] =
1ULL ; tlu2_linear_nearest_prelookup ( & t2 . mField0 [ 0ULL ] , & t2 .
mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t37 [
0ULL ] , & t28 [ 0ULL ] , & t29 [ 0ULL ] ) ; tlu2_1d_linear_nearest_value ( &
t44 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , &
nonscalar1 [ 0ULL ] , & t28 [ 0ULL ] , & t29 [ 0ULL ] ) ; zc_int6_idx_0 = t44
[ 0ULL ] ; t37 [ 0ULL ] = ( atan2 ( fabs ( - sin ( t58 ) ) , - cos ( t58 ) )
* ( real_T ) ( t83 -> mM . mX [ 1ULL ] != 0 ) + - atan2 ( fabs ( - sin ( t58
) ) , - cos ( t58 ) ) * ( real_T ) ( t83 -> mM . mX [ 1ULL ] == 0 ) ) +
3.1415926535897931 ; tlu2_linear_nearest_prelookup ( & t2 . mField0 [ 0ULL ]
, & t2 . mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] ,
& t37 [ 0ULL ] , & t28 [ 0ULL ] , & t29 [ 0ULL ] ) ;
tlu2_1d_linear_nearest_value ( & t44 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , &
t2 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t28 [ 0ULL ] , & t29 [ 0ULL
] ) ; t37 [ 0ULL ] = ( atan2 ( fabs ( - sin ( t59 ) ) , - cos ( t59 ) ) * (
real_T ) ( t83 -> mM . mX [ 2ULL ] != 0 ) + - atan2 ( fabs ( - sin ( t59 ) )
, - cos ( t59 ) ) * ( real_T ) ( t83 -> mM . mX [ 2ULL ] == 0 ) ) +
3.1415926535897931 ; tlu2_linear_nearest_prelookup ( & t2 . mField0 [ 0ULL ]
, & t2 . mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] ,
& t37 [ 0ULL ] , & t28 [ 0ULL ] , & t29 [ 0ULL ] ) ;
tlu2_1d_linear_nearest_value ( & t37 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , &
t2 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t28 [ 0ULL ] , & t29 [ 0ULL
] ) ; if ( t83 -> mM . mX [ 12ULL ] != 0 ) { out -> mF . mX [ 34ULL ] = t4 -
( t83 -> mX . mX [ 51ULL ] + 0.1 ) ; } else { out -> mF . mX [ 34ULL ] = t4 -
( t83 -> mX . mX [ 51ULL ] * 0.001 + 0.1 ) ; } if ( t83 -> mM . mX [ 12ULL ]
!= 0 ) { out -> mF . mX [ 35ULL ] = t5 - ( t83 -> mX . mX [ 51ULL ] * 1.0E-5
+ 1.0000000000000002E-6 ) ; } else { out -> mF . mX [ 35ULL ] = t5 - ( t83 ->
mX . mX [ 51ULL ] + 1.0000000000000002E-6 ) ; } if ( t83 -> mM . mX [ 13ULL ]
!= 0 ) { out -> mF . mX [ 36ULL ] = t6 - t83 -> mX . mX [ 50ULL ] * 0.001 ; }
else { out -> mF . mX [ 36ULL ] = t6 * 1.0E-6 - t83 -> mX . mX [ 50ULL ] ; }
if ( t83 -> mM . mX [ 14ULL ] != 0 ) { out -> mF . mX [ 37ULL ] = t7 - ( t83
-> mX . mX [ 53ULL ] + 0.1 ) ; } else { out -> mF . mX [ 37ULL ] = t7 - ( t83
-> mX . mX [ 53ULL ] * 0.001 + 0.1 ) ; } if ( t83 -> mM . mX [ 14ULL ] != 0 )
{ out -> mF . mX [ 38ULL ] = t8 - ( t83 -> mX . mX [ 53ULL ] * 1.0E-5 +
1.0000000000000002E-6 ) ; } else { out -> mF . mX [ 38ULL ] = t8 - ( t83 ->
mX . mX [ 53ULL ] + 1.0000000000000002E-6 ) ; } if ( t83 -> mM . mX [ 15ULL ]
!= 0 ) { out -> mF . mX [ 39ULL ] = t9 - t83 -> mX . mX [ 52ULL ] * 0.001 ; }
else { out -> mF . mX [ 39ULL ] = t9 * 1.0E-6 - t83 -> mX . mX [ 52ULL ] ; }
if ( t83 -> mM . mX [ 16ULL ] != 0 ) { out -> mF . mX [ 42ULL ] = t10 - ( t83
-> mX . mX [ 56ULL ] + 0.7 ) ; } else { out -> mF . mX [ 42ULL ] = t10 - (
t83 -> mX . mX [ 56ULL ] * 0.001 + 0.7 ) ; } if ( t83 -> mM . mX [ 16ULL ] !=
0 ) { out -> mF . mX [ 43ULL ] = t11 - ( t83 -> mX . mX [ 56ULL ] * 1.0E-5 +
7.0E-6 ) ; } else { out -> mF . mX [ 43ULL ] = t11 - ( t83 -> mX . mX [ 56ULL
] + 7.0E-6 ) ; } if ( t83 -> mM . mX [ 17ULL ] != 0 ) { out -> mF . mX [
44ULL ] = t12 - t83 -> mX . mX [ 55ULL ] * 0.001 ; } else { out -> mF . mX [
44ULL ] = t12 * 0.001 - t83 -> mX . mX [ 55ULL ] ; } if ( t83 -> mM . mX [
18ULL ] != 0 ) { out -> mF . mX [ 45ULL ] = t13 - ( t83 -> mX . mX [ 57ULL ]
+ 0.7 ) ; } else { out -> mF . mX [ 45ULL ] = t13 - ( t83 -> mX . mX [ 57ULL
] * 0.001 + 0.7 ) ; } if ( t83 -> mM . mX [ 18ULL ] != 0 ) { out -> mF . mX [
46ULL ] = t83 -> mX . mX [ 43ULL ] - ( t83 -> mX . mX [ 57ULL ] * 1.0E-5 +
7.0E-6 ) ; } else { out -> mF . mX [ 46ULL ] = t83 -> mX . mX [ 43ULL ] - (
t83 -> mX . mX [ 57ULL ] + 7.0E-6 ) ; } if ( t83 -> mM . mX [ 3ULL ] != 0 ) {
out -> mF . mX [ 47ULL ] = t15 - t83 -> mX . mX [ 44ULL ] * 0.001 ; } else {
out -> mF . mX [ 47ULL ] = t15 * 0.001 - t83 -> mX . mX [ 44ULL ] ; } if (
t83 -> mM . mX [ 4ULL ] != 0 ) { out -> mF . mX [ 48ULL ] = t16 - ( t83 -> mX
. mX [ 59ULL ] + 0.7 ) ; } else { out -> mF . mX [ 48ULL ] = t16 - ( t83 ->
mX . mX [ 59ULL ] * 0.001 + 0.7 ) ; } if ( t83 -> mM . mX [ 4ULL ] != 0 ) {
out -> mF . mX [ 49ULL ] = t17 - ( t83 -> mX . mX [ 59ULL ] * 1.0E-5 + 7.0E-6
) ; } else { out -> mF . mX [ 49ULL ] = t17 - ( t83 -> mX . mX [ 59ULL ] +
7.0E-6 ) ; } if ( t83 -> mM . mX [ 5ULL ] != 0 ) { out -> mF . mX [ 50ULL ] =
t18 - t83 -> mX . mX [ 58ULL ] * 0.001 ; } else { out -> mF . mX [ 50ULL ] =
t18 * 0.001 - t83 -> mX . mX [ 58ULL ] ; } if ( t83 -> mM . mX [ 6ULL ] != 0
) { out -> mF . mX [ 51ULL ] = t19 - ( t83 -> mX . mX [ 60ULL ] + 0.7 ) ; }
else { out -> mF . mX [ 51ULL ] = t19 - ( t83 -> mX . mX [ 60ULL ] * 0.001 +
0.7 ) ; } if ( t83 -> mM . mX [ 6ULL ] != 0 ) { out -> mF . mX [ 52ULL ] =
t83 -> mX . mX [ 45ULL ] - ( t83 -> mX . mX [ 60ULL ] * 1.0E-5 + 7.0E-6 ) ; }
else { out -> mF . mX [ 52ULL ] = t83 -> mX . mX [ 45ULL ] - ( t83 -> mX . mX
[ 60ULL ] + 7.0E-6 ) ; } if ( t83 -> mM . mX [ 7ULL ] != 0 ) { out -> mF . mX
[ 53ULL ] = t21 - t83 -> mX . mX [ 46ULL ] * 0.001 ; } else { out -> mF . mX
[ 53ULL ] = t21 * 0.001 - t83 -> mX . mX [ 46ULL ] ; } if ( t83 -> mM . mX [
8ULL ] != 0 ) { out -> mF . mX [ 54ULL ] = t22 - ( t83 -> mX . mX [ 62ULL ] +
0.7 ) ; } else { out -> mF . mX [ 54ULL ] = t22 - ( t83 -> mX . mX [ 62ULL ]
* 0.001 + 0.7 ) ; } if ( t83 -> mM . mX [ 8ULL ] != 0 ) { out -> mF . mX [
55ULL ] = t23 - ( t83 -> mX . mX [ 62ULL ] * 1.0E-5 + 7.0E-6 ) ; } else { out
-> mF . mX [ 55ULL ] = t23 - ( t83 -> mX . mX [ 62ULL ] + 7.0E-6 ) ; } if (
t83 -> mM . mX [ 9ULL ] != 0 ) { out -> mF . mX [ 56ULL ] = t24 - t83 -> mX .
mX [ 61ULL ] * 0.001 ; } else { out -> mF . mX [ 56ULL ] = t24 * 0.001 - t83
-> mX . mX [ 61ULL ] ; } if ( t83 -> mM . mX [ 10ULL ] != 0 ) { out -> mF .
mX [ 57ULL ] = t25 - ( t83 -> mX . mX [ 63ULL ] + 0.7 ) ; } else { out -> mF
. mX [ 57ULL ] = t25 - ( t83 -> mX . mX [ 63ULL ] * 0.001 + 0.7 ) ; } if (
t83 -> mM . mX [ 10ULL ] != 0 ) { out -> mF . mX [ 58ULL ] = t83 -> mX . mX [
47ULL ] - ( t83 -> mX . mX [ 63ULL ] * 1.0E-5 + 7.0E-6 ) ; } else { out -> mF
. mX [ 58ULL ] = t83 -> mX . mX [ 47ULL ] - ( t83 -> mX . mX [ 63ULL ] +
7.0E-6 ) ; } if ( t83 -> mM . mX [ 11ULL ] != 0 ) { out -> mF . mX [ 59ULL ]
= t82 - t83 -> mX . mX [ 48ULL ] * 0.001 ; } else { out -> mF . mX [ 59ULL ]
= t82 * 0.001 - t83 -> mX . mX [ 48ULL ] ; } out -> mF . mX [ 0ULL ] = - 0.0
; out -> mF . mX [ 1ULL ] = - 0.0 ; out -> mF . mX [ 2ULL ] = - 0.0 ; out ->
mF . mX [ 3ULL ] = - 0.0 ; out -> mF . mX [ 4ULL ] = - 0.0 ; out -> mF . mX [
5ULL ] = - 0.0 ; out -> mF . mX [ 6ULL ] = - 0.0 ; out -> mF . mX [ 7ULL ] =
- 0.0 ; out -> mF . mX [ 8ULL ] = - 48.0 ; out -> mF . mX [ 9ULL ] = - 0.0 ;
out -> mF . mX [ 10ULL ] = - 0.0 ; out -> mF . mX [ 11ULL ] = - 0.0 ; out ->
mF . mX [ 12ULL ] = - 0.0 ; out -> mF . mX [ 13ULL ] = - 0.0 ; out -> mF . mX
[ 14ULL ] = - 0.0 ; out -> mF . mX [ 15ULL ] = - 0.0 ; out -> mF . mX [ 16ULL
] = - 0.0 ; out -> mF . mX [ 17ULL ] = zc_int6_idx_0 * t83 -> mX . mX [ 23ULL
] * 23.0 ; out -> mF . mX [ 18ULL ] = t44 [ 0ULL ] * t83 -> mX . mX [ 23ULL ]
* 23.0 ; out -> mF . mX [ 19ULL ] = t37 [ 0ULL ] * t83 -> mX . mX [ 23ULL ] *
23.0 ; out -> mF . mX [ 20ULL ] = 0.0 ; out -> mF . mX [ 21ULL ] = ( ( ( (
piece0 - zc_int6_idx_0 * t83 -> mX . mX [ 23ULL ] * 23.0 ) * t60 + ( piece6 -
t44 [ 0ULL ] * t83 -> mX . mX [ 23ULL ] * 23.0 ) * t61 ) + ( t3 - t37 [ 0ULL
] * t83 -> mX . mX [ 23ULL ] * 23.0 ) * t62 ) - ( - ( t83 -> mX . mX [ 23ULL
] * t56 * 23.0 ) ) ) / 0.57735026918962584 ; out -> mF . mX [ 22ULL ] = ( ( (
( piece0 - zc_int6_idx_0 * t83 -> mX . mX [ 23ULL ] * 23.0 ) * t63 + ( piece6
- t44 [ 0ULL ] * t83 -> mX . mX [ 23ULL ] * 23.0 ) * t64 ) + ( t3 - t37 [
0ULL ] * t83 -> mX . mX [ 23ULL ] * 23.0 ) * t65 ) - t83 -> mX . mX [ 23ULL ]
* t55 * 23.0 ) / 0.84882636315677429 ; out -> mF . mX [ 23ULL ] = ( ( - (
zc_int6_idx_0 * t83 -> mX . mX [ 23ULL ] * 23.0 ) * 0.33333333333333331 + - (
t44 [ 0ULL ] * t83 -> mX . mX [ 23ULL ] * 23.0 ) * 0.33333333333333331 ) + -
( t37 [ 0ULL ] * t83 -> mX . mX [ 23ULL ] * 23.0 ) * 0.33333333333333331 ) /
0.33333333333333331 ; out -> mF . mX [ 24ULL ] = 0.0 ; out -> mF . mX [ 25ULL
] = 0.0 ; out -> mF . mX [ 26ULL ] = 0.0 ; out -> mF . mX [ 27ULL ] = - ( ( (
( ( t83 -> mX . mX [ 5ULL ] * t55 - t83 -> mX . mX [ 4ULL ] * t56 ) * 1.5 +
BLDC_i_a * zc_int6_idx_0 ) + t44 [ 0ULL ] * t83 -> mX . mX [ 30ULL ] ) + t37
[ 0ULL ] * t83 -> mX . mX [ 31ULL ] ) * 23.0 ) ; out -> mF . mX [ 28ULL ] =
0.0 ; out -> mF . mX [ 29ULL ] = - ( ( t83 -> mX . mX [ 4ULL ] * t66 + t83 ->
mX . mX [ 5ULL ] * t67 ) + t83 -> mX . mX [ 28ULL ] ) ; out -> mF . mX [
30ULL ] = - ( ( t83 -> mX . mX [ 4ULL ] * t69 + t83 -> mX . mX [ 5ULL ] * t70
) + t83 -> mX . mX [ 28ULL ] ) ; out -> mF . mX [ 31ULL ] = - ( ( t83 -> mX .
mX [ 4ULL ] * t72 + t83 -> mX . mX [ 5ULL ] * t73 ) + t83 -> mX . mX [ 28ULL
] ) ; out -> mF . mX [ 32ULL ] = 0.0 ; out -> mF . mX [ 33ULL ] = -
4.8000000000000006E-8 ; out -> mF . mX [ 40ULL ] = 0.0 ; out -> mF . mX [
41ULL ] = 0.0 ; out -> mF . mX [ 60ULL ] = 0.0 ; out -> mF . mX [ 61ULL ] = -
( ( ( ( t83 -> mX . mX [ 34ULL ] * t66 + - ( sin ( t57 ) * t83 -> mX . mX [
22ULL ] * 23.0 ) * t83 -> mX . mX [ 4ULL ] ) + t83 -> mX . mX [ 36ULL ] * t67
) + - ( cos ( t57 ) * t83 -> mX . mX [ 22ULL ] * 23.0 ) * t83 -> mX . mX [
5ULL ] ) + t83 -> mX . mX [ 29ULL ] ) ; out -> mF . mX [ 62ULL ] = - ( ( ( (
t83 -> mX . mX [ 34ULL ] * t69 + - ( sin ( t58 ) * t83 -> mX . mX [ 22ULL ] *
23.0 ) * t83 -> mX . mX [ 4ULL ] ) + t83 -> mX . mX [ 36ULL ] * t70 ) + - (
cos ( t58 ) * t83 -> mX . mX [ 22ULL ] * 23.0 ) * t83 -> mX . mX [ 5ULL ] ) +
t83 -> mX . mX [ 29ULL ] ) ; out -> mF . mX [ 63ULL ] = - ( ( ( ( t83 -> mX .
mX [ 34ULL ] * t72 + - ( sin ( t59 ) * t83 -> mX . mX [ 22ULL ] * 23.0 ) *
t83 -> mX . mX [ 4ULL ] ) + t83 -> mX . mX [ 36ULL ] * t73 ) + - ( cos ( t59
) * t83 -> mX . mX [ 22ULL ] * 23.0 ) * t83 -> mX . mX [ 5ULL ] ) + t83 -> mX
. mX [ 29ULL ] ) ; ( void ) LC ; ( void ) out ; return 0 ; }
