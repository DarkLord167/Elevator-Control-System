/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PositionProcessor.h"

/* PositionProcessor/ */
void PositionProcessor(
  /* setDirection/ */
  Direction setDirection,
  /* GPIOC9/ */
  kcg_bool GPIOC9,
  outC_PositionProcessor *outC)
{
  /* SM1:MovingUp:<2> */
  kcg_bool tr_2_guard_MovingUp_SM1;
  /* SM1:MovingUp:<1> */
  kcg_bool tr_1_guard_MovingUp_SM1;
  /* SM1:MovingUp1:<2> */
  kcg_bool tr_2_guard_MovingUp1_SM1;
  /* SM1:MovingUp1:<1> */
  kcg_bool tr_1_guard_MovingUp1_SM1;
  /* SM1:State4:<4> */
  kcg_bool tr_4_guard_State4_SM1;
  /* SM1:State4:<3> */
  kcg_bool tr_3_guard_State4_SM1;
  /* SM1:State4:<2> */
  kcg_bool tr_2_guard_State4_SM1;
  /* SM1:State4:<1> */
  kcg_bool tr_1_clock_State4_SM1;
  /* SM1:WaintingForNegPulse:<3> */
  kcg_bool tr_3_guard_WaintingForNegPulse_SM1;
  /* SM1:WaintingForNegPulse:<2> */
  kcg_bool tr_2_guard_WaintingForNegPulse_SM1;
  /* SM1:WaintingForNegPulse:<1> */
  kcg_bool tr_1_clock_WaintingForNegPulse_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_act;
  /* SM1: */
  kcg_bool SM1_reset_act;

  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_WaintingForNegPulse_SM1 :
      tr_3_guard_WaintingForNegPulse_SM1 = outC->mem_setDirection == None;
      tr_2_guard_WaintingForNegPulse_SM1 = (outC->Timer == kcg_lit_int16(3)) & GPIOC9;
      tr_1_clock_WaintingForNegPulse_SM1 = (outC->Timer == kcg_lit_int16(3)) &
        (!GPIOC9);
      /* SM1:WaintingForNegPulse:<1> */
      if (tr_1_clock_WaintingForNegPulse_SM1) {
        SM1_state_act = SSM_st_State4_SM1;
        outC->PulseCount = kcg_lit_int16(0);
      }
      else if (tr_2_guard_WaintingForNegPulse_SM1) {
        SM1_state_act = SSM_st_WaintingForNegPulse_SM1;
      }
      else if (tr_3_guard_WaintingForNegPulse_SM1) {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      else {
        SM1_state_act = SSM_st_WaintingForNegPulse_SM1;
      }
      SM1_reset_act = tr_1_clock_WaintingForNegPulse_SM1 |
        (tr_2_guard_WaintingForNegPulse_SM1 | tr_3_guard_WaintingForNegPulse_SM1);
      break;
    case SSM_st_Initial_SM1 :
      SM1_reset_act = outC->mem_setDirection != None;
      if (SM1_reset_act) {
        SM1_state_act = SSM_st_State4_SM1;
      }
      else {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      break;
    case SSM_st_State4_SM1 :
      tr_4_guard_State4_SM1 = outC->mem_setDirection == None;
      tr_2_guard_State4_SM1 = (outC->mem_setDirection == Up) & GPIOC9 &
        (outC->Timer == kcg_lit_int16(3));
      tr_1_clock_State4_SM1 = (outC->mem_setDirection == Down) & GPIOC9 &
        (outC->Timer == kcg_lit_int16(3));
      tr_3_guard_State4_SM1 = (outC->Timer == kcg_lit_int16(3)) & (!GPIOC9);
      /* SM1:State4:<1> */
      if (tr_1_clock_State4_SM1) {
        SM1_state_act = SSM_st_MovingUp1_SM1;
      }
      else /* SM1:State4:<2> */
      if (tr_2_guard_State4_SM1) {
        SM1_state_act = SSM_st_MovingUp_SM1;
      }
      else /* SM1:State4:<3> */
      if (tr_3_guard_State4_SM1) {
        SM1_state_act = SSM_st_State4_SM1;
        outC->PulseCount = outC->PulseCount + kcg_lit_int16(1);
      }
      else if (tr_4_guard_State4_SM1) {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      else {
        SM1_state_act = SSM_st_State4_SM1;
      }
      SM1_reset_act = tr_1_clock_State4_SM1 | (tr_2_guard_State4_SM1 |
          (tr_3_guard_State4_SM1 | tr_4_guard_State4_SM1));
      break;
    case SSM_st_MovingUp1_SM1 :
      tr_2_guard_MovingUp1_SM1 = outC->mem_setDirection != None;
      tr_1_guard_MovingUp1_SM1 = setDirection == None;
      if (tr_1_guard_MovingUp1_SM1) {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      else if (tr_2_guard_MovingUp1_SM1) {
        SM1_state_act = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act = SSM_st_MovingUp1_SM1;
      }
      SM1_reset_act = tr_1_guard_MovingUp1_SM1 | tr_2_guard_MovingUp1_SM1;
      break;
    case SSM_st_MovingUp_SM1 :
      tr_2_guard_MovingUp_SM1 = outC->mem_setDirection != None;
      tr_1_guard_MovingUp_SM1 = outC->mem_setDirection == None;
      if (tr_1_guard_MovingUp_SM1) {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      else if (tr_2_guard_MovingUp_SM1) {
        SM1_state_act = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act = SSM_st_MovingUp_SM1;
      }
      SM1_reset_act = tr_1_guard_MovingUp_SM1 | tr_2_guard_MovingUp_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->mem_setDirection = setDirection;
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_WaintingForNegPulse_SM1 :
      outC->Speed = kcg_lit_int16(0);
      if (SM1_reset_act) {
        /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
        Counter_reset(&outC->Context_Counter_3);
      }
      /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
      Counter(&outC->Context_Counter_3);
      outC->Timer = outC->Context_Counter_3.Output;
      outC->SM1_state_nxt = SSM_st_WaintingForNegPulse_SM1;
      break;
    case SSM_st_Initial_SM1 :
      outC->Speed = kcg_lit_int16(0);
      outC->Timer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Initial_SM1;
      break;
    case SSM_st_State4_SM1 :
      outC->Speed = kcg_lit_int16(0);
      if (SM1_reset_act) {
        /* SM1:State4:_L1=(Counter#2)/ */ Counter_reset(&outC->Context_Counter_2);
      }
      /* SM1:State4:_L1=(Counter#2)/ */ Counter(&outC->Context_Counter_2);
      outC->Timer = outC->Context_Counter_2.Output;
      outC->SM1_state_nxt = SSM_st_State4_SM1;
      break;
    case SSM_st_MovingUp1_SM1 :
      outC->x = outC->x - kcg_lit_int16(1);
      outC->Position = outC->x;
      outC->Speed = kcg_lit_int16(1000) / (outC->PulseCount * kcg_lit_int16(3));
      outC->Timer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_MovingUp1_SM1;
      break;
    case SSM_st_MovingUp_SM1 :
      outC->x = kcg_lit_int16(1) + outC->x;
      outC->Position = outC->x;
      outC->Speed = kcg_lit_int16(1000) / (outC->PulseCount * kcg_lit_int16(3));
      outC->Timer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_MovingUp_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void PositionProcessor_init(outC_PositionProcessor *outC)
{
  outC->Speed = kcg_lit_int16(0);
  /* SM1:State4:_L1=(Counter#2)/ */ Counter_init(&outC->Context_Counter_2);
  /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
  Counter_init(&outC->Context_Counter_3);
  outC->PulseCount = kcg_lit_int16(0);
  outC->Position = kcg_lit_int16(0);
  outC->x = kcg_lit_int16(0);
  outC->Timer = kcg_lit_int16(0);
  outC->mem_setDirection = None;
  outC->SM1_state_nxt = SSM_st_Initial_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PositionProcessor_reset(outC_PositionProcessor *outC)
{
  /* SM1:State4:_L1=(Counter#2)/ */ Counter_reset(&outC->Context_Counter_2);
  /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
  Counter_reset(&outC->Context_Counter_3);
  outC->PulseCount = kcg_lit_int16(0);
  outC->Position = kcg_lit_int16(0);
  outC->x = kcg_lit_int16(0);
  outC->Timer = kcg_lit_int16(0);
  outC->mem_setDirection = None;
  outC->SM1_state_nxt = SSM_st_Initial_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PositionProcessor.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

