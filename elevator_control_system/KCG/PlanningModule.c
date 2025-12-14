/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PlanningModule.h"

/* PlanningModule/ */
void PlanningModule(
  /* Press0/ */
  kcg_bool Press0,
  /* Press1/ */
  kcg_bool Press1,
  /* Press2/ */
  kcg_bool Press2,
  /* Press3/ */
  kcg_bool Press3,
  /* Press7/ */
  kcg_bool Press7,
  /* Press8/ */
  kcg_bool Press8,
  /* Position/ */
  kcg_int16 Position,
  outC_PlanningModule *outC)
{
  /* PlanningModule: */
  SSM_ST_PlanningModule PlanningModule_state_act;

  /* PlanningModule: */
  switch (outC->PlanningModule_state_nxt) {
    case SSM_st_Stop_PlanningModule :
      PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      if (Position == kcg_lit_int16(0)) {
        PlanningModule_state_act = SSM_st_Floor1_PlanningModule;
      }
      else if (Position > kcg_lit_int16(0)) {
        PlanningModule_state_act = SSM_st_Movin2To1_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Movin2To1_PlanningModule;
      }
      break;
    case SSM_st_Moving3To2_PlanningModule :
      if (Position == kcg_lit_int16(400)) {
        PlanningModule_state_act = SSM_st_Floor2_PlanningModule;
      }
      else if (Position > kcg_lit_int16(400)) {
        PlanningModule_state_act = SSM_st_Moving3To2_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Moving3To2_PlanningModule;
      }
      break;
    case SSM_st_Moving3To1_PlanningModule :
      if (Position == kcg_lit_int16(0)) {
        PlanningModule_state_act = SSM_st_Floor1_PlanningModule;
      }
      else if (Position > kcg_lit_int16(0)) {
        PlanningModule_state_act = SSM_st_Moving3To1_PlanningModule;
      }
      else if (Press1 & (Position > kcg_lit_int16(600))) {
        PlanningModule_state_act = SSM_st_Moving3To2_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Moving3To1_PlanningModule;
      }
      break;
    case SSM_st_Moving2To3_PlanningModule :
      if (Position == kcg_lit_int16(800)) {
        PlanningModule_state_act = SSM_st_Floor3_PlanningModule;
      }
      else if (Position < kcg_lit_int16(800)) {
        PlanningModule_state_act = SSM_st_Moving2To3_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Moving2To3_PlanningModule;
      }
      break;
    case SSM_st_Movin1To3_PlanningModule :
      if (Position == kcg_lit_int16(800)) {
        PlanningModule_state_act = SSM_st_Floor3_PlanningModule;
      }
      else if (Position < kcg_lit_int16(800)) {
        PlanningModule_state_act = SSM_st_Movin1To3_PlanningModule;
      }
      else if (Press1 & (Position < kcg_lit_int16(200))) {
        PlanningModule_state_act = SSM_st_Movin1To2_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Movin1To3_PlanningModule;
      }
      break;
    case SSM_st_Floor3_PlanningModule :
      if (Press0) {
        PlanningModule_state_act = SSM_st_Moving3To1_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Floor3_PlanningModule;
      }
      break;
    case SSM_st_Floor2_PlanningModule :
      if (Press3) {
        PlanningModule_state_act = SSM_st_Moving2To3_PlanningModule;
      }
      else if (Press0) {
        PlanningModule_state_act = SSM_st_Movin2To1_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Floor2_PlanningModule;
      }
      break;
    case SSM_st_Movin1To2_PlanningModule :
      if (Position < kcg_lit_int16(400)) {
        PlanningModule_state_act = SSM_st_Movin1To2_PlanningModule;
      }
      else if (Position == kcg_lit_int16(400)) {
        PlanningModule_state_act = SSM_st_Floor2_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Movin1To2_PlanningModule;
      }
      break;
    case SSM_st_Floor1_PlanningModule :
      if (Press1) {
        PlanningModule_state_act = SSM_st_Movin1To2_PlanningModule;
      }
      else if (Press2) {
        PlanningModule_state_act = SSM_st_Movin1To3_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Floor1_PlanningModule;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* PlanningModule: */
  switch (PlanningModule_state_act) {
    case SSM_st_Stop_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_true;
      outC->Move = Stop;
      outC->PlanningModule_state_nxt = SSM_st_Stop_PlanningModule;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Downward;
      outC->PlanningModule_state_nxt = SSM_st_Movin2To1_PlanningModule;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Downward;
      outC->PlanningModule_state_nxt = SSM_st_Moving3To2_PlanningModule;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Downward;
      outC->PlanningModule_state_nxt = SSM_st_Moving3To1_PlanningModule;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Upward;
      outC->PlanningModule_state_nxt = SSM_st_Moving2To3_PlanningModule;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Upward;
      outC->PlanningModule_state_nxt = SSM_st_Movin1To3_PlanningModule;
      break;
    case SSM_st_Floor3_PlanningModule :
      outC->AtFloor = kcg_true;
      outC->Doors = kcg_false;
      outC->CarMotorStop = kcg_true;
      outC->Move = Stop;
      outC->PlanningModule_state_nxt = SSM_st_Floor3_PlanningModule;
      break;
    case SSM_st_Floor2_PlanningModule :
      outC->AtFloor = kcg_true;
      outC->Doors = kcg_false;
      outC->CarMotorStop = kcg_true;
      outC->Move = Stop;
      outC->PlanningModule_state_nxt = SSM_st_Floor2_PlanningModule;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Upward;
      outC->PlanningModule_state_nxt = SSM_st_Movin1To2_PlanningModule;
      break;
    case SSM_st_Floor1_PlanningModule :
      outC->CarMotorStop = kcg_true;
      outC->Doors = Press8;
      outC->AtFloor = Press7;
      outC->Move = Stop;
      outC->PlanningModule_state_nxt = SSM_st_Floor1_PlanningModule;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void PlanningModule_init(outC_PlanningModule *outC)
{
  outC->CarMotorStop = kcg_true;
  outC->Doors = kcg_true;
  outC->AtFloor = kcg_true;
  outC->Move = Upward;
  outC->PlanningModule_state_nxt = SSM_st_Floor1_PlanningModule;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PlanningModule_reset(outC_PlanningModule *outC)
{
  outC->PlanningModule_state_nxt = SSM_st_Floor1_PlanningModule;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PlanningModule.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

