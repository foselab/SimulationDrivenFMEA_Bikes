#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_m.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_m ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 26 ] = { - 1.0E-7 , - 1.0 , - 1.0E-7 , - 1.0E-7 , - 1.0 , - 1.0
, 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 1.0 , - 1.0E-7 , -
0.1 , - 0.001 , - 0.4 , - 0.001 , - 1.0 , 1.0 , 1.0 , - 1.0E-7 , - 1.0E-7 } ;
( void ) t1 ; ( void ) LC ; out -> mM . mX [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mM . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mM . mX [ 2 ] = _cg_const_1 [ 2 ]
; out -> mM . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mM . mX [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mM . mX [ 5 ] = _cg_const_1 [ 5 ] ; out -> mM . mX
[ 6 ] = _cg_const_1 [ 6 ] ; out -> mM . mX [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mM . mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mM . mX [ 9 ] = _cg_const_1 [ 9 ]
; out -> mM . mX [ 10 ] = _cg_const_1 [ 10 ] ; out -> mM . mX [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mM . mX [ 12 ] = _cg_const_1 [ 12 ] ; out -> mM .
mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mM . mX [ 14 ] = _cg_const_1 [ 14 ] ;
out -> mM . mX [ 15 ] = _cg_const_1 [ 15 ] ; out -> mM . mX [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mM . mX [ 17 ] = _cg_const_1 [ 17 ] ; out -> mM .
mX [ 18 ] = _cg_const_1 [ 18 ] ; out -> mM . mX [ 19 ] = _cg_const_1 [ 19 ] ;
out -> mM . mX [ 20 ] = _cg_const_1 [ 20 ] ; out -> mM . mX [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mM . mX [ 22 ] = _cg_const_1 [ 22 ] ; out -> mM .
mX [ 23 ] = _cg_const_1 [ 23 ] ; out -> mM . mX [ 24 ] = _cg_const_1 [ 24 ] ;
out -> mM . mX [ 25 ] = _cg_const_1 [ 25 ] ; ( void ) LC ; ( void ) out ;
return 0 ; }
