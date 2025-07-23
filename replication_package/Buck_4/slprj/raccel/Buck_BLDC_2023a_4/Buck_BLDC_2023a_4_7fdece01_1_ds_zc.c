#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_zc.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_zc ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t8 , NeDsMethodOutput * out ) { real_T
Buck_Converter_S_G ; ( void ) LC ; Buck_Converter_S_G = t8 -> mX . mX [ 1ULL
] * 23.0 - 1.5707963267948966 ; out -> mZC . mX [ 0ULL ] = - sin (
Buck_Converter_S_G ) ; out -> mZC . mX [ 1ULL ] = - sin ( Buck_Converter_S_G
- 2.0943951023931953 ) ; out -> mZC . mX [ 2ULL ] = - sin (
Buck_Converter_S_G + 2.0943951023931953 ) ; out -> mZC . mX [ 3ULL ] = (
real_T ) ( t8 -> mX . mX [ 51ULL ] < 0.0 ) ; out -> mZC . mX [ 4ULL ] = (
real_T ) ( t8 -> mX . mX [ 53ULL ] < 0.0 ) ; out -> mZC . mX [ 5ULL ] = (
real_T ) ( t8 -> mX . mX [ 56ULL ] < 0.0 ) ; out -> mZC . mX [ 6ULL ] = (
real_T ) ( t8 -> mX . mX [ 57ULL ] < 0.0 ) ; out -> mZC . mX [ 7ULL ] = (
real_T ) ( t8 -> mX . mX [ 59ULL ] < 0.0 ) ; out -> mZC . mX [ 8ULL ] = (
real_T ) ( t8 -> mX . mX [ 60ULL ] < 0.0 ) ; out -> mZC . mX [ 9ULL ] = (
real_T ) ( t8 -> mX . mX [ 62ULL ] < 0.0 ) ; out -> mZC . mX [ 10ULL ] = (
real_T ) ( t8 -> mX . mX [ 63ULL ] < 0.0 ) ; out -> mZC . mX [ 11ULL ] = t8
-> mU . mX [ 0ULL ] - 0.5 ; out -> mZC . mX [ 12ULL ] = t8 -> mU . mX [ 1ULL
] - 0.5 ; out -> mZC . mX [ 13ULL ] = t8 -> mU . mX [ 8ULL ] - 0.5 ; out ->
mZC . mX [ 14ULL ] = t8 -> mU . mX [ 3ULL ] - 0.5 ; out -> mZC . mX [ 15ULL ]
= t8 -> mU . mX [ 4ULL ] - 0.5 ; out -> mZC . mX [ 16ULL ] = t8 -> mU . mX [
5ULL ] - 0.5 ; out -> mZC . mX [ 17ULL ] = t8 -> mU . mX [ 6ULL ] - 0.5 ; out
-> mZC . mX [ 18ULL ] = t8 -> mU . mX [ 7ULL ] - 0.5 ; ( void ) LC ; ( void )
out ; return 0 ; }
