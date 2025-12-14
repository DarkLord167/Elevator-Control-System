/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */
#ifndef _Floor2_LabQ1_H_
#define _Floor2_LabQ1_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Press1/ */ Press1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int8 /* Floor2:Timer:_L4/ */ _L4_Timer_Floor2;
  SSM_ST_Floor2 /* Floor2: */ Floor2_state_nxt;
  kcg_int8 /* x/ */ x;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Floor2_LabQ1;

/* ===========  node initialization and cycle functions  =========== */
/* LabQ1::Floor2/ */
extern void Floor2_LabQ1(
  /* GPIOC1/ */
  kcg_bool GPIOC1,
  outC_Floor2_LabQ1 *outC);

extern void Floor2_reset_LabQ1(outC_Floor2_LabQ1 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Floor2_init_LabQ1(outC_Floor2_LabQ1 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Floor2_LabQ1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Floor2_LabQ1.h
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

