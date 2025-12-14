/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _SafetyModule_H_
#define _SafetyModule_H_

#include "kcg_types.h"
#include "FloorsLocation_LabQ3.h"
#include "Counter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CarMotorStop/ */ CarMotorStop;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SafetyViolation/ */ SafetyViolation;
  kcg_int16 /* timer/ */ timer;
  kcg_int16 /* StopTimer/ */ StopTimer;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter /* SM1:Safety1PC:_L3=(Counter#17)/ */ Context_Counter_17;
  outC_Counter /* SM1:NormalMode:_L4=(Counter#6)/ */ Context_Counter_6;
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

