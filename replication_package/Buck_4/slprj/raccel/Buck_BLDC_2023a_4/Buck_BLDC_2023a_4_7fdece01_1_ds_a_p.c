#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_a_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_a_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 104 ] = { 23 , 28 , 32 , 40 , 41 , 23 , 40 , 23 , 41 , 32 , 40
, 41 , 5 , 7 , 32 , 32 , 8 , 33 , 8 , 33 , 9 , 10 , 26 , 40 , 41 , 5 , 7 , 28
, 32 , 11 , 23 , 28 , 32 , 40 , 41 , 0 , 20 , 20 , 24 , 26 , 24 , 60 , 13 ,
23 , 40 , 15 , 23 , 41 , 24 , 27 , 23 , 29 , 30 , 29 , 31 , 61 , 62 , 61 , 63
, 1 , 21 , 23 , 28 , 2 , 22 , 24 , 25 , 4 , 8 , 33 , 5 , 12 , 32 , 40 , 41 ,
5 , 7 , 32 , 5 , 14 , 32 , 40 , 5 , 16 , 32 , 41 , 5 , 32 , 5 , 32 , 5 , 32 ,
5 , 32 , 5 , 32 , 5 , 32 , 6 , 8 , 33 , 3 , 25 , 60 } ; static int32_T
_cg_const_1 [ 65 ] = { 0 , 5 , 5 , 7 , 9 , 9 , 9 , 9 , 9 , 9 , 9 , 12 , 15 ,
16 , 18 , 20 , 23 , 23 , 23 , 24 , 25 , 29 , 35 , 37 , 40 , 42 , 45 , 48 , 50
, 50 , 51 , 53 , 55 , 57 , 59 , 61 , 63 , 65 , 67 , 70 , 75 , 78 , 82 , 86 ,
88 , 90 , 92 , 94 , 96 , 98 , 101 , 101 , 101 , 101 , 101 , 104 , 104 , 104 ,
104 , 104 , 104 , 104 , 104 , 104 , 104 } ; int32_T i1 ; ( void ) t1 ; ( void
) LC ; out -> mA_P . mNumCol = 64ULL ; out -> mA_P . mNumRow = 64ULL ; out ->
mA_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mA_P . mJc [ 1 ] = _cg_const_1
[ 1 ] ; out -> mA_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mA_P . mJc [ 3 ]
= _cg_const_1 [ 3 ] ; out -> mA_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mA_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mA_P . mJc [ 6 ] = _cg_const_1
[ 6 ] ; out -> mA_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mA_P . mJc [ 8 ]
= _cg_const_1 [ 8 ] ; out -> mA_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mA_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mA_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mA_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mA_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mA_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mA_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out ->
mA_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out -> mA_P . mJc [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mA_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out ->
mA_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out -> mA_P . mJc [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mA_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out ->
mA_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out -> mA_P . mJc [ 23 ] =
_cg_const_1 [ 23 ] ; out -> mA_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out ->
mA_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out -> mA_P . mJc [ 26 ] =
_cg_const_1 [ 26 ] ; out -> mA_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out ->
mA_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out -> mA_P . mJc [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mA_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out ->
mA_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out -> mA_P . mJc [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mA_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out ->
mA_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out -> mA_P . mJc [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mA_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out ->
mA_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out -> mA_P . mJc [ 38 ] =
_cg_const_1 [ 38 ] ; out -> mA_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out ->
mA_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out -> mA_P . mJc [ 41 ] =
_cg_const_1 [ 41 ] ; out -> mA_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out ->
mA_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out -> mA_P . mJc [ 44 ] =
_cg_const_1 [ 44 ] ; out -> mA_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out ->
mA_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out -> mA_P . mJc [ 47 ] =
_cg_const_1 [ 47 ] ; out -> mA_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out ->
mA_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out -> mA_P . mJc [ 50 ] =
_cg_const_1 [ 50 ] ; out -> mA_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out ->
mA_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out -> mA_P . mJc [ 53 ] =
_cg_const_1 [ 53 ] ; out -> mA_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out ->
mA_P . mJc [ 55 ] = _cg_const_1 [ 55 ] ; out -> mA_P . mJc [ 56 ] =
_cg_const_1 [ 56 ] ; out -> mA_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out ->
mA_P . mJc [ 58 ] = _cg_const_1 [ 58 ] ; out -> mA_P . mJc [ 59 ] =
_cg_const_1 [ 59 ] ; out -> mA_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out ->
mA_P . mJc [ 61 ] = _cg_const_1 [ 61 ] ; out -> mA_P . mJc [ 62 ] =
_cg_const_1 [ 62 ] ; out -> mA_P . mJc [ 63 ] = _cg_const_1 [ 63 ] ; out ->
mA_P . mJc [ 64 ] = _cg_const_1 [ 64 ] ; for ( i1 = 0 ; i1 < 104 ; i1 ++ ) {
out -> mA_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ; } ( void ) LC ; ( void ) out
; return 0 ; }
