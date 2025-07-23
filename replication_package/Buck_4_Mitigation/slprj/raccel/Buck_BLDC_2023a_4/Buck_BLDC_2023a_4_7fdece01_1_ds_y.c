#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_y.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_y ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t22 , NeDsMethodOutput * out ) { real_T
Buck_Converter_Current_Sensor1_I ; real_T Buck_Converter_Voltage_Sensor1_V ;
( void ) LC ; Buck_Converter_Voltage_Sensor1_V = ( ( ( - t22 -> mX . mX [
0ULL ] - t22 -> mX . mX [ 10ULL ] ) + t22 -> mX . mX [ 21ULL ] * - 0.1 ) +
t22 -> mX . mX [ 39ULL ] * - 0.1 ) + t22 -> mX . mX [ 20ULL ] ;
Buck_Converter_Current_Sensor1_I = ( ( ( ( ( ( ( - t22 -> mX . mX [ 43ULL ] -
t22 -> mX . mX [ 45ULL ] ) - t22 -> mX . mX [ 47ULL ] ) + t22 -> mX . mX [
39ULL ] ) + t22 -> mX . mX [ 41ULL ] ) + t22 -> mX . mX [ 42ULL ] ) + t22 ->
mX . mX [ 44ULL ] ) + t22 -> mX . mX [ 46ULL ] ) + t22 -> mX . mX [ 48ULL ] ;
out -> mY . mX [ 3ULL ] = t22 -> mX . mX [ 20ULL ] -
Buck_Converter_Voltage_Sensor1_V ; Buck_Converter_Voltage_Sensor1_V = ( ( ( (
( ( - t22 -> mX . mX [ 0ULL ] - t22 -> mX . mX [ 10ULL ] ) + t22 -> mX . mX [
38ULL ] * 0.005 ) + t22 -> mX . mX [ 21ULL ] * - 0.1 ) + t22 -> mX . mX [
39ULL ] * - 0.1 ) + t22 -> mX . mX [ 20ULL ] ) + 48.0 ) -
Buck_Converter_Voltage_Sensor1_V ; out -> mY . mX [ 12ULL ] = - t22 -> mX .
mX [ 30ULL ] - t22 -> mX . mX [ 31ULL ] ; out -> mY . mX [ 13ULL ] = t22 ->
mX . mX [ 30ULL ] ; out -> mY . mX [ 14ULL ] = t22 -> mX . mX [ 31ULL ] ; out
-> mY . mX [ 15ULL ] = ( ( - t22 -> mX . mX [ 0ULL ] + t22 -> mX . mX [ 21ULL
] * - 0.1 ) + t22 -> mX . mX [ 25ULL ] * 0.1 ) + t22 -> mX . mX [ 2ULL ] ;
out -> mY . mX [ 16ULL ] = ( ( - t22 -> mX . mX [ 2ULL ] + t22 -> mX . mX [
25ULL ] * - 0.1 ) + t22 -> mX . mX [ 26ULL ] * 0.1 ) + t22 -> mX . mX [ 3ULL
] ; out -> mY . mX [ 17ULL ] = ( ( - t22 -> mX . mX [ 3ULL ] + t22 -> mX . mX
[ 21ULL ] * 0.1 ) + t22 -> mX . mX [ 26ULL ] * - 0.1 ) + t22 -> mX . mX [
0ULL ] ; out -> mY . mX [ 18ULL ] = ( ( - t22 -> mX . mX [ 3ULL ] + t22 -> mX
. mX [ 26ULL ] * - 0.1 ) + t22 -> mX . mX [ 20ULL ] ) - ( ( ( - t22 -> mX .
mX [ 0ULL ] - t22 -> mX . mX [ 35ULL ] ) + t22 -> mX . mX [ 21ULL ] * - 0.1 )
+ t22 -> mX . mX [ 20ULL ] ) ; out -> mY . mX [ 0ULL ] =
Buck_Converter_Current_Sensor1_I ; out -> mY . mX [ 1ULL ] = - t22 -> mX . mX
[ 38ULL ] ; out -> mY . mX [ 2ULL ] = Buck_Converter_Voltage_Sensor1_V ; out
-> mY . mX [ 4ULL ] = t22 -> mX . mX [ 31ULL ] ; out -> mY . mX [ 5ULL ] = -
( - t22 -> mX . mX [ 37ULL ] + t22 -> mU . mX [ 2ULL ] ) ; out -> mY . mX [
6ULL ] = t22 -> mX . mX [ 15ULL ] * 9.5492965855137211 ; out -> mY . mX [
7ULL ] = t22 -> mX . mX [ 17ULL ] ; out -> mY . mX [ 8ULL ] = t22 -> mX . mX
[ 15ULL ] * 9.5492965855137211 ; out -> mY . mX [ 9ULL ] = - t22 -> mX . mX [
38ULL ] ; out -> mY . mX [ 10ULL ] = Buck_Converter_Voltage_Sensor1_V ; out
-> mY . mX [ 11ULL ] = Buck_Converter_Current_Sensor1_I ; ( void ) LC ; (
void ) out ; return 0 ; }
