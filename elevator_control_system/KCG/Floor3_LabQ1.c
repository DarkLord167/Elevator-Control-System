/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Floor3_LabQ1.h"

/* LabQ1::Floor3/ */
void Floor3_LabQ1(/* GPIOC2/ */ kcg_bool GPIOC2, outC_Floor3_LabQ1 *outC)
{
  /* Floor3:Timer:<2> */
  kcg_bool tr_2_guard_Timer_Floor3;
  /* Floor3:Timer:<1> */
  kcg_bool tr_1_guard_Timer_Floor3;
  /* Floor3: */
  SSM_ST_Floor3 Floor3_state_act;
  /* Floor3: */
  kcg_bool Floor3_reset_act;

  /* Floor3: */
  switch (outC->Floor3_state_nxt) {
    case SSM_st_Checker_Floor3 :
      Floor3_reset_act = !GPIOC2;
      if (Floor3_reset_act) {
        Floor3_state_act = SSM_st_Release_Floor3;
      }
      else {
        Floor3_state_act = SSM_st_Checker_Floor3;
      }
      break;
    case SSM_st_Timer_Floor3 :
      tr_2_guard_Timer_Floor3 = !GPIOC2;
      tr_1_guard_Timer_Floor3 = GPIOC2 & (outC->x >= kcg_lit_int8(19));
      if (tr_1_guard_Timer_Floor3) {
        Floor3_state_act = SSM_st_Press_Floor3;
      }
      else if (tr_2_guard_Timer_Floor3) {
        Floor3_state_act = SSM_st_Release_Floor3;
      }
      else {
        Floor3_state_act = SSM_st_Timer_Floor3;
      }
      Floor3_reset_act = tr_1_guard_Timer_Floor3 | tr_2_guard_Timer_Floor3;
      break;
    case SSM_st_Release_Floor3 :
      if (GPIOC2) {
        Floor3_state_act = SSM_st_Timer_Floor3;
      }
      else {
        Floor3_state_act = SSM_st_Release_Floor3;
      }
      Floor3_reset_act = GPIOC2;
      break;
    case SSM_st_Press_Floor3 :
      Floor3_reset_act = kcg_true;
      Floor3_state_act = SSM_st_Checker_Floor3;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Floor3: */
  switch (Floor3_state_act) {
    case SSM_st_Checker_Floor3 :
      outC->Press2 = kcg_false;
      outC->x = kcg_lit_int8(0);
      outC->Floor3_state_nxt = SSM_st_Checker_Floor3;
      break;
    case SSM_st_Timer_Floor3 :
      outC->Press2 = kcg_false;
      if (Floor3_reset_act) {
        outC->init = kcg_true;
      }
      /* Floor3:Timer:_L3= */
      if (outC->init) {
        outC->init = kcg_false;
        outC->x = kcg_lit_int8(0);
      }
      else {
        outC->x = outC->_L4_Timer_Floor3;
      }
      outC->_L4_Timer_Floor3 = kcg_lit_int8(1) + outC->x;
      outC->Floor3_state_nxt = SSM_st_Timer_Floor3;
      break;
    case SSM_st_Release_Floor3 :
      outC->Press2 = kcg_false;
      outC->x = kcg_lit_int8(0);
      outC->Floor3_state_nxt = SSM_st_Release_Floor3;
      break;
    case SSM_st_Press_Floor3 :
      outC->Press2 = kcg_true;
      outC->x = kcg_lit_int8(0);
      outC->Floor3_state_nxt = SSM_st_Press_Floor3;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Floor3_init_LabQ1(outC_Floor3_LabQ1 *outC)
{
  outC->Press2 = kcg_true;
  outC->init = kcg_true;
  outC->_L4_Timer_Floor3 = kcg_lit_int8(0);
  outC->x = kcg_lit_int8(0);
  outC->Floor3_state_nxt = SSM_st_Release_Floor3;
}
#endif /* KCG_USER_DEFINED_INIT */


void Floor3_reset_LabQ1(outC_Floor3_LabQ1 *outC)
{
  outC->init = kcg_true;
  outC->x = kcg_lit_int8(0);
  outC->Floor3_state_nxt = SSM_st_Release_Floor3;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Floor3_LabQ1.c
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

