#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_a.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_a ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t144 , NeDsMethodOutput * out ) { real_T t10 [ 6
] ; real_T t1 [ 5 ] ; real_T t26 [ 5 ] ; real_T t28 [ 4 ] ; real_T t29 [ 4 ]
; real_T t9 [ 4 ] ; size_t t66 ; ( void ) t144 ; ( void ) LC ; t10 [ 2ULL ] =
1.0000000000000002E-10 ; t1 [ 0ULL ] = 2.0 ; t1 [ 1ULL ] = 1.0E-9 ; t1 [ 2ULL
] = 1.0 ; t1 [ 3ULL ] = 1.0 ; t1 [ 4ULL ] = 1.0 ; t9 [ 0ULL ] = 1.0E-9 ; t9 [
1ULL ] = 1.0 ; t9 [ 2ULL ] = - 1.0E-9 ; t9 [ 3ULL ] = 2.0000000000000003E-10
; t10 [ 0ULL ] = - 1.0 ; t10 [ 1ULL ] = 0.2 ; t10 [ 3ULL ] = 0.1 ; t10 [ 4ULL
] = 0.1 ; t10 [ 5ULL ] = 0.1 ; t26 [ 0ULL ] = 1.0 ; t26 [ 1ULL ] = - 1.0 ;
t26 [ 2ULL ] = 0.30000000000000004 ; t26 [ 3ULL ] = 0.1 ; t26 [ 4ULL ] = 0.1
; t28 [ 0ULL ] = 1.0 ; t28 [ 1ULL ] = - 1.0 ; t28 [ 2ULL ] = 0.2 ; t28 [ 3ULL
] = - 0.1 ; t29 [ 0ULL ] = 1.0 ; t29 [ 1ULL ] = - 1.0 ; t29 [ 2ULL ] = 0.2 ;
t29 [ 3ULL ] = - 0.1 ; for ( t66 = 0ULL ; t66 < 5ULL ; t66 ++ ) { out -> mA .
mX [ t66 ] = t1 [ t66 ] ; } out -> mA . mX [ 5ULL ] = - 1.0 ; out -> mA . mX
[ 6ULL ] = - 1.0 ; out -> mA . mX [ 7ULL ] = - 1.0 ; out -> mA . mX [ 8ULL ]
= - 1.0 ; out -> mA . mX [ 9ULL ] = 1.0 ; out -> mA . mX [ 10ULL ] = 1.0 ;
out -> mA . mX [ 11ULL ] = 1.0 ; out -> mA . mX [ 12ULL ] = - 1.0 ; out -> mA
. mX [ 13ULL ] = 0.1 ; out -> mA . mX [ 14ULL ] = - 0.2 ; out -> mA . mX [
15ULL ] = - 1.0 ; out -> mA . mX [ 16ULL ] = 1.0 ; out -> mA . mX [ 17ULL ] =
1.0E-9 ; out -> mA . mX [ 18ULL ] = 0.1 ; out -> mA . mX [ 19ULL ] = - 1.0 ;
out -> mA . mX [ 20ULL ] = 1.0 ; out -> mA . mX [ 21ULL ] = 1.0 ; out -> mA .
mX [ 22ULL ] = - 1.0 ; out -> mA . mX [ 23ULL ] = - 1.0 ; out -> mA . mX [
24ULL ] = - 1.0 ; for ( t66 = 0ULL ; t66 < 4ULL ; t66 ++ ) { out -> mA . mX [
t66 + 25ULL ] = t9 [ t66 ] ; } for ( t66 = 0ULL ; t66 < 6ULL ; t66 ++ ) { out
-> mA . mX [ t66 + 29ULL ] = t10 [ t66 ] ; } out -> mA . mX [ 35ULL ] = - 1.0
; out -> mA . mX [ 36ULL ] = - 1.0 ; out -> mA . mX [ 37ULL ] = 1.0 ; out ->
mA . mX [ 38ULL ] = 0.1 ; out -> mA . mX [ 39ULL ] = 1.0 ; out -> mA . mX [
40ULL ] = 0.1 ; out -> mA . mX [ 41ULL ] = 1.0 ; out -> mA . mX [ 42ULL ] = -
1.0 ; out -> mA . mX [ 43ULL ] = - 0.1 ; out -> mA . mX [ 44ULL ] = - 0.1 ;
out -> mA . mX [ 45ULL ] = - 1.0 ; out -> mA . mX [ 46ULL ] = - 0.1 ; out ->
mA . mX [ 47ULL ] = - 0.1 ; out -> mA . mX [ 48ULL ] = - 1.0 ; out -> mA . mX
[ 49ULL ] = 1.0 ; out -> mA . mX [ 50ULL ] = - 0.00048000000000000007 ; out
-> mA . mX [ 51ULL ] = - 1.0 ; out -> mA . mX [ 52ULL ] = 1.0 ; out -> mA .
mX [ 53ULL ] = - 1.0 ; out -> mA . mX [ 54ULL ] = 1.0 ; out -> mA . mX [
55ULL ] = - 1.0 ; out -> mA . mX [ 56ULL ] = 1.0 ; out -> mA . mX [ 57ULL ] =
- 1.0 ; out -> mA . mX [ 58ULL ] = 1.0 ; out -> mA . mX [ 59ULL ] = - 1.0 ;
out -> mA . mX [ 60ULL ] = - 0.000225166604983954 ; out -> mA . mX [ 61ULL ]
= 3.0 ; out -> mA . mX [ 62ULL ] = 1.0E-9 ; out -> mA . mX [ 63ULL ] = - 1.0
; out -> mA . mX [ 64ULL ] = - 0.00015315264186250256 ; out -> mA . mX [
65ULL ] = 1.0 ; out -> mA . mX [ 66ULL ] = 0.10101010101010101 ; out -> mA .
mX [ 67ULL ] = 1.0 ; out -> mA . mX [ 68ULL ] = - 0.005 ; out -> mA . mX [
69ULL ] = - 1.000000000005 ; for ( t66 = 0ULL ; t66 < 5ULL ; t66 ++ ) { out
-> mA . mX [ t66 + 70ULL ] = t26 [ t66 ] ; } out -> mA . mX [ 75ULL ] = -
1.0E-9 ; out -> mA . mX [ 76ULL ] = - 1.0 ; out -> mA . mX [ 77ULL ] = -
2.0000000000000003E-10 ; for ( t66 = 0ULL ; t66 < 4ULL ; t66 ++ ) { out -> mA
. mX [ t66 + 78ULL ] = t28 [ t66 ] ; } for ( t66 = 0ULL ; t66 < 4ULL ; t66 ++
) { out -> mA . mX [ t66 + 82ULL ] = t29 [ t66 ] ; } out -> mA . mX [ 86ULL ]
= - 1.0 ; out -> mA . mX [ 87ULL ] = - 0.2 ; out -> mA . mX [ 88ULL ] = 1.0 ;
out -> mA . mX [ 89ULL ] = 0.2 ; out -> mA . mX [ 90ULL ] = - 1.0 ; out -> mA
. mX [ 91ULL ] = - 0.2 ; out -> mA . mX [ 92ULL ] = 1.0 ; out -> mA . mX [
93ULL ] = 0.2 ; out -> mA . mX [ 94ULL ] = - 1.0 ; out -> mA . mX [ 95ULL ] =
- 0.2 ; out -> mA . mX [ 96ULL ] = 1.0 ; out -> mA . mX [ 97ULL ] = 0.2 ; out
-> mA . mX [ 98ULL ] = - 1.0 ; out -> mA . mX [ 99ULL ] = 0.2 ; out -> mA .
mX [ 100ULL ] = 2.0000000000000003E-10 ; out -> mA . mX [ 101ULL ] = - 1.0 ;
out -> mA . mX [ 102ULL ] = - 1.0 ; out -> mA . mX [ 103ULL ] = - 1.0 ; (
void ) LC ; ( void ) out ; return 0 ; }
