/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/Users/DarkLord/OneDrive/MASTER/E-Books/Semester 1/Design and Analysis of Embedded Realtime Systems/Assignments/Final Project/Elevator Control System/Simulation/config.txt
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

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
#include "kcg_assign.h"
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
  SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6,
  SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6,
  SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6,
  _12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6
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
  _16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5,
  _15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5,
  _13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5,
  _14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5
} SSM_TR_SM5;
/* ButtonProcessor/SM5: */
typedef enum kcg_tag_SSM_ST_SM5 {
  SSM_st_Floor1Button10_SM5,
  SSM_st_Floor1Button11_SM5,
  SSM_st_Floor1Button4_SM5
} SSM_ST_SM5;
/* ButtonProcessor/SM1: */
typedef enum kcg_tag__11_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  _20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1,
  _19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1,
  _17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1,
  _18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1
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
  _24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4,
  _23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4,
  _21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4,
  _22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4
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
  _28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3,
  _27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3,
  _25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3,
  _26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3
} SSM_TR_SM3;
/* ButtonProcessor/SM3: */
typedef enum kcg_tag_SSM_ST_SM3 {
  SSM_st_Floor1Button10_SM3,
  SSM_st_Floor1Button11_SM3,
  SSM_st_Floor1Button4_SM3
} SSM_ST_SM3;
/* ButtonProcessor/SM2: */
typedef enum kcg_tag__9_SSM_TR_SM2 {
  SSM_TR_no_trans_SM2,
  _32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2,
  _31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2,
  _29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2,
  _30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2
} _9_SSM_TR_SM2;
/* ButtonProcessor/SM2: */
typedef enum kcg_tag__8_SSM_ST_SM2 {
  SSM_st_Floor1Button10_SM2,
  SSM_st_Floor1Button11_SM2,
  SSM_st_Floor1Button4_SM2
} _8_SSM_ST_SM2;
/* PlanningModule/SM2: */
typedef enum kcg_tag_SSM_TR_SM2 {
  _33_SSM_TR_no_trans_SM2,
  SSM_TR_State11_State12_1_State11_SM2,
  SSM_TR_State11_State13_2_State11_SM2,
  SSM_TR_State11_State14_3_State11_SM2,
  SSM_TR_State11_State16_4_State11_SM2,
  SSM_TR_State11_State17_5_State11_SM2,
  SSM_TR_State11_State15_6_State11_SM2,
  SSM_TR_State12_State11_1_State12_SM2,
  SSM_TR_State13_State11_1_State13_SM2,
  SSM_TR_State14_State11_1_State14_SM2,
  SSM_TR_State17_State11_1_State17_SM2,
  SSM_TR_State16_State11_1_State16_SM2,
  SSM_TR_State15_State11_1_State15_SM2
} SSM_TR_SM2;
/* PlanningModule/SM2: */
typedef enum kcg_tag_SSM_ST_SM2 {
  SSM_st_State11_SM2,
  SSM_st_State12_SM2,
  SSM_st_State13_SM2,
  SSM_st_State14_SM2,
  SSM_st_State17_SM2,
  SSM_st_State16_SM2,
  SSM_st_State15_SM2
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
typedef enum kcg_tag__7_SSM_TR_SM1 { _34_SSM_TR_no_trans_SM1 } _7_SSM_TR_SM1;
/* FloorsLocation/SM1: */
typedef enum kcg_tag__6_SSM_ST_SM1 { SSM_st_State1_SM1 } _6_SSM_ST_SM1;
/* SafetyModule/SM1: */
typedef enum kcg_tag__5_SSM_TR_SM1 {
  _35_SSM_TR_no_trans_SM1,
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
  _36_SSM_TR_no_trans_SM1,
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
  SSM_st_Initial_SM1,
  SSM_st_WaintingForNegPulse_SM1
} _2_SSM_ST_SM1;
/* ActuatorModule/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  _37_SSM_TR_no_trans_SM1,
  SSM_TR_Initial_MoveUp_1_Initial_SM1,
  SSM_TR_Initial_MoveDown_2_Initial_SM1,
  SSM_TR_Initial_StopMotor_3_Initial_SM1,
  SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1,
  SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1,
  SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1,
  SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1,
  SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1,
  SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1
} SSM_TR_SM1;
/* ActuatorModule/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  _38_SSM_st_Initial_SM1,
  SSM_st_MoveUp_SM1,
  SSM_st_MoveDown_SM1,
  SSM_st_StopMotor_SM1
} SSM_ST_SM1;
#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_types.h
** Generation date: 2022-02-26T21:08:22
*************************************************************$ */

