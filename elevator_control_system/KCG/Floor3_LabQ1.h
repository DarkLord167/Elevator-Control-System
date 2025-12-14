/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */
#ifndef _Floor3_LabQ1_H_
#define _Floor3_LabQ1_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Press2/ */ Press2;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int8 /* Floor3:Timer:_L4/ */ _L4_Timer_Floor3;
  SSM_ST_Floor3 /* Floor3: */ Floor3_state_nxt;
  kcg_int8 /* x/ */ x;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Floor3_LabQ1;

/* ===========  node initialization and cycle functions  =========== */
/* LabQ1::Floor3/ */
extern void Floor3_LabQ1(
  /* GPIOC2/ */
  kcg_bool GPIOC2,
  outC_Floor3_LabQ1 *outC);

extern void Floor3_reset_LabQ1(outC_Floor3_LabQ1 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Floor3_init_LabQ1(outC_Floor3_LabQ1 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Floor3_LabQ1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Floor3_LabQ1.h
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

