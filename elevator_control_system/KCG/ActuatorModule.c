/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
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
  /* SM1: */
  SSM_ST_SM1 SM1_state_act;

  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_StopMotor_SM1 :
      SM1_state_act = SSM_st_StopMotor_SM1;
      break;
    case SSM_st_MoveDown_SM1 :
      SM1_state_act = SSM_st_MoveDown_SM1;
      break;
    case SSM_st_MoveUp_SM1 :
      SM1_state_act = SSM_st_MoveUp_SM1;
      break;
    case _10_SSM_st_Initial_SM1 :
      if ((Move == Upward) & (!CarMotorStop)) {
        SM1_state_act = SSM_st_MoveUp_SM1;
      }
      else if ((Move == Downward) & (!CarMotorStop)) {
        SM1_state_act = SSM_st_MoveDown_SM1;
      }
      else if (CarMotorStop) {
        SM1_state_act = SSM_st_StopMotor_SM1;
      }
      else {
        SM1_state_act = _10_SSM_st_Initial_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_StopMotor_SM1 :
      outC->Channel1 = kcg_lit_int8(0);
      outC->Channel2 = kcg_lit_int8(0);
      outC->setDirection = None;
      outC->SM1_state_nxt = SSM_st_StopMotor_SM1;
      break;
    case SSM_st_MoveDown_SM1 :
      outC->Channel1 = kcg_lit_int8(0);
      outC->Channel2 = kcg_lit_int8(1);
      outC->setDirection = Down;
      outC->SM1_state_nxt = SSM_st_MoveDown_SM1;
      break;
    case SSM_st_MoveUp_SM1 :
      outC->Channel1 = kcg_lit_int8(1);
      outC->Channel2 = kcg_lit_int8(0);
      outC->setDirection = Up;
      outC->SM1_state_nxt = SSM_st_MoveUp_SM1;
      break;
    case _10_SSM_st_Initial_SM1 :
      outC->Channel1 = kcg_lit_int8(0);
      outC->Channel2 = kcg_lit_int8(0);
      outC->SM1_state_nxt = _10_SSM_st_Initial_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ActuatorModule_init(outC_ActuatorModule *outC)
{
  outC->Channel2 = kcg_lit_int8(0);
  outC->Channel1 = kcg_lit_int8(0);
  outC->setDirection = None;
  outC->SM1_state_nxt = _10_SSM_st_Initial_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ActuatorModule_reset(outC_ActuatorModule *outC)
{
  outC->setDirection = None;
  outC->SM1_state_nxt = _10_SSM_st_Initial_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ActuatorModule.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

