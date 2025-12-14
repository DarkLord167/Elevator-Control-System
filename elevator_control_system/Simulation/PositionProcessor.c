/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
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
  /* Position/ */
  kcg_int16 Position_partial;
  /* Speed/ */
  kcg_int16 Speed_partial;
  /* x/ */
  kcg_int16 x_partial;
  /* Timer/ */
  kcg_int16 Timer_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_partial;
  /* Position/ */
  kcg_int16 _1_Position_partial;
  /* Speed/ */
  kcg_int16 _2_Speed_partial;
  /* x/ */
  kcg_int16 _3_x_partial;
  /* Timer/ */
  kcg_int16 _4_Timer_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _5_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _7_SM1_fired_partial;
  /* Position/ */
  kcg_int16 _8_Position_partial;
  /* Speed/ */
  kcg_int16 _9_Speed_partial;
  /* x/ */
  kcg_int16 _10_x_partial;
  /* Timer/ */
  kcg_int16 _11_Timer_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _12_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _13_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _14_SM1_fired_partial;
  /* Position/ */
  kcg_int16 _15_Position_partial;
  /* Speed/ */
  kcg_int16 _16_Speed_partial;
  /* x/ */
  kcg_int16 _17_x_partial;
  /* Timer/ */
  kcg_int16 _18_Timer_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _19_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _21_SM1_fired_partial;
  /* Position/ */
  kcg_int16 _22_Position_partial;
  /* Speed/ */
  kcg_int16 _23_Speed_partial;
  /* x/ */
  kcg_int16 _24_x_partial;
  /* Timer/ */
  kcg_int16 _25_Timer_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _26_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _27_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _28_SM1_fired_partial;
  /* PulseCount/ */
  kcg_int16 PulseCount_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:MovingUp:<2> */
  kcg_bool tr_2_guard_MovingUp_SM1;
  /* SM1:MovingUp:<1> */
  kcg_bool tr_1_guard_MovingUp_SM1;
  /* PulseCount/ */
  kcg_int16 _29_PulseCount_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _30_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _31_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _32_SM1_fired_strong_partial;
  /* SM1:MovingUp1:<2> */
  kcg_bool tr_2_guard_MovingUp1_SM1;
  /* SM1:MovingUp1:<1> */
  kcg_bool tr_1_guard_MovingUp1_SM1;
  /* PulseCount/ */
  kcg_int16 _33_PulseCount_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _34_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _35_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _36_SM1_fired_strong_partial;
  /* SM1:State4:<4> */
  kcg_bool tr_4_guard_State4_SM1;
  /* SM1:State4:<3> */
  kcg_bool tr_3_guard_State4_SM1;
  /* SM1:State4:<2> */
  kcg_bool tr_2_guard_State4_SM1;
  /* SM1:State4:<1> */
  kcg_bool tr_1_guard_State4_SM1;
  /* PulseCount/ */
  kcg_int16 _37_PulseCount_partial;
  /* PulseCount/ */
  kcg_int16 _38_PulseCount_partial;
  /* PulseCount/ */
  kcg_int16 _39_PulseCount_partial;
  /* PulseCount/ */
  kcg_int16 _40_PulseCount_partial;
  /* PulseCount/ */
  kcg_int16 _41_PulseCount_partial;
  /* PulseCount/ */
  kcg_int16 _42_PulseCount_partial;
  /* PulseCount/ */
  kcg_int16 _43_PulseCount_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _44_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _45_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _46_SM1_fired_strong_partial;
  /* SM1:Initial:<1> */
  kcg_bool tr_1_guard_Initial_SM1;
  /* PulseCount/ */
  kcg_int16 _47_PulseCount_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _48_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _49_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _50_SM1_fired_strong_partial;
  /* SM1:WaintingForNegPulse:<3> */
  kcg_bool tr_3_guard_WaintingForNegPulse_SM1;
  /* SM1:WaintingForNegPulse:<2> */
  kcg_bool tr_2_guard_WaintingForNegPulse_SM1;
  /* SM1:WaintingForNegPulse:<1> */
  kcg_bool tr_1_guard_WaintingForNegPulse_SM1;
  /* PulseCount/ */
  kcg_int16 _51_PulseCount_partial;
  /* PulseCount/ */
  kcg_int16 _52_PulseCount_partial;
  /* Timer/ */
  kcg_int16 last_Timer;
  /* PulseCount/ */
  kcg_int16 last_PulseCount;
  /* x/ */
  kcg_int16 last_x;
  /* Position/ */
  kcg_int16 last_Position;
  /* setDirection/ */
  Direction last_setDirection;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_setDirection = outC->mem_setDirection;
  outC->mem_setDirection = setDirection;
  last_Timer = outC->Timer;
  last_PulseCount = outC->PulseCount;
  last_x = outC->x;
  last_Position = outC->Position;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_WaintingForNegPulse_SM1 :
      tr_3_guard_WaintingForNegPulse_SM1 = last_setDirection == None;
      tr_2_guard_WaintingForNegPulse_SM1 = (last_Timer == kcg_lit_int16(3)) &
        (GPIOC9 == kcg_true);
      tr_1_guard_WaintingForNegPulse_SM1 = (last_Timer == kcg_lit_int16(3)) &
        (GPIOC9 == kcg_false);
      if (tr_1_guard_WaintingForNegPulse_SM1) {
        _48_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      else if (tr_2_guard_WaintingForNegPulse_SM1) {
        _48_SM1_state_act_partial = SSM_st_WaintingForNegPulse_SM1;
      }
      else if (tr_3_guard_WaintingForNegPulse_SM1) {
        _48_SM1_state_act_partial = SSM_st_Initial_SM1;
      }
      else {
        _48_SM1_state_act_partial = SSM_st_WaintingForNegPulse_SM1;
      }
      outC->SM1_state_act = _48_SM1_state_act_partial;
      break;
    case SSM_st_Initial_SM1 :
      tr_1_guard_Initial_SM1 = last_setDirection != None;
      if (tr_1_guard_Initial_SM1) {
        _44_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      else {
        _44_SM1_state_act_partial = SSM_st_Initial_SM1;
      }
      outC->SM1_state_act = _44_SM1_state_act_partial;
      break;
    case SSM_st_State4_SM1 :
      tr_4_guard_State4_SM1 = last_setDirection == None;
      tr_3_guard_State4_SM1 = (last_Timer == kcg_lit_int16(3)) & (GPIOC9 ==
          kcg_false);
      tr_2_guard_State4_SM1 = (last_setDirection == Up) & (GPIOC9 == kcg_true) &
        (last_Timer == kcg_lit_int16(3));
      tr_1_guard_State4_SM1 = (last_setDirection == Down) & (GPIOC9 ==
          kcg_true) & (last_Timer == kcg_lit_int16(3));
      if (tr_1_guard_State4_SM1) {
        _34_SM1_state_act_partial = SSM_st_MovingUp1_SM1;
      }
      else if (tr_2_guard_State4_SM1) {
        _34_SM1_state_act_partial = SSM_st_MovingUp_SM1;
      }
      else if (tr_3_guard_State4_SM1) {
        _34_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      else if (tr_4_guard_State4_SM1) {
        _34_SM1_state_act_partial = SSM_st_Initial_SM1;
      }
      else {
        _34_SM1_state_act_partial = SSM_st_State4_SM1;
      }
      outC->SM1_state_act = _34_SM1_state_act_partial;
      break;
    case SSM_st_MovingUp1_SM1 :
      tr_2_guard_MovingUp1_SM1 = last_setDirection != None;
      tr_1_guard_MovingUp1_SM1 = setDirection == None;
      if (tr_1_guard_MovingUp1_SM1) {
        _30_SM1_state_act_partial = SSM_st_Initial_SM1;
      }
      else if (tr_2_guard_MovingUp1_SM1) {
        _30_SM1_state_act_partial = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        _30_SM1_state_act_partial = SSM_st_MovingUp1_SM1;
      }
      outC->SM1_state_act = _30_SM1_state_act_partial;
      break;
    case SSM_st_MovingUp_SM1 :
      tr_2_guard_MovingUp_SM1 = last_setDirection != None;
      tr_1_guard_MovingUp_SM1 = last_setDirection == None;
      if (tr_1_guard_MovingUp_SM1) {
        SM1_state_act_partial = SSM_st_Initial_SM1;
      }
      else if (tr_2_guard_MovingUp_SM1) {
        SM1_state_act_partial = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_MovingUp_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_WaintingForNegPulse_SM1 :
      _24_x_partial = last_x;
      _23_Speed_partial = kcg_lit_int16(0);
      _22_Position_partial = last_Position;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_WaintingForNegPulse_SM1 :
      if (tr_1_guard_WaintingForNegPulse_SM1) {
        _50_SM1_fired_strong_partial =
          SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1;
      }
      else if (tr_2_guard_WaintingForNegPulse_SM1) {
        _50_SM1_fired_strong_partial =
          SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1;
      }
      else if (tr_3_guard_WaintingForNegPulse_SM1) {
        _50_SM1_fired_strong_partial =
          SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1;
      }
      else {
        _50_SM1_fired_strong_partial = _36_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _50_SM1_fired_strong_partial;
      break;
    case SSM_st_Initial_SM1 :
      if (tr_1_guard_Initial_SM1) {
        _46_SM1_fired_strong_partial = SSM_TR_Initial_State4_1_Initial_SM1;
      }
      else {
        _46_SM1_fired_strong_partial = _36_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _46_SM1_fired_strong_partial;
      break;
    case SSM_st_State4_SM1 :
      if (tr_1_guard_State4_SM1) {
        _36_SM1_fired_strong_partial = SSM_TR_State4_MovingUp1_1_State4_SM1;
      }
      else if (tr_2_guard_State4_SM1) {
        _36_SM1_fired_strong_partial = SSM_TR_State4_MovingUp_2_State4_SM1;
      }
      else if (tr_3_guard_State4_SM1) {
        _36_SM1_fired_strong_partial = SSM_TR_State4_State4_3_State4_SM1;
      }
      else if (tr_4_guard_State4_SM1) {
        _36_SM1_fired_strong_partial = SSM_TR_State4_Initial_4_State4_SM1;
      }
      else {
        _36_SM1_fired_strong_partial = _36_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _36_SM1_fired_strong_partial;
      break;
    case SSM_st_MovingUp1_SM1 :
      if (tr_1_guard_MovingUp1_SM1) {
        _32_SM1_fired_strong_partial = SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1;
      }
      else if (tr_2_guard_MovingUp1_SM1) {
        _32_SM1_fired_strong_partial =
          SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1;
      }
      else {
        _32_SM1_fired_strong_partial = _36_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _32_SM1_fired_strong_partial;
      break;
    case SSM_st_MovingUp_SM1 :
      if (tr_1_guard_MovingUp_SM1) {
        SM1_fired_strong_partial = SSM_TR_MovingUp_Initial_1_MovingUp_SM1;
      }
      else if (tr_2_guard_MovingUp_SM1) {
        SM1_fired_strong_partial = SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1;
      }
      else {
        SM1_fired_strong_partial = _36_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_WaintingForNegPulse_SM1 :
      _28_SM1_fired_partial = outC->SM1_fired_strong;
      _27_SM1_reset_nxt_partial = kcg_false;
      _26_SM1_state_nxt_partial = SSM_st_WaintingForNegPulse_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_WaintingForNegPulse_SM1 :
      if (tr_1_guard_WaintingForNegPulse_SM1) {
        _49_SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_WaintingForNegPulse_SM1) {
        _49_SM1_reset_act_partial = kcg_true;
      }
      else {
        _49_SM1_reset_act_partial = tr_3_guard_WaintingForNegPulse_SM1;
      }
      outC->SM1_reset_act = _49_SM1_reset_act_partial;
      break;
    case SSM_st_Initial_SM1 :
      _45_SM1_reset_act_partial = tr_1_guard_Initial_SM1;
      outC->SM1_reset_act = _45_SM1_reset_act_partial;
      break;
    case SSM_st_State4_SM1 :
      if (tr_1_guard_State4_SM1) {
        _35_SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_State4_SM1) {
        _35_SM1_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_State4_SM1) {
        _35_SM1_reset_act_partial = kcg_true;
      }
      else {
        _35_SM1_reset_act_partial = tr_4_guard_State4_SM1;
      }
      outC->SM1_reset_act = _35_SM1_reset_act_partial;
      break;
    case SSM_st_MovingUp1_SM1 :
      if (tr_1_guard_MovingUp1_SM1) {
        _31_SM1_reset_act_partial = kcg_true;
      }
      else {
        _31_SM1_reset_act_partial = tr_2_guard_MovingUp1_SM1;
      }
      outC->SM1_reset_act = _31_SM1_reset_act_partial;
      break;
    case SSM_st_MovingUp_SM1 :
      if (tr_1_guard_MovingUp_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_2_guard_MovingUp_SM1;
      }
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_WaintingForNegPulse_SM1 :
      if (outC->SM1_reset_act) {
        /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
        Counter_reset(&outC->Context_Counter_3);
      }
      /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
      Counter(&outC->Context_Counter_3);
      outC->_L1_WaintingForNegPulse_SM1 = outC->Context_Counter_3.Output;
      _25_Timer_partial = outC->_L1_WaintingForNegPulse_SM1;
      break;
    case SSM_st_Initial_SM1 :
      _18_Timer_partial = kcg_lit_int16(0);
      _17_x_partial = last_x;
      _15_Position_partial = last_Position;
      _21_SM1_fired_partial = outC->SM1_fired_strong;
      _20_SM1_reset_nxt_partial = kcg_false;
      _19_SM1_state_nxt_partial = SSM_st_Initial_SM1;
      outC->_L1_Initial_SM1 = kcg_lit_int16(0);
      _16_Speed_partial = outC->_L1_Initial_SM1;
      break;
    case SSM_st_State4_SM1 :
      _10_x_partial = last_x;
      _9_Speed_partial = kcg_lit_int16(0);
      _8_Position_partial = last_Position;
      _14_SM1_fired_partial = outC->SM1_fired_strong;
      _13_SM1_reset_nxt_partial = kcg_false;
      _12_SM1_state_nxt_partial = SSM_st_State4_SM1;
      if (outC->SM1_reset_act) {
        /* SM1:State4:_L1=(Counter#2)/ */ Counter_reset(&outC->Context_Counter_2);
      }
      /* SM1:State4:_L1=(Counter#2)/ */ Counter(&outC->Context_Counter_2);
      outC->_L1_State4_SM1 = outC->Context_Counter_2.Output;
      _11_Timer_partial = outC->_L1_State4_SM1;
      break;
    case SSM_st_MovingUp1_SM1 :
      _4_Timer_partial = kcg_lit_int16(0);
      _7_SM1_fired_partial = outC->SM1_fired_strong;
      _6_SM1_reset_nxt_partial = kcg_false;
      _5_SM1_state_nxt_partial = SSM_st_MovingUp1_SM1;
      outC->_L21_MovingUp1_SM1 = kcg_lit_int16(3);
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_WaintingForNegPulse_SM1 :
      outC->tr_1_clock_WaintingForNegPulse_SM1 = tr_1_guard_WaintingForNegPulse_SM1;
      /* SM1:WaintingForNegPulse:<1> */
      if (outC->tr_1_clock_WaintingForNegPulse_SM1) {
        _52_PulseCount_partial = kcg_lit_int16(0);
        _47_PulseCount_partial = _52_PulseCount_partial;
      }
      else {
        _51_PulseCount_partial = last_PulseCount;
        _47_PulseCount_partial = _51_PulseCount_partial;
      }
      outC->PulseCount = _47_PulseCount_partial;
      break;
    case SSM_st_Initial_SM1 :
      _43_PulseCount_partial = last_PulseCount;
      outC->PulseCount = _43_PulseCount_partial;
      break;
    case SSM_st_State4_SM1 :
      outC->tr_1_clock_State4_SM1 = tr_1_guard_State4_SM1;
      /* SM1:State4:<1> */
      if (outC->tr_1_clock_State4_SM1) {
        _42_PulseCount_partial = last_PulseCount;
        _33_PulseCount_partial = _42_PulseCount_partial;
      }
      else {
        outC->tr_2_clock_State4_SM1 = tr_2_guard_State4_SM1;
        /* SM1:State4:<2> */
        if (outC->tr_2_clock_State4_SM1) {
          _37_PulseCount_partial = last_PulseCount;
          _41_PulseCount_partial = _37_PulseCount_partial;
        }
        else {
          outC->tr_3_clock_State4_SM1 = tr_3_guard_State4_SM1;
          /* SM1:State4:<3> */
          if (outC->tr_3_clock_State4_SM1) {
            _40_PulseCount_partial = last_PulseCount + kcg_lit_int16(1);
            _38_PulseCount_partial = _40_PulseCount_partial;
          }
          else {
            _39_PulseCount_partial = last_PulseCount;
            _38_PulseCount_partial = _39_PulseCount_partial;
          }
          _41_PulseCount_partial = _38_PulseCount_partial;
        }
        _33_PulseCount_partial = _41_PulseCount_partial;
      }
      outC->PulseCount = _33_PulseCount_partial;
      break;
    case SSM_st_MovingUp1_SM1 :
      _29_PulseCount_partial = last_PulseCount;
      outC->PulseCount = _29_PulseCount_partial;
      break;
    case SSM_st_MovingUp_SM1 :
      PulseCount_partial = last_PulseCount;
      outC->PulseCount = PulseCount_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_WaintingForNegPulse_SM1 :
      outC->Position = _22_Position_partial;
      outC->Speed = _23_Speed_partial;
      outC->x = _24_x_partial;
      outC->Timer = _25_Timer_partial;
      outC->SM1_state_nxt = _26_SM1_state_nxt_partial;
      break;
    case SSM_st_Initial_SM1 :
      outC->Position = _15_Position_partial;
      outC->Speed = _16_Speed_partial;
      outC->x = _17_x_partial;
      outC->Timer = _18_Timer_partial;
      outC->SM1_state_nxt = _19_SM1_state_nxt_partial;
      break;
    case SSM_st_State4_SM1 :
      outC->Position = _8_Position_partial;
      outC->Speed = _9_Speed_partial;
      outC->x = _10_x_partial;
      outC->Timer = _11_Timer_partial;
      outC->SM1_state_nxt = _12_SM1_state_nxt_partial;
      break;
    case SSM_st_MovingUp1_SM1 :
      outC->_L17_MovingUp1_SM1 = outC->PulseCount;
      outC->_L16_MovingUp1_SM1 = outC->_L17_MovingUp1_SM1 * outC->_L21_MovingUp1_SM1;
      outC->_L19_MovingUp1_SM1 = kcg_lit_int16(1000);
      outC->_L20_MovingUp1_SM1 = outC->_L19_MovingUp1_SM1 / outC->_L16_MovingUp1_SM1;
      _2_Speed_partial = outC->_L20_MovingUp1_SM1;
      outC->_L6_MovingUp1_SM1 = kcg_lit_int16(1);
      outC->_L5_MovingUp1_SM1 = last_x;
      outC->_L8_MovingUp1_SM1 = outC->_L5_MovingUp1_SM1 - outC->_L6_MovingUp1_SM1;
      _3_x_partial = outC->_L8_MovingUp1_SM1;
      _1_Position_partial = outC->_L8_MovingUp1_SM1;
      outC->Position = _1_Position_partial;
      outC->Speed = _2_Speed_partial;
      outC->x = _3_x_partial;
      outC->Timer = _4_Timer_partial;
      outC->SM1_state_nxt = _5_SM1_state_nxt_partial;
      break;
    case SSM_st_MovingUp_SM1 :
      Timer_partial = kcg_lit_int16(0);
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_MovingUp_SM1;
      outC->_L17_MovingUp_SM1 = kcg_lit_int16(3);
      outC->_L13_MovingUp_SM1 = outC->PulseCount;
      outC->_L14_MovingUp_SM1 = outC->_L13_MovingUp_SM1 * outC->_L17_MovingUp_SM1;
      outC->_L16_MovingUp_SM1 = kcg_lit_int16(1000);
      outC->_L15_MovingUp_SM1 = outC->_L16_MovingUp_SM1 / outC->_L14_MovingUp_SM1;
      Speed_partial = outC->_L15_MovingUp_SM1;
      outC->_L5_MovingUp_SM1 = last_x;
      outC->_L7_MovingUp_SM1 = kcg_lit_int16(1);
      outC->_L8_MovingUp_SM1 = outC->_L7_MovingUp_SM1 + outC->_L5_MovingUp_SM1;
      x_partial = outC->_L8_MovingUp_SM1;
      Position_partial = outC->_L8_MovingUp_SM1;
      outC->Position = Position_partial;
      outC->Speed = Speed_partial;
      outC->x = x_partial;
      outC->Timer = Timer_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_WaintingForNegPulse_SM1 :
      outC->SM1_reset_nxt = _27_SM1_reset_nxt_partial;
      outC->SM1_fired = _28_SM1_fired_partial;
      break;
    case SSM_st_Initial_SM1 :
      outC->SM1_reset_nxt = _20_SM1_reset_nxt_partial;
      outC->SM1_fired = _21_SM1_fired_partial;
      break;
    case SSM_st_State4_SM1 :
      outC->SM1_reset_nxt = _13_SM1_reset_nxt_partial;
      outC->SM1_fired = _14_SM1_fired_partial;
      break;
    case SSM_st_MovingUp1_SM1 :
      outC->SM1_reset_nxt = _6_SM1_reset_nxt_partial;
      outC->SM1_fired = _7_SM1_fired_partial;
      break;
    case SSM_st_MovingUp_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void PositionProcessor_init(outC_PositionProcessor *outC)
{
  outC->SM1_fired = _36_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _36_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_MovingUp_SM1;
  outC->SM1_state_sel = SSM_st_MovingUp_SM1;
  outC->tr_1_clock_WaintingForNegPulse_SM1 = kcg_true;
  outC->tr_2_clock_State4_SM1 = kcg_true;
  outC->tr_3_clock_State4_SM1 = kcg_true;
  outC->tr_1_clock_State4_SM1 = kcg_true;
  outC->_L1_WaintingForNegPulse_SM1 = kcg_lit_int16(0);
  outC->_L1_Initial_SM1 = kcg_lit_int16(0);
  outC->_L1_State4_SM1 = kcg_lit_int16(0);
  outC->_L6_MovingUp1_SM1 = kcg_lit_int16(0);
  outC->_L5_MovingUp1_SM1 = kcg_lit_int16(0);
  outC->_L8_MovingUp1_SM1 = kcg_lit_int16(0);
  outC->_L20_MovingUp1_SM1 = kcg_lit_int16(0);
  outC->_L19_MovingUp1_SM1 = kcg_lit_int16(0);
  outC->_L17_MovingUp1_SM1 = kcg_lit_int16(0);
  outC->_L16_MovingUp1_SM1 = kcg_lit_int16(0);
  outC->_L21_MovingUp1_SM1 = kcg_lit_int16(0);
  outC->_L5_MovingUp_SM1 = kcg_lit_int16(0);
  outC->_L7_MovingUp_SM1 = kcg_lit_int16(0);
  outC->_L8_MovingUp_SM1 = kcg_lit_int16(0);
  outC->_L17_MovingUp_SM1 = kcg_lit_int16(0);
  outC->_L16_MovingUp_SM1 = kcg_lit_int16(0);
  outC->_L15_MovingUp_SM1 = kcg_lit_int16(0);
  outC->_L14_MovingUp_SM1 = kcg_lit_int16(0);
  outC->_L13_MovingUp_SM1 = kcg_lit_int16(0);
  outC->Speed = kcg_lit_int16(0);
  /* SM1:State4:_L1=(Counter#2)/ */ Counter_init(&outC->Context_Counter_2);
  /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
  Counter_init(&outC->Context_Counter_3);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_Initial_SM1;
  outC->Position = kcg_lit_int16(0);
  outC->x = kcg_lit_int16(0);
  outC->PulseCount = kcg_lit_int16(0);
  outC->Timer = kcg_lit_int16(0);
  outC->mem_setDirection = None;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PositionProcessor_reset(outC_PositionProcessor *outC)
{
  /* SM1:State4:_L1=(Counter#2)/ */ Counter_reset(&outC->Context_Counter_2);
  /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
  Counter_reset(&outC->Context_Counter_3);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_Initial_SM1;
  outC->Position = kcg_lit_int16(0);
  outC->x = kcg_lit_int16(0);
  outC->PulseCount = kcg_lit_int16(0);
  outC->Timer = kcg_lit_int16(0);
  outC->mem_setDirection = None;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PositionProcessor.c
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

