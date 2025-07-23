#include "Buck_BLDC_2023a_4.h"
#include "rtwtypes.h"
#include "mwmathutil.h"
#include <string.h>
#include <stddef.h>
#include "Buck_BLDC_2023a_4_private.h"
#include "rt_logging_mmi.h"
#include "Buck_BLDC_2023a_4_capi.h"
#include "Buck_BLDC_2023a_4_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , &
stopRequested ) ; } rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_engine_exec.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "24.1 (R2024a) 19-Nov-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const
char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_engine_exec.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; real_T look1_binlcpw ( real_T u0 , const real_T bp0 [ ] , const
real_T table [ ] , uint32_T maxIndex ) { real_T frac ; real_T yL_0d0 ;
uint32_T bpIdx ; uint32_T iLeft ; uint32_T iRght ; if ( u0 <= bp0 [ 0U ] ) {
iLeft = 0U ; frac = 0.0 ; } else if ( u0 < bp0 [ maxIndex ] ) { bpIdx =
maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght - iLeft > 1U )
{ if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft = bpIdx ; }
bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) / ( bp0 [
iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex - 1U ; frac = 1.0
; } yL_0d0 = table [ iLeft ] ; return ( table [ iLeft + 1U ] - yL_0d0 ) *
frac + yL_0d0 ; } void MdlInitialize ( void ) { rtDW . c1b5pzrnrj = rtP .
DiscreteTimeIntegrator_IC ; rtDW . gnq15ddheh = rtP .
UnitDelay_InitialCondition ; rtDW . dffmfsmjp4 = rtP .
DiscretePIDController_InitialConditionForIntegrator ; rtDW . ie1wxley43 = rtP
. DiscretePIDController_InitialConditionForFilter ; rtDW . pvs3335hoi = rtP .
UnitDelay_InitialCondition_k3ms2yvusv ; rtX . moh0iithye = rtP .
Integrator_IC ; rtX . dgabmb1iec = rtP . Integrator1_IC ; rtDW . fmxddz4qrb =
rtP . DiscreteTimeIntegrator_IC_p0emdu1vo0 ; rtDW . noeba4iykm = rtP .
Output_InitialCondition ; rtDW . ps0fgvqban = ( rtInf ) ; rtDW . kjkz3elkj0 =
( rtInf ) ; rtX . bt3c5nwd5e = rtP . Integrator_IC_enr3uyn1pn ; rtX .
gdealguncp = rtP . Integrator1_IC_iytltsacmf ; } void MdlStart ( void ) {
NeslRtpManager * manager ; NeslSimulationData * tmp ; NeslSimulator *
simulator ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; char * msg ; real_T tmp_p ; int32_T tmp_e ; boolean_T val ;
boolean_T zcDisabled ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "iinput DC" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "iinput DC" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Buck Converter/PS-Simulink Converter1" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "iinput DC" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. cj2xpnofaw . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"6e87cade-85bc-4f77-8b7e-deebfd475577" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . cj2xpnofaw . AQHandles , hDT , & srcInfo ) ; if ( rtDW . cj2xpnofaw .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . cj2xpnofaw . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
cj2xpnofaw . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . cj2xpnofaw .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . cj2xpnofaw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . cj2xpnofaw . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "I-Batt" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "I-Batt" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Buck Converter/PS-Simulink Converter2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "I-Batt" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. p2fuzd2n1u . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"0e5c81b8-d4fc-4350-b81a-64dcd089aae1" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . p2fuzd2n1u . AQHandles , hDT , & srcInfo ) ; if ( rtDW . p2fuzd2n1u .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . p2fuzd2n1u . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
p2fuzd2n1u . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . p2fuzd2n1u .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . p2fuzd2n1u . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . p2fuzd2n1u . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "I-out" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "I-out" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Buck Converter/PS-Simulink Converter3" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "I-out" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. blchu5fgfp . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"f145ac07-1771-4b4b-97af-a94a44868df2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . blchu5fgfp . AQHandles , hDT , & srcInfo ) ; if ( rtDW . blchu5fgfp .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . blchu5fgfp . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
blchu5fgfp . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . blchu5fgfp .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . blchu5fgfp . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . blchu5fgfp . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Modulated DC Voltage" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "Modulated DC Voltage" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Buck Converter/PS-Simulink Converter" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Modulated DC Voltage" ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. puzcmpy0er . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"ec80cc9f-e8aa-4da4-a296-fd97717ae901" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . puzcmpy0er . AQHandles , hDT , & srcInfo ) ; if ( rtDW . puzcmpy0er .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . puzcmpy0er . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
puzcmpy0er . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . puzcmpy0er .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . puzcmpy0er . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . puzcmpy0er . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Desired speed" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . og021k3ddn . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "c8e7adef-f71d-4dd3-8a9b-3c7451729696" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . og021k3ddn . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . og021k3ddn . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . og021k3ddn . AQHandles , "5e-05" ,
5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . og021k3ddn .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . og021k3ddn . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
og021k3ddn . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
og021k3ddn . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Measured speed" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "Measured speed" ) ; sdiLabelU propName
= sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Sensor" ) ; sdiLabelU blockSID = sdiGetLabelFromChars ( ""
) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "Measured speed" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . pazscy03am . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "b04e6399-4e93-48be-a3bc-f62ee864fce4" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rpm" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . pazscy03am . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . pazscy03am . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . pazscy03am . AQHandles , "5e-05" ,
5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . pazscy03am .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . pazscy03am . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
pazscy03am . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
pazscy03am . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars ( "Buck_BLDC_2023a_4/Sum" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. gcn0hbx5lh . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"6be72bc1-8c73-4297-bbcd-3f3052ccb5df" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . gcn0hbx5lh . AQHandles , hDT , & srcInfo ) ; if ( rtDW . gcn0hbx5lh .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . gcn0hbx5lh . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
gcn0hbx5lh . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . gcn0hbx5lh .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . gcn0hbx5lh . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . gcn0hbx5lh . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Unit Delay" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ;
sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. mdjek0kg4p . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7e29310c-37ab-403e-a937-0924e68ff9cd" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . mdjek0kg4p . AQHandles , hDT , & srcInfo ) ; if ( rtDW . mdjek0kg4p .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . mdjek0kg4p . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
mdjek0kg4p . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . mdjek0kg4p .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . mdjek0kg4p . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . mdjek0kg4p . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Desired\nspeed" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Desired\nspeed" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Buck_BLDC_2023a_4/To Workspace" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Desired\nspeed" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. loexq3aa33 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"d13c58e8-8e5c-4d8d-9acd-ba15b1361bd6" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . loexq3aa33 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . loexq3aa33 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . loexq3aa33 . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
loexq3aa33 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . loexq3aa33 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . loexq3aa33 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . loexq3aa33 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . loexq3aa33 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"desired_speed" ) ; sdiRegisterWksVariable ( rtDW . loexq3aa33 . AQHandles ,
varName , "structwithtime" ) ; sdiFreeLabel ( varName ) ; } } } } } { { {
bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Unit Delay" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Unit Delay" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Buck_BLDC_2023a_4/To Workspace1" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Unit Delay" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. mlazb5xajw . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"3caa5e7f-c532-45ae-a71d-b0370daac41f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . mlazb5xajw . AQHandles , hDT , & srcInfo ) ; if ( rtDW . mlazb5xajw .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . mlazb5xajw . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
mlazb5xajw . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . mlazb5xajw .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . mlazb5xajw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . mlazb5xajw . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . mlazb5xajw . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"Measured_Speed" ) ; sdiRegisterWksVariable ( rtDW . mlazb5xajw . AQHandles ,
varName , "structwithtime" ) ; sdiFreeLabel ( varName ) ; } } } } } { { {
bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Unit Delay" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "Unit Delay" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Buck_BLDC_2023a_4/To Workspace2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Unit Delay" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. jab5ce0r52 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"519d3975-ecbe-4307-b6fe-337a6b54f5a8" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
rtDW . jab5ce0r52 . AQHandles , hDT , & srcInfo ) ; if ( rtDW . jab5ce0r52 .
AQHandles ) { sdiSetSignalSampleTimeString ( rtDW . jab5ce0r52 . AQHandles ,
"5e-05" , 5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW .
jab5ce0r52 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . jab5ce0r52 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . jab5ce0r52 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . jab5ce0r52 . AQHandles , loggedName , origSigName , propName ) ;
sdiAsyncRepoSetBlockPathDomain ( rtDW . jab5ce0r52 . AQHandles ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { { sdiLabelU varName = sdiGetLabelFromChars (
"actual_speed_no_fault" ) ; sdiRegisterWksVariable ( rtDW . jab5ce0r52 .
AQHandles , varName , "structwithtime" ) ; sdiFreeLabel ( varName ) ; } } } }
} { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T rt_ScopeSignalWidths [
] = { 1 } ; static int_T rt_ScopeSignalNumDimensions [ ] = { 1 } ; static
int_T rt_ScopeSignalDimensions [ ] = { 1 } ; static void *
rt_ScopeCurrSigDims [ ] = { ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize
[ ] = { 4 } ; static const char_T * rt_ScopeSignalLabels [ ] = { "" } ;
static char_T rt_ScopeSignalTitles [ ] = "" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 0 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 } ; static int_T rt_ScopeSignalPlotStyles [
] = { 1 } ; BuiltInDTypeId dTypes [ 1 ] = { SS_DOUBLE } ; static char_T
rt_ScopeBlockName [ ] = "Buck_BLDC_2023a_4/Sensor/Scope3" ; static int_T
rt_ScopeFrameData [ ] = { 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 1 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . bcintaxab2 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "ScopeData1" , 1 , 0 , 1 , 5.0E-5 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . bcintaxab2 .
LoggedData == ( NULL ) ) return ; } { { { bool isStreamoutAlreadyRegistered =
false ; { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "current" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "current" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Subsystem/PS-Simulink Converter1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "current" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . cj2xpnofawx . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "ffb1de59-6b1f-4735-85f1-666723cafeab" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "A" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . cj2xpnofawx . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . cj2xpnofawx . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . cj2xpnofawx . AQHandles , "5e-05" ,
5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . cj2xpnofawx .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . cj2xpnofawx . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
cj2xpnofawx . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
cj2xpnofawx . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "voltage" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "voltage" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Buck_BLDC_2023a_4/Subsystem/PS-Simulink Converter2" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "voltage" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . p2fuzd2n1u5 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "98102502-a0a8-4b2b-83de-4a045aba0c0f" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "V" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . p2fuzd2n1u5 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . p2fuzd2n1u5 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . p2fuzd2n1u5 . AQHandles , "5e-05" ,
5.0E-5 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . p2fuzd2n1u5 .
AQHandles , 0.0 ) ; sdiSetRunStartTime ( rtDW . p2fuzd2n1u5 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW .
p2fuzd2n1u5 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
p2fuzd2n1u5 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } manager = nesl_lease_rtp_manager (
"Buck_BLDC_2023a_4/Solver Configuration_1" , 0 ) ; zcDisabled =
pointer_is_null ( manager ) ; if ( zcDisabled ) {
Buck_BLDC_2023a_4_7fdece01_1_gateway ( ) ; manager = nesl_lease_rtp_manager (
"Buck_BLDC_2023a_4/Solver Configuration_1" , 0 ) ; } rtDW . id1ec1se2a = (
void * ) manager ; rtDW . bitkls2ofs = true ; simulator =
nesl_lease_simulator ( "Buck_BLDC_2023a_4/Solver Configuration_1" , 0 , 0 ) ;
rtDW . lhzmdhlnwj = ( void * ) simulator ; zcDisabled = pointer_is_null (
rtDW . lhzmdhlnwj ) ; if ( zcDisabled ) {
Buck_BLDC_2023a_4_7fdece01_1_gateway ( ) ; simulator = nesl_lease_simulator (
"Buck_BLDC_2023a_4/Solver Configuration_1" , 0 , 0 ) ; rtDW . lhzmdhlnwj = (
void * ) simulator ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"Buck_BLDC_2023a_4/Solver Configuration_100" , ( void * * ) ( & rtDW .
lhzmdhlnwj ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; tmp = nesl_create_simulation_data ( ) ; rtDW .
bzdscu24o4 = ( void * ) tmp ; diagnosticManager = rtw_create_diagnostics ( )
; rtDW . aqzmv3k4vt = ( void * ) diagnosticManager ; rtB . modelParameters .
mSolverType = NE_SOLVER_TYPE_ODE ; rtB . modelParameters . mSolverAbsTol =
0.001 ; rtB . modelParameters . mSolverRelTol = 0.001 ; rtB . modelParameters
. mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; rtB . modelParameters .
mStartTime = 0.0 ; rtB . modelParameters . mLoadInitialState = false ; rtB .
modelParameters . mUseSimState = false ; rtB . modelParameters .
mLinTrimCompile = false ; rtB . modelParameters . mLoggingMode =
SSC_LOGGING_ON ; rtB . modelParameters . mRTWModifiedTimeStamp =
6.71102716E+8 ; rtB . modelParameters . mZcDisabled = false ; rtB .
modelParameters . mUseModelRefSolver = false ; rtB . modelParameters .
mTargetFPGAHIL = false ; tmp_p = 0.001 ; rtB . modelParameters .
mSolverTolerance = tmp_p ; tmp_p = 0.0 ; rtB . modelParameters .
mFixedStepSize = tmp_p ; zcDisabled = true ; rtB . modelParameters .
mVariableStepSolver = zcDisabled ; zcDisabled = true ; rtB . modelParameters
. mIsUsingODEN = zcDisabled ; zcDisabled = slIsRapidAcceleratorSimulating ( )
; val = ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( zcDisabled ) { val =
( val && ssIsFirstInitCond ( rtS ) ) ; } rtB . modelParameters .
mLoadInitialState = val ; rtB . modelParameters . mZcDisabled = false ;
simulator = ( NeslSimulator * ) rtDW . lhzmdhlnwj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . aqzmv3k4vt ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
nesl_initialize_simulator ( simulator , & rtB . modelParameters ,
diagnosticManager ) ; if ( tmp_e != 0 ) { zcDisabled = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( zcDisabled ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulator =
nesl_lease_simulator ( "Buck_BLDC_2023a_4/Solver Configuration_1" , 1 , 0 ) ;
rtDW . ch3qij2jlm = ( void * ) simulator ; zcDisabled = pointer_is_null (
rtDW . ch3qij2jlm ) ; if ( zcDisabled ) {
Buck_BLDC_2023a_4_7fdece01_1_gateway ( ) ; simulator = nesl_lease_simulator (
"Buck_BLDC_2023a_4/Solver Configuration_1" , 1 , 0 ) ; rtDW . ch3qij2jlm = (
void * ) simulator ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"Buck_BLDC_2023a_4/Solver Configuration_110" , ( void * * ) ( & rtDW .
ch3qij2jlm ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; tmp = nesl_create_simulation_data ( ) ; rtDW .
bqlnjhh13e = ( void * ) tmp ; diagnosticManager = rtw_create_diagnostics ( )
; rtDW . gylnipw0uk = ( void * ) diagnosticManager ; rtB .
modelParameters_mbvzarwird . mSolverType = NE_SOLVER_TYPE_ODE ; rtB .
modelParameters_mbvzarwird . mSolverAbsTol = 0.001 ; rtB .
modelParameters_mbvzarwird . mSolverRelTol = 0.001 ; rtB .
modelParameters_mbvzarwird . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; rtB
. modelParameters_mbvzarwird . mStartTime = 0.0 ; rtB .
modelParameters_mbvzarwird . mLoadInitialState = false ; rtB .
modelParameters_mbvzarwird . mUseSimState = false ; rtB .
modelParameters_mbvzarwird . mLinTrimCompile = false ; rtB .
modelParameters_mbvzarwird . mLoggingMode = SSC_LOGGING_ON ; rtB .
modelParameters_mbvzarwird . mRTWModifiedTimeStamp = 6.71102716E+8 ; rtB .
modelParameters_mbvzarwird . mZcDisabled = false ; rtB .
modelParameters_mbvzarwird . mUseModelRefSolver = false ; rtB .
modelParameters_mbvzarwird . mTargetFPGAHIL = false ; tmp_p = 0.001 ; rtB .
modelParameters_mbvzarwird . mSolverTolerance = tmp_p ; tmp_p = 0.0 ; rtB .
modelParameters_mbvzarwird . mFixedStepSize = tmp_p ; zcDisabled = true ; rtB
. modelParameters_mbvzarwird . mVariableStepSolver = zcDisabled ; zcDisabled
= true ; rtB . modelParameters_mbvzarwird . mIsUsingODEN = zcDisabled ;
zcDisabled = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( zcDisabled ) { val = ( val
&& ssIsFirstInitCond ( rtS ) ) ; } rtB . modelParameters_mbvzarwird .
mLoadInitialState = val ; rtB . modelParameters_mbvzarwird . mZcDisabled =
false ; simulator = ( NeslSimulator * ) rtDW . ch3qij2jlm ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . gylnipw0uk ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
nesl_initialize_simulator ( simulator , & rtB . modelParameters_mbvzarwird ,
diagnosticManager ) ; if ( tmp_e != 0 ) { zcDisabled = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( zcDisabled ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } simulator =
nesl_lease_simulator ( "Buck_BLDC_2023a_4/Solver Configuration_1" , 1 , 1 ) ;
rtDW . is1htqb5zy = ( void * ) simulator ; zcDisabled = pointer_is_null (
rtDW . is1htqb5zy ) ; if ( zcDisabled ) {
Buck_BLDC_2023a_4_7fdece01_1_gateway ( ) ; simulator = nesl_lease_simulator (
"Buck_BLDC_2023a_4/Solver Configuration_1" , 1 , 1 ) ; rtDW . is1htqb5zy = (
void * ) simulator ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"Buck_BLDC_2023a_4/Solver Configuration_111" , ( void * * ) ( & rtDW .
is1htqb5zy ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; tmp = nesl_create_simulation_data ( ) ; rtDW .
he53sqyi2y = ( void * ) tmp ; diagnosticManager = rtw_create_diagnostics ( )
; rtDW . bluywrteob = ( void * ) diagnosticManager ; rtB .
modelParameters_cl54gopm0x . mSolverType = NE_SOLVER_TYPE_ODE ; rtB .
modelParameters_cl54gopm0x . mSolverAbsTol = 0.001 ; rtB .
modelParameters_cl54gopm0x . mSolverRelTol = 0.001 ; rtB .
modelParameters_cl54gopm0x . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; rtB
. modelParameters_cl54gopm0x . mStartTime = 0.0 ; rtB .
modelParameters_cl54gopm0x . mLoadInitialState = false ; rtB .
modelParameters_cl54gopm0x . mUseSimState = false ; rtB .
modelParameters_cl54gopm0x . mLinTrimCompile = false ; rtB .
modelParameters_cl54gopm0x . mLoggingMode = SSC_LOGGING_ON ; rtB .
modelParameters_cl54gopm0x . mRTWModifiedTimeStamp = 6.71102716E+8 ; rtB .
modelParameters_cl54gopm0x . mZcDisabled = false ; rtB .
modelParameters_cl54gopm0x . mUseModelRefSolver = false ; rtB .
modelParameters_cl54gopm0x . mTargetFPGAHIL = false ; tmp_p = 0.001 ; rtB .
modelParameters_cl54gopm0x . mSolverTolerance = tmp_p ; tmp_p = 0.0 ; rtB .
modelParameters_cl54gopm0x . mFixedStepSize = tmp_p ; zcDisabled = true ; rtB
. modelParameters_cl54gopm0x . mVariableStepSolver = zcDisabled ; zcDisabled
= true ; rtB . modelParameters_cl54gopm0x . mIsUsingODEN = zcDisabled ;
zcDisabled = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( zcDisabled ) { val = ( val
&& ssIsFirstInitCond ( rtS ) ) ; } rtB . modelParameters_cl54gopm0x .
mLoadInitialState = val ; rtB . modelParameters_cl54gopm0x . mZcDisabled =
false ; simulator = ( NeslSimulator * ) rtDW . is1htqb5zy ; diagnosticManager
= ( NeuDiagnosticManager * ) rtDW . bluywrteob ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
nesl_initialize_simulator ( simulator , & rtB . modelParameters_cl54gopm0x ,
diagnosticManager ) ; if ( tmp_e != 0 ) { zcDisabled = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( zcDisabled ) { msg = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } MdlInitialize ( ) ;
} void MdlOutputs ( int_T tid ) { NeslRtpManager * rtpManager ;
NeslSimulationData * simulationData ; NeslSimulator * simulator ;
NeuDiagnosticManager * diag ; NeuDiagnosticTree * diagTree ; char * msg ;
real_T * parameterBundle_mRealParameters_mX ; int32_T i ; boolean_T ok ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . boxlro0v4w = rtDW . c1b5pzrnrj ; rtB
. dhj2kqscw2 = rtP . Gain_Gain * rtB . boxlro0v4w ; rtB . kuelqyv3wb = rtDW .
gnq15ddheh ; rtB . edxvioyzlc = rtB . dhj2kqscw2 - rtB . kuelqyv3wb ; rtB .
crw5li1kzs = rtP . DiscretePIDController_P * rtB . edxvioyzlc ; rtB .
ez4vimsggj = rtDW . dffmfsmjp4 ; rtB . lsgonhap4q = rtP .
DiscretePIDController_D * rtB . edxvioyzlc ; rtB . ccdpg2e51c = rtDW .
ie1wxley43 ; rtB . et2gzftmfl = rtB . lsgonhap4q - rtB . ccdpg2e51c ; rtB .
hmsv5lubrs = rtP . DiscretePIDController_N * rtB . et2gzftmfl ; rtB .
k0h0smmumn = ( rtB . crw5li1kzs + rtB . ez4vimsggj ) + rtB . hmsv5lubrs ; rtB
. u0 = rtB . k0h0smmumn ; rtB . u1 = rtP .
DiscretePIDController_LowerSaturationLimit ; rtB . u2 = rtP .
DiscretePIDController_UpperSaturationLimit ; if ( rtB . u0 > rtB . u2 ) { rtB
. e32tu1k5dy = rtB . u2 ; } else if ( rtB . u0 < rtB . u1 ) { rtB .
e32tu1k5dy = rtB . u1 ; } else { rtB . e32tu1k5dy = rtB . u0 ; } rtB . u0 =
rtB . e32tu1k5dy ; rtB . u1 = rtP . Saturation_LowerSat ; rtB . u2 = rtP .
Saturation_UpperSat ; if ( rtB . u0 > rtB . u2 ) { rtB . mv2egnitku = rtB .
u2 ; } else if ( rtB . u0 < rtB . u1 ) { rtB . mv2egnitku = rtB . u1 ; } else
{ rtB . mv2egnitku = rtB . u0 ; } rtB . j5vnwqxvus = ( rtB . mv2egnitku !=
rtP . Constant_Value ) ; rtB . i230d00p4f = ssGetTaskTime ( rtS , 1 ) ; rtB .
kyvlw1eg1j = rtB . i230d00p4f + rtP . Constant3_Value ; rtB . myvwt33bkt =
muDoubleScalarRem ( rtB . kyvlw1eg1j , rtP . Constant2_Value ) ; rtB .
l1gsa3trsh = rtP . uib1_Gain * rtB . myvwt33bkt ; rtB . oepjxvzqvl = 2.0 *
rtB . l1gsa3trsh - 1.0 ; rtB . lrnvfgtgd0 = ( rtB . oepjxvzqvl + 1.0 ) * 0.5
; rtB . az1w2epyt0 = ( rtB . mv2egnitku >= rtB . lrnvfgtgd0 ) ; rtB .
lbwft3qm51 = ( rtB . j5vnwqxvus && rtB . az1w2epyt0 ) ; rtB . d4qoidu0ry =
rtB . lbwft3qm51 ; rtB . dnqdrumv1i = ! ( rtB . d4qoidu0ry != 0.0 ) ; rtB .
dquprl145n = rtB . dnqdrumv1i ; rtB . igqbtwb1cb = rtP . convertsintoms_Gain
* rtB . kuelqyv3wb ; rtB . ntau2arxhc = rtB . igqbtwb1cb * rtB . igqbtwb1cb ;
rtB . k1rj25ivdk = rtP . coeff_aerorCwA2_Gain * rtB . ntau2arxhc ; rtB .
mklcfmrns4 = rtP . Rolling_friction_Value + rtB . k1rj25ivdk ; rtB .
cjhohfslts = rtP . TFr_wheel_Gain * rtB . mklcfmrns4 ; rtB . aoj0xh52vh = rtP
. loadtorque_Gain * rtB . cjhohfslts ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . bvmbcuedts [ 0 ] = rtB . d4qoidu0ry ; rtB . bvmbcuedts [ 1 ] = 0.0 ;
rtB . bvmbcuedts [ 2 ] = 0.0 ; rtDW . fwtwpjliml [ 0 ] = ! ( rtB . bvmbcuedts
[ 0 ] == rtDW . fwtwpjliml [ 1 ] ) ; rtDW . fwtwpjliml [ 1 ] = rtB .
bvmbcuedts [ 0 ] ; rtB . bvmbcuedts [ 0 ] = rtDW . fwtwpjliml [ 1 ] ; rtB .
bvmbcuedts [ 3 ] = rtDW . fwtwpjliml [ 0 ] ; rtB . alvydcpetd [ 0 ] = rtB .
dquprl145n ; rtB . alvydcpetd [ 1 ] = 0.0 ; rtB . alvydcpetd [ 2 ] = 0.0 ;
rtDW . hkvyb0ptbn [ 0 ] = ! ( rtB . alvydcpetd [ 0 ] == rtDW . hkvyb0ptbn [ 1
] ) ; rtDW . hkvyb0ptbn [ 1 ] = rtB . alvydcpetd [ 0 ] ; rtB . alvydcpetd [ 0
] = rtDW . hkvyb0ptbn [ 1 ] ; rtB . alvydcpetd [ 3 ] = rtDW . hkvyb0ptbn [ 0
] ; rtB . k1eonvu0jk [ 0 ] = rtB . aoj0xh52vh ; rtB . k1eonvu0jk [ 1 ] = 0.0
; rtB . k1eonvu0jk [ 2 ] = 0.0 ; rtDW . nssyg3ul2x [ 0 ] = ! ( rtB .
k1eonvu0jk [ 0 ] == rtDW . nssyg3ul2x [ 1 ] ) ; rtDW . nssyg3ul2x [ 1 ] = rtB
. k1eonvu0jk [ 0 ] ; rtB . k1eonvu0jk [ 0 ] = rtDW . nssyg3ul2x [ 1 ] ; rtB .
k1eonvu0jk [ 3 ] = rtDW . nssyg3ul2x [ 0 ] ; } rtB . k5fkctjwt3 = rtDW .
pvs3335hoi ; rtB . ndvl0vsmvk = muDoubleScalarRem ( rtB . k5fkctjwt3 , rtP .
Constant3_Value_ja55kf1ii0 ) ; rtB . cri2ighsbt = ( rtB . ndvl0vsmvk > rtP .
Constant12_Value ) ; rtB . dehruik5oa = ( rtB . ndvl0vsmvk <= rtP .
Constant13_Value ) ; rtB . dhojtt4r2r = ( rtB . cri2ighsbt && rtB .
dehruik5oa ) ; rtB . cngejipk01 = rtB . dhojtt4r2r ; rtB . e4ir2xx5wg = rtP .
Gain6_Gain * rtB . cngejipk01 ; rtB . ny0skh2lmi = ( rtB . ndvl0vsmvk > rtP .
Constant16_Value ) ; rtB . cprrfu52rw = ( rtB . ndvl0vsmvk <= rtP .
Constant17_Value ) ; rtB . fqj12khujg = ( rtB . ny0skh2lmi && rtB .
cprrfu52rw ) ; rtB . lidvtlakg4 = rtB . fqj12khujg ; rtB . lut33f4odj = rtP .
Gain7_Gain * rtB . lidvtlakg4 ; rtB . m4jno1bkib = ( rtB . ndvl0vsmvk > rtP .
Constant18_Value ) ; rtB . pwxvkz4cs3 = ( rtB . ndvl0vsmvk <= rtP .
Constant19_Value ) ; rtB . f5vvbgw04z = ( rtB . m4jno1bkib && rtB .
pwxvkz4cs3 ) ; rtB . k0jkfliw3f = rtB . f5vvbgw04z ; rtB . bqudhrxhmu = rtP .
Gain8_Gain * rtB . k0jkfliw3f ; rtB . mur22rltjv = ( rtB . ndvl0vsmvk > rtP .
Constant20_Value ) ; rtB . pg44xwiojj = ( rtB . ndvl0vsmvk <= rtP .
Constant21_Value ) ; rtB . g3q3b4gkk1 = ( rtB . mur22rltjv && rtB .
pg44xwiojj ) ; rtB . mgtbco3ykj = rtB . g3q3b4gkk1 ; rtB . ltac0jcdqm = rtP .
Gain9_Gain * rtB . mgtbco3ykj ; rtB . bov2zzmsnh = ( rtB . ndvl0vsmvk > rtP .
Constant22_Value ) ; rtB . ioaefphlhe = ( rtB . ndvl0vsmvk <= rtP .
Constant23_Value ) ; rtB . obpxpmwwxu = ( rtB . bov2zzmsnh && rtB .
ioaefphlhe ) ; rtB . e5xs1fgp0p = rtB . obpxpmwwxu ; rtB . p5xsnshbs2 = rtP .
Gain10_Gain * rtB . e5xs1fgp0p ; rtB . oo1b0vvxiu = ( rtB . ndvl0vsmvk > rtP
. Constant14_Value ) ; rtB . nf5mwr2amm = ( rtB . ndvl0vsmvk <= rtP .
Constant15_Value ) ; rtB . ajs0qdm2js = ( rtB . oo1b0vvxiu && rtB .
nf5mwr2amm ) ; rtB . howt2qok0i = rtB . ajs0qdm2js ; rtB . jjm52urekq = rtP .
Gain11_Gain * rtB . howt2qok0i ; rtB . ldg3ehsse5 = ( ( ( ( rtB . e4ir2xx5wg
+ rtB . lut33f4odj ) + rtB . bqudhrxhmu ) + rtB . ltac0jcdqm ) + rtB .
p5xsnshbs2 ) + rtB . jjm52urekq ; rtB . u0 = rtB . ldg3ehsse5 ; rtB . u1 =
rtP . Saturation_LowerSat_ds3qzssna2 ; rtB . u2 = rtP .
Saturation_UpperSat_i0xk5bf3au ; if ( rtB . u0 > rtB . u2 ) { rtB .
kn3hi4jtzs = rtB . u2 ; } else if ( rtB . u0 < rtB . u1 ) { rtB . kn3hi4jtzs
= rtB . u1 ; } else { rtB . kn3hi4jtzs = rtB . u0 ; } switch ( ( int32_T )
rtB . kn3hi4jtzs ) { case 1 : for ( i = 0 ; i < 6 ; i ++ ) { rtB . dv4 [ i ]
= rtP . Constant_Value_oq05l1rpow [ i ] ; } break ; case 2 : for ( i = 0 ; i
< 6 ; i ++ ) { rtB . dv4 [ i ] = rtP . Constant1_Value [ i ] ; } break ; case
3 : for ( i = 0 ; i < 6 ; i ++ ) { rtB . dv4 [ i ] = rtP .
Constant2_Value_p0oprvq4dx [ i ] ; } break ; case 4 : for ( i = 0 ; i < 6 ; i
++ ) { rtB . dv4 [ i ] = rtP . Constant4_Value [ i ] ; } break ; case 5 : for
( i = 0 ; i < 6 ; i ++ ) { rtB . dv4 [ i ] = rtP . Constant5_Value [ i ] ; }
break ; default : for ( i = 0 ; i < 6 ; i ++ ) { rtB . dv4 [ i ] = rtP .
Constant6_Value [ i ] ; } break ; } for ( i = 0 ; i < 6 ; i ++ ) { rtB .
jkk4cu5kch [ i ] = rtB . dv4 [ i ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . fx4wpmz5u0 [ 0 ] = rtB . jkk4cu5kch [ 1 ] ; rtB . fx4wpmz5u0 [ 1 ] =
0.0 ; rtB . fx4wpmz5u0 [ 2 ] = 0.0 ; rtDW . fyl5munlxu [ 0 ] = ! ( rtB .
fx4wpmz5u0 [ 0 ] == rtDW . fyl5munlxu [ 1 ] ) ; rtDW . fyl5munlxu [ 1 ] = rtB
. fx4wpmz5u0 [ 0 ] ; rtB . fx4wpmz5u0 [ 0 ] = rtDW . fyl5munlxu [ 1 ] ; rtB .
fx4wpmz5u0 [ 3 ] = rtDW . fyl5munlxu [ 0 ] ; rtB . by1nqwksec [ 0 ] = rtB .
jkk4cu5kch [ 2 ] ; rtB . by1nqwksec [ 1 ] = 0.0 ; rtB . by1nqwksec [ 2 ] =
0.0 ; rtDW . bs1qjqmif1 [ 0 ] = ! ( rtB . by1nqwksec [ 0 ] == rtDW .
bs1qjqmif1 [ 1 ] ) ; rtDW . bs1qjqmif1 [ 1 ] = rtB . by1nqwksec [ 0 ] ; rtB .
by1nqwksec [ 0 ] = rtDW . bs1qjqmif1 [ 1 ] ; rtB . by1nqwksec [ 3 ] = rtDW .
bs1qjqmif1 [ 0 ] ; rtB . hazdzaaae3 [ 0 ] = rtB . jkk4cu5kch [ 3 ] ; rtB .
hazdzaaae3 [ 1 ] = 0.0 ; rtB . hazdzaaae3 [ 2 ] = 0.0 ; rtDW . edfdikmfnp [ 0
] = ! ( rtB . hazdzaaae3 [ 0 ] == rtDW . edfdikmfnp [ 1 ] ) ; rtDW .
edfdikmfnp [ 1 ] = rtB . hazdzaaae3 [ 0 ] ; rtB . hazdzaaae3 [ 0 ] = rtDW .
edfdikmfnp [ 1 ] ; rtB . hazdzaaae3 [ 3 ] = rtDW . edfdikmfnp [ 0 ] ; rtB .
j2a44cvuzt [ 0 ] = rtB . jkk4cu5kch [ 4 ] ; rtB . j2a44cvuzt [ 1 ] = 0.0 ;
rtB . j2a44cvuzt [ 2 ] = 0.0 ; rtDW . dnqfkyv2uz [ 0 ] = ! ( rtB . j2a44cvuzt
[ 0 ] == rtDW . dnqfkyv2uz [ 1 ] ) ; rtDW . dnqfkyv2uz [ 1 ] = rtB .
j2a44cvuzt [ 0 ] ; rtB . j2a44cvuzt [ 0 ] = rtDW . dnqfkyv2uz [ 1 ] ; rtB .
j2a44cvuzt [ 3 ] = rtDW . dnqfkyv2uz [ 0 ] ; rtB . lrl4sovswi [ 0 ] = rtB .
jkk4cu5kch [ 5 ] ; rtB . lrl4sovswi [ 1 ] = 0.0 ; rtB . lrl4sovswi [ 2 ] =
0.0 ; rtDW . ixu0au5oat [ 0 ] = ! ( rtB . lrl4sovswi [ 0 ] == rtDW .
ixu0au5oat [ 1 ] ) ; rtDW . ixu0au5oat [ 1 ] = rtB . lrl4sovswi [ 0 ] ; rtB .
lrl4sovswi [ 0 ] = rtDW . ixu0au5oat [ 1 ] ; rtB . lrl4sovswi [ 3 ] = rtDW .
ixu0au5oat [ 0 ] ; rtB . llsv3ekyqe [ 0 ] = rtB . jkk4cu5kch [ 0 ] ; rtB .
llsv3ekyqe [ 1 ] = 0.0 ; rtB . llsv3ekyqe [ 2 ] = 0.0 ; rtDW . bd53t3itfv [ 0
] = ! ( rtB . llsv3ekyqe [ 0 ] == rtDW . bd53t3itfv [ 1 ] ) ; rtDW .
bd53t3itfv [ 1 ] = rtB . llsv3ekyqe [ 0 ] ; rtB . llsv3ekyqe [ 0 ] = rtDW .
bd53t3itfv [ 1 ] ; rtB . llsv3ekyqe [ 3 ] = rtDW . bd53t3itfv [ 0 ] ; } if (
rtDW . bitkls2ofs ) { rtB . d = rtP . RTP_DBEA2577_vc_Value ;
parameterBundle_mRealParameters_mX = & rtB . d ; rtpManager = (
NeslRtpManager * ) rtDW . id1ec1se2a ; diag = rtw_create_diagnostics ( ) ;
diagTree = neu_diagnostic_manager_get_initial_tree ( diag ) ; rtB . expl_temp
. mRealParameters . mN = 1 ; rtB . expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; rtB . expl_temp . mLogicalParameters .
mN = 0 ; rtB . expl_temp . mLogicalParameters . mX = NULL ; rtB . expl_temp .
mIntegerParameters . mN = 0 ; rtB . expl_temp . mIntegerParameters . mX =
NULL ; rtB . expl_temp . mIndexParameters . mN = 0 ; rtB . expl_temp .
mIndexParameters . mX = NULL ; ok = nesl_rtp_manager_set_rtps ( rtpManager ,
ssGetT ( rtS ) , rtB . expl_temp , diag ) ; if ( ! ok ) { ok =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( ok ) { msg =
rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } }
rtDW . bitkls2ofs = false ; simulationData = ( NeslSimulationData * ) rtDW .
bzdscu24o4 ; rtB . time = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & rtB . time ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 64 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . bznvn4zrrr [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 19 ; simulationData -> mData ->
mModeVector . mX = & rtDW . nto4t3wzze [ 0 ] ; ok = ( ssIsMajorTimeStep ( rtS
) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData ->
mData -> mFoundZcEvents = ok ; simulationData -> mData -> mHadEvents = false
; simulationData -> mData -> mIsMajorTimeStep = true ; ok = ( ssGetMdlInfoPtr
( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = ok ; ok = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = ok ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; ok = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = ok ; simulationData ->
mData -> mIsModeUpdateTimeStep = true ; rtB . iv2 [ 0 ] = 0 ; rtB . dv2 [ 0 ]
= rtB . bvmbcuedts [ 0 ] ; rtB . dv2 [ 1 ] = rtB . bvmbcuedts [ 1 ] ; rtB .
dv2 [ 2 ] = rtB . bvmbcuedts [ 2 ] ; rtB . dv2 [ 3 ] = rtB . bvmbcuedts [ 3 ]
; rtB . iv2 [ 1 ] = 4 ; rtB . dv2 [ 4 ] = rtB . alvydcpetd [ 0 ] ; rtB . dv2
[ 5 ] = rtB . alvydcpetd [ 1 ] ; rtB . dv2 [ 6 ] = rtB . alvydcpetd [ 2 ] ;
rtB . dv2 [ 7 ] = rtB . alvydcpetd [ 3 ] ; rtB . iv2 [ 2 ] = 8 ; rtB . dv2 [
8 ] = rtB . k1eonvu0jk [ 0 ] ; rtB . dv2 [ 9 ] = rtB . k1eonvu0jk [ 1 ] ; rtB
. dv2 [ 10 ] = rtB . k1eonvu0jk [ 2 ] ; rtB . dv2 [ 11 ] = rtB . k1eonvu0jk [
3 ] ; rtB . iv2 [ 3 ] = 12 ; rtB . dv2 [ 12 ] = rtB . fx4wpmz5u0 [ 0 ] ; rtB
. dv2 [ 13 ] = rtB . fx4wpmz5u0 [ 1 ] ; rtB . dv2 [ 14 ] = rtB . fx4wpmz5u0 [
2 ] ; rtB . dv2 [ 15 ] = rtB . fx4wpmz5u0 [ 3 ] ; rtB . iv2 [ 4 ] = 16 ; rtB
. dv2 [ 16 ] = rtB . by1nqwksec [ 0 ] ; rtB . dv2 [ 17 ] = rtB . by1nqwksec [
1 ] ; rtB . dv2 [ 18 ] = rtB . by1nqwksec [ 2 ] ; rtB . dv2 [ 19 ] = rtB .
by1nqwksec [ 3 ] ; rtB . iv2 [ 5 ] = 20 ; rtB . dv2 [ 20 ] = rtB . hazdzaaae3
[ 0 ] ; rtB . dv2 [ 21 ] = rtB . hazdzaaae3 [ 1 ] ; rtB . dv2 [ 22 ] = rtB .
hazdzaaae3 [ 2 ] ; rtB . dv2 [ 23 ] = rtB . hazdzaaae3 [ 3 ] ; rtB . iv2 [ 6
] = 24 ; rtB . dv2 [ 24 ] = rtB . j2a44cvuzt [ 0 ] ; rtB . dv2 [ 25 ] = rtB .
j2a44cvuzt [ 1 ] ; rtB . dv2 [ 26 ] = rtB . j2a44cvuzt [ 2 ] ; rtB . dv2 [ 27
] = rtB . j2a44cvuzt [ 3 ] ; rtB . iv2 [ 7 ] = 28 ; rtB . dv2 [ 28 ] = rtB .
lrl4sovswi [ 0 ] ; rtB . dv2 [ 29 ] = rtB . lrl4sovswi [ 1 ] ; rtB . dv2 [ 30
] = rtB . lrl4sovswi [ 2 ] ; rtB . dv2 [ 31 ] = rtB . lrl4sovswi [ 3 ] ; rtB
. iv2 [ 8 ] = 32 ; rtB . dv2 [ 32 ] = rtB . llsv3ekyqe [ 0 ] ; rtB . dv2 [ 33
] = rtB . llsv3ekyqe [ 1 ] ; rtB . dv2 [ 34 ] = rtB . llsv3ekyqe [ 2 ] ; rtB
. dv2 [ 35 ] = rtB . llsv3ekyqe [ 3 ] ; rtB . iv2 [ 9 ] = 36 ; simulationData
-> mData -> mInputValues . mN = 36 ; simulationData -> mData -> mInputValues
. mX = & rtB . dv2 [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 10
; simulationData -> mData -> mInputOffsets . mX = & rtB . iv2 [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 83 ; simulationData -> mData ->
mOutputs . mX = & rtB . jhdkhjxll0 [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; simulationData ->
mData -> mDstateHasChanged = false ; rtB . time_kkiq3xxxve = ssGetTaskTime (
rtS , 1 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & rtB . time_kkiq3xxxve ; rtB . isHit = 0 ;
simulationData -> mData -> mSampleHits . mN = 1 ; simulationData -> mData ->
mSampleHits . mX = & rtB . isHit ; simulationData -> mData ->
mIsFundamentalSampleHit = true ; simulationData -> mData -> mHadEvents =
false ; simulator = ( NeslSimulator * ) rtDW . lhzmdhlnwj ; diag = (
NeuDiagnosticManager * ) rtDW . aqzmv3k4vt ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; i = ne_simulator_method (
simulator , NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( i != 0 ) { ok =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( ok ) { msg =
rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } if (
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . bqlnjhh13e ; rtB . time_cxarnvbvui = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & rtB . time_cxarnvbvui ; simulationData -> mData ->
mContStates . mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . itgthkpdui ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
d4gmtkdgyk ; ok = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = ok ;
simulationData -> mData -> mHadEvents = false ; simulationData -> mData ->
mIsMajorTimeStep = true ; ok = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
ok ; ok = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = ok ; simulationData -> mData -> mIsComputingJacobian =
false ; simulationData -> mData -> mIsEvaluatingF0 = false ; ok =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = ok ; simulationData -> mData ->
mIsModeUpdateTimeStep = true ; rtB . iv [ 0 ] = 0 ; rtB . dv [ 0 ] = rtB .
bvmbcuedts [ 0 ] ; rtB . dv [ 1 ] = rtB . bvmbcuedts [ 1 ] ; rtB . dv [ 2 ] =
rtB . bvmbcuedts [ 2 ] ; rtB . dv [ 3 ] = rtB . bvmbcuedts [ 3 ] ; rtB . iv [
1 ] = 4 ; rtB . dv [ 4 ] = rtB . alvydcpetd [ 0 ] ; rtB . dv [ 5 ] = rtB .
alvydcpetd [ 1 ] ; rtB . dv [ 6 ] = rtB . alvydcpetd [ 2 ] ; rtB . dv [ 7 ] =
rtB . alvydcpetd [ 3 ] ; rtB . iv [ 2 ] = 8 ; rtB . dv [ 8 ] = rtB .
k1eonvu0jk [ 0 ] ; rtB . dv [ 9 ] = rtB . k1eonvu0jk [ 1 ] ; rtB . dv [ 10 ]
= rtB . k1eonvu0jk [ 2 ] ; rtB . dv [ 11 ] = rtB . k1eonvu0jk [ 3 ] ; rtB .
iv [ 3 ] = 12 ; rtB . dv [ 12 ] = rtB . fx4wpmz5u0 [ 0 ] ; rtB . dv [ 13 ] =
rtB . fx4wpmz5u0 [ 1 ] ; rtB . dv [ 14 ] = rtB . fx4wpmz5u0 [ 2 ] ; rtB . dv
[ 15 ] = rtB . fx4wpmz5u0 [ 3 ] ; rtB . iv [ 4 ] = 16 ; rtB . dv [ 16 ] = rtB
. by1nqwksec [ 0 ] ; rtB . dv [ 17 ] = rtB . by1nqwksec [ 1 ] ; rtB . dv [ 18
] = rtB . by1nqwksec [ 2 ] ; rtB . dv [ 19 ] = rtB . by1nqwksec [ 3 ] ; rtB .
iv [ 5 ] = 20 ; rtB . dv [ 20 ] = rtB . hazdzaaae3 [ 0 ] ; rtB . dv [ 21 ] =
rtB . hazdzaaae3 [ 1 ] ; rtB . dv [ 22 ] = rtB . hazdzaaae3 [ 2 ] ; rtB . dv
[ 23 ] = rtB . hazdzaaae3 [ 3 ] ; rtB . iv [ 6 ] = 24 ; rtB . dv [ 24 ] = rtB
. j2a44cvuzt [ 0 ] ; rtB . dv [ 25 ] = rtB . j2a44cvuzt [ 1 ] ; rtB . dv [ 26
] = rtB . j2a44cvuzt [ 2 ] ; rtB . dv [ 27 ] = rtB . j2a44cvuzt [ 3 ] ; rtB .
iv [ 7 ] = 28 ; rtB . dv [ 28 ] = rtB . lrl4sovswi [ 0 ] ; rtB . dv [ 29 ] =
rtB . lrl4sovswi [ 1 ] ; rtB . dv [ 30 ] = rtB . lrl4sovswi [ 2 ] ; rtB . dv
[ 31 ] = rtB . lrl4sovswi [ 3 ] ; rtB . iv [ 8 ] = 32 ; rtB . dv [ 32 ] = rtB
. llsv3ekyqe [ 0 ] ; rtB . dv [ 33 ] = rtB . llsv3ekyqe [ 1 ] ; rtB . dv [ 34
] = rtB . llsv3ekyqe [ 2 ] ; rtB . dv [ 35 ] = rtB . llsv3ekyqe [ 3 ] ; rtB .
iv [ 9 ] = 36 ; memcpy ( & rtB . dv [ 36 ] , & rtB . jhdkhjxll0 [ 0 ] , 83U *
sizeof ( real_T ) ) ; rtB . iv [ 10 ] = 119 ; simulationData -> mData ->
mInputValues . mN = 119 ; simulationData -> mData -> mInputValues . mX = &
rtB . dv [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 11 ;
simulationData -> mData -> mInputOffsets . mX = & rtB . iv [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 18 ; simulationData -> mData ->
mOutputs . mX = & rtB . mb2uqnl0dc [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; simulationData ->
mData -> mDstateHasChanged = false ; rtB . time_bhxxfovxdy = ssGetTaskTime (
rtS , 1 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & rtB . time_bhxxfovxdy ; rtB . isHit_fqdqrf4qbc = 0 ;
simulationData -> mData -> mSampleHits . mN = 1 ; simulationData -> mData ->
mSampleHits . mX = & rtB . isHit_fqdqrf4qbc ; simulationData -> mData ->
mIsFundamentalSampleHit = true ; simulationData -> mData -> mHadEvents =
false ; simulator = ( NeslSimulator * ) rtDW . ch3qij2jlm ; diag = (
NeuDiagnosticManager * ) rtDW . gylnipw0uk ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; i = ne_simulator_method (
simulator , NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( i != 0 ) { ok =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( ok ) { msg =
rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } if (
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } rtB . mdhsmk0z5v =
rtX . moh0iithye ; rtB . fylncoh0hg = rtX . dgabmb1iec ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtB . la0lywfzq3 = rtB . mb2uqnl0dc [ 0 ] * rtB .
mb2uqnl0dc [ 3 ] ; rtB . n5buikirfg = rtB . mb2uqnl0dc [ 1 ] * rtB .
mb2uqnl0dc [ 2 ] ; { if ( rtDW . cj2xpnofaw . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( rtDW . cj2xpnofaw . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . mb2uqnl0dc [ 2 ] + 0 ) ; } } { if ( rtDW .
p2fuzd2n1u . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW .
p2fuzd2n1u . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
mb2uqnl0dc [ 1 ] + 0 ) ; } } { if ( rtDW . blchu5fgfp . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . blchu5fgfp . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . mb2uqnl0dc [ 0 ] + 0 ) ; } } {
if ( rtDW . puzcmpy0er . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . puzcmpy0er . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . mb2uqnl0dc [ 3 ] + 0 ) ; } } rtB . u0 = rtB . la0lywfzq3 ;
rtB . u1 = rtP . onlynegative_LowerSat ; rtB . u2 = rtP .
onlynegative_UpperSat ; if ( rtB . u0 > rtB . u2 ) { rtB . ohmkvyyvno = rtB .
u2 ; } else if ( rtB . u0 < rtB . u1 ) { rtB . ohmkvyyvno = rtB . u1 ; } else
{ rtB . ohmkvyyvno = rtB . u0 ; } rtB . u0 = rtB . la0lywfzq3 ; rtB . u1 =
rtP . onlypositive_LowerSat ; rtB . u2 = rtP . onlypositive_UpperSat ; if (
rtB . u0 > rtB . u2 ) { rtB . kahmn5kkv5 = rtB . u2 ; } else if ( rtB . u0 <
rtB . u1 ) { rtB . kahmn5kkv5 = rtB . u1 ; } else { rtB . kahmn5kkv5 = rtB .
u0 ; } rtB . o1wvh1f3fj = rtDW . fmxddz4qrb ; rtB . ffh3vaqhha = rtP .
convertsintorads_Gain * rtB . mb2uqnl0dc [ 7 ] ; rtB . fxrcnp5bjm = rtB .
o1wvh1f3fj * rtB . ffh3vaqhha ; { if ( rtDW . og021k3ddn . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . og021k3ddn . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dhj2kqscw2 + 0 ) ; } } { if (
rtDW . pazscy03am . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . pazscy03am . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. mb2uqnl0dc [ 7 ] + 0 ) ; } } { if ( rtDW . gcn0hbx5lh . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . gcn0hbx5lh . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . edxvioyzlc + 0 ) ; } } { if (
rtDW . mdjek0kg4p . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . mdjek0kg4p . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. kuelqyv3wb + 0 ) ; } } { if ( rtDW . loexq3aa33 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . loexq3aa33 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . dhj2kqscw2 + 0 ) ; } } { if (
rtDW . mlazb5xajw . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . mlazb5xajw . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. kuelqyv3wb + 0 ) ; } } { if ( rtDW . jab5ce0r52 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . jab5ce0r52 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . kuelqyv3wb + 0 ) ; } } rtB .
awkvkk5zk5 = rtP . DiscretePIDController_I * rtB . edxvioyzlc ; rtB .
fwe1oukzth = rtDW . noeba4iykm ; rtB . fmrmomooue = rtB . fwe1oukzth ; rtB .
llbtqnhtpl = rtB . fmrmomooue * rtP . SampleTimeMath_WtEt ; rtB . nj4juwhgqw
= look1_binlcpw ( rtB . llbtqnhtpl , rtP .
RepeatingSequenceInterpolated2_TimeValues , rtP .
RepeatingSequenceInterpolated2_OutValues , 7U ) ; rtB . eyqv0xj1ug = rtP .
rpm2pu_Gain * rtB . nj4juwhgqw ; rtB . ieawd2cbze = rtB . eyqv0xj1ug - rtB .
boxlro0v4w ; rtB . fj0htoh5tj = rtB . fwe1oukzth + rtP . FixPtConstant_Value
; if ( rtB . fj0htoh5tj > rtP . WrapToZero_Threshold ) { rtB . ncvg3pf1ks =
rtP . Constant_Value_h50w2jt11b ; } else { rtB . ncvg3pf1ks = rtB .
fj0htoh5tj ; } simulationData = ( NeslSimulationData * ) rtDW . he53sqyi2y ;
rtB . time_pbm3vprmfu = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & rtB . time_pbm3vprmfu ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . ix01qch2kj ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . gqvonovqnm ; ok = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = ok ; simulationData -> mData -> mHadEvents = false ;
simulationData -> mData -> mIsMajorTimeStep = true ; ok = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = ok ; ok = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = ok ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; ok = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = ok ; simulationData ->
mData -> mIsModeUpdateTimeStep = true ; rtB . iv1 [ 0 ] = 0 ; rtB . dv1 [ 0 ]
= rtB . bvmbcuedts [ 0 ] ; rtB . dv1 [ 1 ] = rtB . bvmbcuedts [ 1 ] ; rtB .
dv1 [ 2 ] = rtB . bvmbcuedts [ 2 ] ; rtB . dv1 [ 3 ] = rtB . bvmbcuedts [ 3 ]
; rtB . iv1 [ 1 ] = 4 ; rtB . dv1 [ 4 ] = rtB . alvydcpetd [ 0 ] ; rtB . dv1
[ 5 ] = rtB . alvydcpetd [ 1 ] ; rtB . dv1 [ 6 ] = rtB . alvydcpetd [ 2 ] ;
rtB . dv1 [ 7 ] = rtB . alvydcpetd [ 3 ] ; rtB . iv1 [ 2 ] = 8 ; rtB . dv1 [
8 ] = rtB . k1eonvu0jk [ 0 ] ; rtB . dv1 [ 9 ] = rtB . k1eonvu0jk [ 1 ] ; rtB
. dv1 [ 10 ] = rtB . k1eonvu0jk [ 2 ] ; rtB . dv1 [ 11 ] = rtB . k1eonvu0jk [
3 ] ; rtB . iv1 [ 3 ] = 12 ; rtB . dv1 [ 12 ] = rtB . fx4wpmz5u0 [ 0 ] ; rtB
. dv1 [ 13 ] = rtB . fx4wpmz5u0 [ 1 ] ; rtB . dv1 [ 14 ] = rtB . fx4wpmz5u0 [
2 ] ; rtB . dv1 [ 15 ] = rtB . fx4wpmz5u0 [ 3 ] ; rtB . iv1 [ 4 ] = 16 ; rtB
. dv1 [ 16 ] = rtB . by1nqwksec [ 0 ] ; rtB . dv1 [ 17 ] = rtB . by1nqwksec [
1 ] ; rtB . dv1 [ 18 ] = rtB . by1nqwksec [ 2 ] ; rtB . dv1 [ 19 ] = rtB .
by1nqwksec [ 3 ] ; rtB . iv1 [ 5 ] = 20 ; rtB . dv1 [ 20 ] = rtB . hazdzaaae3
[ 0 ] ; rtB . dv1 [ 21 ] = rtB . hazdzaaae3 [ 1 ] ; rtB . dv1 [ 22 ] = rtB .
hazdzaaae3 [ 2 ] ; rtB . dv1 [ 23 ] = rtB . hazdzaaae3 [ 3 ] ; rtB . iv1 [ 6
] = 24 ; rtB . dv1 [ 24 ] = rtB . j2a44cvuzt [ 0 ] ; rtB . dv1 [ 25 ] = rtB .
j2a44cvuzt [ 1 ] ; rtB . dv1 [ 26 ] = rtB . j2a44cvuzt [ 2 ] ; rtB . dv1 [ 27
] = rtB . j2a44cvuzt [ 3 ] ; rtB . iv1 [ 7 ] = 28 ; rtB . dv1 [ 28 ] = rtB .
lrl4sovswi [ 0 ] ; rtB . dv1 [ 29 ] = rtB . lrl4sovswi [ 1 ] ; rtB . dv1 [ 30
] = rtB . lrl4sovswi [ 2 ] ; rtB . dv1 [ 31 ] = rtB . lrl4sovswi [ 3 ] ; rtB
. iv1 [ 8 ] = 32 ; rtB . dv1 [ 32 ] = rtB . llsv3ekyqe [ 0 ] ; rtB . dv1 [ 33
] = rtB . llsv3ekyqe [ 1 ] ; rtB . dv1 [ 34 ] = rtB . llsv3ekyqe [ 2 ] ; rtB
. dv1 [ 35 ] = rtB . llsv3ekyqe [ 3 ] ; rtB . iv1 [ 9 ] = 36 ; memcpy ( & rtB
. dv1 [ 36 ] , & rtB . jhdkhjxll0 [ 0 ] , 83U * sizeof ( real_T ) ) ; rtB .
iv1 [ 10 ] = 119 ; simulationData -> mData -> mInputValues . mN = 119 ;
simulationData -> mData -> mInputValues . mX = & rtB . dv1 [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 11 ; simulationData -> mData
-> mInputOffsets . mX = & rtB . iv1 [ 0 ] ; simulationData -> mData ->
mOutputs . mN = 1 ; simulationData -> mData -> mOutputs . mX = & rtB .
di3f3nhukn ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData
-> mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; simulationData -> mData -> mDstateHasChanged =
false ; rtB . time_cv5hdgrwft = ssGetTaskTime ( rtS , 1 ) ; simulationData ->
mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & rtB .
time_cv5hdgrwft ; rtB . isHit_g2mlkqadfk = 0 ; simulationData -> mData ->
mSampleHits . mN = 1 ; simulationData -> mData -> mSampleHits . mX = & rtB .
isHit_g2mlkqadfk ; simulationData -> mData -> mIsFundamentalSampleHit = true
; simulationData -> mData -> mHadEvents = false ; simulator = ( NeslSimulator
* ) rtDW . is1htqb5zy ; diag = ( NeuDiagnosticManager * ) rtDW . bluywrteob ;
diagTree = neu_diagnostic_manager_get_initial_tree ( diag ) ; i =
ne_simulator_method ( simulator , NESL_SIM_OUTPUTS , simulationData , diag )
; if ( i != 0 ) { ok = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ;
if ( ok ) { msg = rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } if ( simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . ou3ioysjfo = rtB
. di3f3nhukn - rtB . o1wvh1f3fj ; rtB . jvh2ohto52 = rtP . Gain2_Gain * rtB .
mb2uqnl0dc [ 6 ] ; if ( ssGetLogOutput ( rtS ) ) { StructLogVar * svar = (
StructLogVar * ) rtDW . bcintaxab2 . LoggedData ; LogVar * var = svar ->
signals . values ; { double locTime = ssGetTaskTime ( rtS , 1 ) ;
rt_UpdateLogVar ( ( LogVar * ) svar -> time , & locTime , 0 ) ; } { real_T
up0 [ 1 ] ; up0 [ 0 ] = rtB . jvh2ohto52 ; rt_UpdateLogVar ( ( LogVar * ) var
, up0 , 0 ) ; } } rtB . pdykrtncmz = rtP . polepairs_Gain * rtB . jvh2ohto52
; rtB . fax5qeeyc1 = rtP . convertsintoms_Gain_fiqpesw42p * rtB . mb2uqnl0dc
[ 5 ] ; rtB . loux1l3u5w = rtP . Multiply_Gain * rtB . fax5qeeyc1 ; } if ( (
rtDW . ps0fgvqban >= ssGetT ( rtS ) ) && ( rtDW . kjkz3elkj0 >= ssGetT ( rtS
) ) ) { rtB . ncb1snsfz2 = 0.0 ; } else { rtB . u0 = rtDW . ps0fgvqban ;
parameterBundle_mRealParameters_mX = & rtDW . kspbzdaf2j ; if ( rtDW .
ps0fgvqban < rtDW . kjkz3elkj0 ) { if ( rtDW . kjkz3elkj0 < ssGetT ( rtS ) )
{ rtB . u0 = rtDW . kjkz3elkj0 ; parameterBundle_mRealParameters_mX = & rtDW
. m5mwnz3e3c ; } } else if ( rtDW . ps0fgvqban >= ssGetT ( rtS ) ) { rtB . u0
= rtDW . kjkz3elkj0 ; parameterBundle_mRealParameters_mX = & rtDW .
m5mwnz3e3c ; } rtB . u0 = ssGetT ( rtS ) - rtB . u0 ; rtB . ncb1snsfz2 = (
rtB . fax5qeeyc1 - * parameterBundle_mRealParameters_mX ) / rtB . u0 ; } rtB
. nhvdwogyzu = rtX . bt3c5nwd5e ; rtB . kz5tpkq11l = rtX . gdealguncp ; rtB .
a41vzzxren = rtP . Multiply_Gain_mmgzpqegcd * rtB . kz5tpkq11l ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . eud0zgm0r5 = rtB . mb2uqnl0dc [ 8 ] *
rtB . mb2uqnl0dc [ 9 ] ; { if ( rtDW . cj2xpnofawx . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . cj2xpnofawx . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . mb2uqnl0dc [ 8 ] + 0 ) ; } } {
if ( rtDW . p2fuzd2n1u5 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . p2fuzd2n1u5 . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . mb2uqnl0dc [ 9 ] + 0 ) ; } } rtB . u0 = rtB . eud0zgm0r5 ;
rtB . u1 = rtP . onlynegative_LowerSat_fmq51hroac ; rtB . u2 = rtP .
onlynegative_UpperSat_n10o4huijb ; if ( rtB . u0 > rtB . u2 ) { rtB .
do4skprury = rtB . u2 ; } else if ( rtB . u0 < rtB . u1 ) { rtB . do4skprury
= rtB . u1 ; } else { rtB . do4skprury = rtB . u0 ; } rtB . u0 = rtB .
eud0zgm0r5 ; rtB . u1 = rtP . onlypositive_LowerSat_fr1olx4dcr ; rtB . u2 =
rtP . onlypositive_UpperSat_miyd3oypjf ; if ( rtB . u0 > rtB . u2 ) { rtB .
ouvlgrsc5y = rtB . u2 ; } else if ( rtB . u0 < rtB . u1 ) { rtB . ouvlgrsc5y
= rtB . u1 ; } else { rtB . ouvlgrsc5y = rtB . u0 ; } } UNUSED_PARAMETER (
tid ) ; } void MdlOutputsTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlUpdate ( int_T tid ) { NeslSimulationData * simulationData ;
NeslSimulator * simulator ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T time ; real_T *
lastU ; int32_T tmp_p ; boolean_T tmp ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ rtDW . c1b5pzrnrj += rtP . DiscreteTimeIntegrator_gainval * rtB .
ieawd2cbze ; rtDW . gnq15ddheh = rtB . mb2uqnl0dc [ 7 ] ; rtDW . dffmfsmjp4
+= rtP . Integrator_gainval * rtB . awkvkk5zk5 ; if ( rtDW . dffmfsmjp4 > rtP
. DiscretePIDController_UpperIntegratorSaturationLimit ) { rtDW . dffmfsmjp4
= rtP . DiscretePIDController_UpperIntegratorSaturationLimit ; } else if (
rtDW . dffmfsmjp4 < rtP .
DiscretePIDController_LowerIntegratorSaturationLimit ) { rtDW . dffmfsmjp4 =
rtP . DiscretePIDController_LowerIntegratorSaturationLimit ; } rtDW .
ie1wxley43 += rtP . Filter_gainval * rtB . hmsv5lubrs ; rtDW . pvs3335hoi =
rtB . pdykrtncmz ; simulationData = ( NeslSimulationData * ) rtDW .
bzdscu24o4 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 0 ; simulationData -> mData -> mContStates . mX = NULL
; simulationData -> mData -> mDiscStates . mN = 64 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . bznvn4zrrr [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 19 ; simulationData -> mData -> mModeVector . mX = & rtDW
. nto4t3wzze [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mHadEvents = false ; simulationData -> mData
-> mIsMajorTimeStep = true ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; simulationData -> mData -> mIsEvaluatingF0 = false ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = true ; rtB . iv3 [ 0 ] = 0 ; rtB . dv3 [ 0 ] = rtB .
bvmbcuedts [ 0 ] ; rtB . dv3 [ 1 ] = rtB . bvmbcuedts [ 1 ] ; rtB . dv3 [ 2 ]
= rtB . bvmbcuedts [ 2 ] ; rtB . dv3 [ 3 ] = rtB . bvmbcuedts [ 3 ] ; rtB .
iv3 [ 1 ] = 4 ; rtB . dv3 [ 4 ] = rtB . alvydcpetd [ 0 ] ; rtB . dv3 [ 5 ] =
rtB . alvydcpetd [ 1 ] ; rtB . dv3 [ 6 ] = rtB . alvydcpetd [ 2 ] ; rtB . dv3
[ 7 ] = rtB . alvydcpetd [ 3 ] ; rtB . iv3 [ 2 ] = 8 ; rtB . dv3 [ 8 ] = rtB
. k1eonvu0jk [ 0 ] ; rtB . dv3 [ 9 ] = rtB . k1eonvu0jk [ 1 ] ; rtB . dv3 [
10 ] = rtB . k1eonvu0jk [ 2 ] ; rtB . dv3 [ 11 ] = rtB . k1eonvu0jk [ 3 ] ;
rtB . iv3 [ 3 ] = 12 ; rtB . dv3 [ 12 ] = rtB . fx4wpmz5u0 [ 0 ] ; rtB . dv3
[ 13 ] = rtB . fx4wpmz5u0 [ 1 ] ; rtB . dv3 [ 14 ] = rtB . fx4wpmz5u0 [ 2 ] ;
rtB . dv3 [ 15 ] = rtB . fx4wpmz5u0 [ 3 ] ; rtB . iv3 [ 4 ] = 16 ; rtB . dv3
[ 16 ] = rtB . by1nqwksec [ 0 ] ; rtB . dv3 [ 17 ] = rtB . by1nqwksec [ 1 ] ;
rtB . dv3 [ 18 ] = rtB . by1nqwksec [ 2 ] ; rtB . dv3 [ 19 ] = rtB .
by1nqwksec [ 3 ] ; rtB . iv3 [ 5 ] = 20 ; rtB . dv3 [ 20 ] = rtB . hazdzaaae3
[ 0 ] ; rtB . dv3 [ 21 ] = rtB . hazdzaaae3 [ 1 ] ; rtB . dv3 [ 22 ] = rtB .
hazdzaaae3 [ 2 ] ; rtB . dv3 [ 23 ] = rtB . hazdzaaae3 [ 3 ] ; rtB . iv3 [ 6
] = 24 ; rtB . dv3 [ 24 ] = rtB . j2a44cvuzt [ 0 ] ; rtB . dv3 [ 25 ] = rtB .
j2a44cvuzt [ 1 ] ; rtB . dv3 [ 26 ] = rtB . j2a44cvuzt [ 2 ] ; rtB . dv3 [ 27
] = rtB . j2a44cvuzt [ 3 ] ; rtB . iv3 [ 7 ] = 28 ; rtB . dv3 [ 28 ] = rtB .
lrl4sovswi [ 0 ] ; rtB . dv3 [ 29 ] = rtB . lrl4sovswi [ 1 ] ; rtB . dv3 [ 30
] = rtB . lrl4sovswi [ 2 ] ; rtB . dv3 [ 31 ] = rtB . lrl4sovswi [ 3 ] ; rtB
. iv3 [ 8 ] = 32 ; rtB . dv3 [ 32 ] = rtB . llsv3ekyqe [ 0 ] ; rtB . dv3 [ 33
] = rtB . llsv3ekyqe [ 1 ] ; rtB . dv3 [ 34 ] = rtB . llsv3ekyqe [ 2 ] ; rtB
. dv3 [ 35 ] = rtB . llsv3ekyqe [ 3 ] ; rtB . iv3 [ 9 ] = 36 ; simulationData
-> mData -> mInputValues . mN = 36 ; simulationData -> mData -> mInputValues
. mX = & rtB . dv3 [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 10
; simulationData -> mData -> mInputOffsets . mX = & rtB . iv3 [ 0 ] ;
simulator = ( NeslSimulator * ) rtDW . lhzmdhlnwj ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . aqzmv3k4vt ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_p =
ne_simulator_method ( simulator , NESL_SIM_UPDATE , simulationData ,
diagnosticManager ) ; if ( tmp_p != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } rtDW . fmxddz4qrb +=
rtP . DiscreteTimeIntegrator_gainval_ironaljz5i * rtB . ou3ioysjfo ; rtDW .
noeba4iykm = rtB . ncvg3pf1ks ; } if ( rtDW . ps0fgvqban == ( rtInf ) ) {
rtDW . ps0fgvqban = ssGetT ( rtS ) ; lastU = & rtDW . kspbzdaf2j ; } else if
( rtDW . kjkz3elkj0 == ( rtInf ) ) { rtDW . kjkz3elkj0 = ssGetT ( rtS ) ;
lastU = & rtDW . m5mwnz3e3c ; } else if ( rtDW . ps0fgvqban < rtDW .
kjkz3elkj0 ) { rtDW . ps0fgvqban = ssGetT ( rtS ) ; lastU = & rtDW .
kspbzdaf2j ; } else { rtDW . kjkz3elkj0 = ssGetT ( rtS ) ; lastU = & rtDW .
m5mwnz3e3c ; } * lastU = rtB . fax5qeeyc1 ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> moh0iithye = rtB . kahmn5kkv5 ; _rtXdot -> dgabmb1iec =
rtB . ohmkvyyvno ; _rtXdot -> bt3c5nwd5e = rtB . ouvlgrsc5y ; _rtXdot ->
gdealguncp = rtB . do4skprury ; } void MdlProjection ( void ) { } void
MdlTerminate ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . aqzmv3k4vt ; neu_destroy_diagnostic_manager (
diagnosticManager ) ; simulationData = ( NeslSimulationData * ) rtDW .
bzdscu24o4 ; nesl_destroy_simulation_data ( simulationData ) ;
nesl_erase_simulator ( "Buck_BLDC_2023a_4/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . gylnipw0uk ; neu_destroy_diagnostic_manager ( diagnosticManager ) ;
simulationData = ( NeslSimulationData * ) rtDW . bqlnjhh13e ;
nesl_destroy_simulation_data ( simulationData ) ; nesl_erase_simulator (
"Buck_BLDC_2023a_4/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bluywrteob ;
neu_destroy_diagnostic_manager ( diagnosticManager ) ; simulationData = (
NeslSimulationData * ) rtDW . he53sqyi2y ; nesl_destroy_simulation_data (
simulationData ) ; nesl_erase_simulator (
"Buck_BLDC_2023a_4/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ; {
if ( rtDW . cj2xpnofaw . AQHandles ) { sdiTerminateStreaming ( & rtDW .
cj2xpnofaw . AQHandles ) ; } } { if ( rtDW . p2fuzd2n1u . AQHandles ) {
sdiTerminateStreaming ( & rtDW . p2fuzd2n1u . AQHandles ) ; } } { if ( rtDW .
blchu5fgfp . AQHandles ) { sdiTerminateStreaming ( & rtDW . blchu5fgfp .
AQHandles ) ; } } { if ( rtDW . puzcmpy0er . AQHandles ) {
sdiTerminateStreaming ( & rtDW . puzcmpy0er . AQHandles ) ; } } { if ( rtDW .
og021k3ddn . AQHandles ) { sdiTerminateStreaming ( & rtDW . og021k3ddn .
AQHandles ) ; } } { if ( rtDW . pazscy03am . AQHandles ) {
sdiTerminateStreaming ( & rtDW . pazscy03am . AQHandles ) ; } } { if ( rtDW .
gcn0hbx5lh . AQHandles ) { sdiTerminateStreaming ( & rtDW . gcn0hbx5lh .
AQHandles ) ; } } { if ( rtDW . mdjek0kg4p . AQHandles ) {
sdiTerminateStreaming ( & rtDW . mdjek0kg4p . AQHandles ) ; } } { if ( rtDW .
loexq3aa33 . AQHandles ) { sdiTerminateStreaming ( & rtDW . loexq3aa33 .
AQHandles ) ; } } { if ( rtDW . mlazb5xajw . AQHandles ) {
sdiTerminateStreaming ( & rtDW . mlazb5xajw . AQHandles ) ; } } { if ( rtDW .
jab5ce0r52 . AQHandles ) { sdiTerminateStreaming ( & rtDW . jab5ce0r52 .
AQHandles ) ; } } { if ( rtDW . cj2xpnofawx . AQHandles ) {
sdiTerminateStreaming ( & rtDW . cj2xpnofawx . AQHandles ) ; } } { if ( rtDW
. p2fuzd2n1u5 . AQHandles ) { sdiTerminateStreaming ( & rtDW . p2fuzd2n1u5 .
AQHandles ) ; } } } static void mr_Buck_BLDC_2023a_4_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_Buck_BLDC_2023a_4_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_Buck_BLDC_2023a_4_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_Buck_BLDC_2023a_4_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_Buck_BLDC_2023a_4_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Buck_BLDC_2023a_4_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Buck_BLDC_2023a_4_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Buck_BLDC_2023a_4_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Buck_BLDC_2023a_4_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void
mr_Buck_BLDC_2023a_4_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Buck_BLDC_2023a_4_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Buck_BLDC_2023a_4_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_Buck_BLDC_2023a_4_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Buck_BLDC_2023a_4_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Buck_BLDC_2023a_4_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( ssDW , 0 , 0 , (
const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T *
rtdwDataFieldNames [ 38 ] = { "rtDW.c1b5pzrnrj" , "rtDW.gnq15ddheh" ,
"rtDW.dffmfsmjp4" , "rtDW.ie1wxley43" , "rtDW.fwtwpjliml" , "rtDW.hkvyb0ptbn"
, "rtDW.nssyg3ul2x" , "rtDW.pvs3335hoi" , "rtDW.fyl5munlxu" ,
"rtDW.bs1qjqmif1" , "rtDW.edfdikmfnp" , "rtDW.dnqfkyv2uz" , "rtDW.ixu0au5oat"
, "rtDW.bd53t3itfv" , "rtDW.bznvn4zrrr" , "rtDW.fmxddz4qrb" ,
"rtDW.akg4ejc3ma" , "rtDW.itgthkpdui" , "rtDW.ei3pjcz2m5" , "rtDW.ix01qch2kj"
, "rtDW.iu1aexerwa" , "rtDW.ps0fgvqban" , "rtDW.kspbzdaf2j" ,
"rtDW.kjkz3elkj0" , "rtDW.m5mwnz3e3c" , "rtDW.noeba4iykm" , "rtDW.nto4t3wzze"
, "rtDW.d4gmtkdgyk" , "rtDW.gqvonovqnm" , "rtDW.lylmywsair" ,
"rtDW.ix1eozqvus" , "rtDW.lf5hhij40v" , "rtDW.fdyfaaoo12" , "rtDW.lpjbl5m4vp"
, "rtDW.hzgov1h5v5" , "rtDW.mgejji5fmw" , "rtDW.gxt1g1hy3f" ,
"rtDW.jnl44abga2" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
38 , rtdwDataFieldNames ) ; mr_Buck_BLDC_2023a_4_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( rtDW . c1b5pzrnrj ) , sizeof ( rtDW .
c1b5pzrnrj ) ) ; mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 1 ,
( const void * ) & ( rtDW . gnq15ddheh ) , sizeof ( rtDW . gnq15ddheh ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( rtDW . dffmfsmjp4 ) , sizeof ( rtDW . dffmfsmjp4 ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * )
& ( rtDW . ie1wxley43 ) , sizeof ( rtDW . ie1wxley43 ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * )
& ( rtDW . fwtwpjliml ) , sizeof ( rtDW . fwtwpjliml ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * )
& ( rtDW . hkvyb0ptbn ) , sizeof ( rtDW . hkvyb0ptbn ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * )
& ( rtDW . nssyg3ul2x ) , sizeof ( rtDW . nssyg3ul2x ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * )
& ( rtDW . pvs3335hoi ) , sizeof ( rtDW . pvs3335hoi ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * )
& ( rtDW . fyl5munlxu ) , sizeof ( rtDW . fyl5munlxu ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * )
& ( rtDW . bs1qjqmif1 ) , sizeof ( rtDW . bs1qjqmif1 ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void *
) & ( rtDW . edfdikmfnp ) , sizeof ( rtDW . edfdikmfnp ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void *
) & ( rtDW . dnqfkyv2uz ) , sizeof ( rtDW . dnqfkyv2uz ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void *
) & ( rtDW . ixu0au5oat ) , sizeof ( rtDW . ixu0au5oat ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void *
) & ( rtDW . bd53t3itfv ) , sizeof ( rtDW . bd53t3itfv ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void *
) & ( rtDW . bznvn4zrrr ) , sizeof ( rtDW . bznvn4zrrr ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void *
) & ( rtDW . fmxddz4qrb ) , sizeof ( rtDW . fmxddz4qrb ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void *
) & ( rtDW . akg4ejc3ma ) , sizeof ( rtDW . akg4ejc3ma ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void *
) & ( rtDW . itgthkpdui ) , sizeof ( rtDW . itgthkpdui ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void *
) & ( rtDW . ei3pjcz2m5 ) , sizeof ( rtDW . ei3pjcz2m5 ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void *
) & ( rtDW . ix01qch2kj ) , sizeof ( rtDW . ix01qch2kj ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void *
) & ( rtDW . iu1aexerwa ) , sizeof ( rtDW . iu1aexerwa ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void *
) & ( rtDW . ps0fgvqban ) , sizeof ( rtDW . ps0fgvqban ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void *
) & ( rtDW . kspbzdaf2j ) , sizeof ( rtDW . kspbzdaf2j ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void *
) & ( rtDW . kjkz3elkj0 ) , sizeof ( rtDW . kjkz3elkj0 ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void *
) & ( rtDW . m5mwnz3e3c ) , sizeof ( rtDW . m5mwnz3e3c ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void *
) & ( rtDW . noeba4iykm ) , sizeof ( rtDW . noeba4iykm ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void *
) & ( rtDW . nto4t3wzze ) , sizeof ( rtDW . nto4t3wzze ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void *
) & ( rtDW . d4gmtkdgyk ) , sizeof ( rtDW . d4gmtkdgyk ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void *
) & ( rtDW . gqvonovqnm ) , sizeof ( rtDW . gqvonovqnm ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void *
) & ( rtDW . lylmywsair ) , sizeof ( rtDW . lylmywsair ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void *
) & ( rtDW . ix1eozqvus ) , sizeof ( rtDW . ix1eozqvus ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void *
) & ( rtDW . lf5hhij40v ) , sizeof ( rtDW . lf5hhij40v ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void *
) & ( rtDW . fdyfaaoo12 ) , sizeof ( rtDW . fdyfaaoo12 ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void *
) & ( rtDW . lpjbl5m4vp ) , sizeof ( rtDW . lpjbl5m4vp ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void *
) & ( rtDW . hzgov1h5v5 ) , sizeof ( rtDW . hzgov1h5v5 ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void *
) & ( rtDW . mgejji5fmw ) , sizeof ( rtDW . mgejji5fmw ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void *
) & ( rtDW . gxt1g1hy3f ) , sizeof ( rtDW . gxt1g1hy3f ) ) ;
mr_Buck_BLDC_2023a_4_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void *
) & ( rtDW . jnl44abga2 ) , sizeof ( rtDW . jnl44abga2 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Buck_BLDC_2023a_4_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0
, 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber (
ssDW , 0 , 1 ) ; mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & (
rtDW . c1b5pzrnrj ) , rtdwData , 0 , 0 , sizeof ( rtDW . c1b5pzrnrj ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gnq15ddheh ) , rtdwData , 0 , 1 , sizeof ( rtDW . gnq15ddheh ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dffmfsmjp4 ) , rtdwData , 0 , 2 , sizeof ( rtDW . dffmfsmjp4 ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ie1wxley43 ) , rtdwData , 0 , 3 , sizeof ( rtDW . ie1wxley43 ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fwtwpjliml ) , rtdwData , 0 , 4 , sizeof ( rtDW . fwtwpjliml ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hkvyb0ptbn ) , rtdwData , 0 , 5 , sizeof ( rtDW . hkvyb0ptbn ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nssyg3ul2x ) , rtdwData , 0 , 6 , sizeof ( rtDW . nssyg3ul2x ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pvs3335hoi ) , rtdwData , 0 , 7 , sizeof ( rtDW . pvs3335hoi ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fyl5munlxu ) , rtdwData , 0 , 8 , sizeof ( rtDW . fyl5munlxu ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bs1qjqmif1 ) , rtdwData , 0 , 9 , sizeof ( rtDW . bs1qjqmif1 ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
edfdikmfnp ) , rtdwData , 0 , 10 , sizeof ( rtDW . edfdikmfnp ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dnqfkyv2uz ) , rtdwData , 0 , 11 , sizeof ( rtDW . dnqfkyv2uz ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ixu0au5oat ) , rtdwData , 0 , 12 , sizeof ( rtDW . ixu0au5oat ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bd53t3itfv ) , rtdwData , 0 , 13 , sizeof ( rtDW . bd53t3itfv ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bznvn4zrrr ) , rtdwData , 0 , 14 , sizeof ( rtDW . bznvn4zrrr ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fmxddz4qrb ) , rtdwData , 0 , 15 , sizeof ( rtDW . fmxddz4qrb ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
akg4ejc3ma ) , rtdwData , 0 , 16 , sizeof ( rtDW . akg4ejc3ma ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
itgthkpdui ) , rtdwData , 0 , 17 , sizeof ( rtDW . itgthkpdui ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ei3pjcz2m5 ) , rtdwData , 0 , 18 , sizeof ( rtDW . ei3pjcz2m5 ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ix01qch2kj ) , rtdwData , 0 , 19 , sizeof ( rtDW . ix01qch2kj ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iu1aexerwa ) , rtdwData , 0 , 20 , sizeof ( rtDW . iu1aexerwa ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ps0fgvqban ) , rtdwData , 0 , 21 , sizeof ( rtDW . ps0fgvqban ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kspbzdaf2j ) , rtdwData , 0 , 22 , sizeof ( rtDW . kspbzdaf2j ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kjkz3elkj0 ) , rtdwData , 0 , 23 , sizeof ( rtDW . kjkz3elkj0 ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m5mwnz3e3c ) , rtdwData , 0 , 24 , sizeof ( rtDW . m5mwnz3e3c ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
noeba4iykm ) , rtdwData , 0 , 25 , sizeof ( rtDW . noeba4iykm ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nto4t3wzze ) , rtdwData , 0 , 26 , sizeof ( rtDW . nto4t3wzze ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d4gmtkdgyk ) , rtdwData , 0 , 27 , sizeof ( rtDW . d4gmtkdgyk ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gqvonovqnm ) , rtdwData , 0 , 28 , sizeof ( rtDW . gqvonovqnm ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lylmywsair ) , rtdwData , 0 , 29 , sizeof ( rtDW . lylmywsair ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ix1eozqvus ) , rtdwData , 0 , 30 , sizeof ( rtDW . ix1eozqvus ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lf5hhij40v ) , rtdwData , 0 , 31 , sizeof ( rtDW . lf5hhij40v ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fdyfaaoo12 ) , rtdwData , 0 , 32 , sizeof ( rtDW . fdyfaaoo12 ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lpjbl5m4vp ) , rtdwData , 0 , 33 , sizeof ( rtDW . lpjbl5m4vp ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hzgov1h5v5 ) , rtdwData , 0 , 34 , sizeof ( rtDW . hzgov1h5v5 ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mgejji5fmw ) , rtdwData , 0 , 35 , sizeof ( rtDW . mgejji5fmw ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gxt1g1hy3f ) , rtdwData , 0 , 36 , sizeof ( rtDW . gxt1g1hy3f ) ) ;
mr_Buck_BLDC_2023a_4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jnl44abga2 ) , rtdwData , 0 , 37 , sizeof ( rtDW . jnl44abga2 ) ) ; } }
mxArray * mr_Buck_BLDC_2023a_4_GetSimStateDisallowedBlocks ( ) { mxArray *
data = mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static
const char_T * blockType [ 10 ] = { "SimscapeRtp" , "SimscapeExecutionBlock"
, "SimscapeExecutionBlock" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope"
, "Scope" , "Scope" , } ; static const char_T * blockPath [ 10 ] = {
"Buck_BLDC_2023a_4/Solver Configuration/RTP_1" ,
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/STATE_1" ,
"Buck_BLDC_2023a_4/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"Buck_BLDC_2023a_4/Buck Converter/Scope" ,
"Buck_BLDC_2023a_4/Buck Converter/Scope1" ,
"Buck_BLDC_2023a_4/Buck Converter/Scope2" ,
"Buck_BLDC_2023a_4/Buck Converter/Scope3" , "Buck_BLDC_2023a_4/Duty Cycle" ,
"Buck_BLDC_2023a_4/Scope1" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Three-phase currents" , } ; static
const int reason [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for (
subs [ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
4 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 240 ) ;
ssSetNumBlockIO ( rtS , 109 ) ; ssSetNumBlockParams ( rtS , 128 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 5.0E-5 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3779561728U ) ; ssSetChecksumVal ( rtS , 1 ,
3522019344U ) ; ssSetChecksumVal ( rtS , 2 , 2004016594U ) ; ssSetChecksumVal
( rtS , 3 , 3022508733U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; { int32_T i ; for ( i = 0 ; i < 6 ; i ++ ) { rtB . jkk4cu5kch [ i ]
= 0.0 ; } for ( i = 0 ; i < 83 ; i ++ ) { rtB . jhdkhjxll0 [ i ] = 0.0 ; }
for ( i = 0 ; i < 18 ; i ++ ) { rtB . mb2uqnl0dc [ i ] = 0.0 ; } rtB .
boxlro0v4w = 0.0 ; rtB . dhj2kqscw2 = 0.0 ; rtB . kuelqyv3wb = 0.0 ; rtB .
edxvioyzlc = 0.0 ; rtB . crw5li1kzs = 0.0 ; rtB . ez4vimsggj = 0.0 ; rtB .
lsgonhap4q = 0.0 ; rtB . ccdpg2e51c = 0.0 ; rtB . et2gzftmfl = 0.0 ; rtB .
hmsv5lubrs = 0.0 ; rtB . k0h0smmumn = 0.0 ; rtB . e32tu1k5dy = 0.0 ; rtB .
mv2egnitku = 0.0 ; rtB . i230d00p4f = 0.0 ; rtB . kyvlw1eg1j = 0.0 ; rtB .
myvwt33bkt = 0.0 ; rtB . l1gsa3trsh = 0.0 ; rtB . oepjxvzqvl = 0.0 ; rtB .
lrnvfgtgd0 = 0.0 ; rtB . d4qoidu0ry = 0.0 ; rtB . dquprl145n = 0.0 ; rtB .
bvmbcuedts [ 0 ] = 0.0 ; rtB . bvmbcuedts [ 1 ] = 0.0 ; rtB . bvmbcuedts [ 2
] = 0.0 ; rtB . bvmbcuedts [ 3 ] = 0.0 ; rtB . alvydcpetd [ 0 ] = 0.0 ; rtB .
alvydcpetd [ 1 ] = 0.0 ; rtB . alvydcpetd [ 2 ] = 0.0 ; rtB . alvydcpetd [ 3
] = 0.0 ; rtB . igqbtwb1cb = 0.0 ; rtB . ntau2arxhc = 0.0 ; rtB . k1rj25ivdk
= 0.0 ; rtB . mklcfmrns4 = 0.0 ; rtB . cjhohfslts = 0.0 ; rtB . aoj0xh52vh =
0.0 ; rtB . k1eonvu0jk [ 0 ] = 0.0 ; rtB . k1eonvu0jk [ 1 ] = 0.0 ; rtB .
k1eonvu0jk [ 2 ] = 0.0 ; rtB . k1eonvu0jk [ 3 ] = 0.0 ; rtB . k5fkctjwt3 =
0.0 ; rtB . ndvl0vsmvk = 0.0 ; rtB . cngejipk01 = 0.0 ; rtB . e4ir2xx5wg =
0.0 ; rtB . lidvtlakg4 = 0.0 ; rtB . lut33f4odj = 0.0 ; rtB . k0jkfliw3f =
0.0 ; rtB . bqudhrxhmu = 0.0 ; rtB . mgtbco3ykj = 0.0 ; rtB . ltac0jcdqm =
0.0 ; rtB . e5xs1fgp0p = 0.0 ; rtB . p5xsnshbs2 = 0.0 ; rtB . howt2qok0i =
0.0 ; rtB . jjm52urekq = 0.0 ; rtB . ldg3ehsse5 = 0.0 ; rtB . kn3hi4jtzs =
0.0 ; rtB . fx4wpmz5u0 [ 0 ] = 0.0 ; rtB . fx4wpmz5u0 [ 1 ] = 0.0 ; rtB .
fx4wpmz5u0 [ 2 ] = 0.0 ; rtB . fx4wpmz5u0 [ 3 ] = 0.0 ; rtB . by1nqwksec [ 0
] = 0.0 ; rtB . by1nqwksec [ 1 ] = 0.0 ; rtB . by1nqwksec [ 2 ] = 0.0 ; rtB .
by1nqwksec [ 3 ] = 0.0 ; rtB . hazdzaaae3 [ 0 ] = 0.0 ; rtB . hazdzaaae3 [ 1
] = 0.0 ; rtB . hazdzaaae3 [ 2 ] = 0.0 ; rtB . hazdzaaae3 [ 3 ] = 0.0 ; rtB .
j2a44cvuzt [ 0 ] = 0.0 ; rtB . j2a44cvuzt [ 1 ] = 0.0 ; rtB . j2a44cvuzt [ 2
] = 0.0 ; rtB . j2a44cvuzt [ 3 ] = 0.0 ; rtB . lrl4sovswi [ 0 ] = 0.0 ; rtB .
lrl4sovswi [ 1 ] = 0.0 ; rtB . lrl4sovswi [ 2 ] = 0.0 ; rtB . lrl4sovswi [ 3
] = 0.0 ; rtB . llsv3ekyqe [ 0 ] = 0.0 ; rtB . llsv3ekyqe [ 1 ] = 0.0 ; rtB .
llsv3ekyqe [ 2 ] = 0.0 ; rtB . llsv3ekyqe [ 3 ] = 0.0 ; rtB . pftutvvgoa =
0.0 ; rtB . mdhsmk0z5v = 0.0 ; rtB . fylncoh0hg = 0.0 ; rtB . la0lywfzq3 =
0.0 ; rtB . n5buikirfg = 0.0 ; rtB . ohmkvyyvno = 0.0 ; rtB . kahmn5kkv5 =
0.0 ; rtB . o1wvh1f3fj = 0.0 ; rtB . ffh3vaqhha = 0.0 ; rtB . fxrcnp5bjm =
0.0 ; rtB . awkvkk5zk5 = 0.0 ; rtB . fmrmomooue = 0.0 ; rtB . llbtqnhtpl =
0.0 ; rtB . nj4juwhgqw = 0.0 ; rtB . eyqv0xj1ug = 0.0 ; rtB . ieawd2cbze =
0.0 ; rtB . di3f3nhukn = 0.0 ; rtB . ou3ioysjfo = 0.0 ; rtB . jvh2ohto52 =
0.0 ; rtB . pdykrtncmz = 0.0 ; rtB . fax5qeeyc1 = 0.0 ; rtB . loux1l3u5w =
0.0 ; rtB . ncb1snsfz2 = 0.0 ; rtB . nhvdwogyzu = 0.0 ; rtB . kz5tpkq11l =
0.0 ; rtB . a41vzzxren = 0.0 ; rtB . eud0zgm0r5 = 0.0 ; rtB . do4skprury =
0.0 ; rtB . ouvlgrsc5y = 0.0 ; } } { real_T * x = ( real_T * ) & rtX ;
ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof ( X
) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ;
( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; rtDW . c1b5pzrnrj = 0.0 ;
rtDW . gnq15ddheh = 0.0 ; rtDW . dffmfsmjp4 = 0.0 ; rtDW . ie1wxley43 = 0.0 ;
rtDW . fwtwpjliml [ 0 ] = 0.0 ; rtDW . fwtwpjliml [ 1 ] = 0.0 ; rtDW .
hkvyb0ptbn [ 0 ] = 0.0 ; rtDW . hkvyb0ptbn [ 1 ] = 0.0 ; rtDW . nssyg3ul2x [
0 ] = 0.0 ; rtDW . nssyg3ul2x [ 1 ] = 0.0 ; rtDW . pvs3335hoi = 0.0 ; rtDW .
fyl5munlxu [ 0 ] = 0.0 ; rtDW . fyl5munlxu [ 1 ] = 0.0 ; rtDW . bs1qjqmif1 [
0 ] = 0.0 ; rtDW . bs1qjqmif1 [ 1 ] = 0.0 ; rtDW . edfdikmfnp [ 0 ] = 0.0 ;
rtDW . edfdikmfnp [ 1 ] = 0.0 ; rtDW . dnqfkyv2uz [ 0 ] = 0.0 ; rtDW .
dnqfkyv2uz [ 1 ] = 0.0 ; rtDW . ixu0au5oat [ 0 ] = 0.0 ; rtDW . ixu0au5oat [
1 ] = 0.0 ; rtDW . bd53t3itfv [ 0 ] = 0.0 ; rtDW . bd53t3itfv [ 1 ] = 0.0 ; {
int32_T i ; for ( i = 0 ; i < 64 ; i ++ ) { rtDW . bznvn4zrrr [ i ] = 0.0 ; }
} rtDW . fmxddz4qrb = 0.0 ; rtDW . akg4ejc3ma = 0.0 ; rtDW . itgthkpdui = 0.0
; rtDW . ei3pjcz2m5 = 0.0 ; rtDW . ix01qch2kj = 0.0 ; rtDW . iu1aexerwa = 0.0
; rtDW . ps0fgvqban = 0.0 ; rtDW . kspbzdaf2j = 0.0 ; rtDW . kjkz3elkj0 = 0.0
; rtDW . m5mwnz3e3c = 0.0 ; } { static DataTypeTransInfo dtInfo ; ( void )
memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 24 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } Buck_BLDC_2023a_4_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Buck_BLDC_2023a_4" ) ; ssSetPath ( rtS , "Buck_BLDC_2023a_4" ) ; ssSetTStart
( rtS , 0.0 ) ; ssSetTFinal ( rtS , 35.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 1 ,
2 , 2 , 2 , 2 , 2 , 2 , 64 , 1 , 1 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 ,
1 , 2 , 2 , 2 , 2 , 2 , 2 , 64 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_UINT32 } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "Discrete" ,
"Discrete" , "Discrete" , "DSTATE" , "Discrete" , "Discrete" , "Discrete" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "DSTATE" , "DSTATE" } ;
static const char_T * rt_LoggedStateBlockNames [ ] = {
"Buck_BLDC_2023a_4/Buck Converter/Integrator" ,
"Buck_BLDC_2023a_4/Buck Converter/Integrator1" ,
"Buck_BLDC_2023a_4/Subsystem/Integrator" ,
"Buck_BLDC_2023a_4/Subsystem/Integrator1" ,
"Buck_BLDC_2023a_4/Desired\nspeed/LPF/Discrete-Time\nIntegrator" ,
"Buck_BLDC_2023a_4/Unit Delay" ,
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Integrator/Discrete/Integrator"
,
 "Buck_BLDC_2023a_4/Controller/Discrete PID Controller/Filter/Disc. Forward Euler Filter/Filter"
, "Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"Buck_BLDC_2023a_4/Sensor/Unit Delay" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"Buck_BLDC_2023a_4/Solver\nConfiguration/EVAL_KEY/STATE_1" ,
"Buck_BLDC_2023a_4/LPF/Discrete-Time\nIntegrator" ,
 "Buck_BLDC_2023a_4/Desired\nspeed/Repeating\nSequence\nInterpolated2/LimitedCounter/Output"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_UINT32 ,
SS_UINT32 , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 ,
8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 77 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 21 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 21 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . moh0iithye ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . dgabmb1iec ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . bt3c5nwd5e ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . gdealguncp ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . c1b5pzrnrj ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . gnq15ddheh ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtDW . dffmfsmjp4 ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . ie1wxley43 ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) rtDW . fwtwpjliml ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) rtDW . hkvyb0ptbn ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) rtDW . nssyg3ul2x ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . pvs3335hoi ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) rtDW . fyl5munlxu ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) rtDW . bs1qjqmif1 ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) rtDW . edfdikmfnp ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) rtDW . dnqfkyv2uz ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) rtDW . ixu0au5oat ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) rtDW . bd53t3itfv ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) rtDW . bznvn4zrrr ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . fmxddz4qrb ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtDW . noeba4iykm ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 4 ] ;
static real_T absTol [ 4 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 4 ] = { 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 4 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 4 ] ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 4 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
ouvlgrsc5y ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
do4skprury ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
kahmn5kkv5 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
ohmkvyyvno ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 4 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 5.0E-5
) ; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 4 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "odeN" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3779561728U ) ; ssSetChecksumVal ( rtS , 1 ,
3522019344U ) ; ssSetChecksumVal ( rtS , 2 , 2004016594U ) ; ssSetChecksumVal
( rtS , 3 , 3022508733U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Buck_BLDC_2023a_4_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Buck_BLDC_2023a_4_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_Buck_BLDC_2023a_4_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } executionInfo -> simulationOptions_ . stateSaveName_ =
rtliGetLogX ( ssGetRTWLogInfo ( rtS ) ) ; executionInfo -> simulationOptions_
. finalStateName_ = rtliGetLogXFinal ( ssGetRTWLogInfo ( rtS ) ) ;
executionInfo -> simulationOptions_ . outputSaveName_ = rtliGetLogY (
ssGetRTWLogInfo ( rtS ) ) ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID2 ( tid ) ; }
