#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dnf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_dnf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t7 , NeDsMethodOutput * out ) { real_T t1 [ 6 ]
; real_T BLDC_i_a ; size_t t4 ; ( void ) LC ; BLDC_i_a = - t7 -> mX . mX [
30ULL ] - t7 -> mX . mX [ 31ULL ] ; t1 [ 0ULL ] = - ( ( t7 -> mX . mX [ 4ULL
] + 0.0 * t7 -> mX . mX [ 5ULL ] ) + 0.0 * t7 -> mX . mX [ 28ULL ] ) ; t1 [
2ULL ] = - ( ( 0.0 * t7 -> mX . mX [ 4ULL ] + t7 -> mX . mX [ 5ULL ] ) + 0.0
* t7 -> mX . mX [ 28ULL ] ) ; t1 [ 4ULL ] = - ( ( 0.0 * t7 -> mX . mX [ 4ULL
] + 0.0 * t7 -> mX . mX [ 5ULL ] ) + t7 -> mX . mX [ 28ULL ] ) ; t1 [ 1ULL ]
= - ( ( t7 -> mX . mX [ 34ULL ] + 0.0 * t7 -> mX . mX [ 36ULL ] ) + 0.0 * t7
-> mX . mX [ 29ULL ] ) ; t1 [ 3ULL ] = - ( ( 0.0 * t7 -> mX . mX [ 34ULL ] +
t7 -> mX . mX [ 36ULL ] ) + 0.0 * t7 -> mX . mX [ 29ULL ] ) ; t1 [ 5ULL ] = -
( ( 0.0 * t7 -> mX . mX [ 34ULL ] + 0.0 * t7 -> mX . mX [ 36ULL ] ) + t7 ->
mX . mX [ 29ULL ] ) ; out -> mDNF . mX [ 0ULL ] = 1.1780972450961735 ; out ->
mDNF . mX [ 1ULL ] = - ( ( ( BLDC_i_a * 0.0 + t7 -> mX . mX [ 30ULL ] * 0.0 )
+ t7 -> mX . mX [ 31ULL ] ) * 23.0 ) ; out -> mDNF . mX [ 2ULL ] = - ( ( (
BLDC_i_a * 0.0 + t7 -> mX . mX [ 30ULL ] ) + t7 -> mX . mX [ 31ULL ] * 0.0 )
* 23.0 ) ; out -> mDNF . mX [ 3ULL ] = - ( ( ( BLDC_i_a + t7 -> mX . mX [
30ULL ] * 0.0 ) + t7 -> mX . mX [ 31ULL ] * 0.0 ) * 23.0 ) ; for ( t4 = 0ULL
; t4 < 6ULL ; t4 ++ ) { out -> mDNF . mX [ t4 + 4ULL ] = t1 [ t4 ] ; } ( void
) LC ; ( void ) out ; return 0 ; }
