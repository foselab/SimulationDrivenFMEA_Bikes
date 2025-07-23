#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_tdxf_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_tdxf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 297 ] = { 21 , 22 , 23 , 28 , 32 , 34 , 36 , 37 , 39 , 40 , 41
, 42 , 44 , 51 , 53 , 57 , 59 , 17 , 18 , 19 , 21 , 22 , 23 , 27 , 29 , 30 ,
31 , 61 , 62 , 63 , 21 , 22 , 23 , 40 , 48 , 50 , 51 , 53 , 21 , 22 , 23 , 41
, 54 , 56 , 57 , 59 , 22 , 27 , 29 , 30 , 31 , 61 , 62 , 63 , 21 , 27 , 29 ,
30 , 31 , 61 , 62 , 63 , 32 , 34 , 36 , 37 , 39 , 40 , 41 , 45 , 47 , 51 , 53
, 57 , 59 , 5 , 7 , 32 , 38 , 32 , 8 , 33 , 34 , 36 , 8 , 33 , 9 , 10 , 26 ,
40 , 41 , 5 , 7 , 28 , 32 , 34 , 36 , 37 , 38 , 39 , 11 , 21 , 22 , 23 , 28 ,
32 , 34 , 36 , 37 , 39 , 40 , 41 , 42 , 43 , 44 , 51 , 53 , 57 , 59 , 0 , 20
, 61 , 62 , 63 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 26 , 24 , 60 , 13 ,
21 , 22 , 23 , 40 , 48 , 49 , 50 , 51 , 53 , 15 , 21 , 22 , 23 , 41 , 54 , 55
, 56 , 57 , 59 , 24 , 27 , 29 , 30 , 31 , 23 , 61 , 62 , 63 , 21 , 22 , 27 ,
29 , 30 , 43 , 49 , 21 , 22 , 27 , 29 , 31 , 43 , 55 , 61 , 62 , 61 , 63 , 1
, 21 , 61 , 62 , 63 , 21 , 22 , 23 , 28 , 2 , 22 , 61 , 62 , 63 , 24 , 25 , 4
, 8 , 33 , 35 , 38 , 5 , 12 , 32 , 34 , 36 , 37 , 39 , 40 , 41 , 43 , 45 , 47
, 51 , 53 , 57 , 59 , 5 , 7 , 32 , 34 , 36 , 37 , 38 , 39 , 5 , 14 , 32 , 40
, 49 , 5 , 16 , 32 , 41 , 55 , 5 , 32 , 43 , 46 , 5 , 32 , 43 , 47 , 5 , 32 ,
49 , 52 , 5 , 32 , 49 , 53 , 5 , 32 , 55 , 58 , 5 , 32 , 55 , 59 , 6 , 8 , 33
, 34 , 35 , 36 , 38 , 35 , 36 , 34 , 35 , 38 , 39 , 37 , 38 , 3 , 25 , 60 ,
43 , 44 , 42 , 43 , 45 , 46 , 49 , 50 , 48 , 49 , 51 , 52 , 55 , 56 , 54 , 55
, 57 , 58 } ; static int32_T _cg_const_1 [ 65 ] = { 0 , 17 , 30 , 38 , 46 ,
54 , 62 , 62 , 62 , 62 , 62 , 75 , 79 , 80 , 84 , 86 , 89 , 89 , 89 , 90 , 91
, 100 , 119 , 124 , 133 , 135 , 145 , 155 , 157 , 160 , 164 , 171 , 178 , 180
, 182 , 187 , 191 , 196 , 198 , 203 , 219 , 227 , 232 , 237 , 241 , 245 , 249
, 253 , 257 , 261 , 268 , 270 , 272 , 274 , 276 , 279 , 281 , 283 , 285 , 287
, 289 , 291 , 293 , 295 , 297 } ; int32_T i1 ; ( void ) t1 ; ( void ) LC ;
out -> mTDXF_P . mNumCol = 64ULL ; out -> mTDXF_P . mNumRow = 64ULL ; out ->
mTDXF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mTDXF_P . mJc [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mTDXF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out ->
mTDXF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mTDXF_P . mJc [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mTDXF_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mTDXF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mTDXF_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mTDXF_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mTDXF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mTDXF_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mTDXF_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out
-> mTDXF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out -> mTDXF_P . mJc [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mTDXF_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out
-> mTDXF_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out -> mTDXF_P . mJc [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mTDXF_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out
-> mTDXF_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out -> mTDXF_P . mJc [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mTDXF_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out
-> mTDXF_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out -> mTDXF_P . mJc [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mTDXF_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out
-> mTDXF_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out -> mTDXF_P . mJc [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mTDXF_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out
-> mTDXF_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out -> mTDXF_P . mJc [ 28 ] =
_cg_const_1 [ 28 ] ; out -> mTDXF_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out
-> mTDXF_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out -> mTDXF_P . mJc [ 31 ] =
_cg_const_1 [ 31 ] ; out -> mTDXF_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out
-> mTDXF_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out -> mTDXF_P . mJc [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mTDXF_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out
-> mTDXF_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out -> mTDXF_P . mJc [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mTDXF_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out
-> mTDXF_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out -> mTDXF_P . mJc [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mTDXF_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out
-> mTDXF_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out -> mTDXF_P . mJc [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mTDXF_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out
-> mTDXF_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out -> mTDXF_P . mJc [ 46 ] =
_cg_const_1 [ 46 ] ; out -> mTDXF_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out
-> mTDXF_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out -> mTDXF_P . mJc [ 49 ] =
_cg_const_1 [ 49 ] ; out -> mTDXF_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out
-> mTDXF_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out -> mTDXF_P . mJc [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mTDXF_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out
-> mTDXF_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out -> mTDXF_P . mJc [ 55 ] =
_cg_const_1 [ 55 ] ; out -> mTDXF_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out
-> mTDXF_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out -> mTDXF_P . mJc [ 58 ] =
_cg_const_1 [ 58 ] ; out -> mTDXF_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out
-> mTDXF_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out -> mTDXF_P . mJc [ 61 ] =
_cg_const_1 [ 61 ] ; out -> mTDXF_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; out
-> mTDXF_P . mJc [ 63 ] = _cg_const_1 [ 63 ] ; out -> mTDXF_P . mJc [ 64 ] =
_cg_const_1 [ 64 ] ; for ( i1 = 0 ; i1 < 297 ; i1 ++ ) { out -> mTDXF_P . mIr
[ i1 ] = _cg_const_2 [ i1 ] ; } ( void ) LC ; ( void ) out ; return 0 ; }
