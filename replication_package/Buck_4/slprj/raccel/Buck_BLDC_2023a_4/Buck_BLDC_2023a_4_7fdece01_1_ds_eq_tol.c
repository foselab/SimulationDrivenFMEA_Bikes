#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_eq_tol.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_eq_tol ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; out -> mEQ_TOL . mX [ 0 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 1 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 2 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 3 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 4 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 5 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 6 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 7 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 8 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 9 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 10 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 11 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 12 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 13 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 14 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 15 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 16 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 17 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 18 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 19 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 20 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 21 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 22 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 23 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 24 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 25 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 26 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 27 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 28 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 29 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 30 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 31 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 32 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 33 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 34 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 35 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 36 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 37 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 38 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 39 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 40 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 41 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 42 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 43 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 44 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 45 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 46 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 47 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 48 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 49 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 50 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 51 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 52 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 53 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 54 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 55 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 56 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 57 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 58 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 59 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 60 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 61 ] =
1.0E-9 ; out -> mEQ_TOL . mX [ 62 ] = 1.0E-9 ; out -> mEQ_TOL . mX [ 63 ] =
1.0E-9 ; ( void ) LC ; ( void ) out ; return 0 ; }
