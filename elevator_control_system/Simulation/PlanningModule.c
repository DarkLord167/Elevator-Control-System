/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
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
  /* F1BS/ */
  kcg_bool F1BS_partial;
  /* F2BS/ */
  kcg_bool F2BS_partial;
  /* F3BS/ */
  kcg_bool F3BS_partial;
  /* SM2: */
  SSM_ST_SM2 SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 SM2_fired_partial;
  /* F1BS/ */
  kcg_bool _1_F1BS_partial;
  /* F2BS/ */
  kcg_bool _2_F2BS_partial;
  /* F3BS/ */
  kcg_bool _3_F3BS_partial;
  /* SM2: */
  SSM_ST_SM2 _4_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _5_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _6_SM2_fired_partial;
  /* F1BS/ */
  kcg_bool _7_F1BS_partial;
  /* F2BS/ */
  kcg_bool _8_F2BS_partial;
  /* F3BS/ */
  kcg_bool _9_F3BS_partial;
  /* SM2: */
  SSM_ST_SM2 _10_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _11_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _12_SM2_fired_partial;
  /* F1BS/ */
  kcg_bool _13_F1BS_partial;
  /* F2BS/ */
  kcg_bool _14_F2BS_partial;
  /* F3BS/ */
  kcg_bool _15_F3BS_partial;
  /* SM2: */
  SSM_ST_SM2 _16_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _17_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _18_SM2_fired_partial;
  /* F1BS/ */
  kcg_bool _19_F1BS_partial;
  /* F2BS/ */
  kcg_bool _20_F2BS_partial;
  /* F3BS/ */
  kcg_bool _21_F3BS_partial;
  /* SM2: */
  SSM_ST_SM2 _22_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _23_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _24_SM2_fired_partial;
  /* F1BS/ */
  kcg_bool _25_F1BS_partial;
  /* F2BS/ */
  kcg_bool _26_F2BS_partial;
  /* F3BS/ */
  kcg_bool _27_F3BS_partial;
  /* SM2: */
  SSM_ST_SM2 _28_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _29_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _30_SM2_fired_partial;
  /* F1BS/ */
  kcg_bool _31_F1BS_partial;
  /* F2BS/ */
  kcg_bool _32_F2BS_partial;
  /* F3BS/ */
  kcg_bool _33_F3BS_partial;
  /* SM2: */
  SSM_ST_SM2 _34_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _35_SM2_reset_nxt_partial;
  /* SM2: */
  SSM_TR_SM2 _36_SM2_fired_partial;
  /* SM2: */
  SSM_ST_SM2 SM2_state_act_partial;
  /* SM2: */
  kcg_bool SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 SM2_fired_strong_partial;
  /* SM2:State11:<6> */
  kcg_bool tr_6_guard_State11_SM2;
  /* SM2:State11:<5> */
  kcg_bool tr_5_guard_State11_SM2;
  /* SM2:State11:<4> */
  kcg_bool tr_4_guard_State11_SM2;
  /* SM2:State11:<3> */
  kcg_bool tr_3_guard_State11_SM2;
  /* SM2:State11:<2> */
  kcg_bool tr_2_guard_State11_SM2;
  /* SM2:State11:<1> */
  kcg_bool tr_1_guard_State11_SM2;
  /* SM2: */
  SSM_ST_SM2 _37_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _38_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _39_SM2_fired_strong_partial;
  /* SM2:State12:<1> */
  kcg_bool tr_1_guard_State12_SM2;
  /* SM2: */
  SSM_ST_SM2 _40_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _41_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _42_SM2_fired_strong_partial;
  /* SM2:State13:<1> */
  kcg_bool tr_1_guard_State13_SM2;
  /* SM2: */
  SSM_ST_SM2 _43_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _44_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _45_SM2_fired_strong_partial;
  /* SM2:State14:<1> */
  kcg_bool tr_1_guard_State14_SM2;
  /* SM2: */
  SSM_ST_SM2 _46_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _47_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _48_SM2_fired_strong_partial;
  /* SM2:State17:<1> */
  kcg_bool tr_1_guard_State17_SM2;
  /* SM2: */
  SSM_ST_SM2 _49_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _50_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _51_SM2_fired_strong_partial;
  /* SM2:State16:<1> */
  kcg_bool tr_1_guard_State16_SM2;
  /* SM2: */
  SSM_ST_SM2 _52_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _53_SM2_reset_act_partial;
  /* SM2: */
  SSM_TR_SM2 _54_SM2_fired_strong_partial;
  /* SM2:State15:<1> */
  kcg_bool tr_1_guard_State15_SM2;
  /* CarMotorStop/ */
  kcg_bool CarMotorStop_partial;
  /* Doors/ */
  kcg_bool Doors_partial;
  /* AtFloor/ */
  kcg_bool AtFloor_partial;
  /* Move/ */
  PDirection Move_partial;
  /* F1BR/ */
  kcg_bool F1BR_partial;
  /* F2BR/ */
  kcg_bool F2BR_partial;
  /* F3BR/ */
  kcg_bool F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _55_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _56_Doors_partial;
  /* AtFloor/ */
  kcg_bool _57_AtFloor_partial;
  /* Move/ */
  PDirection _58_Move_partial;
  /* F1BR/ */
  kcg_bool _59_F1BR_partial;
  /* F2BR/ */
  kcg_bool _60_F2BR_partial;
  /* F3BR/ */
  kcg_bool _61_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _62_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _63_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _64_PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _65_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _66_Doors_partial;
  /* AtFloor/ */
  kcg_bool _67_AtFloor_partial;
  /* Move/ */
  PDirection _68_Move_partial;
  /* F1BR/ */
  kcg_bool _69_F1BR_partial;
  /* F2BR/ */
  kcg_bool _70_F2BR_partial;
  /* F3BR/ */
  kcg_bool _71_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _72_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _73_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _74_PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _75_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _76_Doors_partial;
  /* AtFloor/ */
  kcg_bool _77_AtFloor_partial;
  /* Move/ */
  PDirection _78_Move_partial;
  /* F1BR/ */
  kcg_bool _79_F1BR_partial;
  /* F2BR/ */
  kcg_bool _80_F2BR_partial;
  /* F3BR/ */
  kcg_bool _81_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _82_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _83_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _84_PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _85_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _86_Doors_partial;
  /* AtFloor/ */
  kcg_bool _87_AtFloor_partial;
  /* Move/ */
  PDirection _88_Move_partial;
  /* F1BR/ */
  kcg_bool _89_F1BR_partial;
  /* F2BR/ */
  kcg_bool _90_F2BR_partial;
  /* F3BR/ */
  kcg_bool _91_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _92_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _93_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _94_PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _95_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _96_Doors_partial;
  /* AtFloor/ */
  kcg_bool _97_AtFloor_partial;
  /* Move/ */
  PDirection _98_Move_partial;
  /* F1BR/ */
  kcg_bool _99_F1BR_partial;
  /* F2BR/ */
  kcg_bool _100_F2BR_partial;
  /* F3BR/ */
  kcg_bool _101_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _102_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _103_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _104_PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _105_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _106_Doors_partial;
  /* AtFloor/ */
  kcg_bool _107_AtFloor_partial;
  /* Move/ */
  PDirection _108_Move_partial;
  /* F1BR/ */
  kcg_bool _109_F1BR_partial;
  /* F2BR/ */
  kcg_bool _110_F2BR_partial;
  /* F3BR/ */
  kcg_bool _111_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _112_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _113_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _114_PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _115_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _116_Doors_partial;
  /* AtFloor/ */
  kcg_bool _117_AtFloor_partial;
  /* Move/ */
  PDirection _118_Move_partial;
  /* F1BR/ */
  kcg_bool _119_F1BR_partial;
  /* F2BR/ */
  kcg_bool _120_F2BR_partial;
  /* F3BR/ */
  kcg_bool _121_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _122_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _123_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _124_PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _125_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _126_Doors_partial;
  /* AtFloor/ */
  kcg_bool _127_AtFloor_partial;
  /* Move/ */
  PDirection _128_Move_partial;
  /* F1BR/ */
  kcg_bool _129_F1BR_partial;
  /* F2BR/ */
  kcg_bool _130_F2BR_partial;
  /* F3BR/ */
  kcg_bool _131_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _132_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _133_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _134_PlanningModule_fired_partial;
  /* CarMotorStop/ */
  kcg_bool _135_CarMotorStop_partial;
  /* Doors/ */
  kcg_bool _136_Doors_partial;
  /* AtFloor/ */
  kcg_bool _137_AtFloor_partial;
  /* Move/ */
  PDirection _138_Move_partial;
  /* F1BR/ */
  kcg_bool _139_F1BR_partial;
  /* F2BR/ */
  kcg_bool _140_F2BR_partial;
  /* F3BR/ */
  kcg_bool _141_F3BR_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule _142_PlanningModule_state_nxt_partial;
  /* PlanningModule: */
  kcg_bool _143_PlanningModule_reset_nxt_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _144_PlanningModule_fired_partial;
  /* PlanningModule: */
  SSM_ST_PlanningModule PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule PlanningModule_fired_strong_partial;
  /* PlanningModule:Floor1:<2> */
  kcg_bool tr_2_guard_Floor1_PlanningModule;
  /* PlanningModule:Floor1:<1> */
  kcg_bool tr_1_guard_Floor1_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _145_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _146_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _147_PlanningModule_fired_strong_partial;
  /* PlanningModule:Movin1To2:<3> */
  kcg_bool tr_3_guard_Movin1To2_PlanningModule;
  /* PlanningModule:Movin1To2:<2> */
  kcg_bool tr_2_guard_Movin1To2_PlanningModule;
  /* PlanningModule:Movin1To2:<1> */
  kcg_bool tr_1_guard_Movin1To2_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _148_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _149_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _150_PlanningModule_fired_strong_partial;
  /* PlanningModule:Floor2:<2> */
  kcg_bool tr_2_guard_Floor2_PlanningModule;
  /* PlanningModule:Floor2:<1> */
  kcg_bool tr_1_guard_Floor2_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _151_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _152_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _153_PlanningModule_fired_strong_partial;
  /* PlanningModule:Floor3:<2> */
  kcg_bool tr_2_guard_Floor3_PlanningModule;
  /* PlanningModule:Floor3:<1> */
  kcg_bool tr_1_guard_Floor3_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _154_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _155_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _156_PlanningModule_fired_strong_partial;
  /* PlanningModule:Movin1To3:<3> */
  kcg_bool tr_3_guard_Movin1To3_PlanningModule;
  /* PlanningModule:Movin1To3:<2> */
  kcg_bool tr_2_guard_Movin1To3_PlanningModule;
  /* PlanningModule:Movin1To3:<1> */
  kcg_bool tr_1_guard_Movin1To3_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _157_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _158_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _159_PlanningModule_fired_strong_partial;
  /* PlanningModule:Moving2To3:<3> */
  kcg_bool tr_3_guard_Moving2To3_PlanningModule;
  /* PlanningModule:Moving2To3:<2> */
  kcg_bool tr_2_guard_Moving2To3_PlanningModule;
  /* PlanningModule:Moving2To3:<1> */
  kcg_bool tr_1_guard_Moving2To3_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _160_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _161_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _162_PlanningModule_fired_strong_partial;
  /* PlanningModule:Moving3To1:<4> */
  kcg_bool tr_4_guard_Moving3To1_PlanningModule;
  /* PlanningModule:Moving3To1:<3> */
  kcg_bool tr_3_guard_Moving3To1_PlanningModule;
  /* PlanningModule:Moving3To1:<2> */
  kcg_bool tr_2_guard_Moving3To1_PlanningModule;
  /* PlanningModule:Moving3To1:<1> */
  kcg_bool tr_1_guard_Moving3To1_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _163_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _164_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _165_PlanningModule_fired_strong_partial;
  /* PlanningModule:Moving3To2:<3> */
  kcg_bool tr_3_guard_Moving3To2_PlanningModule;
  /* PlanningModule:Moving3To2:<2> */
  kcg_bool tr_2_guard_Moving3To2_PlanningModule;
  /* PlanningModule:Moving3To2:<1> */
  kcg_bool tr_1_guard_Moving3To2_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _166_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _167_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _168_PlanningModule_fired_strong_partial;
  /* PlanningModule:Movin2To1:<3> */
  kcg_bool tr_3_guard_Movin2To1_PlanningModule;
  /* PlanningModule:Movin2To1:<2> */
  kcg_bool tr_2_guard_Movin2To1_PlanningModule;
  /* PlanningModule:Movin2To1:<1> */
  kcg_bool tr_1_guard_Movin2To1_PlanningModule;
  /* PlanningModule: */
  SSM_ST_PlanningModule _169_PlanningModule_state_act_partial;
  /* PlanningModule: */
  kcg_bool _170_PlanningModule_reset_act_partial;
  /* PlanningModule: */
  SSM_TR_PlanningModule _171_PlanningModule_fired_strong_partial;
  /* F3BR/ */
  kcg_bool last_F3BR;
  /* F2BR/ */
  kcg_bool last_F2BR;
  /* F1BR/ */
  kcg_bool last_F1BR;
  /* F3BS/ */
  kcg_bool last_F3BS;
  /* F2BS/ */
  kcg_bool last_F2BS;
  /* F1BS/ */
  kcg_bool last_F1BS;
  /* CarMotorStop/ */
  kcg_bool last_CarMotorStop;
  /* PlanningModule: */
  kcg_bool PlanningModule_reset_sel;
  /* PlanningModule: */
  kcg_bool PlanningModule_reset_prv;
  /* SM2: */
  kcg_bool SM2_reset_sel;
  /* SM2: */
  kcg_bool SM2_reset_prv;

  last_F3BR = outC->F3BR;
  last_F2BR = outC->F2BR;
  last_F1BR = outC->F1BR;
  last_F3BS = outC->F3BS;
  last_F2BS = outC->F2BS;
  last_F1BS = outC->F1BS;
  last_CarMotorStop = outC->CarMotorStop;
  outC->SM2_state_sel = outC->SM2_state_nxt;
  switch (outC->SM2_state_sel) {
    case SSM_st_State15_SM2 :
      tr_1_guard_State15_SM2 = kcg_true;
      if (tr_1_guard_State15_SM2) {
        _52_SM2_state_act_partial = SSM_st_State11_SM2;
      }
      else {
        _52_SM2_state_act_partial = SSM_st_State15_SM2;
      }
      break;
    case SSM_st_State16_SM2 :
      tr_1_guard_State16_SM2 = kcg_true;
      if (tr_1_guard_State16_SM2) {
        _49_SM2_state_act_partial = SSM_st_State11_SM2;
      }
      else {
        _49_SM2_state_act_partial = SSM_st_State16_SM2;
      }
      break;
    case SSM_st_State17_SM2 :
      tr_1_guard_State17_SM2 = kcg_true;
      if (tr_1_guard_State17_SM2) {
        _46_SM2_state_act_partial = SSM_st_State11_SM2;
      }
      else {
        _46_SM2_state_act_partial = SSM_st_State17_SM2;
      }
      break;
    case SSM_st_State14_SM2 :
      tr_1_guard_State14_SM2 = kcg_true;
      if (tr_1_guard_State14_SM2) {
        _43_SM2_state_act_partial = SSM_st_State11_SM2;
      }
      else {
        _43_SM2_state_act_partial = SSM_st_State14_SM2;
      }
      break;
    case SSM_st_State13_SM2 :
      tr_1_guard_State13_SM2 = kcg_true;
      if (tr_1_guard_State13_SM2) {
        _40_SM2_state_act_partial = SSM_st_State11_SM2;
      }
      else {
        _40_SM2_state_act_partial = SSM_st_State13_SM2;
      }
      break;
    case SSM_st_State12_SM2 :
      tr_1_guard_State12_SM2 = kcg_true;
      if (tr_1_guard_State12_SM2) {
        _37_SM2_state_act_partial = SSM_st_State11_SM2;
      }
      else {
        _37_SM2_state_act_partial = SSM_st_State12_SM2;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->PlanningModule_state_sel = outC->PlanningModule_state_nxt;
  /* PlanningModule: */
  switch (outC->PlanningModule_state_sel) {
    case SSM_st_Stop_PlanningModule :
      _169_PlanningModule_state_act_partial = SSM_st_Stop_PlanningModule;
      outC->PlanningModule_state_act = _169_PlanningModule_state_act_partial;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      tr_3_guard_Movin2To1_PlanningModule = Press3 == kcg_true;
      tr_2_guard_Movin2To1_PlanningModule = Position > kcg_lit_int16(0);
      tr_1_guard_Movin2To1_PlanningModule = Position == kcg_lit_int16(0);
      if (tr_1_guard_Movin2To1_PlanningModule) {
        _166_PlanningModule_state_act_partial = SSM_st_Floor1_PlanningModule;
      }
      else if (tr_2_guard_Movin2To1_PlanningModule) {
        _166_PlanningModule_state_act_partial = SSM_st_Movin2To1_PlanningModule;
      }
      else if (tr_3_guard_Movin2To1_PlanningModule) {
        _166_PlanningModule_state_act_partial = SSM_st_Stop_PlanningModule;
      }
      else {
        _166_PlanningModule_state_act_partial = SSM_st_Movin2To1_PlanningModule;
      }
      outC->PlanningModule_state_act = _166_PlanningModule_state_act_partial;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      tr_3_guard_Moving3To2_PlanningModule = Press3 == kcg_true;
      tr_2_guard_Moving3To2_PlanningModule = Position > kcg_lit_int16(400);
      tr_1_guard_Moving3To2_PlanningModule = Position == kcg_lit_int16(400);
      if (tr_1_guard_Moving3To2_PlanningModule) {
        _163_PlanningModule_state_act_partial = SSM_st_Floor2_PlanningModule;
      }
      else if (tr_2_guard_Moving3To2_PlanningModule) {
        _163_PlanningModule_state_act_partial = SSM_st_Moving3To2_PlanningModule;
      }
      else if (tr_3_guard_Moving3To2_PlanningModule) {
        _163_PlanningModule_state_act_partial = SSM_st_Stop_PlanningModule;
      }
      else {
        _163_PlanningModule_state_act_partial = SSM_st_Moving3To2_PlanningModule;
      }
      outC->PlanningModule_state_act = _163_PlanningModule_state_act_partial;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      tr_4_guard_Moving3To1_PlanningModule = Press3 == kcg_true;
      tr_3_guard_Moving3To1_PlanningModule = (Press1 == kcg_true) & (Position >
          kcg_lit_int16(600));
      tr_2_guard_Moving3To1_PlanningModule = Position > kcg_lit_int16(0);
      tr_1_guard_Moving3To1_PlanningModule = Position == kcg_lit_int16(0);
      if (tr_1_guard_Moving3To1_PlanningModule) {
        _160_PlanningModule_state_act_partial = SSM_st_Floor1_PlanningModule;
      }
      else if (tr_2_guard_Moving3To1_PlanningModule) {
        _160_PlanningModule_state_act_partial = SSM_st_Moving3To1_PlanningModule;
      }
      else if (tr_3_guard_Moving3To1_PlanningModule) {
        _160_PlanningModule_state_act_partial = SSM_st_Moving3To2_PlanningModule;
      }
      else if (tr_4_guard_Moving3To1_PlanningModule) {
        _160_PlanningModule_state_act_partial = SSM_st_Stop_PlanningModule;
      }
      else {
        _160_PlanningModule_state_act_partial = SSM_st_Moving3To1_PlanningModule;
      }
      outC->PlanningModule_state_act = _160_PlanningModule_state_act_partial;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      tr_3_guard_Moving2To3_PlanningModule = Press3 == kcg_true;
      tr_2_guard_Moving2To3_PlanningModule = Position < kcg_lit_int16(800);
      tr_1_guard_Moving2To3_PlanningModule = Position == kcg_lit_int16(800);
      if (tr_1_guard_Moving2To3_PlanningModule) {
        _157_PlanningModule_state_act_partial = SSM_st_Floor3_PlanningModule;
      }
      else if (tr_2_guard_Moving2To3_PlanningModule) {
        _157_PlanningModule_state_act_partial = SSM_st_Moving2To3_PlanningModule;
      }
      else if (tr_3_guard_Moving2To3_PlanningModule) {
        _157_PlanningModule_state_act_partial = SSM_st_Stop_PlanningModule;
      }
      else {
        _157_PlanningModule_state_act_partial = SSM_st_Moving2To3_PlanningModule;
      }
      outC->PlanningModule_state_act = _157_PlanningModule_state_act_partial;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      tr_3_guard_Movin1To3_PlanningModule = (Press1 == kcg_true) & (Position <
          kcg_lit_int16(200));
      tr_2_guard_Movin1To3_PlanningModule = Position < kcg_lit_int16(800);
      tr_1_guard_Movin1To3_PlanningModule = Position == kcg_lit_int16(800);
      if (tr_1_guard_Movin1To3_PlanningModule) {
        _154_PlanningModule_state_act_partial = SSM_st_Floor3_PlanningModule;
      }
      else if (tr_2_guard_Movin1To3_PlanningModule) {
        _154_PlanningModule_state_act_partial = SSM_st_Movin1To3_PlanningModule;
      }
      else if (tr_3_guard_Movin1To3_PlanningModule) {
        _154_PlanningModule_state_act_partial = SSM_st_Movin1To2_PlanningModule;
      }
      else {
        _154_PlanningModule_state_act_partial = SSM_st_Movin1To3_PlanningModule;
      }
      outC->PlanningModule_state_act = _154_PlanningModule_state_act_partial;
      break;
    case SSM_st_Floor3_PlanningModule :
      tr_2_guard_Floor3_PlanningModule = last_F2BS == kcg_true;
      tr_1_guard_Floor3_PlanningModule = last_F1BS == kcg_true;
      if (tr_1_guard_Floor3_PlanningModule) {
        _151_PlanningModule_state_act_partial = SSM_st_Moving3To1_PlanningModule;
      }
      else if (tr_2_guard_Floor3_PlanningModule) {
        _151_PlanningModule_state_act_partial = SSM_st_Moving3To2_PlanningModule;
      }
      else {
        _151_PlanningModule_state_act_partial = SSM_st_Floor3_PlanningModule;
      }
      outC->PlanningModule_state_act = _151_PlanningModule_state_act_partial;
      break;
    case SSM_st_Floor2_PlanningModule :
      tr_2_guard_Floor2_PlanningModule = Press0 == kcg_true;
      tr_1_guard_Floor2_PlanningModule = last_F3BS == kcg_true;
      if (tr_1_guard_Floor2_PlanningModule) {
        _148_PlanningModule_state_act_partial = SSM_st_Moving2To3_PlanningModule;
      }
      else if (tr_2_guard_Floor2_PlanningModule) {
        _148_PlanningModule_state_act_partial = SSM_st_Movin2To1_PlanningModule;
      }
      else {
        _148_PlanningModule_state_act_partial = SSM_st_Floor2_PlanningModule;
      }
      outC->PlanningModule_state_act = _148_PlanningModule_state_act_partial;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      tr_3_guard_Movin1To2_PlanningModule = Press3 == kcg_true;
      tr_2_guard_Movin1To2_PlanningModule = Position == kcg_lit_int16(400);
      tr_1_guard_Movin1To2_PlanningModule = Position < kcg_lit_int16(400);
      if (tr_1_guard_Movin1To2_PlanningModule) {
        _145_PlanningModule_state_act_partial = SSM_st_Movin1To2_PlanningModule;
      }
      else if (tr_2_guard_Movin1To2_PlanningModule) {
        _145_PlanningModule_state_act_partial = SSM_st_Floor2_PlanningModule;
      }
      else if (tr_3_guard_Movin1To2_PlanningModule) {
        _145_PlanningModule_state_act_partial = SSM_st_Stop_PlanningModule;
      }
      else {
        _145_PlanningModule_state_act_partial = SSM_st_Movin1To2_PlanningModule;
      }
      outC->PlanningModule_state_act = _145_PlanningModule_state_act_partial;
      break;
    case SSM_st_Floor1_PlanningModule :
      tr_2_guard_Floor1_PlanningModule = last_F3BS == kcg_true;
      tr_1_guard_Floor1_PlanningModule = last_F2BS == kcg_true;
      if (tr_1_guard_Floor1_PlanningModule) {
        PlanningModule_state_act_partial = SSM_st_Movin1To2_PlanningModule;
      }
      else if (tr_2_guard_Floor1_PlanningModule) {
        PlanningModule_state_act_partial = SSM_st_Movin1To3_PlanningModule;
      }
      else {
        PlanningModule_state_act_partial = SSM_st_Floor1_PlanningModule;
      }
      outC->PlanningModule_state_act = PlanningModule_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* PlanningModule: */
  switch (outC->PlanningModule_state_act) {
    case SSM_st_Stop_PlanningModule :
      _141_F3BR_partial = last_F3BR;
      outC->F3BR = _141_F3BR_partial;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      _131_F3BR_partial = last_F3BR;
      outC->F3BR = _131_F3BR_partial;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      _121_F3BR_partial = last_F3BR;
      outC->F3BR = _121_F3BR_partial;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      _111_F3BR_partial = last_F3BR;
      outC->F3BR = _111_F3BR_partial;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      _101_F3BR_partial = last_F3BR;
      outC->F3BR = _101_F3BR_partial;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      _91_F3BR_partial = last_F3BR;
      outC->F3BR = _91_F3BR_partial;
      break;
    case SSM_st_Floor3_PlanningModule :
      outC->_L8_Floor3_PlanningModule = kcg_true;
      _81_F3BR_partial = outC->_L8_Floor3_PlanningModule;
      outC->F3BR = _81_F3BR_partial;
      break;
    case SSM_st_Floor2_PlanningModule :
      _71_F3BR_partial = last_F3BR;
      outC->F3BR = _71_F3BR_partial;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      _61_F3BR_partial = last_F3BR;
      outC->F3BR = _61_F3BR_partial;
      break;
    case SSM_st_Floor1_PlanningModule :
      F3BR_partial = last_F3BR;
      outC->F3BR = F3BR_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM2_state_sel) {
    case SSM_st_State11_SM2 :
      tr_6_guard_State11_SM2 = outC->F3BR == kcg_true;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* PlanningModule: */
  switch (outC->PlanningModule_state_act) {
    case SSM_st_Stop_PlanningModule :
      _140_F2BR_partial = last_F2BR;
      outC->F2BR = _140_F2BR_partial;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      _130_F2BR_partial = last_F2BR;
      outC->F2BR = _130_F2BR_partial;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      _120_F2BR_partial = last_F2BR;
      outC->F2BR = _120_F2BR_partial;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      _110_F2BR_partial = last_F2BR;
      outC->F2BR = _110_F2BR_partial;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      _100_F2BR_partial = last_F2BR;
      outC->F2BR = _100_F2BR_partial;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      _90_F2BR_partial = last_F2BR;
      outC->F2BR = _90_F2BR_partial;
      break;
    case SSM_st_Floor3_PlanningModule :
      _80_F2BR_partial = last_F2BR;
      outC->F2BR = _80_F2BR_partial;
      break;
    case SSM_st_Floor2_PlanningModule :
      outC->_L9_Floor2_PlanningModule = kcg_true;
      _70_F2BR_partial = outC->_L9_Floor2_PlanningModule;
      outC->F2BR = _70_F2BR_partial;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      _60_F2BR_partial = last_F2BR;
      outC->F2BR = _60_F2BR_partial;
      break;
    case SSM_st_Floor1_PlanningModule :
      F2BR_partial = last_F2BR;
      outC->F2BR = F2BR_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM2_state_sel) {
    case SSM_st_State11_SM2 :
      tr_5_guard_State11_SM2 = outC->F2BR == kcg_true;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* PlanningModule: */
  switch (outC->PlanningModule_state_act) {
    case SSM_st_Stop_PlanningModule :
      _139_F1BR_partial = last_F1BR;
      outC->F1BR = _139_F1BR_partial;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      _129_F1BR_partial = last_F1BR;
      outC->F1BR = _129_F1BR_partial;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      _119_F1BR_partial = last_F1BR;
      outC->F1BR = _119_F1BR_partial;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      _109_F1BR_partial = last_F1BR;
      outC->F1BR = _109_F1BR_partial;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      _99_F1BR_partial = last_F1BR;
      outC->F1BR = _99_F1BR_partial;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      _89_F1BR_partial = last_F1BR;
      outC->F1BR = _89_F1BR_partial;
      break;
    case SSM_st_Floor3_PlanningModule :
      _79_F1BR_partial = last_F1BR;
      outC->F1BR = _79_F1BR_partial;
      break;
    case SSM_st_Floor2_PlanningModule :
      _69_F1BR_partial = last_F1BR;
      outC->F1BR = _69_F1BR_partial;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      _59_F1BR_partial = last_F1BR;
      outC->F1BR = _59_F1BR_partial;
      break;
    case SSM_st_Floor1_PlanningModule :
      outC->_L9_Floor1_PlanningModule = kcg_true;
      F1BR_partial = outC->_L9_Floor1_PlanningModule;
      outC->F1BR = F1BR_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM2: */
  switch (outC->SM2_state_sel) {
    case SSM_st_State15_SM2 :
      outC->SM2_state_act = _52_SM2_state_act_partial;
      break;
    case SSM_st_State16_SM2 :
      outC->SM2_state_act = _49_SM2_state_act_partial;
      break;
    case SSM_st_State17_SM2 :
      outC->SM2_state_act = _46_SM2_state_act_partial;
      break;
    case SSM_st_State14_SM2 :
      outC->SM2_state_act = _43_SM2_state_act_partial;
      break;
    case SSM_st_State13_SM2 :
      outC->SM2_state_act = _40_SM2_state_act_partial;
      break;
    case SSM_st_State12_SM2 :
      outC->SM2_state_act = _37_SM2_state_act_partial;
      break;
    case SSM_st_State11_SM2 :
      tr_4_guard_State11_SM2 = outC->F1BR == kcg_true;
      tr_3_guard_State11_SM2 = Press2 == kcg_true;
      tr_2_guard_State11_SM2 = Press1 == kcg_true;
      tr_1_guard_State11_SM2 = Press0 == kcg_true;
      if (tr_1_guard_State11_SM2) {
        SM2_state_act_partial = SSM_st_State12_SM2;
      }
      else if (tr_2_guard_State11_SM2) {
        SM2_state_act_partial = SSM_st_State13_SM2;
      }
      else if (tr_3_guard_State11_SM2) {
        SM2_state_act_partial = SSM_st_State14_SM2;
      }
      else if (tr_4_guard_State11_SM2) {
        SM2_state_act_partial = SSM_st_State16_SM2;
      }
      else if (tr_5_guard_State11_SM2) {
        SM2_state_act_partial = SSM_st_State17_SM2;
      }
      else if (tr_6_guard_State11_SM2) {
        SM2_state_act_partial = SSM_st_State15_SM2;
      }
      else {
        SM2_state_act_partial = SSM_st_State11_SM2;
      }
      outC->SM2_state_act = SM2_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM2_state_act) {
    case SSM_st_State15_SM2 :
      _32_F2BS_partial = last_F2BS;
      _31_F1BS_partial = last_F1BS;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM2: */
  switch (outC->SM2_state_sel) {
    case SSM_st_State15_SM2 :
      if (tr_1_guard_State15_SM2) {
        _54_SM2_fired_strong_partial = SSM_TR_State15_State11_1_State15_SM2;
      }
      else {
        _54_SM2_fired_strong_partial = _33_SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _54_SM2_fired_strong_partial;
      break;
    case SSM_st_State16_SM2 :
      if (tr_1_guard_State16_SM2) {
        _51_SM2_fired_strong_partial = SSM_TR_State16_State11_1_State16_SM2;
      }
      else {
        _51_SM2_fired_strong_partial = _33_SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _51_SM2_fired_strong_partial;
      break;
    case SSM_st_State17_SM2 :
      if (tr_1_guard_State17_SM2) {
        _48_SM2_fired_strong_partial = SSM_TR_State17_State11_1_State17_SM2;
      }
      else {
        _48_SM2_fired_strong_partial = _33_SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _48_SM2_fired_strong_partial;
      break;
    case SSM_st_State14_SM2 :
      if (tr_1_guard_State14_SM2) {
        _45_SM2_fired_strong_partial = SSM_TR_State14_State11_1_State14_SM2;
      }
      else {
        _45_SM2_fired_strong_partial = _33_SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _45_SM2_fired_strong_partial;
      break;
    case SSM_st_State13_SM2 :
      if (tr_1_guard_State13_SM2) {
        _42_SM2_fired_strong_partial = SSM_TR_State13_State11_1_State13_SM2;
      }
      else {
        _42_SM2_fired_strong_partial = _33_SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _42_SM2_fired_strong_partial;
      break;
    case SSM_st_State12_SM2 :
      if (tr_1_guard_State12_SM2) {
        _39_SM2_fired_strong_partial = SSM_TR_State12_State11_1_State12_SM2;
      }
      else {
        _39_SM2_fired_strong_partial = _33_SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _39_SM2_fired_strong_partial;
      break;
    case SSM_st_State11_SM2 :
      if (tr_1_guard_State11_SM2) {
        SM2_fired_strong_partial = SSM_TR_State11_State12_1_State11_SM2;
      }
      else if (tr_2_guard_State11_SM2) {
        SM2_fired_strong_partial = SSM_TR_State11_State13_2_State11_SM2;
      }
      else if (tr_3_guard_State11_SM2) {
        SM2_fired_strong_partial = SSM_TR_State11_State14_3_State11_SM2;
      }
      else if (tr_4_guard_State11_SM2) {
        SM2_fired_strong_partial = SSM_TR_State11_State16_4_State11_SM2;
      }
      else if (tr_5_guard_State11_SM2) {
        SM2_fired_strong_partial = SSM_TR_State11_State17_5_State11_SM2;
      }
      else if (tr_6_guard_State11_SM2) {
        SM2_fired_strong_partial = SSM_TR_State11_State15_6_State11_SM2;
      }
      else {
        SM2_fired_strong_partial = _33_SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = SM2_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM2: */
  switch (outC->SM2_state_act) {
    case SSM_st_State15_SM2 :
      _36_SM2_fired_partial = outC->SM2_fired_strong;
      _35_SM2_reset_nxt_partial = kcg_false;
      _34_SM2_state_nxt_partial = SSM_st_State15_SM2;
      outC->_L2_State15_SM2 = kcg_false;
      _33_F3BS_partial = outC->_L2_State15_SM2;
      outC->F1BS = _31_F1BS_partial;
      outC->F2BS = _32_F2BS_partial;
      outC->F3BS = _33_F3BS_partial;
      outC->SM2_state_nxt = _34_SM2_state_nxt_partial;
      break;
    case SSM_st_State16_SM2 :
      _27_F3BS_partial = last_F3BS;
      _26_F2BS_partial = last_F2BS;
      _30_SM2_fired_partial = outC->SM2_fired_strong;
      _29_SM2_reset_nxt_partial = kcg_false;
      _28_SM2_state_nxt_partial = SSM_st_State16_SM2;
      outC->_L2_State16_SM2 = kcg_false;
      _25_F1BS_partial = outC->_L2_State16_SM2;
      outC->F1BS = _25_F1BS_partial;
      outC->F2BS = _26_F2BS_partial;
      outC->F3BS = _27_F3BS_partial;
      outC->SM2_state_nxt = _28_SM2_state_nxt_partial;
      break;
    case SSM_st_State17_SM2 :
      _21_F3BS_partial = last_F3BS;
      _19_F1BS_partial = last_F1BS;
      _24_SM2_fired_partial = outC->SM2_fired_strong;
      _23_SM2_reset_nxt_partial = kcg_false;
      _22_SM2_state_nxt_partial = SSM_st_State17_SM2;
      outC->_L2_State17_SM2 = kcg_false;
      _20_F2BS_partial = outC->_L2_State17_SM2;
      outC->F1BS = _19_F1BS_partial;
      outC->F2BS = _20_F2BS_partial;
      outC->F3BS = _21_F3BS_partial;
      outC->SM2_state_nxt = _22_SM2_state_nxt_partial;
      break;
    case SSM_st_State14_SM2 :
      _14_F2BS_partial = last_F2BS;
      _13_F1BS_partial = last_F1BS;
      _18_SM2_fired_partial = outC->SM2_fired_strong;
      _17_SM2_reset_nxt_partial = kcg_false;
      _16_SM2_state_nxt_partial = SSM_st_State14_SM2;
      outC->_L2_State14_SM2 = kcg_true;
      _15_F3BS_partial = outC->_L2_State14_SM2;
      outC->F1BS = _13_F1BS_partial;
      outC->F2BS = _14_F2BS_partial;
      outC->F3BS = _15_F3BS_partial;
      outC->SM2_state_nxt = _16_SM2_state_nxt_partial;
      break;
    case SSM_st_State13_SM2 :
      _9_F3BS_partial = last_F3BS;
      _7_F1BS_partial = last_F1BS;
      _12_SM2_fired_partial = outC->SM2_fired_strong;
      _11_SM2_reset_nxt_partial = kcg_false;
      _10_SM2_state_nxt_partial = SSM_st_State13_SM2;
      outC->_L2_State13_SM2 = kcg_true;
      _8_F2BS_partial = outC->_L2_State13_SM2;
      outC->F1BS = _7_F1BS_partial;
      outC->F2BS = _8_F2BS_partial;
      outC->F3BS = _9_F3BS_partial;
      outC->SM2_state_nxt = _10_SM2_state_nxt_partial;
      break;
    case SSM_st_State12_SM2 :
      _3_F3BS_partial = last_F3BS;
      _2_F2BS_partial = last_F2BS;
      _6_SM2_fired_partial = outC->SM2_fired_strong;
      _5_SM2_reset_nxt_partial = kcg_false;
      _4_SM2_state_nxt_partial = SSM_st_State12_SM2;
      outC->_L2_State12_SM2 = kcg_true;
      _1_F1BS_partial = outC->_L2_State12_SM2;
      outC->F1BS = _1_F1BS_partial;
      outC->F2BS = _2_F2BS_partial;
      outC->F3BS = _3_F3BS_partial;
      outC->SM2_state_nxt = _4_SM2_state_nxt_partial;
      break;
    case SSM_st_State11_SM2 :
      F3BS_partial = last_F3BS;
      F2BS_partial = last_F2BS;
      F1BS_partial = last_F1BS;
      SM2_fired_partial = outC->SM2_fired_strong;
      SM2_reset_nxt_partial = kcg_false;
      SM2_state_nxt_partial = SSM_st_State11_SM2;
      outC->F1BS = F1BS_partial;
      outC->F2BS = F2BS_partial;
      outC->F3BS = F3BS_partial;
      outC->SM2_state_nxt = SM2_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM2_reset_sel = outC->SM2_reset_nxt;
  /* SM2: */
  switch (outC->SM2_state_act) {
    case SSM_st_State15_SM2 :
      outC->SM2_reset_nxt = _35_SM2_reset_nxt_partial;
      outC->SM2_fired = _36_SM2_fired_partial;
      break;
    case SSM_st_State16_SM2 :
      outC->SM2_reset_nxt = _29_SM2_reset_nxt_partial;
      outC->SM2_fired = _30_SM2_fired_partial;
      break;
    case SSM_st_State17_SM2 :
      outC->SM2_reset_nxt = _23_SM2_reset_nxt_partial;
      outC->SM2_fired = _24_SM2_fired_partial;
      break;
    case SSM_st_State14_SM2 :
      outC->SM2_reset_nxt = _17_SM2_reset_nxt_partial;
      outC->SM2_fired = _18_SM2_fired_partial;
      break;
    case SSM_st_State13_SM2 :
      outC->SM2_reset_nxt = _11_SM2_reset_nxt_partial;
      outC->SM2_fired = _12_SM2_fired_partial;
      break;
    case SSM_st_State12_SM2 :
      outC->SM2_reset_nxt = _5_SM2_reset_nxt_partial;
      outC->SM2_fired = _6_SM2_fired_partial;
      break;
    case SSM_st_State11_SM2 :
      outC->SM2_reset_nxt = SM2_reset_nxt_partial;
      outC->SM2_fired = SM2_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM2_state_sel) {
    case SSM_st_State15_SM2 :
      _53_SM2_reset_act_partial = tr_1_guard_State15_SM2;
      break;
    case SSM_st_State16_SM2 :
      _50_SM2_reset_act_partial = tr_1_guard_State16_SM2;
      break;
    case SSM_st_State17_SM2 :
      _47_SM2_reset_act_partial = tr_1_guard_State17_SM2;
      break;
    case SSM_st_State14_SM2 :
      _44_SM2_reset_act_partial = tr_1_guard_State14_SM2;
      break;
    case SSM_st_State13_SM2 :
      _41_SM2_reset_act_partial = tr_1_guard_State13_SM2;
      break;
    case SSM_st_State12_SM2 :
      _38_SM2_reset_act_partial = tr_1_guard_State12_SM2;
      break;
    case SSM_st_State11_SM2 :
      if (tr_1_guard_State11_SM2) {
        SM2_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_State11_SM2) {
        SM2_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_State11_SM2) {
        SM2_reset_act_partial = kcg_true;
      }
      else if (tr_4_guard_State11_SM2) {
        SM2_reset_act_partial = kcg_true;
      }
      else if (tr_5_guard_State11_SM2) {
        SM2_reset_act_partial = kcg_true;
      }
      else {
        SM2_reset_act_partial = tr_6_guard_State11_SM2;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM2_reset_prv = outC->SM2_reset_act;
  /* SM2: */
  switch (outC->SM2_state_sel) {
    case SSM_st_State15_SM2 :
      outC->SM2_reset_act = _53_SM2_reset_act_partial;
      break;
    case SSM_st_State16_SM2 :
      outC->SM2_reset_act = _50_SM2_reset_act_partial;
      break;
    case SSM_st_State17_SM2 :
      outC->SM2_reset_act = _47_SM2_reset_act_partial;
      break;
    case SSM_st_State14_SM2 :
      outC->SM2_reset_act = _44_SM2_reset_act_partial;
      break;
    case SSM_st_State13_SM2 :
      outC->SM2_reset_act = _41_SM2_reset_act_partial;
      break;
    case SSM_st_State12_SM2 :
      outC->SM2_reset_act = _38_SM2_reset_act_partial;
      break;
    case SSM_st_State11_SM2 :
      outC->SM2_reset_act = SM2_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* PlanningModule: */
  switch (outC->PlanningModule_state_sel) {
    case SSM_st_Stop_PlanningModule :
      _171_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      outC->PlanningModule_fired_strong = _171_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      if (tr_1_guard_Movin2To1_PlanningModule) {
        _168_PlanningModule_fired_strong_partial =
          SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule;
      }
      else if (tr_2_guard_Movin2To1_PlanningModule) {
        _168_PlanningModule_fired_strong_partial =
          SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule;
      }
      else if (tr_3_guard_Movin2To1_PlanningModule) {
        _168_PlanningModule_fired_strong_partial =
          SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule;
      }
      else {
        _168_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = _168_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      if (tr_1_guard_Moving3To2_PlanningModule) {
        _165_PlanningModule_fired_strong_partial =
          SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule;
      }
      else if (tr_2_guard_Moving3To2_PlanningModule) {
        _165_PlanningModule_fired_strong_partial =
          SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule;
      }
      else if (tr_3_guard_Moving3To2_PlanningModule) {
        _165_PlanningModule_fired_strong_partial =
          SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule;
      }
      else {
        _165_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = _165_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      if (tr_1_guard_Moving3To1_PlanningModule) {
        _162_PlanningModule_fired_strong_partial =
          SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule;
      }
      else if (tr_2_guard_Moving3To1_PlanningModule) {
        _162_PlanningModule_fired_strong_partial =
          SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule;
      }
      else if (tr_3_guard_Moving3To1_PlanningModule) {
        _162_PlanningModule_fired_strong_partial =
          SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule;
      }
      else if (tr_4_guard_Moving3To1_PlanningModule) {
        _162_PlanningModule_fired_strong_partial =
          SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule;
      }
      else {
        _162_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = _162_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      if (tr_1_guard_Moving2To3_PlanningModule) {
        _159_PlanningModule_fired_strong_partial =
          SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule;
      }
      else if (tr_2_guard_Moving2To3_PlanningModule) {
        _159_PlanningModule_fired_strong_partial =
          SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule;
      }
      else if (tr_3_guard_Moving2To3_PlanningModule) {
        _159_PlanningModule_fired_strong_partial =
          SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule;
      }
      else {
        _159_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = _159_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      if (tr_1_guard_Movin1To3_PlanningModule) {
        _156_PlanningModule_fired_strong_partial =
          SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule;
      }
      else if (tr_2_guard_Movin1To3_PlanningModule) {
        _156_PlanningModule_fired_strong_partial =
          SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule;
      }
      else if (tr_3_guard_Movin1To3_PlanningModule) {
        _156_PlanningModule_fired_strong_partial =
          SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule;
      }
      else {
        _156_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = _156_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Floor3_PlanningModule :
      if (tr_1_guard_Floor3_PlanningModule) {
        _153_PlanningModule_fired_strong_partial =
          SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule;
      }
      else if (tr_2_guard_Floor3_PlanningModule) {
        _153_PlanningModule_fired_strong_partial =
          SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule;
      }
      else {
        _153_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = _153_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Floor2_PlanningModule :
      if (tr_1_guard_Floor2_PlanningModule) {
        _150_PlanningModule_fired_strong_partial =
          SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule;
      }
      else if (tr_2_guard_Floor2_PlanningModule) {
        _150_PlanningModule_fired_strong_partial =
          SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule;
      }
      else {
        _150_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = _150_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      if (tr_1_guard_Movin1To2_PlanningModule) {
        _147_PlanningModule_fired_strong_partial =
          SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule;
      }
      else if (tr_2_guard_Movin1To2_PlanningModule) {
        _147_PlanningModule_fired_strong_partial =
          SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule;
      }
      else if (tr_3_guard_Movin1To2_PlanningModule) {
        _147_PlanningModule_fired_strong_partial =
          SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule;
      }
      else {
        _147_PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = _147_PlanningModule_fired_strong_partial;
      break;
    case SSM_st_Floor1_PlanningModule :
      if (tr_1_guard_Floor1_PlanningModule) {
        PlanningModule_fired_strong_partial =
          SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule;
      }
      else if (tr_2_guard_Floor1_PlanningModule) {
        PlanningModule_fired_strong_partial =
          SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule;
      }
      else {
        PlanningModule_fired_strong_partial = SSM_TR_no_trans_PlanningModule;
      }
      outC->PlanningModule_fired_strong = PlanningModule_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* PlanningModule: */
  switch (outC->PlanningModule_state_act) {
    case SSM_st_Stop_PlanningModule :
      _144_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _143_PlanningModule_reset_nxt_partial = kcg_false;
      _142_PlanningModule_state_nxt_partial = SSM_st_Stop_PlanningModule;
      outC->_L6_Stop_PlanningModule = kcg_true;
      _135_CarMotorStop_partial = outC->_L6_Stop_PlanningModule;
      outC->_L5_Stop_PlanningModule = Stop;
      outC->_L4_Stop_PlanningModule = kcg_false;
      _137_AtFloor_partial = outC->_L4_Stop_PlanningModule;
      outC->_L2_Stop_PlanningModule = kcg_true;
      _136_Doors_partial = outC->_L2_Stop_PlanningModule;
      _138_Move_partial = outC->_L5_Stop_PlanningModule;
      outC->CarMotorStop = _135_CarMotorStop_partial;
      outC->Doors = _136_Doors_partial;
      outC->AtFloor = _137_AtFloor_partial;
      outC->Move = _138_Move_partial;
      outC->PlanningModule_state_nxt = _142_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      _134_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _133_PlanningModule_reset_nxt_partial = kcg_false;
      _132_PlanningModule_state_nxt_partial = SSM_st_Movin2To1_PlanningModule;
      outC->_L6_Movin2To1_PlanningModule = kcg_false;
      _125_CarMotorStop_partial = outC->_L6_Movin2To1_PlanningModule;
      outC->_L5_Movin2To1_PlanningModule = Downward;
      outC->_L4_Movin2To1_PlanningModule = kcg_false;
      _127_AtFloor_partial = outC->_L4_Movin2To1_PlanningModule;
      outC->_L2_Movin2To1_PlanningModule = kcg_true;
      _126_Doors_partial = outC->_L2_Movin2To1_PlanningModule;
      _128_Move_partial = outC->_L5_Movin2To1_PlanningModule;
      outC->CarMotorStop = _125_CarMotorStop_partial;
      outC->Doors = _126_Doors_partial;
      outC->AtFloor = _127_AtFloor_partial;
      outC->Move = _128_Move_partial;
      outC->PlanningModule_state_nxt = _132_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      _124_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _123_PlanningModule_reset_nxt_partial = kcg_false;
      _122_PlanningModule_state_nxt_partial = SSM_st_Moving3To2_PlanningModule;
      outC->_L6_Moving3To2_PlanningModule = kcg_false;
      _115_CarMotorStop_partial = outC->_L6_Moving3To2_PlanningModule;
      outC->_L5_Moving3To2_PlanningModule = Downward;
      outC->_L4_Moving3To2_PlanningModule = kcg_false;
      _117_AtFloor_partial = outC->_L4_Moving3To2_PlanningModule;
      outC->_L2_Moving3To2_PlanningModule = kcg_true;
      _116_Doors_partial = outC->_L2_Moving3To2_PlanningModule;
      _118_Move_partial = outC->_L5_Moving3To2_PlanningModule;
      outC->CarMotorStop = _115_CarMotorStop_partial;
      outC->Doors = _116_Doors_partial;
      outC->AtFloor = _117_AtFloor_partial;
      outC->Move = _118_Move_partial;
      outC->PlanningModule_state_nxt = _122_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      _114_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _113_PlanningModule_reset_nxt_partial = kcg_false;
      _112_PlanningModule_state_nxt_partial = SSM_st_Moving3To1_PlanningModule;
      outC->_L6_Moving3To1_PlanningModule = kcg_false;
      _105_CarMotorStop_partial = outC->_L6_Moving3To1_PlanningModule;
      outC->_L5_Moving3To1_PlanningModule = Downward;
      outC->_L4_Moving3To1_PlanningModule = kcg_false;
      _107_AtFloor_partial = outC->_L4_Moving3To1_PlanningModule;
      outC->_L2_Moving3To1_PlanningModule = kcg_true;
      _106_Doors_partial = outC->_L2_Moving3To1_PlanningModule;
      _108_Move_partial = outC->_L5_Moving3To1_PlanningModule;
      outC->CarMotorStop = _105_CarMotorStop_partial;
      outC->Doors = _106_Doors_partial;
      outC->AtFloor = _107_AtFloor_partial;
      outC->Move = _108_Move_partial;
      outC->PlanningModule_state_nxt = _112_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      _104_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _103_PlanningModule_reset_nxt_partial = kcg_false;
      _102_PlanningModule_state_nxt_partial = SSM_st_Moving2To3_PlanningModule;
      outC->_L7_Moving2To3_PlanningModule = kcg_false;
      _95_CarMotorStop_partial = outC->_L7_Moving2To3_PlanningModule;
      outC->_L6_Moving2To3_PlanningModule = Upward;
      outC->_L4_Moving2To3_PlanningModule = kcg_false;
      _97_AtFloor_partial = outC->_L4_Moving2To3_PlanningModule;
      outC->_L2_Moving2To3_PlanningModule = kcg_true;
      _96_Doors_partial = outC->_L2_Moving2To3_PlanningModule;
      _98_Move_partial = outC->_L6_Moving2To3_PlanningModule;
      outC->CarMotorStop = _95_CarMotorStop_partial;
      outC->Doors = _96_Doors_partial;
      outC->AtFloor = _97_AtFloor_partial;
      outC->Move = _98_Move_partial;
      outC->PlanningModule_state_nxt = _102_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      _94_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _93_PlanningModule_reset_nxt_partial = kcg_false;
      _92_PlanningModule_state_nxt_partial = SSM_st_Movin1To3_PlanningModule;
      outC->_L6_Movin1To3_PlanningModule = kcg_false;
      _85_CarMotorStop_partial = outC->_L6_Movin1To3_PlanningModule;
      outC->_L5_Movin1To3_PlanningModule = Upward;
      outC->_L4_Movin1To3_PlanningModule = kcg_false;
      _87_AtFloor_partial = outC->_L4_Movin1To3_PlanningModule;
      outC->_L2_Movin1To3_PlanningModule = kcg_true;
      _86_Doors_partial = outC->_L2_Movin1To3_PlanningModule;
      _88_Move_partial = outC->_L5_Movin1To3_PlanningModule;
      outC->CarMotorStop = _85_CarMotorStop_partial;
      outC->Doors = _86_Doors_partial;
      outC->AtFloor = _87_AtFloor_partial;
      outC->Move = _88_Move_partial;
      outC->PlanningModule_state_nxt = _92_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Floor3_PlanningModule :
      _84_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _83_PlanningModule_reset_nxt_partial = kcg_false;
      _82_PlanningModule_state_nxt_partial = SSM_st_Floor3_PlanningModule;
      outC->_L6_Floor3_PlanningModule = kcg_true;
      _75_CarMotorStop_partial = outC->_L6_Floor3_PlanningModule;
      outC->_L5_Floor3_PlanningModule = Stop;
      outC->_L4_Floor3_PlanningModule = kcg_true;
      _77_AtFloor_partial = outC->_L4_Floor3_PlanningModule;
      outC->_L2_Floor3_PlanningModule = kcg_false;
      _76_Doors_partial = outC->_L2_Floor3_PlanningModule;
      _78_Move_partial = outC->_L5_Floor3_PlanningModule;
      outC->CarMotorStop = _75_CarMotorStop_partial;
      outC->Doors = _76_Doors_partial;
      outC->AtFloor = _77_AtFloor_partial;
      outC->Move = _78_Move_partial;
      outC->PlanningModule_state_nxt = _82_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Floor2_PlanningModule :
      _74_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _73_PlanningModule_reset_nxt_partial = kcg_false;
      _72_PlanningModule_state_nxt_partial = SSM_st_Floor2_PlanningModule;
      outC->_L7_Floor2_PlanningModule = kcg_true;
      _65_CarMotorStop_partial = outC->_L7_Floor2_PlanningModule;
      outC->_L6_Floor2_PlanningModule = Stop;
      outC->_L4_Floor2_PlanningModule = kcg_true;
      _67_AtFloor_partial = outC->_L4_Floor2_PlanningModule;
      outC->_L2_Floor2_PlanningModule = kcg_false;
      _66_Doors_partial = outC->_L2_Floor2_PlanningModule;
      _68_Move_partial = outC->_L6_Floor2_PlanningModule;
      outC->CarMotorStop = _65_CarMotorStop_partial;
      outC->Doors = _66_Doors_partial;
      outC->AtFloor = _67_AtFloor_partial;
      outC->Move = _68_Move_partial;
      outC->PlanningModule_state_nxt = _72_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      _64_PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      _63_PlanningModule_reset_nxt_partial = kcg_false;
      _62_PlanningModule_state_nxt_partial = SSM_st_Movin1To2_PlanningModule;
      outC->_L6_Movin1To2_PlanningModule = kcg_false;
      _55_CarMotorStop_partial = outC->_L6_Movin1To2_PlanningModule;
      outC->_L5_Movin1To2_PlanningModule = Upward;
      _58_Move_partial = outC->_L5_Movin1To2_PlanningModule;
      outC->_L4_Movin1To2_PlanningModule = kcg_false;
      _57_AtFloor_partial = outC->_L4_Movin1To2_PlanningModule;
      outC->_L2_Movin1To2_PlanningModule = kcg_true;
      _56_Doors_partial = outC->_L2_Movin1To2_PlanningModule;
      outC->CarMotorStop = _55_CarMotorStop_partial;
      outC->Doors = _56_Doors_partial;
      outC->AtFloor = _57_AtFloor_partial;
      outC->Move = _58_Move_partial;
      outC->PlanningModule_state_nxt = _62_PlanningModule_state_nxt_partial;
      break;
    case SSM_st_Floor1_PlanningModule :
      PlanningModule_fired_partial = outC->PlanningModule_fired_strong;
      PlanningModule_reset_nxt_partial = kcg_false;
      PlanningModule_state_nxt_partial = SSM_st_Floor1_PlanningModule;
      outC->_L7_Floor1_PlanningModule = kcg_true;
      CarMotorStop_partial = outC->_L7_Floor1_PlanningModule;
      outC->_L6_Floor1_PlanningModule = Stop;
      outC->_L5_Floor1_PlanningModule = Press7;
      outC->_L4_Floor1_PlanningModule = Press8;
      Doors_partial = outC->_L4_Floor1_PlanningModule;
      Move_partial = outC->_L6_Floor1_PlanningModule;
      AtFloor_partial = outC->_L5_Floor1_PlanningModule;
      outC->CarMotorStop = CarMotorStop_partial;
      outC->Doors = Doors_partial;
      outC->AtFloor = AtFloor_partial;
      outC->Move = Move_partial;
      outC->PlanningModule_state_nxt = PlanningModule_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  PlanningModule_reset_sel = outC->PlanningModule_reset_nxt;
  /* PlanningModule: */
  switch (outC->PlanningModule_state_act) {
    case SSM_st_Stop_PlanningModule :
      outC->PlanningModule_reset_nxt = _143_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _144_PlanningModule_fired_partial;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      outC->PlanningModule_reset_nxt = _133_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _134_PlanningModule_fired_partial;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      outC->PlanningModule_reset_nxt = _123_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _124_PlanningModule_fired_partial;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      outC->PlanningModule_reset_nxt = _113_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _114_PlanningModule_fired_partial;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      outC->PlanningModule_reset_nxt = _103_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _104_PlanningModule_fired_partial;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      outC->PlanningModule_reset_nxt = _93_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _94_PlanningModule_fired_partial;
      break;
    case SSM_st_Floor3_PlanningModule :
      outC->PlanningModule_reset_nxt = _83_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _84_PlanningModule_fired_partial;
      break;
    case SSM_st_Floor2_PlanningModule :
      outC->PlanningModule_reset_nxt = _73_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _74_PlanningModule_fired_partial;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      outC->PlanningModule_reset_nxt = _63_PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = _64_PlanningModule_fired_partial;
      break;
    case SSM_st_Floor1_PlanningModule :
      outC->PlanningModule_reset_nxt = PlanningModule_reset_nxt_partial;
      outC->PlanningModule_fired = PlanningModule_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->PlanningModule_state_sel) {
    case SSM_st_Stop_PlanningModule :
      _170_PlanningModule_reset_act_partial = kcg_false;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      if (tr_1_guard_Movin2To1_PlanningModule) {
        _167_PlanningModule_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Movin2To1_PlanningModule) {
        _167_PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        _167_PlanningModule_reset_act_partial = tr_3_guard_Movin2To1_PlanningModule;
      }
      break;
    case SSM_st_Moving3To2_PlanningModule :
      if (tr_1_guard_Moving3To2_PlanningModule) {
        _164_PlanningModule_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Moving3To2_PlanningModule) {
        _164_PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        _164_PlanningModule_reset_act_partial = tr_3_guard_Moving3To2_PlanningModule;
      }
      break;
    case SSM_st_Moving3To1_PlanningModule :
      if (tr_1_guard_Moving3To1_PlanningModule) {
        _161_PlanningModule_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Moving3To1_PlanningModule) {
        _161_PlanningModule_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_Moving3To1_PlanningModule) {
        _161_PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        _161_PlanningModule_reset_act_partial = tr_4_guard_Moving3To1_PlanningModule;
      }
      break;
    case SSM_st_Moving2To3_PlanningModule :
      if (tr_1_guard_Moving2To3_PlanningModule) {
        _158_PlanningModule_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Moving2To3_PlanningModule) {
        _158_PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        _158_PlanningModule_reset_act_partial = tr_3_guard_Moving2To3_PlanningModule;
      }
      break;
    case SSM_st_Movin1To3_PlanningModule :
      if (tr_1_guard_Movin1To3_PlanningModule) {
        _155_PlanningModule_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Movin1To3_PlanningModule) {
        _155_PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        _155_PlanningModule_reset_act_partial = tr_3_guard_Movin1To3_PlanningModule;
      }
      break;
    case SSM_st_Floor3_PlanningModule :
      if (tr_1_guard_Floor3_PlanningModule) {
        _152_PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        _152_PlanningModule_reset_act_partial = tr_2_guard_Floor3_PlanningModule;
      }
      break;
    case SSM_st_Floor2_PlanningModule :
      if (tr_1_guard_Floor2_PlanningModule) {
        _149_PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        _149_PlanningModule_reset_act_partial = tr_2_guard_Floor2_PlanningModule;
      }
      break;
    case SSM_st_Movin1To2_PlanningModule :
      if (tr_1_guard_Movin1To2_PlanningModule) {
        _146_PlanningModule_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Movin1To2_PlanningModule) {
        _146_PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        _146_PlanningModule_reset_act_partial = tr_3_guard_Movin1To2_PlanningModule;
      }
      break;
    case SSM_st_Floor1_PlanningModule :
      if (tr_1_guard_Floor1_PlanningModule) {
        PlanningModule_reset_act_partial = kcg_true;
      }
      else {
        PlanningModule_reset_act_partial = tr_2_guard_Floor1_PlanningModule;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  PlanningModule_reset_prv = outC->PlanningModule_reset_act;
  /* PlanningModule: */
  switch (outC->PlanningModule_state_sel) {
    case SSM_st_Stop_PlanningModule :
      outC->PlanningModule_reset_act = _170_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      outC->PlanningModule_reset_act = _167_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      outC->PlanningModule_reset_act = _164_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      outC->PlanningModule_reset_act = _161_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      outC->PlanningModule_reset_act = _158_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      outC->PlanningModule_reset_act = _155_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Floor3_PlanningModule :
      outC->PlanningModule_reset_act = _152_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Floor2_PlanningModule :
      outC->PlanningModule_reset_act = _149_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      outC->PlanningModule_reset_act = _146_PlanningModule_reset_act_partial;
      break;
    case SSM_st_Floor1_PlanningModule :
      outC->PlanningModule_reset_act = PlanningModule_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void PlanningModule_init(outC_PlanningModule *outC)
{
  outC->SM2_fired = _33_SSM_TR_no_trans_SM2;
  outC->SM2_fired_strong = _33_SSM_TR_no_trans_SM2;
  outC->SM2_state_act = SSM_st_State11_SM2;
  outC->SM2_state_sel = SSM_st_State11_SM2;
  outC->PlanningModule_fired = SSM_TR_no_trans_PlanningModule;
  outC->PlanningModule_fired_strong = SSM_TR_no_trans_PlanningModule;
  outC->PlanningModule_state_act = SSM_st_Floor1_PlanningModule;
  outC->PlanningModule_state_sel = SSM_st_Floor1_PlanningModule;
  outC->_L2_Stop_PlanningModule = kcg_true;
  outC->_L4_Stop_PlanningModule = kcg_true;
  outC->_L5_Stop_PlanningModule = Upward;
  outC->_L6_Stop_PlanningModule = kcg_true;
  outC->_L2_Movin2To1_PlanningModule = kcg_true;
  outC->_L4_Movin2To1_PlanningModule = kcg_true;
  outC->_L5_Movin2To1_PlanningModule = Upward;
  outC->_L6_Movin2To1_PlanningModule = kcg_true;
  outC->_L2_Moving3To2_PlanningModule = kcg_true;
  outC->_L4_Moving3To2_PlanningModule = kcg_true;
  outC->_L5_Moving3To2_PlanningModule = Upward;
  outC->_L6_Moving3To2_PlanningModule = kcg_true;
  outC->_L2_Moving3To1_PlanningModule = kcg_true;
  outC->_L4_Moving3To1_PlanningModule = kcg_true;
  outC->_L5_Moving3To1_PlanningModule = Upward;
  outC->_L6_Moving3To1_PlanningModule = kcg_true;
  outC->_L2_Moving2To3_PlanningModule = kcg_true;
  outC->_L4_Moving2To3_PlanningModule = kcg_true;
  outC->_L6_Moving2To3_PlanningModule = Upward;
  outC->_L7_Moving2To3_PlanningModule = kcg_true;
  outC->_L2_Movin1To3_PlanningModule = kcg_true;
  outC->_L4_Movin1To3_PlanningModule = kcg_true;
  outC->_L5_Movin1To3_PlanningModule = Upward;
  outC->_L6_Movin1To3_PlanningModule = kcg_true;
  outC->_L2_Floor3_PlanningModule = kcg_true;
  outC->_L4_Floor3_PlanningModule = kcg_true;
  outC->_L5_Floor3_PlanningModule = Upward;
  outC->_L6_Floor3_PlanningModule = kcg_true;
  outC->_L8_Floor3_PlanningModule = kcg_true;
  outC->_L2_Floor2_PlanningModule = kcg_true;
  outC->_L4_Floor2_PlanningModule = kcg_true;
  outC->_L6_Floor2_PlanningModule = Upward;
  outC->_L7_Floor2_PlanningModule = kcg_true;
  outC->_L9_Floor2_PlanningModule = kcg_true;
  outC->_L2_Movin1To2_PlanningModule = kcg_true;
  outC->_L4_Movin1To2_PlanningModule = kcg_true;
  outC->_L5_Movin1To2_PlanningModule = Upward;
  outC->_L6_Movin1To2_PlanningModule = kcg_true;
  outC->_L5_Floor1_PlanningModule = kcg_true;
  outC->_L4_Floor1_PlanningModule = kcg_true;
  outC->_L6_Floor1_PlanningModule = Upward;
  outC->_L7_Floor1_PlanningModule = kcg_true;
  outC->_L9_Floor1_PlanningModule = kcg_true;
  outC->_L2_State15_SM2 = kcg_true;
  outC->_L2_State16_SM2 = kcg_true;
  outC->_L2_State17_SM2 = kcg_true;
  outC->_L2_State14_SM2 = kcg_true;
  outC->_L2_State13_SM2 = kcg_true;
  outC->_L2_State12_SM2 = kcg_true;
  outC->Move = Upward;
  outC->AtFloor = kcg_true;
  outC->Doors = kcg_true;
  outC->PlanningModule_reset_act = kcg_false;
  outC->PlanningModule_reset_nxt = kcg_false;
  outC->SM2_reset_act = kcg_false;
  outC->SM2_reset_nxt = kcg_false;
  outC->PlanningModule_state_nxt = SSM_st_Floor1_PlanningModule;
  outC->SM2_state_nxt = SSM_st_State11_SM2;
  outC->CarMotorStop = kcg_true;
  outC->F1BS = kcg_false;
  outC->F2BS = kcg_false;
  outC->F3BS = kcg_false;
  outC->F1BR = kcg_false;
  outC->F2BR = kcg_false;
  outC->F3BR = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PlanningModule_reset(outC_PlanningModule *outC)
{
  outC->PlanningModule_reset_act = kcg_false;
  outC->PlanningModule_reset_nxt = kcg_false;
  outC->SM2_reset_act = kcg_false;
  outC->SM2_reset_nxt = kcg_false;
  outC->PlanningModule_state_nxt = SSM_st_Floor1_PlanningModule;
  outC->SM2_state_nxt = SSM_st_State11_SM2;
  outC->CarMotorStop = kcg_true;
  outC->F1BS = kcg_false;
  outC->F2BS = kcg_false;
  outC->F3BS = kcg_false;
  outC->F1BR = kcg_false;
  outC->F2BR = kcg_false;
  outC->F3BR = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PlanningModule.c
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

