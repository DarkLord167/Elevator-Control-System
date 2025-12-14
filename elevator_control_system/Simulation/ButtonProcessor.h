/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */
#ifndef _ButtonProcessor_H_
#define _ButtonProcessor_H_

#include "kcg_types.h"
#include "Counter.h"

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
  kcg_bool /* GPIOC0/ */ mem_GPIOC0;
  kcg_bool /* GPIOC1/ */ mem_GPIOC1;
  kcg_bool /* GPIOC2/ */ mem_GPIOC2;
  kcg_bool /* GPIOC3/ */ mem_GPIOC3;
  kcg_bool /* GPIOC8/ */ mem_GPIOC8;
  kcg_bool /* GPIOC7/ */ mem_GPIOC7;
  _8_SSM_ST_SM2 /* SM2: */ SM2_state_nxt;
  kcg_bool /* SM2: */ SM2_reset_act;
  kcg_bool /* SM2: */ SM2_reset_nxt;
  SSM_ST_SM3 /* SM3: */ SM3_state_nxt;
  kcg_bool /* SM3: */ SM3_reset_act;
  kcg_bool /* SM3: */ SM3_reset_nxt;
  SSM_ST_SM4 /* SM4: */ SM4_state_nxt;
  kcg_bool /* SM4: */ SM4_reset_act;
  kcg_bool /* SM4: */ SM4_reset_nxt;
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  SSM_ST_SM5 /* SM5: */ SM5_state_nxt;
  kcg_bool /* SM5: */ SM5_reset_act;
  kcg_bool /* SM5: */ SM5_reset_nxt;
  SSM_ST_SM6 /* SM6: */ SM6_state_nxt;
  kcg_bool /* SM6: */ SM6_reset_act;
  kcg_bool /* SM6: */ SM6_reset_nxt;
  kcg_int16 /* Timer0/ */ Timer0;
  kcg_int16 /* Timer1/ */ Timer1;
  kcg_int16 /* Timer2/ */ Timer2;
  kcg_int16 /* Timer3/ */ Timer3;
  kcg_int16 /* Timer4/ */ Timer4;
  kcg_int16 /* Timer5/ */ Timer5;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter /* SM2:Floor1Button4:_L1=(Counter#11)/ */ Context_Counter_11;
  outC_Counter /* SM3:Floor1Button4:_L1=(Counter#12)/ */ Context_Counter_12;
  outC_Counter /* SM4:Floor1Button4:_L1=(Counter#13)/ */ Context_Counter_13;
  outC_Counter /* SM1:Floor1Button4:_L1=(Counter#14)/ */ Context_Counter_14;
  outC_Counter /* SM5:Floor1Button4:_L1=(Counter#15)/ */ Context_Counter_15;
  outC_Counter /* SM6:Floor1Button4:_L1=(Counter#16)/ */ Context_Counter_16;
  /* ------------------ clocks of observable data -------------------- */
  _8_SSM_ST_SM2 /* SM2: */ SM2_state_act;
  SSM_ST_SM3 /* SM3: */ SM3_state_act;
  SSM_ST_SM4 /* SM4: */ SM4_state_act;
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  SSM_ST_SM5 /* SM5: */ SM5_state_act;
  SSM_ST_SM6 /* SM6: */ SM6_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM6:Floor1Button10:_L2/ */ _L2_Floor1Button10_SM6;
  kcg_bool /* SM6:Floor1Button11:_L2/ */ _L2_Floor1Button11_SM6;
  kcg_int16 /* SM6:Floor1Button4:_L1/ */ _L1_Floor1Button4_SM6;
  kcg_bool /* SM5:Floor1Button10:_L2/ */ _L2_Floor1Button10_SM5;
  kcg_bool /* SM5:Floor1Button11:_L2/ */ _L2_Floor1Button11_SM5;
  kcg_int16 /* SM5:Floor1Button4:_L1/ */ _L1_Floor1Button4_SM5;
  kcg_bool /* SM1:Floor1Button10:_L2/ */ _L2_Floor1Button10_SM1;
  kcg_bool /* SM1:Floor1Button11:_L2/ */ _L2_Floor1Button11_SM1;
  kcg_int16 /* SM1:Floor1Button4:_L1/ */ _L1_Floor1Button4_SM1;
  kcg_bool /* SM4:Floor1Button10:_L2/ */ _L2_Floor1Button10_SM4;
  kcg_bool /* SM4:Floor1Button11:_L2/ */ _L2_Floor1Button11_SM4;
  kcg_int16 /* SM4:Floor1Button4:_L1/ */ _L1_Floor1Button4_SM4;
  kcg_bool /* SM3:Floor1Button10:_L2/ */ _L2_Floor1Button10_SM3;
  kcg_bool /* SM3:Floor1Button11:_L2/ */ _L2_Floor1Button11_SM3;
  kcg_int16 /* SM3:Floor1Button4:_L1/ */ _L1_Floor1Button4_SM3;
  kcg_bool /* SM2:Floor1Button10:_L2/ */ _L2_Floor1Button10_SM2;
  kcg_bool /* SM2:Floor1Button11:_L2/ */ _L2_Floor1Button11_SM2;
  kcg_int16 /* SM2:Floor1Button4:_L1/ */ _L1_Floor1Button4_SM2;
  _8_SSM_ST_SM2 /* SM2: */ SM2_state_sel;
  _9_SSM_TR_SM2 /* SM2: */ SM2_fired_strong;
  _9_SSM_TR_SM2 /* SM2: */ SM2_fired;
  SSM_ST_SM3 /* SM3: */ SM3_state_sel;
  SSM_TR_SM3 /* SM3: */ SM3_fired_strong;
  SSM_TR_SM3 /* SM3: */ SM3_fired;
  SSM_ST_SM4 /* SM4: */ SM4_state_sel;
  SSM_TR_SM4 /* SM4: */ SM4_fired_strong;
  SSM_TR_SM4 /* SM4: */ SM4_fired;
  _10_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _11_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _11_SSM_TR_SM1 /* SM1: */ SM1_fired;
  SSM_ST_SM5 /* SM5: */ SM5_state_sel;
  SSM_TR_SM5 /* SM5: */ SM5_fired_strong;
  SSM_TR_SM5 /* SM5: */ SM5_fired;
  SSM_ST_SM6 /* SM6: */ SM6_state_sel;
  SSM_TR_SM6 /* SM6: */ SM6_fired_strong;
  SSM_TR_SM6 /* SM6: */ SM6_fired;
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
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

