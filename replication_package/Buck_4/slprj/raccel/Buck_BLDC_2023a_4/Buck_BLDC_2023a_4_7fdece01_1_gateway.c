#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif
#include "nesl_rtw.h"
#include "Buck_BLDC_2023a_4_7fdece01_1.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_gateway.h"
void Buck_BLDC_2023a_4_7fdece01_1_gateway ( void ) { NeModelParameters
modelparams = { ( enum NeSolverTypeTag ) 1 , 0.001 , 0.001 , 0.001 , TRUE ,
TRUE , ( enum NeModifyAbsTolTag ) 0 , 0.001 , 0.0 , FALSE , FALSE , FALSE , (
enum SscLoggingSettingTag ) 1 , 671102716.0 , FALSE , FALSE , FALSE } ;
NeSolverParameters solverparams = { FALSE , FALSE , TRUE , FALSE , FALSE ,
0.001 , 1e-06 , 1e-09 , FALSE , FALSE , 100U , FALSE , 1U , ( enum
NeConsistencySolverTag ) 0 , ( enum NeIndexReductionMethodTag ) 1 , FALSE ,
1e-09 , ( enum NeToleranceSourceTag ) 1 , 0.001 , 0.001 , 0.001 , TRUE , (
enum NeLocalSolverChoiceTag ) 0 , TRUE , 1U , 5e-05 , TRUE , 2U , 2U , FALSE
, 2U , ( enum NeLinearAlgebraChoiceTag ) 0 , 0U , ( enum
NeEquationFormulationChoiceTag ) 0 , 1024U , TRUE , 0.001 , ( enum
NePartitionStorageMethodTag ) 0 , 1024U , ( enum NePartitionMethodTag ) 1 ,
FALSE , ( enum NeMultibodyLocalSolverChoiceTag ) 0 , 0.001 } ; const
NeOutputParameters * outputparameters = NULL ; NeDae * dae ; size_t
numOutputs = 0 ; int rtpDaes [ 1 ] = { 0 } ; int rtwLogDaes [ 1 ] = { 0 } ;
int * solverHitDaes = NULL ; { static const NeOutputParameters
outputparameters_init [ ] = { { 0U , 0U } , { 0U , 1U } , } ;
outputparameters = outputparameters_init ; numOutputs = sizeof (
outputparameters_init ) / sizeof ( outputparameters_init [ 0 ] ) ; }
Buck_BLDC_2023a_4_7fdece01_1_dae ( & dae , & modelparams , & solverparams ) ;
nesl_register_simulator_group ( "Buck_BLDC_2023a_4/Solver Configuration_1" ,
1 , & dae , & solverparams , & modelparams , numOutputs , outputparameters ,
1 , rtpDaes , 1 , rtwLogDaes , 0 , solverHitDaes ) ; }
