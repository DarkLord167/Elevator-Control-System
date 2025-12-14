/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _ActuatorModule_H_
#define _ActuatorModule_H_



/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int8 /* Channel1/ */ Channel1;
  kcg_int8 /* Channel2/ */ Channel2;
  Direction /* setDirection/ */ setDirection;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ActuatorModule;

/* ===========  node initialization and cycle functions  =========== */
/* ActuatorModule/ */
extern void ActuatorModule(
  /* Move/ */
  PDirection Move,
  /* CarMotorStop/ */
  kcg_bool CarMotorStop,
  outC_ActuatorModule *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ActuatorModule_reset(outC_ActuatorModule *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ActuatorModule_init(outC_ActuatorModule *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ActuatorModule_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ActuatorModule.h
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */
#ifndef _AtFloor_LabQ1_H_
#define _AtFloor_LabQ1_H_



/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Press7/ */ Press7;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_AtFloorSensor /* AtFloorSensor: */ AtFloorSensor_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_AtFloor_LabQ1;

/* ===========  node initialization and cycle functions  =========== */
/* LabQ1::AtFloor/ */
extern void AtFloor_LabQ1(
  /* GPIOC7/ */
  kcg_bool GPIOC7,
  outC_AtFloor_LabQ1 *outC);

extern void AtFloor_reset_LabQ1(outC_AtFloor_LabQ1 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void AtFloor_init_LabQ1(outC_AtFloor_LabQ1 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AtFloor_LabQ1_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AtFloor_LabQ1.h
** Generation date: 2022-02-25T14:54:23
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _ButtonProcessor_H_
#define _ButtonProcessor_H_



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

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */
#ifndef _ControlSystem_H_
#define _ControlSystem_H_


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

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _Counter_H_
#define _Counter_H_


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

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_


#endif /* _KCG_CONSTS_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_consts.h
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

#ifndef SC2C_KCG_IMPORTED_TYPES_H
#define SC2C_KCG_IMPORTED_TYPES_H
/*generated by SCADE Code Generator*/
#endif /*SC2C_KCG_IMPORTED_TYPES_H*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */
#ifndef _KCG_SENSORS_H_
#define _KCG_SENSORS_H_


#endif /* _KCG_SENSORS_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_sensors.h
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_


#define KCG_MAPW_CPY


#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* Direction/ */
typedef enum kcg_tag_Direction { Up, Down, None } Direction;
/* PDirection/ */
typedef enum kcg_tag_PDirection { Upward, Downward, Stop } PDirection;
/* ButtonProcessor/SM6: */
typedef enum kcg_tag_SSM_TR_SM6 {
  SSM_TR_no_trans_SM6,
  _35_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6,
  _36_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6,
  _37_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6,
  _38_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6
} SSM_TR_SM6;
/* ButtonProcessor/SM6: */
typedef enum kcg_tag_SSM_ST_SM6 {
  SSM_st_Floor1Button10_SM6,
  SSM_st_Floor1Button11_SM6,
  SSM_st_Floor1Button4_SM6
} SSM_ST_SM6;
/* ButtonProcessor/SM5: */
typedef enum kcg_tag_SSM_TR_SM5 {
  SSM_TR_no_trans_SM5,
  _31_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5,
  _32_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5,
  _33_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5,
  _34_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5
} SSM_TR_SM5;
/* ButtonProcessor/SM5: */
typedef enum kcg_tag_SSM_ST_SM5 {
  SSM_st_Floor1Button10_SM5,
  SSM_st_Floor1Button11_SM5,
  SSM_st_Floor1Button4_SM5
} SSM_ST_SM5;
/* ButtonProcessor/SM1: */
typedef enum kcg_tag__11_SSM_TR_SM1 {
  _26_SSM_TR_no_trans_SM1,
  _27_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1,
  _28_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1,
  _29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1,
  _30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1
} _11_SSM_TR_SM1;
/* ButtonProcessor/SM1: */
typedef enum kcg_tag__10_SSM_ST_SM1 {
  SSM_st_Floor1Button10_SM1,
  SSM_st_Floor1Button11_SM1,
  SSM_st_Floor1Button4_SM1
} _10_SSM_ST_SM1;
/* ButtonProcessor/SM4: */
typedef enum kcg_tag_SSM_TR_SM4 {
  SSM_TR_no_trans_SM4,
  _22_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4,
  _23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4,
  _24_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4,
  _25_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4
} SSM_TR_SM4;
/* ButtonProcessor/SM4: */
typedef enum kcg_tag_SSM_ST_SM4 {
  SSM_st_Floor1Button10_SM4,
  SSM_st_Floor1Button11_SM4,
  SSM_st_Floor1Button4_SM4
} SSM_ST_SM4;
/* ButtonProcessor/SM3: */
typedef enum kcg_tag_SSM_TR_SM3 {
  SSM_TR_no_trans_SM3,
  _18_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3,
  _19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3,
  _20_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3,
  _21_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3
} SSM_TR_SM3;
/* ButtonProcessor/SM3: */
typedef enum kcg_tag_SSM_ST_SM3 {
  SSM_st_Floor1Button10_SM3,
  SSM_st_Floor1Button11_SM3,
  SSM_st_Floor1Button4_SM3
} SSM_ST_SM3;
/* ButtonProcessor/SM2: */
typedef enum kcg_tag__9_SSM_TR_SM2 {
  _16_SSM_TR_no_trans_SM2,
  SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2,
  SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2,
  SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2,
  _17_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2
} _9_SSM_TR_SM2;
/* ButtonProcessor/SM2: */
typedef enum kcg_tag__8_SSM_ST_SM2 {
  SSM_st_Floor1Button10_SM2,
  SSM_st_Floor1Button11_SM2,
  SSM_st_Floor1Button4_SM2
} _8_SSM_ST_SM2;
/* PlanningModule/SM2: */
typedef enum kcg_tag_SSM_TR_SM2 {
  SSM_TR_no_trans_SM2,
  SSM_TR_State11_State12_1_State11_SM2,
  SSM_TR_State11_State13_2_State11_SM2,
  SSM_TR_State11_State14_3_State11_SM2,
  SSM_TR_State12_State18_1_State12_SM2,
  SSM_TR_State13_State18_1_State13_SM2,
  SSM_TR_State14_State18_1_State14_SM2,
  SSM_TR_State17_State11_1_State17_SM2,
  SSM_TR_State16_State11_1_State16_SM2,
  SSM_TR_State15_State11_1_State15_SM2,
  SSM_TR_State18_State16_1_State18_SM2,
  SSM_TR_State18_State17_2_State18_SM2,
  SSM_TR_State18_State15_3_State18_SM2
} SSM_TR_SM2;
/* PlanningModule/SM2: */
typedef enum kcg_tag_SSM_ST_SM2 {
  SSM_st_State11_SM2,
  SSM_st_State12_SM2,
  SSM_st_State13_SM2,
  SSM_st_State14_SM2,
  SSM_st_State17_SM2,
  SSM_st_State16_SM2,
  SSM_st_State15_SM2,
  SSM_st_State18_SM2
} SSM_ST_SM2;
/* PlanningModule/PlanningModule: */
typedef enum kcg_tag_SSM_TR_PlanningModule {
  SSM_TR_no_trans_PlanningModule,
  SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule,
  SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule,
  SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule,
  SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule,
  SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule,
  SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule,
  SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule,
  SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule,
  SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule,
  SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule,
  SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule,
  SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule,
  SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule,
  SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule,
  SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule,
  SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule,
  SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule,
  SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule,
  SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule,
  SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule,
  SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule,
  SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule,
  SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule,
  SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule,
  SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule
} SSM_TR_PlanningModule;
/* PlanningModule/PlanningModule: */
typedef enum kcg_tag_SSM_ST_PlanningModule {
  SSM_st_Floor1_PlanningModule,
  SSM_st_Movin1To2_PlanningModule,
  SSM_st_Floor2_PlanningModule,
  SSM_st_Floor3_PlanningModule,
  SSM_st_Movin1To3_PlanningModule,
  SSM_st_Moving2To3_PlanningModule,
  SSM_st_Moving3To1_PlanningModule,
  SSM_st_Moving3To2_PlanningModule,
  SSM_st_Movin2To1_PlanningModule,
  SSM_st_Stop_PlanningModule
} SSM_ST_PlanningModule;
/* FloorsLocation/SM1: */
typedef enum kcg_tag__7_SSM_TR_SM1 { _15_SSM_TR_no_trans_SM1 } _7_SSM_TR_SM1;
/* FloorsLocation/SM1: */
typedef enum kcg_tag__6_SSM_ST_SM1 { SSM_st_State1_SM1 } _6_SSM_ST_SM1;
/* SafetyModule/SM1: */
typedef enum kcg_tag__5_SSM_TR_SM1 {
  _14_SSM_TR_no_trans_SM1,
  SSM_TR_NormalMode_Safety5_1_NormalMode_SM1,
  SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1,
  SSM_TR_NormalMode_Environment2_3_NormalMode_SM1,
  SSM_TR_NormalMode_Safety4_4_NormalMode_SM1,
  SSM_TR_NormalMode_Safety2_5_NormalMode_SM1,
  SSM_TR_NormalMode_Safety3_6_NormalMode_SM1,
  SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1,
  SSM_TR_NormalMode_Environment1_8_NormalMode_SM1,
  SSM_TR_NormalMode_Safety4_9_NormalMode_SM1,
  SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1,
  SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1,
  SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1
} _5_SSM_TR_SM1;
/* SafetyModule/SM1: */
typedef enum kcg_tag__4_SSM_ST_SM1 {
  SSM_st_NormalMode_SM1,
  SSM_st_Environment1_SM1,
  SSM_st_Safety2_SM1,
  SSM_st_Safety4_SM1,
  SSM_st_Safety3_SM1,
  SSM_st_Safety1PC_SM1,
  SSM_st_Safety5_SM1,
  SSM_st_Environment2_SM1,
  SSM_st_Environment3_SM1,
  SSM_st_Safety1_SM1,
  SSM_st_Environment3PC_SM1
} _4_SSM_ST_SM1;
/* PositionProcessor/SM1: */
typedef enum kcg_tag__3_SSM_TR_SM1 {
  _13_SSM_TR_no_trans_SM1,
  SSM_TR_MovingUp_Initial_1_MovingUp_SM1,
  SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1,
  SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1,
  SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1,
  SSM_TR_State4_MovingUp1_1_State4_SM1,
  SSM_TR_State4_MovingUp_2_State4_SM1,
  SSM_TR_State4_State4_3_State4_SM1,
  SSM_TR_State4_Initial_4_State4_SM1,
  SSM_TR_Initial_State4_1_Initial_SM1,
  SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1,
  SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1,
  SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1
} _3_SSM_TR_SM1;
/* PositionProcessor/SM1: */
typedef enum kcg_tag__2_SSM_ST_SM1 {
  SSM_st_MovingUp_SM1,
  SSM_st_MovingUp1_SM1,
  SSM_st_State4_SM1,
  _12_SSM_st_Initial_SM1,
  SSM_st_WaintingForNegPulse_SM1
} _2_SSM_ST_SM1;
/* ActuatorModule/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_Initial_MoveUp_1_Initial_SM1,
  SSM_TR_Initial_MoveDown_2_Initial_SM1,
  SSM_TR_Initial_StopMotor_3_Initial_SM1
} SSM_TR_SM1;
/* ActuatorModule/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Initial_SM1,
  SSM_st_MoveUp_SM1,
  SSM_st_MoveDown_SM1,
  SSM_st_StopMotor_SM1
} SSM_ST_SM1;
#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_types.h
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _PlanningModule_H_
#define _PlanningModule_H_


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
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _PositionProcessor_H_
#define _PositionProcessor_H_



/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int16 /* Position/ */ Position;
  kcg_int16 /* Speed/ */ Speed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  Direction /* setDirection/ */ mem_setDirection;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_int16 /* x/ */ x;
  kcg_int16 /* PulseCount/ */ PulseCount;
  kcg_int16 /* Timer/ */ Timer;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter /* SM1:State4:_L1=(Counter#2)/ */ Context_Counter_2;
  outC_Counter /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */ Context_Counter_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_PositionProcessor;

/* ===========  node initialization and cycle functions  =========== */
/* PositionProcessor/ */
extern void PositionProcessor(
  /* setDirection/ */
  Direction setDirection,
  /* GPIOC9/ */
  kcg_bool GPIOC9,
  outC_PositionProcessor *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PositionProcessor_reset(outC_PositionProcessor *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PositionProcessor_init(outC_PositionProcessor *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PositionProcessor_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PositionProcessor.h
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */
#ifndef _SafetyModule_H_
#define _SafetyModule_H_



/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CarMotorStop/ */ CarMotorStop;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SafetyViolation/ */ SafetyViolation;
  kcg_int16 /* timer/ */ timer;
  kcg_int16 /* StopTimer/ */ StopTimer;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter /* SM1:Safety1PC:_L3=(Counter#17)/ */ Context_Counter_17;
  outC_Counter /* SM1:NormalMode:_L4=(Counter#6)/ */ Context_Counter_6;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SafetyModule;

/* ===========  node initialization and cycle functions  =========== */
/* SafetyModule/ */
extern void SafetyModule(
  /* Channel1/ */
  kcg_int8 Channel1,
  /* Channel2/ */
  kcg_int8 Channel2,
  /* Position/ */
  kcg_int16 Position,
  /* Press3/ */
  kcg_bool Press3,
  /* AtFloor/ */
  kcg_bool AtFloor,
  /* Doors/ */
  kcg_bool Doors,
  /* Speed/ */
  kcg_int16 Speed,
  outC_SafetyModule *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SafetyModule_reset(outC_SafetyModule *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SafetyModule_init(outC_SafetyModule *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SafetyModule_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SafetyModule.h
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

#ifndef USER_MACROS_H
#define USER_MACROS_H
/*generated by SCADE Code Generator*/

#ifndef kcg_assume
#define kcg_assume(x)
#endif

#ifndef kcg_guarantee
#define kcg_guarantee(x)
#endif

#endif /*USER_MACROS_H*/
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */



/* ActuatorModule/ */
void ActuatorModule(
  /* Move/ */
  PDirection Move,
  /* CarMotorStop/ */
  kcg_bool CarMotorStop,
  outC_ActuatorModule *outC)
{
  /* SM1: */
  SSM_ST_SM1 SM1_state_act;

  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_StopMotor_SM1 :
      SM1_state_act = SSM_st_StopMotor_SM1;
      break;
    case SSM_st_MoveDown_SM1 :
      SM1_state_act = SSM_st_MoveDown_SM1;
      break;
    case SSM_st_MoveUp_SM1 :
      SM1_state_act = SSM_st_MoveUp_SM1;
      break;
    case _10_SSM_st_Initial_SM1 :
      if ((Move == Upward) & (!CarMotorStop)) {
        SM1_state_act = SSM_st_MoveUp_SM1;
      }
      else if ((Move == Downward) & (!CarMotorStop)) {
        SM1_state_act = SSM_st_MoveDown_SM1;
      }
      else if (CarMotorStop) {
        SM1_state_act = SSM_st_StopMotor_SM1;
      }
      else {
        SM1_state_act = _10_SSM_st_Initial_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_StopMotor_SM1 :
      outC->Channel1 = kcg_lit_int8(0);
      outC->Channel2 = kcg_lit_int8(0);
      outC->setDirection = None;
      outC->SM1_state_nxt = SSM_st_StopMotor_SM1;
      break;
    case SSM_st_MoveDown_SM1 :
      outC->Channel1 = kcg_lit_int8(0);
      outC->Channel2 = kcg_lit_int8(1);
      outC->setDirection = Down;
      outC->SM1_state_nxt = SSM_st_MoveDown_SM1;
      break;
    case SSM_st_MoveUp_SM1 :
      outC->Channel1 = kcg_lit_int8(1);
      outC->Channel2 = kcg_lit_int8(0);
      outC->setDirection = Up;
      outC->SM1_state_nxt = SSM_st_MoveUp_SM1;
      break;
    case _10_SSM_st_Initial_SM1 :
      outC->Channel1 = kcg_lit_int8(0);
      outC->Channel2 = kcg_lit_int8(0);
      outC->SM1_state_nxt = _10_SSM_st_Initial_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ActuatorModule_init(outC_ActuatorModule *outC)
{
  outC->Channel2 = kcg_lit_int8(0);
  outC->Channel1 = kcg_lit_int8(0);
  outC->setDirection = None;
  outC->SM1_state_nxt = _10_SSM_st_Initial_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ActuatorModule_reset(outC_ActuatorModule *outC)
{
  outC->setDirection = None;
  outC->SM1_state_nxt = _10_SSM_st_Initial_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ActuatorModule.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */


/* ButtonProcessor/ */
void ButtonProcessor(
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
  outC_ButtonProcessor *outC)
{
  /* SM1: */
  _8_SSM_ST_SM1 SM1_state_act;
  /* SM1: */
  kcg_bool SM1_reset_act;

  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_Stop_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_Stop_SM1;
      break;
    case SSM_st_AtFloor_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_AtFloor_SM1;
      break;
    case SSM_st_StopButton_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_StopButton_SM1;
      break;
    case SSM_st_Floor3Button_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_Floor3Button_SM1;
      break;
    case SSM_st_Floor2Button_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_Floor2Button_SM1;
      break;
    case SSM_st_Floor1Button_SM1 :
      SM1_reset_act = kcg_false;
      SM1_state_act = SSM_st_Floor1Button_SM1;
      break;
    case SSM_st_State1_SM1 :
      if (GPIOC0) {
        SM1_state_act = SSM_st_Floor1Button_SM1;
      }
      else if (GPIOC1) {
        SM1_state_act = SSM_st_Floor2Button_SM1;
      }
      else if (GPIOC2) {
        SM1_state_act = SSM_st_Floor3Button_SM1;
      }
      else if (GPIOC3) {
        SM1_state_act = SSM_st_StopButton_SM1;
      }
      else if (GPIOC7) {
        SM1_state_act = SSM_st_AtFloor_SM1;
      }
      else if (GPIOC8) {
        SM1_state_act = SSM_st_Stop_SM1;
      }
      else {
        SM1_state_act = SSM_st_State1_SM1;
      }
      SM1_reset_act = GPIOC0 | (GPIOC1 | (GPIOC2 | (GPIOC3 | (GPIOC7 | GPIOC8))));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_Stop_SM1 :
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */ Doors_reset_LabQ1(&outC->Context_Doors_1);
      }
      /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */
      Doors_LabQ1(GPIOC8, &outC->Context_Doors_1);
      outC->Press8 = outC->Context_Doors_1.Press8;
      outC->SM1_state_nxt = SSM_st_Stop_SM1;
      break;
    case SSM_st_AtFloor_SM1 :
      outC->Press8 = kcg_false;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */
        AtFloor_reset_LabQ1(&outC->Context_AtFloor_3);
      }
      /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */
      AtFloor_LabQ1(GPIOC7, &outC->Context_AtFloor_3);
      outC->Press7 = outC->Context_AtFloor_3.Press7;
      outC->SM1_state_nxt = SSM_st_AtFloor_SM1;
      break;
    case SSM_st_StopButton_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */
        Stop_reset_LabQ1(&outC->Context_Stop_1);
      }
      /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */
      Stop_LabQ1(GPIOC3, &outC->Context_Stop_1);
      outC->Press3 = outC->Context_Stop_1.Press3;
      outC->SM1_state_nxt = SSM_st_StopButton_SM1;
      break;
    case SSM_st_Floor3Button_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */
        Floor3_reset_LabQ1(&outC->Context_Floor3_1);
      }
      /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */
      Floor3_LabQ1(GPIOC2, &outC->Context_Floor3_1);
      outC->Press2 = outC->Context_Floor3_1.Press2;
      outC->SM1_state_nxt = SSM_st_Floor3Button_SM1;
      break;
    case SSM_st_Floor2Button_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press0 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */
        Floor2_reset_LabQ1(&outC->Context_Floor2_1);
      }
      /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */
      Floor2_LabQ1(GPIOC1, &outC->Context_Floor2_1);
      outC->Press1 = outC->Context_Floor2_1.Press1;
      outC->SM1_state_nxt = SSM_st_Floor2Button_SM1;
      break;
    case SSM_st_Floor1Button_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      if (SM1_reset_act) {
        /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */
        Floor1_reset_LabQ1(&outC->Context_Floor1_1);
      }
      /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */
      Floor1_LabQ1(GPIOC0, &outC->Context_Floor1_1);
      outC->Press0 = outC->Context_Floor1_1.Press0;
      outC->SM1_state_nxt = SSM_st_Floor1Button_SM1;
      break;
    case SSM_st_State1_SM1 :
      outC->Press8 = kcg_false;
      outC->Press7 = kcg_true;
      outC->Press3 = kcg_false;
      outC->Press2 = kcg_false;
      outC->Press1 = kcg_false;
      outC->Press0 = kcg_false;
      outC->SM1_state_nxt = SSM_st_State1_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ButtonProcessor_init(outC_ButtonProcessor *outC)
{
  outC->Press0 = kcg_true;
  outC->Press1 = kcg_true;
  outC->Press2 = kcg_true;
  outC->Press3 = kcg_true;
  outC->Press7 = kcg_true;
  outC->Press8 = kcg_true;
  /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */ Doors_init_LabQ1(&outC->Context_Doors_1);
  /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */
  AtFloor_init_LabQ1(&outC->Context_AtFloor_3);
  /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */
  Stop_init_LabQ1(&outC->Context_Stop_1);
  /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */
  Floor3_init_LabQ1(&outC->Context_Floor3_1);
  /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */
  Floor2_init_LabQ1(&outC->Context_Floor2_1);
  /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */
  Floor1_init_LabQ1(&outC->Context_Floor1_1);
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ButtonProcessor_reset(outC_ButtonProcessor *outC)
{
  /* SM1:Stop:_L10=(LabQ1::Doors#1)/ */ Doors_reset_LabQ1(&outC->Context_Doors_1);
  /* SM1:AtFloor:_L7=(LabQ1::AtFloor#3)/ */
  AtFloor_reset_LabQ1(&outC->Context_AtFloor_3);
  /* SM1:StopButton:_L8=(LabQ1::Stop#1)/ */
  Stop_reset_LabQ1(&outC->Context_Stop_1);
  /* SM1:Floor3Button:_L6=(LabQ1::Floor3#1)/ */
  Floor3_reset_LabQ1(&outC->Context_Floor3_1);
  /* SM1:Floor2Button:_L6=(LabQ1::Floor2#1)/ */
  Floor2_reset_LabQ1(&outC->Context_Floor2_1);
  /* SM1:Floor1Button:_L2=(LabQ1::Floor1#1)/ */
  Floor1_reset_LabQ1(&outC->Context_Floor1_1);
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ButtonProcessor.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */



/* ControlSystem/ */
void ControlSystem(inC_ControlSystem *inC, outC_ControlSystem *outC)
{
  kcg_bool tmp;
  /* @5/Position/, _L70/ */
  kcg_int16 _L70;
  /* @8/Move/, _L48/ */
  PDirection _L48;
  /* @2/SM1:MovingUp:<1>,
     @5/Doors/,
     @8/Doors/,
     @9/SM3:Floor1Button4:<2>,
     _L49/,
     _L92/ */
  kcg_bool _L49;
  /* @8/Press0/, @9/Press0/, @9/SM4:Floor1Button4:<1>, _L42/ */
  kcg_bool _L42;
  /* @1/SM1: */
  SSM_ST_SM1 SM1_state_act_ActuatorModule_2;
  /* @2/SM1:MovingUp1:<2> */
  kcg_bool tr_2_guard_PositionProcessor_2_MovingUp1_SM1;
  /* @2/SM1:State4:<4>, @5/SM1: */
  kcg_bool tr_4_guard_PositionProcessor_2_State4_SM1;
  /* @2/SM1:State4:<2>, @5/SM1:NormalMode:<9> */
  kcg_bool _1_tr_2_guard_PositionProcessor_2_State4_SM1;
  /* @2/SM1:State4:<1>, @5/SM1:NormalMode:<8> */
  kcg_bool tr_1_clock_PositionProcessor_2_State4_SM1;
  /* @2/SM1:WaintingForNegPulse:<3>, @5/SM1:NormalMode:<7> */
  kcg_bool tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1;
  /* @2/SM1:WaintingForNegPulse:<2>, @5/SM1:NormalMode:<6> */
  kcg_bool _2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1;
  /* @2/SM1:WaintingForNegPulse:<1>, @5/SM1:NormalMode:<5> */
  kcg_bool _3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1;
  /* @2/SM1: */
  _2_SSM_ST_SM1 SM1_state_act_PositionProcessor_2;
  /* @2/SM1:, @5/SM1:NormalMode:<4> */
  kcg_bool SM1_reset_act_PositionProcessor_2;
  /* @5/SM1: */
  _4_SSM_ST_SM1 SM1_state_act_SafetyModule_2;
  /* @2/SM1:MovingUp1:<1>,
     @5/Press3/,
     @8/Press3/,
     @9/Press3/,
     @9/SM4:Floor1Button4:<2>,
     _L45/ */
  kcg_bool Press3_SafetyModule_2;
  /* @8/PlanningModule: */
  SSM_ST_PlanningModule PlanningModule_state_act_PlanningModule_2;
  /* @8/SM2: */
  SSM_ST_SM2 SM2_state_act_PlanningModule_2;
  /* @5/SM1:NormalMode:<2>, @9/SM5:Floor1Button4:<2> */
  kcg_bool tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5;
  /* @2/SM1:MovingUp:<2>, @5/SM1:NormalMode:<1>, @9/SM5:Floor1Button4:<1> */
  kcg_bool tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5;
  /* @8/Press1/,
     @9/Press1/,
     @9/SM1:Floor1Button4:<1>,
     @9/SM6:Floor1Button4:<2>,
     _L43/ */
  kcg_bool _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1;
  /* @2/SM1:State4:<3>,
     @5/AtFloor/,
     @8/AtFloor/,
     @9/SM2:Floor1Button4:<2>,
     @9/SM3:Floor1Button4:<1>,
     _L50/ */
  kcg_bool _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3;
  /* @9/SM2: */
  _8_SSM_ST_SM2 SM2_state_act_ButtonProcessor_2;
  /* @9/SM2:, @9/SM6: */
  kcg_bool SM2_reset_act_ButtonProcessor_2;
  /* @9/SM3: */
  SSM_ST_SM3 SM3_state_act_ButtonProcessor_2;
  /* @9/SM2:Floor1Button4:<1>, @9/SM3: */
  kcg_bool SM3_reset_act_ButtonProcessor_2;
  /* @9/SM4: */
  SSM_ST_SM4 SM4_state_act_ButtonProcessor_2;
  /* @9/SM1:Floor1Button4:<2>, @9/SM4: */
  kcg_bool SM4_reset_act_ButtonProcessor_2;
  /* @9/SM1: */
  _10_SSM_ST_SM1 SM1_state_act_ButtonProcessor_2;
  /* @9/SM1:, @9/SM6:Floor1Button4:<1> */
  kcg_bool SM1_reset_act_ButtonProcessor_2;
  /* @9/SM5: */
  SSM_ST_SM5 SM5_state_act_ButtonProcessor_2;
  /* @5/SM1:Environment3PC:<1>, @9/SM5: */
  kcg_bool SM5_reset_act_ButtonProcessor_2;
  /* @9/SM6: */
  SSM_ST_SM6 SM6_state_act_ButtonProcessor_2;

  /* @9/SM6: */
  switch (outC->SM6_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM6 :
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = !inC->GPIOC3;
      SM1_reset_act_ButtonProcessor_2 = inC->GPIOC3 &
        (outC->Timer5_ButtonProcessor_2 == kcg_lit_int16(10));
      if (SM1_reset_act_ButtonProcessor_2) {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM6;
      }
      else if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1) {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
      }
      else {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM6;
      }
      SM2_reset_act_ButtonProcessor_2 = SM1_reset_act_ButtonProcessor_2 |
        _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1;
      break;
    case SSM_st_Floor1Button11_SM6 :
      SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
      SM2_reset_act_ButtonProcessor_2 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM6 :
      if (inC->GPIOC3) {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM6;
      }
      else {
        SM6_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
      }
      SM2_reset_act_ButtonProcessor_2 = inC->GPIOC3;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM1: */
  switch (outC->SM1_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM1 :
      SM4_reset_act_ButtonProcessor_2 = !inC->GPIOC1;
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = inC->GPIOC1 &
        (outC->Timer3_ButtonProcessor_2 == kcg_lit_int16(10));
      if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1) {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM1;
      }
      else if (SM4_reset_act_ButtonProcessor_2) {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
      }
      else {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM1;
      }
      SM1_reset_act_ButtonProcessor_2 =
        _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 |
        SM4_reset_act_ButtonProcessor_2;
      break;
    case SSM_st_Floor1Button11_SM1 :
      SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
      SM1_reset_act_ButtonProcessor_2 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM1 :
      if (inC->GPIOC1) {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM1;
      }
      else {
        SM1_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
      }
      SM1_reset_act_ButtonProcessor_2 = inC->GPIOC1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM1: */
  switch (SM1_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM1 :
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM1 :
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM1 :
      _4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM4: */
  switch (outC->SM4_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM4 :
      Press3_SafetyModule_2 = !inC->GPIOC0;
      _L42 = inC->GPIOC0 & (outC->Timer2_ButtonProcessor_2 == kcg_lit_int16(10));
      if (_L42) {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM4;
      }
      else if (Press3_SafetyModule_2) {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
      }
      else {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM4;
      }
      SM4_reset_act_ButtonProcessor_2 = _L42 | Press3_SafetyModule_2;
      break;
    case SSM_st_Floor1Button11_SM4 :
      SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
      SM4_reset_act_ButtonProcessor_2 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM4 :
      if (inC->GPIOC0) {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM4;
      }
      else {
        SM4_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
      }
      SM4_reset_act_ButtonProcessor_2 = inC->GPIOC0;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM4: */
  switch (SM4_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM4 :
      _L42 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM4 :
      _L42 = kcg_true;
      break;
    case SSM_st_Floor1Button10_SM4 :
      _L42 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM6: */
  switch (SM6_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM6 :
      Press3_SafetyModule_2 = kcg_false;
      if (SM2_reset_act_ButtonProcessor_2) {
        outC->init = kcg_true;
      }
      outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM6;
      /* @15/x/ */
      if (outC->init) {
        outC->_L1_Counter_16_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_16_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_16_ButtonProcessor_2;
      }
      outC->Timer5_ButtonProcessor_2 = outC->_L1_Counter_16_ButtonProcessor_2;
      outC->init = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM6 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM6;
      break;
    case SSM_st_Floor1Button10_SM6 :
      Press3_SafetyModule_2 = kcg_false;
      outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @8/PlanningModule: */
  switch (outC->PlanningModule_state_nxt_PlanningModule_2) {
    case SSM_st_Stop_PlanningModule :
      PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(0)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
      }
      else if (outC->_L52 > kcg_lit_int16(0)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin2To1_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin2To1_PlanningModule;
      }
      break;
    case SSM_st_Moving3To2_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(400)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor2_PlanningModule;
      }
      else if (outC->_L52 > kcg_lit_int16(400)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To2_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To2_PlanningModule;
      }
      break;
    case SSM_st_Moving3To1_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(0)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
      }
      else if (outC->_L52 > kcg_lit_int16(0)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To1_PlanningModule;
      }
      else if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 & (outC->_L52 >
          kcg_lit_int16(600))) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To2_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To1_PlanningModule;
      }
      break;
    case SSM_st_Moving2To3_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(800)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor3_PlanningModule;
      }
      else if (outC->_L52 < kcg_lit_int16(800)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving2To3_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving2To3_PlanningModule;
      }
      break;
    case SSM_st_Movin1To3_PlanningModule :
      if (outC->_L52 == kcg_lit_int16(800)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor3_PlanningModule;
      }
      else if (outC->_L52 < kcg_lit_int16(800)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To3_PlanningModule;
      }
      else if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1 & (outC->_L52 <
          kcg_lit_int16(200))) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To2_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To3_PlanningModule;
      }
      break;
    case SSM_st_Floor3_PlanningModule :
      if (outC->F1BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To1_PlanningModule;
      }
      else if (outC->F2BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving3To2_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor3_PlanningModule;
      }
      break;
    case SSM_st_Floor2_PlanningModule :
      if (outC->F3BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Moving2To3_PlanningModule;
      }
      else if (_L42) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin2To1_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor2_PlanningModule;
      }
      break;
    case SSM_st_Movin1To2_PlanningModule :
      if (outC->_L52 < kcg_lit_int16(400)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To2_PlanningModule;
      }
      else if (outC->_L52 == kcg_lit_int16(400)) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor2_PlanningModule;
      }
      else if (Press3_SafetyModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To2_PlanningModule;
      }
      break;
    case SSM_st_Floor1_PlanningModule :
      if (outC->F2BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To2_PlanningModule;
      }
      else if (outC->F3BS_PlanningModule_2) {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Movin1To3_PlanningModule;
      }
      else {
        PlanningModule_state_act_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _L70= */
  if (outC->init10) {
    outC->init10 = kcg_false;
    _L70 = kcg_lit_int16(0);
  }
  else {
    _L70 = outC->_L52;
  }
  /* @9/SM2: */
  switch (outC->SM2_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM2 :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = !inC->GPIOC8;
      SM3_reset_act_ButtonProcessor_2 = inC->GPIOC8 &
        (outC->Timer0_ButtonProcessor_2 == kcg_lit_int16(10));
      if (SM3_reset_act_ButtonProcessor_2) {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM2;
      }
      else if (_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3) {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
      }
      else {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM2;
      }
      SM2_reset_act_ButtonProcessor_2 = SM3_reset_act_ButtonProcessor_2 |
        _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3;
      break;
    case SSM_st_Floor1Button11_SM2 :
      SM2_reset_act_ButtonProcessor_2 = !inC->GPIOC8;
      if (SM2_reset_act_ButtonProcessor_2) {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
      }
      else {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM2;
      }
      break;
    case SSM_st_Floor1Button10_SM2 :
      if (inC->GPIOC8) {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM2;
      }
      else {
        SM2_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
      }
      SM2_reset_act_ButtonProcessor_2 = inC->GPIOC8;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM3: */
  switch (outC->SM3_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM3 :
      _L49 = !inC->GPIOC7;
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = inC->GPIOC7 &
        (outC->Timer1_ButtonProcessor_2 == kcg_lit_int16(10));
      if (_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3) {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM3;
      }
      else if (_L49) {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
      }
      else {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM3;
      }
      SM3_reset_act_ButtonProcessor_2 =
        _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 | _L49;
      break;
    case SSM_st_Floor1Button11_SM3 :
      SM3_reset_act_ButtonProcessor_2 = !inC->GPIOC7;
      if (SM3_reset_act_ButtonProcessor_2) {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
      }
      else {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM3;
      }
      break;
    case SSM_st_Floor1Button10_SM3 :
      if (inC->GPIOC7) {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM3;
      }
      else {
        SM3_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
      }
      SM3_reset_act_ButtonProcessor_2 = inC->GPIOC7;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @8/PlanningModule: */
  switch (PlanningModule_state_act_PlanningModule_2) {
    case SSM_st_Stop_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_true;
      _L48 = Stop;
      outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Stop_PlanningModule;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Downward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Movin2To1_PlanningModule;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Downward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Moving3To2_PlanningModule;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Downward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Moving3To1_PlanningModule;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Upward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Moving2To3_PlanningModule;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Upward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Movin1To3_PlanningModule;
      break;
    case SSM_st_Floor3_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_true;
      _L49 = kcg_false;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_true;
      _L48 = Stop;
      outC->F3BR_PlanningModule_2 = kcg_false;
      outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor3_PlanningModule;
      break;
    case SSM_st_Floor2_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_true;
      _L49 = kcg_false;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_true;
      _L48 = Stop;
      outC->F2BR_PlanningModule_2 = kcg_false;
      outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor2_PlanningModule;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
      _L49 = kcg_true;
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_false;
      _L48 = Upward;
      outC->PlanningModule_state_nxt_PlanningModule_2 =
        SSM_st_Movin1To2_PlanningModule;
      break;
    case SSM_st_Floor1_PlanningModule :
      /* @9/SM2: */
      switch (SM2_state_act_ButtonProcessor_2) {
        case SSM_st_Floor1Button4_SM2 :
          _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_true;
          break;
        case SSM_st_Floor1Button11_SM2 :
          _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_true;
          break;
        case SSM_st_Floor1Button10_SM2 :
          _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* @9/SM3: */
      switch (SM3_state_act_ButtonProcessor_2) {
        case SSM_st_Floor1Button4_SM3 :
          _L49 = kcg_false;
          break;
        case SSM_st_Floor1Button11_SM3 :
          _L49 = kcg_true;
          break;
        case SSM_st_Floor1Button10_SM3 :
          _L49 = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 = kcg_true;
      _L48 = Stop;
      outC->F1BR_PlanningModule_2 = kcg_false;
      outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @5/SM1: */
  switch (outC->SM1_state_nxt_SafetyModule_2) {
    case SSM_st_Environment3PC_SM1 :
      SM5_reset_act_ButtonProcessor_2 = !outC->SafetyViolation_SafetyModule_2;
      if (SM5_reset_act_ButtonProcessor_2) {
        SM1_state_act_SafetyModule_2 = SSM_st_NormalMode_SM1;
      }
      else if (outC->SafetyViolation_SafetyModule_2) {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment3_SM1;
      }
      else {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment3PC_SM1;
      }
      tr_4_guard_PositionProcessor_2_State4_SM1 =
        SM5_reset_act_ButtonProcessor_2 | outC->SafetyViolation_SafetyModule_2;
      break;
    case SSM_st_Safety1_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety1_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Environment3_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Environment3_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Environment2_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Environment2_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Safety5_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety5_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Safety1PC_SM1 :
      tr_4_guard_PositionProcessor_2_State4_SM1 =
        (outC->StopTimer_SafetyModule_2 > kcg_lit_int16(1)) & ((outC->_L55 ==
            kcg_lit_int8(1)) | (outC->_L56 == kcg_lit_int8(1)));
      if (tr_4_guard_PositionProcessor_2_State4_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety1_SM1;
      }
      else {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety1PC_SM1;
      }
      break;
    case SSM_st_Safety3_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety3_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Safety4_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety4_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Safety2_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Safety2_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_Environment1_SM1 :
      SM1_state_act_SafetyModule_2 = SSM_st_Environment1_SM1;
      tr_4_guard_PositionProcessor_2_State4_SM1 = kcg_false;
      break;
    case SSM_st_NormalMode_SM1 :
      tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 =
        outC->timer_SafetyModule_2 == kcg_lit_int16(10);
      _1_tr_2_guard_PositionProcessor_2_State4_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (_L70 == kcg_lit_int16(800)) &
        (outC->_L55 == kcg_lit_int8(1));
      tr_1_clock_PositionProcessor_2_State4_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (!_L49) &
        ((!_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3) | (outC->_L55 ==
            kcg_lit_int8(1)) | (outC->_L56 == kcg_lit_int8(1)));
      tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & Press3_SafetyModule_2;
      _2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 &
        _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 & (!_L49) &
        ((outC->_L55 == kcg_lit_int8(1)) | (outC->_L56 == kcg_lit_int8(1)));
      _3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (outC->_L55 ==
          kcg_lit_int8(1)) & (outC->_L56 == kcg_lit_int8(1));
      SM1_reset_act_PositionProcessor_2 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (_L70 == kcg_lit_int16(0)) &
        (outC->_L56 == kcg_lit_int8(1));
      tmp = tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 & (outC->_L54 >
          kcg_lit_int16(50));
      tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 =
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 &
        (Press3_SafetyModule_2 | _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3);
      if (tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety5_SM1;
      }
      else if (tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment3PC_SM1;
      }
      else if (tmp) {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment2_SM1;
      }
      else if (SM1_reset_act_PositionProcessor_2) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety4_SM1;
      }
      else if (_3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety2_SM1;
      }
      else if (_2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety3_SM1;
      }
      else if (tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety1PC_SM1;
      }
      else if (tr_1_clock_PositionProcessor_2_State4_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Environment1_SM1;
      }
      else if (_1_tr_2_guard_PositionProcessor_2_State4_SM1) {
        SM1_state_act_SafetyModule_2 = SSM_st_Safety4_SM1;
      }
      else {
        SM1_state_act_SafetyModule_2 = SSM_st_NormalMode_SM1;
      }
      tr_4_guard_PositionProcessor_2_State4_SM1 =
        tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 |
        (tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 | (tmp |
            (SM1_reset_act_PositionProcessor_2 |
              (_3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1 |
                (_2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1 |
                  (tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1 |
                    (tr_1_clock_PositionProcessor_2_State4_SM1 |
                      _1_tr_2_guard_PositionProcessor_2_State4_SM1)))))));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @5/SM1: */
  switch (SM1_state_act_SafetyModule_2) {
    case SSM_st_Environment3PC_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Environment3PC_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      outC->SafetyViolation_SafetyModule_2 = (((kcg_lit_int16(1) <= _L70) &
            (_L70 >= kcg_lit_int16(-1))) | ((kcg_lit_int16(401) <= _L70) &
            (_L70 >= kcg_lit_int16(399))) | ((kcg_lit_int16(801) <= _L70) &
            (_L70 >= kcg_lit_int16(799)))) &
        (!_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3);
      break;
    case SSM_st_Safety1_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety1_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Environment3_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Environment3_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Environment2_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Environment2_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Safety5_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety5_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Safety1PC_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      if (tr_4_guard_PositionProcessor_2_State4_SM1) {
        outC->init6 = kcg_true;
      }
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety1PC_SM1;
      /* @7/x/ */
      if (outC->init6) {
        outC->_L1_Counter_17_SafetyModule_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_17_SafetyModule_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_17_SafetyModule_2;
      }
      outC->StopTimer_SafetyModule_2 = outC->_L1_Counter_17_SafetyModule_2;
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      outC->init6 = kcg_false;
      break;
    case SSM_st_Safety3_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety3_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Safety4_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety4_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Safety2_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Safety2_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_Environment1_SM1 :
      Press3_SafetyModule_2 = kcg_true;
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_Environment1_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      outC->timer_SafetyModule_2 = kcg_lit_int16(0);
      break;
    case SSM_st_NormalMode_SM1 :
      Press3_SafetyModule_2 = kcg_false;
      if (tr_4_guard_PositionProcessor_2_State4_SM1) {
        outC->init7 = kcg_true;
      }
      outC->SafetyViolation_SafetyModule_2 = kcg_false;
      outC->SM1_state_nxt_SafetyModule_2 = SSM_st_NormalMode_SM1;
      outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
      /* @6/x/ */
      if (outC->init7) {
        outC->_L1_Counter_6_SafetyModule_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_6_SafetyModule_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_6_SafetyModule_2;
      }
      outC->timer_SafetyModule_2 = outC->_L1_Counter_6_SafetyModule_2;
      outC->init7 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  _L49 = Press3_SafetyModule_2 | tr_2_guard_PositionProcessor_2_MovingUp1_SM1;
  /* @1/SM1: */
  switch (outC->SM1_state_nxt_ActuatorModule_2) {
    case SSM_st_StopMotor_SM1 :
      SM1_state_act_ActuatorModule_2 = SSM_st_StopMotor_SM1;
      break;
    case SSM_st_MoveDown_SM1 :
      SM1_state_act_ActuatorModule_2 = SSM_st_MoveDown_SM1;
      break;
    case SSM_st_MoveUp_SM1 :
      SM1_state_act_ActuatorModule_2 = SSM_st_MoveUp_SM1;
      break;
    case SSM_st_Initial_SM1 :
      if ((_L48 == Upward) & (!_L49)) {
        SM1_state_act_ActuatorModule_2 = SSM_st_MoveUp_SM1;
      }
      else if ((_L48 == Downward) & (!_L49)) {
        SM1_state_act_ActuatorModule_2 = SSM_st_MoveDown_SM1;
      }
      else if (_L49) {
        SM1_state_act_ActuatorModule_2 = SSM_st_StopMotor_SM1;
      }
      else {
        SM1_state_act_ActuatorModule_2 = SSM_st_Initial_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @1/SM1: */
  switch (SM1_state_act_ActuatorModule_2) {
    case SSM_st_StopMotor_SM1 :
      outC->setDirection_ActuatorModule_2 = None;
      outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_StopMotor_SM1;
      outC->Channel2 = kcg_lit_int8(0);
      outC->Channel1 = kcg_lit_int8(0);
      break;
    case SSM_st_MoveDown_SM1 :
      outC->setDirection_ActuatorModule_2 = Down;
      outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_MoveDown_SM1;
      outC->Channel2 = kcg_lit_int8(1);
      outC->Channel1 = kcg_lit_int8(0);
      break;
    case SSM_st_MoveUp_SM1 :
      outC->setDirection_ActuatorModule_2 = Up;
      outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_MoveUp_SM1;
      outC->Channel2 = kcg_lit_int8(0);
      outC->Channel1 = kcg_lit_int8(1);
      break;
    case SSM_st_Initial_SM1 :
      outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_Initial_SM1;
      outC->Channel2 = kcg_lit_int8(0);
      outC->Channel1 = kcg_lit_int8(0);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM5: */
  switch (outC->SM5_state_nxt_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM5 :
      tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5 = !inC->GPIOC2;
      tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 = inC->GPIOC2 &
        (outC->Timer4_ButtonProcessor_2 == kcg_lit_int16(10));
      if (tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button11_SM5;
      }
      else if (tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
      }
      else {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM5;
      }
      SM5_reset_act_ButtonProcessor_2 =
        tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 |
        tr_2_guard_ButtonProcessor_2_Floor1Button4_SM5;
      break;
    case SSM_st_Floor1Button11_SM5 :
      SM5_reset_act_ButtonProcessor_2 = kcg_true;
      SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
      break;
    case SSM_st_Floor1Button10_SM5 :
      if (inC->GPIOC2) {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button4_SM5;
      }
      else {
        SM5_state_act_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
      }
      SM5_reset_act_ButtonProcessor_2 = inC->GPIOC2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @8/SM2: */
  switch (outC->SM2_state_nxt_PlanningModule_2) {
    case SSM_st_State18_SM2 :
      if (outC->F1BR_PlanningModule_2) {
        if (outC->F2BR_PlanningModule_2) {
          if (outC->F3BR_PlanningModule_2) {
            SM2_state_act_PlanningModule_2 = SSM_st_State18_SM2;
          }
          else {
            SM2_state_act_PlanningModule_2 = SSM_st_State15_SM2;
          }
        }
        else {
          SM2_state_act_PlanningModule_2 = SSM_st_State17_SM2;
        }
      }
      else {
        SM2_state_act_PlanningModule_2 = SSM_st_State16_SM2;
      }
      break;
    case SSM_st_State15_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State11_SM2;
      break;
    case SSM_st_State16_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State11_SM2;
      break;
    case SSM_st_State17_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State11_SM2;
      break;
    case SSM_st_State14_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State18_SM2;
      break;
    case SSM_st_State13_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State18_SM2;
      break;
    case SSM_st_State12_SM2 :
      SM2_state_act_PlanningModule_2 = SSM_st_State18_SM2;
      break;
    case SSM_st_State11_SM2 :
      if (_L42) {
        SM2_state_act_PlanningModule_2 = SSM_st_State12_SM2;
      }
      else if (_4_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM1) {
        SM2_state_act_PlanningModule_2 = SSM_st_State13_SM2;
      }
      else {
        /* @9/SM5: */
        switch (SM5_state_act_ButtonProcessor_2) {
          case SSM_st_Floor1Button4_SM5 :
            tmp = kcg_false;
            break;
          case SSM_st_Floor1Button11_SM5 :
            tmp = kcg_true;
            break;
          case SSM_st_Floor1Button10_SM5 :
            tmp = kcg_false;
            break;
          default :
            /* this default branch is unreachable */
            break;
        }
        if (tmp) {
          SM2_state_act_PlanningModule_2 = SSM_st_State14_SM2;
        }
        else {
          SM2_state_act_PlanningModule_2 = SSM_st_State11_SM2;
        }
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @8/SM2: */
  switch (SM2_state_act_PlanningModule_2) {
    case SSM_st_State18_SM2 :
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State18_SM2;
      break;
    case SSM_st_State15_SM2 :
      outC->F3BS_PlanningModule_2 = kcg_false;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State15_SM2;
      break;
    case SSM_st_State16_SM2 :
      outC->F1BS_PlanningModule_2 = kcg_false;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State16_SM2;
      break;
    case SSM_st_State17_SM2 :
      outC->F2BS_PlanningModule_2 = kcg_false;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State17_SM2;
      break;
    case SSM_st_State14_SM2 :
      outC->F3BS_PlanningModule_2 = kcg_true;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State14_SM2;
      break;
    case SSM_st_State13_SM2 :
      outC->F2BS_PlanningModule_2 = kcg_true;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State13_SM2;
      break;
    case SSM_st_State12_SM2 :
      outC->F1BS_PlanningModule_2 = kcg_true;
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State12_SM2;
      break;
    case SSM_st_State11_SM2 :
      outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State11_SM2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @2/SM1: */
  switch (outC->SM1_state_nxt_PositionProcessor_2) {
    case SSM_st_WaintingForNegPulse_SM1 :
      tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1 =
        outC->setDirection_PositionProcessor_2 == None;
      _2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1 =
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3)) & inC->GPIOC9;
      _3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1 =
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3)) & (!inC->GPIOC9);
      SM1_reset_act_PositionProcessor_2 =
        _3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1 |
        (_2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1 |
          tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1);
      /* @2/SM1:WaintingForNegPulse:<1> */
      if (_3_tr_1_clock_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_State4_SM1;
        outC->PulseCount_PositionProcessor_2 = kcg_lit_int16(0);
      }
      else if (_2_tr_2_guard_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      }
      else if (tr_3_guard_PositionProcessor_2_WaintingForNegPulse_SM1) {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      }
      break;
    case _12_SSM_st_Initial_SM1 :
      SM1_reset_act_PositionProcessor_2 =
        outC->setDirection_PositionProcessor_2 != None;
      if (SM1_reset_act_PositionProcessor_2) {
        SM1_state_act_PositionProcessor_2 = SSM_st_State4_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      break;
    case SSM_st_State4_SM1 :
      tr_4_guard_PositionProcessor_2_State4_SM1 =
        outC->setDirection_PositionProcessor_2 == None;
      _5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 =
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3)) & (!inC->GPIOC9);
      _1_tr_2_guard_PositionProcessor_2_State4_SM1 =
        (outC->setDirection_PositionProcessor_2 == Up) & inC->GPIOC9 &
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3));
      tr_1_clock_PositionProcessor_2_State4_SM1 =
        (outC->setDirection_PositionProcessor_2 == Down) & inC->GPIOC9 &
        (outC->Timer_PositionProcessor_2 == kcg_lit_int16(3));
      SM1_reset_act_PositionProcessor_2 =
        tr_1_clock_PositionProcessor_2_State4_SM1 |
        (_1_tr_2_guard_PositionProcessor_2_State4_SM1 |
          (_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3 |
            tr_4_guard_PositionProcessor_2_State4_SM1));
      /* @2/SM1:State4:<1> */
      if (tr_1_clock_PositionProcessor_2_State4_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_MovingUp1_SM1;
      }
      else /* @2/SM1:State4:<2> */
      if (_1_tr_2_guard_PositionProcessor_2_State4_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_MovingUp_SM1;
      }
      else /* @2/SM1:State4:<3> */
      if (_5_tr_1_guard_ButtonProcessor_2_Floor1Button4_SM3) {
        SM1_state_act_PositionProcessor_2 = SSM_st_State4_SM1;
        outC->PulseCount_PositionProcessor_2 =
          outC->PulseCount_PositionProcessor_2 + kcg_lit_int16(1);
      }
      else if (tr_4_guard_PositionProcessor_2_State4_SM1) {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = SSM_st_State4_SM1;
      }
      break;
    case SSM_st_MovingUp1_SM1 :
      tr_2_guard_PositionProcessor_2_MovingUp1_SM1 =
        outC->setDirection_PositionProcessor_2 != None;
      Press3_SafetyModule_2 = outC->setDirection_ActuatorModule_2 == None;
      if (Press3_SafetyModule_2) {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      else if (tr_2_guard_PositionProcessor_2_MovingUp1_SM1) {
        SM1_state_act_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = SSM_st_MovingUp1_SM1;
      }
      SM1_reset_act_PositionProcessor_2 = Press3_SafetyModule_2 |
        tr_2_guard_PositionProcessor_2_MovingUp1_SM1;
      break;
    case SSM_st_MovingUp_SM1 :
      tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5 =
        outC->setDirection_PositionProcessor_2 != None;
      _L49 = outC->setDirection_PositionProcessor_2 == None;
      if (_L49) {
        SM1_state_act_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      }
      else if (tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5) {
        SM1_state_act_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act_PositionProcessor_2 = SSM_st_MovingUp_SM1;
      }
      SM1_reset_act_PositionProcessor_2 = _L49 |
        tr_1_guard_ButtonProcessor_2_Floor1Button4_SM5;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->setDirection_PositionProcessor_2 = outC->setDirection_ActuatorModule_2;
  /* @2/SM1: */
  switch (SM1_state_act_PositionProcessor_2) {
    case SSM_st_WaintingForNegPulse_SM1 :
      if (SM1_reset_act_PositionProcessor_2) {
        outC->init8 = kcg_true;
      }
      outC->SM1_state_nxt_PositionProcessor_2 = SSM_st_WaintingForNegPulse_SM1;
      /* @4/x/ */
      if (outC->init8) {
        outC->_L1_Counter_3_PositionProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_3_PositionProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_3_PositionProcessor_2;
      }
      outC->Timer_PositionProcessor_2 = outC->_L1_Counter_3_PositionProcessor_2;
      outC->_L54 = kcg_lit_int16(0);
      outC->_L52 = outC->Position_PositionProcessor_2;
      outC->init8 = kcg_false;
      break;
    case _12_SSM_st_Initial_SM1 :
      outC->SM1_state_nxt_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
      outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
      outC->_L54 = kcg_lit_int16(0);
      outC->_L52 = outC->Position_PositionProcessor_2;
      break;
    case SSM_st_State4_SM1 :
      if (SM1_reset_act_PositionProcessor_2) {
        outC->init9 = kcg_true;
      }
      outC->SM1_state_nxt_PositionProcessor_2 = SSM_st_State4_SM1;
      /* @3/x/ */
      if (outC->init9) {
        outC->_L1_Counter_2_PositionProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_2_PositionProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_2_PositionProcessor_2;
      }
      outC->Timer_PositionProcessor_2 = outC->_L1_Counter_2_PositionProcessor_2;
      outC->_L54 = kcg_lit_int16(0);
      outC->_L52 = outC->Position_PositionProcessor_2;
      outC->init9 = kcg_false;
      break;
    case SSM_st_MovingUp1_SM1 :
      outC->SM1_state_nxt_PositionProcessor_2 = SSM_st_MovingUp1_SM1;
      outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
      outC->_L52 = outC->x_PositionProcessor_2 - kcg_lit_int16(1);
      outC->x_PositionProcessor_2 = outC->_L52;
      outC->_L54 = kcg_lit_int16(1000) / (outC->PulseCount_PositionProcessor_2 *
          kcg_lit_int16(3));
      break;
    case SSM_st_MovingUp_SM1 :
      outC->SM1_state_nxt_PositionProcessor_2 = SSM_st_MovingUp_SM1;
      outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
      outC->_L52 = kcg_lit_int16(1) + outC->x_PositionProcessor_2;
      outC->x_PositionProcessor_2 = outC->_L52;
      outC->_L54 = kcg_lit_int16(1000) / (outC->PulseCount_PositionProcessor_2 *
          kcg_lit_int16(3));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->Position_PositionProcessor_2 = outC->_L52;
  outC->_L56 = outC->Channel2;
  outC->_L55 = outC->Channel1;
  /* @9/SM2: */
  switch (SM2_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM2 :
      if (SM2_reset_act_ButtonProcessor_2) {
        outC->init5 = kcg_true;
      }
      outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM2;
      /* @10/x/ */
      if (outC->init5) {
        outC->_L1_Counter_11_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_11_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_11_ButtonProcessor_2;
      }
      outC->Timer0_ButtonProcessor_2 = outC->_L1_Counter_11_ButtonProcessor_2;
      outC->init5 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM2 :
      outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM2;
      break;
    case SSM_st_Floor1Button10_SM2 :
      outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM3: */
  switch (SM3_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM3 :
      if (SM3_reset_act_ButtonProcessor_2) {
        outC->init4 = kcg_true;
      }
      outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM3;
      /* @11/x/ */
      if (outC->init4) {
        outC->_L1_Counter_12_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_12_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_12_ButtonProcessor_2;
      }
      outC->Timer1_ButtonProcessor_2 = outC->_L1_Counter_12_ButtonProcessor_2;
      outC->init4 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM3 :
      outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM3;
      break;
    case SSM_st_Floor1Button10_SM3 :
      outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM4: */
  switch (SM4_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM4 :
      if (SM4_reset_act_ButtonProcessor_2) {
        outC->init3 = kcg_true;
      }
      outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM4;
      /* @12/x/ */
      if (outC->init3) {
        outC->_L1_Counter_13_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_13_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_13_ButtonProcessor_2;
      }
      outC->Timer2_ButtonProcessor_2 = outC->_L1_Counter_13_ButtonProcessor_2;
      outC->init3 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM4 :
      outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM4;
      break;
    case SSM_st_Floor1Button10_SM4 :
      outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM1: */
  switch (SM1_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM1 :
      if (SM1_reset_act_ButtonProcessor_2) {
        outC->init2 = kcg_true;
      }
      outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM1;
      /* @13/x/ */
      if (outC->init2) {
        outC->_L1_Counter_14_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_14_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_14_ButtonProcessor_2;
      }
      outC->Timer3_ButtonProcessor_2 = outC->_L1_Counter_14_ButtonProcessor_2;
      outC->init2 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM1 :
      outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM1;
      break;
    case SSM_st_Floor1Button10_SM1 :
      outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @9/SM5: */
  switch (SM5_state_act_ButtonProcessor_2) {
    case SSM_st_Floor1Button4_SM5 :
      if (SM5_reset_act_ButtonProcessor_2) {
        outC->init1 = kcg_true;
      }
      outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button4_SM5;
      /* @14/x/ */
      if (outC->init1) {
        outC->_L1_Counter_15_ButtonProcessor_2 = kcg_lit_int16(1) + kcg_lit_int16(0);
      }
      else {
        outC->_L1_Counter_15_ButtonProcessor_2 = kcg_lit_int16(1) +
          outC->_L1_Counter_15_ButtonProcessor_2;
      }
      outC->Timer4_ButtonProcessor_2 = outC->_L1_Counter_15_ButtonProcessor_2;
      outC->init1 = kcg_false;
      break;
    case SSM_st_Floor1Button11_SM5 :
      outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button11_SM5;
      break;
    case SSM_st_Floor1Button10_SM5 :
      outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ControlSystem_init(outC_ControlSystem *outC)
{
  outC->F1BS_PlanningModule_2 = kcg_false;
  outC->F2BS_PlanningModule_2 = kcg_false;
  outC->F3BS_PlanningModule_2 = kcg_false;
  outC->SafetyViolation_SafetyModule_2 = kcg_false;
  outC->F3BR_PlanningModule_2 = kcg_false;
  outC->F2BR_PlanningModule_2 = kcg_false;
  outC->F1BR_PlanningModule_2 = kcg_false;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->_L1_Counter_16_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_15_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_14_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_13_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_12_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_11_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_17_SafetyModule_2 = kcg_lit_int16(0);
  outC->_L1_Counter_6_SafetyModule_2 = kcg_lit_int16(0);
  outC->_L1_Counter_3_PositionProcessor_2 = kcg_lit_int16(0);
  outC->_L1_Counter_2_PositionProcessor_2 = kcg_lit_int16(0);
  outC->Channel2 = kcg_lit_int8(0);
  outC->Channel1 = kcg_lit_int8(0);
  outC->Position_PositionProcessor_2 = kcg_lit_int16(0);
  outC->x_PositionProcessor_2 = kcg_lit_int16(0);
  outC->PulseCount_PositionProcessor_2 = kcg_lit_int16(0);
  outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State11_SM2;
  outC->Timer4_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
  outC->setDirection_ActuatorModule_2 = None;
  outC->_L54 = kcg_lit_int16(0);
  outC->Timer1_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
  outC->Timer0_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
  outC->timer_SafetyModule_2 = kcg_lit_int16(0);
  outC->_L56 = kcg_lit_int8(0);
  outC->_L55 = kcg_lit_int8(0);
  outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
  outC->SM1_state_nxt_SafetyModule_2 = SSM_st_NormalMode_SM1;
  outC->_L52 = kcg_lit_int16(0);
  outC->Timer2_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
  outC->Timer3_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
  outC->Timer5_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
  outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
  outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_Initial_SM1;
  outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
  outC->setDirection_PositionProcessor_2 = None;
  outC->SM1_state_nxt_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ControlSystem_reset(outC_ControlSystem *outC)
{
  outC->F1BS_PlanningModule_2 = kcg_false;
  outC->F2BS_PlanningModule_2 = kcg_false;
  outC->F3BS_PlanningModule_2 = kcg_false;
  outC->SafetyViolation_SafetyModule_2 = kcg_false;
  outC->F3BR_PlanningModule_2 = kcg_false;
  outC->F2BR_PlanningModule_2 = kcg_false;
  outC->F1BR_PlanningModule_2 = kcg_false;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  outC->init6 = kcg_true;
  outC->init7 = kcg_true;
  outC->init8 = kcg_true;
  outC->init9 = kcg_true;
  outC->init10 = kcg_true;
  outC->Position_PositionProcessor_2 = kcg_lit_int16(0);
  outC->x_PositionProcessor_2 = kcg_lit_int16(0);
  outC->PulseCount_PositionProcessor_2 = kcg_lit_int16(0);
  outC->SM2_state_nxt_PlanningModule_2 = SSM_st_State11_SM2;
  outC->Timer4_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM5_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM5;
  outC->setDirection_ActuatorModule_2 = None;
  outC->_L54 = kcg_lit_int16(0);
  outC->Timer1_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM3_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM3;
  outC->Timer0_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM2_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM2;
  outC->timer_SafetyModule_2 = kcg_lit_int16(0);
  outC->_L56 = kcg_lit_int8(0);
  outC->_L55 = kcg_lit_int8(0);
  outC->StopTimer_SafetyModule_2 = kcg_lit_int16(0);
  outC->SM1_state_nxt_SafetyModule_2 = SSM_st_NormalMode_SM1;
  outC->_L52 = kcg_lit_int16(0);
  outC->Timer2_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM4_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM4;
  outC->Timer3_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM1_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM1;
  outC->Timer5_ButtonProcessor_2 = kcg_lit_int16(0);
  outC->SM6_state_nxt_ButtonProcessor_2 = SSM_st_Floor1Button10_SM6;
  outC->PlanningModule_state_nxt_PlanningModule_2 = SSM_st_Floor1_PlanningModule;
  outC->SM1_state_nxt_ActuatorModule_2 = SSM_st_Initial_SM1;
  outC->Timer_PositionProcessor_2 = kcg_lit_int16(0);
  outC->setDirection_PositionProcessor_2 = None;
  outC->SM1_state_nxt_PositionProcessor_2 = _12_SSM_st_Initial_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: ControlSystem/
  @9: (ButtonProcessor#2)
  @15: @9/(Counter#16)
  @5: (SafetyModule#2)
  @7: @5/(Counter#17)
  @6: @5/(Counter#6)
  @1: (ActuatorModule#2)
  @8: (PlanningModule#2)
  @2: (PositionProcessor#2)
  @4: @2/(Counter#3)
  @3: @2/(Counter#2)
  @10: @9/(Counter#11)
  @11: @9/(Counter#12)
  @12: @9/(Counter#13)
  @13: @9/(Counter#14)
  @14: @9/(Counter#15)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ControlSystem.c
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */



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

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_consts.c
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */


/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_types.c
** Generation date: 2022-02-25T19:14:33
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */


/* PlanningModule/ */
void PlanningModule(
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
  outC_PlanningModule *outC)
{
  /* PlanningModule: */
  SSM_ST_PlanningModule PlanningModule_state_act;

  /* PlanningModule: */
  switch (outC->PlanningModule_state_nxt) {
    case SSM_st_Stop_PlanningModule :
      PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      if (Position == kcg_lit_int16(0)) {
        PlanningModule_state_act = SSM_st_Floor1_PlanningModule;
      }
      else if (Position > kcg_lit_int16(0)) {
        PlanningModule_state_act = SSM_st_Movin2To1_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Movin2To1_PlanningModule;
      }
      break;
    case SSM_st_Moving3To2_PlanningModule :
      if (Position == kcg_lit_int16(400)) {
        PlanningModule_state_act = SSM_st_Floor2_PlanningModule;
      }
      else if (Position > kcg_lit_int16(400)) {
        PlanningModule_state_act = SSM_st_Moving3To2_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Moving3To2_PlanningModule;
      }
      break;
    case SSM_st_Moving3To1_PlanningModule :
      if (Position == kcg_lit_int16(0)) {
        PlanningModule_state_act = SSM_st_Floor1_PlanningModule;
      }
      else if (Position > kcg_lit_int16(0)) {
        PlanningModule_state_act = SSM_st_Moving3To1_PlanningModule;
      }
      else if (Press1 & (Position > kcg_lit_int16(600))) {
        PlanningModule_state_act = SSM_st_Moving3To2_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Moving3To1_PlanningModule;
      }
      break;
    case SSM_st_Moving2To3_PlanningModule :
      if (Position == kcg_lit_int16(800)) {
        PlanningModule_state_act = SSM_st_Floor3_PlanningModule;
      }
      else if (Position < kcg_lit_int16(800)) {
        PlanningModule_state_act = SSM_st_Moving2To3_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Moving2To3_PlanningModule;
      }
      break;
    case SSM_st_Movin1To3_PlanningModule :
      if (Position == kcg_lit_int16(800)) {
        PlanningModule_state_act = SSM_st_Floor3_PlanningModule;
      }
      else if (Position < kcg_lit_int16(800)) {
        PlanningModule_state_act = SSM_st_Movin1To3_PlanningModule;
      }
      else if (Press1 & (Position < kcg_lit_int16(200))) {
        PlanningModule_state_act = SSM_st_Movin1To2_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Movin1To3_PlanningModule;
      }
      break;
    case SSM_st_Floor3_PlanningModule :
      if (Press0) {
        PlanningModule_state_act = SSM_st_Moving3To1_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Floor3_PlanningModule;
      }
      break;
    case SSM_st_Floor2_PlanningModule :
      if (Press3) {
        PlanningModule_state_act = SSM_st_Moving2To3_PlanningModule;
      }
      else if (Press0) {
        PlanningModule_state_act = SSM_st_Movin2To1_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Floor2_PlanningModule;
      }
      break;
    case SSM_st_Movin1To2_PlanningModule :
      if (Position < kcg_lit_int16(400)) {
        PlanningModule_state_act = SSM_st_Movin1To2_PlanningModule;
      }
      else if (Position == kcg_lit_int16(400)) {
        PlanningModule_state_act = SSM_st_Floor2_PlanningModule;
      }
      else if (Press3) {
        PlanningModule_state_act = SSM_st_Stop_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Movin1To2_PlanningModule;
      }
      break;
    case SSM_st_Floor1_PlanningModule :
      if (Press1) {
        PlanningModule_state_act = SSM_st_Movin1To2_PlanningModule;
      }
      else if (Press2) {
        PlanningModule_state_act = SSM_st_Movin1To3_PlanningModule;
      }
      else {
        PlanningModule_state_act = SSM_st_Floor1_PlanningModule;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* PlanningModule: */
  switch (PlanningModule_state_act) {
    case SSM_st_Stop_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_true;
      outC->Move = Stop;
      outC->PlanningModule_state_nxt = SSM_st_Stop_PlanningModule;
      break;
    case SSM_st_Movin2To1_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Downward;
      outC->PlanningModule_state_nxt = SSM_st_Movin2To1_PlanningModule;
      break;
    case SSM_st_Moving3To2_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Downward;
      outC->PlanningModule_state_nxt = SSM_st_Moving3To2_PlanningModule;
      break;
    case SSM_st_Moving3To1_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Downward;
      outC->PlanningModule_state_nxt = SSM_st_Moving3To1_PlanningModule;
      break;
    case SSM_st_Moving2To3_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Upward;
      outC->PlanningModule_state_nxt = SSM_st_Moving2To3_PlanningModule;
      break;
    case SSM_st_Movin1To3_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Upward;
      outC->PlanningModule_state_nxt = SSM_st_Movin1To3_PlanningModule;
      break;
    case SSM_st_Floor3_PlanningModule :
      outC->AtFloor = kcg_true;
      outC->Doors = kcg_false;
      outC->CarMotorStop = kcg_true;
      outC->Move = Stop;
      outC->PlanningModule_state_nxt = SSM_st_Floor3_PlanningModule;
      break;
    case SSM_st_Floor2_PlanningModule :
      outC->AtFloor = kcg_true;
      outC->Doors = kcg_false;
      outC->CarMotorStop = kcg_true;
      outC->Move = Stop;
      outC->PlanningModule_state_nxt = SSM_st_Floor2_PlanningModule;
      break;
    case SSM_st_Movin1To2_PlanningModule :
      outC->AtFloor = kcg_false;
      outC->Doors = kcg_true;
      outC->CarMotorStop = kcg_false;
      outC->Move = Upward;
      outC->PlanningModule_state_nxt = SSM_st_Movin1To2_PlanningModule;
      break;
    case SSM_st_Floor1_PlanningModule :
      outC->CarMotorStop = kcg_true;
      outC->Doors = Press8;
      outC->AtFloor = Press7;
      outC->Move = Stop;
      outC->PlanningModule_state_nxt = SSM_st_Floor1_PlanningModule;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void PlanningModule_init(outC_PlanningModule *outC)
{
  outC->CarMotorStop = kcg_true;
  outC->Doors = kcg_true;
  outC->AtFloor = kcg_true;
  outC->Move = Upward;
  outC->PlanningModule_state_nxt = SSM_st_Floor1_PlanningModule;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PlanningModule_reset(outC_PlanningModule *outC)
{
  outC->PlanningModule_state_nxt = SSM_st_Floor1_PlanningModule;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PlanningModule.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */


/* PositionProcessor/ */
void PositionProcessor(
  /* setDirection/ */
  Direction setDirection,
  /* GPIOC9/ */
  kcg_bool GPIOC9,
  outC_PositionProcessor *outC)
{
  /* SM1:MovingUp:<2> */
  kcg_bool tr_2_guard_MovingUp_SM1;
  /* SM1:MovingUp:<1> */
  kcg_bool tr_1_guard_MovingUp_SM1;
  /* SM1:MovingUp1:<2> */
  kcg_bool tr_2_guard_MovingUp1_SM1;
  /* SM1:MovingUp1:<1> */
  kcg_bool tr_1_guard_MovingUp1_SM1;
  /* SM1:State4:<4> */
  kcg_bool tr_4_guard_State4_SM1;
  /* SM1:State4:<3> */
  kcg_bool tr_3_guard_State4_SM1;
  /* SM1:State4:<2> */
  kcg_bool tr_2_guard_State4_SM1;
  /* SM1:State4:<1> */
  kcg_bool tr_1_clock_State4_SM1;
  /* SM1:WaintingForNegPulse:<3> */
  kcg_bool tr_3_guard_WaintingForNegPulse_SM1;
  /* SM1:WaintingForNegPulse:<2> */
  kcg_bool tr_2_guard_WaintingForNegPulse_SM1;
  /* SM1:WaintingForNegPulse:<1> */
  kcg_bool tr_1_clock_WaintingForNegPulse_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_act;
  /* SM1: */
  kcg_bool SM1_reset_act;

  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_WaintingForNegPulse_SM1 :
      tr_3_guard_WaintingForNegPulse_SM1 = outC->mem_setDirection == None;
      tr_2_guard_WaintingForNegPulse_SM1 = (outC->Timer == kcg_lit_int16(3)) & GPIOC9;
      tr_1_clock_WaintingForNegPulse_SM1 = (outC->Timer == kcg_lit_int16(3)) &
        (!GPIOC9);
      /* SM1:WaintingForNegPulse:<1> */
      if (tr_1_clock_WaintingForNegPulse_SM1) {
        SM1_state_act = SSM_st_State4_SM1;
        outC->PulseCount = kcg_lit_int16(0);
      }
      else if (tr_2_guard_WaintingForNegPulse_SM1) {
        SM1_state_act = SSM_st_WaintingForNegPulse_SM1;
      }
      else if (tr_3_guard_WaintingForNegPulse_SM1) {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      else {
        SM1_state_act = SSM_st_WaintingForNegPulse_SM1;
      }
      SM1_reset_act = tr_1_clock_WaintingForNegPulse_SM1 |
        (tr_2_guard_WaintingForNegPulse_SM1 | tr_3_guard_WaintingForNegPulse_SM1);
      break;
    case SSM_st_Initial_SM1 :
      SM1_reset_act = outC->mem_setDirection != None;
      if (SM1_reset_act) {
        SM1_state_act = SSM_st_State4_SM1;
      }
      else {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      break;
    case SSM_st_State4_SM1 :
      tr_4_guard_State4_SM1 = outC->mem_setDirection == None;
      tr_2_guard_State4_SM1 = (outC->mem_setDirection == Up) & GPIOC9 &
        (outC->Timer == kcg_lit_int16(3));
      tr_1_clock_State4_SM1 = (outC->mem_setDirection == Down) & GPIOC9 &
        (outC->Timer == kcg_lit_int16(3));
      tr_3_guard_State4_SM1 = (outC->Timer == kcg_lit_int16(3)) & (!GPIOC9);
      /* SM1:State4:<1> */
      if (tr_1_clock_State4_SM1) {
        SM1_state_act = SSM_st_MovingUp1_SM1;
      }
      else /* SM1:State4:<2> */
      if (tr_2_guard_State4_SM1) {
        SM1_state_act = SSM_st_MovingUp_SM1;
      }
      else /* SM1:State4:<3> */
      if (tr_3_guard_State4_SM1) {
        SM1_state_act = SSM_st_State4_SM1;
        outC->PulseCount = outC->PulseCount + kcg_lit_int16(1);
      }
      else if (tr_4_guard_State4_SM1) {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      else {
        SM1_state_act = SSM_st_State4_SM1;
      }
      SM1_reset_act = tr_1_clock_State4_SM1 | (tr_2_guard_State4_SM1 |
          (tr_3_guard_State4_SM1 | tr_4_guard_State4_SM1));
      break;
    case SSM_st_MovingUp1_SM1 :
      tr_2_guard_MovingUp1_SM1 = outC->mem_setDirection != None;
      tr_1_guard_MovingUp1_SM1 = setDirection == None;
      if (tr_1_guard_MovingUp1_SM1) {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      else if (tr_2_guard_MovingUp1_SM1) {
        SM1_state_act = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act = SSM_st_MovingUp1_SM1;
      }
      SM1_reset_act = tr_1_guard_MovingUp1_SM1 | tr_2_guard_MovingUp1_SM1;
      break;
    case SSM_st_MovingUp_SM1 :
      tr_2_guard_MovingUp_SM1 = outC->mem_setDirection != None;
      tr_1_guard_MovingUp_SM1 = outC->mem_setDirection == None;
      if (tr_1_guard_MovingUp_SM1) {
        SM1_state_act = SSM_st_Initial_SM1;
      }
      else if (tr_2_guard_MovingUp_SM1) {
        SM1_state_act = SSM_st_WaintingForNegPulse_SM1;
      }
      else {
        SM1_state_act = SSM_st_MovingUp_SM1;
      }
      SM1_reset_act = tr_1_guard_MovingUp_SM1 | tr_2_guard_MovingUp_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->mem_setDirection = setDirection;
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_WaintingForNegPulse_SM1 :
      outC->Speed = kcg_lit_int16(0);
      if (SM1_reset_act) {
        /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
        Counter_reset(&outC->Context_Counter_3);
      }
      /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
      Counter(&outC->Context_Counter_3);
      outC->Timer = outC->Context_Counter_3.Output;
      outC->SM1_state_nxt = SSM_st_WaintingForNegPulse_SM1;
      break;
    case SSM_st_Initial_SM1 :
      outC->Speed = kcg_lit_int16(0);
      outC->Timer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Initial_SM1;
      break;
    case SSM_st_State4_SM1 :
      outC->Speed = kcg_lit_int16(0);
      if (SM1_reset_act) {
        /* SM1:State4:_L1=(Counter#2)/ */ Counter_reset(&outC->Context_Counter_2);
      }
      /* SM1:State4:_L1=(Counter#2)/ */ Counter(&outC->Context_Counter_2);
      outC->Timer = outC->Context_Counter_2.Output;
      outC->SM1_state_nxt = SSM_st_State4_SM1;
      break;
    case SSM_st_MovingUp1_SM1 :
      outC->x = outC->x - kcg_lit_int16(1);
      outC->Position = outC->x;
      outC->Speed = kcg_lit_int16(1000) / (outC->PulseCount * kcg_lit_int16(3));
      outC->Timer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_MovingUp1_SM1;
      break;
    case SSM_st_MovingUp_SM1 :
      outC->x = kcg_lit_int16(1) + outC->x;
      outC->Position = outC->x;
      outC->Speed = kcg_lit_int16(1000) / (outC->PulseCount * kcg_lit_int16(3));
      outC->Timer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_MovingUp_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void PositionProcessor_init(outC_PositionProcessor *outC)
{
  outC->Speed = kcg_lit_int16(0);
  /* SM1:State4:_L1=(Counter#2)/ */ Counter_init(&outC->Context_Counter_2);
  /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
  Counter_init(&outC->Context_Counter_3);
  outC->PulseCount = kcg_lit_int16(0);
  outC->Position = kcg_lit_int16(0);
  outC->x = kcg_lit_int16(0);
  outC->Timer = kcg_lit_int16(0);
  outC->mem_setDirection = None;
  outC->SM1_state_nxt = SSM_st_Initial_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PositionProcessor_reset(outC_PositionProcessor *outC)
{
  /* SM1:State4:_L1=(Counter#2)/ */ Counter_reset(&outC->Context_Counter_2);
  /* SM1:WaintingForNegPulse:_L1=(Counter#3)/ */
  Counter_reset(&outC->Context_Counter_3);
  outC->PulseCount = kcg_lit_int16(0);
  outC->Position = kcg_lit_int16(0);
  outC->x = kcg_lit_int16(0);
  outC->Timer = kcg_lit_int16(0);
  outC->mem_setDirection = None;
  outC->SM1_state_nxt = SSM_st_Initial_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PositionProcessor.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/KCG/config.txt
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */



/* SafetyModule/ */
void SafetyModule(
  /* Channel1/ */
  kcg_int8 Channel1,
  /* Channel2/ */
  kcg_int8 Channel2,
  /* Position/ */
  kcg_int16 Position,
  /* Press3/ */
  kcg_bool Press3,
  /* AtFloor/ */
  kcg_bool AtFloor,
  /* Doors/ */
  kcg_bool Doors,
  /* Speed/ */
  kcg_int16 Speed,
  outC_SafetyModule *outC)
{
  /* SM1:NormalMode:<9> */
  kcg_bool tr_9_guard_NormalMode_SM1;
  /* SM1:NormalMode:<8> */
  kcg_bool tr_8_guard_NormalMode_SM1;
  /* SM1:NormalMode:<7> */
  kcg_bool tr_7_guard_NormalMode_SM1;
  /* SM1:NormalMode:<6> */
  kcg_bool tr_6_guard_NormalMode_SM1;
  /* SM1:NormalMode:<5> */
  kcg_bool tr_5_guard_NormalMode_SM1;
  /* SM1:NormalMode:<4> */
  kcg_bool tr_4_guard_NormalMode_SM1;
  /* SM1:NormalMode:<3> */
  kcg_bool tr_3_guard_NormalMode_SM1;
  /* SM1:NormalMode:<2> */
  kcg_bool tr_2_guard_NormalMode_SM1;
  /* SM1:NormalMode:<1> */
  kcg_bool tr_1_guard_NormalMode_SM1;
  /* SM1:Environment3PC:<1> */
  kcg_bool tr_1_guard_Environment3PC_SM1;
  /* SM1: */
  _4_SSM_ST_SM1 SM1_state_act;
  /* SM1: */
  kcg_bool SM1_reset_act;

  /* SM1: */
  switch (outC->SM1_state_nxt) {
    case SSM_st_Environment3PC_SM1 :
      tr_1_guard_Environment3PC_SM1 = !outC->SafetyViolation;
      if (tr_1_guard_Environment3PC_SM1) {
        SM1_state_act = SSM_st_NormalMode_SM1;
      }
      else if (outC->SafetyViolation) {
        SM1_state_act = SSM_st_Environment3_SM1;
      }
      else {
        SM1_state_act = SSM_st_Environment3PC_SM1;
      }
      SM1_reset_act = tr_1_guard_Environment3PC_SM1 | outC->SafetyViolation;
      break;
    case SSM_st_Safety1_SM1 :
      SM1_state_act = SSM_st_Safety1_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Environment3_SM1 :
      SM1_state_act = SSM_st_Environment3_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Environment2_SM1 :
      SM1_state_act = SSM_st_Environment2_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Safety5_SM1 :
      SM1_state_act = SSM_st_Safety5_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Safety1PC_SM1 :
      SM1_reset_act = (outC->StopTimer > kcg_lit_int16(1)) & ((Channel1 ==
            kcg_lit_int8(1)) | (Channel2 == kcg_lit_int8(1)));
      if (SM1_reset_act) {
        SM1_state_act = SSM_st_Safety1_SM1;
      }
      else {
        SM1_state_act = SSM_st_Safety1PC_SM1;
      }
      break;
    case SSM_st_Safety3_SM1 :
      SM1_state_act = SSM_st_Safety3_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Safety4_SM1 :
      SM1_state_act = SSM_st_Safety4_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Safety2_SM1 :
      SM1_state_act = SSM_st_Safety2_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_Environment1_SM1 :
      SM1_state_act = SSM_st_Environment1_SM1;
      SM1_reset_act = kcg_false;
      break;
    case SSM_st_NormalMode_SM1 :
      tr_2_guard_NormalMode_SM1 = outC->timer == kcg_lit_int16(10);
      tr_9_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Position ==
          kcg_lit_int16(800)) & (Channel1 == kcg_lit_int8(1));
      tr_8_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (!Doors) &
        ((!AtFloor) | (Channel1 == kcg_lit_int8(1)) | (Channel2 == kcg_lit_int8(1)));
      tr_7_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & Press3;
      tr_6_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & AtFloor &
        (!Doors) & ((Channel1 == kcg_lit_int8(1)) | (Channel2 == kcg_lit_int8(
              1)));
      tr_5_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Channel1 ==
          kcg_lit_int8(1)) & (Channel2 == kcg_lit_int8(1));
      tr_4_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Position ==
          kcg_lit_int16(0)) & (Channel2 == kcg_lit_int8(1));
      tr_3_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Speed >
          kcg_lit_int16(50));
      tr_1_guard_NormalMode_SM1 = tr_2_guard_NormalMode_SM1 & (Press3 | AtFloor);
      if (tr_1_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety5_SM1;
      }
      else if (tr_2_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Environment3PC_SM1;
      }
      else if (tr_3_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Environment2_SM1;
      }
      else if (tr_4_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety4_SM1;
      }
      else if (tr_5_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety2_SM1;
      }
      else if (tr_6_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety3_SM1;
      }
      else if (tr_7_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety1PC_SM1;
      }
      else if (tr_8_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Environment1_SM1;
      }
      else if (tr_9_guard_NormalMode_SM1) {
        SM1_state_act = SSM_st_Safety4_SM1;
      }
      else {
        SM1_state_act = SSM_st_NormalMode_SM1;
      }
      SM1_reset_act = tr_1_guard_NormalMode_SM1 | (tr_2_guard_NormalMode_SM1 |
          (tr_3_guard_NormalMode_SM1 | (tr_4_guard_NormalMode_SM1 |
              (tr_5_guard_NormalMode_SM1 | (tr_6_guard_NormalMode_SM1 |
                  (tr_7_guard_NormalMode_SM1 | (tr_8_guard_NormalMode_SM1 |
                      tr_9_guard_NormalMode_SM1)))))));
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_Environment3PC_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation =
        /* SM1:Environment3PC:_L5=(LabQ3::FloorsLocation#1)/ */
        FloorsLocation_LabQ3(AtFloor, Position);
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Environment3PC_SM1;
      break;
    case SSM_st_Safety1_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety1_SM1;
      break;
    case SSM_st_Environment3_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Environment3_SM1;
      break;
    case SSM_st_Environment2_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Environment2_SM1;
      break;
    case SSM_st_Safety5_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety5_SM1;
      break;
    case SSM_st_Safety1PC_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      if (SM1_reset_act) {
        /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_reset(&outC->Context_Counter_17);
      }
      /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter(&outC->Context_Counter_17);
      outC->StopTimer = outC->Context_Counter_17.Output;
      outC->SM1_state_nxt = SSM_st_Safety1PC_SM1;
      break;
    case SSM_st_Safety3_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety3_SM1;
      break;
    case SSM_st_Safety4_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety4_SM1;
      break;
    case SSM_st_Safety2_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Safety2_SM1;
      break;
    case SSM_st_Environment1_SM1 :
      outC->CarMotorStop = kcg_true;
      outC->SafetyViolation = kcg_false;
      outC->timer = kcg_lit_int16(0);
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_Environment1_SM1;
      break;
    case SSM_st_NormalMode_SM1 :
      outC->CarMotorStop = kcg_false;
      outC->SafetyViolation = kcg_false;
      if (SM1_reset_act) {
        /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_reset(&outC->Context_Counter_6);
      }
      /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter(&outC->Context_Counter_6);
      outC->timer = outC->Context_Counter_6.Output;
      outC->StopTimer = kcg_lit_int16(0);
      outC->SM1_state_nxt = SSM_st_NormalMode_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SafetyModule_init(outC_SafetyModule *outC)
{
  outC->SafetyViolation = kcg_false;
  outC->CarMotorStop = kcg_true;
  /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_init(&outC->Context_Counter_17);
  /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_init(&outC->Context_Counter_6);
  outC->timer = kcg_lit_int16(0);
  outC->StopTimer = kcg_lit_int16(0);
  outC->SM1_state_nxt = SSM_st_NormalMode_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SafetyModule_reset(outC_SafetyModule *outC)
{
  outC->SafetyViolation = kcg_false;
  /* SM1:Safety1PC:_L3=(Counter#17)/ */ Counter_reset(&outC->Context_Counter_17);
  /* SM1:NormalMode:_L4=(Counter#6)/ */ Counter_reset(&outC->Context_Counter_6);
  outC->timer = kcg_lit_int16(0);
  outC->StopTimer = kcg_lit_int16(0);
  outC->SM1_state_nxt = SSM_st_NormalMode_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SafetyModule.c
** Generation date: 2022-02-25T14:39:00
*************************************************************$ */


