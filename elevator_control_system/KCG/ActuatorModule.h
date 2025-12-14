/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
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
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

