/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ActuatorModule.h"

/* ActuatorModule/ */
void ActuatorModule(
  /* Move/ */
  PDirection Move,
  /* CarMotorStop/ */
  kcg_bool CarMotorStop,
  outC_ActuatorModule *outC)
{
  /* Channel1/ */
  kcg_int8 Channel1_partial;
  /* Channel2/ */
  kcg_int8 Channel2_partial;
  /* setDirection/ */
  Direction setDirection_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* Channel1/ */
  kcg_int8 _1_Channel1_partial;
  /* Channel2/ */
  kcg_int8 _2_Channel2_partial;
  /* setDirection/ */
  Direction _3_setDirection_partial;
  /* SM1: */
  SSM_ST_SM1 _4_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _5_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _6_SM1_fired_partial;
  /* Channel1/ */
  kcg_int8 _7_Channel1_partial;
  /* Channel2/ */
  kcg_int8 _8_Channel2_partial;
  /* setDirection/ */
  Direction _9_setDirection_partial;
  /* SM1: */
  SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _12_SM1_fired_partial;
  /* Channel1/ */
  kcg_int8 _13_Channel1_partial;
  /* Channel2/ */
  kcg_int8 _14_Channel2_partial;
  /* setDirection/ */
  Direction _15_setDirection_partial;
  /* SM1: */
  SSM_ST_SM1 _16_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _17_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _18_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Initial:<3> */
  kcg_bool tr_3_guard_Initial_SM1;
  /* SM1:Initial:<2> */
  kcg_bool tr_2_guard_Initial_SM1;
  /* SM1:Initial:<1> */
  kcg_bool tr_1_guard_Initial_SM1;
  /* SM1: */
  SSM_ST_SM1 _19_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _21_SM1_fired_strong_partial;
  /* SM1:MoveUp:<2> */
  kcg_bool tr_2_guard_MoveUp_SM1;
  /* SM1:MoveUp:<1> */
  kcg_bool tr_1_guard_MoveUp_SM1;
  /* SM1: */
  SSM_ST_SM1 _22_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _23_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _24_SM1_fired_strong_partial;
  /* SM1:MoveDown:<2> */
  kcg_bool tr_2_guard_MoveDown_SM1;
  /* SM1:MoveDown:<1> */
  kcg_bool tr_1_guard_MoveDown_SM1;
  /* SM1: */
  SSM_ST_SM1 _25_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _26_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _27_SM1_fired_strong_partial;
  /* SM1:StopMotor:<2> */
  kcg_bool tr_2_guard_StopMotor_SM1;
  /* SM1:StopMotor:<1> */
  kcg_bool tr_1_guard_StopMotor_SM1;
  /* setDirection/ */
  Direction last_setDirection;
  /* Channel2/ */
  kcg_int8 last_Channel2;
  /* Channel1/ */
  kcg_int8 last_Channel1;
  /* CarMotorStop/ */
  kcg_bool last_CarMotorStop;
  /* Move/ */
  PDirection last_Move;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_Move = outC->mem_Move;
  outC->mem_Move = Move;
  last_CarMotorStop = outC->mem_CarMotorStop;
  outC->mem_CarMotorStop = CarMotorStop;
  last_setDirection = outC->setDirection;
  last_Channel2 = outC->Channel2;
  last_Channel1 = outC->Channel1;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_StopMotor_SM1 :
      tr_2_guard_StopMotor_SM1 = (Move == Upward) & (CarMotorStop == kcg_false);
      tr_1_guard_StopMotor_SM1 = (Move == Downward) & (CarMotorStop == kcg_false);
      if (tr_1_guard_StopMotor_SM1) {
        _25_SM1_state_act_partial = SSM_st_MoveDown_SM1;
      }
      else if (tr_2_guard_StopMotor_SM1) {
        _25_SM1_state_act_partial = SSM_st_MoveUp_SM1;
      }
      else {
        _25_SM1_state_act_partial = SSM_st_StopMotor_SM1;
      }
      outC->SM1_state_act = _25_SM1_state_act_partial;
      if (tr_1_guard_StopMotor_SM1) {
        _27_SM1_fired_strong_partial = SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1;
      }
      else if (tr_2_guard_StopMotor_SM1) {
        _27_SM1_fired_strong_partial = SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1;
      }
      else {
        _27_SM1_fired_strong_partial = _37_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _27_SM1_fired_strong_partial;
      break;
    case SSM_st_MoveDown_SM1 :
      tr_2_guard_MoveDown_SM1 = CarMotorStop == kcg_true;
      tr_1_guard_MoveDown_SM1 = (Move == Upward) & (CarMotorStop == kcg_false);
      if (tr_1_guard_MoveDown_SM1) {
        _22_SM1_state_act_partial = SSM_st_MoveUp_SM1;
      }
      else if (tr_2_guard_MoveDown_SM1) {
        _22_SM1_state_act_partial = SSM_st_StopMotor_SM1;
      }
      else {
        _22_SM1_state_act_partial = SSM_st_MoveDown_SM1;
      }
      outC->SM1_state_act = _22_SM1_state_act_partial;
      if (tr_1_guard_MoveDown_SM1) {
        _24_SM1_fired_strong_partial = SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1;
      }
      else if (tr_2_guard_MoveDown_SM1) {
        _24_SM1_fired_strong_partial = SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1;
      }
      else {
        _24_SM1_fired_strong_partial = _37_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _24_SM1_fired_strong_partial;
      break;
    case SSM_st_MoveUp_SM1 :
      tr_2_guard_MoveUp_SM1 = CarMotorStop == kcg_true;
      tr_1_guard_MoveUp_SM1 = (Move == Downward) & (CarMotorStop == kcg_false);
      if (tr_1_guard_MoveUp_SM1) {
        _19_SM1_state_act_partial = SSM_st_MoveDown_SM1;
      }
      else if (tr_2_guard_MoveUp_SM1) {
        _19_SM1_state_act_partial = SSM_st_StopMotor_SM1;
      }
      else {
        _19_SM1_state_act_partial = SSM_st_MoveUp_SM1;
      }
      outC->SM1_state_act = _19_SM1_state_act_partial;
      if (tr_1_guard_MoveUp_SM1) {
        _21_SM1_fired_strong_partial = SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1;
      }
      else if (tr_2_guard_MoveUp_SM1) {
        _21_SM1_fired_strong_partial = SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1;
      }
      else {
        _21_SM1_fired_strong_partial = _37_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _21_SM1_fired_strong_partial;
      break;
    case _38_SSM_st_Initial_SM1 :
      tr_3_guard_Initial_SM1 = CarMotorStop == kcg_true;
      tr_2_guard_Initial_SM1 = (Move == Downward) & (CarMotorStop == kcg_false);
      tr_1_guard_Initial_SM1 = (Move == Upward) & (CarMotorStop == kcg_false);
      if (tr_1_guard_Initial_SM1) {
        SM1_state_act_partial = SSM_st_MoveUp_SM1;
      }
      else if (tr_2_guard_Initial_SM1) {
        SM1_state_act_partial = SSM_st_MoveDown_SM1;
      }
      else if (tr_3_guard_Initial_SM1) {
        SM1_state_act_partial = SSM_st_StopMotor_SM1;
      }
      else {
        SM1_state_act_partial = _38_SSM_st_Initial_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_Initial_SM1) {
        SM1_fired_strong_partial = SSM_TR_Initial_MoveUp_1_Initial_SM1;
      }
      else if (tr_2_guard_Initial_SM1) {
        SM1_fired_strong_partial = SSM_TR_Initial_MoveDown_2_Initial_SM1;
      }
      else if (tr_3_guard_Initial_SM1) {
        SM1_fired_strong_partial = SSM_TR_Initial_StopMotor_3_Initial_SM1;
      }
      else {
        SM1_fired_strong_partial = _37_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_StopMotor_SM1 :
      _18_SM1_fired_partial = outC->SM1_fired_strong;
      _17_SM1_reset_nxt_partial = kcg_false;
      _16_SM1_state_nxt_partial = SSM_st_StopMotor_SM1;
      outC->_L3_StopMotor_SM1 = None;
      _15_setDirection_partial = outC->_L3_StopMotor_SM1;
      outC->_L2_StopMotor_SM1 = kcg_lit_int8(0);
      outC->_L1_StopMotor_SM1 = kcg_lit_int8(0);
      _14_Channel2_partial = outC->_L2_StopMotor_SM1;
      _13_Channel1_partial = outC->_L1_StopMotor_SM1;
      outC->Channel1 = _13_Channel1_partial;
      outC->Channel2 = _14_Channel2_partial;
      outC->setDirection = _15_setDirection_partial;
      outC->SM1_state_nxt = _16_SM1_state_nxt_partial;
      break;
    case SSM_st_MoveDown_SM1 :
      _12_SM1_fired_partial = outC->SM1_fired_strong;
      _11_SM1_reset_nxt_partial = kcg_false;
      _10_SM1_state_nxt_partial = SSM_st_MoveDown_SM1;
      outC->_L3_MoveDown_SM1 = Down;
      _9_setDirection_partial = outC->_L3_MoveDown_SM1;
      outC->_L2_MoveDown_SM1 = kcg_lit_int8(1);
      outC->_L1_MoveDown_SM1 = kcg_lit_int8(0);
      _8_Channel2_partial = outC->_L2_MoveDown_SM1;
      _7_Channel1_partial = outC->_L1_MoveDown_SM1;
      outC->Channel1 = _7_Channel1_partial;
      outC->Channel2 = _8_Channel2_partial;
      outC->setDirection = _9_setDirection_partial;
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      break;
    case SSM_st_MoveUp_SM1 :
      _6_SM1_fired_partial = outC->SM1_fired_strong;
      _5_SM1_reset_nxt_partial = kcg_false;
      _4_SM1_state_nxt_partial = SSM_st_MoveUp_SM1;
      outC->_L3_MoveUp_SM1 = Up;
      _3_setDirection_partial = outC->_L3_MoveUp_SM1;
      outC->_L2_MoveUp_SM1 = kcg_lit_int8(0);
      outC->_L1_MoveUp_SM1 = kcg_lit_int8(1);
      _2_Channel2_partial = outC->_L2_MoveUp_SM1;
      _1_Channel1_partial = outC->_L1_MoveUp_SM1;
      outC->Channel1 = _1_Channel1_partial;
      outC->Channel2 = _2_Channel2_partial;
      outC->setDirection = _3_setDirection_partial;
      outC->SM1_state_nxt = _4_SM1_state_nxt_partial;
      break;
    case _38_SSM_st_Initial_SM1 :
      setDirection_partial = last_setDirection;
      Channel2_partial = last_Channel2;
      Channel1_partial = last_Channel1;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = _38_SSM_st_Initial_SM1;
      outC->Channel1 = Channel1_partial;
      outC->Channel2 = Channel2_partial;
      outC->setDirection = setDirection_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_StopMotor_SM1 :
      outC->SM1_reset_nxt = _17_SM1_reset_nxt_partial;
      outC->SM1_fired = _18_SM1_fired_partial;
      break;
    case SSM_st_MoveDown_SM1 :
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case SSM_st_MoveUp_SM1 :
      outC->SM1_reset_nxt = _5_SM1_reset_nxt_partial;
      outC->SM1_fired = _6_SM1_fired_partial;
      break;
    case _38_SSM_st_Initial_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_StopMotor_SM1 :
      if (tr_1_guard_StopMotor_SM1) {
        _26_SM1_reset_act_partial = kcg_true;
      }
      else {
        _26_SM1_reset_act_partial = tr_2_guard_StopMotor_SM1;
      }
      break;
    case SSM_st_MoveDown_SM1 :
      if (tr_1_guard_MoveDown_SM1) {
        _23_SM1_reset_act_partial = kcg_true;
      }
      else {
        _23_SM1_reset_act_partial = tr_2_guard_MoveDown_SM1;
      }
      break;
    case SSM_st_MoveUp_SM1 :
      if (tr_1_guard_MoveUp_SM1) {
        _20_SM1_reset_act_partial = kcg_true;
      }
      else {
        _20_SM1_reset_act_partial = tr_2_guard_MoveUp_SM1;
      }
      break;
    case _38_SSM_st_Initial_SM1 :
      if (tr_1_guard_Initial_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Initial_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_3_guard_Initial_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_StopMotor_SM1 :
      outC->SM1_reset_act = _26_SM1_reset_act_partial;
      break;
    case SSM_st_MoveDown_SM1 :
      outC->SM1_reset_act = _23_SM1_reset_act_partial;
      break;
    case SSM_st_MoveUp_SM1 :
      outC->SM1_reset_act = _20_SM1_reset_act_partial;
      break;
    case _38_SSM_st_Initial_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ActuatorModule_init(outC_ActuatorModule *outC)
{
  outC->SM1_fired = _37_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _37_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _38_SSM_st_Initial_SM1;
  outC->SM1_state_sel = _38_SSM_st_Initial_SM1;
  outC->_L1_StopMotor_SM1 = kcg_lit_int8(0);
  outC->_L2_StopMotor_SM1 = kcg_lit_int8(0);
  outC->_L3_StopMotor_SM1 = Up;
  outC->_L1_MoveDown_SM1 = kcg_lit_int8(0);
  outC->_L2_MoveDown_SM1 = kcg_lit_int8(0);
  outC->_L3_MoveDown_SM1 = Up;
  outC->_L1_MoveUp_SM1 = kcg_lit_int8(0);
  outC->_L2_MoveUp_SM1 = kcg_lit_int8(0);
  outC->_L3_MoveUp_SM1 = Up;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = _38_SSM_st_Initial_SM1;
  outC->Channel1 = kcg_lit_int8(0);
  outC->Channel2 = kcg_lit_int8(0);
  outC->setDirection = None;
  outC->mem_CarMotorStop = kcg_true;
  outC->mem_Move = Stop;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ActuatorModule_reset(outC_ActuatorModule *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = _38_SSM_st_Initial_SM1;
  outC->Channel1 = kcg_lit_int8(0);
  outC->Channel2 = kcg_lit_int8(0);
  outC->setDirection = None;
  outC->mem_CarMotorStop = kcg_true;
  outC->mem_Move = Stop;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ActuatorModule.c
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

