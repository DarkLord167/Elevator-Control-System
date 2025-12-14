/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */
#ifndef _ActuatorModule_H_
#define _ActuatorModule_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int8 /* Channel1/ */ Channel1;
  kcg_int8 /* Channel2/ */ Channel2;
  Direction /* setDirection/ */ setDirection;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  PDirection /* Move/ */ mem_Move;
  kcg_bool /* CarMotorStop/ */ mem_CarMotorStop;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Direction /* SM1:MoveUp:_L3/ */ _L3_MoveUp_SM1;
  kcg_int8 /* SM1:MoveUp:_L2/ */ _L2_MoveUp_SM1;
  kcg_int8 /* SM1:MoveUp:_L1/ */ _L1_MoveUp_SM1;
  Direction /* SM1:MoveDown:_L3/ */ _L3_MoveDown_SM1;
  kcg_int8 /* SM1:MoveDown:_L2/ */ _L2_MoveDown_SM1;
  kcg_int8 /* SM1:MoveDown:_L1/ */ _L1_MoveDown_SM1;
  Direction /* SM1:StopMotor:_L3/ */ _L3_StopMotor_SM1;
  kcg_int8 /* SM1:StopMotor:_L2/ */ _L2_StopMotor_SM1;
  kcg_int8 /* SM1:StopMotor:_L1/ */ _L1_StopMotor_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_ActuatorModule;

/* ===========  node initialization and cycle functions  =========== */
/* ActuatorModule/ */
extern void ActuatorModule(
  /* Move/ */
  PDirection Move,
  /* CarMotorStop/ */
  kcg_bool CarMotorStop,
  outC_ActuatorModule *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ActuatorModule_reset(outC_ActuatorModule *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ActuatorModule_init(outC_ActuatorModule *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ActuatorModule_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ActuatorModule.h
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

