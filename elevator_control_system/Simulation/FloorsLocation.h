/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */
#ifndef _FloorsLocation_H_
#define _FloorsLocation_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SafetyViolation/ */ SafetyViolation;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:State1:_L19/ */ _L19_State1_SM1;
  kcg_bool /* SM1:State1:_L18/ */ _L18_State1_SM1;
  kcg_int16 /* SM1:State1:_L17/ */ _L17_State1_SM1;
  kcg_int16 /* SM1:State1:_L15/ */ _L15_State1_SM1;
  kcg_bool /* SM1:State1:_L14/ */ _L14_State1_SM1;
  kcg_bool /* SM1:State1:_L13/ */ _L13_State1_SM1;
  kcg_int16 /* SM1:State1:_L12/ */ _L12_State1_SM1;
  kcg_int16 /* SM1:State1:_L11/ */ _L11_State1_SM1;
  kcg_bool /* SM1:State1:_L9/ */ _L9_State1_SM1;
  kcg_int16 /* SM1:State1:_L8/ */ _L8_State1_SM1;
  kcg_int16 /* SM1:State1:_L7/ */ _L7_State1_SM1;
  kcg_bool /* SM1:State1:_L6/ */ _L6_State1_SM1;
  kcg_int16 /* SM1:State1:_L3/ */ _L3_State1_SM1;
  kcg_bool /* SM1:State1:_L1/ */ _L1_State1_SM1;
  kcg_bool /* SM1:State1:_L21/ */ _L21_State1_SM1;
  kcg_bool /* SM1:State1:_L22/ */ _L22_State1_SM1;
  kcg_bool /* SM1:State1:_L23/ */ _L23_State1_SM1;
  kcg_bool /* SM1:State1:_L24/ */ _L24_State1_SM1;
  kcg_bool /* SM1:State1:_L25/ */ _L25_State1_SM1;
  kcg_bool /* SM1:State1:_L26/ */ _L26_State1_SM1;
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  _7_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _7_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_FloorsLocation;

/* ===========  node initialization and cycle functions  =========== */
/* FloorsLocation/ */
extern void FloorsLocation(
  /* GPIOC7/ */
  kcg_bool GPIOC7,
  /* Position/ */
  kcg_int16 Position,
  outC_FloorsLocation *outC);

extern void FloorsLocation_reset(outC_FloorsLocation *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FloorsLocation_init(outC_FloorsLocation *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FloorsLocation_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FloorsLocation.h
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

