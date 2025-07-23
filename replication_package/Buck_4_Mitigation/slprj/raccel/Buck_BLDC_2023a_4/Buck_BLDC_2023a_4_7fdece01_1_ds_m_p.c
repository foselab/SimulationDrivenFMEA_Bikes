#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_m_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_m_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 65 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 9 , 12 , 15 , 16 , 17 , 18
, 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 ,
26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26
, 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 , 26 ,
26 , 26 , 26 , 26 , 26 , 26 } ; static int32_T _cg_const_2 [ 26 ] = { 11 , 0
, 13 , 15 , 1 , 2 , 17 , 18 , 19 , 17 , 18 , 19 , 17 , 18 , 19 , 4 , 12 , 7 ,
5 , 6 , 8 , 3 , 9 , 10 , 14 , 16 } ; ( void ) t1 ; ( void ) LC ; out -> mM_P
. mNumCol = 64ULL ; out -> mM_P . mNumRow = 64ULL ; out -> mM_P . mJc [ 0 ] =
_cg_const_1 [ 0 ] ; out -> mM_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mM_P
. mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mM_P . mJc [ 3 ] = _cg_const_1 [ 3 ]
; out -> mM_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mM_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mM_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mM_P
. mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mM_P . mJc [ 8 ] = _cg_const_1 [ 8 ]
; out -> mM_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mM_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mM_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out ->
mM_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out -> mM_P . mJc [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mM_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out ->
mM_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out -> mM_P . mJc [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mM_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out ->
mM_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out -> mM_P . mJc [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mM_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out ->
mM_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out -> mM_P . mJc [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mM_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out ->
mM_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out -> mM_P . mJc [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mM_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out ->
mM_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out -> mM_P . mJc [ 28 ] =
_cg_const_1 [ 28 ] ; out -> mM_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out ->
mM_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out -> mM_P . mJc [ 31 ] =
_cg_const_1 [ 31 ] ; out -> mM_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out ->
mM_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out -> mM_P . mJc [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mM_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out ->
mM_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out -> mM_P . mJc [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mM_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out ->
mM_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out -> mM_P . mJc [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mM_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out ->
mM_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out -> mM_P . mJc [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mM_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out ->
mM_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out -> mM_P . mJc [ 46 ] =
_cg_const_1 [ 46 ] ; out -> mM_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out ->
mM_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out -> mM_P . mJc [ 49 ] =
_cg_const_1 [ 49 ] ; out -> mM_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out ->
mM_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out -> mM_P . mJc [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mM_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out ->
mM_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out -> mM_P . mJc [ 55 ] =
_cg_const_1 [ 55 ] ; out -> mM_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out ->
mM_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out -> mM_P . mJc [ 58 ] =
_cg_const_1 [ 58 ] ; out -> mM_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out ->
mM_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out -> mM_P . mJc [ 61 ] =
_cg_const_1 [ 61 ] ; out -> mM_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; out ->
mM_P . mJc [ 63 ] = _cg_const_1 [ 63 ] ; out -> mM_P . mJc [ 64 ] =
_cg_const_1 [ 64 ] ; out -> mM_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out ->
mM_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mM_P . mIr [ 2 ] = _cg_const_2
[ 2 ] ; out -> mM_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out -> mM_P . mIr [ 4 ]
= _cg_const_2 [ 4 ] ; out -> mM_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out ->
mM_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out -> mM_P . mIr [ 7 ] = _cg_const_2
[ 7 ] ; out -> mM_P . mIr [ 8 ] = _cg_const_2 [ 8 ] ; out -> mM_P . mIr [ 9 ]
= _cg_const_2 [ 9 ] ; out -> mM_P . mIr [ 10 ] = _cg_const_2 [ 10 ] ; out ->
mM_P . mIr [ 11 ] = _cg_const_2 [ 11 ] ; out -> mM_P . mIr [ 12 ] =
_cg_const_2 [ 12 ] ; out -> mM_P . mIr [ 13 ] = _cg_const_2 [ 13 ] ; out ->
mM_P . mIr [ 14 ] = _cg_const_2 [ 14 ] ; out -> mM_P . mIr [ 15 ] =
_cg_const_2 [ 15 ] ; out -> mM_P . mIr [ 16 ] = _cg_const_2 [ 16 ] ; out ->
mM_P . mIr [ 17 ] = _cg_const_2 [ 17 ] ; out -> mM_P . mIr [ 18 ] =
_cg_const_2 [ 18 ] ; out -> mM_P . mIr [ 19 ] = _cg_const_2 [ 19 ] ; out ->
mM_P . mIr [ 20 ] = _cg_const_2 [ 20 ] ; out -> mM_P . mIr [ 21 ] =
_cg_const_2 [ 21 ] ; out -> mM_P . mIr [ 22 ] = _cg_const_2 [ 22 ] ; out ->
mM_P . mIr [ 23 ] = _cg_const_2 [ 23 ] ; out -> mM_P . mIr [ 24 ] =
_cg_const_2 [ 24 ] ; out -> mM_P . mIr [ 25 ] = _cg_const_2 [ 25 ] ; ( void )
LC ; ( void ) out ; return 0 ; }
