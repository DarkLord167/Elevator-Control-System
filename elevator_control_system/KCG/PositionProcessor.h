/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _PositionProcessor_H_
#define _PositionProcessor_H_

#include "kcg_types.h"
#include "Counter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int16 /* Position/ */ Position;
  kcg_int16 /* Speed/ */ Speed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  Direction /* setDirection/ */ mem_setDirection;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_int16 /* x/ */ x;
  kcg_int16 /* PulseCount/ */ PulseCount;
  kcg_int16 /* Timer/ */ Timer;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter /* SM1:State4:_L1=(Counter#2)/ */ Context_Counter_2;
  outC_Counter /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */ Context_Counter_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_PositionProcessor;

/* ===========  node initialization and cycle functions  =========== */
/* PositionProcessor/ */
extern void PositionProcessor(
  /* setDirection/ */
  Direction setDirection,
  /* GPIOC9/ */
  kcg_bool GPIOC9,
  outC_PositionProcessor *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PositionProcessor_reset(outC_PositionProcessor *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PositionProcessor_init(outC_PositionProcessor *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PositionProcessor_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PositionProcessor.h
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

