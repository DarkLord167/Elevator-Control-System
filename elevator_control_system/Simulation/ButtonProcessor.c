/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
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
  /* Press3/ */
  kcg_bool Press3_partial;
  /* Timer5/ */
  kcg_int16 Timer5_partial;
  /* SM6: */
  SSM_ST_SM6 SM6_state_nxt_partial;
  /* SM6: */
  kcg_bool SM6_reset_nxt_partial;
  /* SM6: */
  SSM_TR_SM6 SM6_fired_partial;
  /* Press3/ */
  kcg_bool _1_Press3_partial;
  /* Timer5/ */
  kcg_int16 _2_Timer5_partial;
  /* SM6: */
  SSM_ST_SM6 _3_SM6_state_nxt_partial;
  /* SM6: */
  kcg_bool _4_SM6_reset_nxt_partial;
  /* SM6: */
  SSM_TR_SM6 _5_SM6_fired_partial;
  /* Press3/ */
  kcg_bool _6_Press3_partial;
  /* Timer5/ */
  kcg_int16 _7_Timer5_partial;
  /* SM6: */
  SSM_ST_SM6 _8_SM6_state_nxt_partial;
  /* SM6: */
  kcg_bool _9_SM6_reset_nxt_partial;
  /* SM6: */
  SSM_TR_SM6 _10_SM6_fired_partial;
  /* SM6: */
  SSM_ST_SM6 SM6_state_act_partial;
  /* SM6: */
  kcg_bool SM6_reset_act_partial;
  /* SM6: */
  SSM_TR_SM6 SM6_fired_strong_partial;
  /* SM6:Floor1Button10:<1> */
  kcg_bool tr_1_guard_Floor1Button10_SM6;
  /* SM6: */
  SSM_ST_SM6 _11_SM6_state_act_partial;
  /* SM6: */
  kcg_bool _12_SM6_reset_act_partial;
  /* SM6: */
  SSM_TR_SM6 _13_SM6_fired_strong_partial;
  /* SM6:Floor1Button11:<1> */
  kcg_bool tr_1_guard_Floor1Button11_SM6;
  /* SM6: */
  SSM_ST_SM6 _14_SM6_state_act_partial;
  /* SM6: */
  kcg_bool _15_SM6_reset_act_partial;
  /* SM6: */
  SSM_TR_SM6 _16_SM6_fired_strong_partial;
  /* SM6:Floor1Button4:<2> */
  kcg_bool tr_2_guard_Floor1Button4_SM6;
  /* SM6:Floor1Button4:<1> */
  kcg_bool tr_1_guard_Floor1Button4_SM6;
  /* Press2/ */
  kcg_bool Press2_partial;
  /* Timer4/ */
  kcg_int16 Timer4_partial;
  /* SM5: */
  SSM_ST_SM5 SM5_state_nxt_partial;
  /* SM5: */
  kcg_bool SM5_reset_nxt_partial;
  /* SM5: */
  SSM_TR_SM5 SM5_fired_partial;
  /* Press2/ */
  kcg_bool _17_Press2_partial;
  /* Timer4/ */
  kcg_int16 _18_Timer4_partial;
  /* SM5: */
  SSM_ST_SM5 _19_SM5_state_nxt_partial;
  /* SM5: */
  kcg_bool _20_SM5_reset_nxt_partial;
  /* SM5: */
  SSM_TR_SM5 _21_SM5_fired_partial;
  /* Press2/ */
  kcg_bool _22_Press2_partial;
  /* Timer4/ */
  kcg_int16 _23_Timer4_partial;
  /* SM5: */
  SSM_ST_SM5 _24_SM5_state_nxt_partial;
  /* SM5: */
  kcg_bool _25_SM5_reset_nxt_partial;
  /* SM5: */
  SSM_TR_SM5 _26_SM5_fired_partial;
  /* SM5: */
  SSM_ST_SM5 SM5_state_act_partial;
  /* SM5: */
  kcg_bool SM5_reset_act_partial;
  /* SM5: */
  SSM_TR_SM5 SM5_fired_strong_partial;
  /* SM5:Floor1Button10:<1> */
  kcg_bool tr_1_guard_Floor1Button10_SM5;
  /* SM5: */
  SSM_ST_SM5 _27_SM5_state_act_partial;
  /* SM5: */
  kcg_bool _28_SM5_reset_act_partial;
  /* SM5: */
  SSM_TR_SM5 _29_SM5_fired_strong_partial;
  /* SM5:Floor1Button11:<1> */
  kcg_bool tr_1_guard_Floor1Button11_SM5;
  /* SM5: */
  SSM_ST_SM5 _30_SM5_state_act_partial;
  /* SM5: */
  kcg_bool _31_SM5_reset_act_partial;
  /* SM5: */
  SSM_TR_SM5 _32_SM5_fired_strong_partial;
  /* SM5:Floor1Button4:<2> */
  kcg_bool tr_2_guard_Floor1Button4_SM5;
  /* SM5:Floor1Button4:<1> */
  kcg_bool tr_1_guard_Floor1Button4_SM5;
  /* Press1/ */
  kcg_bool Press1_partial;
  /* Timer3/ */
  kcg_int16 Timer3_partial;
  /* SM1: */
  _10_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _11_SSM_TR_SM1 SM1_fired_partial;
  /* Press1/ */
  kcg_bool _33_Press1_partial;
  /* Timer3/ */
  kcg_int16 _34_Timer3_partial;
  /* SM1: */
  _10_SSM_ST_SM1 _35_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _36_SM1_reset_nxt_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _37_SM1_fired_partial;
  /* Press1/ */
  kcg_bool _38_Press1_partial;
  /* Timer3/ */
  kcg_int16 _39_Timer3_partial;
  /* SM1: */
  _10_SSM_ST_SM1 _40_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _41_SM1_reset_nxt_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _42_SM1_fired_partial;
  /* SM1: */
  _10_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _11_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Floor1Button10:<1> */
  kcg_bool tr_1_guard_Floor1Button10_SM1;
  /* SM1: */
  _10_SSM_ST_SM1 _43_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _44_SM1_reset_act_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _45_SM1_fired_strong_partial;
  /* SM1:Floor1Button11:<1> */
  kcg_bool tr_1_guard_Floor1Button11_SM1;
  /* SM1: */
  _10_SSM_ST_SM1 _46_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _47_SM1_reset_act_partial;
  /* SM1: */
  _11_SSM_TR_SM1 _48_SM1_fired_strong_partial;
  /* SM1:Floor1Button4:<2> */
  kcg_bool tr_2_guard_Floor1Button4_SM1;
  /* SM1:Floor1Button4:<1> */
  kcg_bool tr_1_guard_Floor1Button4_SM1;
  /* Press0/ */
  kcg_bool Press0_partial;
  /* Timer2/ */
  kcg_int16 Timer2_partial;
  /* SM4: */
  SSM_ST_SM4 SM4_state_nxt_partial;
  /* SM4: */
  kcg_bool SM4_reset_nxt_partial;
  /* SM4: */
  SSM_TR_SM4 SM4_fired_partial;
  /* Press0/ */
  kcg_bool _49_Press0_partial;
  /* Timer2/ */
  kcg_int16 _50_Timer2_partial;
  /* SM4: */
  SSM_ST_SM4 _51_SM4_state_nxt_partial;
  /* SM4: */
  kcg_bool _52_SM4_reset_nxt_partial;
  /* SM4: */
  SSM_TR_SM4 _53_SM4_fired_partial;
  /* Press0/ */
  kcg_bool _54_Press0_partial;
  /* Timer2/ */
  kcg_int16 _55_Timer2_partial;
  /* SM4: */
  SSM_ST_SM4 _56_SM4_state_nxt_partial;
  /* SM4: */
  kcg_bool _57_SM4_reset_nxt_partial;
  /* SM4: */
  SSM_TR_SM4 _58_SM4_fired_partial;
  /* SM4: */
  SSM_ST_SM4 SM4_state_act_partial;
  /* SM4: */
  kcg_bool SM4_reset_act_partial;
  /* SM4: */
  SSM_TR_SM4 SM4_fired_strong_partial;
  /* SM4:Floor1Button10:<1> */
  kcg_bool tr_1_guard_Floor1Button10_SM4;
  /* SM4: */
  SSM_ST_SM4 _59_SM4_state_act_partial;
  /* SM4: */
  kcg_bool _60_SM4_reset_act_partial;
  /* SM4: */
  SSM_TR_SM4 _61_SM4_fired_strong_partial;
  /* SM4:Floor1Button11:<1> */
  kcg_bool tr_1_guard_Floor1Button11_SM4;
  /* SM4: */
  SSM_ST_SM4 _62_SM4_state_act_partial;
  /* SM4: */
  kcg_bool _63_SM4_reset_act_partial;
  /* SM4: */
  SSM_TR_SM4 _64_SM4_fired_strong_partial;
  /* SM4:Floor1Button4:<2> */
  kcg_bool tr_2_guard_Floor1Button4_SM4;
  /* SM4:Floor1Button4:<1> */
  kcg_bool tr_1_guard_Floor1Button4_SM4;
  /* Press8/ */
  kcg_bool Press8_partial;
  /* Timer1/ */
  kcg_int16 Timer1_partial;
  /* SM3: */
  SSM_ST_SM3 SM3_state_nxt_partial;
  /* SM3: */
  kcg_bool SM3_reset_nxt_partial;
  /* SM3: */
  SSM_TR_SM3 SM3_fired_partial;
  /* Press8/ */
  kcg_bool _65_Press8_partial;
  /* Timer1/ */
  kcg_int16 _66_Timer1_partial;
  /* SM3: */
  SSM_ST_SM3 _67_SM3_state_nxt_partial;
  /* SM3: */
  kcg_bool _68_SM3_reset_nxt_partial;
  /* SM3: */
  SSM_TR_SM3 _69_SM3_fired_partial;
  /* Press8/ */
  kcg_bool _70_Press8_partial;
  /* Timer1/ */
  kcg_int16 _71_Timer1_partial;
  /* SM3: */
  SSM_ST_SM3 _72_SM3_state_nxt_partial;
  /* SM3: */
  kcg_bool _73_SM3_reset_nxt_partial;
  /* SM3: */
  SSM_TR_SM3 _74_SM3_fired_partial;
  /* SM3: */
  SSM_ST_SM3 SM3_state_act_partial;
  /* SM3: */
  kcg_bool SM3_reset_act_partial;
  /* SM3: */
  SSM_TR_SM3 SM3_fired_strong_partial;
  /* SM3:Floor1Button10:<1> */
  kcg_bool tr_1_guard_Floor1Button10_SM3;
  /* SM3: */
  SSM_ST_SM3 _75_SM3_state_act_partial;
  /* SM3: */
  kcg_bool _76_SM3_reset_act_partial;
  /* SM3: */
  SSM_TR_SM3 _77_SM3_fired_strong_partial;
  /* SM3:Floor1Button11:<1> */
  kcg_bool tr_1_guard_Floor1Button11_SM3;
  /* SM3: */
  SSM_ST_SM3 _78_SM3_state_act_partial;
  /* SM3: */
  kcg_bool _79_SM3_reset_act_partial;
  /* SM3: */
  SSM_TR_SM3 _80_SM3_fired_strong_partial;
  /* SM3:Floor1Button4:<2> */
  kcg_bool tr_2_guard_Floor1Button4_SM3;
  /* SM3:Floor1Button4:<1> */
  kcg_bool tr_1_guard_Floor1Button4_SM3;
  /* Press7/ */
  kcg_bool Press7_partial;
  /* Timer0/ */
  kcg_int16 Timer0_partial;
  /* SM2: */
  _8_SSM_ST_SM2 SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool SM2_reset_nxt_partial;
  /* SM2: */
  _9_SSM_TR_SM2 SM2_fired_partial;
  /* Press7/ */
  kcg_bool _81_Press7_partial;
  /* Timer0/ */
  kcg_int16 _82_Timer0_partial;
  /* SM2: */
  _8_SSM_ST_SM2 _83_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _84_SM2_reset_nxt_partial;
  /* SM2: */
  _9_SSM_TR_SM2 _85_SM2_fired_partial;
  /* Press7/ */
  kcg_bool _86_Press7_partial;
  /* Timer0/ */
  kcg_int16 _87_Timer0_partial;
  /* SM2: */
  _8_SSM_ST_SM2 _88_SM2_state_nxt_partial;
  /* SM2: */
  kcg_bool _89_SM2_reset_nxt_partial;
  /* SM2: */
  _9_SSM_TR_SM2 _90_SM2_fired_partial;
  /* SM2: */
  _8_SSM_ST_SM2 SM2_state_act_partial;
  /* SM2: */
  kcg_bool SM2_reset_act_partial;
  /* SM2: */
  _9_SSM_TR_SM2 SM2_fired_strong_partial;
  /* SM2:Floor1Button10:<1> */
  kcg_bool tr_1_guard_Floor1Button10_SM2;
  /* SM2: */
  _8_SSM_ST_SM2 _91_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _92_SM2_reset_act_partial;
  /* SM2: */
  _9_SSM_TR_SM2 _93_SM2_fired_strong_partial;
  /* SM2:Floor1Button11:<1> */
  kcg_bool tr_1_guard_Floor1Button11_SM2;
  /* SM2: */
  _8_SSM_ST_SM2 _94_SM2_state_act_partial;
  /* SM2: */
  kcg_bool _95_SM2_reset_act_partial;
  /* SM2: */
  _9_SSM_TR_SM2 _96_SM2_fired_strong_partial;
  /* SM2:Floor1Button4:<2> */
  kcg_bool tr_2_guard_Floor1Button4_SM2;
  /* SM2:Floor1Button4:<1> */
  kcg_bool tr_1_guard_Floor1Button4_SM2;
  /* Timer5/ */
  kcg_int16 last_Timer5;
  /* Timer4/ */
  kcg_int16 last_Timer4;
  /* Timer3/ */
  kcg_int16 last_Timer3;
  /* Timer2/ */
  kcg_int16 last_Timer2;
  /* Timer1/ */
  kcg_int16 last_Timer1;
  /* Timer0/ */
  kcg_int16 last_Timer0;
  /* GPIOC7/ */
  kcg_bool last_GPIOC7;
  /* GPIOC8/ */
  kcg_bool last_GPIOC8;
  /* GPIOC3/ */
  kcg_bool last_GPIOC3;
  /* GPIOC2/ */
  kcg_bool last_GPIOC2;
  /* GPIOC1/ */
  kcg_bool last_GPIOC1;
  /* GPIOC0/ */
  kcg_bool last_GPIOC0;
  /* SM2: */
  kcg_bool SM2_reset_sel;
  /* SM2: */
  kcg_bool SM2_reset_prv;
  /* SM3: */
  kcg_bool SM3_reset_sel;
  /* SM3: */
  kcg_bool SM3_reset_prv;
  /* SM4: */
  kcg_bool SM4_reset_sel;
  /* SM4: */
  kcg_bool SM4_reset_prv;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;
  /* SM5: */
  kcg_bool SM5_reset_sel;
  /* SM5: */
  kcg_bool SM5_reset_prv;
  /* SM6: */
  kcg_bool SM6_reset_sel;
  /* SM6: */
  kcg_bool SM6_reset_prv;

  last_GPIOC0 = outC->mem_GPIOC0;
  outC->mem_GPIOC0 = GPIOC0;
  last_GPIOC1 = outC->mem_GPIOC1;
  outC->mem_GPIOC1 = GPIOC1;
  last_GPIOC2 = outC->mem_GPIOC2;
  outC->mem_GPIOC2 = GPIOC2;
  last_GPIOC3 = outC->mem_GPIOC3;
  outC->mem_GPIOC3 = GPIOC3;
  last_GPIOC8 = outC->mem_GPIOC8;
  outC->mem_GPIOC8 = GPIOC8;
  last_GPIOC7 = outC->mem_GPIOC7;
  outC->mem_GPIOC7 = GPIOC7;
  last_Timer5 = outC->Timer5;
  last_Timer4 = outC->Timer4;
  last_Timer3 = outC->Timer3;
  last_Timer2 = outC->Timer2;
  last_Timer1 = outC->Timer1;
  last_Timer0 = outC->Timer0;
  outC->SM6_state_sel = outC->SM6_state_nxt;
  /* SM6: */
  switch (outC->SM6_state_sel) {
    case SSM_st_Floor1Button4_SM6 :
      tr_2_guard_Floor1Button4_SM6 = GPIOC3 == kcg_false;
      tr_1_guard_Floor1Button4_SM6 = (GPIOC3 == kcg_true) & (last_Timer5 ==
          kcg_lit_int16(10));
      if (tr_1_guard_Floor1Button4_SM6) {
        _14_SM6_state_act_partial = SSM_st_Floor1Button11_SM6;
      }
      else if (tr_2_guard_Floor1Button4_SM6) {
        _14_SM6_state_act_partial = SSM_st_Floor1Button10_SM6;
      }
      else {
        _14_SM6_state_act_partial = SSM_st_Floor1Button4_SM6;
      }
      outC->SM6_state_act = _14_SM6_state_act_partial;
      break;
    case SSM_st_Floor1Button11_SM6 :
      tr_1_guard_Floor1Button11_SM6 = kcg_true;
      if (tr_1_guard_Floor1Button11_SM6) {
        _11_SM6_state_act_partial = SSM_st_Floor1Button10_SM6;
      }
      else {
        _11_SM6_state_act_partial = SSM_st_Floor1Button11_SM6;
      }
      outC->SM6_state_act = _11_SM6_state_act_partial;
      break;
    case SSM_st_Floor1Button10_SM6 :
      tr_1_guard_Floor1Button10_SM6 = GPIOC3 == kcg_true;
      if (tr_1_guard_Floor1Button10_SM6) {
        SM6_state_act_partial = SSM_st_Floor1Button4_SM6;
      }
      else {
        SM6_state_act_partial = SSM_st_Floor1Button10_SM6;
      }
      outC->SM6_state_act = SM6_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM6_state_act) {
    case SSM_st_Floor1Button4_SM6 :
      _6_Press3_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM6: */
  switch (outC->SM6_state_sel) {
    case SSM_st_Floor1Button4_SM6 :
      if (tr_1_guard_Floor1Button4_SM6) {
        _16_SM6_fired_strong_partial =
          SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6;
      }
      else if (tr_2_guard_Floor1Button4_SM6) {
        _16_SM6_fired_strong_partial =
          _12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6;
      }
      else {
        _16_SM6_fired_strong_partial = SSM_TR_no_trans_SM6;
      }
      outC->SM6_fired_strong = _16_SM6_fired_strong_partial;
      break;
    case SSM_st_Floor1Button11_SM6 :
      if (tr_1_guard_Floor1Button11_SM6) {
        _13_SM6_fired_strong_partial =
          SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6;
      }
      else {
        _13_SM6_fired_strong_partial = SSM_TR_no_trans_SM6;
      }
      outC->SM6_fired_strong = _13_SM6_fired_strong_partial;
      break;
    case SSM_st_Floor1Button10_SM6 :
      if (tr_1_guard_Floor1Button10_SM6) {
        SM6_fired_strong_partial =
          SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6;
      }
      else {
        SM6_fired_strong_partial = SSM_TR_no_trans_SM6;
      }
      outC->SM6_fired_strong = SM6_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM6_state_act) {
    case SSM_st_Floor1Button4_SM6 :
      _10_SM6_fired_partial = outC->SM6_fired_strong;
      _9_SM6_reset_nxt_partial = kcg_false;
      _8_SM6_state_nxt_partial = SSM_st_Floor1Button4_SM6;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM6_reset_prv = outC->SM6_reset_act;
  /* SM6: */
  switch (outC->SM6_state_sel) {
    case SSM_st_Floor1Button4_SM6 :
      if (tr_1_guard_Floor1Button4_SM6) {
        _15_SM6_reset_act_partial = kcg_true;
      }
      else {
        _15_SM6_reset_act_partial = tr_2_guard_Floor1Button4_SM6;
      }
      outC->SM6_reset_act = _15_SM6_reset_act_partial;
      break;
    case SSM_st_Floor1Button11_SM6 :
      _12_SM6_reset_act_partial = tr_1_guard_Floor1Button11_SM6;
      outC->SM6_reset_act = _12_SM6_reset_act_partial;
      break;
    case SSM_st_Floor1Button10_SM6 :
      SM6_reset_act_partial = tr_1_guard_Floor1Button10_SM6;
      outC->SM6_reset_act = SM6_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM6: */
  switch (outC->SM6_state_act) {
    case SSM_st_Floor1Button4_SM6 :
      if (outC->SM6_reset_act) {
        /* SM6:Floor1Button4:_L1=(Counter#16)/ */
        Counter_reset(&outC->Context_Counter_16);
      }
      /* SM6:Floor1Button4:_L1=(Counter#16)/ */ Counter(&outC->Context_Counter_16);
      outC->_L1_Floor1Button4_SM6 = outC->Context_Counter_16.Output;
      _7_Timer5_partial = outC->_L1_Floor1Button4_SM6;
      outC->Press3 = _6_Press3_partial;
      outC->Timer5 = _7_Timer5_partial;
      outC->SM6_state_nxt = _8_SM6_state_nxt_partial;
      break;
    case SSM_st_Floor1Button11_SM6 :
      _2_Timer5_partial = last_Timer5;
      _5_SM6_fired_partial = outC->SM6_fired_strong;
      _4_SM6_reset_nxt_partial = kcg_false;
      _3_SM6_state_nxt_partial = SSM_st_Floor1Button11_SM6;
      outC->_L2_Floor1Button11_SM6 = kcg_true;
      _1_Press3_partial = outC->_L2_Floor1Button11_SM6;
      outC->Press3 = _1_Press3_partial;
      outC->Timer5 = _2_Timer5_partial;
      outC->SM6_state_nxt = _3_SM6_state_nxt_partial;
      break;
    case SSM_st_Floor1Button10_SM6 :
      Timer5_partial = last_Timer5;
      SM6_fired_partial = outC->SM6_fired_strong;
      SM6_reset_nxt_partial = kcg_false;
      SM6_state_nxt_partial = SSM_st_Floor1Button10_SM6;
      outC->_L2_Floor1Button10_SM6 = kcg_false;
      Press3_partial = outC->_L2_Floor1Button10_SM6;
      outC->Press3 = Press3_partial;
      outC->Timer5 = Timer5_partial;
      outC->SM6_state_nxt = SM6_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM6_reset_sel = outC->SM6_reset_nxt;
  /* SM6: */
  switch (outC->SM6_state_act) {
    case SSM_st_Floor1Button4_SM6 :
      outC->SM6_reset_nxt = _9_SM6_reset_nxt_partial;
      outC->SM6_fired = _10_SM6_fired_partial;
      break;
    case SSM_st_Floor1Button11_SM6 :
      outC->SM6_reset_nxt = _4_SM6_reset_nxt_partial;
      outC->SM6_fired = _5_SM6_fired_partial;
      break;
    case SSM_st_Floor1Button10_SM6 :
      outC->SM6_reset_nxt = SM6_reset_nxt_partial;
      outC->SM6_fired = SM6_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM5_state_sel = outC->SM5_state_nxt;
  /* SM5: */
  switch (outC->SM5_state_sel) {
    case SSM_st_Floor1Button4_SM5 :
      tr_2_guard_Floor1Button4_SM5 = GPIOC2 == kcg_false;
      tr_1_guard_Floor1Button4_SM5 = (GPIOC2 == kcg_true) & (last_Timer4 ==
          kcg_lit_int16(10));
      if (tr_1_guard_Floor1Button4_SM5) {
        _30_SM5_state_act_partial = SSM_st_Floor1Button11_SM5;
      }
      else if (tr_2_guard_Floor1Button4_SM5) {
        _30_SM5_state_act_partial = SSM_st_Floor1Button10_SM5;
      }
      else {
        _30_SM5_state_act_partial = SSM_st_Floor1Button4_SM5;
      }
      outC->SM5_state_act = _30_SM5_state_act_partial;
      break;
    case SSM_st_Floor1Button11_SM5 :
      tr_1_guard_Floor1Button11_SM5 = kcg_true;
      if (tr_1_guard_Floor1Button11_SM5) {
        _27_SM5_state_act_partial = SSM_st_Floor1Button10_SM5;
      }
      else {
        _27_SM5_state_act_partial = SSM_st_Floor1Button11_SM5;
      }
      outC->SM5_state_act = _27_SM5_state_act_partial;
      break;
    case SSM_st_Floor1Button10_SM5 :
      tr_1_guard_Floor1Button10_SM5 = GPIOC2 == kcg_true;
      if (tr_1_guard_Floor1Button10_SM5) {
        SM5_state_act_partial = SSM_st_Floor1Button4_SM5;
      }
      else {
        SM5_state_act_partial = SSM_st_Floor1Button10_SM5;
      }
      outC->SM5_state_act = SM5_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM5_state_act) {
    case SSM_st_Floor1Button4_SM5 :
      _22_Press2_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM5: */
  switch (outC->SM5_state_sel) {
    case SSM_st_Floor1Button4_SM5 :
      if (tr_1_guard_Floor1Button4_SM5) {
        _32_SM5_fired_strong_partial =
          _13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5;
      }
      else if (tr_2_guard_Floor1Button4_SM5) {
        _32_SM5_fired_strong_partial =
          _14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5;
      }
      else {
        _32_SM5_fired_strong_partial = SSM_TR_no_trans_SM5;
      }
      outC->SM5_fired_strong = _32_SM5_fired_strong_partial;
      break;
    case SSM_st_Floor1Button11_SM5 :
      if (tr_1_guard_Floor1Button11_SM5) {
        _29_SM5_fired_strong_partial =
          _15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5;
      }
      else {
        _29_SM5_fired_strong_partial = SSM_TR_no_trans_SM5;
      }
      outC->SM5_fired_strong = _29_SM5_fired_strong_partial;
      break;
    case SSM_st_Floor1Button10_SM5 :
      if (tr_1_guard_Floor1Button10_SM5) {
        SM5_fired_strong_partial =
          _16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5;
      }
      else {
        SM5_fired_strong_partial = SSM_TR_no_trans_SM5;
      }
      outC->SM5_fired_strong = SM5_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM5_state_act) {
    case SSM_st_Floor1Button4_SM5 :
      _26_SM5_fired_partial = outC->SM5_fired_strong;
      _25_SM5_reset_nxt_partial = kcg_false;
      _24_SM5_state_nxt_partial = SSM_st_Floor1Button4_SM5;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM5_reset_prv = outC->SM5_reset_act;
  /* SM5: */
  switch (outC->SM5_state_sel) {
    case SSM_st_Floor1Button4_SM5 :
      if (tr_1_guard_Floor1Button4_SM5) {
        _31_SM5_reset_act_partial = kcg_true;
      }
      else {
        _31_SM5_reset_act_partial = tr_2_guard_Floor1Button4_SM5;
      }
      outC->SM5_reset_act = _31_SM5_reset_act_partial;
      break;
    case SSM_st_Floor1Button11_SM5 :
      _28_SM5_reset_act_partial = tr_1_guard_Floor1Button11_SM5;
      outC->SM5_reset_act = _28_SM5_reset_act_partial;
      break;
    case SSM_st_Floor1Button10_SM5 :
      SM5_reset_act_partial = tr_1_guard_Floor1Button10_SM5;
      outC->SM5_reset_act = SM5_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM5: */
  switch (outC->SM5_state_act) {
    case SSM_st_Floor1Button4_SM5 :
      if (outC->SM5_reset_act) {
        /* SM5:Floor1Button4:_L1=(Counter#15)/ */
        Counter_reset(&outC->Context_Counter_15);
      }
      /* SM5:Floor1Button4:_L1=(Counter#15)/ */ Counter(&outC->Context_Counter_15);
      outC->_L1_Floor1Button4_SM5 = outC->Context_Counter_15.Output;
      _23_Timer4_partial = outC->_L1_Floor1Button4_SM5;
      outC->Press2 = _22_Press2_partial;
      outC->Timer4 = _23_Timer4_partial;
      outC->SM5_state_nxt = _24_SM5_state_nxt_partial;
      break;
    case SSM_st_Floor1Button11_SM5 :
      _18_Timer4_partial = last_Timer4;
      _21_SM5_fired_partial = outC->SM5_fired_strong;
      _20_SM5_reset_nxt_partial = kcg_false;
      _19_SM5_state_nxt_partial = SSM_st_Floor1Button11_SM5;
      outC->_L2_Floor1Button11_SM5 = kcg_true;
      _17_Press2_partial = outC->_L2_Floor1Button11_SM5;
      outC->Press2 = _17_Press2_partial;
      outC->Timer4 = _18_Timer4_partial;
      outC->SM5_state_nxt = _19_SM5_state_nxt_partial;
      break;
    case SSM_st_Floor1Button10_SM5 :
      Timer4_partial = last_Timer4;
      SM5_fired_partial = outC->SM5_fired_strong;
      SM5_reset_nxt_partial = kcg_false;
      SM5_state_nxt_partial = SSM_st_Floor1Button10_SM5;
      outC->_L2_Floor1Button10_SM5 = kcg_false;
      Press2_partial = outC->_L2_Floor1Button10_SM5;
      outC->Press2 = Press2_partial;
      outC->Timer4 = Timer4_partial;
      outC->SM5_state_nxt = SM5_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM5_reset_sel = outC->SM5_reset_nxt;
  /* SM5: */
  switch (outC->SM5_state_act) {
    case SSM_st_Floor1Button4_SM5 :
      outC->SM5_reset_nxt = _25_SM5_reset_nxt_partial;
      outC->SM5_fired = _26_SM5_fired_partial;
      break;
    case SSM_st_Floor1Button11_SM5 :
      outC->SM5_reset_nxt = _20_SM5_reset_nxt_partial;
      outC->SM5_fired = _21_SM5_fired_partial;
      break;
    case SSM_st_Floor1Button10_SM5 :
      outC->SM5_reset_nxt = SM5_reset_nxt_partial;
      outC->SM5_fired = SM5_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Floor1Button4_SM1 :
      tr_2_guard_Floor1Button4_SM1 = GPIOC1 == kcg_false;
      tr_1_guard_Floor1Button4_SM1 = (GPIOC1 == kcg_true) & (last_Timer3 ==
          kcg_lit_int16(10));
      if (tr_1_guard_Floor1Button4_SM1) {
        _46_SM1_state_act_partial = SSM_st_Floor1Button11_SM1;
      }
      else if (tr_2_guard_Floor1Button4_SM1) {
        _46_SM1_state_act_partial = SSM_st_Floor1Button10_SM1;
      }
      else {
        _46_SM1_state_act_partial = SSM_st_Floor1Button4_SM1;
      }
      outC->SM1_state_act = _46_SM1_state_act_partial;
      break;
    case SSM_st_Floor1Button11_SM1 :
      tr_1_guard_Floor1Button11_SM1 = kcg_true;
      if (tr_1_guard_Floor1Button11_SM1) {
        _43_SM1_state_act_partial = SSM_st_Floor1Button10_SM1;
      }
      else {
        _43_SM1_state_act_partial = SSM_st_Floor1Button11_SM1;
      }
      outC->SM1_state_act = _43_SM1_state_act_partial;
      break;
    case SSM_st_Floor1Button10_SM1 :
      tr_1_guard_Floor1Button10_SM1 = GPIOC1 == kcg_true;
      if (tr_1_guard_Floor1Button10_SM1) {
        SM1_state_act_partial = SSM_st_Floor1Button4_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_Floor1Button10_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Floor1Button4_SM1 :
      _38_Press1_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Floor1Button4_SM1 :
      if (tr_1_guard_Floor1Button4_SM1) {
        _48_SM1_fired_strong_partial =
          _17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1;
      }
      else if (tr_2_guard_Floor1Button4_SM1) {
        _48_SM1_fired_strong_partial =
          _18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1;
      }
      else {
        _48_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _48_SM1_fired_strong_partial;
      break;
    case SSM_st_Floor1Button11_SM1 :
      if (tr_1_guard_Floor1Button11_SM1) {
        _45_SM1_fired_strong_partial =
          _19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1;
      }
      else {
        _45_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _45_SM1_fired_strong_partial;
      break;
    case SSM_st_Floor1Button10_SM1 :
      if (tr_1_guard_Floor1Button10_SM1) {
        SM1_fired_strong_partial =
          _20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Floor1Button4_SM1 :
      _42_SM1_fired_partial = outC->SM1_fired_strong;
      _41_SM1_reset_nxt_partial = kcg_false;
      _40_SM1_state_nxt_partial = SSM_st_Floor1Button4_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Floor1Button4_SM1 :
      if (tr_1_guard_Floor1Button4_SM1) {
        _47_SM1_reset_act_partial = kcg_true;
      }
      else {
        _47_SM1_reset_act_partial = tr_2_guard_Floor1Button4_SM1;
      }
      outC->SM1_reset_act = _47_SM1_reset_act_partial;
      break;
    case SSM_st_Floor1Button11_SM1 :
      _44_SM1_reset_act_partial = tr_1_guard_Floor1Button11_SM1;
      outC->SM1_reset_act = _44_SM1_reset_act_partial;
      break;
    case SSM_st_Floor1Button10_SM1 :
      SM1_reset_act_partial = tr_1_guard_Floor1Button10_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Floor1Button4_SM1 :
      if (outC->SM1_reset_act) {
        /* SM1:Floor1Button4:_L1=(Counter#14)/ */
        Counter_reset(&outC->Context_Counter_14);
      }
      /* SM1:Floor1Button4:_L1=(Counter#14)/ */ Counter(&outC->Context_Counter_14);
      outC->_L1_Floor1Button4_SM1 = outC->Context_Counter_14.Output;
      _39_Timer3_partial = outC->_L1_Floor1Button4_SM1;
      outC->Press1 = _38_Press1_partial;
      outC->Timer3 = _39_Timer3_partial;
      outC->SM1_state_nxt = _40_SM1_state_nxt_partial;
      break;
    case SSM_st_Floor1Button11_SM1 :
      _34_Timer3_partial = last_Timer3;
      _37_SM1_fired_partial = outC->SM1_fired_strong;
      _36_SM1_reset_nxt_partial = kcg_false;
      _35_SM1_state_nxt_partial = SSM_st_Floor1Button11_SM1;
      outC->_L2_Floor1Button11_SM1 = kcg_true;
      _33_Press1_partial = outC->_L2_Floor1Button11_SM1;
      outC->Press1 = _33_Press1_partial;
      outC->Timer3 = _34_Timer3_partial;
      outC->SM1_state_nxt = _35_SM1_state_nxt_partial;
      break;
    case SSM_st_Floor1Button10_SM1 :
      Timer3_partial = last_Timer3;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_Floor1Button10_SM1;
      outC->_L2_Floor1Button10_SM1 = kcg_false;
      Press1_partial = outC->_L2_Floor1Button10_SM1;
      outC->Press1 = Press1_partial;
      outC->Timer3 = Timer3_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Floor1Button4_SM1 :
      outC->SM1_reset_nxt = _41_SM1_reset_nxt_partial;
      outC->SM1_fired = _42_SM1_fired_partial;
      break;
    case SSM_st_Floor1Button11_SM1 :
      outC->SM1_reset_nxt = _36_SM1_reset_nxt_partial;
      outC->SM1_fired = _37_SM1_fired_partial;
      break;
    case SSM_st_Floor1Button10_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM4_state_sel = outC->SM4_state_nxt;
  /* SM4: */
  switch (outC->SM4_state_sel) {
    case SSM_st_Floor1Button4_SM4 :
      tr_2_guard_Floor1Button4_SM4 = GPIOC0 == kcg_false;
      tr_1_guard_Floor1Button4_SM4 = (GPIOC0 == kcg_true) & (last_Timer2 ==
          kcg_lit_int16(10));
      if (tr_1_guard_Floor1Button4_SM4) {
        _62_SM4_state_act_partial = SSM_st_Floor1Button11_SM4;
      }
      else if (tr_2_guard_Floor1Button4_SM4) {
        _62_SM4_state_act_partial = SSM_st_Floor1Button10_SM4;
      }
      else {
        _62_SM4_state_act_partial = SSM_st_Floor1Button4_SM4;
      }
      outC->SM4_state_act = _62_SM4_state_act_partial;
      break;
    case SSM_st_Floor1Button11_SM4 :
      tr_1_guard_Floor1Button11_SM4 = kcg_true;
      if (tr_1_guard_Floor1Button11_SM4) {
        _59_SM4_state_act_partial = SSM_st_Floor1Button10_SM4;
      }
      else {
        _59_SM4_state_act_partial = SSM_st_Floor1Button11_SM4;
      }
      outC->SM4_state_act = _59_SM4_state_act_partial;
      break;
    case SSM_st_Floor1Button10_SM4 :
      tr_1_guard_Floor1Button10_SM4 = GPIOC0 == kcg_true;
      if (tr_1_guard_Floor1Button10_SM4) {
        SM4_state_act_partial = SSM_st_Floor1Button4_SM4;
      }
      else {
        SM4_state_act_partial = SSM_st_Floor1Button10_SM4;
      }
      outC->SM4_state_act = SM4_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM4_state_act) {
    case SSM_st_Floor1Button4_SM4 :
      _54_Press0_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM4: */
  switch (outC->SM4_state_sel) {
    case SSM_st_Floor1Button4_SM4 :
      if (tr_1_guard_Floor1Button4_SM4) {
        _64_SM4_fired_strong_partial =
          _21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4;
      }
      else if (tr_2_guard_Floor1Button4_SM4) {
        _64_SM4_fired_strong_partial =
          _22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4;
      }
      else {
        _64_SM4_fired_strong_partial = SSM_TR_no_trans_SM4;
      }
      outC->SM4_fired_strong = _64_SM4_fired_strong_partial;
      break;
    case SSM_st_Floor1Button11_SM4 :
      if (tr_1_guard_Floor1Button11_SM4) {
        _61_SM4_fired_strong_partial =
          _23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4;
      }
      else {
        _61_SM4_fired_strong_partial = SSM_TR_no_trans_SM4;
      }
      outC->SM4_fired_strong = _61_SM4_fired_strong_partial;
      break;
    case SSM_st_Floor1Button10_SM4 :
      if (tr_1_guard_Floor1Button10_SM4) {
        SM4_fired_strong_partial =
          _24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4;
      }
      else {
        SM4_fired_strong_partial = SSM_TR_no_trans_SM4;
      }
      outC->SM4_fired_strong = SM4_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM4_state_act) {
    case SSM_st_Floor1Button4_SM4 :
      _58_SM4_fired_partial = outC->SM4_fired_strong;
      _57_SM4_reset_nxt_partial = kcg_false;
      _56_SM4_state_nxt_partial = SSM_st_Floor1Button4_SM4;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM4_reset_prv = outC->SM4_reset_act;
  /* SM4: */
  switch (outC->SM4_state_sel) {
    case SSM_st_Floor1Button4_SM4 :
      if (tr_1_guard_Floor1Button4_SM4) {
        _63_SM4_reset_act_partial = kcg_true;
      }
      else {
        _63_SM4_reset_act_partial = tr_2_guard_Floor1Button4_SM4;
      }
      outC->SM4_reset_act = _63_SM4_reset_act_partial;
      break;
    case SSM_st_Floor1Button11_SM4 :
      _60_SM4_reset_act_partial = tr_1_guard_Floor1Button11_SM4;
      outC->SM4_reset_act = _60_SM4_reset_act_partial;
      break;
    case SSM_st_Floor1Button10_SM4 :
      SM4_reset_act_partial = tr_1_guard_Floor1Button10_SM4;
      outC->SM4_reset_act = SM4_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM4: */
  switch (outC->SM4_state_act) {
    case SSM_st_Floor1Button4_SM4 :
      if (outC->SM4_reset_act) {
        /* SM4:Floor1Button4:_L1=(Counter#13)/ */
        Counter_reset(&outC->Context_Counter_13);
      }
      /* SM4:Floor1Button4:_L1=(Counter#13)/ */ Counter(&outC->Context_Counter_13);
      outC->_L1_Floor1Button4_SM4 = outC->Context_Counter_13.Output;
      _55_Timer2_partial = outC->_L1_Floor1Button4_SM4;
      outC->Press0 = _54_Press0_partial;
      outC->Timer2 = _55_Timer2_partial;
      outC->SM4_state_nxt = _56_SM4_state_nxt_partial;
      break;
    case SSM_st_Floor1Button11_SM4 :
      _50_Timer2_partial = last_Timer2;
      _53_SM4_fired_partial = outC->SM4_fired_strong;
      _52_SM4_reset_nxt_partial = kcg_false;
      _51_SM4_state_nxt_partial = SSM_st_Floor1Button11_SM4;
      outC->_L2_Floor1Button11_SM4 = kcg_true;
      _49_Press0_partial = outC->_L2_Floor1Button11_SM4;
      outC->Press0 = _49_Press0_partial;
      outC->Timer2 = _50_Timer2_partial;
      outC->SM4_state_nxt = _51_SM4_state_nxt_partial;
      break;
    case SSM_st_Floor1Button10_SM4 :
      Timer2_partial = last_Timer2;
      SM4_fired_partial = outC->SM4_fired_strong;
      SM4_reset_nxt_partial = kcg_false;
      SM4_state_nxt_partial = SSM_st_Floor1Button10_SM4;
      outC->_L2_Floor1Button10_SM4 = kcg_false;
      Press0_partial = outC->_L2_Floor1Button10_SM4;
      outC->Press0 = Press0_partial;
      outC->Timer2 = Timer2_partial;
      outC->SM4_state_nxt = SM4_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM4_reset_sel = outC->SM4_reset_nxt;
  /* SM4: */
  switch (outC->SM4_state_act) {
    case SSM_st_Floor1Button4_SM4 :
      outC->SM4_reset_nxt = _57_SM4_reset_nxt_partial;
      outC->SM4_fired = _58_SM4_fired_partial;
      break;
    case SSM_st_Floor1Button11_SM4 :
      outC->SM4_reset_nxt = _52_SM4_reset_nxt_partial;
      outC->SM4_fired = _53_SM4_fired_partial;
      break;
    case SSM_st_Floor1Button10_SM4 :
      outC->SM4_reset_nxt = SM4_reset_nxt_partial;
      outC->SM4_fired = SM4_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM3_state_sel = outC->SM3_state_nxt;
  /* SM3: */
  switch (outC->SM3_state_sel) {
    case SSM_st_Floor1Button4_SM3 :
      tr_2_guard_Floor1Button4_SM3 = GPIOC8 == kcg_false;
      tr_1_guard_Floor1Button4_SM3 = (GPIOC8 == kcg_true) & (last_Timer1 ==
          kcg_lit_int16(10));
      if (tr_1_guard_Floor1Button4_SM3) {
        _78_SM3_state_act_partial = SSM_st_Floor1Button11_SM3;
      }
      else if (tr_2_guard_Floor1Button4_SM3) {
        _78_SM3_state_act_partial = SSM_st_Floor1Button10_SM3;
      }
      else {
        _78_SM3_state_act_partial = SSM_st_Floor1Button4_SM3;
      }
      outC->SM3_state_act = _78_SM3_state_act_partial;
      break;
    case SSM_st_Floor1Button11_SM3 :
      tr_1_guard_Floor1Button11_SM3 = GPIOC8 == kcg_false;
      if (tr_1_guard_Floor1Button11_SM3) {
        _75_SM3_state_act_partial = SSM_st_Floor1Button10_SM3;
      }
      else {
        _75_SM3_state_act_partial = SSM_st_Floor1Button11_SM3;
      }
      outC->SM3_state_act = _75_SM3_state_act_partial;
      break;
    case SSM_st_Floor1Button10_SM3 :
      tr_1_guard_Floor1Button10_SM3 = GPIOC8 == kcg_true;
      if (tr_1_guard_Floor1Button10_SM3) {
        SM3_state_act_partial = SSM_st_Floor1Button4_SM3;
      }
      else {
        SM3_state_act_partial = SSM_st_Floor1Button10_SM3;
      }
      outC->SM3_state_act = SM3_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM3_state_act) {
    case SSM_st_Floor1Button4_SM3 :
      _70_Press8_partial = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM3: */
  switch (outC->SM3_state_sel) {
    case SSM_st_Floor1Button4_SM3 :
      if (tr_1_guard_Floor1Button4_SM3) {
        _80_SM3_fired_strong_partial =
          _25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3;
      }
      else if (tr_2_guard_Floor1Button4_SM3) {
        _80_SM3_fired_strong_partial =
          _26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3;
      }
      else {
        _80_SM3_fired_strong_partial = SSM_TR_no_trans_SM3;
      }
      outC->SM3_fired_strong = _80_SM3_fired_strong_partial;
      break;
    case SSM_st_Floor1Button11_SM3 :
      if (tr_1_guard_Floor1Button11_SM3) {
        _77_SM3_fired_strong_partial =
          _27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3;
      }
      else {
        _77_SM3_fired_strong_partial = SSM_TR_no_trans_SM3;
      }
      outC->SM3_fired_strong = _77_SM3_fired_strong_partial;
      break;
    case SSM_st_Floor1Button10_SM3 :
      if (tr_1_guard_Floor1Button10_SM3) {
        SM3_fired_strong_partial =
          _28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3;
      }
      else {
        SM3_fired_strong_partial = SSM_TR_no_trans_SM3;
      }
      outC->SM3_fired_strong = SM3_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM3_state_act) {
    case SSM_st_Floor1Button4_SM3 :
      _74_SM3_fired_partial = outC->SM3_fired_strong;
      _73_SM3_reset_nxt_partial = kcg_false;
      _72_SM3_state_nxt_partial = SSM_st_Floor1Button4_SM3;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM3_reset_prv = outC->SM3_reset_act;
  /* SM3: */
  switch (outC->SM3_state_sel) {
    case SSM_st_Floor1Button4_SM3 :
      if (tr_1_guard_Floor1Button4_SM3) {
        _79_SM3_reset_act_partial = kcg_true;
      }
      else {
        _79_SM3_reset_act_partial = tr_2_guard_Floor1Button4_SM3;
      }
      outC->SM3_reset_act = _79_SM3_reset_act_partial;
      break;
    case SSM_st_Floor1Button11_SM3 :
      _76_SM3_reset_act_partial = tr_1_guard_Floor1Button11_SM3;
      outC->SM3_reset_act = _76_SM3_reset_act_partial;
      break;
    case SSM_st_Floor1Button10_SM3 :
      SM3_reset_act_partial = tr_1_guard_Floor1Button10_SM3;
      outC->SM3_reset_act = SM3_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM3: */
  switch (outC->SM3_state_act) {
    case SSM_st_Floor1Button4_SM3 :
      if (outC->SM3_reset_act) {
        /* SM3:Floor1Button4:_L1=(Counter#12)/ */
        Counter_reset(&outC->Context_Counter_12);
      }
      /* SM3:Floor1Button4:_L1=(Counter#12)/ */ Counter(&outC->Context_Counter_12);
      outC->_L1_Floor1Button4_SM3 = outC->Context_Counter_12.Output;
      _71_Timer1_partial = outC->_L1_Floor1Button4_SM3;
      outC->Press8 = _70_Press8_partial;
      outC->Timer1 = _71_Timer1_partial;
      outC->SM3_state_nxt = _72_SM3_state_nxt_partial;
      break;
    case SSM_st_Floor1Button11_SM3 :
      _66_Timer1_partial = last_Timer1;
      _69_SM3_fired_partial = outC->SM3_fired_strong;
      _68_SM3_reset_nxt_partial = kcg_false;
      _67_SM3_state_nxt_partial = SSM_st_Floor1Button11_SM3;
      outC->_L2_Floor1Button11_SM3 = kcg_true;
      _65_Press8_partial = outC->_L2_Floor1Button11_SM3;
      outC->Press8 = _65_Press8_partial;
      outC->Timer1 = _66_Timer1_partial;
      outC->SM3_state_nxt = _67_SM3_state_nxt_partial;
      break;
    case SSM_st_Floor1Button10_SM3 :
      Timer1_partial = last_Timer1;
      SM3_fired_partial = outC->SM3_fired_strong;
      SM3_reset_nxt_partial = kcg_false;
      SM3_state_nxt_partial = SSM_st_Floor1Button10_SM3;
      outC->_L2_Floor1Button10_SM3 = kcg_false;
      Press8_partial = outC->_L2_Floor1Button10_SM3;
      outC->Press8 = Press8_partial;
      outC->Timer1 = Timer1_partial;
      outC->SM3_state_nxt = SM3_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM3_reset_sel = outC->SM3_reset_nxt;
  /* SM3: */
  switch (outC->SM3_state_act) {
    case SSM_st_Floor1Button4_SM3 :
      outC->SM3_reset_nxt = _73_SM3_reset_nxt_partial;
      outC->SM3_fired = _74_SM3_fired_partial;
      break;
    case SSM_st_Floor1Button11_SM3 :
      outC->SM3_reset_nxt = _68_SM3_reset_nxt_partial;
      outC->SM3_fired = _69_SM3_fired_partial;
      break;
    case SSM_st_Floor1Button10_SM3 :
      outC->SM3_reset_nxt = SM3_reset_nxt_partial;
      outC->SM3_fired = SM3_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM2_state_sel = outC->SM2_state_nxt;
  /* SM2: */
  switch (outC->SM2_state_sel) {
    case SSM_st_Floor1Button4_SM2 :
      tr_2_guard_Floor1Button4_SM2 = GPIOC7 == kcg_false;
      tr_1_guard_Floor1Button4_SM2 = (GPIOC7 == kcg_true) & (last_Timer0 ==
          kcg_lit_int16(10));
      if (tr_1_guard_Floor1Button4_SM2) {
        _94_SM2_state_act_partial = SSM_st_Floor1Button11_SM2;
      }
      else if (tr_2_guard_Floor1Button4_SM2) {
        _94_SM2_state_act_partial = SSM_st_Floor1Button10_SM2;
      }
      else {
        _94_SM2_state_act_partial = SSM_st_Floor1Button4_SM2;
      }
      outC->SM2_state_act = _94_SM2_state_act_partial;
      break;
    case SSM_st_Floor1Button11_SM2 :
      tr_1_guard_Floor1Button11_SM2 = GPIOC7 == kcg_false;
      if (tr_1_guard_Floor1Button11_SM2) {
        _91_SM2_state_act_partial = SSM_st_Floor1Button10_SM2;
      }
      else {
        _91_SM2_state_act_partial = SSM_st_Floor1Button11_SM2;
      }
      outC->SM2_state_act = _91_SM2_state_act_partial;
      break;
    case SSM_st_Floor1Button10_SM2 :
      tr_1_guard_Floor1Button10_SM2 = GPIOC7 == kcg_true;
      if (tr_1_guard_Floor1Button10_SM2) {
        SM2_state_act_partial = SSM_st_Floor1Button4_SM2;
      }
      else {
        SM2_state_act_partial = SSM_st_Floor1Button10_SM2;
      }
      outC->SM2_state_act = SM2_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM2_state_act) {
    case SSM_st_Floor1Button4_SM2 :
      _86_Press7_partial = kcg_true;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM2: */
  switch (outC->SM2_state_sel) {
    case SSM_st_Floor1Button4_SM2 :
      if (tr_1_guard_Floor1Button4_SM2) {
        _96_SM2_fired_strong_partial =
          _29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2;
      }
      else if (tr_2_guard_Floor1Button4_SM2) {
        _96_SM2_fired_strong_partial =
          _30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2;
      }
      else {
        _96_SM2_fired_strong_partial = SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _96_SM2_fired_strong_partial;
      break;
    case SSM_st_Floor1Button11_SM2 :
      if (tr_1_guard_Floor1Button11_SM2) {
        _93_SM2_fired_strong_partial =
          _31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2;
      }
      else {
        _93_SM2_fired_strong_partial = SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = _93_SM2_fired_strong_partial;
      break;
    case SSM_st_Floor1Button10_SM2 :
      if (tr_1_guard_Floor1Button10_SM2) {
        SM2_fired_strong_partial =
          _32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2;
      }
      else {
        SM2_fired_strong_partial = SSM_TR_no_trans_SM2;
      }
      outC->SM2_fired_strong = SM2_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM2_state_act) {
    case SSM_st_Floor1Button4_SM2 :
      _90_SM2_fired_partial = outC->SM2_fired_strong;
      _89_SM2_reset_nxt_partial = kcg_false;
      _88_SM2_state_nxt_partial = SSM_st_Floor1Button4_SM2;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM2_reset_prv = outC->SM2_reset_act;
  /* SM2: */
  switch (outC->SM2_state_sel) {
    case SSM_st_Floor1Button4_SM2 :
      if (tr_1_guard_Floor1Button4_SM2) {
        _95_SM2_reset_act_partial = kcg_true;
      }
      else {
        _95_SM2_reset_act_partial = tr_2_guard_Floor1Button4_SM2;
      }
      outC->SM2_reset_act = _95_SM2_reset_act_partial;
      break;
    case SSM_st_Floor1Button11_SM2 :
      _92_SM2_reset_act_partial = tr_1_guard_Floor1Button11_SM2;
      outC->SM2_reset_act = _92_SM2_reset_act_partial;
      break;
    case SSM_st_Floor1Button10_SM2 :
      SM2_reset_act_partial = tr_1_guard_Floor1Button10_SM2;
      outC->SM2_reset_act = SM2_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM2: */
  switch (outC->SM2_state_act) {
    case SSM_st_Floor1Button4_SM2 :
      if (outC->SM2_reset_act) {
        /* SM2:Floor1Button4:_L1=(Counter#11)/ */
        Counter_reset(&outC->Context_Counter_11);
      }
      /* SM2:Floor1Button4:_L1=(Counter#11)/ */ Counter(&outC->Context_Counter_11);
      outC->_L1_Floor1Button4_SM2 = outC->Context_Counter_11.Output;
      _87_Timer0_partial = outC->_L1_Floor1Button4_SM2;
      outC->Press7 = _86_Press7_partial;
      outC->Timer0 = _87_Timer0_partial;
      outC->SM2_state_nxt = _88_SM2_state_nxt_partial;
      break;
    case SSM_st_Floor1Button11_SM2 :
      _82_Timer0_partial = last_Timer0;
      _85_SM2_fired_partial = outC->SM2_fired_strong;
      _84_SM2_reset_nxt_partial = kcg_false;
      _83_SM2_state_nxt_partial = SSM_st_Floor1Button11_SM2;
      outC->_L2_Floor1Button11_SM2 = kcg_true;
      _81_Press7_partial = outC->_L2_Floor1Button11_SM2;
      outC->Press7 = _81_Press7_partial;
      outC->Timer0 = _82_Timer0_partial;
      outC->SM2_state_nxt = _83_SM2_state_nxt_partial;
      break;
    case SSM_st_Floor1Button10_SM2 :
      Timer0_partial = last_Timer0;
      SM2_fired_partial = outC->SM2_fired_strong;
      SM2_reset_nxt_partial = kcg_false;
      SM2_state_nxt_partial = SSM_st_Floor1Button10_SM2;
      outC->_L2_Floor1Button10_SM2 = kcg_false;
      Press7_partial = outC->_L2_Floor1Button10_SM2;
      outC->Press7 = Press7_partial;
      outC->Timer0 = Timer0_partial;
      outC->SM2_state_nxt = SM2_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM2_reset_sel = outC->SM2_reset_nxt;
  /* SM2: */
  switch (outC->SM2_state_act) {
    case SSM_st_Floor1Button4_SM2 :
      outC->SM2_reset_nxt = _89_SM2_reset_nxt_partial;
      outC->SM2_fired = _90_SM2_fired_partial;
      break;
    case SSM_st_Floor1Button11_SM2 :
      outC->SM2_reset_nxt = _84_SM2_reset_nxt_partial;
      outC->SM2_fired = _85_SM2_fired_partial;
      break;
    case SSM_st_Floor1Button10_SM2 :
      outC->SM2_reset_nxt = SM2_reset_nxt_partial;
      outC->SM2_fired = SM2_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ButtonProcessor_init(outC_ButtonProcessor *outC)
{
  outC->SM6_fired = SSM_TR_no_trans_SM6;
  outC->SM6_fired_strong = SSM_TR_no_trans_SM6;
  outC->SM6_state_act = SSM_st_Floor1Button10_SM6;
  outC->SM6_state_sel = SSM_st_Floor1Button10_SM6;
  outC->SM5_fired = SSM_TR_no_trans_SM5;
  outC->SM5_fired_strong = SSM_TR_no_trans_SM5;
  outC->SM5_state_act = SSM_st_Floor1Button10_SM5;
  outC->SM5_state_sel = SSM_st_Floor1Button10_SM5;
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Floor1Button10_SM1;
  outC->SM1_state_sel = SSM_st_Floor1Button10_SM1;
  outC->SM4_fired = SSM_TR_no_trans_SM4;
  outC->SM4_fired_strong = SSM_TR_no_trans_SM4;
  outC->SM4_state_act = SSM_st_Floor1Button10_SM4;
  outC->SM4_state_sel = SSM_st_Floor1Button10_SM4;
  outC->SM3_fired = SSM_TR_no_trans_SM3;
  outC->SM3_fired_strong = SSM_TR_no_trans_SM3;
  outC->SM3_state_act = SSM_st_Floor1Button10_SM3;
  outC->SM3_state_sel = SSM_st_Floor1Button10_SM3;
  outC->SM2_fired = SSM_TR_no_trans_SM2;
  outC->SM2_fired_strong = SSM_TR_no_trans_SM2;
  outC->SM2_state_act = SSM_st_Floor1Button10_SM2;
  outC->SM2_state_sel = SSM_st_Floor1Button10_SM2;
  outC->_L1_Floor1Button4_SM2 = kcg_lit_int16(0);
  outC->_L2_Floor1Button11_SM2 = kcg_true;
  outC->_L2_Floor1Button10_SM2 = kcg_true;
  outC->_L1_Floor1Button4_SM3 = kcg_lit_int16(0);
  outC->_L2_Floor1Button11_SM3 = kcg_true;
  outC->_L2_Floor1Button10_SM3 = kcg_true;
  outC->_L1_Floor1Button4_SM4 = kcg_lit_int16(0);
  outC->_L2_Floor1Button11_SM4 = kcg_true;
  outC->_L2_Floor1Button10_SM4 = kcg_true;
  outC->_L1_Floor1Button4_SM1 = kcg_lit_int16(0);
  outC->_L2_Floor1Button11_SM1 = kcg_true;
  outC->_L2_Floor1Button10_SM1 = kcg_true;
  outC->_L1_Floor1Button4_SM5 = kcg_lit_int16(0);
  outC->_L2_Floor1Button11_SM5 = kcg_true;
  outC->_L2_Floor1Button10_SM5 = kcg_true;
  outC->_L1_Floor1Button4_SM6 = kcg_lit_int16(0);
  outC->_L2_Floor1Button11_SM6 = kcg_true;
  outC->_L2_Floor1Button10_SM6 = kcg_true;
  outC->Press8 = kcg_true;
  outC->Press7 = kcg_true;
  outC->Press3 = kcg_true;
  outC->Press2 = kcg_true;
  outC->Press1 = kcg_true;
  outC->Press0 = kcg_true;
  /* SM2:Floor1Button4:_L1=(Counter#11)/ */
  Counter_init(&outC->Context_Counter_11);
  /* SM3:Floor1Button4:_L1=(Counter#12)/ */
  Counter_init(&outC->Context_Counter_12);
  /* SM4:Floor1Button4:_L1=(Counter#13)/ */
  Counter_init(&outC->Context_Counter_13);
  /* SM1:Floor1Button4:_L1=(Counter#14)/ */
  Counter_init(&outC->Context_Counter_14);
  /* SM5:Floor1Button4:_L1=(Counter#15)/ */
  Counter_init(&outC->Context_Counter_15);
  /* SM6:Floor1Button4:_L1=(Counter#16)/ */
  Counter_init(&outC->Context_Counter_16);
  outC->SM2_reset_nxt = kcg_false;
  outC->SM2_reset_act = kcg_false;
  outC->SM2_state_nxt = SSM_st_Floor1Button11_SM2;
  outC->SM3_reset_nxt = kcg_false;
  outC->SM3_reset_act = kcg_false;
  outC->SM3_state_nxt = SSM_st_Floor1Button10_SM3;
  outC->SM4_reset_nxt = kcg_false;
  outC->SM4_reset_act = kcg_false;
  outC->SM4_state_nxt = SSM_st_Floor1Button10_SM4;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_Floor1Button10_SM1;
  outC->SM5_reset_nxt = kcg_false;
  outC->SM5_reset_act = kcg_false;
  outC->SM5_state_nxt = SSM_st_Floor1Button10_SM5;
  outC->SM6_reset_nxt = kcg_false;
  outC->SM6_reset_act = kcg_false;
  outC->SM6_state_nxt = SSM_st_Floor1Button10_SM6;
  outC->Timer0 = kcg_lit_int16(0);
  outC->Timer1 = kcg_lit_int16(0);
  outC->Timer2 = kcg_lit_int16(0);
  outC->Timer3 = kcg_lit_int16(0);
  outC->Timer4 = kcg_lit_int16(0);
  outC->Timer5 = kcg_lit_int16(0);
  outC->mem_GPIOC7 = kcg_true;
  outC->mem_GPIOC8 = kcg_false;
  outC->mem_GPIOC3 = kcg_false;
  outC->mem_GPIOC2 = kcg_false;
  outC->mem_GPIOC1 = kcg_false;
  outC->mem_GPIOC0 = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ButtonProcessor_reset(outC_ButtonProcessor *outC)
{
  /* SM2:Floor1Button4:_L1=(Counter#11)/ */
  Counter_reset(&outC->Context_Counter_11);
  /* SM3:Floor1Button4:_L1=(Counter#12)/ */
  Counter_reset(&outC->Context_Counter_12);
  /* SM4:Floor1Button4:_L1=(Counter#13)/ */
  Counter_reset(&outC->Context_Counter_13);
  /* SM1:Floor1Button4:_L1=(Counter#14)/ */
  Counter_reset(&outC->Context_Counter_14);
  /* SM5:Floor1Button4:_L1=(Counter#15)/ */
  Counter_reset(&outC->Context_Counter_15);
  /* SM6:Floor1Button4:_L1=(Counter#16)/ */
  Counter_reset(&outC->Context_Counter_16);
  outC->SM2_reset_nxt = kcg_false;
  outC->SM2_reset_act = kcg_false;
  outC->SM2_state_nxt = SSM_st_Floor1Button11_SM2;
  outC->SM3_reset_nxt = kcg_false;
  outC->SM3_reset_act = kcg_false;
  outC->SM3_state_nxt = SSM_st_Floor1Button10_SM3;
  outC->SM4_reset_nxt = kcg_false;
  outC->SM4_reset_act = kcg_false;
  outC->SM4_state_nxt = SSM_st_Floor1Button10_SM4;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_Floor1Button10_SM1;
  outC->SM5_reset_nxt = kcg_false;
  outC->SM5_reset_act = kcg_false;
  outC->SM5_state_nxt = SSM_st_Floor1Button10_SM5;
  outC->SM6_reset_nxt = kcg_false;
  outC->SM6_reset_act = kcg_false;
  outC->SM6_state_nxt = SSM_st_Floor1Button10_SM6;
  outC->Timer0 = kcg_lit_int16(0);
  outC->Timer1 = kcg_lit_int16(0);
  outC->Timer2 = kcg_lit_int16(0);
  outC->Timer3 = kcg_lit_int16(0);
  outC->Timer4 = kcg_lit_int16(0);
  outC->Timer5 = kcg_lit_int16(0);
  outC->mem_GPIOC7 = kcg_true;
  outC->mem_GPIOC8 = kcg_false;
  outC->mem_GPIOC3 = kcg_false;
  outC->mem_GPIOC2 = kcg_false;
  outC->mem_GPIOC1 = kcg_false;
  outC->mem_GPIOC0 = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ButtonProcessor.c
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

