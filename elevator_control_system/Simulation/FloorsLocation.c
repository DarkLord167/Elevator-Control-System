/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FloorsLocation.h"

/* FloorsLocation/ */
void FloorsLocation(
  /* GPIOC7/ */
  kcg_bool GPIOC7,
  /* Position/ */
  kcg_int16 Position,
  outC_FloorsLocation *outC)
{
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->_L12_State1_SM1 = kcg_lit_int16(799);
  outC->_L11_State1_SM1 = Position;
  outC->_L25_State1_SM1 = outC->_L11_State1_SM1 > outC->_L12_State1_SM1;
  outC->_L7_State1_SM1 = kcg_lit_int16(801);
  outC->_L26_State1_SM1 = outC->_L11_State1_SM1 < outC->_L7_State1_SM1;
  outC->_L13_State1_SM1 = outC->_L26_State1_SM1 & outC->_L25_State1_SM1;
  outC->_L15_State1_SM1 = kcg_lit_int16(399);
  outC->_L23_State1_SM1 = outC->_L11_State1_SM1 > outC->_L15_State1_SM1;
  outC->_L17_State1_SM1 = kcg_lit_int16(401);
  outC->_L24_State1_SM1 = outC->_L11_State1_SM1 < outC->_L17_State1_SM1;
  outC->_L9_State1_SM1 = outC->_L24_State1_SM1 & outC->_L23_State1_SM1;
  outC->_L3_State1_SM1 = kcg_lit_int16(-1);
  outC->_L22_State1_SM1 = outC->_L11_State1_SM1 > outC->_L3_State1_SM1;
  outC->_L8_State1_SM1 = kcg_lit_int16(1);
  outC->_L21_State1_SM1 = outC->_L11_State1_SM1 < outC->_L8_State1_SM1;
  outC->_L18_State1_SM1 = outC->_L21_State1_SM1 & outC->_L22_State1_SM1;
  outC->_L1_State1_SM1 = outC->_L18_State1_SM1 | outC->_L9_State1_SM1 |
    outC->_L13_State1_SM1;
  outC->_L14_State1_SM1 = GPIOC7;
  outC->_L6_State1_SM1 = !outC->_L14_State1_SM1;
  outC->_L19_State1_SM1 = outC->_L1_State1_SM1 & outC->_L6_State1_SM1;
  outC->SafetyViolation = outC->_L19_State1_SM1;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
  SM1_reset_sel = outC->SM1_reset_nxt;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_fired_strong = _34_SSM_TR_no_trans_SM1;
  outC->SM1_fired = outC->SM1_fired_strong;
  SM1_reset_prv = outC->SM1_reset_act;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_act = outC->SM1_state_sel;
}

#ifndef KCG_USER_DEFINED_INIT
void FloorsLocation_init(outC_FloorsLocation *outC)
{
  outC->SM1_fired = _34_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _34_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_State1_SM1;
  outC->SM1_state_sel = SSM_st_State1_SM1;
  outC->_L26_State1_SM1 = kcg_true;
  outC->_L25_State1_SM1 = kcg_true;
  outC->_L24_State1_SM1 = kcg_true;
  outC->_L23_State1_SM1 = kcg_true;
  outC->_L22_State1_SM1 = kcg_true;
  outC->_L21_State1_SM1 = kcg_true;
  outC->_L1_State1_SM1 = kcg_true;
  outC->_L3_State1_SM1 = kcg_lit_int16(0);
  outC->_L6_State1_SM1 = kcg_true;
  outC->_L7_State1_SM1 = kcg_lit_int16(0);
  outC->_L8_State1_SM1 = kcg_lit_int16(0);
  outC->_L9_State1_SM1 = kcg_true;
  outC->_L11_State1_SM1 = kcg_lit_int16(0);
  outC->_L12_State1_SM1 = kcg_lit_int16(0);
  outC->_L13_State1_SM1 = kcg_true;
  outC->_L14_State1_SM1 = kcg_true;
  outC->_L15_State1_SM1 = kcg_lit_int16(0);
  outC->_L17_State1_SM1 = kcg_lit_int16(0);
  outC->_L18_State1_SM1 = kcg_true;
  outC->_L19_State1_SM1 = kcg_true;
  outC->SafetyViolation = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


void FloorsLocation_reset(outC_FloorsLocation *outC)
{
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FloorsLocation.c
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

