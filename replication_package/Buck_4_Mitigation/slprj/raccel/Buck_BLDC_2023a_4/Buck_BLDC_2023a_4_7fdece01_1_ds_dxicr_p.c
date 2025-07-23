#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxicr_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_dxicr_p ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
( void ) LC ; out -> mDXICR_P . mNumCol = 64ULL ; out -> mDXICR_P . mNumRow =
10ULL ; out -> mDXICR_P . mJc [ 0 ] = 0 ; out -> mDXICR_P . mJc [ 1 ] = 0 ;
out -> mDXICR_P . mJc [ 2 ] = 0 ; out -> mDXICR_P . mJc [ 3 ] = 0 ; out ->
mDXICR_P . mJc [ 4 ] = 0 ; out -> mDXICR_P . mJc [ 5 ] = 0 ; out -> mDXICR_P
. mJc [ 6 ] = 0 ; out -> mDXICR_P . mJc [ 7 ] = 0 ; out -> mDXICR_P . mJc [ 8
] = 0 ; out -> mDXICR_P . mJc [ 9 ] = 0 ; out -> mDXICR_P . mJc [ 10 ] = 0 ;
out -> mDXICR_P . mJc [ 11 ] = 0 ; out -> mDXICR_P . mJc [ 12 ] = 0 ; out ->
mDXICR_P . mJc [ 13 ] = 0 ; out -> mDXICR_P . mJc [ 14 ] = 0 ; out ->
mDXICR_P . mJc [ 15 ] = 0 ; out -> mDXICR_P . mJc [ 16 ] = 0 ; out ->
mDXICR_P . mJc [ 17 ] = 0 ; out -> mDXICR_P . mJc [ 18 ] = 0 ; out ->
mDXICR_P . mJc [ 19 ] = 0 ; out -> mDXICR_P . mJc [ 20 ] = 0 ; out ->
mDXICR_P . mJc [ 21 ] = 0 ; out -> mDXICR_P . mJc [ 22 ] = 0 ; out ->
mDXICR_P . mJc [ 23 ] = 0 ; out -> mDXICR_P . mJc [ 24 ] = 0 ; out ->
mDXICR_P . mJc [ 25 ] = 0 ; out -> mDXICR_P . mJc [ 26 ] = 0 ; out ->
mDXICR_P . mJc [ 27 ] = 0 ; out -> mDXICR_P . mJc [ 28 ] = 0 ; out ->
mDXICR_P . mJc [ 29 ] = 0 ; out -> mDXICR_P . mJc [ 30 ] = 0 ; out ->
mDXICR_P . mJc [ 31 ] = 0 ; out -> mDXICR_P . mJc [ 32 ] = 0 ; out ->
mDXICR_P . mJc [ 33 ] = 0 ; out -> mDXICR_P . mJc [ 34 ] = 0 ; out ->
mDXICR_P . mJc [ 35 ] = 0 ; out -> mDXICR_P . mJc [ 36 ] = 0 ; out ->
mDXICR_P . mJc [ 37 ] = 0 ; out -> mDXICR_P . mJc [ 38 ] = 0 ; out ->
mDXICR_P . mJc [ 39 ] = 0 ; out -> mDXICR_P . mJc [ 40 ] = 0 ; out ->
mDXICR_P . mJc [ 41 ] = 0 ; out -> mDXICR_P . mJc [ 42 ] = 0 ; out ->
mDXICR_P . mJc [ 43 ] = 0 ; out -> mDXICR_P . mJc [ 44 ] = 0 ; out ->
mDXICR_P . mJc [ 45 ] = 0 ; out -> mDXICR_P . mJc [ 46 ] = 0 ; out ->
mDXICR_P . mJc [ 47 ] = 0 ; out -> mDXICR_P . mJc [ 48 ] = 0 ; out ->
mDXICR_P . mJc [ 49 ] = 0 ; out -> mDXICR_P . mJc [ 50 ] = 0 ; out ->
mDXICR_P . mJc [ 51 ] = 0 ; out -> mDXICR_P . mJc [ 52 ] = 0 ; out ->
mDXICR_P . mJc [ 53 ] = 0 ; out -> mDXICR_P . mJc [ 54 ] = 0 ; out ->
mDXICR_P . mJc [ 55 ] = 0 ; out -> mDXICR_P . mJc [ 56 ] = 0 ; out ->
mDXICR_P . mJc [ 57 ] = 0 ; out -> mDXICR_P . mJc [ 58 ] = 0 ; out ->
mDXICR_P . mJc [ 59 ] = 0 ; out -> mDXICR_P . mJc [ 60 ] = 0 ; out ->
mDXICR_P . mJc [ 61 ] = 0 ; out -> mDXICR_P . mJc [ 62 ] = 0 ; out ->
mDXICR_P . mJc [ 63 ] = 0 ; out -> mDXICR_P . mJc [ 64 ] = 0 ; ( void ) LC ;
( void ) out ; return 0 ; }
