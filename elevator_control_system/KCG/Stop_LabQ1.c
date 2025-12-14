/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Stop_LabQ1.h"

/* LabQ1::Stop/ */
void Stop_LabQ1(/* GPIOC3/ */ kcg_bool GPIOC3, outC_Stop_LabQ1 *outC)
{
  /* Stop:Timer:<2> */
  kcg_bool tr_2_guard_Timer_Stop;
  /* Stop:Timer:<1> */
  kcg_bool tr_1_guard_Timer_Stop;
  /* Stop: */
  SSM_ST_Stop Stop_state_act;
  /* Stop: */
  kcg_bool Stop_reset_act;

  /* Stop: */
  switch (outC->Stop_state_nxt) {
    case SSM_st_Checker_Stop :
      Stop_reset_act = !GPIOC3;
      if (Stop_reset_act) {
        Stop_state_act = SSM_st_Release_Stop;
      }
      else {
        Stop_state_act = SSM_st_Checker_Stop;
      }
      break;
    case SSM_st_Timer_Stop :
      tr_2_guard_Timer_Stop = !GPIOC3;
      tr_1_guard_Timer_Stop = outC->x >= kcg_lit_int8(19);
      if (tr_1_guard_Timer_Stop) {
        Stop_state_act = SSM_st_Press_Stop;
      }
      else if (tr_2_guard_Timer_Stop) {
        Stop_state_act = SSM_st_Release_Stop;
      }
      else {
        Stop_state_act = SSM_st_Timer_Stop;
      }
      Stop_reset_act = tr_1_guard_Timer_Stop | tr_2_guard_Timer_Stop;
      break;
    case SSM_st_Release_Stop :
      if (GPIOC3) {
        Stop_state_act = SSM_st_Timer_Stop;
      }
      else {
        Stop_state_act = SSM_st_Release_Stop;
      }
      Stop_reset_act = GPIOC3;
      break;
    case SSM_st_Press_Stop :
      Stop_reset_act = kcg_true;
      Stop_state_act = SSM_st_Checker_Stop;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* Stop: */
  switch (Stop_state_act) {
    case SSM_st_Checker_Stop :
      outC->Press3 = kcg_false;
      outC->x = kcg_lit_int8(0);
      outC->Stop_state_nxt = SSM_st_Checker_Stop;
      break;
    case SSM_st_Timer_Stop :
      outC->Press3 = kcg_false;
      if (Stop_reset_act) {
        outC->init = kcg_true;
      }
      /* Stop:Timer:_L3= */
      if (outC->init) {
        outC->init = kcg_false;
        outC->x = kcg_lit_int8(0);
      }
      else {
        outC->x = outC->_L4_Timer_Stop;
      }
      outC->_L4_Timer_Stop = kcg_lit_int8(1) + outC->x;
      outC->Stop_state_nxt = SSM_st_Timer_Stop;
      break;
    case SSM_st_Release_Stop :
      outC->Press3 = kcg_false;
      outC->x = kcg_lit_int8(0);
      outC->Stop_state_nxt = SSM_st_Release_Stop;
      break;
    case SSM_st_Press_Stop :
      outC->Press3 = kcg_true;
      outC->x = kcg_lit_int8(0);
      outC->Stop_state_nxt = SSM_st_Press_Stop;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Stop_init_LabQ1(outC_Stop_LabQ1 *outC)
{
  outC->Press3 = kcg_true;
  outC->init = kcg_true;
  outC->_L4_Timer_Stop = kcg_lit_int8(0);
  outC->x = kcg_lit_int8(0);
  outC->Stop_state_nxt = SSM_st_Release_Stop;
}
#endif /* KCG_USER_DEFINED_INIT */


void Stop_reset_LabQ1(outC_Stop_LabQ1 *outC)
{
  outC->init = kcg_true;
  outC->x = kcg_lit_int8(0);
  outC->Stop_state_nxt = SSM_st_Release_Stop;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Stop_LabQ1.c
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

