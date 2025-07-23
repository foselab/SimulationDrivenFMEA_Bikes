#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxf_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_dxf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 193 ] = { 21 , 22 , 34 , 36 , 37 , 39 , 42 , 44 , 51 , 53 , 57
, 59 , 17 , 18 , 19 , 21 , 22 , 23 , 27 , 29 , 30 , 31 , 61 , 62 , 63 , 21 ,
22 , 48 , 50 , 51 , 53 , 21 , 22 , 54 , 56 , 57 , 59 , 22 , 27 , 29 , 30 , 31
, 61 , 62 , 63 , 21 , 27 , 29 , 30 , 31 , 61 , 62 , 63 , 34 , 36 , 37 , 39 ,
45 , 47 , 51 , 53 , 57 , 59 , 38 , 34 , 36 , 34 , 36 , 37 , 38 , 39 , 21 , 22
, 34 , 36 , 37 , 39 , 42 , 43 , 44 , 51 , 53 , 57 , 59 , 61 , 62 , 63 , 17 ,
18 , 19 , 21 , 22 , 23 , 21 , 22 , 48 , 49 , 50 , 51 , 53 , 21 , 22 , 54 , 55
, 56 , 57 , 59 , 29 , 30 , 31 , 61 , 62 , 63 , 21 , 22 , 27 , 43 , 49 , 21 ,
22 , 27 , 43 , 55 , 61 , 62 , 63 , 21 , 22 , 61 , 62 , 63 , 35 , 38 , 34 , 36
, 37 , 39 , 43 , 45 , 47 , 51 , 53 , 57 , 59 , 34 , 36 , 37 , 38 , 39 , 49 ,
55 , 43 , 46 , 43 , 47 , 49 , 52 , 49 , 53 , 55 , 58 , 55 , 59 , 34 , 35 , 36
, 38 , 35 , 36 , 34 , 35 , 38 , 39 , 37 , 38 , 43 , 44 , 42 , 43 , 45 , 46 ,
49 , 50 , 48 , 49 , 51 , 52 , 55 , 56 , 54 , 55 , 57 , 58 } ; static int32_T
_cg_const_1 [ 65 ] = { 0 , 12 , 25 , 31 , 37 , 45 , 53 , 53 , 53 , 53 , 53 ,
63 , 64 , 64 , 66 , 66 , 66 , 66 , 66 , 66 , 66 , 71 , 84 , 87 , 93 , 93 ,
100 , 107 , 107 , 110 , 113 , 118 , 123 , 123 , 123 , 126 , 128 , 131 , 131 ,
133 , 144 , 149 , 150 , 151 , 153 , 155 , 157 , 159 , 161 , 163 , 167 , 169 ,
171 , 173 , 175 , 175 , 177 , 179 , 181 , 183 , 185 , 187 , 189 , 191 , 193 }
; int32_T i1 ; ( void ) t1 ; ( void ) LC ; out -> mDXF_P . mNumCol = 64ULL ;
out -> mDXF_P . mNumRow = 64ULL ; out -> mDXF_P . mJc [ 0 ] = _cg_const_1 [ 0
] ; out -> mDXF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDXF_P . mJc [ 2 ]
= _cg_const_1 [ 2 ] ; out -> mDXF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mDXF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mDXF_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mDXF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mDXF_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mDXF_P . mJc [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mDXF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mDXF_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mDXF_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mDXF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mDXF_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mDXF_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mDXF_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out ->
mDXF_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out -> mDXF_P . mJc [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mDXF_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out ->
mDXF_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out -> mDXF_P . mJc [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mDXF_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out ->
mDXF_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out -> mDXF_P . mJc [ 23 ] =
_cg_const_1 [ 23 ] ; out -> mDXF_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out ->
mDXF_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out -> mDXF_P . mJc [ 26 ] =
_cg_const_1 [ 26 ] ; out -> mDXF_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out ->
mDXF_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out -> mDXF_P . mJc [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mDXF_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out ->
mDXF_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out -> mDXF_P . mJc [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mDXF_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out ->
mDXF_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out -> mDXF_P . mJc [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mDXF_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out ->
mDXF_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out -> mDXF_P . mJc [ 38 ] =
_cg_const_1 [ 38 ] ; out -> mDXF_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out ->
mDXF_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out -> mDXF_P . mJc [ 41 ] =
_cg_const_1 [ 41 ] ; out -> mDXF_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out ->
mDXF_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out -> mDXF_P . mJc [ 44 ] =
_cg_const_1 [ 44 ] ; out -> mDXF_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out ->
mDXF_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out -> mDXF_P . mJc [ 47 ] =
_cg_const_1 [ 47 ] ; out -> mDXF_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out ->
mDXF_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out -> mDXF_P . mJc [ 50 ] =
_cg_const_1 [ 50 ] ; out -> mDXF_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out ->
mDXF_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out -> mDXF_P . mJc [ 53 ] =
_cg_const_1 [ 53 ] ; out -> mDXF_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out ->
mDXF_P . mJc [ 55 ] = _cg_const_1 [ 55 ] ; out -> mDXF_P . mJc [ 56 ] =
_cg_const_1 [ 56 ] ; out -> mDXF_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out ->
mDXF_P . mJc [ 58 ] = _cg_const_1 [ 58 ] ; out -> mDXF_P . mJc [ 59 ] =
_cg_const_1 [ 59 ] ; out -> mDXF_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out ->
mDXF_P . mJc [ 61 ] = _cg_const_1 [ 61 ] ; out -> mDXF_P . mJc [ 62 ] =
_cg_const_1 [ 62 ] ; out -> mDXF_P . mJc [ 63 ] = _cg_const_1 [ 63 ] ; out ->
mDXF_P . mJc [ 64 ] = _cg_const_1 [ 64 ] ; for ( i1 = 0 ; i1 < 193 ; i1 ++ )
{ out -> mDXF_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ; } ( void ) LC ; ( void )
out ; return 0 ; }
