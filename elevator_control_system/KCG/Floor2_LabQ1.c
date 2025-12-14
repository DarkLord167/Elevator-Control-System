/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Floor2_LabQ1.h"

/* LabQ1::Floor2/ */
void Floor2_LabQ1(/* GPIOC1/ */ kcg_bool GPIOC1, outC_Floor2_LabQ1 *outC)
{
  /* Floor2:Timer:<2> */
  kcg_bool tr_2_guard_Timer_Floor2;
  /* Floor2:Timer:<1> */
  kcg_bool tr_1_guard_Timer_Floor2;
  /* Floor2: */
  SSM_ST_Floor2 Floor2_state_act;
  /* Floor2: */
  kcg_bool Floor2_reset_act;

  /* Floor2: */
  switch (outC->Floor2_state_nxt) {
    case SSM_st_Checker_Floor2 :
      Floor2_reset_act = !GPIOC1;
      if (Floor2_reset_act) {
        Floor2_state_act = SSM_st_Release_Floor2;
      }
      else {
        Floor2_state_act = SSM_st_Checker_Floor2;
      }
      break;
    case SSM_st_Timer_Floor2 :
      tr_2_guard_Timer_Floor2 = !GPIOC1;
      tr_1_guard_Timer_Floor2 = GPIOC1 & (outC->x >= kcg_lit_int8(19));
      if (tr_1_guard_Timer_Floor2) {
        Floor2_state_act = SSM_st_Press_Floor2;
      }
      else if (tr_2_guard_Timer_Floor2) {
        Floor2_state_act = SSM_st_Release_Floor2;
      }
      else {
        Floor2_state_act = SSM_st_Timer_Floor2;
      }
      Floor2_reset_act = tr_1_guard_Timer_Floor2 | tr_2_guard_Timer_Floor2;
      break;
    case SSM_st_Release_Floor2 :
      if (GPIOC1) {
        Floor2_state_act = SSM_st_Timer_Floor2;
      }
      else {
        Floor2_state_act = SSM_st_Release_Floor2;
      }
      Floor2_reset_act = GPIOC1;
      break;
    case SSM_st_Press_Floor2 :
      Floor2_reset_act = kcg_true;
      Floor2_state_act = SSM_st_Checker_Floor2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Floor2: */
  switch (Floor2_state_act) {
    case SSM_st_Checker_Floor2 :
      outC->Press1 = kcg_false;
      outC->x = kcg_lit_int8(0);
      outC->Floor2_state_nxt = SSM_st_Checker_Floor2;
      break;
    case SSM_st_Timer_Floor2 :
      outC->Press1 = kcg_false;
      if (Floor2_reset_act) {
        outC->init = kcg_true;
      }
      /* Floor2:Timer:_L3= */
      if (outC->init) {
        outC->init = kcg_false;
        outC->x = kcg_lit_int8(0);
      }
      else {
        outC->x = outC->_L4_Timer_Floor2;
      }
      outC->_L4_Timer_Floor2 = kcg_lit_int8(1) + outC->x;
      outC->Floor2_state_nxt = SSM_st_Timer_Floor2;
      break;
    case SSM_st_Release_Floor2 :
      outC->Press1 = kcg_false;
      outC->x = kcg_lit_int8(0);
      outC->Floor2_state_nxt = SSM_st_Release_Floor2;
      break;
    case SSM_st_Press_Floor2 :
      outC->Press1 = kcg_true;
      outC->x = kcg_lit_int8(0);
      outC->Floor2_state_nxt = SSM_st_Press_Floor2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Floor2_init_LabQ1(outC_Floor2_LabQ1 *outC)
{
  outC->Press1 = kcg_true;
  outC->init = kcg_true;
  outC->_L4_Timer_Floor2 = kcg_lit_int8(0);
  outC->x = kcg_lit_int8(0);
  outC->Floor2_state_nxt = SSM_st_Release_Floor2;
}
#endif /* KCG_USER_DEFINED_INIT */


void Floor2_reset_LabQ1(outC_Floor2_LabQ1 *outC)
{
  outC->init = kcg_true;
  outC->x = kcg_lit_int8(0);
  outC->Floor2_state_nxt = SSM_st_Release_Floor2;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Floor2_LabQ1.c
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

