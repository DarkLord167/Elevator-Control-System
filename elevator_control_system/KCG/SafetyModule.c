/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
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
  /* SM1:Environment3PC:<1> */
  kcg_bool tr_1_guard_Environment3PC_SM1;
  /* SM1: */
  _4_SSM_ST_SM1 SM1_state_act;
  /* SM1: */
  kcg_bool SM1_reset_act;

  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_Environment3PC_SM1 :
      tr_1_guard_Environment3PC_SM1 = !outC->SafetyViolation;
      if (tr_1_guard_Environment3PC_SM1) {
        SM1_state_act = SSM_st_NormalMode_SM1;
      }
      else if (outC->SafetyViolation) {
        SM1_state_act = SSM_st_Environment3_SM1;
      }
      else {
        SM1_state_act = SSM_st_Environment3PC_SM1;
      }
      SM1_reset_act = tr_1_guard_Environment3PC_SM1 | outC->SafetyViolation;
      break;
    case SSM_st_Safety1_SM1 :
      SM1_state_act = SSM_st_Safety1_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Environment3_SM1 :
      SM1_state_act = SSM_st_Environment3_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Environment2_SM1 :
      SM1_state_act = SSM_st_Environment2_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Safety5_SM1 :
      SM1_state_act = SSM_st_Safety5_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Safety1PC_SM1 :
      SM1_reset_act = (outC->StopTimer > kcg_lit_int16(1)) & ((Channel1 ==
            kcg_lit_int8(1)) | (Channel2 == kcg_lit_int8(1)));
      if (SM1_reset_act) {
        SM1_state_act = SSM_st_Safety1_SM1;
      }
      else {
        SM1_state_act = SSM_st_Safety1PC_SM1;
      }
      break;
    case SSM_st_Safety3_SM1 :
      SM1_state_act = SSM_st_Safety3_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Safety4_SM1 :
      SM1_state_act = SSM_st_Safety4_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Safety2_SM1 :
      SM1_state_act = SSM_st_Safety2_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Environment1_SM1 :
      SM1_state_act = SSM_st_Environment1_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_NormalMode_SM1 :
      tr_2_guard_NormalMode_SM1 = outC->timer == kcg_lit_int16(10);
      tr_9_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Position ==
          kcg_lit_int16(800)) & (Channel1 == kcg_lit_int8(1));
      tr_8_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (!Doors) &
        ((!AtFloor) | (Channel1 == kcg_lit_int8(1)) | (Channel2 == kcg_lit_int8(1)));
      tr_7_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & Press3;
      tr_6_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & AtFloor &
        (!Doors) & ((Channel1 == kcg_lit_int8(1)) | (Channel2 == kcg_lit_int8(
              1)));
      tr_5_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Channel1 ==
          kcg_lit_int8(1)) & (Channel2 == kcg_lit_int8(1));
      tr_4_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Position ==
          kcg_lit_int16(0)) & (Channel2 == kcg_lit_int8(1));
      tr_3_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Speed >
          kcg_lit_int16(50));
      tr_1_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Press3 | AtFloor);
      if (tr_1_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety5_SM1;
      }
      else if (tr_2_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Environment3PC_SM1;
      }
      else if (tr_3_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Environment2_SM1;
      }
      else if (tr_4_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety4_SM1;
      }
      else if (tr_5_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety2_SM1;
      }
      else if (tr_6_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety3_SM1;
      }
      else if (tr_7_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety1PC_SM1;
      }
      else if (tr_8_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Environment1_SM1;
      }
      else if (tr_9_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety4_SM1;
      }
      else {
        SM1_state_act = SSM_st_NormalMode_SM1;
      }
      SM1_reset_act = tr_1_guard_NormalMode_SM1 | (tr_2_guard_NormalMode_SM1 |
          (tr_3_guard_NormalMode_SM1 | (tr_4_guard_NormalMode_SM1 |
              (tr_5_guard_NormalMode_SM1 | (tr_6_guard_NormalMode_SM1 |
                  (tr_7_guard_NormalMode_SM1 | (tr_8_guard_NormalMode_SM1 |
                      tr_9_guard_NormalMode_SM1)))))));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_Environment3PC_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation =
        /* SM1:Environment3PC:_L5=(LabQ3::FloorsLocation#1)/ */
        FloorsLocation_LabQ3(AtFloor, Position);
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Environment3PC_SM1;
      break;
    case SSM_st_Safety1_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety1_SM1;
      break;
    case SSM_st_Environment3_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Environment3_SM1;
      break;
    case SSM_st_Environment2_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Environment2_SM1;
      break;
    case SSM_st_Safety5_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety5_SM1;
      break;
    case SSM_st_Safety1PC_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      if (SM1_reset_act) {
        /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_reset(&outC->Context_Counter_17);
      }
      /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter(&outC->Context_Counter_17);
      outC->StopTimer = outC->Context_Counter_17.Output;
      outC->SM1_state_nxt = SSM_st_Safety1PC_SM1;
      break;
    case SSM_st_Safety3_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety3_SM1;
      break;
    case SSM_st_Safety4_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety4_SM1;
      break;
    case SSM_st_Safety2_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety2_SM1;
      break;
    case SSM_st_Environment1_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Environment1_SM1;
      break;
    case SSM_st_NormalMode_SM1 :
      outC->CarMotorStop = kcg_false;
      outC->SafetyViolation = kcg_false;
      if (SM1_reset_act) {
        /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_reset(&outC->Context_Counter_6);
      }
      /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter(&outC->Context_Counter_6);
      outC->timer = outC->Context_Counter_6.Output;
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_NormalMode_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SafetyModule_init(outC_SafetyModule *outC)
{
  outC->SafetyViolation = kcg_false;
  outC->CarMotorStop = kcg_true;
  /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_init(&outC->Context_Counter_17);
  /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_init(&outC->Context_Counter_6);
  outC->timer = kcg_lit_int16(0);
  outC->StopTimer = kcg_lit_int16(0);
  outC->SM1_state_nxt = SSM_st_NormalMode_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SafetyModule_reset(outC_SafetyModule *outC)
{
  outC->SafetyViolation = kcg_false;
  /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_reset(&outC->Context_Counter_17);
  /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_reset(&outC->Context_Counter_6);
  outC->timer = kcg_lit_int16(0);
  outC->StopTimer = kcg_lit_int16(0);
  outC->SM1_state_nxt = SSM_st_NormalMode_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SafetyModule.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

