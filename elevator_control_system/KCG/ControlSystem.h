/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */
#ifndef _ControlSystem_H_
#define _ControlSystem_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* GPIOC0/, _L23/ */ GPIOC0;
  kcg_bool /* GPIOC1/, _L24/ */ GPIOC1;
  kcg_bool /* GPIOC2/, _L25/ */ GPIOC2;
  kcg_bool /* GPIOC3/, _L26/ */ GPIOC3;
  kcg_bool /* GPIOC8/, _L64/ */ GPIOC8;
  kcg_bool /* GPIOC7/, _L63/ */ GPIOC7;
  kcg_bool /* @2/GPIOC9/, GPIOC9/, _L29/ */ GPIOC9;
} inC_ControlSystem;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int8 /* Channel1/ */ Channel1;
  kcg_int8 /* Channel2/ */ Channel2;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int8 /* _L55/ */ _L55;
  kcg_int8 /* _L56/ */ _L56;
  kcg_int16 /* _L52/ */ _L52;
  kcg_int16 /* @2/Speed/, _L54/ */ _L54;
  SSM_ST_SM1 /* @1/SM1: */ SM1_state_nxt_ActuatorModule_2;
  Direction /* @1/setDirection/, _L57/ */ setDirection_ActuatorModule_2;
  kcg_int16 /* @2/SM1:State4:_L1/,
     @2/Timer/,
     @3/Output/,
     @3/_L1/,
     @3/x/ */ _L1_Counter_2_PositionProcessor_2;
  kcg_int16 /* @2/SM1:WaintingForNegPulse:_L1/,
     @2/Timer/,
     @4/Output/,
     @4/_L1/,
     @4/x/ */ _L1_Counter_3_PositionProcessor_2;
  _2_SSM_ST_SM1 /* @2/SM1: */ SM1_state_nxt_PositionProcessor_2;
  kcg_int16 /* @2/x/ */ x_PositionProcessor_2;
  kcg_int16 /* @2/PulseCount/ */ PulseCount_PositionProcessor_2;
  kcg_int16 /* @2/Timer/ */ Timer_PositionProcessor_2;
  Direction /* @2/setDirection/ */ setDirection_PositionProcessor_2;
  kcg_int16 /* @2/Position/ */ Position_PositionProcessor_2;
  kcg_int16 /* @5/SM1:NormalMode:_L4/,
     @5/timer/,
     @6/Output/,
     @6/_L1/,
     @6/x/ */ _L1_Counter_6_SafetyModule_2;
  kcg_int16 /* @5/SM1:Safety1PC:_L3/,
     @5/StopTimer/,
     @7/Output/,
     @7/_L1/,
     @7/x/ */ _L1_Counter_17_SafetyModule_2;
  _4_SSM_ST_SM1 /* @5/SM1: */ SM1_state_nxt_SafetyModule_2;
  kcg_bool /* @5/SafetyViolation/ */ SafetyViolation_SafetyModule_2;
  kcg_int16 /* @5/timer/ */ timer_SafetyModule_2;
  kcg_int16 /* @5/StopTimer/ */ StopTimer_SafetyModule_2;
  SSM_ST_PlanningModule /* @8/PlanningModule: */ PlanningModule_state_nxt_PlanningModule_2;
  SSM_ST_SM2 /* @8/SM2: */ SM2_state_nxt_PlanningModule_2;
  kcg_bool /* @8/F1BS/ */ F1BS_PlanningModule_2;
  kcg_bool /* @8/F2BS/ */ F2BS_PlanningModule_2;
  kcg_bool /* @8/F3BS/ */ F3BS_PlanningModule_2;
  kcg_bool /* @8/F1BR/ */ F1BR_PlanningModule_2;
  kcg_bool /* @8/F2BR/ */ F2BR_PlanningModule_2;
  kcg_bool /* @8/F3BR/ */ F3BR_PlanningModule_2;
  kcg_int16 /* @10/Output/,
     @10/_L1/,
     @10/x/,
     @9/SM2:Floor1Button4:_L1/,
     @9/Timer0/ */ _L1_Counter_11_ButtonProcessor_2;
  kcg_int16 /* @11/Output/,
     @11/_L1/,
     @11/x/,
     @9/SM3:Floor1Button4:_L1/,
     @9/Timer1/ */ _L1_Counter_12_ButtonProcessor_2;
  kcg_int16 /* @12/Output/,
     @12/_L1/,
     @12/x/,
     @9/SM4:Floor1Button4:_L1/,
     @9/Timer2/ */ _L1_Counter_13_ButtonProcessor_2;
  kcg_int16 /* @13/Output/,
     @13/_L1/,
     @13/x/,
     @9/SM1:Floor1Button4:_L1/,
     @9/Timer3/ */ _L1_Counter_14_ButtonProcessor_2;
  kcg_int16 /* @14/Output/,
     @14/_L1/,
     @14/x/,
     @9/SM5:Floor1Button4:_L1/,
     @9/Timer4/ */ _L1_Counter_15_ButtonProcessor_2;
  kcg_int16 /* @15/Output/,
     @15/_L1/,
     @15/x/,
     @9/SM6:Floor1Button4:_L1/,
     @9/Timer5/ */ _L1_Counter_16_ButtonProcessor_2;
  _8_SSM_ST_SM2 /* @9/SM2: */ SM2_state_nxt_ButtonProcessor_2;
  SSM_ST_SM3 /* @9/SM3: */ SM3_state_nxt_ButtonProcessor_2;
  SSM_ST_SM4 /* @9/SM4: */ SM4_state_nxt_ButtonProcessor_2;
  _10_SSM_ST_SM1 /* @9/SM1: */ SM1_state_nxt_ButtonProcessor_2;
  SSM_ST_SM5 /* @9/SM5: */ SM5_state_nxt_ButtonProcessor_2;
  SSM_ST_SM6 /* @9/SM6: */ SM6_state_nxt_ButtonProcessor_2;
  kcg_int16 /* @9/Timer0/ */ Timer0_ButtonProcessor_2;
  kcg_int16 /* @9/Timer1/ */ Timer1_ButtonProcessor_2;
  kcg_int16 /* @9/Timer2/ */ Timer2_ButtonProcessor_2;
  kcg_int16 /* @9/Timer3/ */ Timer3_ButtonProcessor_2;
  kcg_int16 /* @9/Timer4/ */ Timer4_ButtonProcessor_2;
  kcg_int16 /* @9/Timer5/ */ Timer5_ButtonProcessor_2;
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_bool init4;
  kcg_bool init5;
  kcg_bool init6;
  kcg_bool init7;
  kcg_bool init8;
  kcg_bool init9;
  kcg_bool init10;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ControlSystem;

/* ===========  node initialization and cycle functions  =========== */
/* ControlSystem/ */
extern void ControlSystem(inC_ControlSystem *inC, outC_ControlSystem *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ControlSystem_reset(outC_ControlSystem *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ControlSystem_init(outC_ControlSystem *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ControlSystem/
  @1: (ActuatorModule#2)
  @2: (PositionProcessor#2)
  @3: @2/(Counter#2)
  @4: @2/(Counter#3)
  @5: (SafetyModule#2)
  @6: @5/(Counter#6)
  @7: @5/(Counter#17)
  @8: (PlanningModule#2)
  @9: (ButtonProcessor#2)
  @10: @9/(Counter#11)
  @11: @9/(Counter#12)
  @12: @9/(Counter#13)
  @13: @9/(Counter#14)
  @14: @9/(Counter#15)
  @15: @9/(Counter#16)
*/

#endif /* _ControlSystem_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ControlSystem.h
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

