/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Floor1_LabQ1.h"

/* LabQ1::Floor1/ */
void Floor1_LabQ1(/* GPIOC0/ */ kcg_bool GPIOC0, outC_Floor1_LabQ1 *outC)
{
  /* Floor1:Timer:<2> */
  kcg_bool tr_2_guard_Timer_Floor1;
  /* Floor1:Timer:<1> */
  kcg_bool tr_1_guard_Timer_Floor1;
  /* Floor1: */
  SSM_ST_Floor1 Floor1_state_act;
  /* Floor1: */
  kcg_bool Floor1_reset_act;

  /* Floor1: */
  switch (outC->Floor1_state_nxt) {
    case SSM_st_Checker_Floor1 :
      Floor1_reset_act = !GPIOC0;
      if (Floor1_reset_act) {
        Floor1_state_act = SSM_st_Release_Floor1;
      }
      else {
        Floor1_state_act = SSM_st_Checker_Floor1;
      }
      break;
    case SSM_st_Timer_Floor1 :
      tr_2_guard_Timer_Floor1 = !GPIOC0;
      tr_1_guard_Timer_Floor1 = GPIOC0 & (outC->x >= kcg_lit_int8(19));
      if (tr_1_guard_Timer_Floor1) {
        Floor1_state_act = SSM_st_Press_Floor1;
      }
      else if (tr_2_guard_Timer_Floor1) {
        Floor1_state_act = SSM_st_Release_Floor1;
      }
      else {
        Floor1_state_act = SSM_st_Timer_Floor1;
      }
      Floor1_reset_act = tr_1_guard_Timer_Floor1 | tr_2_guard_Timer_Floor1;
      break;
    case SSM_st_Release_Floor1 :
      if (GPIOC0) {
        Floor1_state_act = SSM_st_Timer_Floor1;
      }
      else {
        Floor1_state_act = SSM_st_Release_Floor1;
      }
      Floor1_reset_act = GPIOC0;
      break;
    case SSM_st_Press_Floor1 :
      Floor1_reset_act = kcg_true;
      Floor1_state_act = SSM_st_Checker_Floor1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Floor1: */
  switch (Floor1_state_act) {
    case SSM_st_Checker_Floor1 :
      outC->Press0 = kcg_false;
      outC->x = kcg_lit_int8(0);
      outC->Floor1_state_nxt = SSM_st_Checker_Floor1;
      break;
    case SSM_st_Timer_Floor1 :
      outC->Press0 = kcg_false;
      if (Floor1_reset_act) {
        outC->init = kcg_true;
      }
      /* Floor1:Timer:_L3= */
      if (outC->init) {
        outC->init = kcg_false;
        outC->x = kcg_lit_int8(0);
      }
      else {
        outC->x = outC->_L4_Timer_Floor1;
      }
      outC->_L4_Timer_Floor1 = kcg_lit_int8(1) + outC->x;
      outC->Floor1_state_nxt = SSM_st_Timer_Floor1;
      break;
    case SSM_st_Release_Floor1 :
      outC->Press0 = kcg_false;
      outC->x = kcg_lit_int8(0);
      outC->Floor1_state_nxt = SSM_st_Release_Floor1;
      break;
    case SSM_st_Press_Floor1 :
      outC->Press0 = kcg_true;
      outC->x = kcg_lit_int8(0);
      outC->Floor1_state_nxt = SSM_st_Press_Floor1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Floor1_init_LabQ1(outC_Floor1_LabQ1 *outC)
{
  outC->Press0 = kcg_true;
  outC->init = kcg_true;
  outC->_L4_Timer_Floor1 = kcg_lit_int8(0);
  outC->x = kcg_lit_int8(0);
  outC->Floor1_state_nxt = SSM_st_Release_Floor1;
}
#endif /* KCG_USER_DEFINED_INIT */


void Floor1_reset_LabQ1(outC_Floor1_LabQ1 *outC)
{
  outC->init = kcg_true;
  outC->x = kcg_lit_int8(0);
  outC->Floor1_state_nxt = SSM_st_Release_Floor1;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Floor1_LabQ1.c
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

