/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _ButtonProcessor_H_
#define _ButtonProcessor_H_

#include "kcg_types.h"
#include "Doors_LabQ1.h"
#include "AtFloor_LabQ1.h"
#include "Stop_LabQ1.h"
#include "Floor3_LabQ1.h"
#include "Floor2_LabQ1.h"
#include "Floor1_LabQ1.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Press0/ */ Press0;
  kcg_bool /* Press1/ */ Press1;
  kcg_bool /* Press2/ */ Press2;
  kcg_bool /* Press3/ */ Press3;
  kcg_bool /* Press7/ */ Press7;
  kcg_bool /* Press8/ */ Press8;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _8_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Doors_LabQ1 /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */ Context_Doors_1;
  outC_AtFloor_LabQ1 /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */ Context_AtFloor_3;
  outC_Stop_LabQ1 /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */ Context_Stop_1;
  outC_Floor3_LabQ1 /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */ Context_Floor3_1;
  outC_Floor2_LabQ1 /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */ Context_Floor2_1;
  outC_Floor1_LabQ1 /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */ Context_Floor1_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ButtonProcessor;

/* ===========  node initialization and cycle functions  =========== */
/* ButtonProcessor/ */
extern void ButtonProcessor(
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
  outC_ButtonProcessor *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ButtonProcessor_reset(outC_ButtonProcessor *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ButtonProcessor_init(outC_ButtonProcessor *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ButtonProcessor_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ButtonProcessor.h
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

