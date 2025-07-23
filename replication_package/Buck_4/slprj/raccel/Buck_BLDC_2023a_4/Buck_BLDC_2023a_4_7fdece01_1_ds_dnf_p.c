#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dnf_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_dnf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 74 ] = { 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 3 , 3 , 4 , 4 , 4 , 4
, 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 ,
4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4
, 4 , 4 , 4 , 4 , 4 , 4 , 6 , 8 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10 , 10
, 10 , 10 , 10 , 10 } ; static int32_T _cg_const_2 [ 10 ] = { 22 , 27 , 27 ,
27 , 30 , 62 , 30 , 62 , 30 , 62 } ; ( void ) t1 ; ( void ) LC ; out ->
mDNF_P . mNumCol = 73ULL ; out -> mDNF_P . mNumRow = 64ULL ; out -> mDNF_P .
mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mDNF_P . mJc [ 1 ] = _cg_const_1 [ 1 ]
; out -> mDNF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mDNF_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mDNF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mDNF_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mDNF_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mDNF_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mDNF_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mDNF_P . mJc [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mDNF_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out ->
mDNF_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out -> mDNF_P . mJc [ 12 ] =
_cg_const_1 [ 12 ] ; out -> mDNF_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out ->
mDNF_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out -> mDNF_P . mJc [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mDNF_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out ->
mDNF_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out -> mDNF_P . mJc [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mDNF_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out ->
mDNF_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out -> mDNF_P . mJc [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mDNF_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out ->
mDNF_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out -> mDNF_P . mJc [ 24 ] =
_cg_const_1 [ 24 ] ; out -> mDNF_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out ->
mDNF_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out -> mDNF_P . mJc [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mDNF_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out ->
mDNF_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out -> mDNF_P . mJc [ 30 ] =
_cg_const_1 [ 30 ] ; out -> mDNF_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out ->
mDNF_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out -> mDNF_P . mJc [ 33 ] =
_cg_const_1 [ 33 ] ; out -> mDNF_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out ->
mDNF_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out -> mDNF_P . mJc [ 36 ] =
_cg_const_1 [ 36 ] ; out -> mDNF_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out ->
mDNF_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out -> mDNF_P . mJc [ 39 ] =
_cg_const_1 [ 39 ] ; out -> mDNF_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out ->
mDNF_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out -> mDNF_P . mJc [ 42 ] =
_cg_const_1 [ 42 ] ; out -> mDNF_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out ->
mDNF_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out -> mDNF_P . mJc [ 45 ] =
_cg_const_1 [ 45 ] ; out -> mDNF_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out ->
mDNF_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out -> mDNF_P . mJc [ 48 ] =
_cg_const_1 [ 48 ] ; out -> mDNF_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out ->
mDNF_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out -> mDNF_P . mJc [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mDNF_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out ->
mDNF_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out -> mDNF_P . mJc [ 54 ] =
_cg_const_1 [ 54 ] ; out -> mDNF_P . mJc [ 55 ] = _cg_const_1 [ 55 ] ; out ->
mDNF_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out -> mDNF_P . mJc [ 57 ] =
_cg_const_1 [ 57 ] ; out -> mDNF_P . mJc [ 58 ] = _cg_const_1 [ 58 ] ; out ->
mDNF_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out -> mDNF_P . mJc [ 60 ] =
_cg_const_1 [ 60 ] ; out -> mDNF_P . mJc [ 61 ] = _cg_const_1 [ 61 ] ; out ->
mDNF_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; out -> mDNF_P . mJc [ 63 ] =
_cg_const_1 [ 63 ] ; out -> mDNF_P . mJc [ 64 ] = _cg_const_1 [ 64 ] ; out ->
mDNF_P . mJc [ 65 ] = _cg_const_1 [ 65 ] ; out -> mDNF_P . mJc [ 66 ] =
_cg_const_1 [ 66 ] ; out -> mDNF_P . mJc [ 67 ] = _cg_const_1 [ 67 ] ; out ->
mDNF_P . mJc [ 68 ] = _cg_const_1 [ 68 ] ; out -> mDNF_P . mJc [ 69 ] =
_cg_const_1 [ 69 ] ; out -> mDNF_P . mJc [ 70 ] = _cg_const_1 [ 70 ] ; out ->
mDNF_P . mJc [ 71 ] = _cg_const_1 [ 71 ] ; out -> mDNF_P . mJc [ 72 ] =
_cg_const_1 [ 72 ] ; out -> mDNF_P . mJc [ 73 ] = _cg_const_1 [ 73 ] ; out ->
mDNF_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mDNF_P . mIr [ 1 ] =
_cg_const_2 [ 1 ] ; out -> mDNF_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out ->
mDNF_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out -> mDNF_P . mIr [ 4 ] =
_cg_const_2 [ 4 ] ; out -> mDNF_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out ->
mDNF_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out -> mDNF_P . mIr [ 7 ] =
_cg_const_2 [ 7 ] ; out -> mDNF_P . mIr [ 8 ] = _cg_const_2 [ 8 ] ; out ->
mDNF_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; ( void ) LC ; ( void ) out ; return
0 ; }
