/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */
#ifndef _SafetyModule_H_
#define _SafetyModule_H_

#include "kcg_types.h"
#include "FloorsLocation.h"
#include "Counter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CarMotorStop/ */ CarMotorStop;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int8 /* Channel1/ */ mem_Channel1;
  kcg_int8 /* Channel2/ */ mem_Channel2;
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* SafetyViolation/ */ SafetyViolation;
  kcg_int16 /* timer/ */ timer;
  kcg_int16 /* StopTimer/ */ StopTimer;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter /* SM1:NormalMode:_L4=(Counter#6)/ */ Context_Counter_6;
  outC_Counter /* SM1:Safety1PC:_L3=(Counter#17)/ */ Context_Counter_17;
  outC_FloorsLocation /* SM1:Environment3PC:_L9=(FloorsLocation#1)/ */ Context_FloorsLocation_1;
  /* ------------------ clocks of observable data -------------------- */
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int16 /* SM1:NormalMode:_L4/ */ _L4_NormalMode_SM1;
  kcg_bool /* SM1:NormalMode:_L1/ */ _L1_NormalMode_SM1;
  kcg_bool /* SM1:Environment1:_L2/ */ _L2_Environment1_SM1;
  kcg_bool /* SM1:Safety2:_L1/ */ _L1_Safety2_SM1;
  kcg_bool /* SM1:Safety4:_L2/ */ _L2_Safety4_SM1;
  kcg_bool /* SM1:Safety3:_L2/ */ _L2_Safety3_SM1;
  kcg_int16 /* SM1:Safety1PC:_L3/ */ _L3_Safety1PC_SM1;
  kcg_bool /* SM1:Safety5:_L3/ */ _L3_Safety5_SM1;
  kcg_bool /* SM1:Environment2:_L2/ */ _L2_Environment2_SM1;
  kcg_bool /* SM1:Environment3:_L3/ */ _L3_Environment3_SM1;
  kcg_bool /* SM1:Safety1:_L2/ */ _L2_Safety1_SM1;
  kcg_bool /* SM1:Environment3PC:_L9/ */ _L9_Environment3PC_SM1;
  kcg_bool /* SM1:Environment3PC:_L8/ */ _L8_Environment3PC_SM1;
  kcg_int16 /* SM1:Environment3PC:_L6/ */ _L6_Environment3PC_SM1;
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _5_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _5_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_SafetyModule;

/* ===========  node initialization and cycle functions  =========== */
/* SafetyModule/ */
extern void SafetyModule(
  /* Channel1/ */
  kcg_int8 Channel1,
  /* Channel2/ */
  kcg_int8 Channel2,
  /* Position/ */
  kcg_int16 Position,
  /* Press3/ */
  kcg_bool Press3,
  /* AtFloor/ */
  kcg_bool AtFloor,
  /* Doors/ */
  kcg_bool Doors,
  /* Speed/ */
  kcg_int16 Speed,
  outC_SafetyModule *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SafetyModule_reset(outC_SafetyModule *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SafetyModule_init(outC_SafetyModule *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SafetyModule_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SafetyModule.h
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

