/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ButtonProcessor.h"

/* ButtonProcessor/ */
void ButtonProcessor(
  /* GPIOC0/ */
  kcg_bool GPIOC0,
  /* GPIOC1/ */
  kcg_bool GPIOC1,
  /* GPIOC2/ */
  kcg_bool GPIOC2,
  /* GPIOC3/ */
  kcg_bool GPIOC3,
  /* GPIOC8/ */
  kcg_bool GPIOC8,
  /* GPIOC7/ */
  kcg_bool GPIOC7,
  outC_ButtonProcessor *outC)
{
  /* SM1: */
  _8_SSM_ST_SM1 SM1_state_act;
  /* SM1: */
  kcg_bool SM1_reset_act;

  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_Stop_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_Stop_SM1;
      break;
    case SSM_st_AtFloor_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_AtFloor_SM1;
      break;
    case SSM_st_StopButton_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_StopButton_SM1;
      break;
    case SSM_st_Floor3Button_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_Floor3Button_SM1;
      break;
    case SSM_st_Floor2Button_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_Floor2Button_SM1;
      break;
    case SSM_st_Floor1Button_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_Floor1Button_SM1;
      break;
    case SSM_st_State1_SM1 :
      if (GPIOC0) {
        SM1_state_act = SSM_st_Floor1Button_SM1;
      }
      else if (GPIOC1) {
        SM1_state_act = SSM_st_Floor2Button_SM1;
      }
      else if (GPIOC2) {
        SM1_state_act = SSM_st_Floor3Button_SM1;
      }
      else if (GPIOC3) {
        SM1_state_act = SSM_st_StopButton_SM1;
      }
      else if (GPIOC7) {
        SM1_state_act = SSM_st_AtFloor_SM1;
      }
      else if (GPIOC8) {
        SM1_state_act = SSM_st_Stop_SM1;
      }
      else {
        SM1_state_act = SSM_st_State1_SM1;
      }
      SM1_reset_act = GPIOC0 | (GPIOC1 | (GPIOC2 | (GPIOC3 | (GPIOC7 | GPIOC8))));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_Stop_SM1 :
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */ Doors_reset_LabQ1(&outC->Context_Doors_1);
      }
      /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */
      Doors_LabQ1(GPIOC8, &outC->Context_Doors_1);
      outC->Press8 = outC->Context_Doors_1.Press8;
      outC->SM1_state_nxt = SSM_st_Stop_SM1;
      break;
    case SSM_st_AtFloor_SM1 :
      outC->Press8 = kcg_false;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */
        AtFloor_reset_LabQ1(&outC->Context_AtFloor_3);
      }
      /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */
      AtFloor_LabQ1(GPIOC7, &outC->Context_AtFloor_3);
      outC->Press7 = outC->Context_AtFloor_3.Press7;
      outC->SM1_state_nxt = SSM_st_AtFloor_SM1;
      break;
    case SSM_st_StopButton_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */
        Stop_reset_LabQ1(&outC->Context_Stop_1);
      }
      /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */
      Stop_LabQ1(GPIOC3, &outC->Context_Stop_1);
      outC->Press3 = outC->Context_Stop_1.Press3;
      outC->SM1_state_nxt = SSM_st_StopButton_SM1;
      break;
    case SSM_st_Floor3Button_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */
        Floor3_reset_LabQ1(&outC->Context_Floor3_1);
      }
      /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */
      Floor3_LabQ1(GPIOC2, &outC->Context_Floor3_1);
      outC->Press2 = outC->Context_Floor3_1.Press2;
      outC->SM1_state_nxt = SSM_st_Floor3Button_SM1;
      break;
    case SSM_st_Floor2Button_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */
        Floor2_reset_LabQ1(&outC->Context_Floor2_1);
      }
      /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */
      Floor2_LabQ1(GPIOC1, &outC->Context_Floor2_1);
      outC->Press1 = outC->Context_Floor2_1.Press1;
      outC->SM1_state_nxt = SSM_st_Floor2Button_SM1;
      break;
    case SSM_st_Floor1Button_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */
        Floor1_reset_LabQ1(&outC->Context_Floor1_1);
      }
      /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */
      Floor1_LabQ1(GPIOC0, &outC->Context_Floor1_1);
      outC->Press0 = outC->Context_Floor1_1.Press0;
      outC->SM1_state_nxt = SSM_st_Floor1Button_SM1;
      break;
    case SSM_st_State1_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      outC->SM1_state_nxt = SSM_st_State1_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ButtonProcessor_init(outC_ButtonProcessor *outC)
{
  outC->Press0 = kcg_true;
  outC->Press1 = kcg_true;
  outC->Press2 = kcg_true;
  outC->Press3 = kcg_true;
  outC->Press7 = kcg_true;
  outC->Press8 = kcg_true;
  /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */ Doors_init_LabQ1(&outC->Context_Doors_1);
  /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */
  AtFloor_init_LabQ1(&outC->Context_AtFloor_3);
  /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */
  Stop_init_LabQ1(&outC->Context_Stop_1);
  /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */
  Floor3_init_LabQ1(&outC->Context_Floor3_1);
  /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */
  Floor2_init_LabQ1(&outC->Context_Floor2_1);
  /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */
  Floor1_init_LabQ1(&outC->Context_Floor1_1);
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ButtonProcessor_reset(outC_ButtonProcessor *outC)
{
  /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */ Doors_reset_LabQ1(&outC->Context_Doors_1);
  /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */
  AtFloor_reset_LabQ1(&outC->Context_AtFloor_3);
  /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */
  Stop_reset_LabQ1(&outC->Context_Stop_1);
  /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */
  Floor3_reset_LabQ1(&outC->Context_Floor3_1);
  /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */
  Floor2_reset_LabQ1(&outC->Context_Floor2_1);
  /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */
  Floor1_reset_LabQ1(&outC->Context_Floor1_1);
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ButtonProcessor.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

