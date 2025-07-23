#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_lv.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_lv ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 64 ] = { false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , false
, false , false , false , false , false , false , false , false , false ,
false , false , true , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
true , false , false , false , false , false , false , false , false , false
} ; ( void ) t1 ; ( void ) LC ; out -> mLV . mX [ 0 ] = _cg_const_1 [ 0 ] ;
out -> mLV . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mLV . mX [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mLV . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mLV .
mX [ 4 ] = _cg_const_1 [ 4 ] ; out -> mLV . mX [ 5 ] = _cg_const_1 [ 5 ] ;
out -> mLV . mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mLV . mX [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mLV . mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mLV .
mX [ 9 ] = _cg_const_1 [ 9 ] ; out -> mLV . mX [ 10 ] = _cg_const_1 [ 10 ] ;
out -> mLV . mX [ 11 ] = _cg_const_1 [ 11 ] ; out -> mLV . mX [ 12 ] =
_cg_const_1 [ 12 ] ; out -> mLV . mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mLV
. mX [ 14 ] = _cg_const_1 [ 14 ] ; out -> mLV . mX [ 15 ] = _cg_const_1 [ 15
] ; out -> mLV . mX [ 16 ] = _cg_const_1 [ 16 ] ; out -> mLV . mX [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mLV . mX [ 18 ] = _cg_const_1 [ 18 ] ; out -> mLV
. mX [ 19 ] = _cg_const_1 [ 19 ] ; out -> mLV . mX [ 20 ] = _cg_const_1 [ 20
] ; out -> mLV . mX [ 21 ] = _cg_const_1 [ 21 ] ; out -> mLV . mX [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mLV . mX [ 23 ] = _cg_const_1 [ 23 ] ; out -> mLV
. mX [ 24 ] = _cg_const_1 [ 24 ] ; out -> mLV . mX [ 25 ] = _cg_const_1 [ 25
] ; out -> mLV . mX [ 26 ] = _cg_const_1 [ 26 ] ; out -> mLV . mX [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mLV . mX [ 28 ] = _cg_const_1 [ 28 ] ; out -> mLV
. mX [ 29 ] = _cg_const_1 [ 29 ] ; out -> mLV . mX [ 30 ] = _cg_const_1 [ 30
] ; out -> mLV . mX [ 31 ] = _cg_const_1 [ 31 ] ; out -> mLV . mX [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mLV . mX [ 33 ] = _cg_const_1 [ 33 ] ; out -> mLV
. mX [ 34 ] = _cg_const_1 [ 34 ] ; out -> mLV . mX [ 35 ] = _cg_const_1 [ 35
] ; out -> mLV . mX [ 36 ] = _cg_const_1 [ 36 ] ; out -> mLV . mX [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mLV . mX [ 38 ] = _cg_const_1 [ 38 ] ; out -> mLV
. mX [ 39 ] = _cg_const_1 [ 39 ] ; out -> mLV . mX [ 40 ] = _cg_const_1 [ 40
] ; out -> mLV . mX [ 41 ] = _cg_const_1 [ 41 ] ; out -> mLV . mX [ 42 ] =
_cg_const_1 [ 42 ] ; out -> mLV . mX [ 43 ] = _cg_const_1 [ 43 ] ; out -> mLV
. mX [ 44 ] = _cg_const_1 [ 44 ] ; out -> mLV . mX [ 45 ] = _cg_const_1 [ 45
] ; out -> mLV . mX [ 46 ] = _cg_const_1 [ 46 ] ; out -> mLV . mX [ 47 ] =
_cg_const_1 [ 47 ] ; out -> mLV . mX [ 48 ] = _cg_const_1 [ 48 ] ; out -> mLV
. mX [ 49 ] = _cg_const_1 [ 49 ] ; out -> mLV . mX [ 50 ] = _cg_const_1 [ 50
] ; out -> mLV . mX [ 51 ] = _cg_const_1 [ 51 ] ; out -> mLV . mX [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mLV . mX [ 53 ] = _cg_const_1 [ 53 ] ; out -> mLV
. mX [ 54 ] = _cg_const_1 [ 54 ] ; out -> mLV . mX [ 55 ] = _cg_const_1 [ 55
] ; out -> mLV . mX [ 56 ] = _cg_const_1 [ 56 ] ; out -> mLV . mX [ 57 ] =
_cg_const_1 [ 57 ] ; out -> mLV . mX [ 58 ] = _cg_const_1 [ 58 ] ; out -> mLV
. mX [ 59 ] = _cg_const_1 [ 59 ] ; out -> mLV . mX [ 60 ] = _cg_const_1 [ 60
] ; out -> mLV . mX [ 61 ] = _cg_const_1 [ 61 ] ; out -> mLV . mX [ 62 ] =
_cg_const_1 [ 62 ] ; out -> mLV . mX [ 63 ] = _cg_const_1 [ 63 ] ; ( void )
LC ; ( void ) out ; return 0 ; }
