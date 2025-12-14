/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ControlSystem.h"

/* ControlSystem/ */
void ControlSystem(inC_ControlSystem *inC, outC_ControlSystem *outC)
{
  /* Channel2/ */
  kcg_int8 last_Channel2;
  /* Channel1/ */
  kcg_int8 last_Channel1;
  /* GPIOC8/ */
  kcg_bool last_GPIOC8;

  last_GPIOC8 = outC->mem_GPIOC8;
  outC->mem_GPIOC8 = inC->GPIOC8;
  last_Channel2 = outC->Channel2;
  last_Channel1 = outC->Channel1;
  /* _L91= */
  if (outC->init) {
    outC->_L91 = kcg_lit_int8(0);
  }
  else {
    outC->_L91 = outC->_L56;
  }
  /* _L89= */
  if (outC->init) {
    outC->_L89 = kcg_lit_int8(0);
  }
  else {
    outC->_L89 = outC->_L55;
  }
  outC->_L23 = inC->GPIOC0;
  outC->_L24 = inC->GPIOC1;
  outC->_L25 = inC->GPIOC2;
  outC->_L26 = inC->GPIOC3;
  outC->_L63 = inC->GPIOC7;
  outC->_L64 = inC->GPIOC8;
  /* _L42=(ButtonProcessor#2)/ */
  ButtonProcessor(
    outC->_L23,
    outC->_L24,
    outC->_L25,
    outC->_L26,
    outC->_L63,
    outC->_L64,
    &outC->Context_ButtonProcessor_2);
  outC->_L42 = outC->Context_ButtonProcessor_2.Press0;
  outC->_L43 = outC->Context_ButtonProcessor_2.Press1;
  outC->_L44 = outC->Context_ButtonProcessor_2.Press2;
  outC->_L45 = outC->Context_ButtonProcessor_2.Press3;
  outC->_L47 = outC->Context_ButtonProcessor_2.Press7;
  outC->_L46 = outC->Context_ButtonProcessor_2.Press8;
  /* _L66= */
  if (outC->init) {
    outC->_L66 = kcg_lit_int16(0);
  }
  else {
    outC->_L66 = outC->_L52;
  }
  /* _L61=(PlanningModule#2)/ */
  PlanningModule(
    outC->_L42,
    outC->_L43,
    outC->_L44,
    outC->_L45,
    outC->_L47,
    outC->_L46,
    outC->_L66,
    &outC->Context_PlanningModule_2);
  outC->_L61 = outC->Context_PlanningModule_2.CarMotorStop;
  outC->_L49 = outC->Context_PlanningModule_2.Doors;
  outC->_L50 = outC->Context_PlanningModule_2.AtFloor;
  outC->_L48 = outC->Context_PlanningModule_2.Move;
  /* _L70= */
  if (outC->init) {
    outC->_L70 = kcg_lit_int16(0);
  }
  else {
    outC->_L70 = outC->_L52;
  }
  /* _L68= */
  if (outC->init) {
    outC->_L68 = kcg_lit_int16(0);
  }
  else {
    outC->_L68 = outC->_L54;
  }
  /* _L51=(SafetyModule#2)/ */
  SafetyModule(
    outC->_L89,
    outC->_L91,
    outC->_L70,
    outC->_L45,
    outC->_L50,
    outC->_L49,
    outC->_L68,
    &outC->Context_SafetyModule_2);
  outC->_L51 = outC->Context_SafetyModule_2.CarMotorStop;
  outC->_L92 = outC->_L51 | outC->_L61;
  /* _L55=(ActuatorModule#2)/ */
  ActuatorModule(outC->_L48, outC->_L92, &outC->Context_ActuatorModule_2);
  outC->_L55 = outC->Context_ActuatorModule_2.Channel1;
  outC->_L56 = outC->Context_ActuatorModule_2.Channel2;
  outC->_L57 = outC->Context_ActuatorModule_2.setDirection;
  outC->Channel2 = outC->_L56;
  outC->Channel1 = outC->_L55;
  outC->_L29 = inC->GPIOC9;
  /* _L52=(PositionProcessor#2)/ */
  PositionProcessor(outC->_L57, outC->_L29, &outC->Context_PositionProcessor_2);
  outC->_L52 = outC->Context_PositionProcessor_2.Position;
  outC->_L54 = outC->Context_PositionProcessor_2.Speed;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ControlSystem_init(outC_ControlSystem *outC)
{
  outC->_L92 = kcg_true;
  outC->_L91 = kcg_lit_int8(0);
  outC->_L89 = kcg_lit_int8(0);
  outC->_L70 = kcg_lit_int16(0);
  outC->_L68 = kcg_lit_int16(0);
  outC->_L66 = kcg_lit_int16(0);
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L57 = Up;
  outC->_L51 = kcg_true;
  outC->_L48 = Upward;
  outC->_L49 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L55 = kcg_lit_int8(0);
  outC->_L56 = kcg_lit_int8(0);
  outC->_L52 = kcg_lit_int16(0);
  outC->_L54 = kcg_lit_int16(0);
  outC->init = kcg_true;
  /* _L52=(PositionProcessor#2)/ */
  PositionProcessor_init(&outC->Context_PositionProcessor_2);
  /* _L55=(ActuatorModule#2)/ */
  ActuatorModule_init(&outC->Context_ActuatorModule_2);
  /* _L51=(SafetyModule#2)/ */ SafetyModule_init(&outC->Context_SafetyModule_2);
  /* _L61=(PlanningModule#2)/ */
  PlanningModule_init(&outC->Context_PlanningModule_2);
  /* _L42=(ButtonProcessor#2)/ */
  ButtonProcessor_init(&outC->Context_ButtonProcessor_2);
  outC->Channel1 = kcg_lit_int8(0);
  outC->Channel2 = kcg_lit_int8(0);
  outC->mem_GPIOC8 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ControlSystem_reset(outC_ControlSystem *outC)
{
  outC->init = kcg_true;
  /* _L52=(PositionProcessor#2)/ */
  PositionProcessor_reset(&outC->Context_PositionProcessor_2);
  /* _L55=(ActuatorModule#2)/ */
  ActuatorModule_reset(&outC->Context_ActuatorModule_2);
  /* _L51=(SafetyModule#2)/ */ SafetyModule_reset(&outC->Context_SafetyModule_2);
  /* _L61=(PlanningModule#2)/ */
  PlanningModule_reset(&outC->Context_PlanningModule_2);
  /* _L42=(ButtonProcessor#2)/ */
  ButtonProcessor_reset(&outC->Context_ButtonProcessor_2);
  outC->Channel1 = kcg_lit_int8(0);
  outC->Channel2 = kcg_lit_int8(0);
  outC->mem_GPIOC8 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ControlSystem.c
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

