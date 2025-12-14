/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */
#ifndef _Doors_LabQ1_H_
#define _Doors_LabQ1_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Press8/ */ Press8;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_DoorSensor /* DoorSensor: */ DoorSensor_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Doors_LabQ1;

/* ===========  node initialization and cycle functions  =========== */
/* LabQ1::Doors/ */
extern void Doors_LabQ1(/* GPIOC8/ */ kcg_bool GPIOC8, outC_Doors_LabQ1 *outC);

extern void Doors_reset_LabQ1(outC_Doors_LabQ1 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Doors_init_LabQ1(outC_Doors_LabQ1 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Doors_LabQ1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Doors_LabQ1.h
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

