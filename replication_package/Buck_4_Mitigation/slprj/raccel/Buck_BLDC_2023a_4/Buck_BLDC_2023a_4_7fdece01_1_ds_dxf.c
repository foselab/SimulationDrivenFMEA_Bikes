#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_dxf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t338 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 8 ] = { 0.027679120537720925 , 0.0 , - 0.027679120537720925 , -
0.027679120537720925 , 0.027679120537720925 , 0.027679120537720925 , 0.0 , -
0.027679120537720925 } ; static real_T _cg_const_2 [ 8 ] = { -
0.52359877559829893 , 0.0 , 0.52359877559829893 , 2.617993877991494 ,
3.6651914291880923 , 5.7595865315812871 , 6.2831853071795862 ,
6.8067840827778854 } ; ETTSf3049b48 t0 ; ETTSf3049b48 t1 ; ETTSf3049b48 t2 ;
real_T t71 [ 13 ] ; real_T t79 [ 13 ] ; real_T t68 [ 12 ] ; real_T t93 [ 11 ]
; real_T t76 [ 10 ] ; real_T nonscalar1 [ 8 ] ; real_T nonscalar2 [ 8 ] ;
real_T t74 [ 8 ] ; real_T t75 [ 8 ] ; real_T t83 [ 7 ] ; real_T t84 [ 7 ] ;
real_T t72 [ 6 ] ; real_T t73 [ 6 ] ; real_T t82 [ 6 ] ; real_T t78 [ 5 ] ;
real_T t87 [ 5 ] ; real_T t88 [ 5 ] ; real_T t94 [ 5 ] ; real_T t101 [ 4 ] ;
real_T t60 [ 1 ] ; real_T t65 [ 1 ] ; real_T intermediate_der290_idx_0 ;
real_T t183 ; real_T t185 ; real_T t186 ; real_T t187 ; real_T t190 ; real_T
t192 ; real_T t194 ; real_T t195 ; real_T t197 ; real_T t198 ; real_T t200 ;
real_T t201 ; real_T t211 ; real_T t221 ; real_T t222 ; real_T t224 ; real_T
t225 ; real_T t227 ; real_T t228 ; real_T t238 ; real_T t239 ; real_T t245 ;
real_T t251 ; real_T t252 ; real_T t254 ; real_T t277 ; real_T t279 ; real_T
t283 ; real_T t284 ; real_T t285 ; real_T t290 ; real_T t293 ; real_T t296 ;
real_T t297 ; real_T t299 ; real_T t306 ; real_T t307 ; real_T t315 ; real_T
t324 ; real_T t329 ; real_T t334 ; real_T zc_int6_idx_0 ; real_T
zc_int6_idx_2 ; size_t t38 [ 1 ] ; size_t t39 [ 1 ] ; size_t t147 ; ( void )
LC ; nonscalar1 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar1 [ 1 ] = _cg_const_1 [
1 ] ; nonscalar1 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar1 [ 3 ] = _cg_const_1 [
3 ] ; nonscalar1 [ 4 ] = _cg_const_1 [ 4 ] ; nonscalar1 [ 5 ] = _cg_const_1 [
5 ] ; nonscalar1 [ 6 ] = _cg_const_1 [ 6 ] ; nonscalar1 [ 7 ] = _cg_const_1 [
7 ] ; nonscalar2 [ 0 ] = _cg_const_2 [ 0 ] ; nonscalar2 [ 1 ] = _cg_const_2 [
1 ] ; nonscalar2 [ 2 ] = _cg_const_2 [ 2 ] ; nonscalar2 [ 3 ] = _cg_const_2 [
3 ] ; nonscalar2 [ 4 ] = _cg_const_2 [ 4 ] ; nonscalar2 [ 5 ] = _cg_const_2 [
5 ] ; nonscalar2 [ 6 ] = _cg_const_2 [ 6 ] ; nonscalar2 [ 7 ] = _cg_const_2 [
7 ] ; t238 = t338 -> mX . mX [ 1ULL ] * 23.0 - 1.5707963267948966 ; t185 =
t238 ; t186 = t238 - 2.0943951023931953 ; t187 = t238 + 2.0943951023931953 ;
t238 = - t338 -> mX . mX [ 30ULL ] - t338 -> mX . mX [ 31ULL ] ; t290 = cos (
t185 ) * 0.66666666666666663 ; t293 = cos ( t186 ) * 0.66666666666666663 ;
t190 = cos ( t187 ) * 0.66666666666666663 ; t297 = - sin ( t185 ) *
0.66666666666666663 ; t192 = - sin ( t186 ) * 0.66666666666666663 ; t324 = -
sin ( t187 ) * 0.66666666666666663 ; t194 = cos ( t185 ) ; t195 = - sin (
t185 ) ; t197 = cos ( t186 ) ; t198 = - sin ( t186 ) ; t200 = cos ( t187 ) ;
t201 = - sin ( t187 ) ; t183 = t338 -> mX . mX [ 4ULL ] * 0.00013 ; t245 =
t338 -> mX . mX [ 5ULL ] * 0.00013 ; t239 = t338 -> mX . mX [ 35ULL ] - t238
* 0.12 ; t251 = ( ( ( ( - t338 -> mX . mX [ 2ULL ] + t338 -> mX . mX [ 21ULL
] * 0.1 ) + t338 -> mX . mX [ 25ULL ] * - 0.1 ) + t338 -> mX . mX [ 35ULL ] )
+ t338 -> mX . mX [ 0ULL ] ) - t338 -> mX . mX [ 30ULL ] * 0.12 ; t252 = ( (
( ( - t338 -> mX . mX [ 3ULL ] + t338 -> mX . mX [ 21ULL ] * 0.1 ) + t338 ->
mX . mX [ 26ULL ] * - 0.1 ) + t338 -> mX . mX [ 35ULL ] ) + t338 -> mX . mX [
0ULL ] ) - t338 -> mX . mX [ 31ULL ] * 0.12 ; t65 [ 0ULL ] = ( atan2 ( fabs (
- sin ( t185 ) ) , - cos ( t185 ) ) * ( real_T ) ( t338 -> mM . mX [ 0ULL ]
!= 0 ) + - atan2 ( fabs ( - sin ( t185 ) ) , - cos ( t185 ) ) * ( real_T ) (
t338 -> mM . mX [ 0ULL ] == 0 ) ) + 3.1415926535897931 ; t38 [ 0 ] = 8ULL ;
t39 [ 0 ] = 1ULL ; tlu2_linear_nearest_prelookup ( & t2 . mField0 [ 0ULL ] ,
& t2 . mField1 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , &
t65 [ 0ULL ] , & t38 [ 0ULL ] , & t39 [ 0ULL ] ) ;
tlu2_1d_linear_nearest_value ( & t60 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , &
t2 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t38 [ 0ULL ] , & t39 [ 0ULL
] ) ; zc_int6_idx_0 = t60 [ 0ULL ] ; t65 [ 0ULL ] = ( atan2 ( fabs ( - sin (
t186 ) ) , - cos ( t186 ) ) * ( real_T ) ( t338 -> mM . mX [ 1ULL ] != 0 ) +
- atan2 ( fabs ( - sin ( t186 ) ) , - cos ( t186 ) ) * ( real_T ) ( t338 ->
mM . mX [ 1ULL ] == 0 ) ) + 3.1415926535897931 ;
tlu2_linear_nearest_prelookup ( & t1 . mField0 [ 0ULL ] , & t1 . mField1 [
0ULL ] , & t1 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t65 [ 0ULL ] , &
t38 [ 0ULL ] , & t39 [ 0ULL ] ) ; tlu2_1d_linear_nearest_value ( & t60 [ 0ULL
] , & t1 . mField0 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ]
, & t38 [ 0ULL ] , & t39 [ 0ULL ] ) ; t65 [ 0ULL ] = ( atan2 ( fabs ( - sin (
t187 ) ) , - cos ( t187 ) ) * ( real_T ) ( t338 -> mM . mX [ 2ULL ] != 0 ) +
- atan2 ( fabs ( - sin ( t187 ) ) , - cos ( t187 ) ) * ( real_T ) ( t338 ->
mM . mX [ 2ULL ] == 0 ) ) + 3.1415926535897931 ;
tlu2_linear_nearest_prelookup ( & t0 . mField0 [ 0ULL ] , & t0 . mField1 [
0ULL ] , & t0 . mField2 [ 0ULL ] , & nonscalar2 [ 0ULL ] , & t65 [ 0ULL ] , &
t38 [ 0ULL ] , & t39 [ 0ULL ] ) ; tlu2_1d_linear_nearest_value ( & t65 [ 0ULL
] , & t0 . mField0 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ]
, & t38 [ 0ULL ] , & t39 [ 0ULL ] ) ; zc_int6_idx_2 = t65 [ 0ULL ] ; t254 =
t65 [ 0ULL ] ; t94 [ 3ULL ] = 1.0E-9 ; t78 [ 3ULL ] = - 1.0E-9 ; t283 = - sin
( t185 ) * 23.0 * 0.66666666666666663 ; t284 = - sin ( t186 ) * 23.0 *
0.66666666666666663 ; t285 = - sin ( t187 ) * 23.0 * 0.66666666666666663 ;
t296 = - ( cos ( t185 ) * 23.0 ) * 0.66666666666666663 ; t329 = - ( cos (
t186 ) * 23.0 ) * 0.66666666666666663 ; t211 = - ( cos ( t187 ) * 23.0 ) *
0.66666666666666663 ; t221 = - sin ( t185 ) * 23.0 ; t222 = - ( cos ( t185 )
* 23.0 ) ; t224 = - sin ( t186 ) * 23.0 ; t225 = - ( cos ( t186 ) * 23.0 ) ;
t227 = - sin ( t187 ) * 23.0 ; t228 = - ( cos ( t187 ) * 23.0 ) ; t101 [ 0ULL
] = - 0.2 ; t277 = - cos ( t185 ) ; t299 = fabs ( - sin ( t185 ) ) * fabs ( -
sin ( t185 ) ) + - cos ( t185 ) * - cos ( t185 ) ; t279 = - fabs ( - sin (
t185 ) ) ; if ( t195 != t195 ) { t306 = t195 ; } else if ( t195 > 0.0 ) {
t306 = 1.0 ; } else { t306 = t195 < 0.0 ? - 1.0 : 0.0 ; } if ( t195 != t195 )
{ t307 = t195 ; } else if ( t195 > 0.0 ) { t307 = 1.0 ; } else { t307 = t195
< 0.0 ? - 1.0 : 0.0 ; } t277 = ( - ( cos ( t185 ) * 23.0 ) * ( t277 / ( t299
== 0.0 ? 1.0E-16 : t299 ) ) * t306 + - ( - sin ( t185 ) * 23.0 ) * ( t279 / (
t299 == 0.0 ? 1.0E-16 : t299 ) ) ) * ( real_T ) ( t338 -> mM . mX [ 0ULL ] !=
0 ) + - ( - ( cos ( t185 ) * 23.0 ) * ( t277 / ( t299 == 0.0 ? 1.0E-16 : t299
) ) * t307 + - ( - sin ( t185 ) * 23.0 ) * ( t279 / ( t299 == 0.0 ? 1.0E-16 :
t299 ) ) ) * ( real_T ) ( t338 -> mM . mX [ 0ULL ] == 0 ) ;
tlu2_1d_linear_nearest_value ( & t65 [ 0ULL ] , & t2 . mField1 [ 0ULL ] , &
t2 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t38 [ 0ULL ] , & t39 [ 0ULL
] ) ; intermediate_der290_idx_0 = t65 [ 0ULL ] * t277 ; t306 = - cos ( t186 )
; t307 = fabs ( - sin ( t186 ) ) * fabs ( - sin ( t186 ) ) + - cos ( t186 ) *
- cos ( t186 ) ; t277 = - fabs ( - sin ( t186 ) ) ; if ( t198 != t198 ) {
t334 = t198 ; } else if ( t198 > 0.0 ) { t334 = 1.0 ; } else { t334 = t198 <
0.0 ? - 1.0 : 0.0 ; } if ( t198 != t198 ) { t315 = t198 ; } else if ( t198 >
0.0 ) { t315 = 1.0 ; } else { t315 = t198 < 0.0 ? - 1.0 : 0.0 ; } t277 = ( -
( cos ( t186 ) * 23.0 ) * ( t306 / ( t307 == 0.0 ? 1.0E-16 : t307 ) ) * t334
+ - ( - sin ( t186 ) * 23.0 ) * ( t277 / ( t307 == 0.0 ? 1.0E-16 : t307 ) ) )
* ( real_T ) ( t338 -> mM . mX [ 1ULL ] != 0 ) + - ( - ( cos ( t186 ) * 23.0
) * ( t306 / ( t307 == 0.0 ? 1.0E-16 : t307 ) ) * t315 + - ( - sin ( t186 ) *
23.0 ) * ( t277 / ( t307 == 0.0 ? 1.0E-16 : t307 ) ) ) * ( real_T ) ( t338 ->
mM . mX [ 1ULL ] == 0 ) ; tlu2_1d_linear_nearest_value ( & t65 [ 0ULL ] , &
t1 . mField1 [ 0ULL ] , & t1 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , &
t38 [ 0ULL ] , & t39 [ 0ULL ] ) ; t306 = t65 [ 0ULL ] * t277 ; t334 = - cos (
t187 ) ; t315 = fabs ( - sin ( t187 ) ) * fabs ( - sin ( t187 ) ) + - cos (
t187 ) * - cos ( t187 ) ; t277 = - fabs ( - sin ( t187 ) ) ; if ( t201 !=
t201 ) { t299 = t201 ; } else if ( t201 > 0.0 ) { t299 = 1.0 ; } else { t299
= t201 < 0.0 ? - 1.0 : 0.0 ; } if ( t201 != t201 ) { t279 = t201 ; } else if
( t201 > 0.0 ) { t279 = 1.0 ; } else { t279 = t201 < 0.0 ? - 1.0 : 0.0 ; }
t277 = ( - ( cos ( t187 ) * 23.0 ) * ( t334 / ( t315 == 0.0 ? 1.0E-16 : t315
) ) * t299 + - ( - sin ( t187 ) * 23.0 ) * ( t277 / ( t315 == 0.0 ? 1.0E-16 :
t315 ) ) ) * ( real_T ) ( t338 -> mM . mX [ 2ULL ] != 0 ) + - ( - ( cos (
t187 ) * 23.0 ) * ( t334 / ( t315 == 0.0 ? 1.0E-16 : t315 ) ) * t279 + - ( -
sin ( t187 ) * 23.0 ) * ( t277 / ( t315 == 0.0 ? 1.0E-16 : t315 ) ) ) * (
real_T ) ( t338 -> mM . mX [ 2ULL ] == 0 ) ; tlu2_1d_linear_nearest_value ( &
t65 [ 0ULL ] , & t0 . mField1 [ 0ULL ] , & t0 . mField2 [ 0ULL ] , &
nonscalar1 [ 0ULL ] , & t38 [ 0ULL ] , & t39 [ 0ULL ] ) ; t277 *= t65 [ 0ULL
] ; if ( t338 -> mM . mX [ 13ULL ] != 0 ) { t68 [ 3ULL ] = - 1.0 ; } else {
t68 [ 3ULL ] = - 1.0E-6 ; } if ( t338 -> mM . mX [ 15ULL ] != 0 ) { t68 [
5ULL ] = 1.0 ; } else { t68 [ 5ULL ] = 1.0E-6 ; } if ( t338 -> mM . mX [
17ULL ] != 0 ) { t68 [ 7ULL ] = 1.0 ; } else { t68 [ 7ULL ] = 0.001 ; } if (
t338 -> mM . mX [ 7ULL ] != 0 ) { t68 [ 9ULL ] = 1.0 ; } else { t68 [ 9ULL ]
= 0.001 ; } if ( t338 -> mM . mX [ 11ULL ] != 0 ) { t68 [ 11ULL ] = 1.0 ; }
else { t68 [ 11ULL ] = 0.001 ; } if ( t338 -> mM . mX [ 5ULL ] != 0 ) { t72 [
3ULL ] = 1.0 ; } else { t72 [ 3ULL ] = 0.001 ; } if ( t338 -> mM . mX [ 7ULL
] != 0 ) { t72 [ 5ULL ] = - 1.0 ; } else { t72 [ 5ULL ] = - 0.001 ; } if (
t338 -> mM . mX [ 9ULL ] != 0 ) { t73 [ 3ULL ] = 1.0 ; } else { t73 [ 3ULL ]
= 0.001 ; } if ( t338 -> mM . mX [ 11ULL ] != 0 ) { t73 [ 5ULL ] = - 1.0 ; }
else { t73 [ 5ULL ] = - 0.001 ; } if ( t338 -> mM . mX [ 13ULL ] != 0 ) { t76
[ 1ULL ] = - 1.0 ; } else { t76 [ 1ULL ] = - 1.0E-6 ; } if ( t338 -> mM . mX
[ 15ULL ] != 0 ) { t76 [ 3ULL ] = 1.0 ; } else { t76 [ 3ULL ] = 1.0E-6 ; } if
( t338 -> mM . mX [ 3ULL ] != 0 ) { t76 [ 5ULL ] = 1.0 ; } else { t76 [ 5ULL
] = 0.001 ; } if ( t338 -> mM . mX [ 7ULL ] != 0 ) { t76 [ 7ULL ] = 1.0 ; }
else { t76 [ 7ULL ] = 0.001 ; } if ( t338 -> mM . mX [ 11ULL ] != 0 ) { t76 [
9ULL ] = 1.0 ; } else { t76 [ 9ULL ] = 0.001 ; } if ( t338 -> mM . mX [ 13ULL
] != 0 ) { t299 = 1.0 ; } else { t299 = 1.0E-6 ; } if ( t338 -> mM . mX [
13ULL ] != 0 ) { t78 [ 1ULL ] = 1.0 ; } else { t78 [ 1ULL ] = 1.0E-6 ; } if (
t338 -> mM . mX [ 15ULL ] != 0 ) { t78 [ 4ULL ] = - 1.0 ; } else { t78 [ 4ULL
] = - 1.0E-6 ; } if ( t338 -> mM . mX [ 13ULL ] != 0 ) { t79 [ 3ULL ] = - 0.1
; } else { t79 [ 3ULL ] = - 1.0E-7 ; } if ( t338 -> mM . mX [ 15ULL ] != 0 )
{ t79 [ 5ULL ] = 0.1 ; } else { t79 [ 5ULL ] = 1.0E-7 ; } if ( t338 -> mM .
mX [ 17ULL ] != 0 ) { t79 [ 8ULL ] = 0.1 ; } else { t79 [ 8ULL ] = 0.0001 ; }
if ( t338 -> mM . mX [ 7ULL ] != 0 ) { t79 [ 10ULL ] = 0.1 ; } else { t79 [
10ULL ] = 0.0001 ; } if ( t338 -> mM . mX [ 11ULL ] != 0 ) { t79 [ 12ULL ] =
0.1 ; } else { t79 [ 12ULL ] = 0.0001 ; } if ( t338 -> mM . mX [ 5ULL ] != 0
) { t83 [ 4ULL ] = 0.1 ; } else { t83 [ 4ULL ] = 0.0001 ; } if ( t338 -> mM .
mX [ 7ULL ] != 0 ) { t83 [ 6ULL ] = - 0.1 ; } else { t83 [ 6ULL ] = - 0.0001
; } if ( t338 -> mM . mX [ 9ULL ] != 0 ) { t84 [ 4ULL ] = 0.1 ; } else { t84
[ 4ULL ] = 0.0001 ; } if ( t338 -> mM . mX [ 11ULL ] != 0 ) { t84 [ 6ULL ] =
- 0.1 ; } else { t84 [ 6ULL ] = - 0.0001 ; } if ( t338 -> mM . mX [ 13ULL ]
!= 0 ) { t93 [ 1ULL ] = - 0.1 ; } else { t93 [ 1ULL ] = - 1.0E-7 ; } if (
t338 -> mM . mX [ 15ULL ] != 0 ) { t93 [ 3ULL ] = 0.1 ; } else { t93 [ 3ULL ]
= 1.0E-7 ; } if ( t338 -> mM . mX [ 3ULL ] != 0 ) { t93 [ 6ULL ] = 0.1 ; }
else { t93 [ 6ULL ] = 0.0001 ; } if ( t338 -> mM . mX [ 7ULL ] != 0 ) { t93 [
8ULL ] = 0.1 ; } else { t93 [ 8ULL ] = 0.0001 ; } if ( t338 -> mM . mX [
11ULL ] != 0 ) { t93 [ 10ULL ] = 0.1 ; } else { t93 [ 10ULL ] = 0.0001 ; } if
( t338 -> mM . mX [ 13ULL ] != 0 ) { t94 [ 1ULL ] = - 1.0 ; } else { t94 [
1ULL ] = - 1.0E-6 ; } if ( t338 -> mM . mX [ 15ULL ] != 0 ) { t94 [ 4ULL ] =
1.0 ; } else { t94 [ 4ULL ] = 1.0E-6 ; } if ( t338 -> mM . mX [ 13ULL ] != 0
) { t101 [ 2ULL ] = 0.2 ; } else { t101 [ 2ULL ] = 2.0E-7 ; } t68 [ 0ULL ] =
( t293 + t190 ) / 0.57735026918962584 ; t68 [ 1ULL ] = ( t192 + t324 ) /
0.84882636315677429 ; t68 [ 2ULL ] = 1.0 ; t68 [ 4ULL ] = - 1.0 ; t68 [ 6ULL
] = - 1.0 ; t68 [ 8ULL ] = - 1.0 ; t68 [ 10ULL ] = - 1.0 ; t71 [ 0ULL ] =
intermediate_der290_idx_0 * t338 -> mX . mX [ 23ULL ] * 23.0 ; t71 [ 1ULL ] =
t306 * t338 -> mX . mX [ 23ULL ] * 23.0 ; t71 [ 2ULL ] = t277 * t338 -> mX .
mX [ 23ULL ] * 23.0 ; t71 [ 3ULL ] = ( ( ( ( ( ( t239 - zc_int6_idx_0 * t338
-> mX . mX [ 23ULL ] * 23.0 ) * t283 + - ( intermediate_der290_idx_0 * t338
-> mX . mX [ 23ULL ] * 23.0 ) * t290 ) + ( t251 - t60 [ 0ULL ] * t338 -> mX .
mX [ 23ULL ] * 23.0 ) * t284 ) + - ( t306 * t338 -> mX . mX [ 23ULL ] * 23.0
) * t293 ) + ( t252 - zc_int6_idx_2 * t338 -> mX . mX [ 23ULL ] * 23.0 ) *
t285 ) + - ( t277 * t338 -> mX . mX [ 23ULL ] * 23.0 ) * t190 ) /
0.57735026918962584 ; t71 [ 4ULL ] = ( ( ( ( ( ( t239 - zc_int6_idx_0 * t338
-> mX . mX [ 23ULL ] * 23.0 ) * t296 + - ( intermediate_der290_idx_0 * t338
-> mX . mX [ 23ULL ] * 23.0 ) * t297 ) + ( t251 - t60 [ 0ULL ] * t338 -> mX .
mX [ 23ULL ] * 23.0 ) * t329 ) + - ( t306 * t338 -> mX . mX [ 23ULL ] * 23.0
) * t192 ) + ( t252 - zc_int6_idx_2 * t338 -> mX . mX [ 23ULL ] * 23.0 ) *
t211 ) + - ( t277 * t338 -> mX . mX [ 23ULL ] * 23.0 ) * t324 ) /
0.84882636315677429 ; t71 [ 5ULL ] = ( ( - ( intermediate_der290_idx_0 * t338
-> mX . mX [ 23ULL ] * 23.0 ) * 0.33333333333333331 + - ( t306 * t338 -> mX .
mX [ 23ULL ] * 23.0 ) * 0.33333333333333331 ) + - ( t277 * t338 -> mX . mX [
23ULL ] * 23.0 ) * 0.33333333333333331 ) / 0.33333333333333331 ; t71 [ 6ULL ]
= - ( ( ( t238 * intermediate_der290_idx_0 + t306 * t338 -> mX . mX [ 30ULL ]
) + t277 * t338 -> mX . mX [ 31ULL ] ) * 23.0 ) ; t71 [ 7ULL ] = - ( ( t338
-> mX . mX [ 4ULL ] * t221 + t338 -> mX . mX [ 5ULL ] * t222 ) + t338 -> mX .
mX [ 28ULL ] * 0.0 ) ; t71 [ 8ULL ] = - ( ( t338 -> mX . mX [ 4ULL ] * t224 +
t338 -> mX . mX [ 5ULL ] * t225 ) + t338 -> mX . mX [ 28ULL ] * 0.0 ) ; t71 [
9ULL ] = - ( ( t338 -> mX . mX [ 4ULL ] * t227 + t338 -> mX . mX [ 5ULL ] *
t228 ) + t338 -> mX . mX [ 28ULL ] * 0.0 ) ; t71 [ 10ULL ] = - ( ( ( ( t338
-> mX . mX [ 34ULL ] * t221 + - ( cos ( t185 ) * t338 -> mX . mX [ 22ULL ] *
23.0 * 23.0 ) * t338 -> mX . mX [ 4ULL ] ) + t338 -> mX . mX [ 36ULL ] * t222
) + - ( - sin ( t185 ) * t338 -> mX . mX [ 22ULL ] * 23.0 * 23.0 ) * t338 ->
mX . mX [ 5ULL ] ) + t338 -> mX . mX [ 29ULL ] * 0.0 ) ; t71 [ 11ULL ] = - (
( ( ( t338 -> mX . mX [ 34ULL ] * t224 + - ( cos ( t186 ) * t338 -> mX . mX [
22ULL ] * 23.0 * 23.0 ) * t338 -> mX . mX [ 4ULL ] ) + t338 -> mX . mX [
36ULL ] * t225 ) + - ( - sin ( t186 ) * t338 -> mX . mX [ 22ULL ] * 23.0 *
23.0 ) * t338 -> mX . mX [ 5ULL ] ) + t338 -> mX . mX [ 29ULL ] * 0.0 ) ; t71
[ 12ULL ] = - ( ( ( ( t338 -> mX . mX [ 34ULL ] * t227 + - ( cos ( t187 ) *
t338 -> mX . mX [ 22ULL ] * 23.0 * 23.0 ) * t338 -> mX . mX [ 4ULL ] ) + t338
-> mX . mX [ 36ULL ] * t228 ) + - ( - sin ( t187 ) * t338 -> mX . mX [ 22ULL
] * 23.0 * 23.0 ) * t338 -> mX . mX [ 5ULL ] ) + t338 -> mX . mX [ 29ULL ] *
0.0 ) ; t72 [ 0ULL ] = - t293 / 0.57735026918962584 ; t72 [ 1ULL ] = - t192 /
0.84882636315677429 ; t72 [ 2ULL ] = - 1.0 ; t72 [ 4ULL ] = 1.0 ; t73 [ 0ULL
] = - t190 / 0.57735026918962584 ; t73 [ 1ULL ] = - t324 /
0.84882636315677429 ; t73 [ 2ULL ] = - 1.0 ; t73 [ 4ULL ] = 1.0 ; t74 [ 0ULL
] = - ( t338 -> mX . mX [ 23ULL ] * 0.00013 * 23.0 ) / 0.84882636315677429 ;
t74 [ 1ULL ] = - ( ( t338 -> mX . mX [ 5ULL ] * 0.00013 - t245 ) * 34.5 ) ;
t74 [ 2ULL ] = - t194 ; t74 [ 3ULL ] = - t197 ; t74 [ 4ULL ] = - t200 ; t74 [
5ULL ] = sin ( t185 ) * t338 -> mX . mX [ 22ULL ] * 23.0 ; t74 [ 6ULL ] = sin
( t186 ) * t338 -> mX . mX [ 22ULL ] * 23.0 ; t74 [ 7ULL ] = sin ( t187 ) *
t338 -> mX . mX [ 22ULL ] * 23.0 ; t75 [ 0ULL ] = t338 -> mX . mX [ 23ULL ] *
0.00013 * 23.0 / 0.57735026918962584 ; t75 [ 1ULL ] = - ( ( t183 - t338 -> mX
. mX [ 4ULL ] * 0.00013 ) * 34.5 ) ; t75 [ 2ULL ] = - t195 ; t75 [ 3ULL ] = -
t198 ; t75 [ 4ULL ] = - t201 ; t75 [ 5ULL ] = cos ( t185 ) * t338 -> mX . mX
[ 22ULL ] * 23.0 ; t75 [ 6ULL ] = cos ( t186 ) * t338 -> mX . mX [ 22ULL ] *
23.0 ; t75 [ 7ULL ] = cos ( t187 ) * t338 -> mX . mX [ 22ULL ] * 23.0 ; t76 [
0ULL ] = 1.0 ; t76 [ 2ULL ] = - 1.0 ; t76 [ 4ULL ] = - 1.0 ; t76 [ 6ULL ] = -
1.0 ; t76 [ 8ULL ] = - 1.0 ; t78 [ 0ULL ] = - 1.0 ; t78 [ 2ULL ] = 1.0 ; t79
[ 0ULL ] = ( 0.1 * t293 + 0.1 * t190 ) / 0.57735026918962584 ; t79 [ 1ULL ] =
( 0.1 * t192 + 0.1 * t324 ) / 0.84882636315677429 ; t79 [ 2ULL ] = 0.1 ; t79
[ 4ULL ] = - 0.1 ; t79 [ 6ULL ] = - 0.1 ; t79 [ 7ULL ] = 1.0 ; t79 [ 9ULL ] =
- 0.1 ; t79 [ 11ULL ] = - 0.1 ; t238 = - ( - ( sin ( t185 ) * 23.0 ) * t338
-> mX . mX [ 4ULL ] + - ( cos ( t185 ) * 23.0 ) * t338 -> mX . mX [ 5ULL ] )
; t239 = - ( - ( sin ( t186 ) * 23.0 ) * t338 -> mX . mX [ 4ULL ] + - ( cos (
t186 ) * 23.0 ) * t338 -> mX . mX [ 5ULL ] ) ; t277 = - ( - ( sin ( t187 ) *
23.0 ) * t338 -> mX . mX [ 4ULL ] + - ( cos ( t187 ) * 23.0 ) * t338 -> mX .
mX [ 5ULL ] ) ; t82 [ 0ULL ] = zc_int6_idx_0 * 23.0 ; t82 [ 1ULL ] = t60 [
0ULL ] * 23.0 ; t82 [ 2ULL ] = zc_int6_idx_2 * 23.0 ; t82 [ 3ULL ] = ( ( ( -
( zc_int6_idx_0 * 23.0 ) * t290 + - ( t60 [ 0ULL ] * 23.0 ) * t293 ) + - (
zc_int6_idx_2 * 23.0 ) * t190 ) - ( - ( t245 * 23.0 ) ) ) /
0.57735026918962584 ; t82 [ 4ULL ] = ( ( ( - ( zc_int6_idx_0 * 23.0 ) * t297
+ - ( t60 [ 0ULL ] * 23.0 ) * t192 ) + - ( zc_int6_idx_2 * 23.0 ) * t324 ) -
t183 * 23.0 ) / 0.84882636315677429 ; t82 [ 5ULL ] = ( ( - ( zc_int6_idx_0 *
23.0 ) * 0.33333333333333331 + - ( t60 [ 0ULL ] * 23.0 ) *
0.33333333333333331 ) + - ( t254 * 23.0 ) * 0.33333333333333331 ) /
0.33333333333333331 ; t83 [ 0ULL ] = - 0.1 * t293 / 0.57735026918962584 ; t83
[ 1ULL ] = - 0.1 * t192 / 0.84882636315677429 ; t83 [ 2ULL ] = - 0.1 ; t83 [
3ULL ] = 1.0 ; t83 [ 5ULL ] = 0.1 ; t84 [ 0ULL ] = - 0.1 * t190 /
0.57735026918962584 ; t84 [ 1ULL ] = - 0.1 * t324 / 0.84882636315677429 ; t84
[ 2ULL ] = - 0.1 ; t84 [ 3ULL ] = 1.0 ; t84 [ 5ULL ] = 0.1 ; t87 [ 0ULL ] = (
0.12 * t290 + - 0.12 * t293 ) / 0.57735026918962584 ; t87 [ 1ULL ] = ( 0.12 *
t297 + - 0.12 * t192 ) / 0.84882636315677429 ; t87 [ 2ULL ] = - ( ( -
zc_int6_idx_0 + t60 [ 0ULL ] ) * 23.0 ) ; t87 [ 3ULL ] = 1.0 ; t87 [ 4ULL ] =
- 1.0 ; t88 [ 0ULL ] = ( 0.12 * t290 + - 0.12 * t190 ) / 0.57735026918962584
; t88 [ 1ULL ] = ( 0.12 * t297 + - 0.12 * t324 ) / 0.84882636315677429 ; t88
[ 2ULL ] = - ( ( - zc_int6_idx_0 + zc_int6_idx_2 ) * 23.0 ) ; t88 [ 3ULL ] =
1.0 ; t88 [ 4ULL ] = - 1.0 ; t93 [ 0ULL ] = 0.1 ; t93 [ 2ULL ] = - 0.1 ; t93
[ 4ULL ] = - 1.0 ; t93 [ 5ULL ] = - 0.1 ; t93 [ 7ULL ] = - 0.1 ; t93 [ 9ULL ]
= - 0.1 ; t94 [ 0ULL ] = 1.0 ; t94 [ 2ULL ] = - 1.0 ; t101 [ 1ULL ] = 1.0 ;
t101 [ 3ULL ] = 1.0 ; for ( t147 = 0ULL ; t147 < 12ULL ; t147 ++ ) { out ->
mDXF . mX [ t147 ] = t68 [ t147 ] ; } for ( t147 = 0ULL ; t147 < 13ULL ; t147
++ ) { out -> mDXF . mX [ t147 + 12ULL ] = t71 [ t147 ] ; } for ( t147 = 0ULL
; t147 < 6ULL ; t147 ++ ) { out -> mDXF . mX [ t147 + 25ULL ] = t72 [ t147 ]
; } for ( t147 = 0ULL ; t147 < 6ULL ; t147 ++ ) { out -> mDXF . mX [ t147 +
31ULL ] = t73 [ t147 ] ; } for ( t147 = 0ULL ; t147 < 8ULL ; t147 ++ ) { out
-> mDXF . mX [ t147 + 37ULL ] = t74 [ t147 ] ; } for ( t147 = 0ULL ; t147 <
8ULL ; t147 ++ ) { out -> mDXF . mX [ t147 + 45ULL ] = t75 [ t147 ] ; } for (
t147 = 0ULL ; t147 < 10ULL ; t147 ++ ) { out -> mDXF . mX [ t147 + 53ULL ] =
t76 [ t147 ] ; } out -> mDXF . mX [ 63ULL ] = 1.0 ; out -> mDXF . mX [ 64ULL
] = - 1.0 ; out -> mDXF . mX [ 65ULL ] = t299 ; for ( t147 = 0ULL ; t147 <
5ULL ; t147 ++ ) { out -> mDXF . mX [ t147 + 66ULL ] = t78 [ t147 ] ; } for (
t147 = 0ULL ; t147 < 13ULL ; t147 ++ ) { out -> mDXF . mX [ t147 + 71ULL ] =
t79 [ t147 ] ; } out -> mDXF . mX [ 84ULL ] = t238 ; out -> mDXF . mX [ 85ULL
] = t239 ; out -> mDXF . mX [ 86ULL ] = t277 ; for ( t147 = 0ULL ; t147 <
6ULL ; t147 ++ ) { out -> mDXF . mX [ t147 + 87ULL ] = t82 [ t147 ] ; } for (
t147 = 0ULL ; t147 < 7ULL ; t147 ++ ) { out -> mDXF . mX [ t147 + 93ULL ] =
t83 [ t147 ] ; } for ( t147 = 0ULL ; t147 < 7ULL ; t147 ++ ) { out -> mDXF .
mX [ t147 + 100ULL ] = t84 [ t147 ] ; } out -> mDXF . mX [ 107ULL ] = - 1.0 ;
out -> mDXF . mX [ 108ULL ] = - 1.0 ; out -> mDXF . mX [ 109ULL ] = - 1.0 ;
out -> mDXF . mX [ 110ULL ] = - 1.0 ; out -> mDXF . mX [ 111ULL ] = - 1.0 ;
out -> mDXF . mX [ 112ULL ] = - 1.0 ; for ( t147 = 0ULL ; t147 < 5ULL ; t147
++ ) { out -> mDXF . mX [ t147 + 113ULL ] = t87 [ t147 ] ; } for ( t147 =
0ULL ; t147 < 5ULL ; t147 ++ ) { out -> mDXF . mX [ t147 + 118ULL ] = t88 [
t147 ] ; } out -> mDXF . mX [ 123ULL ] = - t194 ; out -> mDXF . mX [ 124ULL ]
= - t197 ; out -> mDXF . mX [ 125ULL ] = - t200 ; out -> mDXF . mX [ 126ULL ]
= ( ( t290 + t293 ) + t190 ) / 0.57735026918962584 ; out -> mDXF . mX [
127ULL ] = ( ( t297 + t192 ) + t324 ) / 0.84882636315677429 ; out -> mDXF .
mX [ 128ULL ] = - t195 ; out -> mDXF . mX [ 129ULL ] = - t198 ; out -> mDXF .
mX [ 130ULL ] = - t201 ; out -> mDXF . mX [ 131ULL ] = 1.0 ; out -> mDXF . mX
[ 132ULL ] = 1.0 ; for ( t147 = 0ULL ; t147 < 11ULL ; t147 ++ ) { out -> mDXF
. mX [ t147 + 133ULL ] = t93 [ t147 ] ; } for ( t147 = 0ULL ; t147 < 5ULL ;
t147 ++ ) { out -> mDXF . mX [ t147 + 144ULL ] = t94 [ t147 ] ; } out -> mDXF
. mX [ 149ULL ] = - 1.0 ; out -> mDXF . mX [ 150ULL ] = - 1.0 ; out -> mDXF .
mX [ 151ULL ] = 1.0 ; out -> mDXF . mX [ 152ULL ] = 1.0 ; out -> mDXF . mX [
153ULL ] = - 1.0 ; out -> mDXF . mX [ 154ULL ] = t338 -> mM . mX [ 3ULL ] !=
0 ? - 0.001 : - 1.0 ; out -> mDXF . mX [ 155ULL ] = 1.0 ; out -> mDXF . mX [
156ULL ] = 1.0 ; out -> mDXF . mX [ 157ULL ] = - 1.0 ; out -> mDXF . mX [
158ULL ] = t338 -> mM . mX [ 7ULL ] != 0 ? - 0.001 : - 1.0 ; out -> mDXF . mX
[ 159ULL ] = 1.0 ; out -> mDXF . mX [ 160ULL ] = 1.0 ; out -> mDXF . mX [
161ULL ] = - 1.0 ; out -> mDXF . mX [ 162ULL ] = t338 -> mM . mX [ 11ULL ] !=
0 ? - 0.001 : - 1.0 ; for ( t147 = 0ULL ; t147 < 4ULL ; t147 ++ ) { out ->
mDXF . mX [ t147 + 163ULL ] = t101 [ t147 ] ; } out -> mDXF . mX [ 167ULL ] =
1.0 ; out -> mDXF . mX [ 168ULL ] = t338 -> mM . mX [ 13ULL ] != 0 ? - 0.001
: - 1.0 ; out -> mDXF . mX [ 169ULL ] = t338 -> mM . mX [ 12ULL ] != 0 ? -
1.0 : - 0.001 ; out -> mDXF . mX [ 170ULL ] = t338 -> mM . mX [ 12ULL ] != 0
? - 1.0E-5 : - 1.0 ; out -> mDXF . mX [ 171ULL ] = 1.0 ; out -> mDXF . mX [
172ULL ] = t338 -> mM . mX [ 15ULL ] != 0 ? - 0.001 : - 1.0 ; out -> mDXF .
mX [ 173ULL ] = t338 -> mM . mX [ 14ULL ] != 0 ? - 1.0 : - 0.001 ; out ->
mDXF . mX [ 174ULL ] = t338 -> mM . mX [ 14ULL ] != 0 ? - 1.0E-5 : - 1.0 ;
out -> mDXF . mX [ 175ULL ] = 1.0 ; out -> mDXF . mX [ 176ULL ] = t338 -> mM
. mX [ 17ULL ] != 0 ? - 0.001 : - 1.0 ; out -> mDXF . mX [ 177ULL ] = t338 ->
mM . mX [ 16ULL ] != 0 ? - 1.0 : - 0.001 ; out -> mDXF . mX [ 178ULL ] = t338
-> mM . mX [ 16ULL ] != 0 ? - 1.0E-5 : - 1.0 ; out -> mDXF . mX [ 179ULL ] =
t338 -> mM . mX [ 18ULL ] != 0 ? - 1.0 : - 0.001 ; out -> mDXF . mX [ 180ULL
] = t338 -> mM . mX [ 18ULL ] != 0 ? - 1.0E-5 : - 1.0 ; out -> mDXF . mX [
181ULL ] = 1.0 ; out -> mDXF . mX [ 182ULL ] = t338 -> mM . mX [ 5ULL ] != 0
? - 0.001 : - 1.0 ; out -> mDXF . mX [ 183ULL ] = t338 -> mM . mX [ 4ULL ] !=
0 ? - 1.0 : - 0.001 ; out -> mDXF . mX [ 184ULL ] = t338 -> mM . mX [ 4ULL ]
!= 0 ? - 1.0E-5 : - 1.0 ; out -> mDXF . mX [ 185ULL ] = t338 -> mM . mX [
6ULL ] != 0 ? - 1.0 : - 0.001 ; out -> mDXF . mX [ 186ULL ] = t338 -> mM . mX
[ 6ULL ] != 0 ? - 1.0E-5 : - 1.0 ; out -> mDXF . mX [ 187ULL ] = 1.0 ; out ->
mDXF . mX [ 188ULL ] = t338 -> mM . mX [ 9ULL ] != 0 ? - 0.001 : - 1.0 ; out
-> mDXF . mX [ 189ULL ] = t338 -> mM . mX [ 8ULL ] != 0 ? - 1.0 : - 0.001 ;
out -> mDXF . mX [ 190ULL ] = t338 -> mM . mX [ 8ULL ] != 0 ? - 1.0E-5 : -
1.0 ; out -> mDXF . mX [ 191ULL ] = t338 -> mM . mX [ 10ULL ] != 0 ? - 1.0 :
- 0.001 ; out -> mDXF . mX [ 192ULL ] = t338 -> mM . mX [ 10ULL ] != 0 ? -
1.0E-5 : - 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
