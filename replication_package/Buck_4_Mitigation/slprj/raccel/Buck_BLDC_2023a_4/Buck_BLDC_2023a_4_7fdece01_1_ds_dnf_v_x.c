#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dnf_v_x.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_dnf_v_x ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static
boolean_T _cg_const_1 [ 64 ] = { true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , false , true , true , false , false , false , false ,
true , false , true , true , true , false , false , true , true , true , true
, true , true , false , false , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , false , true , true , true } ; ( void ) t1 ; ( void ) LC ; out ->
mDNF_V_X . mX [ 0 ] = _cg_const_1 [ 0 ] ; out -> mDNF_V_X . mX [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mDNF_V_X . mX [ 2 ] = _cg_const_1 [ 2 ] ; out ->
mDNF_V_X . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mDNF_V_X . mX [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mDNF_V_X . mX [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mDNF_V_X . mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mDNF_V_X . mX [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mDNF_V_X . mX [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mDNF_V_X . mX [ 9 ] = _cg_const_1 [ 9 ] ; out -> mDNF_V_X . mX [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mDNF_V_X . mX [ 11 ] = _cg_const_1 [ 11 ] ; out
-> mDNF_V_X . mX [ 12 ] = _cg_const_1 [ 12 ] ; out -> mDNF_V_X . mX [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mDNF_V_X . mX [ 14 ] = _cg_const_1 [ 14 ] ; out
-> mDNF_V_X . mX [ 15 ] = _cg_const_1 [ 15 ] ; out -> mDNF_V_X . mX [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mDNF_V_X . mX [ 17 ] = _cg_const_1 [ 17 ] ; out
-> mDNF_V_X . mX [ 18 ] = _cg_const_1 [ 18 ] ; out -> mDNF_V_X . mX [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mDNF_V_X . mX [ 20 ] = _cg_const_1 [ 20 ] ; out
-> mDNF_V_X . mX [ 21 ] = _cg_const_1 [ 21 ] ; out -> mDNF_V_X . mX [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mDNF_V_X . mX [ 23 ] = _cg_const_1 [ 23 ] ; out
-> mDNF_V_X . mX [ 24 ] = _cg_const_1 [ 24 ] ; out -> mDNF_V_X . mX [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mDNF_V_X . mX [ 26 ] = _cg_const_1 [ 26 ] ; out
-> mDNF_V_X . mX [ 27 ] = _cg_const_1 [ 27 ] ; out -> mDNF_V_X . mX [ 28 ] =
_cg_const_1 [ 28 ] ; out -> mDNF_V_X . mX [ 29 ] = _cg_const_1 [ 29 ] ; out
-> mDNF_V_X . mX [ 30 ] = _cg_const_1 [ 30 ] ; out -> mDNF_V_X . mX [ 31 ] =
_cg_const_1 [ 31 ] ; out -> mDNF_V_X . mX [ 32 ] = _cg_const_1 [ 32 ] ; out
-> mDNF_V_X . mX [ 33 ] = _cg_const_1 [ 33 ] ; out -> mDNF_V_X . mX [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mDNF_V_X . mX [ 35 ] = _cg_const_1 [ 35 ] ; out
-> mDNF_V_X . mX [ 36 ] = _cg_const_1 [ 36 ] ; out -> mDNF_V_X . mX [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mDNF_V_X . mX [ 38 ] = _cg_const_1 [ 38 ] ; out
-> mDNF_V_X . mX [ 39 ] = _cg_const_1 [ 39 ] ; out -> mDNF_V_X . mX [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mDNF_V_X . mX [ 41 ] = _cg_const_1 [ 41 ] ; out
-> mDNF_V_X . mX [ 42 ] = _cg_const_1 [ 42 ] ; out -> mDNF_V_X . mX [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mDNF_V_X . mX [ 44 ] = _cg_const_1 [ 44 ] ; out
-> mDNF_V_X . mX [ 45 ] = _cg_const_1 [ 45 ] ; out -> mDNF_V_X . mX [ 46 ] =
_cg_const_1 [ 46 ] ; out -> mDNF_V_X . mX [ 47 ] = _cg_const_1 [ 47 ] ; out
-> mDNF_V_X . mX [ 48 ] = _cg_const_1 [ 48 ] ; out -> mDNF_V_X . mX [ 49 ] =
_cg_const_1 [ 49 ] ; out -> mDNF_V_X . mX [ 50 ] = _cg_const_1 [ 50 ] ; out
-> mDNF_V_X . mX [ 51 ] = _cg_const_1 [ 51 ] ; out -> mDNF_V_X . mX [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mDNF_V_X . mX [ 53 ] = _cg_const_1 [ 53 ] ; out
-> mDNF_V_X . mX [ 54 ] = _cg_const_1 [ 54 ] ; out -> mDNF_V_X . mX [ 55 ] =
_cg_const_1 [ 55 ] ; out -> mDNF_V_X . mX [ 56 ] = _cg_const_1 [ 56 ] ; out
-> mDNF_V_X . mX [ 57 ] = _cg_const_1 [ 57 ] ; out -> mDNF_V_X . mX [ 58 ] =
_cg_const_1 [ 58 ] ; out -> mDNF_V_X . mX [ 59 ] = _cg_const_1 [ 59 ] ; out
-> mDNF_V_X . mX [ 60 ] = _cg_const_1 [ 60 ] ; out -> mDNF_V_X . mX [ 61 ] =
_cg_const_1 [ 61 ] ; out -> mDNF_V_X . mX [ 62 ] = _cg_const_1 [ 62 ] ; out
-> mDNF_V_X . mX [ 63 ] = _cg_const_1 [ 63 ] ; ( void ) LC ; ( void ) out ;
return 0 ; }
