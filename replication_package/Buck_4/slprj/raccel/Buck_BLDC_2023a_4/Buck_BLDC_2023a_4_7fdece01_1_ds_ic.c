#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_ic.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_ic ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t3 , NeDsMethodOutput * out ) { ( void ) LC ;
out -> mIC . mX [ 0ULL ] = 0.0 ; out -> mIC . mX [ 1ULL ] = 0.0 ; out -> mIC
. mX [ 2ULL ] = 0.0 ; out -> mIC . mX [ 3ULL ] = 0.0 ; out -> mIC . mX [ 4ULL
] = 0.0 ; out -> mIC . mX [ 5ULL ] = 0.0 ; out -> mIC . mX [ 6ULL ] = 0.0 ;
out -> mIC . mX [ 7ULL ] = 0.0 ; out -> mIC . mX [ 8ULL ] = 0.0 ; out -> mIC
. mX [ 9ULL ] = 180000.0 ; out -> mIC . mX [ 10ULL ] = 0.0 ; out -> mIC . mX
[ 11ULL ] = 0.0 ; out -> mIC . mX [ 12ULL ] = 0.0 ; out -> mIC . mX [ 13ULL ]
= t3 -> mP_R . mX [ 0ULL ] ; out -> mIC . mX [ 14ULL ] = 0.0 ; out -> mIC .
mX [ 15ULL ] = 0.0 ; out -> mIC . mX [ 16ULL ] = 0.0 ; out -> mIC . mX [
17ULL ] = 0.0 ; out -> mIC . mX [ 18ULL ] = 0.0 ; out -> mIC . mX [ 19ULL ] =
0.0 ; out -> mIC . mX [ 20ULL ] = 0.0 ; out -> mIC . mX [ 21ULL ] = 0.0 ; out
-> mIC . mX [ 22ULL ] = 0.0 ; out -> mIC . mX [ 23ULL ] = 0.0 ; out -> mIC .
mX [ 24ULL ] = 0.0 ; out -> mIC . mX [ 25ULL ] = 0.0 ; out -> mIC . mX [
26ULL ] = 0.0 ; out -> mIC . mX [ 27ULL ] = 0.0 ; out -> mIC . mX [ 28ULL ] =
0.0 ; out -> mIC . mX [ 29ULL ] = 0.0 ; out -> mIC . mX [ 30ULL ] = 0.0 ; out
-> mIC . mX [ 31ULL ] = 0.0 ; out -> mIC . mX [ 32ULL ] = 0.0 ; out -> mIC .
mX [ 33ULL ] = 0.0 ; out -> mIC . mX [ 34ULL ] = 0.0 ; out -> mIC . mX [
35ULL ] = 0.0 ; out -> mIC . mX [ 36ULL ] = 0.0 ; out -> mIC . mX [ 37ULL ] =
0.0 ; out -> mIC . mX [ 38ULL ] = 0.0 ; out -> mIC . mX [ 39ULL ] = 0.0 ; out
-> mIC . mX [ 40ULL ] = 0.0 ; out -> mIC . mX [ 41ULL ] = 0.0 ; out -> mIC .
mX [ 42ULL ] = 0.0 ; out -> mIC . mX [ 43ULL ] = 0.0 ; out -> mIC . mX [
44ULL ] = 0.0 ; out -> mIC . mX [ 45ULL ] = 0.0 ; out -> mIC . mX [ 46ULL ] =
0.0 ; out -> mIC . mX [ 47ULL ] = 0.0 ; out -> mIC . mX [ 48ULL ] = 0.0 ; out
-> mIC . mX [ 49ULL ] = 0.0 ; out -> mIC . mX [ 50ULL ] = 0.0 ; out -> mIC .
mX [ 51ULL ] = 0.0 ; out -> mIC . mX [ 52ULL ] = 0.0 ; out -> mIC . mX [
53ULL ] = 0.0 ; out -> mIC . mX [ 54ULL ] = 0.0 ; out -> mIC . mX [ 55ULL ] =
0.0 ; out -> mIC . mX [ 56ULL ] = 0.0 ; out -> mIC . mX [ 57ULL ] = 0.0 ; out
-> mIC . mX [ 58ULL ] = 0.0 ; out -> mIC . mX [ 59ULL ] = 0.0 ; out -> mIC .
mX [ 60ULL ] = 0.0 ; out -> mIC . mX [ 61ULL ] = 0.0 ; out -> mIC . mX [
62ULL ] = 0.0 ; out -> mIC . mX [ 63ULL ] = 0.0 ; ( void ) LC ; ( void ) out
; return 0 ; }
