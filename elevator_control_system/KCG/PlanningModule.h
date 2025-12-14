/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _PlanningModule_H_
#define _PlanningModule_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CarMotorStop/ */ CarMotorStop;
  kcg_bool /* Doors/ */ Doors;
  kcg_bool /* AtFloor/ */ AtFloor;
  PDirection /* Move/ */ Move;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_PlanningModule /* PlanningModule: */ PlanningModule_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_PlanningModule;

/* ===========  node initialization and cycle functions  =========== */
/* PlanningModule/ */
extern void PlanningModule(
  /* Press0/ */
  kcg_bool Press0,
  /* Press1/ */
  kcg_bool Press1,
  /* Press2/ */
  kcg_bool Press2,
  /* Press3/ */
  kcg_bool Press3,
  /* Press7/ */
  kcg_bool Press7,
  /* Press8/ */
  kcg_bool Press8,
  /* Position/ */
  kcg_int16 Position,
  outC_PlanningModule *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PlanningModule_reset(outC_PlanningModule *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PlanningModule_init(outC_PlanningModule *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PlanningModule_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PlanningModule.h
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

