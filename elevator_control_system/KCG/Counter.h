/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _Counter_H_
#define _Counter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int16 /* Output/, _L1/ */ Output;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int16 /* x/ */ x;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Counter;

/* ===========  node initialization and cycle functions  =========== */
/* Counter/ */
extern void Counter(outC_Counter *outC);

extern void Counter_reset(outC_Counter *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Counter_init(outC_Counter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Counter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Counter.h
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

