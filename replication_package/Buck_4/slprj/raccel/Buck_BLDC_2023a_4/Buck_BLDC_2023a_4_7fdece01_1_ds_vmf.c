#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_vmf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_vmf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 64 ] = { false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , true , true , true , false , true , true , true , false , false ,
false , true , false , true , true , true , false , false , true , true ,
true , true , true , true , false , false , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , false , true , true , true } ; ( void ) t1 ; ( void ) LC ;
out -> mVMF . mX [ 0 ] = _cg_const_1 [ 0 ] ; out -> mVMF . mX [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mVMF . mX [ 2 ] = _cg_const_1 [ 2 ] ; out -> mVMF
. mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mVMF . mX [ 4 ] = _cg_const_1 [ 4 ] ;
out -> mVMF . mX [ 5 ] = _cg_const_1 [ 5 ] ; out -> mVMF . mX [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mVMF . mX [ 7 ] = _cg_const_1 [ 7 ] ; out -> mVMF
. mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mVMF . mX [ 9 ] = _cg_const_1 [ 9 ] ;
out -> mVMF . mX [ 10 ] = _cg_const_1 [ 10 ] ; out -> mVMF . mX [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mVMF . mX [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mVMF . mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mVMF . mX [ 14 ] = _cg_const_1
[ 14 ] ; out -> mVMF . mX [ 15 ] = _cg_const_1 [ 15 ] ; out -> mVMF . mX [ 16
] = _cg_const_1 [ 16 ] ; out -> mVMF . mX [ 17 ] = _cg_const_1 [ 17 ] ; out
-> mVMF . mX [ 18 ] = _cg_const_1 [ 18 ] ; out -> mVMF . mX [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mVMF . mX [ 20 ] = _cg_const_1 [ 20 ] ; out ->
mVMF . mX [ 21 ] = _cg_const_1 [ 21 ] ; out -> mVMF . mX [ 22 ] = _cg_const_1
[ 22 ] ; out -> mVMF . mX [ 23 ] = _cg_const_1 [ 23 ] ; out -> mVMF . mX [ 24
] = _cg_const_1 [ 24 ] ; out -> mVMF . mX [ 25 ] = _cg_const_1 [ 25 ] ; out
-> mVMF . mX [ 26 ] = _cg_const_1 [ 26 ] ; out -> mVMF . mX [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mVMF . mX [ 28 ] = _cg_const_1 [ 28 ] ; out ->
mVMF . mX [ 29 ] = _cg_const_1 [ 29 ] ; out -> mVMF . mX [ 30 ] = _cg_const_1
[ 30 ] ; out -> mVMF . mX [ 31 ] = _cg_const_1 [ 31 ] ; out -> mVMF . mX [ 32
] = _cg_const_1 [ 32 ] ; out -> mVMF . mX [ 33 ] = _cg_const_1 [ 33 ] ; out
-> mVMF . mX [ 34 ] = _cg_const_1 [ 34 ] ; out -> mVMF . mX [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mVMF . mX [ 36 ] = _cg_const_1 [ 36 ] ; out ->
mVMF . mX [ 37 ] = _cg_const_1 [ 37 ] ; out -> mVMF . mX [ 38 ] = _cg_const_1
[ 38 ] ; out -> mVMF . mX [ 39 ] = _cg_const_1 [ 39 ] ; out -> mVMF . mX [ 40
] = _cg_const_1 [ 40 ] ; out -> mVMF . mX [ 41 ] = _cg_const_1 [ 41 ] ; out
-> mVMF . mX [ 42 ] = _cg_const_1 [ 42 ] ; out -> mVMF . mX [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mVMF . mX [ 44 ] = _cg_const_1 [ 44 ] ; out ->
mVMF . mX [ 45 ] = _cg_const_1 [ 45 ] ; out -> mVMF . mX [ 46 ] = _cg_const_1
[ 46 ] ; out -> mVMF . mX [ 47 ] = _cg_const_1 [ 47 ] ; out -> mVMF . mX [ 48
] = _cg_const_1 [ 48 ] ; out -> mVMF . mX [ 49 ] = _cg_const_1 [ 49 ] ; out
-> mVMF . mX [ 50 ] = _cg_const_1 [ 50 ] ; out -> mVMF . mX [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mVMF . mX [ 52 ] = _cg_const_1 [ 52 ] ; out ->
mVMF . mX [ 53 ] = _cg_const_1 [ 53 ] ; out -> mVMF . mX [ 54 ] = _cg_const_1
[ 54 ] ; out -> mVMF . mX [ 55 ] = _cg_const_1 [ 55 ] ; out -> mVMF . mX [ 56
] = _cg_const_1 [ 56 ] ; out -> mVMF . mX [ 57 ] = _cg_const_1 [ 57 ] ; out
-> mVMF . mX [ 58 ] = _cg_const_1 [ 58 ] ; out -> mVMF . mX [ 59 ] =
_cg_const_1 [ 59 ] ; out -> mVMF . mX [ 60 ] = _cg_const_1 [ 60 ] ; out ->
mVMF . mX [ 61 ] = _cg_const_1 [ 61 ] ; out -> mVMF . mX [ 62 ] = _cg_const_1
[ 62 ] ; out -> mVMF . mX [ 63 ] = _cg_const_1 [ 63 ] ; ( void ) LC ; ( void
) out ; return 0 ; }
