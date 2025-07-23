#ifndef Buck_BLDC_2023a_4_h_
#define Buck_BLDC_2023a_4_h_
#ifndef Buck_BLDC_2023a_4_COMMON_INCLUDES_
#define Buck_BLDC_2023a_4_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_rtp.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "Buck_BLDC_2023a_4_types.h"
#include <stddef.h>
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME Buck_BLDC_2023a_4
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (109) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (4)   
#elif NCSTATES != 4
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T dv [ 119 ] ; real_T dv1 [ 119 ] ; real_T jhdkhjxll0 [
83 ] ; real_T dv2 [ 36 ] ; real_T dv3 [ 36 ] ; real_T mb2uqnl0dc [ 18 ] ;
NeModelParameters modelParameters ; NeModelParameters
modelParameters_mbvzarwird ; NeModelParameters modelParameters_cl54gopm0x ;
NeParameterBundle expl_temp ; real_T dv4 [ 6 ] ; int_T iv [ 11 ] ; int_T iv1
[ 11 ] ; int_T iv2 [ 10 ] ; int_T iv3 [ 10 ] ; real_T boxlro0v4w ; real_T
dhj2kqscw2 ; real_T kuelqyv3wb ; real_T edxvioyzlc ; real_T crw5li1kzs ;
real_T ez4vimsggj ; real_T lsgonhap4q ; real_T ccdpg2e51c ; real_T et2gzftmfl
; real_T hmsv5lubrs ; real_T k0h0smmumn ; real_T e32tu1k5dy ; real_T
mv2egnitku ; real_T i230d00p4f ; real_T kyvlw1eg1j ; real_T myvwt33bkt ;
real_T l1gsa3trsh ; real_T oepjxvzqvl ; real_T lrnvfgtgd0 ; real_T d4qoidu0ry
; real_T dquprl145n ; real_T bvmbcuedts [ 4 ] ; real_T alvydcpetd [ 4 ] ;
real_T igqbtwb1cb ; real_T ntau2arxhc ; real_T k1rj25ivdk ; real_T mklcfmrns4
; real_T cjhohfslts ; real_T aoj0xh52vh ; real_T k1eonvu0jk [ 4 ] ; real_T
k5fkctjwt3 ; real_T ndvl0vsmvk ; real_T cngejipk01 ; real_T e4ir2xx5wg ;
real_T lidvtlakg4 ; real_T lut33f4odj ; real_T k0jkfliw3f ; real_T bqudhrxhmu
; real_T mgtbco3ykj ; real_T ltac0jcdqm ; real_T e5xs1fgp0p ; real_T
p5xsnshbs2 ; real_T howt2qok0i ; real_T jjm52urekq ; real_T ldg3ehsse5 ;
real_T kn3hi4jtzs ; real_T jkk4cu5kch [ 6 ] ; real_T fx4wpmz5u0 [ 4 ] ;
real_T by1nqwksec [ 4 ] ; real_T hazdzaaae3 [ 4 ] ; real_T j2a44cvuzt [ 4 ] ;
real_T lrl4sovswi [ 4 ] ; real_T llsv3ekyqe [ 4 ] ; real_T pftutvvgoa ;
real_T mdhsmk0z5v ; real_T fylncoh0hg ; real_T la0lywfzq3 ; real_T n5buikirfg
; real_T ohmkvyyvno ; real_T kahmn5kkv5 ; real_T o1wvh1f3fj ; real_T
ffh3vaqhha ; real_T fxrcnp5bjm ; real_T awkvkk5zk5 ; real_T fmrmomooue ;
real_T llbtqnhtpl ; real_T nj4juwhgqw ; real_T eyqv0xj1ug ; real_T ieawd2cbze
; real_T di3f3nhukn ; real_T ou3ioysjfo ; real_T jvh2ohto52 ; real_T
pdykrtncmz ; real_T fax5qeeyc1 ; real_T loux1l3u5w ; real_T ncb1snsfz2 ;
real_T nhvdwogyzu ; real_T kz5tpkq11l ; real_T a41vzzxren ; real_T eud0zgm0r5
; real_T do4skprury ; real_T ouvlgrsc5y ; real_T d ; real_T time ; real_T
time_kkiq3xxxve ; real_T time_cxarnvbvui ; real_T time_bhxxfovxdy ; real_T
time_pbm3vprmfu ; real_T time_cv5hdgrwft ; real_T u0 ; real_T u1 ; real_T u2
; int32_T isHit ; int32_T isHit_fqdqrf4qbc ; int32_T isHit_g2mlkqadfk ;
uint32_T fwe1oukzth ; uint32_T fj0htoh5tj ; uint32_T ncvg3pf1ks ; boolean_T
j5vnwqxvus ; boolean_T az1w2epyt0 ; boolean_T lbwft3qm51 ; boolean_T
dnqdrumv1i ; boolean_T cri2ighsbt ; boolean_T dehruik5oa ; boolean_T
dhojtt4r2r ; boolean_T ny0skh2lmi ; boolean_T cprrfu52rw ; boolean_T
fqj12khujg ; boolean_T m4jno1bkib ; boolean_T pwxvkz4cs3 ; boolean_T
f5vvbgw04z ; boolean_T mur22rltjv ; boolean_T pg44xwiojj ; boolean_T
g3q3b4gkk1 ; boolean_T bov2zzmsnh ; boolean_T ioaefphlhe ; boolean_T
obpxpmwwxu ; boolean_T oo1b0vvxiu ; boolean_T nf5mwr2amm ; boolean_T
ajs0qdm2js ; } B ; typedef struct { real_T c1b5pzrnrj ; real_T gnq15ddheh ;
real_T dffmfsmjp4 ; real_T ie1wxley43 ; real_T fwtwpjliml [ 2 ] ; real_T
hkvyb0ptbn [ 2 ] ; real_T nssyg3ul2x [ 2 ] ; real_T pvs3335hoi ; real_T
fyl5munlxu [ 2 ] ; real_T bs1qjqmif1 [ 2 ] ; real_T edfdikmfnp [ 2 ] ; real_T
dnqfkyv2uz [ 2 ] ; real_T ixu0au5oat [ 2 ] ; real_T bd53t3itfv [ 2 ] ; real_T
bznvn4zrrr [ 64 ] ; real_T fmxddz4qrb ; real_T akg4ejc3ma ; real_T itgthkpdui
; real_T ei3pjcz2m5 ; real_T ix01qch2kj ; real_T iu1aexerwa ; real_T
ps0fgvqban ; real_T kspbzdaf2j ; real_T kjkz3elkj0 ; real_T m5mwnz3e3c ; void
* id1ec1se2a ; void * lhzmdhlnwj ; void * bzdscu24o4 ; void * aqzmv3k4vt ;
void * ovhheqikkt ; void * nbvqi0lryc ; void * ch3qij2jlm ; void * bqlnjhh13e
; void * gylnipw0uk ; void * kejosogyp1 ; void * fjhc2c0sq1 ; struct { void *
LoggedData [ 3 ] ; } jw3uqr3u3w ; struct { void * LoggedData [ 2 ] ; }
nux3heefjx ; struct { void * LoggedData [ 3 ] ; } ayzmoix4ox ; struct { void
* LoggedData [ 3 ] ; } b3czypv5yd ; struct { void * AQHandles ; } cj2xpnofaw
; struct { void * AQHandles ; } p2fuzd2n1u ; struct { void * AQHandles ; }
blchu5fgfp ; struct { void * AQHandles ; } puzcmpy0er ; struct { void *
LoggedData ; } dkozbxr5jj ; struct { void * LoggedData [ 3 ] ; } li3dwsqpy0 ;
struct { void * AQHandles ; } og021k3ddn ; struct { void * AQHandles ; }
pazscy03am ; struct { void * AQHandles ; } gcn0hbx5lh ; struct { void *
AQHandles ; } mdjek0kg4p ; struct { void * LoggedData [ 3 ] ; } bwhl3doxip ;
struct { void * LoggedData ; } cggnsfccqn ; struct { void * AQHandles ; }
loexq3aa33 ; struct { void * AQHandles ; } mlazb5xajw ; struct { void *
AQHandles ; } jab5ce0r52 ; struct { void * LoggedData [ 5 ] ; } hb5zvvihes ;
struct { void * LoggedData [ 2 ] ; } fztbusk5wp ; struct { void * LoggedData
[ 7 ] ; } jqgw4ejmqk ; struct { void * LoggedData ; } gkbq1113ff ; struct {
void * LoggedData ; } bri5kom5su ; struct { void * LoggedData ; } lzp2ea2fw4
; void * is1htqb5zy ; void * he53sqyi2y ; void * bluywrteob ; void *
hvk3h2reru ; void * cpbqzngdq3 ; struct { void * LoggedData ; } bcintaxab2 ;
struct { void * LoggedData [ 2 ] ; } mdiow2qiqc ; struct { void * LoggedData
[ 2 ] ; } n0eqia43rh ; struct { void * LoggedData [ 3 ] ; } o5m3g5kndj ;
struct { void * AQHandles ; } cj2xpnofawx ; struct { void * AQHandles ; }
p2fuzd2n1u5 ; struct { void * LoggedData [ 3 ] ; } koevv0bes5 ; struct { void
* LoggedData [ 2 ] ; } pt02ud3urr ; void * fymgxe4xnz ; void * lvf1iefemj ;
void * ipxkhgrdmq ; uint32_T noeba4iykm ; int_T nto4t3wzze [ 19 ] ; int_T
d4gmtkdgyk ; int_T gqvonovqnm ; uint8_T lylmywsair ; uint8_T ix1eozqvus ;
uint8_T lf5hhij40v ; uint8_T fdyfaaoo12 ; uint8_T lpjbl5m4vp ; uint8_T
hzgov1h5v5 ; boolean_T bitkls2ofs ; boolean_T mgejji5fmw ; boolean_T
gxt1g1hy3f ; boolean_T jnl44abga2 ; } DW ; typedef struct { real_T moh0iithye
; real_T dgabmb1iec ; real_T bt3c5nwd5e ; real_T gdealguncp ; } X ; typedef
struct { real_T moh0iithye ; real_T dgabmb1iec ; real_T bt3c5nwd5e ; real_T
gdealguncp ; } XDot ; typedef struct { boolean_T moh0iithye ; boolean_T
dgabmb1iec ; boolean_T bt3c5nwd5e ; boolean_T gdealguncp ; } XDis ; typedef
struct { real_T moh0iithye ; real_T dgabmb1iec ; real_T bt3c5nwd5e ; real_T
gdealguncp ; } CStateAbsTol ; typedef struct { real_T moh0iithye ; real_T
dgabmb1iec ; real_T bt3c5nwd5e ; real_T gdealguncp ; } CXPtMin ; typedef
struct { real_T moh0iithye ; real_T dgabmb1iec ; real_T bt3c5nwd5e ; real_T
gdealguncp ; } CXPtMax ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T DiscretePIDController_D ; real_T
DiscretePIDController_I ; real_T
DiscretePIDController_InitialConditionForFilter ; real_T
DiscretePIDController_InitialConditionForIntegrator ; real_T
DiscretePIDController_LowerIntegratorSaturationLimit ; real_T
DiscretePIDController_LowerSaturationLimit ; real_T DiscretePIDController_N ;
real_T RepeatingSequenceInterpolated2_OutValues [ 8 ] ; real_T
DiscretePIDController_P ; real_T RepeatingSequenceInterpolated2_TimeValues [
8 ] ; real_T DiscretePIDController_UpperIntegratorSaturationLimit ; real_T
DiscretePIDController_UpperSaturationLimit ; uint32_T WrapToZero_Threshold ;
real_T Constant_Value ; real_T DiscreteTimeIntegrator_gainval ; real_T
DiscreteTimeIntegrator_IC ; real_T Gain_Gain ; real_T
UnitDelay_InitialCondition ; real_T Integrator_gainval ; real_T
Filter_gainval ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat ;
real_T Constant3_Value ; real_T Constant2_Value ; real_T uib1_Gain ; real_T
convertsintoms_Gain ; real_T coeff_aerorCwA2_Gain ; real_T TFr_wheel_Gain ;
real_T loadtorque_Gain ; real_T UnitDelay_InitialCondition_k3ms2yvusv ;
real_T Gain6_Gain ; real_T Gain7_Gain ; real_T Gain8_Gain ; real_T Gain9_Gain
; real_T Gain10_Gain ; real_T Gain11_Gain ; real_T
Saturation_UpperSat_i0xk5bf3au ; real_T Saturation_LowerSat_ds3qzssna2 ;
real_T Integrator_IC ; real_T Integrator1_IC ; real_T onlynegative_UpperSat ;
real_T onlynegative_LowerSat ; real_T onlypositive_UpperSat ; real_T
onlypositive_LowerSat ; real_T DiscreteTimeIntegrator_gainval_ironaljz5i ;
real_T DiscreteTimeIntegrator_IC_p0emdu1vo0 ; real_T convertsintorads_Gain ;
real_T SampleTimeMath_WtEt ; real_T rpm2pu_Gain ; real_T Gain2_Gain ; real_T
polepairs_Gain ; real_T convertsintoms_Gain_fiqpesw42p ; real_T Multiply_Gain
; real_T Integrator_IC_enr3uyn1pn ; real_T Integrator1_IC_iytltsacmf ; real_T
Multiply_Gain_mmgzpqegcd ; real_T onlynegative_UpperSat_n10o4huijb ; real_T
onlynegative_LowerSat_fmq51hroac ; real_T onlypositive_UpperSat_miyd3oypjf ;
real_T onlypositive_LowerSat_fr1olx4dcr ; real_T RTP_DBEA2577_vc_Value ;
real_T Constant_Value_oq05l1rpow [ 6 ] ; real_T Constant1_Value [ 6 ] ;
real_T Constant2_Value_p0oprvq4dx [ 6 ] ; real_T Constant4_Value [ 6 ] ;
real_T Constant5_Value [ 6 ] ; real_T Constant6_Value [ 6 ] ; real_T
Rolling_friction_Value ; real_T Constant12_Value ; real_T Constant13_Value ;
real_T Constant14_Value ; real_T Constant15_Value ; real_T Constant16_Value ;
real_T Constant17_Value ; real_T Constant18_Value ; real_T Constant19_Value ;
real_T Constant20_Value ; real_T Constant21_Value ; real_T Constant22_Value ;
real_T Constant23_Value ; real_T Constant3_Value_ja55kf1ii0 ; uint32_T
Output_InitialCondition ; uint32_T FixPtConstant_Value ; uint32_T
Constant_Value_h50w2jt11b ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_Buck_BLDC_2023a_4_GetDWork ( ) ; extern
void mr_Buck_BLDC_2023a_4_SetDWork ( const mxArray * ssDW ) ; extern mxArray
* mr_Buck_BLDC_2023a_4_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Buck_BLDC_2023a_4_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
