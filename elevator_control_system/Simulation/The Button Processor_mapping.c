/* The Button Processor_mapping.c */

#include "The Button Processor_type.h"
#include "The Button Processor_interface.h"
#include "The Button Processor_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_170, 1);
DECL_SCOPE(scope_169, 1);
DECL_SCOPE(scope_168, 5);
DECL_SCOPE(scope_167, 1);
DECL_SCOPE(scope_166, 1);
DECL_SCOPE(scope_165, 5);
DECL_SCOPE(scope_164, 1);
DECL_SCOPE(scope_163, 1);
DECL_SCOPE(scope_162, 5);
DECL_SCOPE(scope_161, 1);
DECL_SCOPE(scope_160, 1);
DECL_SCOPE(scope_159, 1);
DECL_SCOPE(scope_158, 3);
DECL_SCOPE(scope_157, 11);
DECL_SCOPE(scope_156, 4);
DECL_SCOPE(scope_155, 1);
DECL_SCOPE(scope_154, 1);
DECL_SCOPE(scope_153, 1);
DECL_SCOPE(scope_152, 5);
DECL_SCOPE(scope_151, 1);
DECL_SCOPE(scope_150, 2);
DECL_SCOPE(scope_149, 1);
DECL_SCOPE(scope_148, 1);
DECL_SCOPE(scope_147, 1);
DECL_SCOPE(scope_146, 1);
DECL_SCOPE(scope_145, 6);
DECL_SCOPE(scope_144, 1);
DECL_SCOPE(scope_143, 1);
DECL_SCOPE(scope_142, 10);
DECL_SCOPE(scope_141, 1);
DECL_SCOPE(scope_140, 1);
DECL_SCOPE(scope_139, 10);
DECL_SCOPE(scope_138, 12);
DECL_SCOPE(scope_137, 6);
DECL_SCOPE(scope_136, 20);
DECL_SCOPE(scope_135, 8);
DECL_SCOPE(scope_134, 2);
DECL_SCOPE(scope_133, 1);
DECL_SCOPE(scope_132, 1);
DECL_SCOPE(scope_131, 6);
DECL_SCOPE(scope_130, 1);
DECL_SCOPE(scope_129, 1);
DECL_SCOPE(scope_128, 1);
DECL_SCOPE(scope_127, 1);
DECL_SCOPE(scope_126, 1);
DECL_SCOPE(scope_125, 3);
DECL_SCOPE(scope_124, 1);
DECL_SCOPE(scope_123, 1);
DECL_SCOPE(scope_122, 1);
DECL_SCOPE(scope_121, 1);
DECL_SCOPE(scope_120, 1);
DECL_SCOPE(scope_119, 1);
DECL_SCOPE(scope_118, 1);
DECL_SCOPE(scope_117, 1);
DECL_SCOPE(scope_116, 1);
DECL_SCOPE(scope_115, 1);
DECL_SCOPE(scope_114, 1);
DECL_SCOPE(scope_113, 1);
DECL_SCOPE(scope_112, 1);
DECL_SCOPE(scope_111, 12);
DECL_SCOPE(scope_110, 18);
DECL_SCOPE(scope_109, 5);
DECL_SCOPE(scope_108, 1);
DECL_SCOPE(scope_107, 2);
DECL_SCOPE(scope_106, 1);
DECL_SCOPE(scope_105, 2);
DECL_SCOPE(scope_104, 1);
DECL_SCOPE(scope_103, 2);
DECL_SCOPE(scope_102, 1);
DECL_SCOPE(scope_101, 2);
DECL_SCOPE(scope_100, 1);
DECL_SCOPE(scope_99, 2);
DECL_SCOPE(scope_98, 1);
DECL_SCOPE(scope_97, 2);
DECL_SCOPE(scope_96, 1);
DECL_SCOPE(scope_95, 1);
DECL_SCOPE(scope_94, 1);
DECL_SCOPE(scope_93, 1);
DECL_SCOPE(scope_92, 1);
DECL_SCOPE(scope_91, 1);
DECL_SCOPE(scope_90, 6);
DECL_SCOPE(scope_89, 14);
DECL_SCOPE(scope_88, 4);
DECL_SCOPE(scope_87, 1);
DECL_SCOPE(scope_86, 1);
DECL_SCOPE(scope_85, 1);
DECL_SCOPE(scope_84, 7);
DECL_SCOPE(scope_83, 1);
DECL_SCOPE(scope_82, 1);
DECL_SCOPE(scope_81, 1);
DECL_SCOPE(scope_80, 7);
DECL_SCOPE(scope_79, 1);
DECL_SCOPE(scope_78, 1);
DECL_SCOPE(scope_77, 1);
DECL_SCOPE(scope_76, 1);
DECL_SCOPE(scope_75, 8);
DECL_SCOPE(scope_74, 1);
DECL_SCOPE(scope_73, 1);
DECL_SCOPE(scope_72, 1);
DECL_SCOPE(scope_71, 7);
DECL_SCOPE(scope_70, 1);
DECL_SCOPE(scope_69, 1);
DECL_SCOPE(scope_68, 1);
DECL_SCOPE(scope_67, 7);
DECL_SCOPE(scope_66, 1);
DECL_SCOPE(scope_65, 1);
DECL_SCOPE(scope_64, 7);
DECL_SCOPE(scope_63, 1);
DECL_SCOPE(scope_62, 1);
DECL_SCOPE(scope_61, 7);
DECL_SCOPE(scope_60, 1);
DECL_SCOPE(scope_59, 1);
DECL_SCOPE(scope_58, 1);
DECL_SCOPE(scope_57, 7);
DECL_SCOPE(scope_56, 1);
DECL_SCOPE(scope_55, 1);
DECL_SCOPE(scope_54, 7);
DECL_SCOPE(scope_53, 17);
DECL_SCOPE(scope_52, 12);
DECL_SCOPE(scope_51, 1);
DECL_SCOPE(scope_50, 1);
DECL_SCOPE(scope_49, 4);
DECL_SCOPE(scope_48, 1);
DECL_SCOPE(scope_47, 2);
DECL_SCOPE(scope_46, 1);
DECL_SCOPE(scope_45, 2);
DECL_SCOPE(scope_44, 10);
DECL_SCOPE(scope_43, 1);
DECL_SCOPE(scope_42, 1);
DECL_SCOPE(scope_41, 4);
DECL_SCOPE(scope_40, 1);
DECL_SCOPE(scope_39, 2);
DECL_SCOPE(scope_38, 1);
DECL_SCOPE(scope_37, 2);
DECL_SCOPE(scope_36, 10);
DECL_SCOPE(scope_35, 1);
DECL_SCOPE(scope_34, 1);
DECL_SCOPE(scope_33, 4);
DECL_SCOPE(scope_32, 1);
DECL_SCOPE(scope_31, 2);
DECL_SCOPE(scope_30, 1);
DECL_SCOPE(scope_29, 2);
DECL_SCOPE(scope_28, 10);
DECL_SCOPE(scope_27, 1);
DECL_SCOPE(scope_26, 1);
DECL_SCOPE(scope_25, 4);
DECL_SCOPE(scope_24, 1);
DECL_SCOPE(scope_23, 2);
DECL_SCOPE(scope_22, 1);
DECL_SCOPE(scope_21, 2);
DECL_SCOPE(scope_20, 10);
DECL_SCOPE(scope_19, 1);
DECL_SCOPE(scope_18, 1);
DECL_SCOPE(scope_17, 4);
DECL_SCOPE(scope_16, 1);
DECL_SCOPE(scope_15, 2);
DECL_SCOPE(scope_14, 1);
DECL_SCOPE(scope_13, 2);
DECL_SCOPE(scope_12, 10);
DECL_SCOPE(scope_11, 5);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 4);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 2);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 2);
DECL_SCOPE(scope_3, 10);
DECL_SCOPE(scope_2, 18);
DECL_SCOPE(scope_1, 43);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_PlanningModule_SSM_st_Floor1_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Floor1_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Floor2_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Floor2_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Floor3_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Floor3_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Movin1To2_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Movin1To2_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Movin1To3_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Movin1To3_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Movin2To1_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Movin2To1_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Moving2To3_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Moving2To3_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Moving3To1_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Moving3To1_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Moving3To2_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Moving3To2_PlanningModule; }
static int isActive_SSM_ST_PlanningModule_SSM_st_Stop_PlanningModule(void* pHandle) { return *(SSM_ST_PlanningModule*)pHandle == SSM_st_Stop_PlanningModule; }
static int isActive_SSM_ST_SM1_SSM_st_MoveDown_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_MoveDown_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_MoveUp_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_MoveUp_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_StopMotor_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_StopMotor_SM1; }
static int isActive_SSM_ST_SM1__38_SSM_st_Initial_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == _38_SSM_st_Initial_SM1; }
static int isActive_SSM_ST_SM2_SSM_st_State11_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_State11_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_State12_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_State12_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_State13_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_State13_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_State14_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_State14_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_State15_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_State15_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_State16_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_State16_SM2; }
static int isActive_SSM_ST_SM2_SSM_st_State17_SM2(void* pHandle) { return *(SSM_ST_SM2*)pHandle == SSM_st_State17_SM2; }
static int isActive_SSM_ST_SM3_SSM_st_Floor1Button10_SM3(void* pHandle) { return *(SSM_ST_SM3*)pHandle == SSM_st_Floor1Button10_SM3; }
static int isActive_SSM_ST_SM3_SSM_st_Floor1Button11_SM3(void* pHandle) { return *(SSM_ST_SM3*)pHandle == SSM_st_Floor1Button11_SM3; }
static int isActive_SSM_ST_SM3_SSM_st_Floor1Button4_SM3(void* pHandle) { return *(SSM_ST_SM3*)pHandle == SSM_st_Floor1Button4_SM3; }
static int isActive_SSM_ST_SM4_SSM_st_Floor1Button10_SM4(void* pHandle) { return *(SSM_ST_SM4*)pHandle == SSM_st_Floor1Button10_SM4; }
static int isActive_SSM_ST_SM4_SSM_st_Floor1Button11_SM4(void* pHandle) { return *(SSM_ST_SM4*)pHandle == SSM_st_Floor1Button11_SM4; }
static int isActive_SSM_ST_SM4_SSM_st_Floor1Button4_SM4(void* pHandle) { return *(SSM_ST_SM4*)pHandle == SSM_st_Floor1Button4_SM4; }
static int isActive_SSM_ST_SM5_SSM_st_Floor1Button10_SM5(void* pHandle) { return *(SSM_ST_SM5*)pHandle == SSM_st_Floor1Button10_SM5; }
static int isActive_SSM_ST_SM5_SSM_st_Floor1Button11_SM5(void* pHandle) { return *(SSM_ST_SM5*)pHandle == SSM_st_Floor1Button11_SM5; }
static int isActive_SSM_ST_SM5_SSM_st_Floor1Button4_SM5(void* pHandle) { return *(SSM_ST_SM5*)pHandle == SSM_st_Floor1Button4_SM5; }
static int isActive_SSM_ST_SM6_SSM_st_Floor1Button10_SM6(void* pHandle) { return *(SSM_ST_SM6*)pHandle == SSM_st_Floor1Button10_SM6; }
static int isActive_SSM_ST_SM6_SSM_st_Floor1Button11_SM6(void* pHandle) { return *(SSM_ST_SM6*)pHandle == SSM_st_Floor1Button11_SM6; }
static int isActive_SSM_ST_SM6_SSM_st_Floor1Button4_SM6(void* pHandle) { return *(SSM_ST_SM6*)pHandle == SSM_st_Floor1Button4_SM6; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule; }
static int isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule(void* pHandle) { return *(SSM_TR_PlanningModule*)pHandle == SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule; }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_MoveDown_2_Initial_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Initial_MoveDown_2_Initial_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_MoveUp_1_Initial_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Initial_MoveUp_1_Initial_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Initial_StopMotor_3_Initial_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Initial_StopMotor_3_Initial_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1; }
static int isActive_SSM_TR_SM2_SSM_TR_State11_State12_1_State11_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State11_State12_1_State11_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State11_State13_2_State11_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State11_State13_2_State11_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State11_State14_3_State11_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State11_State14_3_State11_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State11_State15_6_State11_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State11_State15_6_State11_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State11_State16_4_State11_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State11_State16_4_State11_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State11_State17_5_State11_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State11_State17_5_State11_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State12_State11_1_State12_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State12_State11_1_State12_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State13_State11_1_State13_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State13_State11_1_State13_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State14_State11_1_State14_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State14_State11_1_State14_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State15_State11_1_State15_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State15_State11_1_State15_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State16_State11_1_State16_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State16_State11_1_State16_SM2; }
static int isActive_SSM_TR_SM2_SSM_TR_State17_State11_1_State17_SM2(void* pHandle) { return *(SSM_TR_SM2*)pHandle == SSM_TR_State17_State11_1_State17_SM2; }
static int isActive_SSM_TR_SM3__25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3(void* pHandle) { return *(SSM_TR_SM3*)pHandle == _25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3; }
static int isActive_SSM_TR_SM3__26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3(void* pHandle) { return *(SSM_TR_SM3*)pHandle == _26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3; }
static int isActive_SSM_TR_SM3__27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3(void* pHandle) { return *(SSM_TR_SM3*)pHandle == _27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3; }
static int isActive_SSM_TR_SM3__28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3(void* pHandle) { return *(SSM_TR_SM3*)pHandle == _28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3; }
static int isActive_SSM_TR_SM4__21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4(void* pHandle) { return *(SSM_TR_SM4*)pHandle == _21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4; }
static int isActive_SSM_TR_SM4__22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4(void* pHandle) { return *(SSM_TR_SM4*)pHandle == _22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4; }
static int isActive_SSM_TR_SM4__23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4(void* pHandle) { return *(SSM_TR_SM4*)pHandle == _23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4; }
static int isActive_SSM_TR_SM4__24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4(void* pHandle) { return *(SSM_TR_SM4*)pHandle == _24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4; }
static int isActive_SSM_TR_SM5__13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5(void* pHandle) { return *(SSM_TR_SM5*)pHandle == _13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5; }
static int isActive_SSM_TR_SM5__14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5(void* pHandle) { return *(SSM_TR_SM5*)pHandle == _14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5; }
static int isActive_SSM_TR_SM5__15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5(void* pHandle) { return *(SSM_TR_SM5*)pHandle == _15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5; }
static int isActive_SSM_TR_SM5__16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5(void* pHandle) { return *(SSM_TR_SM5*)pHandle == _16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5; }
static int isActive_SSM_TR_SM6_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6(void* pHandle) { return *(SSM_TR_SM6*)pHandle == SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6; }
static int isActive_SSM_TR_SM6_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6(void* pHandle) { return *(SSM_TR_SM6*)pHandle == SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6; }
static int isActive_SSM_TR_SM6_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6(void* pHandle) { return *(SSM_TR_SM6*)pHandle == SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6; }
static int isActive_SSM_TR_SM6__12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6(void* pHandle) { return *(SSM_TR_SM6*)pHandle == _12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6; }
static int isActive__10_SSM_ST_SM1_SSM_st_Floor1Button10_SM1(void* pHandle) { return *(_10_SSM_ST_SM1*)pHandle == SSM_st_Floor1Button10_SM1; }
static int isActive__10_SSM_ST_SM1_SSM_st_Floor1Button11_SM1(void* pHandle) { return *(_10_SSM_ST_SM1*)pHandle == SSM_st_Floor1Button11_SM1; }
static int isActive__10_SSM_ST_SM1_SSM_st_Floor1Button4_SM1(void* pHandle) { return *(_10_SSM_ST_SM1*)pHandle == SSM_st_Floor1Button4_SM1; }
static int isActive__11_SSM_TR_SM1__17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1(void* pHandle) { return *(_11_SSM_TR_SM1*)pHandle == _17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1; }
static int isActive__11_SSM_TR_SM1__18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1(void* pHandle) { return *(_11_SSM_TR_SM1*)pHandle == _18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1; }
static int isActive__11_SSM_TR_SM1__19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1(void* pHandle) { return *(_11_SSM_TR_SM1*)pHandle == _19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1; }
static int isActive__11_SSM_TR_SM1__20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1(void* pHandle) { return *(_11_SSM_TR_SM1*)pHandle == _20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_Initial_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_Initial_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_MovingUp1_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_MovingUp_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_State4_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_State4_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_WaintingForNegPulse_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_WaintingForNegPulse_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_Initial_State4_1_Initial_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_Initial_State4_1_Initial_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_MovingUp_Initial_1_MovingUp_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_MovingUp_Initial_1_MovingUp_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_State4_Initial_4_State4_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_State4_Initial_4_State4_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_State4_MovingUp1_1_State4_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_State4_MovingUp1_1_State4_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_State4_MovingUp_2_State4_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_State4_MovingUp_2_State4_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_State4_State4_3_State4_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_State4_State4_3_State4_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Environment1_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Environment1_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Environment2_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Environment2_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Environment3PC_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Environment3PC_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Environment3_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Environment3_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_NormalMode_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_NormalMode_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Safety1PC_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Safety1PC_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Safety1_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Safety1_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Safety2_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Safety2_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Safety3_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Safety3_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Safety4_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Safety4_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_Safety5_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_Safety5_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment1_8_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Environment1_8_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment2_3_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Environment2_3_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety2_5_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Safety2_5_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety3_6_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Safety3_6_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety4_4_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Safety4_4_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety4_9_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Safety4_9_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety5_1_NormalMode_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_NormalMode_Safety5_1_NormalMode_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_State1_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_State1_SM1; }
static int isActive__8_SSM_ST_SM2_SSM_st_Floor1Button10_SM2(void* pHandle) { return *(_8_SSM_ST_SM2*)pHandle == SSM_st_Floor1Button10_SM2; }
static int isActive__8_SSM_ST_SM2_SSM_st_Floor1Button11_SM2(void* pHandle) { return *(_8_SSM_ST_SM2*)pHandle == SSM_st_Floor1Button11_SM2; }
static int isActive__8_SSM_ST_SM2_SSM_st_Floor1Button4_SM2(void* pHandle) { return *(_8_SSM_ST_SM2*)pHandle == SSM_st_Floor1Button4_SM2; }
static int isActive__9_SSM_TR_SM2__29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2(void* pHandle) { return *(_9_SSM_TR_SM2*)pHandle == _29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2; }
static int isActive__9_SSM_TR_SM2__30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2(void* pHandle) { return *(_9_SSM_TR_SM2*)pHandle == _30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2; }
static int isActive__9_SSM_TR_SM2__31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2(void* pHandle) { return *(_9_SSM_TR_SM2*)pHandle == _31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2; }
static int isActive__9_SSM_TR_SM2__32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2(void* pHandle) { return *(_9_SSM_TR_SM2*)pHandle == _32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2; }

/* mapping definition */


const MappingEntry scope_170_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1, NULL, 1, 0 }
};
const MappingScope scope_170 = {
    "ActuatorModule/ ActuatorModuleSM1:StopMotor:<2",
    scope_170_entries, 1
};

const MappingEntry scope_169_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1, NULL, 1, 0 }
};
const MappingScope scope_169 = {
    "ActuatorModule/ ActuatorModuleSM1:StopMotor:<1",
    scope_169_entries, 1
};

const MappingEntry scope_168_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1, &scope_169, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1, &scope_170, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int8), offsetof(outC_ActuatorModule, _L1_StopMotor_SM1), &_Type_kcg_int8_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_StopMotor_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int8), offsetof(outC_ActuatorModule, _L2_StopMotor_SM1), &_Type_kcg_int8_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_StopMotor_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Direction), offsetof(outC_ActuatorModule, _L3_StopMotor_SM1), &_Type_Direction_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_StopMotor_SM1, NULL, 1, 4 }
};
const MappingScope scope_168 = {
    "ActuatorModule/ ActuatorModuleSM1:StopMotor:",
    scope_168_entries, 5
};

const MappingEntry scope_167_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1, NULL, 1, 0 }
};
const MappingScope scope_167 = {
    "ActuatorModule/ ActuatorModuleSM1:MoveDown:<2",
    scope_167_entries, 1
};

const MappingEntry scope_166_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1, NULL, 1, 0 }
};
const MappingScope scope_166 = {
    "ActuatorModule/ ActuatorModuleSM1:MoveDown:<1",
    scope_166_entries, 1
};

const MappingEntry scope_165_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1, &scope_166, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1, &scope_167, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int8), offsetof(outC_ActuatorModule, _L1_MoveDown_SM1), &_Type_kcg_int8_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_MoveDown_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int8), offsetof(outC_ActuatorModule, _L2_MoveDown_SM1), &_Type_kcg_int8_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_MoveDown_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Direction), offsetof(outC_ActuatorModule, _L3_MoveDown_SM1), &_Type_Direction_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_MoveDown_SM1, NULL, 1, 4 }
};
const MappingScope scope_165 = {
    "ActuatorModule/ ActuatorModuleSM1:MoveDown:",
    scope_165_entries, 5
};

const MappingEntry scope_164_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1, NULL, 1, 0 }
};
const MappingScope scope_164 = {
    "ActuatorModule/ ActuatorModuleSM1:MoveUp:<2",
    scope_164_entries, 1
};

const MappingEntry scope_163_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1, NULL, 1, 0 }
};
const MappingScope scope_163 = {
    "ActuatorModule/ ActuatorModuleSM1:MoveUp:<1",
    scope_163_entries, 1
};

const MappingEntry scope_162_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1, &scope_163, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1, &scope_164, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int8), offsetof(outC_ActuatorModule, _L1_MoveUp_SM1), &_Type_kcg_int8_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_MoveUp_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int8), offsetof(outC_ActuatorModule, _L2_MoveUp_SM1), &_Type_kcg_int8_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_MoveUp_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Direction), offsetof(outC_ActuatorModule, _L3_MoveUp_SM1), &_Type_Direction_Utils, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_MoveUp_SM1, NULL, 1, 4 }
};
const MappingScope scope_162 = {
    "ActuatorModule/ ActuatorModuleSM1:MoveUp:",
    scope_162_entries, 5
};

const MappingEntry scope_161_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_StopMotor_3_Initial_SM1, NULL, 1, 0 }
};
const MappingScope scope_161 = {
    "ActuatorModule/ ActuatorModuleSM1:Initial:<3",
    scope_161_entries, 1
};

const MappingEntry scope_160_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_MoveDown_2_Initial_SM1, NULL, 1, 0 }
};
const MappingScope scope_160 = {
    "ActuatorModule/ ActuatorModuleSM1:Initial:<2",
    scope_160_entries, 1
};

const MappingEntry scope_159_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_MoveUp_1_Initial_SM1, NULL, 1, 0 }
};
const MappingScope scope_159 = {
    "ActuatorModule/ ActuatorModuleSM1:Initial:<1",
    scope_159_entries, 1
};

const MappingEntry scope_158_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_MoveUp_1_Initial_SM1, &scope_159, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_MoveDown_2_Initial_SM1, &scope_160, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_157_entries[5], isActive_SSM_TR_SM1_SSM_TR_Initial_StopMotor_3_Initial_SM1, &scope_161, 1, 2 }
};
const MappingScope scope_158 = {
    "ActuatorModule/ ActuatorModuleSM1:Initial:",
    scope_158_entries, 3
};

const MappingEntry scope_157_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_ActuatorModule, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ActuatorModule, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_ActuatorModule, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ActuatorModule, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_ActuatorModule, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_ActuatorModule, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_ActuatorModule, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Initial:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive_SSM_ST_SM1__38_SSM_st_Initial_SM1, &scope_158, 1, 7 },
    /* 8 */ { MAP_STATE, "MoveUp:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_MoveUp_SM1, &scope_162, 1, 8 },
    /* 9 */ { MAP_STATE, "MoveDown:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_MoveDown_SM1, &scope_165, 1, 9 },
    /* 10 */ { MAP_STATE, "StopMotor:", NULL, 0, 0, NULL, &scope_157_entries[0], isActive_SSM_ST_SM1_SSM_st_StopMotor_SM1, &scope_168, 1, 10 }
};
const MappingScope scope_157 = {
    "ActuatorModule/ ActuatorModuleSM1:",
    scope_157_entries, 11
};

const MappingEntry scope_156_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "Channel1", NULL, sizeof(kcg_int8), offsetof(outC_ActuatorModule, Channel1), &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Channel2", NULL, sizeof(kcg_int8), offsetof(outC_ActuatorModule, Channel2), &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "setDirection", NULL, sizeof(Direction), offsetof(outC_ActuatorModule, setDirection), &_Type_Direction_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_157, 1, 3 }
};
const MappingScope scope_156 = {
    "ActuatorModule/ ActuatorModule",
    scope_156_entries, 4
};

const MappingEntry scope_155_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1, NULL, 1, 0 }
};
const MappingScope scope_155 = {
    "PositionProcessor/ PositionProcessorSM1:WaintingForNegPulse:<3",
    scope_155_entries, 1
};

const MappingEntry scope_154_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1, NULL, 1, 0 }
};
const MappingScope scope_154 = {
    "PositionProcessor/ PositionProcessorSM1:WaintingForNegPulse:<2",
    scope_154_entries, 1
};

const MappingEntry scope_153_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1, NULL, 1, 0 }
};
const MappingScope scope_153 = {
    "PositionProcessor/ PositionProcessorSM1:WaintingForNegPulse:<1",
    scope_153_entries, 1
};

const MappingEntry scope_152_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1, &scope_153, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1, &scope_154, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1, &scope_155, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L1_WaintingForNegPulse_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_WaintingForNegPulse_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "Counter 3", NULL, sizeof(outC_Counter), offsetof(outC_PositionProcessor, Context_Counter_3), NULL, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_WaintingForNegPulse_SM1, &scope_11, 1, 4 }
};
const MappingScope scope_152 = {
    "PositionProcessor/ PositionProcessorSM1:WaintingForNegPulse:",
    scope_152_entries, 5
};

const MappingEntry scope_151_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_Initial_State4_1_Initial_SM1, NULL, 1, 0 }
};
const MappingScope scope_151 = {
    "PositionProcessor/ PositionProcessorSM1:Initial:<1",
    scope_151_entries, 1
};

const MappingEntry scope_150_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_Initial_State4_1_Initial_SM1, &scope_151, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L1_Initial_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Initial_SM1, NULL, 1, 1 }
};
const MappingScope scope_150 = {
    "PositionProcessor/ PositionProcessorSM1:Initial:",
    scope_150_entries, 2
};

const MappingEntry scope_149_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_State4_Initial_4_State4_SM1, NULL, 1, 0 }
};
const MappingScope scope_149 = {
    "PositionProcessor/ PositionProcessorSM1:State4:<4",
    scope_149_entries, 1
};

const MappingEntry scope_148_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_State4_State4_3_State4_SM1, NULL, 1, 0 }
};
const MappingScope scope_148 = {
    "PositionProcessor/ PositionProcessorSM1:State4:<3",
    scope_148_entries, 1
};

const MappingEntry scope_147_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_State4_MovingUp_2_State4_SM1, NULL, 1, 0 }
};
const MappingScope scope_147 = {
    "PositionProcessor/ PositionProcessorSM1:State4:<2",
    scope_147_entries, 1
};

const MappingEntry scope_146_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_State4_MovingUp1_1_State4_SM1, NULL, 1, 0 }
};
const MappingScope scope_146 = {
    "PositionProcessor/ PositionProcessorSM1:State4:<1",
    scope_146_entries, 1
};

const MappingEntry scope_145_entries[6] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_State4_MovingUp1_1_State4_SM1, &scope_146, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_State4_MovingUp_2_State4_SM1, &scope_147, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_State4_State4_3_State4_SM1, &scope_148, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_State4_Initial_4_State4_SM1, &scope_149, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L1_State4_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_State4_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "Counter 2", NULL, sizeof(outC_Counter), offsetof(outC_PositionProcessor, Context_Counter_2), NULL, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_State4_SM1, &scope_11, 1, 5 }
};
const MappingScope scope_145 = {
    "PositionProcessor/ PositionProcessorSM1:State4:",
    scope_145_entries, 6
};

const MappingEntry scope_144_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1, NULL, 1, 0 }
};
const MappingScope scope_144 = {
    "PositionProcessor/ PositionProcessorSM1:MovingUp1:<2",
    scope_144_entries, 1
};

const MappingEntry scope_143_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1, NULL, 1, 0 }
};
const MappingScope scope_143 = {
    "PositionProcessor/ PositionProcessorSM1:MovingUp1:<1",
    scope_143_entries, 1
};

const MappingEntry scope_142_entries[10] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1, &scope_143, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1, &scope_144, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L6_MovingUp1_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L5_MovingUp1_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L8_MovingUp1_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L20_MovingUp1_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L19_MovingUp1_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L17_MovingUp1_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L16_MovingUp1_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L21_MovingUp1_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, NULL, 1, 9 }
};
const MappingScope scope_142 = {
    "PositionProcessor/ PositionProcessorSM1:MovingUp1:",
    scope_142_entries, 10
};

const MappingEntry scope_141_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1, NULL, 1, 0 }
};
const MappingScope scope_141 = {
    "PositionProcessor/ PositionProcessorSM1:MovingUp:<2",
    scope_141_entries, 1
};

const MappingEntry scope_140_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_MovingUp_Initial_1_MovingUp_SM1, NULL, 1, 0 }
};
const MappingScope scope_140 = {
    "PositionProcessor/ PositionProcessorSM1:MovingUp:<1",
    scope_140_entries, 1
};

const MappingEntry scope_139_entries[10] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_MovingUp_Initial_1_MovingUp_SM1, &scope_140, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_138_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1, &scope_141, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L5_MovingUp_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L7_MovingUp_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L8_MovingUp_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L17_MovingUp_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L16_MovingUp_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L15_MovingUp_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L14_MovingUp_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, _L13_MovingUp_SM1), &_Type_kcg_int16_Utils, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, NULL, 1, 9 }
};
const MappingScope scope_139 = {
    "PositionProcessor/ PositionProcessorSM1:MovingUp:",
    scope_139_entries, 10
};

const MappingEntry scope_138_entries[12] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_PositionProcessor, SM1_state_act), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_PositionProcessor, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_PositionProcessor, SM1_state_nxt), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_PositionProcessor, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_PositionProcessor, SM1_state_sel), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_PositionProcessor, SM1_fired_strong), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_PositionProcessor, SM1_fired), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "MovingUp:", NULL, 0, 0, NULL, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp_SM1, &scope_139, 1, 7 },
    /* 8 */ { MAP_STATE, "MovingUp1:", NULL, 0, 0, NULL, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_MovingUp1_SM1, &scope_142, 1, 8 },
    /* 9 */ { MAP_STATE, "State4:", NULL, 0, 0, NULL, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_State4_SM1, &scope_145, 1, 9 },
    /* 10 */ { MAP_STATE, "Initial:", NULL, 0, 0, NULL, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_Initial_SM1, &scope_150, 1, 10 },
    /* 11 */ { MAP_STATE, "WaintingForNegPulse:", NULL, 0, 0, NULL, &scope_138_entries[0], isActive__2_SSM_ST_SM1_SSM_st_WaintingForNegPulse_SM1, &scope_152, 1, 11 }
};
const MappingScope scope_138 = {
    "PositionProcessor/ PositionProcessorSM1:",
    scope_138_entries, 12
};

const MappingEntry scope_137_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Position", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, Position), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Speed", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, Speed), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "x", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, x), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "PulseCount", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, PulseCount), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "Timer", NULL, sizeof(kcg_int16), offsetof(outC_PositionProcessor, Timer), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_138, 1, 5 }
};
const MappingScope scope_137 = {
    "PositionProcessor/ PositionProcessor",
    scope_137_entries, 6
};

const MappingEntry scope_136_entries[20] = {
    /* 0 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L19_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L18_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int16), offsetof(outC_FloorsLocation, _L17_State1_SM1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int16), offsetof(outC_FloorsLocation, _L15_State1_SM1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L14_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L13_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int16), offsetof(outC_FloorsLocation, _L12_State1_SM1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int16), offsetof(outC_FloorsLocation, _L11_State1_SM1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L9_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int16), offsetof(outC_FloorsLocation, _L8_State1_SM1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int16), offsetof(outC_FloorsLocation, _L7_State1_SM1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L6_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int16), offsetof(outC_FloorsLocation, _L3_State1_SM1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L1_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L21_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L22_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L23_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L24_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L25_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, _L26_State1_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 }
};
const MappingScope scope_136 = {
    "FloorsLocation/ FloorsLocationSM1:State1:",
    scope_136_entries, 20
};

const MappingEntry scope_135_entries[8] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_FloorsLocation, SM1_state_act), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_FloorsLocation, SM1_state_nxt), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_FloorsLocation, SM1_state_sel), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_7_SSM_TR_SM1), offsetof(outC_FloorsLocation, SM1_fired_strong), &_Type__7_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_7_SSM_TR_SM1), offsetof(outC_FloorsLocation, SM1_fired), &_Type__7_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "State1:", NULL, 0, 0, NULL, &scope_135_entries[0], isActive__6_SSM_ST_SM1_SSM_st_State1_SM1, &scope_136, 1, 7 }
};
const MappingScope scope_135 = {
    "FloorsLocation/ FloorsLocationSM1:",
    scope_135_entries, 8
};

const MappingEntry scope_134_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "SafetyViolation", NULL, sizeof(kcg_bool), offsetof(outC_FloorsLocation, SafetyViolation), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_135, 1, 1 }
};
const MappingScope scope_134 = {
    "FloorsLocation/ FloorsLocation",
    scope_134_entries, 2
};

const MappingEntry scope_133_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1, NULL, 1, 0 }
};
const MappingScope scope_133 = {
    "SafetyModule/ SafetyModuleSM1:Environment3PC:<2",
    scope_133_entries, 1
};

const MappingEntry scope_132_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1, NULL, 1, 0 }
};
const MappingScope scope_132 = {
    "SafetyModule/ SafetyModuleSM1:Environment3PC:<1",
    scope_132_entries, 1
};

const MappingEntry scope_131_entries[6] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1, &scope_132, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1, &scope_133, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int16), offsetof(outC_SafetyModule, _L6_Environment3PC_SM1), &_Type_kcg_int16_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment3PC_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L8_Environment3PC_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment3PC_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L9_Environment3PC_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment3PC_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "FloorsLocation 1", NULL, sizeof(outC_FloorsLocation), offsetof(outC_SafetyModule, Context_FloorsLocation_1), NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment3PC_SM1, &scope_134, 1, 5 }
};
const MappingScope scope_131 = {
    "SafetyModule/ SafetyModuleSM1:Environment3PC:",
    scope_131_entries, 6
};

const MappingEntry scope_130_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L2_Safety1_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety1_SM1, NULL, 1, 0 }
};
const MappingScope scope_130 = {
    "SafetyModule/ SafetyModuleSM1:Safety1:",
    scope_130_entries, 1
};

const MappingEntry scope_129_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L3_Environment3_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment3_SM1, NULL, 1, 0 }
};
const MappingScope scope_129 = {
    "SafetyModule/ SafetyModuleSM1:Environment3:",
    scope_129_entries, 1
};

const MappingEntry scope_128_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L2_Environment2_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment2_SM1, NULL, 1, 0 }
};
const MappingScope scope_128 = {
    "SafetyModule/ SafetyModuleSM1:Environment2:",
    scope_128_entries, 1
};

const MappingEntry scope_127_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L3_Safety5_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety5_SM1, NULL, 1, 0 }
};
const MappingScope scope_127 = {
    "SafetyModule/ SafetyModuleSM1:Safety5:",
    scope_127_entries, 1
};

const MappingEntry scope_126_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1, NULL, 1, 0 }
};
const MappingScope scope_126 = {
    "SafetyModule/ SafetyModuleSM1:Safety1PC:<1",
    scope_126_entries, 1
};

const MappingEntry scope_125_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1, &scope_126, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int16), offsetof(outC_SafetyModule, _L3_Safety1PC_SM1), &_Type_kcg_int16_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety1PC_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "Counter 17", NULL, sizeof(outC_Counter), offsetof(outC_SafetyModule, Context_Counter_17), NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety1PC_SM1, &scope_11, 1, 2 }
};
const MappingScope scope_125 = {
    "SafetyModule/ SafetyModuleSM1:Safety1PC:",
    scope_125_entries, 3
};

const MappingEntry scope_124_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L2_Safety3_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety3_SM1, NULL, 1, 0 }
};
const MappingScope scope_124 = {
    "SafetyModule/ SafetyModuleSM1:Safety3:",
    scope_124_entries, 1
};

const MappingEntry scope_123_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L2_Safety4_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety4_SM1, NULL, 1, 0 }
};
const MappingScope scope_123 = {
    "SafetyModule/ SafetyModuleSM1:Safety4:",
    scope_123_entries, 1
};

const MappingEntry scope_122_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L1_Safety2_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety2_SM1, NULL, 1, 0 }
};
const MappingScope scope_122 = {
    "SafetyModule/ SafetyModuleSM1:Safety2:",
    scope_122_entries, 1
};

const MappingEntry scope_121_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L2_Environment1_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment1_SM1, NULL, 1, 0 }
};
const MappingScope scope_121 = {
    "SafetyModule/ SafetyModuleSM1:Environment1:",
    scope_121_entries, 1
};

const MappingEntry scope_120_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety4_9_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_120 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<9",
    scope_120_entries, 1
};

const MappingEntry scope_119_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment1_8_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_119 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<8",
    scope_119_entries, 1
};

const MappingEntry scope_118_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_118 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<7",
    scope_118_entries, 1
};

const MappingEntry scope_117_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety3_6_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_117 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<6",
    scope_117_entries, 1
};

const MappingEntry scope_116_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety2_5_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_116 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<5",
    scope_116_entries, 1
};

const MappingEntry scope_115_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety4_4_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_115 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<4",
    scope_115_entries, 1
};

const MappingEntry scope_114_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment2_3_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_114 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<3",
    scope_114_entries, 1
};

const MappingEntry scope_113_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_113 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<2",
    scope_113_entries, 1
};

const MappingEntry scope_112_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety5_1_NormalMode_SM1, NULL, 1, 0 }
};
const MappingScope scope_112 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:<1",
    scope_112_entries, 1
};

const MappingEntry scope_111_entries[12] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety5_1_NormalMode_SM1, &scope_112, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1, &scope_113, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment2_3_NormalMode_SM1, &scope_114, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety4_4_NormalMode_SM1, &scope_115, 1, 3 },
    /* 4 */ { MAP_FORK, "<5", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety2_5_NormalMode_SM1, &scope_116, 1, 4 },
    /* 5 */ { MAP_FORK, "<6", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety3_6_NormalMode_SM1, &scope_117, 1, 5 },
    /* 6 */ { MAP_FORK, "<7", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1, &scope_118, 1, 6 },
    /* 7 */ { MAP_FORK, "<8", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Environment1_8_NormalMode_SM1, &scope_119, 1, 7 },
    /* 8 */ { MAP_FORK, "<9", NULL, 0, 0, NULL, &scope_110_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_NormalMode_Safety4_9_NormalMode_SM1, &scope_120, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, _L1_NormalMode_SM1), &_Type_kcg_bool_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_NormalMode_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int16), offsetof(outC_SafetyModule, _L4_NormalMode_SM1), &_Type_kcg_int16_Utils, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_NormalMode_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Counter 6", NULL, sizeof(outC_Counter), offsetof(outC_SafetyModule, Context_Counter_6), NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_NormalMode_SM1, &scope_11, 1, 11 }
};
const MappingScope scope_111 = {
    "SafetyModule/ SafetyModuleSM1:NormalMode:",
    scope_111_entries, 12
};

const MappingEntry scope_110_entries[18] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_SafetyModule, SM1_state_act), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_SafetyModule, SM1_state_nxt), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_SafetyModule, SM1_state_sel), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_SafetyModule, SM1_fired_strong), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_SafetyModule, SM1_fired), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "NormalMode:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_NormalMode_SM1, &scope_111, 1, 7 },
    /* 8 */ { MAP_STATE, "Environment1:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment1_SM1, &scope_121, 1, 8 },
    /* 9 */ { MAP_STATE, "Safety2:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety2_SM1, &scope_122, 1, 9 },
    /* 10 */ { MAP_STATE, "Safety4:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety4_SM1, &scope_123, 1, 10 },
    /* 11 */ { MAP_STATE, "Safety3:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety3_SM1, &scope_124, 1, 11 },
    /* 12 */ { MAP_STATE, "Safety1PC:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety1PC_SM1, &scope_125, 1, 12 },
    /* 13 */ { MAP_STATE, "Safety5:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety5_SM1, &scope_127, 1, 13 },
    /* 14 */ { MAP_STATE, "Environment2:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment2_SM1, &scope_128, 1, 14 },
    /* 15 */ { MAP_STATE, "Environment3:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment3_SM1, &scope_129, 1, 15 },
    /* 16 */ { MAP_STATE, "Safety1:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Safety1_SM1, &scope_130, 1, 16 },
    /* 17 */ { MAP_STATE, "Environment3PC:", NULL, 0, 0, NULL, &scope_110_entries[0], isActive__4_SSM_ST_SM1_SSM_st_Environment3PC_SM1, &scope_131, 1, 17 }
};
const MappingScope scope_110 = {
    "SafetyModule/ SafetyModuleSM1:",
    scope_110_entries, 18
};

const MappingEntry scope_109_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "CarMotorStop", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, CarMotorStop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "SafetyViolation", NULL, sizeof(kcg_bool), offsetof(outC_SafetyModule, SafetyViolation), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "timer", NULL, sizeof(kcg_int16), offsetof(outC_SafetyModule, timer), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "StopTimer", NULL, sizeof(kcg_int16), offsetof(outC_SafetyModule, StopTimer), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_110, 1, 4 }
};
const MappingScope scope_109 = {
    "SafetyModule/ SafetyModule",
    scope_109_entries, 5
};

const MappingEntry scope_108_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State15_State11_1_State15_SM2, NULL, 1, 0 }
};
const MappingScope scope_108 = {
    "PlanningModule/ PlanningModuleSM2:State15:<1",
    scope_108_entries, 1
};

const MappingEntry scope_107_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State15_State11_1_State15_SM2, &scope_108, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_State15_SM2), &_Type_kcg_bool_Utils, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State15_SM2, NULL, 1, 1 }
};
const MappingScope scope_107 = {
    "PlanningModule/ PlanningModuleSM2:State15:",
    scope_107_entries, 2
};

const MappingEntry scope_106_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State16_State11_1_State16_SM2, NULL, 1, 0 }
};
const MappingScope scope_106 = {
    "PlanningModule/ PlanningModuleSM2:State16:<1",
    scope_106_entries, 1
};

const MappingEntry scope_105_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State16_State11_1_State16_SM2, &scope_106, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_State16_SM2), &_Type_kcg_bool_Utils, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State16_SM2, NULL, 1, 1 }
};
const MappingScope scope_105 = {
    "PlanningModule/ PlanningModuleSM2:State16:",
    scope_105_entries, 2
};

const MappingEntry scope_104_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State17_State11_1_State17_SM2, NULL, 1, 0 }
};
const MappingScope scope_104 = {
    "PlanningModule/ PlanningModuleSM2:State17:<1",
    scope_104_entries, 1
};

const MappingEntry scope_103_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State17_State11_1_State17_SM2, &scope_104, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_State17_SM2), &_Type_kcg_bool_Utils, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State17_SM2, NULL, 1, 1 }
};
const MappingScope scope_103 = {
    "PlanningModule/ PlanningModuleSM2:State17:",
    scope_103_entries, 2
};

const MappingEntry scope_102_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State14_State11_1_State14_SM2, NULL, 1, 0 }
};
const MappingScope scope_102 = {
    "PlanningModule/ PlanningModuleSM2:State14:<1",
    scope_102_entries, 1
};

const MappingEntry scope_101_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State14_State11_1_State14_SM2, &scope_102, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_State14_SM2), &_Type_kcg_bool_Utils, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State14_SM2, NULL, 1, 1 }
};
const MappingScope scope_101 = {
    "PlanningModule/ PlanningModuleSM2:State14:",
    scope_101_entries, 2
};

const MappingEntry scope_100_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State13_State11_1_State13_SM2, NULL, 1, 0 }
};
const MappingScope scope_100 = {
    "PlanningModule/ PlanningModuleSM2:State13:<1",
    scope_100_entries, 1
};

const MappingEntry scope_99_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State13_State11_1_State13_SM2, &scope_100, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_State13_SM2), &_Type_kcg_bool_Utils, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State13_SM2, NULL, 1, 1 }
};
const MappingScope scope_99 = {
    "PlanningModule/ PlanningModuleSM2:State13:",
    scope_99_entries, 2
};

const MappingEntry scope_98_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State12_State11_1_State12_SM2, NULL, 1, 0 }
};
const MappingScope scope_98 = {
    "PlanningModule/ PlanningModuleSM2:State12:<1",
    scope_98_entries, 1
};

const MappingEntry scope_97_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State12_State11_1_State12_SM2, &scope_98, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_State12_SM2), &_Type_kcg_bool_Utils, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State12_SM2, NULL, 1, 1 }
};
const MappingScope scope_97 = {
    "PlanningModule/ PlanningModuleSM2:State12:",
    scope_97_entries, 2
};

const MappingEntry scope_96_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State15_6_State11_SM2, NULL, 1, 0 }
};
const MappingScope scope_96 = {
    "PlanningModule/ PlanningModuleSM2:State11:<6",
    scope_96_entries, 1
};

const MappingEntry scope_95_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State17_5_State11_SM2, NULL, 1, 0 }
};
const MappingScope scope_95 = {
    "PlanningModule/ PlanningModuleSM2:State11:<5",
    scope_95_entries, 1
};

const MappingEntry scope_94_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State16_4_State11_SM2, NULL, 1, 0 }
};
const MappingScope scope_94 = {
    "PlanningModule/ PlanningModuleSM2:State11:<4",
    scope_94_entries, 1
};

const MappingEntry scope_93_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State14_3_State11_SM2, NULL, 1, 0 }
};
const MappingScope scope_93 = {
    "PlanningModule/ PlanningModuleSM2:State11:<3",
    scope_93_entries, 1
};

const MappingEntry scope_92_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State13_2_State11_SM2, NULL, 1, 0 }
};
const MappingScope scope_92 = {
    "PlanningModule/ PlanningModuleSM2:State11:<2",
    scope_92_entries, 1
};

const MappingEntry scope_91_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State12_1_State11_SM2, NULL, 1, 0 }
};
const MappingScope scope_91 = {
    "PlanningModule/ PlanningModuleSM2:State11:<1",
    scope_91_entries, 1
};

const MappingEntry scope_90_entries[6] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State12_1_State11_SM2, &scope_91, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State13_2_State11_SM2, &scope_92, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State14_3_State11_SM2, &scope_93, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State16_4_State11_SM2, &scope_94, 1, 3 },
    /* 4 */ { MAP_FORK, "<5", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State17_5_State11_SM2, &scope_95, 1, 4 },
    /* 5 */ { MAP_FORK, "<6", NULL, 0, 0, NULL, &scope_89_entries[5], isActive_SSM_TR_SM2_SSM_TR_State11_State15_6_State11_SM2, &scope_96, 1, 5 }
};
const MappingScope scope_90 = {
    "PlanningModule/ PlanningModuleSM2:State11:",
    scope_90_entries, 6
};

const MappingEntry scope_89_entries[14] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2), offsetof(outC_PlanningModule, SM2_state_act), &_Type_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, SM2_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2), offsetof(outC_PlanningModule, SM2_state_nxt), &_Type_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, SM2_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2), offsetof(outC_PlanningModule, SM2_state_sel), &_Type_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2), offsetof(outC_PlanningModule, SM2_fired_strong), &_Type_SSM_TR_SM2_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2), offsetof(outC_PlanningModule, SM2_fired), &_Type_SSM_TR_SM2_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "State11:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State11_SM2, &scope_90, 1, 7 },
    /* 8 */ { MAP_STATE, "State12:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State12_SM2, &scope_97, 1, 8 },
    /* 9 */ { MAP_STATE, "State13:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State13_SM2, &scope_99, 1, 9 },
    /* 10 */ { MAP_STATE, "State14:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State14_SM2, &scope_101, 1, 10 },
    /* 11 */ { MAP_STATE, "State17:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State17_SM2, &scope_103, 1, 11 },
    /* 12 */ { MAP_STATE, "State16:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State16_SM2, &scope_105, 1, 12 },
    /* 13 */ { MAP_STATE, "State15:", NULL, 0, 0, NULL, &scope_89_entries[0], isActive_SSM_ST_SM2_SSM_st_State15_SM2, &scope_107, 1, 13 }
};
const MappingScope scope_89 = {
    "PlanningModule/ PlanningModuleSM2:",
    scope_89_entries, 14
};

const MappingEntry scope_88_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Stop_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Stop_PlanningModule, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Stop_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Stop_PlanningModule, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L5_Stop_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Stop_PlanningModule, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L6_Stop_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Stop_PlanningModule, NULL, 1, 3 }
};
const MappingScope scope_88 = {
    "PlanningModule/ PlanningModulePlanningModule:Stop:",
    scope_88_entries, 4
};

const MappingEntry scope_87_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_87 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin2To1:<3",
    scope_87_entries, 1
};

const MappingEntry scope_86_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_86 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin2To1:<2",
    scope_86_entries, 1
};

const MappingEntry scope_85_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_85 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin2To1:<1",
    scope_85_entries, 1
};

const MappingEntry scope_84_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule, &scope_85, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule, &scope_86, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule, &scope_87, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Movin2To1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin2To1_PlanningModule, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Movin2To1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin2To1_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L5_Movin2To1_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin2To1_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L6_Movin2To1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin2To1_PlanningModule, NULL, 1, 6 }
};
const MappingScope scope_84 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin2To1:",
    scope_84_entries, 7
};

const MappingEntry scope_83_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_83 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To2:<3",
    scope_83_entries, 1
};

const MappingEntry scope_82_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_82 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To2:<2",
    scope_82_entries, 1
};

const MappingEntry scope_81_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_81 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To2:<1",
    scope_81_entries, 1
};

const MappingEntry scope_80_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule, &scope_81, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule, &scope_82, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule, &scope_83, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Moving3To2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To2_PlanningModule, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Moving3To2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To2_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L5_Moving3To2_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To2_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L6_Moving3To2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To2_PlanningModule, NULL, 1, 6 }
};
const MappingScope scope_80 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To2:",
    scope_80_entries, 7
};

const MappingEntry scope_79_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_79 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To1:<4",
    scope_79_entries, 1
};

const MappingEntry scope_78_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_78 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To1:<3",
    scope_78_entries, 1
};

const MappingEntry scope_77_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_77 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To1:<2",
    scope_77_entries, 1
};

const MappingEntry scope_76_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_76 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To1:<1",
    scope_76_entries, 1
};

const MappingEntry scope_75_entries[8] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule, &scope_76, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule, &scope_77, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule, &scope_78, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule, &scope_79, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Moving3To1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To1_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Moving3To1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To1_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L5_Moving3To1_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To1_PlanningModule, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L6_Moving3To1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To1_PlanningModule, NULL, 1, 7 }
};
const MappingScope scope_75 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving3To1:",
    scope_75_entries, 8
};

const MappingEntry scope_74_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_74 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving2To3:<3",
    scope_74_entries, 1
};

const MappingEntry scope_73_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_73 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving2To3:<2",
    scope_73_entries, 1
};

const MappingEntry scope_72_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_72 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving2To3:<1",
    scope_72_entries, 1
};

const MappingEntry scope_71_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule, &scope_72, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule, &scope_73, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule, &scope_74, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Moving2To3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving2To3_PlanningModule, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Moving2To3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving2To3_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L6_Moving2To3_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving2To3_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L7_Moving2To3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving2To3_PlanningModule, NULL, 1, 6 }
};
const MappingScope scope_71 = {
    "PlanningModule/ PlanningModulePlanningModule:Moving2To3:",
    scope_71_entries, 7
};

const MappingEntry scope_70_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_70 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin1To3:<3",
    scope_70_entries, 1
};

const MappingEntry scope_69_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_69 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin1To3:<2",
    scope_69_entries, 1
};

const MappingEntry scope_68_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_68 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin1To3:<1",
    scope_68_entries, 1
};

const MappingEntry scope_67_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule, &scope_68, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule, &scope_69, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule, &scope_70, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Movin1To3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To3_PlanningModule, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Movin1To3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To3_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L5_Movin1To3_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To3_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L6_Movin1To3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To3_PlanningModule, NULL, 1, 6 }
};
const MappingScope scope_67 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin1To3:",
    scope_67_entries, 7
};

const MappingEntry scope_66_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_66 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor3:<2",
    scope_66_entries, 1
};

const MappingEntry scope_65_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_65 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor3:<1",
    scope_65_entries, 1
};

const MappingEntry scope_64_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule, &scope_65, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule, &scope_66, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Floor3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor3_PlanningModule, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Floor3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor3_PlanningModule, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L5_Floor3_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor3_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L6_Floor3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor3_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L8_Floor3_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor3_PlanningModule, NULL, 1, 6 }
};
const MappingScope scope_64 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor3:",
    scope_64_entries, 7
};

const MappingEntry scope_63_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_63 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor2:<2",
    scope_63_entries, 1
};

const MappingEntry scope_62_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_62 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor2:<1",
    scope_62_entries, 1
};

const MappingEntry scope_61_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule, &scope_62, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule, &scope_63, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Floor2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor2_PlanningModule, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Floor2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor2_PlanningModule, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L6_Floor2_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor2_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L7_Floor2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor2_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L9_Floor2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor2_PlanningModule, NULL, 1, 6 }
};
const MappingScope scope_61 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor2:",
    scope_61_entries, 7
};

const MappingEntry scope_60_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_60 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin1To2:<3",
    scope_60_entries, 1
};

const MappingEntry scope_59_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_59 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin1To2:<2",
    scope_59_entries, 1
};

const MappingEntry scope_58_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_58 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin1To2:<1",
    scope_58_entries, 1
};

const MappingEntry scope_57_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule, &scope_58, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule, &scope_59, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule, &scope_60, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L2_Movin1To2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To2_PlanningModule, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Movin1To2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To2_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L5_Movin1To2_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To2_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L6_Movin1To2_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To2_PlanningModule, NULL, 1, 6 }
};
const MappingScope scope_57 = {
    "PlanningModule/ PlanningModulePlanningModule:Movin1To2:",
    scope_57_entries, 7
};

const MappingEntry scope_56_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_56 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor1:<2",
    scope_56_entries, 1
};

const MappingEntry scope_55_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule, NULL, 1, 0 }
};
const MappingScope scope_55 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor1:<1",
    scope_55_entries, 1
};

const MappingEntry scope_54_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule, &scope_55, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_53_entries[5], isActive_SSM_TR_PlanningModule_SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule, &scope_56, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L5_Floor1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor1_PlanningModule, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L4_Floor1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor1_PlanningModule, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, _L6_Floor1_PlanningModule), &_Type_PDirection_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor1_PlanningModule, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L7_Floor1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor1_PlanningModule, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, _L9_Floor1_PlanningModule), &_Type_kcg_bool_Utils, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor1_PlanningModule, NULL, 1, 6 }
};
const MappingScope scope_54 = {
    "PlanningModule/ PlanningModulePlanningModule:Floor1:",
    scope_54_entries, 7
};

const MappingEntry scope_53_entries[17] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_PlanningModule), offsetof(outC_PlanningModule, PlanningModule_state_act), &_Type_SSM_ST_PlanningModule_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, PlanningModule_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_PlanningModule), offsetof(outC_PlanningModule, PlanningModule_state_nxt), &_Type_SSM_ST_PlanningModule_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, PlanningModule_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_PlanningModule), offsetof(outC_PlanningModule, PlanningModule_state_sel), &_Type_SSM_ST_PlanningModule_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_PlanningModule), offsetof(outC_PlanningModule, PlanningModule_fired_strong), &_Type_SSM_TR_PlanningModule_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_PlanningModule), offsetof(outC_PlanningModule, PlanningModule_fired), &_Type_SSM_TR_PlanningModule_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Floor1:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor1_PlanningModule, &scope_54, 1, 7 },
    /* 8 */ { MAP_STATE, "Movin1To2:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To2_PlanningModule, &scope_57, 1, 8 },
    /* 9 */ { MAP_STATE, "Floor2:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor2_PlanningModule, &scope_61, 1, 9 },
    /* 10 */ { MAP_STATE, "Floor3:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Floor3_PlanningModule, &scope_64, 1, 10 },
    /* 11 */ { MAP_STATE, "Movin1To3:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin1To3_PlanningModule, &scope_67, 1, 11 },
    /* 12 */ { MAP_STATE, "Moving2To3:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving2To3_PlanningModule, &scope_71, 1, 12 },
    /* 13 */ { MAP_STATE, "Moving3To1:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To1_PlanningModule, &scope_75, 1, 13 },
    /* 14 */ { MAP_STATE, "Moving3To2:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Moving3To2_PlanningModule, &scope_80, 1, 14 },
    /* 15 */ { MAP_STATE, "Movin2To1:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Movin2To1_PlanningModule, &scope_84, 1, 15 },
    /* 16 */ { MAP_STATE, "Stop:", NULL, 0, 0, NULL, &scope_53_entries[0], isActive_SSM_ST_PlanningModule_SSM_st_Stop_PlanningModule, &scope_88, 1, 16 }
};
const MappingScope scope_53 = {
    "PlanningModule/ PlanningModulePlanningModule:",
    scope_53_entries, 17
};

const MappingEntry scope_52_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "CarMotorStop", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, CarMotorStop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Doors", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, Doors), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "AtFloor", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, AtFloor), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Move", NULL, sizeof(PDirection), offsetof(outC_PlanningModule, Move), &_Type_PDirection_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "F1BS", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, F1BS), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "F2BS", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, F2BS), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "F3BS", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, F3BS), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "F1BR", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, F1BR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "F2BR", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, F2BR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "F3BR", NULL, sizeof(kcg_bool), offsetof(outC_PlanningModule, F3BR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_AUTOMATON, "PlanningModule:", NULL, 0, 0, NULL, NULL, NULL, &scope_53, 1, 10 },
    /* 11 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_89, 1, 11 }
};
const MappingScope scope_52 = {
    "PlanningModule/ PlanningModule",
    scope_52_entries, 12
};

const MappingEntry scope_51_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_44_entries[5], isActive_SSM_TR_SM6__12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6, NULL, 1, 0 }
};
const MappingScope scope_51 = {
    "ButtonProcessor/ ButtonProcessorSM6:Floor1Button4:<2",
    scope_51_entries, 1
};

const MappingEntry scope_50_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_44_entries[5], isActive_SSM_TR_SM6_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6, NULL, 1, 0 }
};
const MappingScope scope_50 = {
    "ButtonProcessor/ ButtonProcessorSM6:Floor1Button4:<1",
    scope_50_entries, 1
};

const MappingEntry scope_49_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_44_entries[5], isActive_SSM_TR_SM6_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6, &scope_50, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_44_entries[5], isActive_SSM_TR_SM6__12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6, &scope_51, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, _L1_Floor1Button4_SM6), &_Type_kcg_int16_Utils, &scope_44_entries[0], isActive_SSM_ST_SM6_SSM_st_Floor1Button4_SM6, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Counter 16", NULL, sizeof(outC_Counter), offsetof(outC_ButtonProcessor, Context_Counter_16), NULL, &scope_44_entries[0], isActive_SSM_ST_SM6_SSM_st_Floor1Button4_SM6, &scope_11, 1, 3 }
};
const MappingScope scope_49 = {
    "ButtonProcessor/ ButtonProcessorSM6:Floor1Button4:",
    scope_49_entries, 4
};

const MappingEntry scope_48_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_44_entries[5], isActive_SSM_TR_SM6_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6, NULL, 1, 0 }
};
const MappingScope scope_48 = {
    "ButtonProcessor/ ButtonProcessorSM6:Floor1Button11:<1",
    scope_48_entries, 1
};

const MappingEntry scope_47_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_44_entries[5], isActive_SSM_TR_SM6_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6, &scope_48, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button11_SM6), &_Type_kcg_bool_Utils, &scope_44_entries[0], isActive_SSM_ST_SM6_SSM_st_Floor1Button11_SM6, NULL, 1, 1 }
};
const MappingScope scope_47 = {
    "ButtonProcessor/ ButtonProcessorSM6:Floor1Button11:",
    scope_47_entries, 2
};

const MappingEntry scope_46_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_44_entries[5], isActive_SSM_TR_SM6_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6, NULL, 1, 0 }
};
const MappingScope scope_46 = {
    "ButtonProcessor/ ButtonProcessorSM6:Floor1Button10:<1",
    scope_46_entries, 1
};

const MappingEntry scope_45_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_44_entries[5], isActive_SSM_TR_SM6_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6, &scope_46, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button10_SM6), &_Type_kcg_bool_Utils, &scope_44_entries[0], isActive_SSM_ST_SM6_SSM_st_Floor1Button10_SM6, NULL, 1, 1 }
};
const MappingScope scope_45 = {
    "ButtonProcessor/ ButtonProcessorSM6:Floor1Button10:",
    scope_45_entries, 2
};

const MappingEntry scope_44_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM6), offsetof(outC_ButtonProcessor, SM6_state_act), &_Type_SSM_ST_SM6_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM6_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM6), offsetof(outC_ButtonProcessor, SM6_state_nxt), &_Type_SSM_ST_SM6_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM6_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM6), offsetof(outC_ButtonProcessor, SM6_state_sel), &_Type_SSM_ST_SM6_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM6), offsetof(outC_ButtonProcessor, SM6_fired_strong), &_Type_SSM_TR_SM6_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM6), offsetof(outC_ButtonProcessor, SM6_fired), &_Type_SSM_TR_SM6_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Floor1Button10:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_SSM_ST_SM6_SSM_st_Floor1Button10_SM6, &scope_45, 1, 7 },
    /* 8 */ { MAP_STATE, "Floor1Button11:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_SSM_ST_SM6_SSM_st_Floor1Button11_SM6, &scope_47, 1, 8 },
    /* 9 */ { MAP_STATE, "Floor1Button4:", NULL, 0, 0, NULL, &scope_44_entries[0], isActive_SSM_ST_SM6_SSM_st_Floor1Button4_SM6, &scope_49, 1, 9 }
};
const MappingScope scope_44 = {
    "ButtonProcessor/ ButtonProcessorSM6:",
    scope_44_entries, 10
};

const MappingEntry scope_43_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_36_entries[5], isActive_SSM_TR_SM5__14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5, NULL, 1, 0 }
};
const MappingScope scope_43 = {
    "ButtonProcessor/ ButtonProcessorSM5:Floor1Button4:<2",
    scope_43_entries, 1
};

const MappingEntry scope_42_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_36_entries[5], isActive_SSM_TR_SM5__13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5, NULL, 1, 0 }
};
const MappingScope scope_42 = {
    "ButtonProcessor/ ButtonProcessorSM5:Floor1Button4:<1",
    scope_42_entries, 1
};

const MappingEntry scope_41_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_36_entries[5], isActive_SSM_TR_SM5__13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5, &scope_42, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_36_entries[5], isActive_SSM_TR_SM5__14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5, &scope_43, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, _L1_Floor1Button4_SM5), &_Type_kcg_int16_Utils, &scope_36_entries[0], isActive_SSM_ST_SM5_SSM_st_Floor1Button4_SM5, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Counter 15", NULL, sizeof(outC_Counter), offsetof(outC_ButtonProcessor, Context_Counter_15), NULL, &scope_36_entries[0], isActive_SSM_ST_SM5_SSM_st_Floor1Button4_SM5, &scope_11, 1, 3 }
};
const MappingScope scope_41 = {
    "ButtonProcessor/ ButtonProcessorSM5:Floor1Button4:",
    scope_41_entries, 4
};

const MappingEntry scope_40_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_36_entries[5], isActive_SSM_TR_SM5__15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5, NULL, 1, 0 }
};
const MappingScope scope_40 = {
    "ButtonProcessor/ ButtonProcessorSM5:Floor1Button11:<1",
    scope_40_entries, 1
};

const MappingEntry scope_39_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_36_entries[5], isActive_SSM_TR_SM5__15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5, &scope_40, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button11_SM5), &_Type_kcg_bool_Utils, &scope_36_entries[0], isActive_SSM_ST_SM5_SSM_st_Floor1Button11_SM5, NULL, 1, 1 }
};
const MappingScope scope_39 = {
    "ButtonProcessor/ ButtonProcessorSM5:Floor1Button11:",
    scope_39_entries, 2
};

const MappingEntry scope_38_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_36_entries[5], isActive_SSM_TR_SM5__16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5, NULL, 1, 0 }
};
const MappingScope scope_38 = {
    "ButtonProcessor/ ButtonProcessorSM5:Floor1Button10:<1",
    scope_38_entries, 1
};

const MappingEntry scope_37_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_36_entries[5], isActive_SSM_TR_SM5__16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5, &scope_38, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button10_SM5), &_Type_kcg_bool_Utils, &scope_36_entries[0], isActive_SSM_ST_SM5_SSM_st_Floor1Button10_SM5, NULL, 1, 1 }
};
const MappingScope scope_37 = {
    "ButtonProcessor/ ButtonProcessorSM5:Floor1Button10:",
    scope_37_entries, 2
};

const MappingEntry scope_36_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM5), offsetof(outC_ButtonProcessor, SM5_state_act), &_Type_SSM_ST_SM5_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM5_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM5), offsetof(outC_ButtonProcessor, SM5_state_nxt), &_Type_SSM_ST_SM5_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM5_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM5), offsetof(outC_ButtonProcessor, SM5_state_sel), &_Type_SSM_ST_SM5_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM5), offsetof(outC_ButtonProcessor, SM5_fired_strong), &_Type_SSM_TR_SM5_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM5), offsetof(outC_ButtonProcessor, SM5_fired), &_Type_SSM_TR_SM5_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Floor1Button10:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_SSM_ST_SM5_SSM_st_Floor1Button10_SM5, &scope_37, 1, 7 },
    /* 8 */ { MAP_STATE, "Floor1Button11:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_SSM_ST_SM5_SSM_st_Floor1Button11_SM5, &scope_39, 1, 8 },
    /* 9 */ { MAP_STATE, "Floor1Button4:", NULL, 0, 0, NULL, &scope_36_entries[0], isActive_SSM_ST_SM5_SSM_st_Floor1Button4_SM5, &scope_41, 1, 9 }
};
const MappingScope scope_36 = {
    "ButtonProcessor/ ButtonProcessorSM5:",
    scope_36_entries, 10
};

const MappingEntry scope_35_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_28_entries[5], isActive__11_SSM_TR_SM1__18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1, NULL, 1, 0 }
};
const MappingScope scope_35 = {
    "ButtonProcessor/ ButtonProcessorSM1:Floor1Button4:<2",
    scope_35_entries, 1
};

const MappingEntry scope_34_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_28_entries[5], isActive__11_SSM_TR_SM1__17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1, NULL, 1, 0 }
};
const MappingScope scope_34 = {
    "ButtonProcessor/ ButtonProcessorSM1:Floor1Button4:<1",
    scope_34_entries, 1
};

const MappingEntry scope_33_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_28_entries[5], isActive__11_SSM_TR_SM1__17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1, &scope_34, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_28_entries[5], isActive__11_SSM_TR_SM1__18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1, &scope_35, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, _L1_Floor1Button4_SM1), &_Type_kcg_int16_Utils, &scope_28_entries[0], isActive__10_SSM_ST_SM1_SSM_st_Floor1Button4_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Counter 14", NULL, sizeof(outC_Counter), offsetof(outC_ButtonProcessor, Context_Counter_14), NULL, &scope_28_entries[0], isActive__10_SSM_ST_SM1_SSM_st_Floor1Button4_SM1, &scope_11, 1, 3 }
};
const MappingScope scope_33 = {
    "ButtonProcessor/ ButtonProcessorSM1:Floor1Button4:",
    scope_33_entries, 4
};

const MappingEntry scope_32_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_28_entries[5], isActive__11_SSM_TR_SM1__19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1, NULL, 1, 0 }
};
const MappingScope scope_32 = {
    "ButtonProcessor/ ButtonProcessorSM1:Floor1Button11:<1",
    scope_32_entries, 1
};

const MappingEntry scope_31_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_28_entries[5], isActive__11_SSM_TR_SM1__19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1, &scope_32, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button11_SM1), &_Type_kcg_bool_Utils, &scope_28_entries[0], isActive__10_SSM_ST_SM1_SSM_st_Floor1Button11_SM1, NULL, 1, 1 }
};
const MappingScope scope_31 = {
    "ButtonProcessor/ ButtonProcessorSM1:Floor1Button11:",
    scope_31_entries, 2
};

const MappingEntry scope_30_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_28_entries[5], isActive__11_SSM_TR_SM1__20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1, NULL, 1, 0 }
};
const MappingScope scope_30 = {
    "ButtonProcessor/ ButtonProcessorSM1:Floor1Button10:<1",
    scope_30_entries, 1
};

const MappingEntry scope_29_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_28_entries[5], isActive__11_SSM_TR_SM1__20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1, &scope_30, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button10_SM1), &_Type_kcg_bool_Utils, &scope_28_entries[0], isActive__10_SSM_ST_SM1_SSM_st_Floor1Button10_SM1, NULL, 1, 1 }
};
const MappingScope scope_29 = {
    "ButtonProcessor/ ButtonProcessorSM1:Floor1Button10:",
    scope_29_entries, 2
};

const MappingEntry scope_28_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_10_SSM_ST_SM1), offsetof(outC_ButtonProcessor, SM1_state_act), &_Type__10_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_10_SSM_ST_SM1), offsetof(outC_ButtonProcessor, SM1_state_nxt), &_Type__10_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_10_SSM_ST_SM1), offsetof(outC_ButtonProcessor, SM1_state_sel), &_Type__10_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_11_SSM_TR_SM1), offsetof(outC_ButtonProcessor, SM1_fired_strong), &_Type__11_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_11_SSM_TR_SM1), offsetof(outC_ButtonProcessor, SM1_fired), &_Type__11_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Floor1Button10:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive__10_SSM_ST_SM1_SSM_st_Floor1Button10_SM1, &scope_29, 1, 7 },
    /* 8 */ { MAP_STATE, "Floor1Button11:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive__10_SSM_ST_SM1_SSM_st_Floor1Button11_SM1, &scope_31, 1, 8 },
    /* 9 */ { MAP_STATE, "Floor1Button4:", NULL, 0, 0, NULL, &scope_28_entries[0], isActive__10_SSM_ST_SM1_SSM_st_Floor1Button4_SM1, &scope_33, 1, 9 }
};
const MappingScope scope_28 = {
    "ButtonProcessor/ ButtonProcessorSM1:",
    scope_28_entries, 10
};

const MappingEntry scope_27_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM4__22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4, NULL, 1, 0 }
};
const MappingScope scope_27 = {
    "ButtonProcessor/ ButtonProcessorSM4:Floor1Button4:<2",
    scope_27_entries, 1
};

const MappingEntry scope_26_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM4__21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4, NULL, 1, 0 }
};
const MappingScope scope_26 = {
    "ButtonProcessor/ ButtonProcessorSM4:Floor1Button4:<1",
    scope_26_entries, 1
};

const MappingEntry scope_25_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM4__21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4, &scope_26, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM4__22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4, &scope_27, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, _L1_Floor1Button4_SM4), &_Type_kcg_int16_Utils, &scope_20_entries[0], isActive_SSM_ST_SM4_SSM_st_Floor1Button4_SM4, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Counter 13", NULL, sizeof(outC_Counter), offsetof(outC_ButtonProcessor, Context_Counter_13), NULL, &scope_20_entries[0], isActive_SSM_ST_SM4_SSM_st_Floor1Button4_SM4, &scope_11, 1, 3 }
};
const MappingScope scope_25 = {
    "ButtonProcessor/ ButtonProcessorSM4:Floor1Button4:",
    scope_25_entries, 4
};

const MappingEntry scope_24_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM4__23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4, NULL, 1, 0 }
};
const MappingScope scope_24 = {
    "ButtonProcessor/ ButtonProcessorSM4:Floor1Button11:<1",
    scope_24_entries, 1
};

const MappingEntry scope_23_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM4__23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4, &scope_24, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button11_SM4), &_Type_kcg_bool_Utils, &scope_20_entries[0], isActive_SSM_ST_SM4_SSM_st_Floor1Button11_SM4, NULL, 1, 1 }
};
const MappingScope scope_23 = {
    "ButtonProcessor/ ButtonProcessorSM4:Floor1Button11:",
    scope_23_entries, 2
};

const MappingEntry scope_22_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM4__24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4, NULL, 1, 0 }
};
const MappingScope scope_22 = {
    "ButtonProcessor/ ButtonProcessorSM4:Floor1Button10:<1",
    scope_22_entries, 1
};

const MappingEntry scope_21_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_20_entries[5], isActive_SSM_TR_SM4__24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4, &scope_22, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button10_SM4), &_Type_kcg_bool_Utils, &scope_20_entries[0], isActive_SSM_ST_SM4_SSM_st_Floor1Button10_SM4, NULL, 1, 1 }
};
const MappingScope scope_21 = {
    "ButtonProcessor/ ButtonProcessorSM4:Floor1Button10:",
    scope_21_entries, 2
};

const MappingEntry scope_20_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM4), offsetof(outC_ButtonProcessor, SM4_state_act), &_Type_SSM_ST_SM4_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM4_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM4), offsetof(outC_ButtonProcessor, SM4_state_nxt), &_Type_SSM_ST_SM4_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM4_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM4), offsetof(outC_ButtonProcessor, SM4_state_sel), &_Type_SSM_ST_SM4_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM4), offsetof(outC_ButtonProcessor, SM4_fired_strong), &_Type_SSM_TR_SM4_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM4), offsetof(outC_ButtonProcessor, SM4_fired), &_Type_SSM_TR_SM4_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Floor1Button10:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM4_SSM_st_Floor1Button10_SM4, &scope_21, 1, 7 },
    /* 8 */ { MAP_STATE, "Floor1Button11:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM4_SSM_st_Floor1Button11_SM4, &scope_23, 1, 8 },
    /* 9 */ { MAP_STATE, "Floor1Button4:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM4_SSM_st_Floor1Button4_SM4, &scope_25, 1, 9 }
};
const MappingScope scope_20 = {
    "ButtonProcessor/ ButtonProcessorSM4:",
    scope_20_entries, 10
};

const MappingEntry scope_19_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[5], isActive_SSM_TR_SM3__26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3, NULL, 1, 0 }
};
const MappingScope scope_19 = {
    "ButtonProcessor/ ButtonProcessorSM3:Floor1Button4:<2",
    scope_19_entries, 1
};

const MappingEntry scope_18_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[5], isActive_SSM_TR_SM3__25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3, NULL, 1, 0 }
};
const MappingScope scope_18 = {
    "ButtonProcessor/ ButtonProcessorSM3:Floor1Button4:<1",
    scope_18_entries, 1
};

const MappingEntry scope_17_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[5], isActive_SSM_TR_SM3__25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3, &scope_18, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_12_entries[5], isActive_SSM_TR_SM3__26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3, &scope_19, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, _L1_Floor1Button4_SM3), &_Type_kcg_int16_Utils, &scope_12_entries[0], isActive_SSM_ST_SM3_SSM_st_Floor1Button4_SM3, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Counter 12", NULL, sizeof(outC_Counter), offsetof(outC_ButtonProcessor, Context_Counter_12), NULL, &scope_12_entries[0], isActive_SSM_ST_SM3_SSM_st_Floor1Button4_SM3, &scope_11, 1, 3 }
};
const MappingScope scope_17 = {
    "ButtonProcessor/ ButtonProcessorSM3:Floor1Button4:",
    scope_17_entries, 4
};

const MappingEntry scope_16_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[5], isActive_SSM_TR_SM3__27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3, NULL, 1, 0 }
};
const MappingScope scope_16 = {
    "ButtonProcessor/ ButtonProcessorSM3:Floor1Button11:<1",
    scope_16_entries, 1
};

const MappingEntry scope_15_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[5], isActive_SSM_TR_SM3__27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3, &scope_16, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button11_SM3), &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM3_SSM_st_Floor1Button11_SM3, NULL, 1, 1 }
};
const MappingScope scope_15 = {
    "ButtonProcessor/ ButtonProcessorSM3:Floor1Button11:",
    scope_15_entries, 2
};

const MappingEntry scope_14_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[5], isActive_SSM_TR_SM3__28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3, NULL, 1, 0 }
};
const MappingScope scope_14 = {
    "ButtonProcessor/ ButtonProcessorSM3:Floor1Button10:<1",
    scope_14_entries, 1
};

const MappingEntry scope_13_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[5], isActive_SSM_TR_SM3__28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3, &scope_14, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button10_SM3), &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM3_SSM_st_Floor1Button10_SM3, NULL, 1, 1 }
};
const MappingScope scope_13 = {
    "ButtonProcessor/ ButtonProcessorSM3:Floor1Button10:",
    scope_13_entries, 2
};

const MappingEntry scope_12_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM3), offsetof(outC_ButtonProcessor, SM3_state_act), &_Type_SSM_ST_SM3_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM3_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM3), offsetof(outC_ButtonProcessor, SM3_state_nxt), &_Type_SSM_ST_SM3_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM3_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM3), offsetof(outC_ButtonProcessor, SM3_state_sel), &_Type_SSM_ST_SM3_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM3), offsetof(outC_ButtonProcessor, SM3_fired_strong), &_Type_SSM_TR_SM3_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM3), offsetof(outC_ButtonProcessor, SM3_fired), &_Type_SSM_TR_SM3_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Floor1Button10:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM3_SSM_st_Floor1Button10_SM3, &scope_13, 1, 7 },
    /* 8 */ { MAP_STATE, "Floor1Button11:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM3_SSM_st_Floor1Button11_SM3, &scope_15, 1, 8 },
    /* 9 */ { MAP_STATE, "Floor1Button4:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM3_SSM_st_Floor1Button4_SM3, &scope_17, 1, 9 }
};
const MappingScope scope_12 = {
    "ButtonProcessor/ ButtonProcessorSM3:",
    scope_12_entries, 10
};

const MappingEntry scope_11_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output", NULL, sizeof(kcg_int16), offsetof(outC_Counter, Output), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "x", NULL, sizeof(kcg_int16), offsetof(outC_Counter, x), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int16), offsetof(outC_Counter, _L4), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_Counter, _L1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int16), offsetof(outC_Counter, _L3), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_11 = {
    "Counter/ Counter",
    scope_11_entries, 5
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive__9_SSM_TR_SM2__30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "ButtonProcessor/ ButtonProcessorSM2:Floor1Button4:<2",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive__9_SSM_TR_SM2__29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "ButtonProcessor/ ButtonProcessorSM2:Floor1Button4:<1",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive__9_SSM_TR_SM2__29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2, &scope_9, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_3_entries[5], isActive__9_SSM_TR_SM2__30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2, &scope_10, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, _L1_Floor1Button4_SM2), &_Type_kcg_int16_Utils, &scope_3_entries[0], isActive__8_SSM_ST_SM2_SSM_st_Floor1Button4_SM2, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Counter 11", NULL, sizeof(outC_Counter), offsetof(outC_ButtonProcessor, Context_Counter_11), NULL, &scope_3_entries[0], isActive__8_SSM_ST_SM2_SSM_st_Floor1Button4_SM2, &scope_11, 1, 3 }
};
const MappingScope scope_8 = {
    "ButtonProcessor/ ButtonProcessorSM2:Floor1Button4:",
    scope_8_entries, 4
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive__9_SSM_TR_SM2__31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "ButtonProcessor/ ButtonProcessorSM2:Floor1Button11:<1",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive__9_SSM_TR_SM2__31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2, &scope_7, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button11_SM2), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive__8_SSM_ST_SM2_SSM_st_Floor1Button11_SM2, NULL, 1, 1 }
};
const MappingScope scope_6 = {
    "ButtonProcessor/ ButtonProcessorSM2:Floor1Button11:",
    scope_6_entries, 2
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_3_entries[5], isActive__9_SSM_TR_SM2__32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2, NULL, 1, 0 }
};
const MappingScope scope_5 = {
    "ButtonProcessor/ ButtonProcessorSM2:Floor1Button10:<1",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_3_entries[5], isActive__9_SSM_TR_SM2__32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2, &scope_5, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, _L2_Floor1Button10_SM2), &_Type_kcg_bool_Utils, &scope_3_entries[0], isActive__8_SSM_ST_SM2_SSM_st_Floor1Button10_SM2, NULL, 1, 1 }
};
const MappingScope scope_4 = {
    "ButtonProcessor/ ButtonProcessorSM2:Floor1Button10:",
    scope_4_entries, 2
};

const MappingEntry scope_3_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_8_SSM_ST_SM2), offsetof(outC_ButtonProcessor, SM2_state_act), &_Type__8_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM2_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_8_SSM_ST_SM2), offsetof(outC_ButtonProcessor, SM2_state_nxt), &_Type__8_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, SM2_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_8_SSM_ST_SM2), offsetof(outC_ButtonProcessor, SM2_state_sel), &_Type__8_SSM_ST_SM2_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_9_SSM_TR_SM2), offsetof(outC_ButtonProcessor, SM2_fired_strong), &_Type__9_SSM_TR_SM2_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_9_SSM_TR_SM2), offsetof(outC_ButtonProcessor, SM2_fired), &_Type__9_SSM_TR_SM2_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Floor1Button10:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive__8_SSM_ST_SM2_SSM_st_Floor1Button10_SM2, &scope_4, 1, 7 },
    /* 8 */ { MAP_STATE, "Floor1Button11:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive__8_SSM_ST_SM2_SSM_st_Floor1Button11_SM2, &scope_6, 1, 8 },
    /* 9 */ { MAP_STATE, "Floor1Button4:", NULL, 0, 0, NULL, &scope_3_entries[0], isActive__8_SSM_ST_SM2_SSM_st_Floor1Button4_SM2, &scope_8, 1, 9 }
};
const MappingScope scope_3 = {
    "ButtonProcessor/ ButtonProcessorSM2:",
    scope_3_entries, 10
};

const MappingEntry scope_2_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "Press0", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, Press0), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Press1", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, Press1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Press2", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, Press2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Press3", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, Press3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "Press7", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, Press7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "Press8", NULL, sizeof(kcg_bool), offsetof(outC_ButtonProcessor, Press8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "Timer0", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, Timer0), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "Timer1", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, Timer1), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "Timer2", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, Timer2), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "Timer3", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, Timer3), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "Timer4", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, Timer4), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "Timer5", NULL, sizeof(kcg_int16), offsetof(outC_ButtonProcessor, Timer5), &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_3, 1, 12 },
    /* 13 */ { MAP_AUTOMATON, "SM3:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 13 },
    /* 14 */ { MAP_AUTOMATON, "SM4:", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 14 },
    /* 15 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 15 },
    /* 16 */ { MAP_AUTOMATON, "SM5:", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 16 },
    /* 17 */ { MAP_AUTOMATON, "SM6:", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 17 }
};
const MappingScope scope_2 = {
    "ButtonProcessor/ ButtonProcessor",
    scope_2_entries, 18
};

const MappingEntry scope_1_entries[43] = {
    /* 0 */ { MAP_OUTPUT, "Channel1", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx.Channel1, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Channel2", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx.Channel2, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "GPIOC0", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.GPIOC0, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "GPIOC1", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.GPIOC1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_INPUT, "GPIOC2", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.GPIOC2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INPUT, "GPIOC3", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.GPIOC3, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INPUT, "GPIOC8", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.GPIOC8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_INPUT, "GPIOC7", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.GPIOC7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_INPUT, "GPIOC9", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.GPIOC9, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L23, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L24, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L25, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L26, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L29, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L47, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L46, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L45, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L44, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L43, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L42, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L50, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L49, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L48", NULL, sizeof(PDirection), (size_t)&outputs_ctx._L48, &_Type_PDirection_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L51, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L54, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L52, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L57", NULL, sizeof(Direction), (size_t)&outputs_ctx._L57, &_Type_Direction_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L56, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L55, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L61, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L63, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L64, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L66, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L68, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_int16), (size_t)&outputs_ctx._L70, &_Type_kcg_int16_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L89, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx._L91, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L92, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_INSTANCE, "ButtonProcessor 2", NULL, sizeof(outC_ButtonProcessor), (size_t)&outputs_ctx.Context_ButtonProcessor_2, NULL, NULL, NULL, &scope_2, 1, 38 },
    /* 39 */ { MAP_INSTANCE, "PlanningModule 2", NULL, sizeof(outC_PlanningModule), (size_t)&outputs_ctx.Context_PlanningModule_2, NULL, NULL, NULL, &scope_52, 1, 39 },
    /* 40 */ { MAP_INSTANCE, "SafetyModule 2", NULL, sizeof(outC_SafetyModule), (size_t)&outputs_ctx.Context_SafetyModule_2, NULL, NULL, NULL, &scope_109, 1, 40 },
    /* 41 */ { MAP_INSTANCE, "PositionProcessor 2", NULL, sizeof(outC_PositionProcessor), (size_t)&outputs_ctx.Context_PositionProcessor_2, NULL, NULL, NULL, &scope_137, 1, 41 },
    /* 42 */ { MAP_INSTANCE, "ActuatorModule 2", NULL, sizeof(outC_ActuatorModule), (size_t)&outputs_ctx.Context_ActuatorModule_2, NULL, NULL, NULL, &scope_156, 1, 42 }
};
const MappingScope scope_1 = {
    "ControlSystem/ ControlSystem",
    scope_1_entries, 43
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "ControlSystem", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
