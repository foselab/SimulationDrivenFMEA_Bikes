#include "ne_ds.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_zc.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_tdxy_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_y.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_nldv.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_eq_tol.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_qx_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sclv.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_obs_all.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_obs_exp.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_var_tol.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_mode.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxm_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_m.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_log.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_imax.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_obs_act.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_imin.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxicrm_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxicr_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_obs_il.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_vpf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_m_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_slf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_tdxf_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_a_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_ic.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_slv.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_vmf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxf_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_slf0.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dnf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_f.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxy.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_vsf.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_a.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxdelt_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_lv.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dnf_v_x.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dnf_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_mdxy_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxy_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_dxcer_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_icrm_p.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_assert.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds.h"
#include "ssc_ml_fun.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_external_struct.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_externals.h"
#include "Buck_BLDC_2023a_4_7fdece01_1_ds_sys_struct.h"
static int32_T ds_vmm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dxm
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dum_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dum ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dpm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dpm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_b_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_b ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c_p ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtf_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_ddf_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dpdxf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dpdxf ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dwf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dwf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_cer ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxcer ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddcer ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddcer_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_icr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr_im ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr_id ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_il ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddicr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicr_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icrm ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxicrm ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddicrm_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicrm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_freqs ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_solverhits ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_mduy_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duy ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dty_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dty ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_cache_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_cache_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_update2_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update2_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lock_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lock_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_lock2_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_lock2_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_sfo
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfp ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_passert ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_iassert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_t ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_tmax ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dxdelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dudelt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dudelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtdelt_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_l ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_j
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qx ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qu ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_q1 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_q1_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dimin ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dimax ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dpm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dwf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dnf_v_x ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxcer ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxcer_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddcer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_freqs ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_solverhits ( const NeDynamicSystem * ds , PmAllocator * allocator )
; static NeDsMethodOutput * ds_output_mduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dty_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_zc ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_cache_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update2_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update2_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock2_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock2_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_r
( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_init_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_log ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_assert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_passert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_iassert (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_del_t ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v0 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_tmax ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_act ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_all (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_il ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_l ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_j ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qu_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_var_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_eq_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lv ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_slv ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_nldv ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sclv ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_imin ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_imax ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dimax ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static void release_reference ( NeDynamicSystem * ds ) ; static void
get_reference ( NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics
( NeDynamicSystem * ds , boolean_T ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out ,
boolean_T kp ) ; static void rtpmap ( const NeDynamicSystem * ds , const
PmIntVector * inl , const PmIntVector * ini , const PmIntVector * inj , const
PmRealVector * inr , PmIntVector * outl , PmIntVector * outi , PmIntVector *
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 64 ] =
{ { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "" , 0U , 0U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "" , 0U , 0U , TRUE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "" , 0U , 0U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "" , 0U , 0U , TRUE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Battery1" , 2U , 0U , TRUE , 1.0 , "1" , } , { "" , 0U , 8
, NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/Buck Converter/Capacitor" , 1U
, 2U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , 1U , 3U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor" , 2U , 4U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , 2U , 6U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Sensing/Ideal Rotational Motion Sensor" , 1U , 8U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Sensor/Motion  Sensor" , 1U , 9U , TRUE , 1.0 , "1" , } ,
{ "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 10U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 11U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 12U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 13U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 14U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 15U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/BLDC" , 2U , 16U , FALSE , 1.0 , "1" , } , { "" , 1U , 8 ,
NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC" , 2U , 16U , FALSE , 1.0 ,
"1" , } , { "" , 2U , 8 , NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC"
, 2U , 16U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
, "Buck_BLDC_2023a_4/BLDC" , 2U , 18U , TRUE , 1.0 , "1" , } , { "" , 0U , 8
, NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC" , 1U , 20U , FALSE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/BLDC" , 1U , 21U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC" , 1U , 22U , FALSE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC"
, 1U , 23U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Inertia = 10 kg*m^2" , 2U , 24U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC" , 1U , 26U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/BLDC" , 1U , 27U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC" , 1U , 28U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC"
, 1U , 29U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
, "Buck_BLDC_2023a_4/BLDC" , 1U , 30U , FALSE , 1.0 , "1" , } , { "" , 0U , 8
, NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC" , 1U , 31U , FALSE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , 1U , 32U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , 1U , 33U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Buck Converter/S" , 3U , 34U , TRUE , 1.0 , "1" , } , { ""
, 0U , 8 , NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/Buck Converter/S" ,
3U , 37U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Buck Converter/S" , 3U , 40U , TRUE , 1.0 , "1" , } , { ""
, 0U , 8 , NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/Buck Converter/S1" ,
3U , 43U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , 3U , 46U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/Buck Converter/S1"
, 3U , 49U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 52U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 53U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 54U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 57U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 60U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 63U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 66U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 69U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 72U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 75U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 78U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 81U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 84U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 87U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 90U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 93U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 96U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 99U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 102U
, TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 3U , 105U
, TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/BLDC" , 1U , 108U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC" , 3U , 109U , FALSE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Buck_BLDC_2023a_4/BLDC" , 3U , 112U , FALSE , 1.0 , "1" , } , { "" , 0U , 8
, NE_EQUATION_DOMAIN_TIME , "Buck_BLDC_2023a_4/BLDC" , 3U , 115U , FALSE ,
1.0 , "1" , } } ; static NeCERData * s_cer_data = NULL ; static NeICRData
s_icr_data [ 10 ] = { { "" , 0U , 0 , "Buck_BLDC_2023a_4/Battery1" , 1U , 0U
, } , { "" , 0U , 0 , "Buck_BLDC_2023a_4/Battery1" , 1U , 1U , } , { "" , 0U
, 0 , "Buck_BLDC_2023a_4/Buck Converter/S" , 1U , 2U , } , { "" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , 1U , 3U , } , { "" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 4U ,
} , { "" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 5U ,
} , { "" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 6U ,
} , { "" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 7U ,
} , { "" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 8U ,
} , { "" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 9U ,
} } ; static NeVariableData s_variable_data [ 64 ] = { {
"Three_Phase_Inverter.Converter_Three_Phase.C1.vc" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , { "BLDC.angular_position" , 0U , 0 ,
"Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_MANDATORY , "Rotor angle" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C3.vc" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C5.vc" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , { "BLDC.i_d" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" ,
1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"D-axis current" , } , { "BLDC.i_q" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0
, "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Q-axis current" , } , { "BLDC.phi" , 0U , 0 , "" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 3 , "1x3" } , NE_INIT_MODE_NONE , "phi" , } , { "BLDC.phi" , 1U , 0
, "" , 1.0 , "1" , 0.0 , TRUE , FALSE , { 3 , "1x3" } , NE_INIT_MODE_NONE ,
"phi" , } , { "BLDC.phi" , 2U , 0 , "" , 1.0 , "1" , 0.0 , TRUE , FALSE , { 3
, "1x3" } , NE_INIT_MODE_NONE , "phi" , } , { "Battery1.charge" , 0U , 0 ,
"Buck_BLDC_2023a_4/Battery1" , 1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" }
, NE_INIT_MODE_MANDATORY , "Charge" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C2.vc" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , { "Buck_Converter.Inductor.i_L" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "Inductor current" , } , {
"Buck_Converter.Capacitor.vc" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"Buck_Converter.Capacitor1.vc" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_OPTIONAL , "Capacitor voltage" , } , {
"Buck_Converter.Inductor1.i_L" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "Inductor current" , } , {
"Inertia_10_kgm2.w" , 0U , 0 , "Buck_BLDC_2023a_4/Inertia = 10 kg*m^2" , 1.0
, "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Rotational velocity" , } , { "Sensing.Ideal_Rotational_Motion_Sensor.phi" ,
0U , 0 , "Buck_BLDC_2023a_4/Sensing/Ideal Rotational Motion Sensor" , 1.0 ,
"1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "Angle" ,
} , { "Sensor.Motion_Sensor.phi" , 0U , 0 ,
"Buck_BLDC_2023a_4/Sensor/Motion  Sensor" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "Angle" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C4.vc" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C6.vc" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , { "Buck_Converter.Capacitor.p.v" , 0U , 1 ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C1.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" , } , {
"BLDC.angular_position.angular_position_ir_replaced_dot_0" , 0U , 0 ,
"Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE ,
 "Secondary variable obtained from variable angular_position during index reduction."
, } , { "BLDC.angular_velocity" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Rotor speed" , } , {
"BLDC.angular_velocity.angular_velocity_ir_dummy_derivative_1" , 0U , 0 ,
"Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE ,
 "Secondary variable obtained from variable angular_velocity during index reduction."
, } , { "Three_Phase_Inverter.Converter_Three_Phase.C3.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C5.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" , } , {
"BLDC.electrical_torque" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" ,
0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Electrical torque"
, } , { "BLDC.i_0" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"Zero-sequence current" , } , { "BLDC.i_0.i_0_ir_dummy_derivative_0" , 0U , 0
, "Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" }
, NE_INIT_MODE_NONE ,
"Secondary variable obtained from variable i_0 during index reduction." , } ,
{ "BLDC.i_b" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "i_b" , } , { "BLDC.i_c" , 0U , 0
, "Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" }
, NE_INIT_MODE_NONE , "i_c" , } , { "BLDC.i_b.i_b_ir_dummy_derivative_2" , 0U
, 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE ,
"Secondary variable obtained from variable i_b during index reduction." , } ,
{ "BLDC.i_c.i_c_ir_dummy_derivative_3" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Secondary variable obtained from variable i_c during index reduction." , } ,
{ "BLDC.i_d.i_d_ir_replaced_dot_1" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0
, "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Secondary variable obtained from variable i_d during index reduction." , } ,
{ "BLDC.v_a" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "v_a" , } , {
"BLDC.i_q.i_q_ir_replaced_dot_2" , 0U , 0 , "Buck_BLDC_2023a_4/BLDC" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Secondary variable obtained from variable i_q during index reduction." , } ,
{ "Inertia_10_kgm2.t" , 0U , 0 , "Buck_BLDC_2023a_4/Inertia = 10 kg*m^2" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Torque" , } , { "Battery1.i" , 0U , 0 , "Buck_BLDC_2023a_4/Battery1" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Current (positive in)" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C2.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" , } , {
"Buck_Converter.Inductor.p.v" , 0U , 1 ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_NONE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C4.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C6.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.i_diode" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.mosfet_equation.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Drain-source current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.i_diode" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.mosfet_equation.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Drain-source current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.i_diode" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.mosfet_equation.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Drain-source current" , } , { "Buck_Converter.Capacitor1.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" , } , {
"Buck_Converter.S.mosfet_equation.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/S" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1
, "1x1" } , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"Buck_Converter.S.diode.private.Diode.threshold" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/S" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1
, "1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Buck_Converter.S1.mosfet_equation.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1
, "1x1" } , NE_INIT_MODE_NONE , "Drain-source current" , } , {
"Buck_Converter.S1.diode.private.Diode.threshold" , 0U , 0 ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1
, "1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Inertia_10_kgm2.w.w_ir_replaced_dot_3" , 0U , 0 ,
"Buck_BLDC_2023a_4/Inertia = 10 kg*m^2" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE ,
"Secondary variable obtained from variable w during index reduction." , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.mosfet_equation.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Drain-source current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.threshold"
, 0U , 0 , "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.threshold"
, 0U , 0 , "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.mosfet_equation.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Drain-source current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.threshold"
, 0U , 0 , "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.threshold"
, 0U , 0 , "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.mosfet_equation.i" , 0U , 0 ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Drain-source current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.threshold"
, 0U , 0 , "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.threshold"
, 0U , 0 , "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"threshold" , } } ; static NeVariableData * s_discrete_data = NULL ; static
NeObservableData s_observable_data [ 612 ] = { { "BLDC.C.w" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "rad/s" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"BLDC.angular_position" , "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "deg" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , TRUE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotor angle" , } , {
"BLDC.fluxReductionForTemp" , "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "fluxReductionForTemp" , } , {
"BLDC.N.V" , "Buck_BLDC_2023a_4/BLDC" , { 3 , "1x3" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "V" , } , { "BLDC.N1.V" ,
"Buck_BLDC_2023a_4/BLDC" , { 3 , "1x3" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "V" , } , { "BLDC.N2.V" ,
"Buck_BLDC_2023a_4/BLDC" , { 3 , "1x3" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "V" , } , { "BLDC.R.w" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "rad/s" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , { "BLDC.Ra"
, "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Ra" , } , { "BLDC.Rb" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rb" , } , { "BLDC.Rc" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rc" , } , { "BLDC.Vd_losses" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Iron losses in cross-tooth path, f(Vd^*)" , } , { "BLDC.Vm_losses" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Iron losses in main magnetizing path, f(Vm)" , } , { "BLDC.a.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "BLDC.a1.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "BLDC.a2.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"BLDC.angular_velocity" , "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "rpm" ,
1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotor speed" , } , {
"BLDC.b.v" , "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "BLDC.b1.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "BLDC.b2.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "BLDC.back_emf" ,
"Buck_BLDC_2023a_4/BLDC" , { 3 , "1x3" } , "Wb/s" , 1.0 , "Wb/s" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "back_emf" , } , { "BLDC.c.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "BLDC.c1.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "BLDC.c2.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"BLDC.electrical_torque" , "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "N*m" ,
1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Electrical torque" , } , { "BLDC.i_0"
, "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Zero-sequence current" , } , {
"BLDC.i_a" , "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_a" , } , { "BLDC.i_b" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_b" , } , { "BLDC.i_c" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_c" , } , { "BLDC.i_d" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "D-axis current" , } , { "BLDC.i_n" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_n" , } , { "BLDC.i_q" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Q-axis current" , } , { "BLDC.n.v" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "BLDC.phi" ,
"Buck_BLDC_2023a_4/BLDC" , { 3 , "1x3" } , "V*s" , 1.0 , "kg*m^2/(C*s)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "phi" , } , { "BLDC.power_dissipated" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "kW" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "power_dissipated" , } , {
"BLDC.torque" , "Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "N*m" , 1.0 ,
"N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , { "BLDC.trq_loss" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "N*m" , 1.0 , "N*m" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Torque losses" , } , { "BLDC.v_a" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v_a" , } , { "BLDC.v_b" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v_b" , } , { "BLDC.v_c" ,
"Buck_BLDC_2023a_4/BLDC" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v_c" , } , { "Battery1.H.T" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Battery1.num_cycles" , "Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Discharge cycles" , } , {
"Battery1.temperature" , "Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , { "Battery1.i" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (positive in)" , } , {
"Battery1.charge" , "Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "A*hr" ,
1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , FALSE , TRUE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Charge" , } , { "Battery1.n.v" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Battery1.p.v" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Battery1.vrc1" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc1" , } , { "Battery1.vrc2" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc2" , } , { "Battery1.vrc3" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc3" , } , { "Battery1.vrc4" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc4" , } , { "Battery1.vrc5" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vrc5" , } , {
"Battery1.power_dissipated" , "Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } ,
"kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Power dissipated" , } , {
"Battery1.q" , "Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "C" , 1.0 , "C"
, NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "q" , } , { "Battery1.v" ,
"Buck_BLDC_2023a_4/Battery1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Capacitor.i" , "Buck_BLDC_2023a_4/Buck Converter/Capacitor" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Buck_Converter.Capacitor.n.v" , "Buck_BLDC_2023a_4/Buck Converter/Capacitor"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Buck_Converter.Capacitor.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Capacitor.v" , "Buck_BLDC_2023a_4/Buck Converter/Capacitor" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Capacitor.vc" , "Buck_BLDC_2023a_4/Buck Converter/Capacitor"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Capacitor voltage" , } , { "Buck_Converter.Capacitor.power_dissipated" ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , } , {
"Buck_Converter.Capacitor1.i" , "Buck_BLDC_2023a_4/Buck Converter/Capacitor1"
, { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , { "Buck_Converter.Capacitor1.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Capacitor1.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Capacitor1.v" , "Buck_BLDC_2023a_4/Buck Converter/Capacitor1"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Buck_Converter.Capacitor1.vc" ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_OPTIONAL , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"Buck_Converter.Capacitor1.power_dissipated" ,
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , } , {
"Buck_Converter.Current_Sensor.I" ,
"Buck_BLDC_2023a_4/Buck Converter/Current Sensor" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Buck_Converter.Current_Sensor.i1" ,
"Buck_BLDC_2023a_4/Buck Converter/Current Sensor" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Buck_Converter.Current_Sensor.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Current Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Current_Sensor.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Current Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Current_Sensor1.I" ,
"Buck_BLDC_2023a_4/Buck Converter/Current Sensor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Buck_Converter.Current_Sensor1.i1" ,
"Buck_BLDC_2023a_4/Buck Converter/Current Sensor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Buck_Converter.Current_Sensor1.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Current Sensor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Current_Sensor1.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Current Sensor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Current_Sensor1_I0" ,
"Buck_BLDC_2023a_4/Buck Converter/PS-Simulink\nConverter3" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor1_I0" , } , {
"Buck_Converter.Current_Sensor_I0" ,
"Buck_BLDC_2023a_4/Buck Converter/PS-Simulink\nConverter2" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I0" , } , {
"Buck_Converter.Inductor.i" , "Buck_BLDC_2023a_4/Buck Converter/Inductor" , {
1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Buck_Converter.Inductor.n.v" , "Buck_BLDC_2023a_4/Buck Converter/Inductor" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Inductor.p.v" , "Buck_BLDC_2023a_4/Buck Converter/Inductor" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Inductor.v" , "Buck_BLDC_2023a_4/Buck Converter/Inductor" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Inductor.i_L" , "Buck_BLDC_2023a_4/Buck Converter/Inductor" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Inductor current" , } , { "Buck_Converter.Inductor.power_dissipated" ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , } , {
"Buck_Converter.Inductor1.i" , "Buck_BLDC_2023a_4/Buck Converter/Inductor1" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Buck_Converter.Inductor1.n.v" , "Buck_BLDC_2023a_4/Buck Converter/Inductor1"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Buck_Converter.Inductor1.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Inductor1.v" , "Buck_BLDC_2023a_4/Buck Converter/Inductor1" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Inductor1.i_L" , "Buck_BLDC_2023a_4/Buck Converter/Inductor1"
, { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Inductor current" , } , { "Buck_Converter.Inductor1.power_dissipated" ,
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , } , {
"Buck_Converter.S.D.v" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S.G" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Buck_Converter.S.G_elec.v" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.S.S.v" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S.diode.private.Diode.BV_threshold" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Buck_Converter.S.diode.private.Diode.Qscale" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Buck_Converter.S.diode.private.Diode.faulted" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Buck_Converter.S.diode.private.Diode.i_diode" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Buck_Converter.S.diode.private.Diode.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.S.diode.private.Diode.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.S.diode.private.Diode.threshold" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Buck_Converter.S.diode.private.Diode.timerFaultTransition" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Buck_Converter.S.diode.private.Diode.v_diode" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Buck_Converter.S.diode.n.v" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S.diode.Qj" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 ,
"1x1" } , "C" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Charge of junction capacitance" , } , { "Buck_Converter.S.diode.TJ" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Buck_Converter.S.diode.Tsim" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Buck_Converter.S.diode.fault_input" , "Buck_BLDC_2023a_4/Buck Converter/S" ,
{ 1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Input fault trigger" , } , { "Buck_Converter.S.diode.faulted" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Buck_Converter.S.diode.i" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Buck_Converter.S.diode.i_capacitor" , "Buck_BLDC_2023a_4/Buck Converter/S" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance current" , } , { "Buck_Converter.S.diode.i_diode" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Buck_Converter.S.diode.i_out" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output"
, } , { "Buck_Converter.S.diode.ni.v" , "Buck_BLDC_2023a_4/Buck Converter/S"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , { "Buck_Converter.S.diode.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S.diode.power_dissipated" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Buck_Converter.S.diode.v" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S.diode.v_capacitor" , "Buck_BLDC_2023a_4/Buck Converter/S" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance voltage" , } , { "Buck_Converter.S.diode.v_diode" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Buck_Converter.S.diode.v_on" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Buck_Converter.S.ids" , "Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Buck_Converter.S.mosfet_equation.G" , "Buck_BLDC_2023a_4/Buck Converter/S" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Buck_Converter.S.mosfet_equation.i" , "Buck_BLDC_2023a_4/Buck Converter/S" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Drain-source current" , } , { "Buck_Converter.S.mosfet_equation.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S.mosfet_equation.p.v" , "Buck_BLDC_2023a_4/Buck Converter/S"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , { "Buck_Converter.S.mosfet_equation.power_dissipated" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Buck_Converter.S.mosfet_equation.v" , "Buck_BLDC_2023a_4/Buck Converter/S" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Drain-source voltage" , } , { "Buck_Converter.S.vT" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "Buck_Converter.S.vds" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , { "Buck_Converter.S.vgs" ,
"Buck_BLDC_2023a_4/Buck Converter/S" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , { "Buck_Converter.S1.D.v"
, "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Buck_Converter.S1.G"
, "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Buck_Converter.S1.G_elec.v" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.S.v" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.diode.private.Diode.BV_threshold" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Buck_Converter.S1.diode.private.Diode.Qscale" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Buck_Converter.S1.diode.private.Diode.faulted" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Buck_Converter.S1.diode.private.Diode.i_diode" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Buck_Converter.S1.diode.private.Diode.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.diode.private.Diode.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.diode.private.Diode.threshold" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Buck_Converter.S1.diode.private.Diode.timerFaultTransition" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Buck_Converter.S1.diode.private.Diode.v_diode" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Buck_Converter.S1.diode.n.v" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.diode.Qj" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 ,
"1x1" } , "C" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Charge of junction capacitance" , } , { "Buck_Converter.S1.diode.TJ" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Buck_Converter.S1.diode.Tsim" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1
, "1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Buck_Converter.S1.diode.fault_input" , "Buck_BLDC_2023a_4/Buck Converter/S1"
, { 1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Input fault trigger" , } , { "Buck_Converter.S1.diode.faulted" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Buck_Converter.S1.diode.i" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Buck_Converter.S1.diode.i_capacitor" , "Buck_BLDC_2023a_4/Buck Converter/S1"
, { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance current" , } , { "Buck_Converter.S1.diode.i_diode" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Buck_Converter.S1.diode.i_out" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output"
, } , { "Buck_Converter.S1.diode.ni.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.diode.p.v" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.diode.power_dissipated" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Buck_Converter.S1.diode.v" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.diode.v_capacitor" , "Buck_BLDC_2023a_4/Buck Converter/S1"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance voltage" , } , { "Buck_Converter.S1.diode.v_diode" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Buck_Converter.S1.diode.v_on" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Buck_Converter.S1.ids" , "Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1"
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Buck_Converter.S1.mosfet_equation.G" , "Buck_BLDC_2023a_4/Buck Converter/S1"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"PS" , } , { "Buck_Converter.S1.mosfet_equation.i" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current" , } , {
"Buck_Converter.S1.mosfet_equation.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.mosfet_equation.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.S1.mosfet_equation.power_dissipated" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Buck_Converter.S1.mosfet_equation.v" , "Buck_BLDC_2023a_4/Buck Converter/S1"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Drain-source voltage" , } , { "Buck_Converter.S1.vT" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "Buck_Converter.S1.vds" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , { "Buck_Converter.S1.vgs" ,
"Buck_BLDC_2023a_4/Buck Converter/S1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Buck_Converter.Simulink_PS_Converter1_output0" ,
"Buck_BLDC_2023a_4/Buck Converter/Simulink-PS\nConverter1" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter1_output0" , }
, { "Buck_Converter.Simulink_PS_Converter2_output0" ,
"Buck_BLDC_2023a_4/Buck Converter/Simulink-PS\nConverter2" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter2_output0" , }
, { "Buck_Converter.Voltage_Sensor.V" ,
"Buck_BLDC_2023a_4/Buck Converter/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Buck_Converter.Voltage_Sensor.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Voltage_Sensor.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Voltage_Sensor1.V" ,
"Buck_BLDC_2023a_4/Buck Converter/Voltage Sensor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Buck_Converter.Voltage_Sensor1.n.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Voltage Sensor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Voltage_Sensor1.p.v" ,
"Buck_BLDC_2023a_4/Buck Converter/Voltage Sensor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Buck_Converter.Voltage_Sensor1_V0" ,
"Buck_BLDC_2023a_4/Buck Converter/PS-Simulink\nConverter1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor1_V0" , } , {
"Buck_Converter.Voltage_Sensor_V0" ,
"Buck_BLDC_2023a_4/Buck Converter/PS-Simulink\nConverter" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V0" , } , {
"Buck_Converter.batt0.v" , "Buck_BLDC_2023a_4/Buck Converter" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.batt1.v" , "Buck_BLDC_2023a_4/Buck Converter" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Buck_Converter.x0.v" , "Buck_BLDC_2023a_4/Buck Converter" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "Current_Sensor.I"
, "Buck_BLDC_2023a_4/Current Sensor" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , { "Current_Sensor.i1" ,
"Buck_BLDC_2023a_4/Current Sensor" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Current_Sensor.n.v"
, "Buck_BLDC_2023a_4/Current Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Current_Sensor.p.v"
, "Buck_BLDC_2023a_4/Current Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Current_Sensor_I0" ,
"Buck_BLDC_2023a_4/PS-Simulink\nConverter" , { 1 , "1x1" } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I0" , } , {
"ERef_IPMSM2.V.v" , "Buck_BLDC_2023a_4/ERef IPMSM2" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Ideal_Torque_Sensor.C.w" , "Buck_BLDC_2023a_4/Ideal Torque Sensor" , { 1 ,
"1x1" } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , { "Ideal_Torque_Sensor.R.w" ,
"Buck_BLDC_2023a_4/Ideal Torque Sensor" , { 1 , "1x1" } , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Ideal_Torque_Sensor.T" , "Buck_BLDC_2023a_4/Ideal Torque Sensor" , { 1 ,
"1x1" } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"Ideal_Torque_Sensor.t" , "Buck_BLDC_2023a_4/Ideal Torque Sensor" , { 1 ,
"1x1" } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Ideal_Torque_Sensor_T0" , "Buck_BLDC_2023a_4/PS-Simulink\nConverter 1" , { 1
, "1x1" } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Torque_Sensor_T0" , } , { "Inertia_10_kgm2.I.w" ,
"Buck_BLDC_2023a_4/Inertia = 10 kg*m^2" , { 1 , "1x1" } , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Inertia_10_kgm2.J.w" , "Buck_BLDC_2023a_4/Inertia = 10 kg*m^2" , { 1 , "1x1"
} , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity"
, } , { "Inertia_10_kgm2.t" , "Buck_BLDC_2023a_4/Inertia = 10 kg*m^2" , { 1 ,
"1x1" } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"Inertia_10_kgm2.w" , "Buck_BLDC_2023a_4/Inertia = 10 kg*m^2" , { 1 , "1x1" }
, "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity"
, } , { "MRRef_IPMSM.W.w" , "Buck_BLDC_2023a_4/MRRef IPMSM" , { 1 , "1x1" } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"MRRef_IPMSM1.W.w" , "Buck_BLDC_2023a_4/MRRef IPMSM1" , { 1 , "1x1" } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Resistor.i" , "Buck_BLDC_2023a_4/Resistor" , { 1 , "1x1" } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Resistor.n.v" ,
"Buck_BLDC_2023a_4/Resistor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor.p.v" ,
"Buck_BLDC_2023a_4/Resistor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Resistor.v" ,
"Buck_BLDC_2023a_4/Resistor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Resistor.power_dissipated" , "Buck_BLDC_2023a_4/Resistor" , { 1 , "1x1" } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , }
, { "Sensing.Ideal_Rotational_Motion_Sensor.A" ,
"Buck_BLDC_2023a_4/Sensing/Ideal Rotational Motion Sensor" , { 1 , "1x1" } ,
"rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A" , } , {
"Sensing.Ideal_Rotational_Motion_Sensor.C.w" ,
"Buck_BLDC_2023a_4/Sensing/Ideal Rotational Motion Sensor" , { 1 , "1x1" } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Sensing.Ideal_Rotational_Motion_Sensor.R.w" ,
"Buck_BLDC_2023a_4/Sensing/Ideal Rotational Motion Sensor" , { 1 , "1x1" } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Sensing.Ideal_Rotational_Motion_Sensor.W" ,
"Buck_BLDC_2023a_4/Sensing/Ideal Rotational Motion Sensor" , { 1 , "1x1" } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W" , } , {
"Sensing.Ideal_Rotational_Motion_Sensor.alpha" ,
"Buck_BLDC_2023a_4/Sensing/Ideal Rotational Motion Sensor" , { 1 , "1x1" } ,
"rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\316\261" , } , {
"Sensing.Ideal_Rotational_Motion_Sensor.phi" ,
"Buck_BLDC_2023a_4/Sensing/Ideal Rotational Motion Sensor" , { 1 , "1x1" } ,
"rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angle" , } , {
"Sensing.Ideal_Rotational_Motion_Sensor_W0" ,
"Buck_BLDC_2023a_4/Sensing/PS-Simulink\nConverter 1" , { 1 , "1x1" } , "rpm"
, 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Ideal_Rotational_Motion_Sensor_W0"
, } , { "Sensing.Mechanical_Rotational_Reference2.W.w" ,
"Buck_BLDC_2023a_4/Sensing/Mechanical Rotational Reference2" , { 1 , "1x1" }
, "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" ,
} , { "Sensing.R.w" , "Buck_BLDC_2023a_4/Sensing" , { 1 , "1x1" } , "rad/s" ,
1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Sensor.MRRef.W.w" , "Buck_BLDC_2023a_4/Sensor/MRRef" , { 1 , "1x1" } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Sensor.Motion_Sensor.A" , "Buck_BLDC_2023a_4/Sensor/Motion  Sensor" , { 1 ,
"1x1" } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A" , } , {
"Sensor.Motion_Sensor.C.w" , "Buck_BLDC_2023a_4/Sensor/Motion  Sensor" , { 1
, "1x1" } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , { "Sensor.Motion_Sensor.R.w" ,
"Buck_BLDC_2023a_4/Sensor/Motion  Sensor" , { 1 , "1x1" } , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Sensor.Motion_Sensor.W" , "Buck_BLDC_2023a_4/Sensor/Motion  Sensor" , { 1 ,
"1x1" } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , { "Sensor.Motion_Sensor.alpha" ,
"Buck_BLDC_2023a_4/Sensor/Motion  Sensor" , { 1 , "1x1" } , "rad/s^2" , 1.0 ,
"1/s^2" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\316\261" , } , {
"Sensor.Motion_Sensor.phi" , "Buck_BLDC_2023a_4/Sensor/Motion  Sensor" , { 1
, "1x1" } , "deg" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , { "Sensor.Motion_Sensor_A0" ,
"Buck_BLDC_2023a_4/Sensor/PS-Simulink\nConverter2" , { 1 , "1x1" } , "rad" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Motion_Sensor_A0" , } , {
"Sensor.Motion_Sensor_W0" ,
"Buck_BLDC_2023a_4/Sensor/PS-Simulink\nConverter1" , { 1 , "1x1" } , "rpm" ,
1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Motion_Sensor_W0" , } , {
"Sensor.R.w" , "Buck_BLDC_2023a_4/Sensor" , { 1 , "1x1" } , "rad/s" , 1.0 ,
"1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"Simulink_PS_Converter_output0" , "Buck_BLDC_2023a_4/Simulink-PS\nConverter"
, { 1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter_output0" , } , { "Subsystem.Current_Sensor1.I" ,
"Buck_BLDC_2023a_4/Subsystem/Current Sensor1" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Subsystem.Current_Sensor1.i1" ,
"Buck_BLDC_2023a_4/Subsystem/Current Sensor1" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Subsystem.Current_Sensor1.n.v" ,
"Buck_BLDC_2023a_4/Subsystem/Current Sensor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Subsystem.Current_Sensor1.p.v" ,
"Buck_BLDC_2023a_4/Subsystem/Current Sensor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Subsystem.Current_Sensor1_I0" ,
"Buck_BLDC_2023a_4/Subsystem/PS-Simulink\nConverter1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor1_I0" , } , {
"Subsystem.Voltage_Sensor1.V" , "Buck_BLDC_2023a_4/Subsystem/Voltage Sensor1"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , { "Subsystem.Voltage_Sensor1.n.v" ,
"Buck_BLDC_2023a_4/Subsystem/Voltage Sensor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Subsystem.Voltage_Sensor1.p.v" ,
"Buck_BLDC_2023a_4/Subsystem/Voltage Sensor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Subsystem.Voltage_Sensor1_V0" ,
"Buck_BLDC_2023a_4/Subsystem/PS-Simulink\nConverter2" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor1_V0" , } , {
"Subsystem.batt0.v" , "Buck_BLDC_2023a_4/Subsystem" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "Subsystem.batt1.v"
, "Buck_BLDC_2023a_4/Subsystem" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , { "Subsystem.out.v" ,
"Buck_BLDC_2023a_4/Subsystem" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C1.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C1.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C1.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C1.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C1.vc" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.C1.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.C2.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C2.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C2.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C2.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C2.vc" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.C2.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.C3.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C3.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C3.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C3.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C3.vc" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.C3.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.C4.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C4.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C4.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C4.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C4.vc" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.C4.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.C5.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C5.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C5.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C5.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C5.vc" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.C5.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.C6.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C6.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C6.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C6.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.C6.vc" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.C6.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "Dissipated power" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.G.V" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 12 ,
"1x12" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G1" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "G1" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G1n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G1p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G2" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "G2" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G2n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G2p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G3" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "G3" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G3n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G3p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G4" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "G4" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G4n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G4p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G5" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "G5" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G5n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G5p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G6" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "G6" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G6n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.G6p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.I" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 12 ,
"1x12" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "I" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i1n" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i1n" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i1p" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i1p" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i2n" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i2n" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i2p" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i2p" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i3n" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i3n" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i3p" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i3p" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i4n" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i4n" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i4p" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i4p" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i5n" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i5n" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i5p" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i5p" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i6n" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i6n" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.i6p" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i6p" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.demux_gates.p.V" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 12 ,
"1x12" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "V" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.N.V" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 3 ,
"1x3" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "V" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.D.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.G_elec.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.S.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.BV_threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.Qscale" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
 "Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.timerFaultTransition"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.Qj" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "C" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Charge of junction capacitance" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.TJ" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.Tsim" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.fault_input" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.i_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.i_out" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.ni.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.v_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.v_on" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.ids" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.mosfet_equation.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.mosfet_equation.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q1.mosfet_equation.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.mosfet_equation.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.mosfet_equation.power_dissipated"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q1.mosfet_equation.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q1.vT" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.vds" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q1.vgs" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.D.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.G_elec.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.S.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.BV_threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.Qscale" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
 "Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.timerFaultTransition"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.Qj" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "C" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Charge of junction capacitance" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.TJ" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.Tsim" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.fault_input" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.i_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.i_out" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.ni.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.v_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.v_on" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.ids" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.mosfet_equation.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.mosfet_equation.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q2.mosfet_equation.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.mosfet_equation.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.mosfet_equation.power_dissipated"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q2.mosfet_equation.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q2.vT" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.vds" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q2.vgs" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.D.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.G_elec.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.S.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.BV_threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.Qscale" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
 "Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.timerFaultTransition"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.Qj" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "C" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Charge of junction capacitance" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.TJ" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.Tsim" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.fault_input" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.i_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.i_out" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.ni.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.v_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.v_on" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.ids" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.mosfet_equation.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.mosfet_equation.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q3.mosfet_equation.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.mosfet_equation.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.mosfet_equation.power_dissipated"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q3.mosfet_equation.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q3.vT" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.vds" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q3.vgs" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.D.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.G_elec.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.S.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.BV_threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.Qscale" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
 "Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.timerFaultTransition"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.Qj" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "C" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Charge of junction capacitance" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.TJ" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.Tsim" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.fault_input" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.i_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.i_out" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.ni.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.v_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.v_on" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.ids" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.mosfet_equation.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.mosfet_equation.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q4.mosfet_equation.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.mosfet_equation.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.mosfet_equation.power_dissipated"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q4.mosfet_equation.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q4.vT" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.vds" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q4.vgs" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.D.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.G_elec.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.S.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.BV_threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.Qscale" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
 "Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.timerFaultTransition"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.Qj" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "C" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Charge of junction capacitance" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.TJ" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.Tsim" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.fault_input" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.i_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.i_out" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.ni.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.v_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.v_on" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.ids" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.mosfet_equation.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.mosfet_equation.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q5.mosfet_equation.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.mosfet_equation.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.mosfet_equation.power_dissipated"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q5.mosfet_equation.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q5.vT" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.vds" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q5.vgs" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.D.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.G_elec.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.S.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.BV_threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.Qscale" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.threshold"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
 "Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.timerFaultTransition"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "s" , 1.0 , "s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.Qj" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "C" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Charge of junction capacitance" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.TJ" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.Tsim" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.fault_input" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" ,
} , { "Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.faulted" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.i_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.i_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.i_out" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.ni.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.power_dissipated" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.v_capacitor" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Junction capacitance voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.v_diode" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.v_on" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.ids" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "ids" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.mosfet_equation.G" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.mosfet_equation.i" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source current"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q6.mosfet_equation.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.mosfet_equation.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.mosfet_equation.power_dissipated"
, "Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , }
, { "Three_Phase_Inverter.Converter_Three_Phase.Q6.mosfet_equation.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Drain-source voltage"
, } , { "Three_Phase_Inverter.Converter_Three_Phase.Q6.vT" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.vds" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vds" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.Q6.vgs" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vgs" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.a.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.b.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.c.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Converter_Three_Phase.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor.I" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor" , { 1 , "1x1" } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Three_Phase_Inverter.Current_Sensor.i1" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor" , { 1 , "1x1" } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Three_Phase_Inverter.Current_Sensor.n.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor.p.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor_I0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/PS-Simulink\nConverter2" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I0" ,
} , { "Three_Phase_Inverter.Current_Sensor_Three_Phase.I_output" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 3 ,
"1x3" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.a1.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.a2.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.b1.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.b2.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.c1.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.c2.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.i_a" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_a" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.i_b" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_b" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase.i_c" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Current Sensor (Three-Phase)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_c" , } , {
"Three_Phase_Inverter.Current_Sensor_Three_Phase_I_output0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/PS-Simulink\nConverter" , { 3 ,
"1x3" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Current_Sensor_Three_Phase_I_output0" , } , {
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase.V_output" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Line Voltage Sensor (Three-Phase)" ,
{ 3 , "1x3" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase.a.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Line Voltage Sensor (Three-Phase)" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase.b.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Line Voltage Sensor (Three-Phase)" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase.c.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Line Voltage Sensor (Three-Phase)" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase.i_a" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Line Voltage Sensor (Three-Phase)" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_a" , } , {
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase.i_b" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Line Voltage Sensor (Three-Phase)" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_b" , } , {
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase.i_c" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Line Voltage Sensor (Three-Phase)" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i_c" , } , {
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase_V_output0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/PS-Simulink\nConverter1" , { 3 ,
"1x3" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Line_Voltage_Sensor_Three_Phase_V_output0" , } , {
"Three_Phase_Inverter.Simulink_PS_Converter1_output0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/Simulink-PS\nConverter1" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter1_output0" , } , {
"Three_Phase_Inverter.Simulink_PS_Converter2_output0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/Simulink-PS\nConverter2" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter2_output0" , } , {
"Three_Phase_Inverter.Simulink_PS_Converter3_output0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/Simulink-PS\nConverter3" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter3_output0" , } , {
"Three_Phase_Inverter.Simulink_PS_Converter4_output0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/Simulink-PS\nConverter4" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter4_output0" , } , {
"Three_Phase_Inverter.Simulink_PS_Converter5_output0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/Simulink-PS\nConverter5" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter5_output0" , } , {
"Three_Phase_Inverter.Simulink_PS_Converter_output0" ,
"Buck_BLDC_2023a_4/Three-Phase\nInverter/Simulink-PS\nConverter" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter_output0" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GaH.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GaH_ps" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Ga(H)" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GaL.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GaL_ps" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Ga(L)" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GbH.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GbH_ps" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gb(H)" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GbL.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GbL_ps" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gb(L)" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GcH.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GcH_ps" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gc(H)" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GcL.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.GcL_ps" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Gc(L)" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.I" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 12 ,
"1x12" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.L.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.a.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.b.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.c.v" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.Six_Pulse_Gate_Multiplexer.p.V" ,
"Buck_BLDC_2023a_4/Three-Phase Inverter/Six-Pulse Gate Multiplexer" , { 12 ,
"1x12" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Three_Phase_Inverter.a.v" , "Buck_BLDC_2023a_4/Three-Phase Inverter" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.b.v" , "Buck_BLDC_2023a_4/Three-Phase Inverter" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.c.v" , "Buck_BLDC_2023a_4/Three-Phase Inverter" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.x0.v" , "Buck_BLDC_2023a_4/Three-Phase Inverter" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Three_Phase_Inverter.x1.v" , "Buck_BLDC_2023a_4/Three-Phase Inverter" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"Torque_Source.C.w" , "Buck_BLDC_2023a_4/Torque  Source" , { 1 , "1x1" } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Torque_Source.R.w" , "Buck_BLDC_2023a_4/Torque  Source" , { 1 , "1x1" } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"Torque_Source.S" , "Buck_BLDC_2023a_4/Torque  Source" , { 1 , "1x1" } ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S" , } , { "Torque_Source.t" ,
"Buck_BLDC_2023a_4/Torque  Source" , { 1 , "1x1" } , "N*m" , 1.0 , "N*m" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , { "Torque_Source.w" ,
"Buck_BLDC_2023a_4/Torque  Source" , { 1 , "1x1" } , "rad/s" , 1.0 , "1/s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angular velocity" , } , {
"Voltage_Sensor.V" , "Buck_BLDC_2023a_4/Voltage Sensor" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor.n.v" ,
"Buck_BLDC_2023a_4/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor.p.v"
, "Buck_BLDC_2023a_4/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Voltage_Sensor_V0" ,
"Buck_BLDC_2023a_4/PS-Simulink\nConverter1" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V0" , } } ; static
NeModeData * s_major_mode_data = NULL ; static NeZCData s_zc_data [ 19 ] = {
{ "Buck_BLDC_2023a_4/BLDC" , 1U , 0U , "BLDC.private.thA" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, NE_ZC_TYPE_TRUE , } , { "Buck_BLDC_2023a_4/BLDC" , 1U , 1U ,
"BLDC.private.thB" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, NE_ZC_TYPE_TRUE , } , { "Buck_BLDC_2023a_4/BLDC" , 1U , 2U ,
"BLDC.private.thC" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, NE_ZC_TYPE_TRUE , } , { "Buck_BLDC_2023a_4/Buck Converter/S" , 1U , 3U ,
"Buck_Converter.S.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "Buck_BLDC_2023a_4/Buck Converter/S1" , 1U , 4U ,
"Buck_Converter.S1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 5U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 6U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 7U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 8U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 9U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 10U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "Buck_BLDC_2023a_4/Buck Converter/S" , 1U , 11U ,
"Buck_Converter.S.mosfet_equation" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "Buck_BLDC_2023a_4/Buck Converter/S1" , 1U , 12U ,
"Buck_Converter.S1.mosfet_equation" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 13U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q1.mosfet_equation" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 14U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q2.mosfet_equation" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 15U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q3.mosfet_equation" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 16U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q4.mosfet_equation" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 17U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q5.mosfet_equation" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 18U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q6.mosfet_equation" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 19 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 82 ] = { { "Buck_BLDC_2023a_4/BLDC" , 1U , 0U ,
"BLDC.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/BLDC" , 1U , 1U , "BLDC.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/BLDC" , 1U , 2U , "BLDC.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/BLDC" , 1U , 3U , "BLDC.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/BLDC" , 1U , 4U , "BLDC.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/BLDC" , 1U , 5U , "BLDC.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Battery1" , 1U , 6U , "Battery1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/battery/shared_library/m/+batteryecm/battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Battery1" , 1U , 7U , "Battery1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/battery/shared_library/m/+batteryecm/battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , 1U , 8U ,
"Buck_Converter.Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , 1U , 9U ,
"Buck_Converter.Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , 1U , 10U ,
"Buck_Converter.Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Capacitor" , 1U , 11U ,
"Buck_Converter.Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , 1U , 12U ,
"Buck_Converter.Capacitor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , 1U , 13U ,
"Buck_Converter.Capacitor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , 1U , 14U ,
"Buck_Converter.Capacitor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Capacitor1" , 1U , 15U ,
"Buck_Converter.Capacitor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Inductor" , 1U , 16U ,
"Buck_Converter.Inductor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Inductor" , 1U , 17U ,
"Buck_Converter.Inductor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Inductor" , 1U , 18U ,
"Buck_Converter.Inductor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Inductor" , 1U , 19U ,
"Buck_Converter.Inductor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , 1U , 20U ,
"Buck_Converter.Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , 1U , 21U ,
"Buck_Converter.Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , 1U , 22U ,
"Buck_Converter.Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Buck Converter/Inductor1" , 1U , 23U ,
"Buck_Converter.Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Resistor" , 1U , 24U , "Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Resistor" , 1U , 25U , "Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 26U ,
"Three_Phase_Inverter.Converter_Three_Phase.C1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 27U ,
"Three_Phase_Inverter.Converter_Three_Phase.C1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 28U ,
"Three_Phase_Inverter.Converter_Three_Phase.C1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 29U ,
"Three_Phase_Inverter.Converter_Three_Phase.C1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 30U ,
"Three_Phase_Inverter.Converter_Three_Phase.C2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 31U ,
"Three_Phase_Inverter.Converter_Three_Phase.C2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 32U ,
"Three_Phase_Inverter.Converter_Three_Phase.C2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 33U ,
"Three_Phase_Inverter.Converter_Three_Phase.C2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 34U ,
"Three_Phase_Inverter.Converter_Three_Phase.C3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 35U ,
"Three_Phase_Inverter.Converter_Three_Phase.C3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 36U ,
"Three_Phase_Inverter.Converter_Three_Phase.C3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 37U ,
"Three_Phase_Inverter.Converter_Three_Phase.C3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 38U ,
"Three_Phase_Inverter.Converter_Three_Phase.C4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 39U ,
"Three_Phase_Inverter.Converter_Three_Phase.C4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 40U ,
"Three_Phase_Inverter.Converter_Three_Phase.C4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 41U ,
"Three_Phase_Inverter.Converter_Three_Phase.C4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 42U ,
"Three_Phase_Inverter.Converter_Three_Phase.C5.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 43U ,
"Three_Phase_Inverter.Converter_Three_Phase.C5.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 44U ,
"Three_Phase_Inverter.Converter_Three_Phase.C5.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 45U ,
"Three_Phase_Inverter.Converter_Three_Phase.C5.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 46U ,
"Three_Phase_Inverter.Converter_Three_Phase.C6.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 47U ,
"Three_Phase_Inverter.Converter_Three_Phase.C6.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 48U ,
"Three_Phase_Inverter.Converter_Three_Phase.C6.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 49U ,
"Three_Phase_Inverter.Converter_Three_Phase.C6.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Buck_BLDC_2023a_4/Buck Converter/S" , 1U , 50U ,
"Buck_Converter.S.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Buck Converter/S" , 1U , 51U ,
"Buck_Converter.S.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Buck Converter/S" , 1U , 52U ,
"Buck_Converter.S.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Buck Converter/S" , 1U , 53U ,
"Buck_Converter.S.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Buck Converter/S1" , 1U , 54U ,
"Buck_Converter.S1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Buck Converter/S1" , 1U , 55U ,
"Buck_Converter.S1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Buck Converter/S1" , 1U , 56U ,
"Buck_Converter.S1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Buck Converter/S1" , 1U , 57U ,
"Buck_Converter.S1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 58U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 59U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 60U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 61U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q1.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 62U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 63U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 64U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 65U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q2.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 66U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 67U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 68U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 69U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q3.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 70U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 71U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 72U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 73U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q4.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 74U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 75U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 76U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 77U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q5.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 78U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 79U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 80U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Buck_BLDC_2023a_4/Three-Phase Inverter/Converter (Three-Phase)" , 1U , 81U ,
"Three_Phase_Inverter.Converter_Three_Phase.Q6.diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 82 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/battery/shared_library/m/+batteryecm/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/battery/shared_library/m/+batteryecm/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 31U , 25U , 32U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 27U , 25U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 39U , 25U , 40U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 37U , 25U , 38U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 31U , 25U , 32U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 27U , 25U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 39U , 25U , 40U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 37U , 25U , 38U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 118 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/battery/shared_library/m/+batteryecm/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/battery/shared_library/m/+batteryecm/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 5U , 44U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 20U , 44U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 35U , 5U , 35U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/mosfet_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+electromech/+pmsm/+pm_rotor/+bldc/base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeRange *
s_cer_range = NULL ; static NeRange s_icr_range [ 10 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/battery/shared_library/m/+batteryecm/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/battery/shared_library/m/+batteryecm/battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData
* s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData s_real_parameter_data
[ 1 ] = { { "RTP_DBEA2577_vc" , "Buck_BLDC_2023a_4/Buck Converter/Capacitor1"
, "" , 0U , 1U , TRUE , } } ; static real_T s_constant_table0 [ 12 ] = { 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mM_P . mNumCol = 64 ; out -> mM_P . mNumRow = 64 ; out -> mM_P . mJc =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 65 )
; out -> mM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 26 ) ; return out ; } static NeDsMethodOutput *
ds_output_m ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM .
mN = 26 ; out -> mM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 26 ) ; return out ; } static NeDsMethodOutput *
ds_output_vmm ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMM .
mN = 26 ; out -> mVMM . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 26 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 64 ; out -> mDXM_P .
mNumRow = 26 ; out -> mDXM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 65 ) ; out -> mDXM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dxm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_ddm_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 0 ; out -> mDDM_P .
mNumRow = 26 ; out -> mDDM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_ddm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_dum_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 9 ; out -> mDUM_P .
mNumRow = 26 ; out -> mDUM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 10 ) ; out -> mDUM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dum ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_dtm_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out -> mDTM_P .
mNumRow = 26 ; out -> mDTM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dtm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_dpm_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDPM_P . mNumCol = 1 ; out -> mDPM_P .
mNumRow = 26 ; out -> mDPM_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mDPM_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dpm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDPM . mN = 0 ; out -> mDPM . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_a_p ( const NeDynamicSystem * ds
, PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 64 ; out -> mA_P . mNumRow
= 64 ; out -> mA_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 65 ) ; out -> mA_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 104 ) ; return out ; } static
NeDsMethodOutput * ds_output_a ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mA . mN = 104 ; out -> mA . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 104 ) ; return out ; } static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mB_P . mNumCol = 9 ; out -> mB_P . mNumRow = 64 ; out -> mB_P . mJc =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 10 )
; out -> mB_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 1 ) ; return out ; } static NeDsMethodOutput *
ds_output_b ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mB .
mN = 1 ; out -> mB . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 1 ) ; return out ; } static NeDsMethodOutput *
ds_output_c_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P .
mNumCol = 1 ; out -> mC_P . mNumRow = 64 ; out -> mC_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_c ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 64 ; out -> mF . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 64 ) ; return out
; } static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 64 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 64
) ; return out ; } static NeDsMethodOutput * ds_output_vpf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVPF . mN = 64 ; out -> mVPF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_vsf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVSF . mN = 64 ; out -> mVSF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 64 ; out -> mSLF .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 64 ; out -> mSLF0 .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 64 ; out ->
mDXF_P . mNumRow = 64 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 65 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 193 )
; return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 193 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
193 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 9 ; out ->
mDUF_P . mNumRow = 64 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 0 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 64 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 64 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF_P . mNumCol = 1 ; out ->
mDPDXF_P . mNumRow = 193 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDPDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF . mN = 0 ; out -> mDPDXF
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 64 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 9 ; out ->
mTDUF_P . mNumRow = 64 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 9 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 64 ; out ->
mTDXF_P . mNumRow = 64 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 65 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 297 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 73 ; out ->
mDNF_P . mNumRow = 64 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 74 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 10 ; out -> mDNF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
10 ) ; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 64 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_cer
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCER . mN = 0 ; out ->
mCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER . mN = 0 ; out
-> mDXCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER_P . mNumCol =
64 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 65 ) ; out ->
mDXCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER . mN = 0 ; out
-> mDDCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER_P . mNumCol = 0
; out -> mDDCER_P . mNumRow = 0 ; out -> mDDCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 64 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 10 ; out -> mICR .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
10 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 10 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 10 ;
out -> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 10 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 10 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 10 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 64 ; out ->
mDXICR_P . mNumRow = 10 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 65 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 0 ; out ->
mDDICR_P . mNumRow = 10 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 9 ; out ->
mTDUICR_P . mNumRow = 10 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mTDUICR_P .
mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 64 ; out ->
mICRM_P . mNumRow = 10 ; out -> mICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 65 ) ; out -> mICRM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out -> mICRM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol = 64 ; out
-> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 65 ) ; out -> mDXICRM_P .
mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out ->
mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
0 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_freqs (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mFREQS . mN = 0 ; out
-> mFREQS . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_solverhits ( const NeDynamicSystem * ds , PmAllocator * allocator )
{ NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * )
allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out
-> mSOLVERHITS . mN = 0 ; out -> mSOLVERHITS . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_mduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 9 ; out -> mMDUY_P .
mNumRow = 19 ; out -> mMDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 10 ) ; out -> mMDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 64 ; out -> mMDXY_P .
mNumRow = 19 ; out -> mMDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 65 ) ; out -> mMDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 9 ; out -> mTDUY_P .
mNumRow = 19 ; out -> mTDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 10 ) ; out -> mTDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; return out ;
} static NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 64 ; out -> mTDXY_P .
mNumRow = 19 ; out -> mTDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 65 ) ; out -> mTDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 72 ) ; return out
; } static NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 19 ; out -> mY . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 19 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 64 ; out -> mDXY_P .
mNumRow = 19 ; out -> mDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 65 ) ; out -> mDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 72 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 72 ; out -> mDXY . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 72 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 9 ; out ->
mDUY_P . mNumRow = 19 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 1 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 19 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 19 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
19 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 19 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 19 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 0 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update2_i
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_I . mN = 0 ;
out -> mUPDATE2_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK_R . mN = 0 ; out -> mLOCK_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 0 ; out -> mLOCK_I . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_lock2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_R . mN = 0 ; out ->
mLOCK2_R . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_I . mN = 0 ; out -> mLOCK2_I . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFO . mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFP . mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out -> mINIT_R . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_init_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out ->
mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 491 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 491 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 82 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 82 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 64 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 65 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 9 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 663 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 663 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 663 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 663 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 663 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 663
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 663 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 663 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 64 ; out -> mQX_P .
mNumRow = 64 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 65 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 9 ; out -> mQU_P .
mNumRow = 64 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 10 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 64 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 64 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 64 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 64 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 64 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 64 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 64 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 64 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 64 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 64 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 64 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 64 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 64 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 64 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 64 ; out -> mIMAX .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
64 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 0 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 0 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; if ( -- _ds ->
mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds -> mAlloc , _ds ) ; } }
static void get_reference ( NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ;
_ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt ; } static
NeDynamicSystem * diagnostics ( NeDynamicSystem * ds , boolean_T kp ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ( void ) kp ;
ne_ds_get_reference ( & _ds -> mBase ) ; return & _ds -> mBase ; } static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out , boolean_T kp ) { ( void ) ds ; ( void ) kp ; memcpy (
out -> mX , in -> mX . mX , sizeof ( real_T ) * out -> mN ) ; } static void
rtpmap ( const NeDynamicSystem * ds , const PmIntVector * inl , const
PmIntVector * ini , const PmIntVector * inj , const PmRealVector * inr ,
PmIntVector * outl , PmIntVector * outi , PmIntVector * outj , PmRealVector *
outr ) { ( void ) ds ; memcpy ( outl -> mX , inl -> mX , sizeof ( int32_T ) *
inl -> mN ) ; memcpy ( outi -> mX , ini -> mX , sizeof ( int32_T ) * ini ->
mN ) ; memcpy ( outj -> mX , inj -> mX , sizeof ( int32_T ) * inj -> mN ) ;
memcpy ( outr -> mX , inr -> mX , sizeof ( real_T ) * inr -> mN ) ; }
NeDynamicSystem * Buck_BLDC_2023a_4_7fdece01_1_dae_ds ( PmAllocator *
allocator ) { NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static
SscIoInfo input_info [ 9 ] ; static SscIoInfo output_info [ 15 ] ; _ds = (
_NeDynamicSystem * ) allocator -> mCallocFcn ( allocator , sizeof (
_NeDynamicSystem ) , 1 ) ; _ds -> mAlloc = * allocator ; _ds -> mRefCnt = 1 ;
ds = & _ds -> mBase ; ds -> mNumVariables = 64 ; ds ->
mNumDiscreteRealVariables = 0 ; ds -> mNumDifferentialVariables = 20 ; ds ->
mNumEquations = 64 ; ds -> mNumCEResiduals = 0 ; ds -> mNumICResiduals = 10 ;
ds -> mNumFreqs = 0 ; ds -> mNumSolverHits = 0 ; ds -> mNumModes = 19 ; ds ->
mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds -> mNumIntCache = 0 ; ds ->
mNumObservables = 612 ; ds -> mNumObservableElements = 663 ; ds -> mNumZcs =
19 ; ds -> mNumAsserts = 82 ; ds -> mNumAssertRanges = 82 ; ds ->
mNumParamAsserts = 0 ; ds -> mNumParamAssertRanges = 0 ; ds ->
mNumInitialAsserts = 0 ; ds -> mNumInitialAssertRanges = 0 ; ds -> mNumRanges
= 19 ; ds -> mNumEquationRanges = 118 ; ds -> mNumCERRanges = 0 ; ds ->
mNumICRRanges = 10 ; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0
; ds -> mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 1 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ SSC_INPUT_IO_TYPE ] = 9 ; input_info [ 0
] . identifier = "Buck_Converter.Simulink_PS_Converter1_output0" ; input_info
[ 0 ] . size . numElements = 1 ; input_info [ 0 ] . size . encodedDimensions
= "1x1" ; input_info [ 0 ] . name =
"Buck_Converter.Simulink_PS_Converter1_output0" ; input_info [ 0 ] . unit =
"1" ; input_info [ 1 ] . identifier =
"Buck_Converter.Simulink_PS_Converter2_output0" ; input_info [ 1 ] . size .
numElements = 1 ; input_info [ 1 ] . size . encodedDimensions = "1x1" ;
input_info [ 1 ] . name = "Buck_Converter.Simulink_PS_Converter2_output0" ;
input_info [ 1 ] . unit = "1" ; input_info [ 2 ] . identifier =
"Simulink_PS_Converter_output0" ; input_info [ 2 ] . size . numElements = 1 ;
input_info [ 2 ] . size . encodedDimensions = "1x1" ; input_info [ 2 ] . name
= "Simulink_PS_Converter_output0" ; input_info [ 2 ] . unit = "1" ;
input_info [ 3 ] . identifier =
"Three_Phase_Inverter.Simulink_PS_Converter1_output0" ; input_info [ 3 ] .
size . numElements = 1 ; input_info [ 3 ] . size . encodedDimensions = "1x1"
; input_info [ 3 ] . name =
"Three_Phase_Inverter.Simulink_PS_Converter1_output0" ; input_info [ 3 ] .
unit = "1" ; input_info [ 4 ] . identifier =
"Three_Phase_Inverter.Simulink_PS_Converter2_output0" ; input_info [ 4 ] .
size . numElements = 1 ; input_info [ 4 ] . size . encodedDimensions = "1x1"
; input_info [ 4 ] . name =
"Three_Phase_Inverter.Simulink_PS_Converter2_output0" ; input_info [ 4 ] .
unit = "1" ; input_info [ 5 ] . identifier =
"Three_Phase_Inverter.Simulink_PS_Converter3_output0" ; input_info [ 5 ] .
size . numElements = 1 ; input_info [ 5 ] . size . encodedDimensions = "1x1"
; input_info [ 5 ] . name =
"Three_Phase_Inverter.Simulink_PS_Converter3_output0" ; input_info [ 5 ] .
unit = "1" ; input_info [ 6 ] . identifier =
"Three_Phase_Inverter.Simulink_PS_Converter4_output0" ; input_info [ 6 ] .
size . numElements = 1 ; input_info [ 6 ] . size . encodedDimensions = "1x1"
; input_info [ 6 ] . name =
"Three_Phase_Inverter.Simulink_PS_Converter4_output0" ; input_info [ 6 ] .
unit = "1" ; input_info [ 7 ] . identifier =
"Three_Phase_Inverter.Simulink_PS_Converter5_output0" ; input_info [ 7 ] .
size . numElements = 1 ; input_info [ 7 ] . size . encodedDimensions = "1x1"
; input_info [ 7 ] . name =
"Three_Phase_Inverter.Simulink_PS_Converter5_output0" ; input_info [ 7 ] .
unit = "1" ; input_info [ 8 ] . identifier =
"Three_Phase_Inverter.Simulink_PS_Converter_output0" ; input_info [ 8 ] .
size . numElements = 1 ; input_info [ 8 ] . size . encodedDimensions = "1x1"
; input_info [ 8 ] . name =
"Three_Phase_Inverter.Simulink_PS_Converter_output0" ; input_info [ 8 ] .
unit = "1" ; ds -> mIo [ SSC_INPUT_IO_TYPE ] = input_info ; ds -> mNumIo [
SSC_OUTPUT_IO_TYPE ] = 15 ; output_info [ 0 ] . identifier =
"Buck_Converter.Current_Sensor1_I0" ; output_info [ 0 ] . size . numElements
= 1 ; output_info [ 0 ] . size . encodedDimensions = "1x1" ; output_info [ 0
] . name = "Buck_Converter.Current_Sensor1_I0" ; output_info [ 0 ] . unit =
"A" ; output_info [ 1 ] . identifier = "Buck_Converter.Current_Sensor_I0" ;
output_info [ 1 ] . size . numElements = 1 ; output_info [ 1 ] . size .
encodedDimensions = "1x1" ; output_info [ 1 ] . name =
"Buck_Converter.Current_Sensor_I0" ; output_info [ 1 ] . unit = "A" ;
output_info [ 2 ] . identifier = "Buck_Converter.Voltage_Sensor1_V0" ;
output_info [ 2 ] . size . numElements = 1 ; output_info [ 2 ] . size .
encodedDimensions = "1x1" ; output_info [ 2 ] . name =
"Buck_Converter.Voltage_Sensor1_V0" ; output_info [ 2 ] . unit = "V" ;
output_info [ 3 ] . identifier = "Buck_Converter.Voltage_Sensor_V0" ;
output_info [ 3 ] . size . numElements = 1 ; output_info [ 3 ] . size .
encodedDimensions = "1x1" ; output_info [ 3 ] . name =
"Buck_Converter.Voltage_Sensor_V0" ; output_info [ 3 ] . unit = "V" ;
output_info [ 4 ] . identifier = "Current_Sensor_I0" ; output_info [ 4 ] .
size . numElements = 1 ; output_info [ 4 ] . size . encodedDimensions = "1x1"
; output_info [ 4 ] . name = "Current_Sensor_I0" ; output_info [ 4 ] . unit =
"A" ; output_info [ 5 ] . identifier = "Ideal_Torque_Sensor_T0" ; output_info
[ 5 ] . size . numElements = 1 ; output_info [ 5 ] . size . encodedDimensions
= "1x1" ; output_info [ 5 ] . name = "Ideal_Torque_Sensor_T0" ; output_info [
5 ] . unit = "N*m" ; output_info [ 6 ] . identifier =
"Sensing.Ideal_Rotational_Motion_Sensor_W0" ; output_info [ 6 ] . size .
numElements = 1 ; output_info [ 6 ] . size . encodedDimensions = "1x1" ;
output_info [ 6 ] . name = "Sensing.Ideal_Rotational_Motion_Sensor_W0" ;
output_info [ 6 ] . unit = "rpm" ; output_info [ 7 ] . identifier =
"Sensor.Motion_Sensor_A0" ; output_info [ 7 ] . size . numElements = 1 ;
output_info [ 7 ] . size . encodedDimensions = "1x1" ; output_info [ 7 ] .
name = "Sensor.Motion_Sensor_A0" ; output_info [ 7 ] . unit = "rad" ;
output_info [ 8 ] . identifier = "Sensor.Motion_Sensor_W0" ; output_info [ 8
] . size . numElements = 1 ; output_info [ 8 ] . size . encodedDimensions =
"1x1" ; output_info [ 8 ] . name = "Sensor.Motion_Sensor_W0" ; output_info [
8 ] . unit = "rpm" ; output_info [ 9 ] . identifier =
"Subsystem.Current_Sensor1_I0" ; output_info [ 9 ] . size . numElements = 1 ;
output_info [ 9 ] . size . encodedDimensions = "1x1" ; output_info [ 9 ] .
name = "Subsystem.Current_Sensor1_I0" ; output_info [ 9 ] . unit = "A" ;
output_info [ 10 ] . identifier = "Subsystem.Voltage_Sensor1_V0" ;
output_info [ 10 ] . size . numElements = 1 ; output_info [ 10 ] . size .
encodedDimensions = "1x1" ; output_info [ 10 ] . name =
"Subsystem.Voltage_Sensor1_V0" ; output_info [ 10 ] . unit = "V" ;
output_info [ 11 ] . identifier = "Three_Phase_Inverter.Current_Sensor_I0" ;
output_info [ 11 ] . size . numElements = 1 ; output_info [ 11 ] . size .
encodedDimensions = "1x1" ; output_info [ 11 ] . name =
"Three_Phase_Inverter.Current_Sensor_I0" ; output_info [ 11 ] . unit = "A" ;
output_info [ 12 ] . identifier =
"Three_Phase_Inverter.Current_Sensor_Three_Phase_I_output0" ; output_info [
12 ] . size . numElements = 3 ; output_info [ 12 ] . size . encodedDimensions
= "1x3" ; output_info [ 12 ] . name =
"Three_Phase_Inverter.Current_Sensor_Three_Phase_I_output0" ; output_info [
12 ] . unit = "A" ; output_info [ 13 ] . identifier =
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase_V_output0" ;
output_info [ 13 ] . size . numElements = 3 ; output_info [ 13 ] . size .
encodedDimensions = "1x3" ; output_info [ 13 ] . name =
"Three_Phase_Inverter.Line_Voltage_Sensor_Three_Phase_V_output0" ;
output_info [ 13 ] . unit = "V" ; output_info [ 14 ] . identifier =
"Voltage_Sensor_V0" ; output_info [ 14 ] . size . numElements = 1 ;
output_info [ 14 ] . size . encodedDimensions = "1x1" ; output_info [ 14 ] .
name = "Voltage_Sensor_V0" ; output_info [ 14 ] . unit = "V" ; ds -> mIo [
SSC_OUTPUT_IO_TYPE ] = output_info ; ds -> mReleaseReference =
release_reference ; ds -> mGetReference = get_reference ; ds ->
mDiagnosticsDsFcn = diagnostics ; ds -> mExpandFcn = expand ; ds ->
mRtpMapFcn = rtpmap ; ds -> mMethods [ NE_DS_METHOD_M_P ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_m_p ; ds -> mMakeOutput [ NE_DS_METHOD_M_P ]
= ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_m ; ds -> mMakeOutput [ NE_DS_METHOD_M ] =
ds_output_m ; ds -> mMethods [ NE_DS_METHOD_VMM ] = ds_vmm ; ds ->
mMakeOutput [ NE_DS_METHOD_VMM ] = ds_output_vmm ; ds -> mMethods [
NE_DS_METHOD_DXM_P ] = Buck_BLDC_2023a_4_7fdece01_1_ds_dxm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds -> mMethods [
NE_DS_METHOD_DXM ] = ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM ] =
ds_output_dxm ; ds -> mMethods [ NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDM_P ] = ds_output_ddm_p ; ds -> mMethods [
NE_DS_METHOD_DDM ] = ds_ddm ; ds -> mMakeOutput [ NE_DS_METHOD_DDM ] =
ds_output_ddm ; ds -> mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [
NE_DS_METHOD_DUM ] = ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] =
ds_output_dum ; ds -> mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [
NE_DS_METHOD_DTM ] = ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] =
ds_output_dtm ; ds -> mMethods [ NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPM_P ] = ds_output_dpm_p ; ds -> mMethods [
NE_DS_METHOD_DPM ] = ds_dpm ; ds -> mMakeOutput [ NE_DS_METHOD_DPM ] =
ds_output_dpm ; ds -> mMethods [ NE_DS_METHOD_A_P ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_a_p ; ds -> mMakeOutput [ NE_DS_METHOD_A_P ]
= ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] =
ds_output_a ; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds ->
mMakeOutput [ NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [
NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b
; ds -> mMethods [ NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [
NE_DS_METHOD_C_P ] = ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c
; ds -> mMakeOutput [ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [
NE_DS_METHOD_F ] = Buck_BLDC_2023a_4_7fdece01_1_ds_f ; ds -> mMakeOutput [
NE_DS_METHOD_F ] = ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_vmf ; ds -> mMakeOutput [ NE_DS_METHOD_VMF ]
= ds_output_vmf ; ds -> mMethods [ NE_DS_METHOD_VPF ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_vpf ; ds -> mMakeOutput [ NE_DS_METHOD_VPF ]
= ds_output_vpf ; ds -> mMethods [ NE_DS_METHOD_VSF ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_vsf ; ds -> mMakeOutput [ NE_DS_METHOD_VSF ]
= ds_output_vsf ; ds -> mMethods [ NE_DS_METHOD_SLF ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ]
= ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_slf0 ; ds -> mMakeOutput [ NE_DS_METHOD_SLF0
] = ds_output_slf0 ; ds -> mMethods [ NE_DS_METHOD_DXF_P ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_dxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXF_P ] = ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ]
= Buck_BLDC_2023a_4_7fdece01_1_ds_dxf ; ds -> mMakeOutput [ NE_DS_METHOD_DXF
] = ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] = ds_duf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds -> mMethods [
NE_DS_METHOD_DUF ] = ds_duf ; ds -> mMakeOutput [ NE_DS_METHOD_DUF ] =
ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds -> mMethods [
NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF ] =
ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [
NE_DS_METHOD_DDF ] = ds_ddf ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] =
ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_DPDXF_P ] = ds_dpdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p ; ds -> mMethods [
NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF ] =
ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = Buck_BLDC_2023a_4_7fdece01_1_ds_tdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = Buck_BLDC_2023a_4_7fdece01_1_ds_dnf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_P ] = ds_output_dnf_p ; ds -> mMethods [
NE_DS_METHOD_DNF ] = Buck_BLDC_2023a_4_7fdece01_1_ds_dnf ; ds -> mMakeOutput
[ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds -> mMethods [ NE_DS_METHOD_DNF_V_X
] = Buck_BLDC_2023a_4_7fdece01_1_ds_dnf_v_x ; ds -> mMakeOutput [
NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] = Buck_BLDC_2023a_4_7fdece01_1_ds_dxcer_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods [
NE_DS_METHOD_DDCER ] = ds_ddcer ; ds -> mMakeOutput [ NE_DS_METHOD_DDCER ] =
ds_output_ddcer ; ds -> mMethods [ NE_DS_METHOD_DDCER_P ] = ds_ddcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDCER_P ] = ds_output_ddcer_p ; ds -> mMethods
[ NE_DS_METHOD_IC ] = Buck_BLDC_2023a_4_7fdece01_1_ds_ic ; ds -> mMakeOutput
[ NE_DS_METHOD_IC ] = ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] =
ds_icr ; ds -> mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds ->
mMethods [ NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [
NE_DS_METHOD_ICR_IM ] = ds_output_icr_im ; ds -> mMethods [
NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_ID ]
= ds_output_icr_id ; ds -> mMethods [ NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IL ] = ds_output_icr_il ; ds -> mMethods [
NE_DS_METHOD_DXICR ] = ds_dxicr ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR ] =
ds_output_dxicr ; ds -> mMethods [ NE_DS_METHOD_DXICR_P ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_dxicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods [
NE_DS_METHOD_DDICR ] = ds_ddicr ; ds -> mMakeOutput [ NE_DS_METHOD_DDICR ] =
ds_output_ddicr ; ds -> mMethods [ NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods
[ NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = Buck_BLDC_2023a_4_7fdece01_1_ds_icrm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_ICRM_P ] = ds_output_icrm_p ; ds -> mMethods [
NE_DS_METHOD_ICRM ] = ds_icrm ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM ] =
ds_output_icrm ; ds -> mMethods [ NE_DS_METHOD_DXICRM_P ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_dxicrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DXICRM ]
= ds_output_dxicrm ; ds -> mMethods [ NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM ] = ds_output_ddicrm ; ds -> mMethods [
NE_DS_METHOD_FREQS ] = ds_freqs ; ds -> mMakeOutput [ NE_DS_METHOD_FREQS ] =
ds_output_freqs ; ds -> mMethods [ NE_DS_METHOD_SOLVERHITS ] = ds_solverhits
; ds -> mMakeOutput [ NE_DS_METHOD_SOLVERHITS ] = ds_output_solverhits ; ds
-> mMethods [ NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [
NE_DS_METHOD_MDUY_P ] = ds_output_mduy_p ; ds -> mMethods [
NE_DS_METHOD_MDXY_P ] = Buck_BLDC_2023a_4_7fdece01_1_ds_mdxy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_tdxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [ NE_DS_METHOD_Y ]
= Buck_BLDC_2023a_4_7fdece01_1_ds_y ; ds -> mMakeOutput [ NE_DS_METHOD_Y ] =
ds_output_y ; ds -> mMethods [ NE_DS_METHOD_DXY_P ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_dxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXY_P ] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ]
= Buck_BLDC_2023a_4_7fdece01_1_ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY
] = ds_output_dxy ; ds -> mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [
NE_DS_METHOD_DUY ] = ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] =
ds_output_duy ; ds -> mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [
NE_DS_METHOD_DTY ] = ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] =
ds_output_dty ; ds -> mMethods [ NE_DS_METHOD_MODE ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_mode ; ds -> mMakeOutput [ NE_DS_METHOD_MODE
] = ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_zc ; ds -> mMakeOutput [ NE_DS_METHOD_ZC ] =
ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds ->
mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = ds_update2_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_I ] = ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = ds_lock_r ; ds -> mMakeOutput [ NE_DS_METHOD_LOCK_R ]
= ds_output_lock_r ; ds -> mMethods [ NE_DS_METHOD_LOCK_I ] = ds_lock_i ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = ds_lock2_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods [
NE_DS_METHOD_LOCK2_I ] = ds_lock2_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = Buck_BLDC_2023a_4_7fdece01_1_ds_log ; ds -> mMakeOutput
[ NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ]
= Buck_BLDC_2023a_4_7fdece01_1_ds_assert ; ds -> mMakeOutput [
NE_DS_METHOD_ASSERT ] = ds_output_assert ; ds -> mMethods [
NE_DS_METHOD_PASSERT ] = ds_passert ; ds -> mMakeOutput [
NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods [
NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = Buck_BLDC_2023a_4_7fdece01_1_ds_dxdelt_p
; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds ->
mMethods [ NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT ] = ds_output_dxdelt ; ds -> mMethods [
NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds -> mMethods [
NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [ NE_DS_METHOD_DUDELT ]
= ds_output_dudelt ; ds -> mMethods [ NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds ->
mMethods [ NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT ] = ds_output_dtdelt ; ds -> mMethods [
NE_DS_METHOD_OBS_EXP ] = Buck_BLDC_2023a_4_7fdece01_1_ds_obs_exp ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds -> mMethods [
NE_DS_METHOD_OBS_ACT ] = Buck_BLDC_2023a_4_7fdece01_1_ds_obs_act ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods [
NE_DS_METHOD_OBS_ALL ] = Buck_BLDC_2023a_4_7fdece01_1_ds_obs_all ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] = Buck_BLDC_2023a_4_7fdece01_1_ds_obs_il ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [
NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_qx_p ; ds -> mMakeOutput [ NE_DS_METHOD_QX_P
] = ds_output_qx_p ; ds -> mMethods [ NE_DS_METHOD_QU_P ] = ds_qu_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QU_P ] = ds_output_qu_p ; ds -> mMethods [
NE_DS_METHOD_QT_P ] = ds_qt_p ; ds -> mMakeOutput [ NE_DS_METHOD_QT_P ] =
ds_output_qt_p ; ds -> mMethods [ NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds ->
mMakeOutput [ NE_DS_METHOD_Q1_P ] = ds_output_q1_p ; ds -> mMethods [
NE_DS_METHOD_VAR_TOL ] = Buck_BLDC_2023a_4_7fdece01_1_ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = Buck_BLDC_2023a_4_7fdece01_1_ds_eq_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_EQ_TOL ] = ds_output_eq_tol ; ds -> mMethods [
NE_DS_METHOD_LV ] = Buck_BLDC_2023a_4_7fdece01_1_ds_lv ; ds -> mMakeOutput [
NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [ NE_DS_METHOD_SLV ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ]
= ds_output_slv ; ds -> mMethods [ NE_DS_METHOD_NLDV ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_nldv ; ds -> mMakeOutput [ NE_DS_METHOD_NLDV
] = ds_output_nldv ; ds -> mMethods [ NE_DS_METHOD_SCLV ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_sclv ; ds -> mMakeOutput [ NE_DS_METHOD_SCLV
] = ds_output_sclv ; ds -> mMethods [ NE_DS_METHOD_IMIN ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_imin ; ds -> mMakeOutput [ NE_DS_METHOD_IMIN
] = ds_output_imin ; ds -> mMethods [ NE_DS_METHOD_IMAX ] =
Buck_BLDC_2023a_4_7fdece01_1_ds_imax ; ds -> mMakeOutput [ NE_DS_METHOD_IMAX
] = ds_output_imax ; ds -> mMethods [ NE_DS_METHOD_DIMIN ] = ds_dimin ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMIN ] = ds_output_dimin ; ds -> mMethods [
NE_DS_METHOD_DIMAX ] = ds_dimax ; ds -> mMakeOutput [ NE_DS_METHOD_DIMAX ] =
ds_output_dimax ; ds -> mEquationData = s_equation_data ; ds -> mCERData =
s_cer_data ; ds -> mICRData = s_icr_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mCERRanges = s_cer_range ; ds -> mICRRanges =
s_icr_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ; _ds
-> mField0 = s_constant_table0 ; ds -> mNumLargeArray = 1 ; return (
NeDynamicSystem * ) _ds ; } static int32_T ds_passert ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; }
static int32_T ds_iassert ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_cer ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_dxcer ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_ddcer ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_ddcer_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDDCER_P .
mNumCol = 0ULL ; out -> mDDCER_P . mNumRow = 0ULL ; out -> mDDCER_P . mJc [ 0
] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_del_v (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_del_v0 ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_del_tmax ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_del_t ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dxdelt ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_dudelt ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_dudelt_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDUDELT_P .
mNumCol = 9ULL ; out -> mDUDELT_P . mNumRow = 0ULL ; out -> mDUDELT_P . mJc [
0 ] = 0 ; out -> mDUDELT_P . mJc [ 1 ] = 0 ; out -> mDUDELT_P . mJc [ 2 ] = 0
; out -> mDUDELT_P . mJc [ 3 ] = 0 ; out -> mDUDELT_P . mJc [ 4 ] = 0 ; out
-> mDUDELT_P . mJc [ 5 ] = 0 ; out -> mDUDELT_P . mJc [ 6 ] = 0 ; out ->
mDUDELT_P . mJc [ 7 ] = 0 ; out -> mDUDELT_P . mJc [ 8 ] = 0 ; out ->
mDUDELT_P . mJc [ 9 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_dtdelt ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dtdelt_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDTDELT_P . mNumCol = 1ULL ; out
-> mDTDELT_P . mNumRow = 0ULL ; out -> mDTDELT_P . mJc [ 0 ] = 0 ; out ->
mDTDELT_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_cache_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ;
( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_init_r ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_update_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_lock_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_cache_i ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_init_i ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_update_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_lock_i ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_update2_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_lock2_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ;
( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_update2_i ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_lock2_i ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_sfp ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_sfo ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_duf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_duf_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDUF_P .
mNumCol = 9ULL ; out -> mDUF_P . mNumRow = 64ULL ; out -> mDUF_P . mJc [ 0 ]
= 0 ; out -> mDUF_P . mJc [ 1 ] = 0 ; out -> mDUF_P . mJc [ 2 ] = 0 ; out ->
mDUF_P . mJc [ 3 ] = 0 ; out -> mDUF_P . mJc [ 4 ] = 0 ; out -> mDUF_P . mJc
[ 5 ] = 0 ; out -> mDUF_P . mJc [ 6 ] = 0 ; out -> mDUF_P . mJc [ 7 ] = 0 ;
out -> mDUF_P . mJc [ 8 ] = 0 ; out -> mDUF_P . mJc [ 9 ] = 0 ; ( void ) LC ;
( void ) out ; return 0 ; } static int32_T ds_dtf ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1
; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; }
static int32_T ds_dtf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; out -> mDTF_P . mNumCol = 1ULL ; out -> mDTF_P . mNumRow = 64ULL ; out
-> mDTF_P . mJc [ 0 ] = 0 ; out -> mDTF_P . mJc [ 1 ] = 0 ; ( void ) LC ; (
void ) out ; return 0 ; } static int32_T ds_ddf ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_ddf_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDDF_P .
mNumCol = 0ULL ; out -> mDDF_P . mNumRow = 64ULL ; out -> mDDF_P . mJc [ 0 ]
= 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_b ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mB . mX [ 0ULL ] = - 1.0 ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_b_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_1 [ 10 ] = { 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 } ; ( void ) t1 ; ( void ) LC ; out -> mB_P . mNumCol = 9ULL ; out ->
mB_P . mNumRow = 64ULL ; out -> mB_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mB_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mB_P . mJc [ 2 ] = _cg_const_1
[ 2 ] ; out -> mB_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mB_P . mJc [ 4 ]
= _cg_const_1 [ 4 ] ; out -> mB_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mB_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mB_P . mJc [ 7 ] = _cg_const_1
[ 7 ] ; out -> mB_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mB_P . mJc [ 9 ]
= _cg_const_1 [ 9 ] ; out -> mB_P . mIr [ 0 ] = 24 ; ( void ) LC ; ( void )
out ; return 0 ; } static int32_T ds_c ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_c_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mC_P . mNumCol
= 1ULL ; out -> mC_P . mNumRow = 64ULL ; out -> mC_P . mJc [ 0 ] = 0 ; out ->
mC_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_tduf_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { static int32_T _cg_const_2 [ 9 ] = { 36 , 39
, 24 , 47 , 50 , 53 , 56 , 59 , 44 } ; ( void ) t1 ; ( void ) LC ; out ->
mTDUF_P . mNumCol = 9ULL ; out -> mTDUF_P . mNumRow = 64ULL ; out -> mTDUF_P
. mJc [ 0 ] = 0 ; out -> mTDUF_P . mJc [ 1 ] = 1 ; out -> mTDUF_P . mJc [ 2 ]
= 2 ; out -> mTDUF_P . mJc [ 3 ] = 3 ; out -> mTDUF_P . mJc [ 4 ] = 4 ; out
-> mTDUF_P . mJc [ 5 ] = 5 ; out -> mTDUF_P . mJc [ 6 ] = 6 ; out -> mTDUF_P
. mJc [ 7 ] = 7 ; out -> mTDUF_P . mJc [ 8 ] = 8 ; out -> mTDUF_P . mJc [ 9 ]
= 9 ; out -> mTDUF_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mTDUF_P . mIr [
1 ] = _cg_const_2 [ 1 ] ; out -> mTDUF_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ;
out -> mTDUF_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out -> mTDUF_P . mIr [ 4 ] =
_cg_const_2 [ 4 ] ; out -> mTDUF_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out ->
mTDUF_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out -> mTDUF_P . mIr [ 7 ] =
_cg_const_2 [ 7 ] ; out -> mTDUF_P . mIr [ 8 ] = _cg_const_2 [ 8 ] ; ( void )
LC ; ( void ) out ; return 0 ; } static int32_T ds_dwf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_dwf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; out -> mDWF_P . mNumCol = 0ULL ; out -> mDWF_P . mNumRow = 64ULL ; out
-> mDWF_P . mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_dpdxf ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dpdxf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDPDXF_P . mNumCol = 1ULL ; out ->
mDPDXF_P . mNumRow = 193ULL ; out -> mDPDXF_P . mJc [ 0 ] = 0 ; out ->
mDPDXF_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_freqs ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_icr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mICR . mX [ 0ULL ] = 0.0 ; out ->
mICR . mX [ 1ULL ] = 0.0 ; out -> mICR . mX [ 2ULL ] = 0.0 ; out -> mICR . mX
[ 3ULL ] = 0.0 ; out -> mICR . mX [ 4ULL ] = 0.0 ; out -> mICR . mX [ 5ULL ]
= 0.0 ; out -> mICR . mX [ 6ULL ] = 0.0 ; out -> mICR . mX [ 7ULL ] = 0.0 ;
out -> mICR . mX [ 8ULL ] = 0.0 ; out -> mICR . mX [ 9ULL ] = 0.0 ; ( void )
LC ; ( void ) out ; return 0 ; } static int32_T ds_icr_im ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mICR_IM . mX [ 0 ] = 3 ; out ->
mICR_IM . mX [ 1 ] = 3 ; out -> mICR_IM . mX [ 2 ] = 3 ; out -> mICR_IM . mX
[ 3 ] = 3 ; out -> mICR_IM . mX [ 4 ] = 3 ; out -> mICR_IM . mX [ 5 ] = 3 ;
out -> mICR_IM . mX [ 6 ] = 3 ; out -> mICR_IM . mX [ 7 ] = 3 ; out ->
mICR_IM . mX [ 8 ] = 3 ; out -> mICR_IM . mX [ 9 ] = 3 ; ( void ) LC ; ( void
) out ; return 0 ; } static int32_T ds_icr_id ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; out -> mICR_ID . mX [ 0 ] = false ; out -> mICR_ID . mX [ 1 ] =
false ; out -> mICR_ID . mX [ 2 ] = false ; out -> mICR_ID . mX [ 3 ] = false
; out -> mICR_ID . mX [ 4 ] = false ; out -> mICR_ID . mX [ 5 ] = false ; out
-> mICR_ID . mX [ 6 ] = false ; out -> mICR_ID . mX [ 7 ] = false ; out ->
mICR_ID . mX [ 8 ] = false ; out -> mICR_ID . mX [ 9 ] = false ; ( void ) LC
; ( void ) out ; return 0 ; } static int32_T ds_icr_il ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mICR_IL . mX [ 0 ] = true ; out ->
mICR_IL . mX [ 1 ] = true ; out -> mICR_IL . mX [ 2 ] = true ; out -> mICR_IL
. mX [ 3 ] = true ; out -> mICR_IL . mX [ 4 ] = true ; out -> mICR_IL . mX [
5 ] = true ; out -> mICR_IL . mX [ 6 ] = true ; out -> mICR_IL . mX [ 7 ] =
true ; out -> mICR_IL . mX [ 8 ] = true ; out -> mICR_IL . mX [ 9 ] = true ;
( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dxicr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_ddicr ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_ddicr_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDDICR_P .
mNumCol = 0ULL ; out -> mDDICR_P . mNumRow = 10ULL ; out -> mDDICR_P . mJc [
0 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_tduicr_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mTDUICR_P .
mNumCol = 9ULL ; out -> mTDUICR_P . mNumRow = 10ULL ; out -> mTDUICR_P . mJc
[ 0 ] = 0 ; out -> mTDUICR_P . mJc [ 1 ] = 0 ; out -> mTDUICR_P . mJc [ 2 ] =
0 ; out -> mTDUICR_P . mJc [ 3 ] = 0 ; out -> mTDUICR_P . mJc [ 4 ] = 0 ; out
-> mTDUICR_P . mJc [ 5 ] = 0 ; out -> mTDUICR_P . mJc [ 6 ] = 0 ; out ->
mTDUICR_P . mJc [ 7 ] = 0 ; out -> mTDUICR_P . mJc [ 8 ] = 0 ; out ->
mTDUICR_P . mJc [ 9 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_icrm ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; (
void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dxicrm ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_ddicrm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_ddicrm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDDICRM_P .
mNumCol = 0ULL ; out -> mDDICRM_P . mNumRow = 0ULL ; out -> mDDICRM_P . mJc [
0 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T ds_dimin (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_dimax ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_dxm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_ddm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_ddm_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mDDM_P . mNumCol = 0ULL ; out ->
mDDM_P . mNumRow = 26ULL ; out -> mDDM_P . mJc [ 0 ] = 0 ; ( void ) LC ; (
void ) out ; return 0 ; } static int32_T ds_dum ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_dum_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDUM_P .
mNumCol = 9ULL ; out -> mDUM_P . mNumRow = 26ULL ; out -> mDUM_P . mJc [ 0 ]
= 0 ; out -> mDUM_P . mJc [ 1 ] = 0 ; out -> mDUM_P . mJc [ 2 ] = 0 ; out ->
mDUM_P . mJc [ 3 ] = 0 ; out -> mDUM_P . mJc [ 4 ] = 0 ; out -> mDUM_P . mJc
[ 5 ] = 0 ; out -> mDUM_P . mJc [ 6 ] = 0 ; out -> mDUM_P . mJc [ 7 ] = 0 ;
out -> mDUM_P . mJc [ 8 ] = 0 ; out -> mDUM_P . mJc [ 9 ] = 0 ; ( void ) LC ;
( void ) out ; return 0 ; } static int32_T ds_dtm ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1
; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; }
static int32_T ds_dtm_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; out -> mDTM_P . mNumCol = 1ULL ; out -> mDTM_P . mNumRow = 26ULL ; out
-> mDTM_P . mJc [ 0 ] = 0 ; out -> mDTM_P . mJc [ 1 ] = 0 ; ( void ) LC ; (
void ) out ; return 0 ; } static int32_T ds_dpm ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_dpm_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDPM_P .
mNumCol = 1ULL ; out -> mDPM_P . mNumRow = 26ULL ; out -> mDPM_P . mJc [ 0 ]
= 0 ; out -> mDPM_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ;
} static int32_T ds_vmm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; out -> mVMM . mX [ 0 ] = false ; out -> mVMM . mX [ 1 ] = false ; out ->
mVMM . mX [ 2 ] = false ; out -> mVMM . mX [ 3 ] = false ; out -> mVMM . mX [
4 ] = false ; out -> mVMM . mX [ 5 ] = false ; out -> mVMM . mX [ 6 ] = false
; out -> mVMM . mX [ 7 ] = false ; out -> mVMM . mX [ 8 ] = false ; out ->
mVMM . mX [ 9 ] = false ; out -> mVMM . mX [ 10 ] = false ; out -> mVMM . mX
[ 11 ] = false ; out -> mVMM . mX [ 12 ] = false ; out -> mVMM . mX [ 13 ] =
false ; out -> mVMM . mX [ 14 ] = false ; out -> mVMM . mX [ 15 ] = false ;
out -> mVMM . mX [ 16 ] = false ; out -> mVMM . mX [ 17 ] = false ; out ->
mVMM . mX [ 18 ] = false ; out -> mVMM . mX [ 19 ] = false ; out -> mVMM . mX
[ 20 ] = false ; out -> mVMM . mX [ 21 ] = false ; out -> mVMM . mX [ 22 ] =
false ; out -> mVMM . mX [ 23 ] = false ; out -> mVMM . mX [ 24 ] = false ;
out -> mVMM . mX [ 25 ] = false ; ( void ) LC ; ( void ) out ; return 0 ; }
static int32_T ds_dp_l ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_dp_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_dp_j ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_dp_r ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_qx ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_qu ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out
; return 0 ; } static int32_T ds_qt ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_q1 ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; ( void ) out ; ( void
) LC ; ( void ) out ; return 0 ; } static int32_T ds_qu_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) LC ; out -> mQU_P . mNumCol = 9ULL ; out ->
mQU_P . mNumRow = 64ULL ; out -> mQU_P . mJc [ 0 ] = 0 ; out -> mQU_P . mJc [
1 ] = 0 ; out -> mQU_P . mJc [ 2 ] = 0 ; out -> mQU_P . mJc [ 3 ] = 0 ; out
-> mQU_P . mJc [ 4 ] = 0 ; out -> mQU_P . mJc [ 5 ] = 0 ; out -> mQU_P . mJc
[ 6 ] = 0 ; out -> mQU_P . mJc [ 7 ] = 0 ; out -> mQU_P . mJc [ 8 ] = 0 ; out
-> mQU_P . mJc [ 9 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_qt_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mQT_P .
mNumCol = 1ULL ; out -> mQT_P . mNumRow = 64ULL ; out -> mQT_P . mJc [ 0 ] =
0 ; out -> mQT_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; }
static int32_T ds_q1_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; out -> mQ1_P . mNumCol = 1ULL ; out -> mQ1_P . mNumRow = 64ULL ; out ->
mQ1_P . mJc [ 0 ] = 0 ; out -> mQ1_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void )
out ; return 0 ; } static int32_T ds_solverhits ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
( void ) LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_duy ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1
, NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDUY . mX [
0ULL ] = - 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_duy_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { static int32_T _cg_const_1 [ 10 ] = { 0 , 0 , 0 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 } ; ( void ) t1 ; ( void ) LC ; out -> mDUY_P .
mNumCol = 9ULL ; out -> mDUY_P . mNumRow = 19ULL ; out -> mDUY_P . mJc [ 0 ]
= _cg_const_1 [ 0 ] ; out -> mDUY_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out ->
mDUY_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mDUY_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mDUY_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mDUY_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mDUY_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mDUY_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mDUY_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mDUY_P . mJc [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mDUY_P . mIr [ 0 ] = 5 ; ( void ) LC ; ( void )
out ; return 0 ; } static int32_T ds_mduy_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) LC ; out -> mMDUY_P . mNumCol = 9ULL ; out -> mMDUY_P . mNumRow =
19ULL ; out -> mMDUY_P . mJc [ 0 ] = 0 ; out -> mMDUY_P . mJc [ 1 ] = 0 ; out
-> mMDUY_P . mJc [ 2 ] = 0 ; out -> mMDUY_P . mJc [ 3 ] = 0 ; out -> mMDUY_P
. mJc [ 4 ] = 0 ; out -> mMDUY_P . mJc [ 5 ] = 0 ; out -> mMDUY_P . mJc [ 6 ]
= 0 ; out -> mMDUY_P . mJc [ 7 ] = 0 ; out -> mMDUY_P . mJc [ 8 ] = 0 ; out
-> mMDUY_P . mJc [ 9 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ; } static
int32_T ds_tduy_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { static int32_T _cg_const_1 [ 10 ] = { 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; ( void ) t1 ; ( void ) LC ; out -> mTDUY_P
. mNumCol = 9ULL ; out -> mTDUY_P . mNumRow = 19ULL ; out -> mTDUY_P . mJc [
0 ] = _cg_const_1 [ 0 ] ; out -> mTDUY_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ;
out -> mTDUY_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mTDUY_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mTDUY_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mTDUY_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mTDUY_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mTDUY_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mTDUY_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mTDUY_P . mJc [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mTDUY_P . mIr [ 0 ] = 5 ; ( void ) LC ; ( void )
out ; return 0 ; } static int32_T ds_dty ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
LC ; ( void ) out ; ( void ) LC ; ( void ) out ; return 0 ; } static int32_T
ds_dty_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) LC ; out -> mDTY_P .
mNumCol = 1ULL ; out -> mDTY_P . mNumRow = 19ULL ; out -> mDTY_P . mJc [ 0 ]
= 0 ; out -> mDTY_P . mJc [ 1 ] = 0 ; ( void ) LC ; ( void ) out ; return 0 ;
}
