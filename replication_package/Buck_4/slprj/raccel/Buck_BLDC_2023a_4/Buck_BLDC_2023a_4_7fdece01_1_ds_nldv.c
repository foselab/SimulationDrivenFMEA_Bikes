#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_nldv.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_nldv ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 64 ] = { false , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false } ; (
void ) t1 ; ( void ) LC ; out -> mNLDV . mX [ 0 ] = _cg_const_1 [ 0 ] ; out
-> mNLDV . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mNLDV . mX [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mNLDV . mX [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mNLDV . mX [ 4 ] = _cg_const_1 [ 4 ] ; out -> mNLDV . mX [ 5 ] = _cg_const_1
[ 5 ] ; out -> mNLDV . mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mNLDV . mX [ 7 ]
= _cg_const_1 [ 7 ] ; out -> mNLDV . mX [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mNLDV . mX [ 9 ] = _cg_const_1 [ 9 ] ; out -> mNLDV . mX [ 10 ] = _cg_const_1
[ 10 ] ; out -> mNLDV . mX [ 11 ] = _cg_const_1 [ 11 ] ; out -> mNLDV . mX [
12 ] = _cg_const_1 [ 12 ] ; out -> mNLDV . mX [ 13 ] = _cg_const_1 [ 13 ] ;
out -> mNLDV . mX [ 14 ] = _cg_const_1 [ 14 ] ; out -> mNLDV . mX [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mNLDV . mX [ 16 ] = _cg_const_1 [ 16 ] ; out ->
mNLDV . mX [ 17 ] = _cg_const_1 [ 17 ] ; out -> mNLDV . mX [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mNLDV . mX [ 19 ] = _cg_const_1 [ 19 ] ; out ->
mNLDV . mX [ 20 ] = _cg_const_1 [ 20 ] ; out -> mNLDV . mX [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mNLDV . mX [ 22 ] = _cg_const_1 [ 22 ] ; out ->
mNLDV . mX [ 23 ] = _cg_const_1 [ 23 ] ; out -> mNLDV . mX [ 24 ] =
_cg_const_1 [ 24 ] ; out -> mNLDV . mX [ 25 ] = _cg_const_1 [ 25 ] ; out ->
mNLDV . mX [ 26 ] = _cg_const_1 [ 26 ] ; out -> mNLDV . mX [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mNLDV . mX [ 28 ] = _cg_const_1 [ 28 ] ; out ->
mNLDV . mX [ 29 ] = _cg_const_1 [ 29 ] ; out -> mNLDV . mX [ 30 ] =
_cg_const_1 [ 30 ] ; out -> mNLDV . mX [ 31 ] = _cg_const_1 [ 31 ] ; out ->
mNLDV . mX [ 32 ] = _cg_const_1 [ 32 ] ; out -> mNLDV . mX [ 33 ] =
_cg_const_1 [ 33 ] ; out -> mNLDV . mX [ 34 ] = _cg_const_1 [ 34 ] ; out ->
mNLDV . mX [ 35 ] = _cg_const_1 [ 35 ] ; out -> mNLDV . mX [ 36 ] =
_cg_const_1 [ 36 ] ; out -> mNLDV . mX [ 37 ] = _cg_const_1 [ 37 ] ; out ->
mNLDV . mX [ 38 ] = _cg_const_1 [ 38 ] ; out -> mNLDV . mX [ 39 ] =
_cg_const_1 [ 39 ] ; out -> mNLDV . mX [ 40 ] = _cg_const_1 [ 40 ] ; out ->
mNLDV . mX [ 41 ] = _cg_const_1 [ 41 ] ; out -> mNLDV . mX [ 42 ] =
_cg_const_1 [ 42 ] ; out -> mNLDV . mX [ 43 ] = _cg_const_1 [ 43 ] ; out ->
mNLDV . mX [ 44 ] = _cg_const_1 [ 44 ] ; out -> mNLDV . mX [ 45 ] =
_cg_const_1 [ 45 ] ; out -> mNLDV . mX [ 46 ] = _cg_const_1 [ 46 ] ; out ->
mNLDV . mX [ 47 ] = _cg_const_1 [ 47 ] ; out -> mNLDV . mX [ 48 ] =
_cg_const_1 [ 48 ] ; out -> mNLDV . mX [ 49 ] = _cg_const_1 [ 49 ] ; out ->
mNLDV . mX [ 50 ] = _cg_const_1 [ 50 ] ; out -> mNLDV . mX [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mNLDV . mX [ 52 ] = _cg_const_1 [ 52 ] ; out ->
mNLDV . mX [ 53 ] = _cg_const_1 [ 53 ] ; out -> mNLDV . mX [ 54 ] =
_cg_const_1 [ 54 ] ; out -> mNLDV . mX [ 55 ] = _cg_const_1 [ 55 ] ; out ->
mNLDV . mX [ 56 ] = _cg_const_1 [ 56 ] ; out -> mNLDV . mX [ 57 ] =
_cg_const_1 [ 57 ] ; out -> mNLDV . mX [ 58 ] = _cg_const_1 [ 58 ] ; out ->
mNLDV . mX [ 59 ] = _cg_const_1 [ 59 ] ; out -> mNLDV . mX [ 60 ] =
_cg_const_1 [ 60 ] ; out -> mNLDV . mX [ 61 ] = _cg_const_1 [ 61 ] ; out ->
mNLDV . mX [ 62 ] = _cg_const_1 [ 62 ] ; out -> mNLDV . mX [ 63 ] =
_cg_const_1 [ 63 ] ; ( void ) LC ; ( void ) out ; return 0 ; }
