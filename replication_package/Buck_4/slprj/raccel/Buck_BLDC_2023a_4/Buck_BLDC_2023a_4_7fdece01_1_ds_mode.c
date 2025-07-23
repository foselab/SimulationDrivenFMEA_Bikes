#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_mode.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Buck_BLDC_2023a_4_7fdece01_1_ds_mode ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t8 , NeDsMethodOutput * out ) { real_T
Buck_Converter_S_G ; ( void ) LC ; Buck_Converter_S_G = t8 -> mX . mX [ 1ULL
] * 23.0 - 1.5707963267948966 ; out -> mMODE . mX [ 0ULL ] = ( int32_T ) ( -
sin ( Buck_Converter_S_G ) >= 0.0 ) ; out -> mMODE . mX [ 1ULL ] = ( int32_T
) ( - sin ( Buck_Converter_S_G - 2.0943951023931953 ) >= 0.0 ) ; out -> mMODE
. mX [ 2ULL ] = ( int32_T ) ( - sin ( Buck_Converter_S_G + 2.0943951023931953
) >= 0.0 ) ; out -> mMODE . mX [ 3ULL ] = ( int32_T ) ( t8 -> mU . mX [ 3ULL
] > 0.5 ) ; out -> mMODE . mX [ 4ULL ] = ( int32_T ) ( t8 -> mX . mX [ 59ULL
] < 0.0 ) ; out -> mMODE . mX [ 5ULL ] = ( int32_T ) ( t8 -> mU . mX [ 4ULL ]
> 0.5 ) ; out -> mMODE . mX [ 6ULL ] = ( int32_T ) ( t8 -> mX . mX [ 60ULL ]
< 0.0 ) ; out -> mMODE . mX [ 7ULL ] = ( int32_T ) ( t8 -> mU . mX [ 5ULL ] >
0.5 ) ; out -> mMODE . mX [ 8ULL ] = ( int32_T ) ( t8 -> mX . mX [ 62ULL ] <
0.0 ) ; out -> mMODE . mX [ 9ULL ] = ( int32_T ) ( t8 -> mU . mX [ 6ULL ] >
0.5 ) ; out -> mMODE . mX [ 10ULL ] = ( int32_T ) ( t8 -> mX . mX [ 63ULL ] <
0.0 ) ; out -> mMODE . mX [ 11ULL ] = ( int32_T ) ( t8 -> mU . mX [ 7ULL ] >
0.5 ) ; out -> mMODE . mX [ 12ULL ] = ( int32_T ) ( t8 -> mX . mX [ 51ULL ] <
0.0 ) ; out -> mMODE . mX [ 13ULL ] = ( int32_T ) ( t8 -> mU . mX [ 0ULL ] >
0.5 ) ; out -> mMODE . mX [ 14ULL ] = ( int32_T ) ( t8 -> mX . mX [ 53ULL ] <
0.0 ) ; out -> mMODE . mX [ 15ULL ] = ( int32_T ) ( t8 -> mU . mX [ 1ULL ] >
0.5 ) ; out -> mMODE . mX [ 16ULL ] = ( int32_T ) ( t8 -> mX . mX [ 56ULL ] <
0.0 ) ; out -> mMODE . mX [ 17ULL ] = ( int32_T ) ( t8 -> mU . mX [ 8ULL ] >
0.5 ) ; out -> mMODE . mX [ 18ULL ] = ( int32_T ) ( t8 -> mX . mX [ 57ULL ] <
0.0 ) ; ( void ) LC ; ( void ) out ; return 0 ; }
