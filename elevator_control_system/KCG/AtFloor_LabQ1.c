/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AtFloor_LabQ1.h"

/* LabQ1::AtFloor/ */
void AtFloor_LabQ1(/* GPIOC7/ */ kcg_bool GPIOC7, outC_AtFloor_LabQ1 *outC)
{
  /* AtFloorSensor: */
  SSM_ST_AtFloorSensor AtFloorSensor_state_act;

  /* AtFloorSensor: */
  switch (outC->AtFloorSensor_state_nxt) {
    case SSM_st_BetweenFloor_AtFloorSensor :
      if (GPIOC7) {
        AtFloorSensor_state_act = SSM_st_AtFloor_AtFloorSensor;
      }
      else {
        AtFloorSensor_state_act = SSM_st_BetweenFloor_AtFloorSensor;
      }
      break;
    case SSM_st_AtFloor_AtFloorSensor :
      if (GPIOC7) {
        AtFloorSensor_state_act = SSM_st_AtFloor_AtFloorSensor;
      }
      else {
        AtFloorSensor_state_act = SSM_st_BetweenFloor_AtFloorSensor;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* AtFloorSensor: */
  switch (AtFloorSensor_state_act) {
    case SSM_st_BetweenFloor_AtFloorSensor :
      outC->Press7 = kcg_false;
      outC->AtFloorSensor_state_nxt = SSM_st_BetweenFloor_AtFloorSensor;
      break;
    case SSM_st_AtFloor_AtFloorSensor :
      outC->Press7 = kcg_true;
      outC->AtFloorSensor_state_nxt = SSM_st_AtFloor_AtFloorSensor;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void AtFloor_init_LabQ1(outC_AtFloor_LabQ1 *outC)
{
  outC->Press7 = kcg_true;
  outC->AtFloorSensor_state_nxt = SSM_st_AtFloor_AtFloorSensor;
}
#endif /* KCG_USER_DEFINED_INIT */


void AtFloor_reset_LabQ1(outC_AtFloor_LabQ1 *outC)
{
  outC->AtFloorSensor_state_nxt = SSM_st_AtFloor_AtFloorSensor;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AtFloor_LabQ1.c
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

