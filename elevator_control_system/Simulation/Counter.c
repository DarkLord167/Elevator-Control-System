/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter.h"

/* Counter/ */
void Counter(outC_Counter *outC)
{
  /* x/ */
  kcg_int16 last_x;

  last_x = outC->x;
  outC->_L3 = last_x;
  outC->_L4 = kcg_lit_int16(1);
  outC->_L1 = outC->_L4 + outC->_L3;
  outC->Output = outC->_L1;
  outC->x = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void Counter_init(outC_Counter *outC)
{
  outC->_L3 = kcg_lit_int16(0);
  outC->_L1 = kcg_lit_int16(0);
  outC->_L4 = kcg_lit_int16(0);
  outC->Output = kcg_lit_int16(0);
  outC->x = kcg_lit_int16(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void Counter_reset(outC_Counter *outC)
{
  outC->x = kcg_lit_int16(0);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Counter.c
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

