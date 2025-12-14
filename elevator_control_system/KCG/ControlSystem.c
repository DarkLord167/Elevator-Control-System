/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ControlSystem.h"

/* ControlSystem/ */
void ControlSystem(inC_ControlSystem *inC, outC_ControlSystem *outC)
{
  kcg_bool tmp;
  /* @5/Position/, _L70/ */
  kcg_int16 _L70;
  /* @8/Move/, _L48/ */
  PDirection _L48;
  /* @2/SM1:MovingUp:<1>,
     @5/Doors/,
     @8/Doors/,
     @9/SM3:Floor1Button4:<2>,
     _L49/,
     _L92/ */
  kcg_bool _L49;
  /* @8/Press0/, @9/Press0/, @9/SM4:Floor1Button4:<1>, _L42/ */
  kcg_bool _L42;
  /* @1/SM1: */
  SSM_ST_SM1 SM1_state_act_ActuatorModule_2;
  /* @2/SM1:MovingUp1:<2> */
  kcg_bool tr_2_guard_PositionProcessor_2_MovingUp1_SM1;
  /* @2/SM1:State4:<4>, @5/SM1: */
  kcg_bool tr_4_guard_PositionProcessor_2_State4_SM1;
  /* @2/SM1:State4:<2>, @5/SM1:NormalMode:<9> */
  kcg_bool _1_tr_2_guard_PositionProcessor_2_State4_SM1;
  /* @2/SM1:State4:<1>, @5/SM1:NormalMode:<8> */
  kcg_bool tr_1_clock_PositionProcessor_2_State4_SM1;
  /* @2/SM1:WaintingForNegPulse:<3>, @5/SM1:NormalMode:<7> */
  kcg_bool tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1;
  /* @2/SM1:WaintingForNegPulse:<2>, @5/SM1:NormalMode:<6> */
  kcg_bool _2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1;
  /* @2/SM1:WaintingForNegPulse:<1>, @5/SM1:NormalMode:<5> */
  kcg_bool _3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1;
  /* @2/SM1: */
  _2_SSM_ST_SM1 SM1_state_act_PositionProcessor_2;
  /* @2/SM1:, @5/SM1:NormalMode:<4> */
  kcg_bool SM1_reset_act_PositionProcessor_2;
  /* @5/SM1: */
  _4_SSM_ST_SM1 SM1_state_act_SafetyModule_2;
  /* @2/SM1:MovingUp1:<1>,
     @5/Press3/,
     @8/Press3/,
     @9/Press3/,
     @9/SM4:Floor1Button4:<2>,
     _L45/ */
  kcg_bool Press3_SafetyModule_2;
  /* @8/PlanningModule: */
  SSM_ST_PlanningModule PlanningModule_state_act_PlanningModule_2;
  /* @8/SM2: */
  SSM_ST_SM2 SM2_state_act_PlanningModule_2;
  /* @5/SM1:NormalMode:<2>, @9/SM5:Floor1Button4:<2> */
  kcg_bool tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5;
  /* @2/SM1:MovingUp:<2>, @5/SM1:NormalMode:<1>, @9/SM5:Floor1Button4:<1> */
  kcg_bool tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5;
  /* @8/Press1/,
     @9/Press1/,
     @9/SM1:Floor1Button4:<1>,
     @9/SM6:Floor1Button4:<2>,
     _L43/ */
  kcg_bool _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1;
  /* @2/SM1:State4:<3>,
     @5/AtFloor/,
     @8/AtFloor/,
     @9/SM2:Floor1Button4:<2>,
     @9/SM3:Floor1Button4:<1>,
     _L50/ */
  kcg_bool _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3;
  /* @9/SM2: */
  _8_SSM_ST_SM2 SM2_state_act_ButtonProcessor_2;
  /* @9/SM2:, @9/SM6: */
  kcg_bool SM2_reset_act_ButtonProcessor_2;
  /* @9/SM3: */
  SSM_ST_SM3 SM3_state_act_ButtonProcessor_2;
  /* @9/SM2:Floor1Button4:<1>, @9/SM3: */
  kcg_bool SM3_reset_act_ButtonProcessor_2;
  /* @9/SM4: */
  SSM_ST_SM4 SM4_state_act_ButtonProcessor_2;
  /* @9/SM1:Floor1Button4:<2>, @9/SM4: */
  kcg_bool SM4_reset_act_ButtonProcessor_2;
  /* @9/SM1: */
  _10_SSM_ST_SM1 SM1_state_act_ButtonProcessor_2;
  /* @9/SM1:, @9/SM6:Floor1Button4:<1> */
  kcg_bool SM1_reset_act_ButtonProcessor_2;
  /* @9/SM5: */
  SSM_ST_SM5 SM5_state_act_ButtonProcessor_2;
  /* @5/SM1:Environment3PC:<1>, @9/SM5: */
  kcg_bool SM5_reset_act_ButtonProcessor_2;
  /* @9/SM6: */
  SSM_ST_SM6 SM6_state_act_ButtonProcessor_2;

  /* @9/SM6: */
  switch (outC->SM6_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM6 :
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = !inC->GPIOC3;
      SM1_reset_act_ButtonProcessor_2 = inC->GPIOC3 &
        (outC->Timer5_ButtonProcessor_2 == kcg_lit_int16(10));
      if (SM1_reset_act_ButtonProcessor_2) {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM6;
      }
      else if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1) {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
      }
      else {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM6;
      }
      SM2_reset_act_ButtonProcessor_2 = SM1_reset_act_ButtonProcessor_2 |
        _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1;
      break;
    case SSM_st_Floor1Button11_SM6 :
      SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
      SM2_reset_act_ButtonProcessor_2 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM6 :
      if (inC->GPIOC3) {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM6;
      }
      else {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
      }
      SM2_reset_act_ButtonProcessor_2 = inC->GPIOC3;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM1: */
  switch (outC->SM1_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM1 :
      SM4_reset_act_ButtonProcessor_2 = !inC->GPIOC1;
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = inC->GPIOC1 &
        (outC->Timer3_ButtonProcessor_2 == kcg_lit_int16(10));
      if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1) {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM1;
      }
      else if (SM4_reset_act_ButtonProcessor_2) {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
      }
      else {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM1;
      }
      SM1_reset_act_ButtonProcessor_2 =
        _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 |
        SM4_reset_act_ButtonProcessor_2;
      break;
    case SSM_st_Floor1Button11_SM1 :
      SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
      SM1_reset_act_ButtonProcessor_2 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM1 :
      if (inC->GPIOC1) {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM1;
      }
      else {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
      }
      SM1_reset_act_ButtonProcessor_2 = inC->GPIOC1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM1: */
  switch (SM1_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM1 :
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM1 :
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM1 :
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM4: */
  switch (outC->SM4_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM4 :
      Press3_SafetyModule_2 = !inC->GPIOC0;
      _L42 = inC->GPIOC0 & (outC->Timer2_ButtonProcessor_2 == kcg_lit_int16(10));
      if (_L42) {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM4;
      }
      else if (Press3_SafetyModule_2) {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
      }
      else {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM4;
      }
      SM4_reset_act_ButtonProcessor_2 = _L42 | Press3_SafetyModule_2;
      break;
    case SSM_st_Floor1Button11_SM4 :
      SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
      SM4_reset_act_ButtonProcessor_2 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM4 :
      if (inC->GPIOC0) {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM4;
      }
      else {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
      }
      SM4_reset_act_ButtonProcessor_2 = inC->GPIOC0;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM4: */
  switch (SM4_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM4 :
      _L42 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM4 :
      _L42 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM4 :
      _L42 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM6: */
  switch (SM6_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM6 :
      Press3_SafetyModule_2 = kcg_false;
      if (SM2_reset_act_ButtonProcessor_2) {
        outC->init = kcg_true;
      }
      outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM6;
      /* @15/x/ */
      if (outC->init) {
        outC->_L1_Counter_16_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_16_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_16_ButtonProcessor_2;
      }
      outC->Timer5_ButtonProcessor_2 = outC->_L1_Counter_16_ButtonProcessor_2;
      outC->init = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM6 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM6;
      break;
    case SSM_st_Floor1Button10_SM6 :
      Press3_SafetyModule_2 = kcg_false;
      outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @8/PlanningModule: */
  switch (outC->PlanningModule_state_nxt_PlanningModule_2) {
    case SSM_st_Stop_PlanningModule :
      PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(0)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
      }
      else if (outC->_L52 > kcg_lit_int16(0)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin2To1_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin2To1_PlanningModule;
      }
      break;
    case SSM_st_Moving3To2_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(400)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor2_PlanningModule;
      }
      else if (outC->_L52 > kcg_lit_int16(400)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To2_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To2_PlanningModule;
      }
      break;
    case SSM_st_Moving3To1_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(0)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
      }
      else if (outC->_L52 > kcg_lit_int16(0)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To1_PlanningModule;
      }
      else if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 & (outC->_L52 >
          kcg_lit_int16(600))) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To2_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To1_PlanningModule;
      }
      break;
    case SSM_st_Moving2To3_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(800)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor3_PlanningModule;
      }
      else if (outC->_L52 < kcg_lit_int16(800)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving2To3_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving2To3_PlanningModule;
      }
      break;
    case SSM_st_Movin1To3_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(800)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor3_PlanningModule;
      }
      else if (outC->_L52 < kcg_lit_int16(800)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To3_PlanningModule;
      }
      else if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 & (outC->_L52 <
          kcg_lit_int16(200))) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To2_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To3_PlanningModule;
      }
      break;
    case SSM_st_Floor3_PlanningModule :
      if (outC->F1BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To1_PlanningModule;
      }
      else if (outC->F2BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To2_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor3_PlanningModule;
      }
      break;
    case SSM_st_Floor2_PlanningModule :
      if (outC->F3BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving2To3_PlanningModule;
      }
      else if (_L42) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin2To1_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor2_PlanningModule;
      }
      break;
    case SSM_st_Movin1To2_PlanningModule :
      if (outC->_L52 < kcg_lit_int16(400)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To2_PlanningModule;
      }
      else if (outC->_L52 == kcg_lit_int16(400)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor2_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To2_PlanningModule;
      }
      break;
    case SSM_st_Floor1_PlanningModule :
      if (outC->F2BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To2_PlanningModule;
      }
      else if (outC->F3BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To3_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _L70= */
  if (outC->init10) {
    outC->init10 = kcg_false;
    _L70 = kcg_lit_int16(0);
  }
  else {
    _L70 = outC->_L52;
  }
  /* @9/SM2: */
  switch (outC->SM2_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM2 :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = !inC->GPIOC8;
      SM3_reset_act_ButtonProcessor_2 = inC->GPIOC8 &
        (outC->Timer0_ButtonProcessor_2 == kcg_lit_int16(10));
      if (SM3_reset_act_ButtonProcessor_2) {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM2;
      }
      else if (_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3) {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
      }
      else {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM2;
      }
      SM2_reset_act_ButtonProcessor_2 = SM3_reset_act_ButtonProcessor_2 |
        _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3;
      break;
    case SSM_st_Floor1Button11_SM2 :
      SM2_reset_act_ButtonProcessor_2 = !inC->GPIOC8;
      if (SM2_reset_act_ButtonProcessor_2) {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
      }
      else {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM2;
      }
      break;
    case SSM_st_Floor1Button10_SM2 :
      if (inC->GPIOC8) {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM2;
      }
      else {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
      }
      SM2_reset_act_ButtonProcessor_2 = inC->GPIOC8;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM3: */
  switch (outC->SM3_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM3 :
      _L49 = !inC->GPIOC7;
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = inC->GPIOC7 &
        (outC->Timer1_ButtonProcessor_2 == kcg_lit_int16(10));
      if (_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3) {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM3;
      }
      else if (_L49) {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
      }
      else {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM3;
      }
      SM3_reset_act_ButtonProcessor_2 =
        _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 | _L49;
      break;
    case SSM_st_Floor1Button11_SM3 :
      SM3_reset_act_ButtonProcessor_2 = !inC->GPIOC7;
      if (SM3_reset_act_ButtonProcessor_2) {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
      }
      else {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM3;
      }
      break;
    case SSM_st_Floor1Button10_SM3 :
      if (inC->GPIOC7) {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM3;
      }
      else {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
      }
      SM3_reset_act_ButtonProcessor_2 = inC->GPIOC7;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @8/PlanningModule: */
  switch (PlanningModule_state_act_PlanningModule_2) {
    case SSM_st_Stop_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_true;
      _L48 = Stop;
      outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Downward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Movin2To1_PlanningModule;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Downward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Moving3To2_PlanningModule;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Downward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Moving3To1_PlanningModule;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Upward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Moving2To3_PlanningModule;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Upward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Movin1To3_PlanningModule;
      break;
    case SSM_st_Floor3_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_true;
      _L49 = kcg_false;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_true;
      _L48 = Stop;
      outC->F3BR_PlanningModule_2 = kcg_false;
      outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor3_PlanningModule;
      break;
    case SSM_st_Floor2_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_true;
      _L49 = kcg_false;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_true;
      _L48 = Stop;
      outC->F2BR_PlanningModule_2 = kcg_false;
      outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor2_PlanningModule;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Upward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Movin1To2_PlanningModule;
      break;
    case SSM_st_Floor1_PlanningModule :
      /* @9/SM2: */
      switch (SM2_state_act_ButtonProcessor_2) {
        case SSM_st_Floor1Button4_SM2 :
          _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_true;
          break;
        case SSM_st_Floor1Button11_SM2 :
          _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_true;
          break;
        case SSM_st_Floor1Button10_SM2 :
          _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* @9/SM3: */
      switch (SM3_state_act_ButtonProcessor_2) {
        case SSM_st_Floor1Button4_SM3 :
          _L49 = kcg_false;
          break;
        case SSM_st_Floor1Button11_SM3 :
          _L49 = kcg_true;
          break;
        case SSM_st_Floor1Button10_SM3 :
          _L49 = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_true;
      _L48 = Stop;
      outC->F1BR_PlanningModule_2 = kcg_false;
      outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @5/SM1: */
  switch (outC->SM1_state_nxt_SafetyModule_2) {
    case SSM_st_Environment3PC_SM1 :
      SM5_reset_act_ButtonProcessor_2 = !outC->SafetyViolation_SafetyModule_2;
      if (SM5_reset_act_ButtonProcessor_2) {
        SM1_state_act_SafetyModule_2 = SSM_st_NormalMode_SM1;
      }
      else if (outC->SafetyViolation_SafetyModule_2) {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment3_SM1;
      }
      else {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment3PC_SM1;
      }
      tr_4_guard_PositionProcessor_2_State4_SM1 =
        SM5_reset_act_ButtonProcessor_2 | outC->SafetyViolation_SafetyModule_2;
      break;
    case SSM_st_Safety1_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety1_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Environment3_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Environment3_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Environment2_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Environment2_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Safety5_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety5_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Safety1PC_SM1 :
      tr_4_guard_PositionProcessor_2_State4_SM1 =
        (outC->StopTimer_SafetyModule_2 > kcg_lit_int16(1)) & ((outC->_L55 ==
            kcg_lit_int8(1)) | (outC->_L56 == kcg_lit_int8(1)));
      if (tr_4_guard_PositionProcessor_2_State4_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety1_SM1;
      }
      else {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety1PC_SM1;
      }
      break;
    case SSM_st_Safety3_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety3_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Safety4_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety4_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Safety2_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety2_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Environment1_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Environment1_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_NormalMode_SM1 :
      tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 =
        outC->timer_SafetyModule_2 == kcg_lit_int16(10);
      _1_tr_2_guard_PositionProcessor_2_State4_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (_L70 == kcg_lit_int16(800)) &
        (outC->_L55 == kcg_lit_int8(1));
      tr_1_clock_PositionProcessor_2_State4_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (!_L49) &
        ((!_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3) | (outC->_L55 ==
            kcg_lit_int8(1)) | (outC->_L56 == kcg_lit_int8(1)));
      tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & Press3_SafetyModule_2;
      _2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 &
        _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 & (!_L49) &
        ((outC->_L55 == kcg_lit_int8(1)) | (outC->_L56 == kcg_lit_int8(1)));
      _3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (outC->_L55 ==
          kcg_lit_int8(1)) & (outC->_L56 == kcg_lit_int8(1));
      SM1_reset_act_PositionProcessor_2 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (_L70 == kcg_lit_int16(0)) &
        (outC->_L56 == kcg_lit_int8(1));
      tmp = tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (outC->_L54 >
          kcg_lit_int16(50));
      tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 &
        (Press3_SafetyModule_2 | _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3);
      if (tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety5_SM1;
      }
      else if (tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment3PC_SM1;
      }
      else if (tmp) {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment2_SM1;
      }
      else if (SM1_reset_act_PositionProcessor_2) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety4_SM1;
      }
      else if (_3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety2_SM1;
      }
      else if (_2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety3_SM1;
      }
      else if (tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety1PC_SM1;
      }
      else if (tr_1_clock_PositionProcessor_2_State4_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment1_SM1;
      }
      else if (_1_tr_2_guard_PositionProcessor_2_State4_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety4_SM1;
      }
      else {
        SM1_state_act_SafetyModule_2 = SSM_st_NormalMode_SM1;
      }
      tr_4_guard_PositionProcessor_2_State4_SM1 =
        tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 |
        (tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 | (tmp |
            (SM1_reset_act_PositionProcessor_2 |
              (_3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1 |
                (_2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1 |
                  (tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1 |
                    (tr_1_clock_PositionProcessor_2_State4_SM1 |
                      _1_tr_2_guard_PositionProcessor_2_State4_SM1)))))));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @5/SM1: */
  switch (SM1_state_act_SafetyModule_2) {
    case SSM_st_Environment3PC_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Environment3PC_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      outC->SafetyViolation_SafetyModule_2 = (((kcg_lit_int16(1) <= _L70) &
            (_L70 >= kcg_lit_int16(-1))) | ((kcg_lit_int16(401) <= _L70) &
            (_L70 >= kcg_lit_int16(399))) | ((kcg_lit_int16(801) <= _L70) &
            (_L70 >= kcg_lit_int16(799)))) &
        (!_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3);
      break;
    case SSM_st_Safety1_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety1_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Environment3_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Environment3_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Environment2_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Environment2_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Safety5_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety5_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Safety1PC_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      if (tr_4_guard_PositionProcessor_2_State4_SM1) {
        outC->init6 = kcg_true;
      }
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety1PC_SM1;
      /* @7/x/ */
      if (outC->init6) {
        outC->_L1_Counter_17_SafetyModule_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_17_SafetyModule_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_17_SafetyModule_2;
      }
      outC->StopTimer_SafetyModule_2 = outC->_L1_Counter_17_SafetyModule_2;
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      outC->init6 = kcg_false;
      break;
    case SSM_st_Safety3_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety3_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Safety4_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety4_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Safety2_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety2_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Environment1_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Environment1_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_NormalMode_SM1 :
      Press3_SafetyModule_2 = kcg_false;
      if (tr_4_guard_PositionProcessor_2_State4_SM1) {
        outC->init7 = kcg_true;
      }
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_NormalMode_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      /* @6/x/ */
      if (outC->init7) {
        outC->_L1_Counter_6_SafetyModule_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_6_SafetyModule_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_6_SafetyModule_2;
      }
      outC->timer_SafetyModule_2 = outC->_L1_Counter_6_SafetyModule_2;
      outC->init7 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  _L49 = Press3_SafetyModule_2 | tr_2_guard_PositionProcessor_2_MovingUp1_SM1;
  /* @1/SM1: */
  switch (outC->SM1_state_nxt_ActuatorModule_2) {
    case SSM_st_StopMotor_SM1 :
      SM1_state_act_ActuatorModule_2 = SSM_st_StopMotor_SM1;
      break;
    case SSM_st_MoveDown_SM1 :
      SM1_state_act_ActuatorModule_2 = SSM_st_MoveDown_SM1;
      break;
    case SSM_st_MoveUp_SM1 :
      SM1_state_act_ActuatorModule_2 = SSM_st_MoveUp_SM1;
      break;
    case SSM_st_Initial_SM1 :
      if ((_L48 == Upward) & (!_L49)) {
        SM1_state_act_ActuatorModule_2 = SSM_st_MoveUp_SM1;
      }
      else if ((_L48 == Downward) & (!_L49)) {
        SM1_state_act_ActuatorModule_2 = SSM_st_MoveDown_SM1;
      }
      else if (_L49) {
        SM1_state_act_ActuatorModule_2 = SSM_st_StopMotor_SM1;
      }
      else {
        SM1_state_act_ActuatorModule_2 = SSM_st_Initial_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @1/SM1: */
  switch (SM1_state_act_ActuatorModule_2) {
    case SSM_st_StopMotor_SM1 :
      outC->setDirection_ActuatorModule_2 = None;
      outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_StopMotor_SM1;
      outC->Channel2 = kcg_lit_int8(0);
      outC->Channel1 = kcg_lit_int8(0);
      break;
    case SSM_st_MoveDown_SM1 :
      outC->setDirection_ActuatorModule_2 = Down;
      outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_MoveDown_SM1;
      outC->Channel2 = kcg_lit_int8(1);
      outC->Channel1 = kcg_lit_int8(0);
      break;
    case SSM_st_MoveUp_SM1 :
      outC->setDirection_ActuatorModule_2 = Up;
      outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_MoveUp_SM1;
      outC->Channel2 = kcg_lit_int8(0);
      outC->Channel1 = kcg_lit_int8(1);
      break;
    case SSM_st_Initial_SM1 :
      outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_Initial_SM1;
      outC->Channel2 = kcg_lit_int8(0);
      outC->Channel1 = kcg_lit_int8(0);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM5: */
  switch (outC->SM5_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM5 :
      tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 = !inC->GPIOC2;
      tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 = inC->GPIOC2 &
        (outC->Timer4_ButtonProcessor_2 == kcg_lit_int16(10));
      if (tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM5;
      }
      else if (tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
      }
      else {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM5;
      }
      SM5_reset_act_ButtonProcessor_2 =
        tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 |
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5;
      break;
    case SSM_st_Floor1Button11_SM5 :
      SM5_reset_act_ButtonProcessor_2 = kcg_true;
      SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
      break;
    case SSM_st_Floor1Button10_SM5 :
      if (inC->GPIOC2) {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM5;
      }
      else {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
      }
      SM5_reset_act_ButtonProcessor_2 = inC->GPIOC2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @8/SM2: */
  switch (outC->SM2_state_nxt_PlanningModule_2) {
    case SSM_st_State18_SM2 :
      if (outC->F1BR_PlanningModule_2) {
        if (outC->F2BR_PlanningModule_2) {
          if (outC->F3BR_PlanningModule_2) {
            SM2_state_act_PlanningModule_2 = SSM_st_State18_SM2;
          }
          else {
            SM2_state_act_PlanningModule_2 = SSM_st_State15_SM2;
          }
        }
        else {
          SM2_state_act_PlanningModule_2 = SSM_st_State17_SM2;
        }
      }
      else {
        SM2_state_act_PlanningModule_2 = SSM_st_State16_SM2;
      }
      break;
    case SSM_st_State15_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State11_SM2;
      break;
    case SSM_st_State16_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State11_SM2;
      break;
    case SSM_st_State17_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State11_SM2;
      break;
    case SSM_st_State14_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State18_SM2;
      break;
    case SSM_st_State13_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State18_SM2;
      break;
    case SSM_st_State12_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State18_SM2;
      break;
    case SSM_st_State11_SM2 :
      if (_L42) {
        SM2_state_act_PlanningModule_2 = SSM_st_State12_SM2;
      }
      else if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1) {
        SM2_state_act_PlanningModule_2 = SSM_st_State13_SM2;
      }
      else {
        /* @9/SM5: */
        switch (SM5_state_act_ButtonProcessor_2) {
          case SSM_st_Floor1Button4_SM5 :
            tmp = kcg_false;
            break;
          case SSM_st_Floor1Button11_SM5 :
            tmp = kcg_true;
            break;
          case SSM_st_Floor1Button10_SM5 :
            tmp = kcg_false;
            break;
          default :
            /* this default branch is unreachable */
            break;
        }
        if (tmp) {
          SM2_state_act_PlanningModule_2 = SSM_st_State14_SM2;
        }
        else {
          SM2_state_act_PlanningModule_2 = SSM_st_State11_SM2;
        }
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @8/SM2: */
  switch (SM2_state_act_PlanningModule_2) {
    case SSM_st_State18_SM2 :
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State18_SM2;
      break;
    case SSM_st_State15_SM2 :
      outC->F3BS_PlanningModule_2 = kcg_false;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State15_SM2;
      break;
    case SSM_st_State16_SM2 :
      outC->F1BS_PlanningModule_2 = kcg_false;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State16_SM2;
      break;
    case SSM_st_State17_SM2 :
      outC->F2BS_PlanningModule_2 = kcg_false;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State17_SM2;
      break;
    case SSM_st_State14_SM2 :
      outC->F3BS_PlanningModule_2 = kcg_true;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State14_SM2;
      break;
    case SSM_st_State13_SM2 :
      outC->F2BS_PlanningModule_2 = kcg_true;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State13_SM2;
      break;
    case SSM_st_State12_SM2 :
      outC->F1BS_PlanningModule_2 = kcg_true;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State12_SM2;
      break;
    case SSM_st_State11_SM2 :
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State11_SM2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @2/SM1: */
  switch (outC->SM1_state_nxt_PositionProcessor_2) {
    case SSM_st_WaintingForNegPulse_SM1 :
      tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1 =
        outC->setDirection_PositionProcessor_2 == None;
      _2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1 =
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3)) & inC->GPIOC9;
      _3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1 =
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3)) & (!inC->GPIOC9);
      SM1_reset_act_PositionProcessor_2 =
        _3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1 |
        (_2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1 |
          tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1);
      /* @2/SM1:WaintingForNegPulse:<1> */
      if (_3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_State4_SM1;
        outC->PulseCount_PositionProcessor_2 = kcg_lit_int16(0);
      }
      else if (_2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      }
      else if (tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      }
      break;
    case _12_SSM_st_Initial_SM1 :
      SM1_reset_act_PositionProcessor_2 =
        outC->setDirection_PositionProcessor_2 != None;
      if (SM1_reset_act_PositionProcessor_2) {
        SM1_state_act_PositionProcessor_2 = SSM_st_State4_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      break;
    case SSM_st_State4_SM1 :
      tr_4_guard_PositionProcessor_2_State4_SM1 =
        outC->setDirection_PositionProcessor_2 == None;
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 =
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3)) & (!inC->GPIOC9);
      _1_tr_2_guard_PositionProcessor_2_State4_SM1 =
        (outC->setDirection_PositionProcessor_2 == Up) & inC->GPIOC9 &
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3));
      tr_1_clock_PositionProcessor_2_State4_SM1 =
        (outC->setDirection_PositionProcessor_2 == Down) & inC->GPIOC9 &
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3));
      SM1_reset_act_PositionProcessor_2 =
        tr_1_clock_PositionProcessor_2_State4_SM1 |
        (_1_tr_2_guard_PositionProcessor_2_State4_SM1 |
          (_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 |
            tr_4_guard_PositionProcessor_2_State4_SM1));
      /* @2/SM1:State4:<1> */
      if (tr_1_clock_PositionProcessor_2_State4_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_MovingUp1_SM1;
      }
      else /* @2/SM1:State4:<2> */
      if (_1_tr_2_guard_PositionProcessor_2_State4_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_MovingUp_SM1;
      }
      else /* @2/SM1:State4:<3> */
      if (_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3) {
        SM1_state_act_PositionProcessor_2 = SSM_st_State4_SM1;
        outC->PulseCount_PositionProcessor_2 =
          outC->PulseCount_PositionProcessor_2 + kcg_lit_int16(1);
      }
      else if (tr_4_guard_PositionProcessor_2_State4_SM1) {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = SSM_st_State4_SM1;
      }
      break;
    case SSM_st_MovingUp1_SM1 :
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 =
        outC->setDirection_PositionProcessor_2 != None;
      Press3_SafetyModule_2 = outC->setDirection_ActuatorModule_2 == None;
      if (Press3_SafetyModule_2) {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      else if (tr_2_guard_PositionProcessor_2_MovingUp1_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = SSM_st_MovingUp1_SM1;
      }
      SM1_reset_act_PositionProcessor_2 = Press3_SafetyModule_2 |
        tr_2_guard_PositionProcessor_2_MovingUp1_SM1;
      break;
    case SSM_st_MovingUp_SM1 :
      tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 =
        outC->setDirection_PositionProcessor_2 != None;
      _L49 = outC->setDirection_PositionProcessor_2 == None;
      if (_L49) {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      else if (tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM1_state_act_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = SSM_st_MovingUp_SM1;
      }
      SM1_reset_act_PositionProcessor_2 = _L49 |
        tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->setDirection_PositionProcessor_2 = outC->setDirection_ActuatorModule_2;
  /* @2/SM1: */
  switch (SM1_state_act_PositionProcessor_2) {
    case SSM_st_WaintingForNegPulse_SM1 :
      if (SM1_reset_act_PositionProcessor_2) {
        outC->init8 = kcg_true;
      }
      outC->SM1_state_nxt_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      /* @4/x/ */
      if (outC->init8) {
        outC->_L1_Counter_3_PositionProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_3_PositionProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_3_PositionProcessor_2;
      }
      outC->Timer_PositionProcessor_2 = outC->_L1_Counter_3_PositionProcessor_2;
      outC->_L54 = kcg_lit_int16(0);
      outC->_L52 = outC->Position_PositionProcessor_2;
      outC->init8 = kcg_false;
      break;
    case _12_SSM_st_Initial_SM1 :
      outC->SM1_state_nxt_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
      outC->_L54 = kcg_lit_int16(0);
      outC->_L52 = outC->Position_PositionProcessor_2;
      break;
    case SSM_st_State4_SM1 :
      if (SM1_reset_act_PositionProcessor_2) {
        outC->init9 = kcg_true;
      }
      outC->SM1_state_nxt_PositionProcessor_2 = SSM_st_State4_SM1;
      /* @3/x/ */
      if (outC->init9) {
        outC->_L1_Counter_2_PositionProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_2_PositionProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_2_PositionProcessor_2;
      }
      outC->Timer_PositionProcessor_2 = outC->_L1_Counter_2_PositionProcessor_2;
      outC->_L54 = kcg_lit_int16(0);
      outC->_L52 = outC->Position_PositionProcessor_2;
      outC->init9 = kcg_false;
      break;
    case SSM_st_MovingUp1_SM1 :
      outC->SM1_state_nxt_PositionProcessor_2 = SSM_st_MovingUp1_SM1;
      outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
      outC->_L52 = outC->x_PositionProcessor_2 - kcg_lit_int16(1);
      outC->x_PositionProcessor_2 = outC->_L52;
      outC->_L54 = kcg_lit_int16(1000) / (outC->PulseCount_PositionProcessor_2 *
          kcg_lit_int16(3));
      break;
    case SSM_st_MovingUp_SM1 :
      outC->SM1_state_nxt_PositionProcessor_2 = SSM_st_MovingUp_SM1;
      outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
      outC->_L52 = kcg_lit_int16(1) + outC->x_PositionProcessor_2;
      outC->x_PositionProcessor_2 = outC->_L52;
      outC->_L54 = kcg_lit_int16(1000) / (outC->PulseCount_PositionProcessor_2 *
          kcg_lit_int16(3));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->Position_PositionProcessor_2 = outC->_L52;
  outC->_L56 = outC->Channel2;
  outC->_L55 = outC->Channel1;
  /* @9/SM2: */
  switch (SM2_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM2 :
      if (SM2_reset_act_ButtonProcessor_2) {
        outC->init5 = kcg_true;
      }
      outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM2;
      /* @10/x/ */
      if (outC->init5) {
        outC->_L1_Counter_11_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_11_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_11_ButtonProcessor_2;
      }
      outC->Timer0_ButtonProcessor_2 = outC->_L1_Counter_11_ButtonProcessor_2;
      outC->init5 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM2 :
      outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM2;
      break;
    case SSM_st_Floor1Button10_SM2 :
      outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM3: */
  switch (SM3_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM3 :
      if (SM3_reset_act_ButtonProcessor_2) {
        outC->init4 = kcg_true;
      }
      outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM3;
      /* @11/x/ */
      if (outC->init4) {
        outC->_L1_Counter_12_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_12_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_12_ButtonProcessor_2;
      }
      outC->Timer1_ButtonProcessor_2 = outC->_L1_Counter_12_ButtonProcessor_2;
      outC->init4 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM3 :
      outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM3;
      break;
    case SSM_st_Floor1Button10_SM3 :
      outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM4: */
  switch (SM4_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM4 :
      if (SM4_reset_act_ButtonProcessor_2) {
        outC->init3 = kcg_true;
      }
      outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM4;
      /* @12/x/ */
      if (outC->init3) {
        outC->_L1_Counter_13_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_13_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_13_ButtonProcessor_2;
      }
      outC->Timer2_ButtonProcessor_2 = outC->_L1_Counter_13_ButtonProcessor_2;
      outC->init3 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM4 :
      outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM4;
      break;
    case SSM_st_Floor1Button10_SM4 :
      outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM1: */
  switch (SM1_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM1 :
      if (SM1_reset_act_ButtonProcessor_2) {
        outC->init2 = kcg_true;
      }
      outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM1;
      /* @13/x/ */
      if (outC->init2) {
        outC->_L1_Counter_14_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_14_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_14_ButtonProcessor_2;
      }
      outC->Timer3_ButtonProcessor_2 = outC->_L1_Counter_14_ButtonProcessor_2;
      outC->init2 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM1 :
      outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM1;
      break;
    case SSM_st_Floor1Button10_SM1 :
      outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM5: */
  switch (SM5_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM5 :
      if (SM5_reset_act_ButtonProcessor_2) {
        outC->init1 = kcg_true;
      }
      outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM5;
      /* @14/x/ */
      if (outC->init1) {
        outC->_L1_Counter_15_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_15_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_15_ButtonProcessor_2;
      }
      outC->Timer4_ButtonProcessor_2 = outC->_L1_Counter_15_ButtonProcessor_2;
      outC->init1 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM5 :
      outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM5;
      break;
    case SSM_st_Floor1Button10_SM5 :
      outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ControlSystem_init(outC_ControlSystem *outC)
{
  outC->F1BS_PlanningModule_2 = kcg_false;
  outC->F2BS_PlanningModule_2 = kcg_false;
  outC->F3BS_PlanningModule_2 = kcg_false;
  outC->SafetyViolation_SafetyModule_2 = kcg_false;
  outC->F3BR_PlanningModule_2 = kcg_false;
  outC->F2BR_PlanningModule_2 = kcg_false;
  outC->F1BR_PlanningModule_2 = kcg_false;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->_L1_Counter_16_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_15_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_14_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_13_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_12_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_11_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_17_SafetyModule_2 = kcg_lit_int16(0);
  outC->_L1_Counter_6_SafetyModule_2 = kcg_lit_int16(0);
  outC->_L1_Counter_3_PositionProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_2_PositionProcessor_2 = kcg_lit_int16(0);
  outC->Channel2 = kcg_lit_int8(0);
  outC->Channel1 = kcg_lit_int8(0);
  outC->Position_PositionProcessor_2 = kcg_lit_int16(0);
  outC->x_PositionProcessor_2 = kcg_lit_int16(0);
  outC->PulseCount_PositionProcessor_2 = kcg_lit_int16(0);
  outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State11_SM2;
  outC->Timer4_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
  outC->setDirection_ActuatorModule_2 = None;
  outC->_L54 = kcg_lit_int16(0);
  outC->Timer1_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
  outC->Timer0_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
  outC->timer_SafetyModule_2 = kcg_lit_int16(0);
  outC->_L56 = kcg_lit_int8(0);
  outC->_L55 = kcg_lit_int8(0);
  outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
  outC->SM1_state_nxt_SafetyModule_2 = SSM_st_NormalMode_SM1;
  outC->_L52 = kcg_lit_int16(0);
  outC->Timer2_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
  outC->Timer3_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
  outC->Timer5_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
  outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
  outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_Initial_SM1;
  outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
  outC->setDirection_PositionProcessor_2 = None;
  outC->SM1_state_nxt_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ControlSystem_reset(outC_ControlSystem *outC)
{
  outC->F1BS_PlanningModule_2 = kcg_false;
  outC->F2BS_PlanningModule_2 = kcg_false;
  outC->F3BS_PlanningModule_2 = kcg_false;
  outC->SafetyViolation_SafetyModule_2 = kcg_false;
  outC->F3BR_PlanningModule_2 = kcg_false;
  outC->F2BR_PlanningModule_2 = kcg_false;
  outC->F1BR_PlanningModule_2 = kcg_false;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->Position_PositionProcessor_2 = kcg_lit_int16(0);
  outC->x_PositionProcessor_2 = kcg_lit_int16(0);
  outC->PulseCount_PositionProcessor_2 = kcg_lit_int16(0);
  outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State11_SM2;
  outC->Timer4_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
  outC->setDirection_ActuatorModule_2 = None;
  outC->_L54 = kcg_lit_int16(0);
  outC->Timer1_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
  outC->Timer0_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
  outC->timer_SafetyModule_2 = kcg_lit_int16(0);
  outC->_L56 = kcg_lit_int8(0);
  outC->_L55 = kcg_lit_int8(0);
  outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
  outC->SM1_state_nxt_SafetyModule_2 = SSM_st_NormalMode_SM1;
  outC->_L52 = kcg_lit_int16(0);
  outC->Timer2_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
  outC->Timer3_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
  outC->Timer5_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
  outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
  outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_Initial_SM1;
  outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
  outC->setDirection_PositionProcessor_2 = None;
  outC->SM1_state_nxt_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: ControlSystem/
  @9: (ButtonProcessor#2)
  @15: @9/(Counter#16)
  @5: (SafetyModule#2)
  @7: @5/(Counter#17)
  @6: @5/(Counter#6)
  @1: (ActuatorModule#2)
  @8: (PlanningModule#2)
  @2: (PositionProcessor#2)
  @4: @2/(Counter#3)
  @3: @2/(Counter#2)
  @10: @9/(Counter#11)
  @11: @9/(Counter#12)
  @12: @9/(Counter#13)
  @13: @9/(Counter#14)
  @14: @9/(Counter#15)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ControlSystem.c
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

