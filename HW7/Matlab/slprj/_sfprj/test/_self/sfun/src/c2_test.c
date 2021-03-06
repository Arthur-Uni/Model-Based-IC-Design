/* Include files */

#include "test_sfun.h"
#include "c2_test.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "test_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c2_debug_family_names[15] = { "z", "x3", "y3", "t1", "z3_n",
  "t2", "t3", "c3", "c4", "nargin", "nargout", "u", "x", "y", "d" };

static const mxArray *c2_eml_mx;
static const mxArray *c2_b_eml_mx;
static const mxArray *c2_c_eml_mx;
static const mxArray *c2_d_eml_mx;

/* Function Declarations */
static void initialize_c2_test(SFc2_testInstanceStruct *chartInstance);
static void initialize_params_c2_test(SFc2_testInstanceStruct *chartInstance);
static void enable_c2_test(SFc2_testInstanceStruct *chartInstance);
static void disable_c2_test(SFc2_testInstanceStruct *chartInstance);
static void c2_update_debugger_state_c2_test(SFc2_testInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_test(SFc2_testInstanceStruct
  *chartInstance);
static void set_sim_state_c2_test(SFc2_testInstanceStruct *chartInstance, const
  mxArray *c2_st);
static void finalize_c2_test(SFc2_testInstanceStruct *chartInstance);
static void sf_gateway_c2_test(SFc2_testInstanceStruct *chartInstance);
static void mdl_start_c2_test(SFc2_testInstanceStruct *chartInstance);
static void initSimStructsc2_test(SFc2_testInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber);
static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData);
static uint8_T c2_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance, const
  mxArray *c2_b_d, const char_T *c2_identifier);
static uint8_T c2_b_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static real_T c2_c_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static int8_T c2_d_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_e_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static int32_T c2_e_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static uint8_T c2_f_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_test, const char_T *c2_identifier);
static uint8_T c2_g_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId);
static void init_dsm_address_info(SFc2_testInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_testInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_test(SFc2_testInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc2_test(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_test = 0U;
  sf_mex_assign(&c2_d_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 10U, 15, "WordLength", 6, 5.0, 15, "FractionLength", 6,
    0.0, 15, "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6,
    0.0), true);
  sf_mex_assign(&c2_c_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 10U, 15, "WordLength", 6, 4.0, 15, "FractionLength", 6,
    0.0, 15, "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6,
    0.0), true);
  sf_mex_assign(&c2_b_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "numerictype", 1U, 14U, 15, "SignednessBool", 3, false, 15, "Signedness", 15,
    "Unsigned", 15, "WordLength", 6, 1.0, 15, "FractionLength", 6, 0.0, 15,
    "BinaryPoint", 6, 0.0, 15, "Slope", 6, 1.0, 15, "FixedExponent", 6, 0.0),
                true);
  sf_mex_assign(&c2_eml_mx, sf_mex_call_debug(sfGlobalDebugInstanceStruct,
    "fimath", 1U, 42U, 15, "RoundMode", 15, "nearest", 15, "RoundingMethod", 15,
    "Nearest", 15, "OverflowMode", 15, "saturate", 15, "OverflowAction", 15,
    "Saturate", 15, "ProductMode", 15, "FullPrecision", 15, "ProductWordLength",
    6, 32.0, 15, "MaxProductWordLength", 6, 65535.0, 15, "ProductFractionLength",
    6, 30.0, 15, "ProductFixedExponent", 6, -30.0, 15, "ProductSlope", 6,
    9.3132257461547852E-10, 15, "ProductSlopeAdjustmentFactor", 6, 1.0, 15,
    "ProductBias", 6, 0.0, 15, "SumMode", 15, "FullPrecision", 15,
    "SumWordLength", 6, 32.0, 15, "MaxSumWordLength", 6, 65535.0, 15,
    "SumFractionLength", 6, 30.0, 15, "SumFixedExponent", 6, -30.0, 15,
    "SumSlope", 6, 9.3132257461547852E-10, 15, "SumSlopeAdjustmentFactor", 6,
    1.0, 15, "SumBias", 6, 0.0, 15, "CastBeforeSum", 3, true), true);
}

static void initialize_params_c2_test(SFc2_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_test(SFc2_testInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_test(SFc2_testInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_debugger_state_c2_test(SFc2_testInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_test(SFc2_testInstanceStruct
  *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_b_y = NULL;
  uint8_T c2_hoistedGlobal;
  const mxArray *c2_c_y = NULL;
  uint8_T c2_b_u;
  const mxArray *c2_d_y = NULL;
  uint8_T c2_b_hoistedGlobal;
  const mxArray *c2_e_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_createcellmatrix(2, 1), false);
  c2_hoistedGlobal = *chartInstance->c2_d;
  c2_c_y = NULL;
  c2_b_u = c2_hoistedGlobal;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_c_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14, sf_mex_dup
    (c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_b_eml_mx), 15,
    "simulinkarray", 14, c2_d_y, 15, "fimathislocal", 3, false), false);
  sf_mex_setcell(c2_b_y, 0, c2_c_y);
  c2_b_hoistedGlobal = chartInstance->c2_is_active_c2_test;
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", &c2_b_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_b_y, 1, c2_e_y);
  sf_mex_assign(&c2_st, c2_b_y, false);
  return c2_st;
}

static void set_sim_state_c2_test(SFc2_testInstanceStruct *chartInstance, const
  mxArray *c2_st)
{
  const mxArray *c2_b_u;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_b_u = sf_mex_dup(c2_st);
  *chartInstance->c2_d = c2_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("d", c2_b_u, 0)), "d");
  chartInstance->c2_is_active_c2_test = c2_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_c2_test", c2_b_u, 1)),
    "is_active_c2_test");
  sf_mex_destroy(&c2_b_u);
  c2_update_debugger_state_c2_test(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_test(SFc2_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
  sf_mex_destroy(&c2_eml_mx);
  sf_mex_destroy(&c2_b_eml_mx);
  sf_mex_destroy(&c2_c_eml_mx);
  sf_mex_destroy(&c2_d_eml_mx);
}

static void sf_gateway_c2_test(SFc2_testInstanceStruct *chartInstance)
{
  int8_T c2_hoistedGlobal;
  int8_T c2_b_hoistedGlobal;
  int8_T c2_c_hoistedGlobal;
  int8_T c2_b_u;
  int8_T c2_b_x;
  int8_T c2_b_y;
  uint32_T c2_debug_family_var_map[15];
  int8_T c2_z;
  uint8_T c2_x3;
  uint8_T c2_y3;
  uint8_T c2_t1;
  uint8_T c2_z3_n;
  uint8_T c2_t2;
  uint8_T c2_t3;
  uint8_T c2_c3;
  uint8_T c2_c4;
  real_T c2_nargin = 3.0;
  real_T c2_nargout = 1.0;
  uint8_T c2_b_d;
  int8_T c2_a0;
  int8_T c2_b0;
  int8_T c2_i0;
  int8_T c2_i1;
  int8_T c2_i2;
  int8_T c2_i3;
  int8_T c2_i4;
  int8_T c2_a;
  int8_T c2_i5;
  int8_T c2_i6;
  int8_T c2_i7;
  int8_T c2_i8;
  uint8_T c2_slice_temp;
  int8_T c2_b_a;
  int8_T c2_i9;
  int8_T c2_i10;
  int8_T c2_i11;
  int8_T c2_i12;
  uint8_T c2_b_slice_temp;
  uint8_T c2_c_a;
  uint8_T c2_b;
  int8_T c2_d_a;
  int8_T c2_i13;
  int8_T c2_i14;
  int8_T c2_i15;
  int8_T c2_i16;
  uint8_T c2_c_slice_temp;
  uint8_T c2_c;
  int8_T c2_e_a;
  int8_T c2_i17;
  int8_T c2_i18;
  int8_T c2_i19;
  int8_T c2_i20;
  uint8_T c2_d_slice_temp;
  uint8_T c2_b_c;
  uint8_T c2_b_a0;
  uint8_T c2_f_a;
  uint8_T c2_c_a0;
  uint8_T c2_a1;
  uint8_T c2_b_a1;
  boolean_T c2_c_c;
  uint8_T c2_g_a;
  uint8_T c2_b_b;
  uint8_T c2_h_a;
  uint8_T c2_c_b;
  uint8_T c2_i_a;
  uint8_T c2_d_b;
  int8_T c2_j_a;
  int8_T c2_i21;
  int8_T c2_i22;
  int8_T c2_i23;
  int8_T c2_i24;
  uint8_T c2_e_slice_temp;
  uint8_T c2_k_a;
  uint8_T c2_e_b;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_y, 2U, 1U, 0U,
                        chartInstance->c2_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_x, 1U, 1U, 0U,
                        chartInstance->c2_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_u, 0U, 1U, 0U,
                        chartInstance->c2_sfEvent, false);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  c2_hoistedGlobal = *chartInstance->c2_u;
  c2_b_hoistedGlobal = *chartInstance->c2_x;
  c2_c_hoistedGlobal = *chartInstance->c2_y;
  c2_b_u = c2_hoistedGlobal;
  c2_b_x = c2_b_hoistedGlobal;
  c2_b_y = c2_c_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 15U, 15U, c2_debug_family_names,
    c2_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_z, 0U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_x3, 1U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_y3, 2U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_t1, 3U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_z3_n, 4U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_t2, 5U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_t3, 6U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_c3, 7U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_c4, 8U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargin, 9U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargout, 10U, c2_c_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c2_b_u, 11U, c2_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c2_b_x, 12U, c2_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c2_b_y, 13U, c2_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_b_d, 14U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 3);
  c2_a0 = c2_b_x;
  c2_b0 = c2_b_y;
  c2_i0 = c2_a0;
  c2_i1 = c2_b0;
  if ((int8_T)(c2_i0 & 16) != 0) {
    c2_i2 = (int8_T)(c2_i0 | -16);
  } else {
    c2_i2 = (int8_T)(c2_i0 & 15);
  }

  if ((int8_T)(c2_i1 & 16) != 0) {
    c2_i3 = (int8_T)(c2_i1 | -16);
  } else {
    c2_i3 = (int8_T)(c2_i1 & 15);
  }

  c2_i4 = (int8_T)(c2_i2 + c2_i3);
  if ((int8_T)(c2_i4 & 16) != 0) {
    c2_z = (int8_T)(c2_i4 | -16);
  } else {
    c2_z = (int8_T)(c2_i4 & 15);
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 4);
  c2_a = c2_b_x;
  c2_i5 = (int8_T)((uint32_T)(uint8_T)((uint8_T)c2_a & 15U) >> 2);
  if ((int8_T)(c2_i5 & 8) != 0) {
    c2_i6 = (int8_T)(c2_i5 | -8);
  } else {
    c2_i6 = (int8_T)(c2_i5 & 7);
  }

  c2_i7 = (int8_T)(c2_i6 & 1);
  if ((int8_T)(c2_i7 & 8) != 0) {
    c2_i8 = (int8_T)(c2_i7 | -8);
  } else {
    c2_i8 = (int8_T)(c2_i7 & 7);
  }

  c2_slice_temp = (uint8_T)((uint8_T)c2_i8 & 1U);
  c2_x3 = c2_slice_temp;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 5);
  c2_b_a = c2_b_y;
  c2_i9 = (int8_T)((uint32_T)(uint8_T)((uint8_T)c2_b_a & 15U) >> 2);
  if ((int8_T)(c2_i9 & 8) != 0) {
    c2_i10 = (int8_T)(c2_i9 | -8);
  } else {
    c2_i10 = (int8_T)(c2_i9 & 7);
  }

  c2_i11 = (int8_T)(c2_i10 & 1);
  if ((int8_T)(c2_i11 & 8) != 0) {
    c2_i12 = (int8_T)(c2_i11 | -8);
  } else {
    c2_i12 = (int8_T)(c2_i11 & 7);
  }

  c2_b_slice_temp = (uint8_T)((uint8_T)c2_i12 & 1U);
  c2_y3 = c2_b_slice_temp;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 6);
  c2_c_a = c2_x3;
  c2_b = c2_y3;
  c2_t1 = (uint8_T)((uint8_T)(c2_c_a ^ c2_b) & 1U);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 8);
  c2_d_a = c2_z;
  c2_i13 = (int8_T)((uint32_T)(uint8_T)((uint8_T)c2_d_a & 31U) >> 2);
  if ((int8_T)(c2_i13 & 16) != 0) {
    c2_i14 = (int8_T)(c2_i13 | -16);
  } else {
    c2_i14 = (int8_T)(c2_i13 & 15);
  }

  c2_i15 = (int8_T)(c2_i14 & 1);
  if ((int8_T)(c2_i15 & 16) != 0) {
    c2_i16 = (int8_T)(c2_i15 | -16);
  } else {
    c2_i16 = (int8_T)(c2_i15 & 15);
  }

  c2_c_slice_temp = (uint8_T)((uint8_T)c2_i16 & 1U);
  c2_c = c2_c_slice_temp;
  c2_e_a = c2_z;
  c2_i17 = (int8_T)((uint32_T)(uint8_T)((uint8_T)c2_e_a & 31U) >> 2);
  if ((int8_T)(c2_i17 & 16) != 0) {
    c2_i18 = (int8_T)(c2_i17 | -16);
  } else {
    c2_i18 = (int8_T)(c2_i17 & 15);
  }

  c2_i19 = (int8_T)(c2_i18 & 1);
  if ((int8_T)(c2_i19 & 16) != 0) {
    c2_i20 = (int8_T)(c2_i19 | -16);
  } else {
    c2_i20 = (int8_T)(c2_i19 & 15);
  }

  c2_d_slice_temp = (uint8_T)((uint8_T)c2_i20 & 1U);
  c2_b_c = c2_d_slice_temp;
  c2_b_a0 = c2_b_c;
  c2_f_a = c2_b_a0;
  c2_c_a0 = c2_f_a;
  c2_a1 = c2_c_a0;
  c2_b_a1 = c2_a1;
  c2_c_c = (c2_b_a1 == 1);
  if (CV_EML_IF(0, 1, 0, CV_RELATIONAL_EVAL(4U, 0U, 0, (real_T)c2_c, 1.0, -1, 0U,
        (int32_T)c2_c_c))) {
    _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 9);
    c2_z3_n = 0U;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 11);
    c2_z3_n = 1U;
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 14);
  c2_g_a = c2_t1;
  c2_b_b = c2_z3_n;
  c2_t2 = (uint8_T)((uint8_T)(c2_g_a & c2_b_b) & 1U);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 16);
  c2_h_a = c2_x3;
  c2_c_b = c2_y3;
  c2_t3 = (uint8_T)((uint8_T)(c2_h_a & c2_c_b) & 1U);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 18);
  c2_i_a = c2_t2;
  c2_d_b = c2_t3;
  c2_c3 = (uint8_T)((uint8_T)(c2_i_a | c2_d_b) & 1U);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 21);
  c2_j_a = c2_b_u;
  c2_i21 = (int8_T)((uint32_T)(uint8_T)((uint8_T)c2_j_a & 15U) >> 3);
  if ((int8_T)(c2_i21 & 8) != 0) {
    c2_i22 = (int8_T)(c2_i21 | -8);
  } else {
    c2_i22 = (int8_T)(c2_i21 & 7);
  }

  c2_i23 = (int8_T)(c2_i22 & 1);
  if ((int8_T)(c2_i23 & 8) != 0) {
    c2_i24 = (int8_T)(c2_i23 | -8);
  } else {
    c2_i24 = (int8_T)(c2_i23 & 7);
  }

  c2_e_slice_temp = (uint8_T)((uint8_T)c2_i24 & 1U);
  c2_c4 = c2_e_slice_temp;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 24);
  c2_k_a = c2_c4;
  c2_e_b = c2_c3;
  c2_b_d = (uint8_T)((uint8_T)(c2_k_a ^ c2_e_b) & 1U);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, -24);
  _SFD_SYMBOL_SCOPE_POP();
  *chartInstance->c2_d = c2_b_d;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_testMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c2_d, 3U, 1U, 0U,
                        chartInstance->c2_sfEvent, false);
}

static void mdl_start_c2_test(SFc2_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc2_test(SFc2_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber)
{
  (void)c2_machineNumber;
  (void)c2_chartNumber;
  (void)c2_instanceNumber;
}

static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  uint8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  uint8_T c2_c_u;
  const mxArray *c2_c_y = NULL;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c2_b_u = *(uint8_T *)c2_inData;
    c2_b_y = NULL;
    c2_c_u = c2_b_u;
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_c_u, 3, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c2_b_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14,
      sf_mex_dup(c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_b_eml_mx), 15,
      "simulinkarray", 14, c2_c_y, 15, "fimathislocal", 3, false), false);
    sf_mex_assign(&c2_mxArrayOutData, c2_b_y, false);
  } else {
    sf_mex_assign(&c2_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c2_mxArrayOutData;
}

static uint8_T c2_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance, const
  mxArray *c2_b_d, const char_T *c2_identifier)
{
  uint8_T c2_b_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_d), &c2_thisId);
  sf_mex_destroy(&c2_b_d);
  return c2_b_y;
}

static uint8_T c2_b_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_y;
  const mxArray *c2_mxFi = NULL;
  const mxArray *c2_mxInt = NULL;
  uint8_T c2_u0;
  (void)chartInstance;
  sf_mex_check_fi(c2_parentId, c2_b_u, false, 0U, NULL, c2_eml_mx, c2_b_eml_mx);
  sf_mex_assign(&c2_mxFi, sf_mex_dup(c2_b_u), false);
  sf_mex_assign(&c2_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c2_mxFi)), false);
  sf_mex_import(c2_parentId, sf_mex_dup(c2_mxInt), &c2_u0, 1, 3, 0U, 0, 0U, 0);
  sf_mex_destroy(&c2_mxFi);
  sf_mex_destroy(&c2_mxInt);
  c2_b_y = c2_u0;
  sf_mex_destroy(&c2_b_u);
  return c2_b_y;
}

static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_d;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_b_y;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c2_b_d = sf_mex_dup(c2_mxArrayInData);
    c2_identifier = c2_varName;
    c2_thisId.fIdentifier = c2_identifier;
    c2_thisId.fParent = NULL;
    c2_thisId.bParentIsCell = false;
    c2_b_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_d), &c2_thisId);
    sf_mex_destroy(&c2_b_d);
    *(uint8_T *)c2_outData = c2_b_y;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  int8_T c2_c_u;
  const mxArray *c2_c_y = NULL;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c2_b_u = *(int8_T *)c2_inData;
    c2_b_y = NULL;
    c2_c_u = c2_b_u;
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c2_b_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14,
      sf_mex_dup(c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_c_eml_mx), 15,
      "simulinkarray", 14, c2_c_y, 15, "fimathislocal", 3, false), false);
    sf_mex_assign(&c2_mxArrayOutData, c2_b_y, false);
  } else {
    sf_mex_assign(&c2_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c2_mxArrayOutData;
}

static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  real_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_b_u = *(real_T *)c2_inData;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_b_y, false);
  return c2_mxArrayOutData;
}

static real_T c2_c_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_b_y;
  real_T c2_d0;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_d0, 1, 0, 0U, 0, 0U, 0);
  c2_b_y = c2_d0;
  sf_mex_destroy(&c2_b_u);
  return c2_b_y;
}

static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_nargout;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_b_y;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  c2_nargout = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nargout),
    &c2_thisId);
  sf_mex_destroy(&c2_nargout);
  *(real_T *)c2_outData = c2_b_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int8_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  int8_T c2_c_u;
  const mxArray *c2_c_y = NULL;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  if (sf_debug_check_fi_license()) {
    c2_b_u = *(int8_T *)c2_inData;
    c2_b_y = NULL;
    c2_c_u = c2_b_u;
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_c_u, 2, 0U, 0U, 0U, 0), false);
    sf_mex_assign(&c2_b_y, sf_mex_call("fi", 1U, 8U, 15, "fimath", 14,
      sf_mex_dup(c2_eml_mx), 15, "numerictype", 14, sf_mex_dup(c2_d_eml_mx), 15,
      "simulinkarray", 14, c2_c_y, 15, "fimathislocal", 3, false), false);
    sf_mex_assign(&c2_mxArrayOutData, c2_b_y, false);
  } else {
    sf_mex_assign(&c2_mxArrayOutData, sf_mex_create("mxArrayOutData",
      "Cannot display value.", 15, 0U, 0U, 0U, 2, 1, strlen(
      "Cannot display value.")), false);
  }

  return c2_mxArrayOutData;
}

static int8_T c2_d_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  int8_T c2_b_y;
  const mxArray *c2_mxFi = NULL;
  const mxArray *c2_mxInt = NULL;
  int8_T c2_i25;
  (void)chartInstance;
  sf_mex_check_fi(c2_parentId, c2_b_u, false, 0U, NULL, c2_eml_mx, c2_d_eml_mx);
  sf_mex_assign(&c2_mxFi, sf_mex_dup(c2_b_u), false);
  sf_mex_assign(&c2_mxInt, sf_mex_call("simulinkarray", 1U, 1U, 14, sf_mex_dup
    (c2_mxFi)), false);
  sf_mex_import(c2_parentId, sf_mex_dup(c2_mxInt), &c2_i25, 1, 2, 0U, 0, 0U, 0);
  sf_mex_destroy(&c2_mxFi);
  sf_mex_destroy(&c2_mxInt);
  c2_b_y = c2_i25;
  sf_mex_destroy(&c2_b_u);
  return c2_b_y;
}

static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_z;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  int8_T c2_b_y;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  if (sf_debug_check_fi_license()) {
    c2_z = sf_mex_dup(c2_mxArrayInData);
    c2_identifier = c2_varName;
    c2_thisId.fIdentifier = c2_identifier;
    c2_thisId.fParent = NULL;
    c2_thisId.bParentIsCell = false;
    c2_b_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_z), &c2_thisId);
    sf_mex_destroy(&c2_z);
    *(int8_T *)c2_outData = c2_b_y;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

const mxArray *sf_c2_test_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static const mxArray *c2_e_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_b_u = *(int32_T *)c2_inData;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_b_y, false);
  return c2_mxArrayOutData;
}

static int32_T c2_e_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  int32_T c2_b_y;
  int32_T c2_i26;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_i26, 1, 6, 0U, 0, 0U, 0);
  c2_b_y = c2_i26;
  sf_mex_destroy(&c2_b_u);
  return c2_b_y;
}

static void c2_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_sfEvent;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  int32_T c2_b_y;
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)chartInstanceVoid;
  c2_b_sfEvent = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_sfEvent),
    &c2_thisId);
  sf_mex_destroy(&c2_b_sfEvent);
  *(int32_T *)c2_outData = c2_b_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static uint8_T c2_f_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_test, const char_T *c2_identifier)
{
  uint8_T c2_b_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_test), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_test);
  return c2_b_y;
}

static uint8_T c2_g_emlrt_marshallIn(SFc2_testInstanceStruct *chartInstance,
  const mxArray *c2_b_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_y;
  uint8_T c2_u1;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_b_u), &c2_u1, 1, 3, 0U, 0, 0U, 0);
  c2_b_y = c2_u1;
  sf_mex_destroy(&c2_b_u);
  return c2_b_y;
}

static void init_dsm_address_info(SFc2_testInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_testInstanceStruct *chartInstance)
{
  chartInstance->c2_u = (int8_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c2_d = (uint8_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_x = (int8_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    1);
  chartInstance->c2_y = (int8_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    2);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c2_test_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(470545096U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(344687700U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3775205085U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1036371026U);
}

mxArray* sf_c2_test_get_post_codegen_info(void);
mxArray *sf_c2_test_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("zdl4cLDGDR9ExlBetoqP5B");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(11));

      {
        const char *fixptFields[] = { "isSigned", "wordLength", "bias", "slope",
          "exponent", "isScaledDouble" };

        mxArray *mxFixpt = mxCreateStructMatrix(1,1,6,fixptFields);
        mxSetField(mxFixpt,0,"isSigned",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"wordLength",mxCreateDoubleScalar(4));
        mxSetField(mxFixpt,0,"bias",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"slope",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"exponent",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"isScaledDouble",mxCreateDoubleScalar(0));
        mxSetField(mxType,0,"fixpt",mxFixpt);
      }

      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(11));

      {
        const char *fixptFields[] = { "isSigned", "wordLength", "bias", "slope",
          "exponent", "isScaledDouble" };

        mxArray *mxFixpt = mxCreateStructMatrix(1,1,6,fixptFields);
        mxSetField(mxFixpt,0,"isSigned",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"wordLength",mxCreateDoubleScalar(4));
        mxSetField(mxFixpt,0,"bias",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"slope",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"exponent",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"isScaledDouble",mxCreateDoubleScalar(0));
        mxSetField(mxType,0,"fixpt",mxFixpt);
      }

      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(11));

      {
        const char *fixptFields[] = { "isSigned", "wordLength", "bias", "slope",
          "exponent", "isScaledDouble" };

        mxArray *mxFixpt = mxCreateStructMatrix(1,1,6,fixptFields);
        mxSetField(mxFixpt,0,"isSigned",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"wordLength",mxCreateDoubleScalar(4));
        mxSetField(mxFixpt,0,"bias",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"slope",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"exponent",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"isScaledDouble",mxCreateDoubleScalar(0));
        mxSetField(mxType,0,"fixpt",mxFixpt);
      }

      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(11));

      {
        const char *fixptFields[] = { "isSigned", "wordLength", "bias", "slope",
          "exponent", "isScaledDouble" };

        mxArray *mxFixpt = mxCreateStructMatrix(1,1,6,fixptFields);
        mxSetField(mxFixpt,0,"isSigned",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"wordLength",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"bias",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"slope",mxCreateDoubleScalar(1));
        mxSetField(mxFixpt,0,"exponent",mxCreateDoubleScalar(0));
        mxSetField(mxFixpt,0,"isScaledDouble",mxCreateDoubleScalar(0));
        mxSetField(mxType,0,"fixpt",mxFixpt);
      }

      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(1));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c2_test_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c2_test_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_test_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("pre");
  mxArray *fallbackReason = mxCreateString("hasBreakpoints");
  mxArray *hiddenFallbackType = mxCreateString("none");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_test_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c2_test_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c2_test(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"d\",},{M[8],M[0],T\"is_active_c2_test\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_test_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_testInstanceStruct *chartInstance = (SFc2_testInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _testMachineNumber_,
           2,
           1,
           1,
           0,
           4,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_testMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_testMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _testMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"u");
          _SFD_SET_DATA_PROPS(1,1,1,0,"x");
          _SFD_SET_DATA_PROPS(2,1,1,0,"y");
          _SFD_SET_DATA_PROPS(3,2,0,1,"d");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,316);
        _SFD_CV_INIT_EML_IF(0,1,0,93,113,138,170);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,0,96,112,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_INT8,0,NULL,1,1,4,0,1,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_INT8,0,NULL,1,1,4,0,1,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_INT8,0,NULL,1,1,4,0,1,0,0,
          (MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_UINT8,0,NULL,1,0,1,0,1,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)c2_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _testMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_testInstanceStruct *chartInstance = (SFc2_testInstanceStruct *)
      sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c2_u);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c2_d);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c2_x);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c2_y);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sqMPeMDADNHa3vux641hZRD";
}

static void sf_opaque_initialize_c2_test(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_testInstanceStruct*) chartInstanceVar)->S,0);
  initialize_params_c2_test((SFc2_testInstanceStruct*) chartInstanceVar);
  initialize_c2_test((SFc2_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_test(void *chartInstanceVar)
{
  enable_c2_test((SFc2_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_test(void *chartInstanceVar)
{
  disable_c2_test((SFc2_testInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_test(void *chartInstanceVar)
{
  sf_gateway_c2_test((SFc2_testInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_test(SimStruct* S)
{
  return get_sim_state_c2_test((SFc2_testInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_test(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_test((SFc2_testInstanceStruct*)sf_get_chart_instance_ptr(S),
                        st);
}

static void sf_opaque_terminate_c2_test(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_testInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_test_optimization_info();
    }

    finalize_c2_test((SFc2_testInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_test((SFc2_testInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_test(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_test((SFc2_testInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c2_test(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_test_optimization_info(sim_mode_is_rtw_gen(S),
      sim_mode_is_modelref_sim(S), sim_mode_is_external(S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,2,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 2);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,2);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,2,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,2,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 3; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,2);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3889463184U));
  ssSetChecksum1(S,(437300473U));
  ssSetChecksum2(S,(2391309133U));
  ssSetChecksum3(S,(895639042U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c2_test(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_test(SimStruct *S)
{
  SFc2_testInstanceStruct *chartInstance;
  chartInstance = (SFc2_testInstanceStruct *)utMalloc(sizeof
    (SFc2_testInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_testInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_test;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_test;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_test;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_test;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_test;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_test;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_test;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_test;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_test;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_test;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_test;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c2_test(chartInstance);
}

void c2_test_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_test(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_test(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_test(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_test_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
