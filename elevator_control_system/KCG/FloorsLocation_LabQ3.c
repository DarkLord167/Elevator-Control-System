/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FloorsLocation_LabQ3.h"

/* LabQ3::FloorsLocation/ */
kcg_bool FloorsLocation_LabQ3(
  /* GPIOC7/, SM1:State1:_L14/ */
  kcg_bool GPIOC7,
  /* Position/, SM1:State1:_L11/ */
  kcg_int16 Position)
{
  /* SM1:State1:_L19/, SafetyViolation/ */
  kcg_bool SafetyViolation;

  SafetyViolation = (((kcg_lit_int16(1) <= Position) & (Position >=
          kcg_lit_int16(-1))) | ((kcg_lit_int16(401) <= Position) & (Position >=
          kcg_lit_int16(399))) | ((kcg_lit_int16(801) <= Position) &
        (Position >= kcg_lit_int16(799)))) & (!GPIOC7);
  return SafetyViolation;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FloorsLocation_LabQ3.c
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

