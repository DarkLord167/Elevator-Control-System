/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter.h"

/* Counter/ */
void Counter(outC_Counter *outC)
{
  outC->Output = kcg_lit_int16(1) + outC->x;
  outC->x = outC->Output;
}

#ifndef KCG_USER_DEFINED_INIT
void Counter_init(outC_Counter *outC)
{
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
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

