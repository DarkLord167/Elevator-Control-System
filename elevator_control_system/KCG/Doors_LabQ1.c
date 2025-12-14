/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Doors_LabQ1.h"

/* LabQ1::Doors/ */
void Doors_LabQ1(/* GPIOC8/ */ kcg_bool GPIOC8, outC_Doors_LabQ1 *outC)
{
  /* DoorSensor: */
  SSM_ST_DoorSensor DoorSensor_state_act;

  /* DoorSensor: */
  switch (outC->DoorSensor_state_nxt) {
    case SSM_st_Open_DoorSensor :
      if (GPIOC8) {
        DoorSensor_state_act = SSM_st_Close_DoorSensor;
      }
      else {
        DoorSensor_state_act = SSM_st_Open_DoorSensor;
      }
      break;
    case SSM_st_Close_DoorSensor :
      if (GPIOC8) {
        DoorSensor_state_act = SSM_st_Close_DoorSensor;
      }
      else {
        DoorSensor_state_act = SSM_st_Open_DoorSensor;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* DoorSensor: */
  switch (DoorSensor_state_act) {
    case SSM_st_Open_DoorSensor :
      outC->Press8 = kcg_false;
      outC->DoorSensor_state_nxt = SSM_st_Open_DoorSensor;
      break;
    case SSM_st_Close_DoorSensor :
      outC->Press8 = kcg_true;
      outC->DoorSensor_state_nxt = SSM_st_Close_DoorSensor;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Doors_init_LabQ1(outC_Doors_LabQ1 *outC)
{
  outC->Press8 = kcg_true;
  outC->DoorSensor_state_nxt = SSM_st_Close_DoorSensor;
}
#endif /* KCG_USER_DEFINED_INIT */


void Doors_reset_LabQ1(outC_Doors_LabQ1 *outC)
{
  outC->DoorSensor_state_nxt = SSM_st_Close_DoorSensor;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Doors_LabQ1.c
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

