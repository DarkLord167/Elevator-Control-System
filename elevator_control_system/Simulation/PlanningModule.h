/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */
#ifndef _PlanningModule_H_
#define _PlanningModule_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CarMotorStop/ */ CarMotorStop;
  kcg_bool /* Doors/ */ Doors;
  kcg_bool /* AtFloor/ */ AtFloor;
  PDirection /* Move/ */ Move;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_PlanningModule /* PlanningModule: */ PlanningModule_state_nxt;
  kcg_bool /* PlanningModule: */ PlanningModule_reset_act;
  kcg_bool /* PlanningModule: */ PlanningModule_reset_nxt;
  SSM_ST_SM2 /* SM2: */ SM2_state_nxt;
  kcg_bool /* SM2: */ SM2_reset_act;
  kcg_bool /* SM2: */ SM2_reset_nxt;
  kcg_bool /* F1BS/ */ F1BS;
  kcg_bool /* F2BS/ */ F2BS;
  kcg_bool /* F3BS/ */ F3BS;
  kcg_bool /* F1BR/ */ F1BR;
  kcg_bool /* F2BR/ */ F2BR;
  kcg_bool /* F3BR/ */ F3BR;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_PlanningModule /* PlanningModule: */ PlanningModule_state_act;
  SSM_ST_SM2 /* SM2: */ SM2_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM2:State12:_L2/ */ _L2_State12_SM2;
  kcg_bool /* SM2:State13:_L2/ */ _L2_State13_SM2;
  kcg_bool /* SM2:State14:_L2/ */ _L2_State14_SM2;
  kcg_bool /* SM2:State17:_L2/ */ _L2_State17_SM2;
  kcg_bool /* SM2:State16:_L2/ */ _L2_State16_SM2;
  kcg_bool /* SM2:State15:_L2/ */ _L2_State15_SM2;
  kcg_bool /* PlanningModule:Floor1:_L9/ */ _L9_Floor1_PlanningModule;
  kcg_bool /* PlanningModule:Floor1:_L7/ */ _L7_Floor1_PlanningModule;
  PDirection /* PlanningModule:Floor1:_L6/ */ _L6_Floor1_PlanningModule;
  kcg_bool /* PlanningModule:Floor1:_L4/ */ _L4_Floor1_PlanningModule;
  kcg_bool /* PlanningModule:Floor1:_L5/ */ _L5_Floor1_PlanningModule;
  kcg_bool /* PlanningModule:Movin1To2:_L6/ */ _L6_Movin1To2_PlanningModule;
  PDirection /* PlanningModule:Movin1To2:_L5/ */ _L5_Movin1To2_PlanningModule;
  kcg_bool /* PlanningModule:Movin1To2:_L4/ */ _L4_Movin1To2_PlanningModule;
  kcg_bool /* PlanningModule:Movin1To2:_L2/ */ _L2_Movin1To2_PlanningModule;
  kcg_bool /* PlanningModule:Floor2:_L9/ */ _L9_Floor2_PlanningModule;
  kcg_bool /* PlanningModule:Floor2:_L7/ */ _L7_Floor2_PlanningModule;
  PDirection /* PlanningModule:Floor2:_L6/ */ _L6_Floor2_PlanningModule;
  kcg_bool /* PlanningModule:Floor2:_L4/ */ _L4_Floor2_PlanningModule;
  kcg_bool /* PlanningModule:Floor2:_L2/ */ _L2_Floor2_PlanningModule;
  kcg_bool /* PlanningModule:Floor3:_L8/ */ _L8_Floor3_PlanningModule;
  kcg_bool /* PlanningModule:Floor3:_L6/ */ _L6_Floor3_PlanningModule;
  PDirection /* PlanningModule:Floor3:_L5/ */ _L5_Floor3_PlanningModule;
  kcg_bool /* PlanningModule:Floor3:_L4/ */ _L4_Floor3_PlanningModule;
  kcg_bool /* PlanningModule:Floor3:_L2/ */ _L2_Floor3_PlanningModule;
  kcg_bool /* PlanningModule:Movin1To3:_L6/ */ _L6_Movin1To3_PlanningModule;
  PDirection /* PlanningModule:Movin1To3:_L5/ */ _L5_Movin1To3_PlanningModule;
  kcg_bool /* PlanningModule:Movin1To3:_L4/ */ _L4_Movin1To3_PlanningModule;
  kcg_bool /* PlanningModule:Movin1To3:_L2/ */ _L2_Movin1To3_PlanningModule;
  kcg_bool /* PlanningModule:Moving2To3:_L7/ */ _L7_Moving2To3_PlanningModule;
  PDirection /* PlanningModule:Moving2To3:_L6/ */ _L6_Moving2To3_PlanningModule;
  kcg_bool /* PlanningModule:Moving2To3:_L4/ */ _L4_Moving2To3_PlanningModule;
  kcg_bool /* PlanningModule:Moving2To3:_L2/ */ _L2_Moving2To3_PlanningModule;
  kcg_bool /* PlanningModule:Moving3To1:_L6/ */ _L6_Moving3To1_PlanningModule;
  PDirection /* PlanningModule:Moving3To1:_L5/ */ _L5_Moving3To1_PlanningModule;
  kcg_bool /* PlanningModule:Moving3To1:_L4/ */ _L4_Moving3To1_PlanningModule;
  kcg_bool /* PlanningModule:Moving3To1:_L2/ */ _L2_Moving3To1_PlanningModule;
  kcg_bool /* PlanningModule:Moving3To2:_L6/ */ _L6_Moving3To2_PlanningModule;
  PDirection /* PlanningModule:Moving3To2:_L5/ */ _L5_Moving3To2_PlanningModule;
  kcg_bool /* PlanningModule:Moving3To2:_L4/ */ _L4_Moving3To2_PlanningModule;
  kcg_bool /* PlanningModule:Moving3To2:_L2/ */ _L2_Moving3To2_PlanningModule;
  kcg_bool /* PlanningModule:Movin2To1:_L6/ */ _L6_Movin2To1_PlanningModule;
  PDirection /* PlanningModule:Movin2To1:_L5/ */ _L5_Movin2To1_PlanningModule;
  kcg_bool /* PlanningModule:Movin2To1:_L4/ */ _L4_Movin2To1_PlanningModule;
  kcg_bool /* PlanningModule:Movin2To1:_L2/ */ _L2_Movin2To1_PlanningModule;
  kcg_bool /* PlanningModule:Stop:_L6/ */ _L6_Stop_PlanningModule;
  PDirection /* PlanningModule:Stop:_L5/ */ _L5_Stop_PlanningModule;
  kcg_bool /* PlanningModule:Stop:_L4/ */ _L4_Stop_PlanningModule;
  kcg_bool /* PlanningModule:Stop:_L2/ */ _L2_Stop_PlanningModule;
  SSM_ST_PlanningModule /* PlanningModule: */ PlanningModule_state_sel;
  SSM_TR_PlanningModule /* PlanningModule: */ PlanningModule_fired_strong;
  SSM_TR_PlanningModule /* PlanningModule: */ PlanningModule_fired;
  SSM_ST_SM2 /* SM2: */ SM2_state_sel;
  SSM_TR_SM2 /* SM2: */ SM2_fired_strong;
  SSM_TR_SM2 /* SM2: */ SM2_fired;
} outC_PlanningModule;

/* ===========  node initialization and cycle functions  =========== */
/* PlanningModule/ */
extern void PlanningModule(
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
  outC_PlanningModule *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PlanningModule_reset(outC_PlanningModule *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PlanningModule_init(outC_PlanningModule *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PlanningModule_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PlanningModule.h
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

