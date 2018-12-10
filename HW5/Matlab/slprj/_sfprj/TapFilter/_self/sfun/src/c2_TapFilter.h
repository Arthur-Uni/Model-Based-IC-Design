#ifndef __c2_TapFilter_h__
#define __c2_TapFilter_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc2_TapFilterInstanceStruct
#define typedef_SFc2_TapFilterInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_TapFilter;
  void *c2_fEmlrtCtx;
  real_T *c2_u;
  real_T *c2_y;
  real_T *c2_v;
} SFc2_TapFilterInstanceStruct;

#endif                                 /*typedef_SFc2_TapFilterInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_TapFilter_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c2_TapFilter_get_check_sum(mxArray *plhs[]);
extern void c2_TapFilter_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif
