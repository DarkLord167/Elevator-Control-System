/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */
#ifndef _Stop_LabQ1_H_
#define _Stop_LabQ1_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Press3/ */ Press3;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int8 /* Stop:Timer:_L4/ */ _L4_Timer_Stop;
  SSM_ST_Stop /* Stop: */ Stop_state_nxt;
  kcg_int8 /* x/ */ x;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Stop_LabQ1;

/* ===========  node initialization and cycle functions  =========== */
/* LabQ1::Stop/ */
extern void Stop_LabQ1(/* GPIOC3/ */ kcg_bool GPIOC3, outC_Stop_LabQ1 *outC);

extern void Stop_reset_LabQ1(outC_Stop_LabQ1 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Stop_init_LabQ1(outC_Stop_LabQ1 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Stop_LabQ1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Stop_LabQ1.h
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

