/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */
#ifndef _ControlSystem_H_
#define _ControlSystem_H_

#include "kcg_types.h"
#include "ActuatorModule.h"
#include "PositionProcessor.h"
#include "SafetyModule.h"
#include "PlanningModule.h"
#include "ButtonProcessor.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* GPIOC0/ */ GPIOC0;
  kcg_bool /* GPIOC1/ */ GPIOC1;
  kcg_bool /* GPIOC2/ */ GPIOC2;
  kcg_bool /* GPIOC3/ */ GPIOC3;
  kcg_bool /* GPIOC8/ */ GPIOC8;
  kcg_bool /* GPIOC7/ */ GPIOC7;
  kcg_bool /* GPIOC9/ */ GPIOC9;
} inC_ControlSystem;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int8 /* Channel1/ */ Channel1;
  kcg_int8 /* Channel2/ */ Channel2;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* GPIOC8/ */ mem_GPIOC8;
  kcg_bool init;
  kcg_int16 /* _L54/ */ _L54;
  kcg_int16 /* _L52/ */ _L52;
  kcg_int8 /* _L56/ */ _L56;
  kcg_int8 /* _L55/ */ _L55;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_PositionProcessor /* _L52=(PositionProcessor#2)/ */ Context_PositionProcessor_2;
  outC_ActuatorModule /* _L55=(ActuatorModule#2)/ */ Context_ActuatorModule_2;
  outC_SafetyModule /* _L51=(SafetyModule#2)/ */ Context_SafetyModule_2;
  outC_PlanningModule /* _L61=(PlanningModule#2)/ */ Context_PlanningModule_2;
  outC_ButtonProcessor /* _L42=(ButtonProcessor#2)/ */ Context_ButtonProcessor_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L49/ */ _L49;
  PDirection /* _L48/ */ _L48;
  kcg_bool /* _L51/ */ _L51;
  Direction /* _L57/ */ _L57;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  kcg_int16 /* _L66/ */ _L66;
  kcg_int16 /* _L68/ */ _L68;
  kcg_int16 /* _L70/ */ _L70;
  kcg_int8 /* _L89/ */ _L89;
  kcg_int8 /* _L91/ */ _L91;
  kcg_bool /* _L92/ */ _L92;
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



#endif /* _ControlSystem_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ControlSystem.h
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

