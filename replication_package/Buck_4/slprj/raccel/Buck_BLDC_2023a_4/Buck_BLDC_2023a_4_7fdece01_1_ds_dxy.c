#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxy.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_dxy ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t110 , NeDsMethodOutput * out ) { real_T t3 [ 7
] ; real_T t8 [ 7 ] ; real_T t12 [ 5 ] ; real_T t10 [ 4 ] ; real_T t11 [ 4 ]
; real_T t4 [ 4 ] ; real_T t7 [ 4 ] ; real_T t9 [ 4 ] ; size_t t38 ; ( void )
t110 ; ( void ) LC ; t7 [ 1ULL ] = 0.0 ; t10 [ 1ULL ] = - 1.0 ; t10 [ 2ULL ]
= 0.0 ; t10 [ 3ULL ] = 1.0 ; t9 [ 3ULL ] = - 0.1 ; t7 [ 3ULL ] = 0.0 ; t4 [
3ULL ] = - 1.0 ; t8 [ 6ULL ] = 0.1 ; t3 [ 0ULL ] = 0.0 ; t3 [ 1ULL ] = 1.0 ;
t3 [ 2ULL ] = 0.0 ; t3 [ 3ULL ] = - 1.0 ; t3 [ 4ULL ] = 0.0 ; t3 [ 5ULL ] =
1.0 ; t3 [ 6ULL ] = 1.0 ; t4 [ 0ULL ] = 0.0 ; t4 [ 1ULL ] = 1.0 ; t4 [ 2ULL ]
= - 1.0 ; t7 [ 0ULL ] = 0.0 ; t7 [ 2ULL ] = 0.0 ; t8 [ 0ULL ] = 0.0 ; t8 [
1ULL ] = 0.1 ; t8 [ 2ULL ] = 0.0 ; t8 [ 3ULL ] = - 0.1 ; t8 [ 4ULL ] = 0.0 ;
t8 [ 5ULL ] = 0.1 ; t9 [ 0ULL ] = 0.0 ; t9 [ 1ULL ] = 0.1 ; t9 [ 2ULL ] = -
0.1 ; t10 [ 0ULL ] = 1.0 ; t11 [ 0ULL ] = - 1.0 ; t11 [ 1ULL ] = 0.005 ; t11
[ 2ULL ] = - 1.0 ; t11 [ 3ULL ] = 0.005 ; t12 [ 0ULL ] = 1.0 ; t12 [ 1ULL ] =
0.0 ; t12 [ 2ULL ] = 0.1 ; t12 [ 3ULL ] = 0.0 ; t12 [ 4ULL ] = 1.0 ; for (
t38 = 0ULL ; t38 < 7ULL ; t38 ++ ) { out -> mDXY . mX [ t38 ] = t3 [ t38 ] ;
} out -> mDXY . mX [ 7ULL ] = 1.0 ; out -> mDXY . mX [ 8ULL ] = - 1.0 ; out
-> mDXY . mX [ 9ULL ] = 0.0 ; for ( t38 = 0ULL ; t38 < 4ULL ; t38 ++ ) { out
-> mDXY . mX [ t38 + 10ULL ] = t4 [ t38 ] ; } out -> mDXY . mX [ 14ULL ] =
0.0 ; out -> mDXY . mX [ 15ULL ] = 1.0 ; out -> mDXY . mX [ 16ULL ] = 0.0 ;
out -> mDXY . mX [ 17ULL ] = 9.5492965855137211 ; out -> mDXY . mX [ 18ULL ]
= 9.5492965855137211 ; out -> mDXY . mX [ 19ULL ] = 1.0 ; for ( t38 = 0ULL ;
t38 < 4ULL ; t38 ++ ) { out -> mDXY . mX [ t38 + 20ULL ] = t7 [ t38 ] ; } for
( t38 = 0ULL ; t38 < 7ULL ; t38 ++ ) { out -> mDXY . mX [ t38 + 24ULL ] = t8
[ t38 ] ; } out -> mDXY . mX [ 31ULL ] = 0.1 ; out -> mDXY . mX [ 32ULL ] = -
0.1 ; out -> mDXY . mX [ 33ULL ] = 0.0 ; for ( t38 = 0ULL ; t38 < 4ULL ; t38
++ ) { out -> mDXY . mX [ t38 + 34ULL ] = t9 [ t38 ] ; } out -> mDXY . mX [
38ULL ] = - 1.0 ; out -> mDXY . mX [ 39ULL ] = 1.0 ; out -> mDXY . mX [ 40ULL
] = 0.0 ; for ( t38 = 0ULL ; t38 < 4ULL ; t38 ++ ) { out -> mDXY . mX [ t38 +
41ULL ] = t10 [ t38 ] ; } out -> mDXY . mX [ 45ULL ] = 1.0 ; out -> mDXY . mX
[ 46ULL ] = 1.0 ; for ( t38 = 0ULL ; t38 < 4ULL ; t38 ++ ) { out -> mDXY . mX
[ t38 + 47ULL ] = t11 [ t38 ] ; } for ( t38 = 0ULL ; t38 < 5ULL ; t38 ++ ) {
out -> mDXY . mX [ t38 + 51ULL ] = t12 [ t38 ] ; } out -> mDXY . mX [ 56ULL ]
= 1.0 ; out -> mDXY . mX [ 57ULL ] = 1.0 ; out -> mDXY . mX [ 58ULL ] = 1.0 ;
out -> mDXY . mX [ 59ULL ] = 1.0 ; out -> mDXY . mX [ 60ULL ] = - 1.0 ; out
-> mDXY . mX [ 61ULL ] = - 1.0 ; out -> mDXY . mX [ 62ULL ] = 1.0 ; out ->
mDXY . mX [ 63ULL ] = 1.0 ; out -> mDXY . mX [ 64ULL ] = - 1.0 ; out -> mDXY
. mX [ 65ULL ] = - 1.0 ; out -> mDXY . mX [ 66ULL ] = 1.0 ; out -> mDXY . mX
[ 67ULL ] = 1.0 ; out -> mDXY . mX [ 68ULL ] = - 1.0 ; out -> mDXY . mX [
69ULL ] = - 1.0 ; out -> mDXY . mX [ 70ULL ] = 1.0 ; out -> mDXY . mX [ 71ULL
] = 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
