/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
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
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_int16 /* x/ */ x;
  kcg_int16 /* PulseCount/ */ PulseCount;
  kcg_int16 /* Timer/ */ Timer;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter /* SM1:State4:_L1=(Counter#2)/ */ Context_Counter_2;
  outC_Counter /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */ Context_Counter_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:State4:<1> */ tr_1_clock_State4_SM1;
  kcg_bool /* SM1:State4:<3> */ tr_3_clock_State4_SM1;
  kcg_bool /* SM1:State4:<2> */ tr_2_clock_State4_SM1;
  kcg_bool /* SM1:WaintingForNegPulse:<1> */ tr_1_clock_WaintingForNegPulse_SM1;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int16 /* SM1:MovingUp:_L13/ */ _L13_MovingUp_SM1;
  kcg_int16 /* SM1:MovingUp:_L14/ */ _L14_MovingUp_SM1;
  kcg_int16 /* SM1:MovingUp:_L15/ */ _L15_MovingUp_SM1;
  kcg_int16 /* SM1:MovingUp:_L16/ */ _L16_MovingUp_SM1;
  kcg_int16 /* SM1:MovingUp:_L17/ */ _L17_MovingUp_SM1;
  kcg_int16 /* SM1:MovingUp:_L8/ */ _L8_MovingUp_SM1;
  kcg_int16 /* SM1:MovingUp:_L7/ */ _L7_MovingUp_SM1;
  kcg_int16 /* SM1:MovingUp:_L5/ */ _L5_MovingUp_SM1;
  kcg_int16 /* SM1:MovingUp1:_L21/ */ _L21_MovingUp1_SM1;
  kcg_int16 /* SM1:MovingUp1:_L16/ */ _L16_MovingUp1_SM1;
  kcg_int16 /* SM1:MovingUp1:_L17/ */ _L17_MovingUp1_SM1;
  kcg_int16 /* SM1:MovingUp1:_L19/ */ _L19_MovingUp1_SM1;
  kcg_int16 /* SM1:MovingUp1:_L20/ */ _L20_MovingUp1_SM1;
  kcg_int16 /* SM1:MovingUp1:_L8/ */ _L8_MovingUp1_SM1;
  kcg_int16 /* SM1:MovingUp1:_L5/ */ _L5_MovingUp1_SM1;
  kcg_int16 /* SM1:MovingUp1:_L6/ */ _L6_MovingUp1_SM1;
  kcg_int16 /* SM1:State4:_L1/ */ _L1_State4_SM1;
  kcg_int16 /* SM1:Initial:_L1/ */ _L1_Initial_SM1;
  kcg_int16 /* SM1:WaintingForNegPulse:_L1/ */ _L1_WaintingForNegPulse_SM1;
  _3_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _3_SSM_TR_SM1 /* SM1: */ SM1_fired;
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
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

