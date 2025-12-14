/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SafetyModule.h"

/* SafetyModule/ */
void SafetyModule(
  /* Channel1/ */
  kcg_int8 Channel1,
  /* Channel2/ */
  kcg_int8 Channel2,
  /* Position/ */
  kcg_int16 Position,
  /* Press3/ */
  kcg_bool Press3,
  /* AtFloor/ */
  kcg_bool AtFloor,
  /* Doors/ */
  kcg_bool Doors,
  /* Speed/ */
  kcg_int16 Speed,
  outC_SafetyModule *outC)
{
  /* CarMotorStop/ */
  kcg_bool CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool SafetyViolation_partial;
  /* timer/ */
  kcg_int16 timer_partial;
  /* StopTimer/ */
  kcg_int16 StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _1_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _2_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _3_timer_partial;
  /* StopTimer/ */
  kcg_int16 _4_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _5_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _7_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _8_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _9_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _10_timer_partial;
  /* StopTimer/ */
  kcg_int16 _11_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _12_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _13_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _14_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _15_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _16_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _17_timer_partial;
  /* StopTimer/ */
  kcg_int16 _18_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _19_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _20_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _21_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _22_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _23_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _24_timer_partial;
  /* StopTimer/ */
  kcg_int16 _25_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _26_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _27_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _28_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _29_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _30_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _31_timer_partial;
  /* StopTimer/ */
  kcg_int16 _32_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _33_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _34_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _35_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _36_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _37_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _38_timer_partial;
  /* StopTimer/ */
  kcg_int16 _39_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _40_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _41_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _42_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _43_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _44_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _45_timer_partial;
  /* StopTimer/ */
  kcg_int16 _46_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _47_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _48_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _49_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _50_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _51_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _52_timer_partial;
  /* StopTimer/ */
  kcg_int16 _53_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _54_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _55_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _56_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _57_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _58_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _59_timer_partial;
  /* StopTimer/ */
  kcg_int16 _60_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _61_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _62_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _63_SM1_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _64_CarMotorStop_partial;
  /* SafetyViolation/ */
  kcg_bool _65_SafetyViolation_partial;
  /* timer/ */
  kcg_int16 _66_timer_partial;
  /* StopTimer/ */
  kcg_int16 _67_StopTimer_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _68_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _69_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _70_SM1_fired_partial;
  /* SM1: */
  _4_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:NormalMode:<9> */
  kcg_bool tr_9_guard_NormalMode_SM1;
  /* SM1:NormalMode:<8> */
  kcg_bool tr_8_guard_NormalMode_SM1;
  /* SM1:NormalMode:<7> */
  kcg_bool tr_7_guard_NormalMode_SM1;
  /* SM1:NormalMode:<6> */
  kcg_bool tr_6_guard_NormalMode_SM1;
  /* SM1:NormalMode:<5> */
  kcg_bool tr_5_guard_NormalMode_SM1;
  /* SM1:NormalMode:<4> */
  kcg_bool tr_4_guard_NormalMode_SM1;
  /* SM1:NormalMode:<3> */
  kcg_bool tr_3_guard_NormalMode_SM1;
  /* SM1:NormalMode:<2> */
  kcg_bool tr_2_guard_NormalMode_SM1;
  /* SM1:NormalMode:<1> */
  kcg_bool tr_1_guard_NormalMode_SM1;
  /* SM1: */
  _4_SSM_ST_SM1 _71_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _72_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _73_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _74_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _75_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _76_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _77_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _78_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _79_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _80_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _81_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _82_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _83_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _84_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _85_SM1_fired_strong_partial;
  /* SM1:Safety1PC:<1> */
  kcg_bool tr_1_guard_Safety1PC_SM1;
  /* SM1: */
  _4_SSM_ST_SM1 _86_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _87_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _88_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _89_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _90_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _91_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _92_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _93_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _94_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _95_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _96_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _97_SM1_fired_strong_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _98_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _99_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _100_SM1_fired_strong_partial;
  /* SM1:Environment3PC:<2> */
  kcg_bool tr_2_guard_Environment3PC_SM1;
  /* SM1:Environment3PC:<1> */
  kcg_bool tr_1_guard_Environment3PC_SM1;
  /* StopTimer/ */
  kcg_int16 last_StopTimer;
  /* timer/ */
  kcg_int16 last_timer;
  /* SafetyViolation/ */
  kcg_bool last_SafetyViolation;
  /* CarMotorStop/ */
  kcg_bool last_CarMotorStop;
  /* Channel2/ */
  kcg_int8 last_Channel2;
  /* Channel1/ */
  kcg_int8 last_Channel1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_Channel1 = outC->mem_Channel1;
  outC->mem_Channel1 = Channel1;
  last_Channel2 = outC->mem_Channel2;
  outC->mem_Channel2 = Channel2;
  last_StopTimer = outC->StopTimer;
  last_timer = outC->timer;
  last_SafetyViolation = outC->SafetyViolation;
  last_CarMotorStop = outC->CarMotorStop;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Environment3PC_SM1 :
      tr_2_guard_Environment3PC_SM1 = last_SafetyViolation == kcg_true;
      tr_1_guard_Environment3PC_SM1 = last_SafetyViolation == kcg_false;
      if (tr_1_guard_Environment3PC_SM1) {
        _98_SM1_state_act_partial = SSM_st_NormalMode_SM1;
      }
      else if (tr_2_guard_Environment3PC_SM1) {
        _98_SM1_state_act_partial = SSM_st_Environment3_SM1;
      }
      else {
        _98_SM1_state_act_partial = SSM_st_Environment3PC_SM1;
      }
      outC->SM1_state_act = _98_SM1_state_act_partial;
      break;
    case SSM_st_Safety1_SM1 :
      _95_SM1_state_act_partial = SSM_st_Safety1_SM1;
      outC->SM1_state_act = _95_SM1_state_act_partial;
      break;
    case SSM_st_Environment3_SM1 :
      _92_SM1_state_act_partial = SSM_st_Environment3_SM1;
      outC->SM1_state_act = _92_SM1_state_act_partial;
      break;
    case SSM_st_Environment2_SM1 :
      _89_SM1_state_act_partial = SSM_st_Environment2_SM1;
      outC->SM1_state_act = _89_SM1_state_act_partial;
      break;
    case SSM_st_Safety5_SM1 :
      _86_SM1_state_act_partial = SSM_st_Safety5_SM1;
      outC->SM1_state_act = _86_SM1_state_act_partial;
      break;
    case SSM_st_Safety1PC_SM1 :
      tr_1_guard_Safety1PC_SM1 = (last_StopTimer > kcg_lit_int16(1)) &
        ((Channel1 == kcg_lit_int8(1)) | (Channel2 == kcg_lit_int8(1)));
      if (tr_1_guard_Safety1PC_SM1) {
        _83_SM1_state_act_partial = SSM_st_Safety1_SM1;
      }
      else {
        _83_SM1_state_act_partial = SSM_st_Safety1PC_SM1;
      }
      outC->SM1_state_act = _83_SM1_state_act_partial;
      break;
    case SSM_st_Safety3_SM1 :
      _80_SM1_state_act_partial = SSM_st_Safety3_SM1;
      outC->SM1_state_act = _80_SM1_state_act_partial;
      break;
    case SSM_st_Safety4_SM1 :
      _77_SM1_state_act_partial = SSM_st_Safety4_SM1;
      outC->SM1_state_act = _77_SM1_state_act_partial;
      break;
    case SSM_st_Safety2_SM1 :
      _74_SM1_state_act_partial = SSM_st_Safety2_SM1;
      outC->SM1_state_act = _74_SM1_state_act_partial;
      break;
    case SSM_st_Environment1_SM1 :
      _71_SM1_state_act_partial = SSM_st_Environment1_SM1;
      outC->SM1_state_act = _71_SM1_state_act_partial;
      break;
    case SSM_st_NormalMode_SM1 :
      tr_9_guard_NormalMode_SM1 = (last_timer == kcg_lit_int16(10)) &
        (Position == kcg_lit_int16(800)) & (Channel1 == kcg_lit_int8(1));
      tr_8_guard_NormalMode_SM1 = (last_timer == kcg_lit_int16(10)) & (Doors ==
          kcg_false) & ((AtFloor == kcg_false) | (Channel1 == kcg_lit_int8(1)) |
          (Channel2 == kcg_lit_int8(1)));
      tr_7_guard_NormalMode_SM1 = (last_timer == kcg_lit_int16(10)) & (Press3 ==
          kcg_true);
      tr_6_guard_NormalMode_SM1 = (last_timer == kcg_lit_int16(10)) &
        (AtFloor == kcg_true) & (Doors == kcg_false) & ((Channel1 ==
            kcg_lit_int8(1)) | (Channel2 == kcg_lit_int8(1)));
      tr_5_guard_NormalMode_SM1 = (last_timer == kcg_lit_int16(10)) &
        (Channel1 == kcg_lit_int8(1)) & (Channel2 == kcg_lit_int8(1));
      tr_4_guard_NormalMode_SM1 = (last_timer == kcg_lit_int16(10)) &
        (Position == kcg_lit_int16(0)) & (Channel2 == kcg_lit_int8(1));
      tr_3_guard_NormalMode_SM1 = (last_timer == kcg_lit_int16(10)) & (Speed >
          kcg_lit_int16(50));
      tr_2_guard_NormalMode_SM1 = last_timer == kcg_lit_int16(10);
      tr_1_guard_NormalMode_SM1 = (last_timer == kcg_lit_int16(10)) &
        ((Press3 == kcg_true) | (AtFloor == kcg_true));
      if (tr_1_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Safety5_SM1;
      }
      else if (tr_2_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Environment3PC_SM1;
      }
      else if (tr_3_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Environment2_SM1;
      }
      else if (tr_4_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Safety4_SM1;
      }
      else if (tr_5_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Safety2_SM1;
      }
      else if (tr_6_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Safety3_SM1;
      }
      else if (tr_7_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Safety1PC_SM1;
      }
      else if (tr_8_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Environment1_SM1;
      }
      else if (tr_9_guard_NormalMode_SM1) {
        SM1_state_act_partial = SSM_st_Safety4_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_NormalMode_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Environment3PC_SM1 :
      _67_StopTimer_partial = kcg_lit_int16(0);
      _66_timer_partial = kcg_lit_int16(0);
      _64_CarMotorStop_partial = kcg_true;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Environment3PC_SM1 :
      if (tr_1_guard_Environment3PC_SM1) {
        _100_SM1_fired_strong_partial =
          SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1;
      }
      else if (tr_2_guard_Environment3PC_SM1) {
        _100_SM1_fired_strong_partial =
          SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1;
      }
      else {
        _100_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _100_SM1_fired_strong_partial;
      break;
    case SSM_st_Safety1_SM1 :
      _97_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _97_SM1_fired_strong_partial;
      break;
    case SSM_st_Environment3_SM1 :
      _94_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _94_SM1_fired_strong_partial;
      break;
    case SSM_st_Environment2_SM1 :
      _91_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _91_SM1_fired_strong_partial;
      break;
    case SSM_st_Safety5_SM1 :
      _88_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _88_SM1_fired_strong_partial;
      break;
    case SSM_st_Safety1PC_SM1 :
      if (tr_1_guard_Safety1PC_SM1) {
        _85_SM1_fired_strong_partial = SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1;
      }
      else {
        _85_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _85_SM1_fired_strong_partial;
      break;
    case SSM_st_Safety3_SM1 :
      _82_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _82_SM1_fired_strong_partial;
      break;
    case SSM_st_Safety4_SM1 :
      _79_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _79_SM1_fired_strong_partial;
      break;
    case SSM_st_Safety2_SM1 :
      _76_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _76_SM1_fired_strong_partial;
      break;
    case SSM_st_Environment1_SM1 :
      _73_SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _73_SM1_fired_strong_partial;
      break;
    case SSM_st_NormalMode_SM1 :
      if (tr_1_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Safety5_1_NormalMode_SM1;
      }
      else if (tr_2_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1;
      }
      else if (tr_3_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Environment2_3_NormalMode_SM1;
      }
      else if (tr_4_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Safety4_4_NormalMode_SM1;
      }
      else if (tr_5_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Safety2_5_NormalMode_SM1;
      }
      else if (tr_6_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Safety3_6_NormalMode_SM1;
      }
      else if (tr_7_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1;
      }
      else if (tr_8_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Environment1_8_NormalMode_SM1;
      }
      else if (tr_9_guard_NormalMode_SM1) {
        SM1_fired_strong_partial = SSM_TR_NormalMode_Safety4_9_NormalMode_SM1;
      }
      else {
        SM1_fired_strong_partial = _35_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Environment3PC_SM1 :
      _70_SM1_fired_partial = outC->SM1_fired_strong;
      _69_SM1_reset_nxt_partial = kcg_false;
      _68_SM1_state_nxt_partial = SSM_st_Environment3PC_SM1;
      outC->_L8_Environment3PC_SM1 = AtFloor;
      outC->_L6_Environment3PC_SM1 = Position;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Environment3PC_SM1 :
      if (tr_1_guard_Environment3PC_SM1) {
        _99_SM1_reset_act_partial = kcg_true;
      }
      else {
        _99_SM1_reset_act_partial = tr_2_guard_Environment3PC_SM1;
      }
      outC->SM1_reset_act = _99_SM1_reset_act_partial;
      break;
    case SSM_st_Safety1_SM1 :
      _96_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _96_SM1_reset_act_partial;
      break;
    case SSM_st_Environment3_SM1 :
      _93_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _93_SM1_reset_act_partial;
      break;
    case SSM_st_Environment2_SM1 :
      _90_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _90_SM1_reset_act_partial;
      break;
    case SSM_st_Safety5_SM1 :
      _87_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _87_SM1_reset_act_partial;
      break;
    case SSM_st_Safety1PC_SM1 :
      _84_SM1_reset_act_partial = tr_1_guard_Safety1PC_SM1;
      outC->SM1_reset_act = _84_SM1_reset_act_partial;
      break;
    case SSM_st_Safety3_SM1 :
      _81_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _81_SM1_reset_act_partial;
      break;
    case SSM_st_Safety4_SM1 :
      _78_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _78_SM1_reset_act_partial;
      break;
    case SSM_st_Safety2_SM1 :
      _75_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _75_SM1_reset_act_partial;
      break;
    case SSM_st_Environment1_SM1 :
      _72_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _72_SM1_reset_act_partial;
      break;
    case SSM_st_NormalMode_SM1 :
      if (tr_1_guard_NormalMode_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_NormalMode_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_NormalMode_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_4_guard_NormalMode_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_5_guard_NormalMode_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_6_guard_NormalMode_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_7_guard_NormalMode_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_8_guard_NormalMode_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_9_guard_NormalMode_SM1;
      }
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Environment3PC_SM1 :
      if (outC->SM1_reset_act) {
        /* SM1:Environment3PC:_L9=(FloorsLocation#1)/ */
        FloorsLocation_reset(&outC->Context_FloorsLocation_1);
      }
      /* SM1:Environment3PC:_L9=(FloorsLocation#1)/ */
      FloorsLocation(
        outC->_L8_Environment3PC_SM1,
        outC->_L6_Environment3PC_SM1,
        &outC->Context_FloorsLocation_1);
      outC->_L9_Environment3PC_SM1 = outC->Context_FloorsLocation_1.SafetyViolation;
      _65_SafetyViolation_partial = outC->_L9_Environment3PC_SM1;
      outC->CarMotorStop = _64_CarMotorStop_partial;
      outC->SafetyViolation = _65_SafetyViolation_partial;
      outC->timer = _66_timer_partial;
      outC->StopTimer = _67_StopTimer_partial;
      outC->SM1_state_nxt = _68_SM1_state_nxt_partial;
      break;
    case SSM_st_Safety1_SM1 :
      _60_StopTimer_partial = kcg_lit_int16(0);
      _59_timer_partial = kcg_lit_int16(0);
      _58_SafetyViolation_partial = kcg_false;
      _63_SM1_fired_partial = outC->SM1_fired_strong;
      _62_SM1_reset_nxt_partial = kcg_false;
      _61_SM1_state_nxt_partial = SSM_st_Safety1_SM1;
      outC->_L2_Safety1_SM1 = kcg_true;
      _57_CarMotorStop_partial = outC->_L2_Safety1_SM1;
      outC->CarMotorStop = _57_CarMotorStop_partial;
      outC->SafetyViolation = _58_SafetyViolation_partial;
      outC->timer = _59_timer_partial;
      outC->StopTimer = _60_StopTimer_partial;
      outC->SM1_state_nxt = _61_SM1_state_nxt_partial;
      break;
    case SSM_st_Environment3_SM1 :
      _53_StopTimer_partial = kcg_lit_int16(0);
      _52_timer_partial = kcg_lit_int16(0);
      _51_SafetyViolation_partial = kcg_false;
      _56_SM1_fired_partial = outC->SM1_fired_strong;
      _55_SM1_reset_nxt_partial = kcg_false;
      _54_SM1_state_nxt_partial = SSM_st_Environment3_SM1;
      outC->_L3_Environment3_SM1 = kcg_true;
      _50_CarMotorStop_partial = outC->_L3_Environment3_SM1;
      outC->CarMotorStop = _50_CarMotorStop_partial;
      outC->SafetyViolation = _51_SafetyViolation_partial;
      outC->timer = _52_timer_partial;
      outC->StopTimer = _53_StopTimer_partial;
      outC->SM1_state_nxt = _54_SM1_state_nxt_partial;
      break;
    case SSM_st_Environment2_SM1 :
      _46_StopTimer_partial = kcg_lit_int16(0);
      _45_timer_partial = kcg_lit_int16(0);
      _44_SafetyViolation_partial = kcg_false;
      _49_SM1_fired_partial = outC->SM1_fired_strong;
      _48_SM1_reset_nxt_partial = kcg_false;
      _47_SM1_state_nxt_partial = SSM_st_Environment2_SM1;
      outC->_L2_Environment2_SM1 = kcg_true;
      _43_CarMotorStop_partial = outC->_L2_Environment2_SM1;
      outC->CarMotorStop = _43_CarMotorStop_partial;
      outC->SafetyViolation = _44_SafetyViolation_partial;
      outC->timer = _45_timer_partial;
      outC->StopTimer = _46_StopTimer_partial;
      outC->SM1_state_nxt = _47_SM1_state_nxt_partial;
      break;
    case SSM_st_Safety5_SM1 :
      _39_StopTimer_partial = kcg_lit_int16(0);
      _38_timer_partial = kcg_lit_int16(0);
      _37_SafetyViolation_partial = kcg_false;
      _42_SM1_fired_partial = outC->SM1_fired_strong;
      _41_SM1_reset_nxt_partial = kcg_false;
      _40_SM1_state_nxt_partial = SSM_st_Safety5_SM1;
      outC->_L3_Safety5_SM1 = kcg_true;
      _36_CarMotorStop_partial = outC->_L3_Safety5_SM1;
      outC->CarMotorStop = _36_CarMotorStop_partial;
      outC->SafetyViolation = _37_SafetyViolation_partial;
      outC->timer = _38_timer_partial;
      outC->StopTimer = _39_StopTimer_partial;
      outC->SM1_state_nxt = _40_SM1_state_nxt_partial;
      break;
    case SSM_st_Safety1PC_SM1 :
      _31_timer_partial = kcg_lit_int16(0);
      _30_SafetyViolation_partial = kcg_false;
      _29_CarMotorStop_partial = kcg_true;
      _35_SM1_fired_partial = outC->SM1_fired_strong;
      _34_SM1_reset_nxt_partial = kcg_false;
      _33_SM1_state_nxt_partial = SSM_st_Safety1PC_SM1;
      if (outC->SM1_reset_act) {
        /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_reset(&outC->Context_Counter_17);
      }
      /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter(&outC->Context_Counter_17);
      outC->_L3_Safety1PC_SM1 = outC->Context_Counter_17.Output;
      _32_StopTimer_partial = outC->_L3_Safety1PC_SM1;
      outC->CarMotorStop = _29_CarMotorStop_partial;
      outC->SafetyViolation = _30_SafetyViolation_partial;
      outC->timer = _31_timer_partial;
      outC->StopTimer = _32_StopTimer_partial;
      outC->SM1_state_nxt = _33_SM1_state_nxt_partial;
      break;
    case SSM_st_Safety3_SM1 :
      _25_StopTimer_partial = kcg_lit_int16(0);
      _24_timer_partial = kcg_lit_int16(0);
      _23_SafetyViolation_partial = kcg_false;
      _28_SM1_fired_partial = outC->SM1_fired_strong;
      _27_SM1_reset_nxt_partial = kcg_false;
      _26_SM1_state_nxt_partial = SSM_st_Safety3_SM1;
      outC->_L2_Safety3_SM1 = kcg_true;
      _22_CarMotorStop_partial = outC->_L2_Safety3_SM1;
      outC->CarMotorStop = _22_CarMotorStop_partial;
      outC->SafetyViolation = _23_SafetyViolation_partial;
      outC->timer = _24_timer_partial;
      outC->StopTimer = _25_StopTimer_partial;
      outC->SM1_state_nxt = _26_SM1_state_nxt_partial;
      break;
    case SSM_st_Safety4_SM1 :
      _18_StopTimer_partial = kcg_lit_int16(0);
      _17_timer_partial = kcg_lit_int16(0);
      _16_SafetyViolation_partial = kcg_false;
      _21_SM1_fired_partial = outC->SM1_fired_strong;
      _20_SM1_reset_nxt_partial = kcg_false;
      _19_SM1_state_nxt_partial = SSM_st_Safety4_SM1;
      outC->_L2_Safety4_SM1 = kcg_true;
      _15_CarMotorStop_partial = outC->_L2_Safety4_SM1;
      outC->CarMotorStop = _15_CarMotorStop_partial;
      outC->SafetyViolation = _16_SafetyViolation_partial;
      outC->timer = _17_timer_partial;
      outC->StopTimer = _18_StopTimer_partial;
      outC->SM1_state_nxt = _19_SM1_state_nxt_partial;
      break;
    case SSM_st_Safety2_SM1 :
      _11_StopTimer_partial = kcg_lit_int16(0);
      _10_timer_partial = kcg_lit_int16(0);
      _9_SafetyViolation_partial = kcg_false;
      _14_SM1_fired_partial = outC->SM1_fired_strong;
      _13_SM1_reset_nxt_partial = kcg_false;
      _12_SM1_state_nxt_partial = SSM_st_Safety2_SM1;
      outC->_L1_Safety2_SM1 = kcg_true;
      _8_CarMotorStop_partial = outC->_L1_Safety2_SM1;
      outC->CarMotorStop = _8_CarMotorStop_partial;
      outC->SafetyViolation = _9_SafetyViolation_partial;
      outC->timer = _10_timer_partial;
      outC->StopTimer = _11_StopTimer_partial;
      outC->SM1_state_nxt = _12_SM1_state_nxt_partial;
      break;
    case SSM_st_Environment1_SM1 :
      _4_StopTimer_partial = kcg_lit_int16(0);
      _3_timer_partial = kcg_lit_int16(0);
      _2_SafetyViolation_partial = kcg_false;
      _7_SM1_fired_partial = outC->SM1_fired_strong;
      _6_SM1_reset_nxt_partial = kcg_false;
      _5_SM1_state_nxt_partial = SSM_st_Environment1_SM1;
      outC->_L2_Environment1_SM1 = kcg_true;
      _1_CarMotorStop_partial = outC->_L2_Environment1_SM1;
      outC->CarMotorStop = _1_CarMotorStop_partial;
      outC->SafetyViolation = _2_SafetyViolation_partial;
      outC->timer = _3_timer_partial;
      outC->StopTimer = _4_StopTimer_partial;
      outC->SM1_state_nxt = _5_SM1_state_nxt_partial;
      break;
    case SSM_st_NormalMode_SM1 :
      StopTimer_partial = kcg_lit_int16(0);
      SafetyViolation_partial = kcg_false;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_NormalMode_SM1;
      if (outC->SM1_reset_act) {
        /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_reset(&outC->Context_Counter_6);
      }
      /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter(&outC->Context_Counter_6);
      outC->_L4_NormalMode_SM1 = outC->Context_Counter_6.Output;
      timer_partial = outC->_L4_NormalMode_SM1;
      outC->_L1_NormalMode_SM1 = kcg_false;
      CarMotorStop_partial = outC->_L1_NormalMode_SM1;
      outC->CarMotorStop = CarMotorStop_partial;
      outC->SafetyViolation = SafetyViolation_partial;
      outC->timer = timer_partial;
      outC->StopTimer = StopTimer_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Environment3PC_SM1 :
      outC->SM1_reset_nxt = _69_SM1_reset_nxt_partial;
      outC->SM1_fired = _70_SM1_fired_partial;
      break;
    case SSM_st_Safety1_SM1 :
      outC->SM1_reset_nxt = _62_SM1_reset_nxt_partial;
      outC->SM1_fired = _63_SM1_fired_partial;
      break;
    case SSM_st_Environment3_SM1 :
      outC->SM1_reset_nxt = _55_SM1_reset_nxt_partial;
      outC->SM1_fired = _56_SM1_fired_partial;
      break;
    case SSM_st_Environment2_SM1 :
      outC->SM1_reset_nxt = _48_SM1_reset_nxt_partial;
      outC->SM1_fired = _49_SM1_fired_partial;
      break;
    case SSM_st_Safety5_SM1 :
      outC->SM1_reset_nxt = _41_SM1_reset_nxt_partial;
      outC->SM1_fired = _42_SM1_fired_partial;
      break;
    case SSM_st_Safety1PC_SM1 :
      outC->SM1_reset_nxt = _34_SM1_reset_nxt_partial;
      outC->SM1_fired = _35_SM1_fired_partial;
      break;
    case SSM_st_Safety3_SM1 :
      outC->SM1_reset_nxt = _27_SM1_reset_nxt_partial;
      outC->SM1_fired = _28_SM1_fired_partial;
      break;
    case SSM_st_Safety4_SM1 :
      outC->SM1_reset_nxt = _20_SM1_reset_nxt_partial;
      outC->SM1_fired = _21_SM1_fired_partial;
      break;
    case SSM_st_Safety2_SM1 :
      outC->SM1_reset_nxt = _13_SM1_reset_nxt_partial;
      outC->SM1_fired = _14_SM1_fired_partial;
      break;
    case SSM_st_Environment1_SM1 :
      outC->SM1_reset_nxt = _6_SM1_reset_nxt_partial;
      outC->SM1_fired = _7_SM1_fired_partial;
      break;
    case SSM_st_NormalMode_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SafetyModule_init(outC_SafetyModule *outC)
{
  outC->SM1_fired = _35_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _35_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_NormalMode_SM1;
  outC->SM1_state_sel = SSM_st_NormalMode_SM1;
  outC->_L6_Environment3PC_SM1 = kcg_lit_int16(0);
  outC->_L8_Environment3PC_SM1 = kcg_true;
  outC->_L9_Environment3PC_SM1 = kcg_true;
  outC->_L2_Safety1_SM1 = kcg_true;
  outC->_L3_Environment3_SM1 = kcg_true;
  outC->_L2_Environment2_SM1 = kcg_true;
  outC->_L3_Safety5_SM1 = kcg_true;
  outC->_L3_Safety1PC_SM1 = kcg_lit_int16(0);
  outC->_L2_Safety3_SM1 = kcg_true;
  outC->_L2_Safety4_SM1 = kcg_true;
  outC->_L1_Safety2_SM1 = kcg_true;
  outC->_L2_Environment1_SM1 = kcg_true;
  outC->_L1_NormalMode_SM1 = kcg_true;
  outC->_L4_NormalMode_SM1 = kcg_lit_int16(0);
  /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_init(&outC->Context_Counter_6);
  /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_init(&outC->Context_Counter_17);
  /* SM1:Environment3PC:_L9=(FloorsLocation#1)/ */
  FloorsLocation_init(&outC->Context_FloorsLocation_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_NormalMode_SM1;
  outC->CarMotorStop = kcg_true;
  outC->SafetyViolation = kcg_false;
  outC->timer = kcg_lit_int16(0);
  outC->StopTimer = kcg_lit_int16(0);
  outC->mem_Channel2 = kcg_lit_int8(0);
  outC->mem_Channel1 = kcg_lit_int8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SafetyModule_reset(outC_SafetyModule *outC)
{
  /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_reset(&outC->Context_Counter_6);
  /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_reset(&outC->Context_Counter_17);
  /* SM1:Environment3PC:_L9=(FloorsLocation#1)/ */
  FloorsLocation_reset(&outC->Context_FloorsLocation_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_NormalMode_SM1;
  outC->CarMotorStop = kcg_true;
  outC->SafetyViolation = kcg_false;
  outC->timer = kcg_lit_int16(0);
  outC->StopTimer = kcg_lit_int16(0);
  outC->mem_Channel2 = kcg_lit_int8(0);
  outC->mem_Channel1 = kcg_lit_int8(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SafetyModule.c
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

