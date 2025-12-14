#include "The Button Processor_type.h"

#include "SmuTypes.h"
#include "SmuPredefConv.h"
#include "SmuVTable.h"

#include "kcg_types.h"

#include "SmuConfig.h"

char strDefaultRealFormat[] = "%.5g"; /* (from .etp) */
#define UNUSED(x) (void)(x)
#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** Constants 
 ****************************************************************/

#include "kcg_consts.h"

/****************************************************************
 ** _10_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_10_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_10_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_10_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_10_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _10_SSM_ST_SM1_values[] = {
    { "Floor1Button10", SSM_st_Floor1Button10_SM1},
    { "Floor1Button10", SSM_st_Floor1Button10_SM1},
    { "Floor1Button11", SSM_st_Floor1Button11_SM1},
    { "Floor1Button11", SSM_st_Floor1Button11_SM1},
    { "Floor1Button4", SSM_st_Floor1Button4_SM1},
    { "Floor1Button4", SSM_st_Floor1Button4_SM1},
};
const int _10_SSM_ST_SM1_nb_values = 6;

int _10_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_10_SSM_ST_SM1VTable != NULL
        && pSim_10_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_10_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_10_SSM_ST_SM1*)pValue, _10_SSM_ST_SM1_values, _10_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__10_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _10_SSM_ST_SM1 rTemp;
    return string_to__10_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__10_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_10_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_10_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _10_SSM_ST_SM1_values, _10_SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_10_SSM_ST_SM1*)pValue = (_10_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__10_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_10_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_10_SSM_ST_SM1VTable);
    }
    return 1;
}

int _10_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_10_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_10_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_10_SSM_ST_SM1*)pValue);
    return 1;
}

int is__10_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_10_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_10_SSM_ST_SM1VTable);
    }
    return 1;
}

int _10_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_10_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_10_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_10_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__10_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_10_SSM_ST_SM1VTable != NULL
        && pSim_10_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_10_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_10_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_10_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_10_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_10_SSM_ST_SM1*)pValue1), (int)(*(_10_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__10_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_10_SSM_ST_SM1_values, _10_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__10_SSM_ST_SM1(void *pValue)
{
    *(_10_SSM_ST_SM1*)pValue = SSM_st_Floor1Button10_SM1;
    return 1;
}

int release__10_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__10_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_10_SSM_ST_SM1*)pToValue) = *((_10_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__10_SSM_ST_SM1_Utils = {
    _10_SSM_ST_SM1_to_string,
    check__10_SSM_ST_SM1_string,
    string_to__10_SSM_ST_SM1,
    is__10_SSM_ST_SM1_double_conversion_allowed,
    _10_SSM_ST_SM1_to_double,
    is__10_SSM_ST_SM1_long_conversion_allowed,
    _10_SSM_ST_SM1_to_long,
    compare__10_SSM_ST_SM1,
    get__10_SSM_ST_SM1_signature,
    init__10_SSM_ST_SM1,
    release__10_SSM_ST_SM1,
    copy__10_SSM_ST_SM1,
    sizeof(_10_SSM_ST_SM1)
};

/****************************************************************
 ** _11_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_11_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_11_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_11_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_11_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _11_SSM_TR_SM1_values[] = {
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "_20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1", _20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1},
    { "_20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1", _20_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM1},
    { "_19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1", _19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1},
    { "_19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1", _19_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM1},
    { "_17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1", _17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1},
    { "_17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1", _17_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM1},
    { "_18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1", _18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1},
    { "_18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1", _18_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM1},
};
const int _11_SSM_TR_SM1_nb_values = 10;

int _11_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_11_SSM_TR_SM1VTable != NULL
        && pSim_11_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_11_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_11_SSM_TR_SM1*)pValue, _11_SSM_TR_SM1_values, _11_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__11_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _11_SSM_TR_SM1 rTemp;
    return string_to__11_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__11_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_11_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_11_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _11_SSM_TR_SM1_values, _11_SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_11_SSM_TR_SM1*)pValue = (_11_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__11_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_11_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_11_SSM_TR_SM1VTable);
    }
    return 1;
}

int _11_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_11_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_11_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_11_SSM_TR_SM1*)pValue);
    return 1;
}

int is__11_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_11_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_11_SSM_TR_SM1VTable);
    }
    return 1;
}

int _11_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_11_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_11_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_11_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__11_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_11_SSM_TR_SM1VTable != NULL
        && pSim_11_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_11_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_11_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_11_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_11_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_11_SSM_TR_SM1*)pValue1), (int)(*(_11_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__11_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_11_SSM_TR_SM1_values, _11_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__11_SSM_TR_SM1(void *pValue)
{
    *(_11_SSM_TR_SM1*)pValue = SSM_TR_no_trans_SM1;
    return 1;
}

int release__11_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__11_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_11_SSM_TR_SM1*)pToValue) = *((_11_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__11_SSM_TR_SM1_Utils = {
    _11_SSM_TR_SM1_to_string,
    check__11_SSM_TR_SM1_string,
    string_to__11_SSM_TR_SM1,
    is__11_SSM_TR_SM1_double_conversion_allowed,
    _11_SSM_TR_SM1_to_double,
    is__11_SSM_TR_SM1_long_conversion_allowed,
    _11_SSM_TR_SM1_to_long,
    compare__11_SSM_TR_SM1,
    get__11_SSM_TR_SM1_signature,
    init__11_SSM_TR_SM1,
    release__11_SSM_TR_SM1,
    copy__11_SSM_TR_SM1,
    sizeof(_11_SSM_TR_SM1)
};

/****************************************************************
 ** _2_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_2_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _2_SSM_ST_SM1_values[] = {
    { "MovingUp", SSM_st_MovingUp_SM1},
    { "MovingUp", SSM_st_MovingUp_SM1},
    { "MovingUp1", SSM_st_MovingUp1_SM1},
    { "MovingUp1", SSM_st_MovingUp1_SM1},
    { "State4", SSM_st_State4_SM1},
    { "State4", SSM_st_State4_SM1},
    { "Initial", SSM_st_Initial_SM1},
    { "Initial", SSM_st_Initial_SM1},
    { "WaintingForNegPulse", SSM_st_WaintingForNegPulse_SM1},
    { "WaintingForNegPulse", SSM_st_WaintingForNegPulse_SM1},
};
const int _2_SSM_ST_SM1_nb_values = 10;

int _2_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL
        && pSim_2_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_2_SSM_ST_SM1*)pValue, _2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__2_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _2_SSM_ST_SM1 rTemp;
    return string_to__2_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__2_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_2_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_2_SSM_ST_SM1*)pValue = (_2_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__2_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_SSM_ST_SM1VTable);
    }
    return 1;
}

int _2_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_2_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_2_SSM_ST_SM1*)pValue);
    return 1;
}

int is__2_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_2_SSM_ST_SM1VTable);
    }
    return 1;
}

int _2_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_2_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_2_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__2_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_2_SSM_ST_SM1VTable != NULL
        && pSim_2_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_2_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_2_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_2_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_2_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_2_SSM_ST_SM1*)pValue1), (int)(*(_2_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__2_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__2_SSM_ST_SM1(void *pValue)
{
    *(_2_SSM_ST_SM1*)pValue = SSM_st_MovingUp_SM1;
    return 1;
}

int release__2_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__2_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_2_SSM_ST_SM1*)pToValue) = *((_2_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__2_SSM_ST_SM1_Utils = {
    _2_SSM_ST_SM1_to_string,
    check__2_SSM_ST_SM1_string,
    string_to__2_SSM_ST_SM1,
    is__2_SSM_ST_SM1_double_conversion_allowed,
    _2_SSM_ST_SM1_to_double,
    is__2_SSM_ST_SM1_long_conversion_allowed,
    _2_SSM_ST_SM1_to_long,
    compare__2_SSM_ST_SM1,
    get__2_SSM_ST_SM1_signature,
    init__2_SSM_ST_SM1,
    release__2_SSM_ST_SM1,
    copy__2_SSM_ST_SM1,
    sizeof(_2_SSM_ST_SM1)
};

/****************************************************************
 ** _3_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_3_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _3_SSM_TR_SM1_values[] = {
    { "_36_SSM_TR_no_trans_SM1", _36_SSM_TR_no_trans_SM1},
    { "_36_SSM_TR_no_trans_SM1", _36_SSM_TR_no_trans_SM1},
    { "SSM_TR_MovingUp_Initial_1_MovingUp_SM1", SSM_TR_MovingUp_Initial_1_MovingUp_SM1},
    { "SSM_TR_MovingUp_Initial_1_MovingUp_SM1", SSM_TR_MovingUp_Initial_1_MovingUp_SM1},
    { "SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1", SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1},
    { "SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1", SSM_TR_MovingUp_WaintingForNegPulse_2_MovingUp_SM1},
    { "SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1", SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1},
    { "SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1", SSM_TR_MovingUp1_Initial_1_MovingUp1_SM1},
    { "SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1", SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1},
    { "SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1", SSM_TR_MovingUp1_WaintingForNegPulse_2_MovingUp1_SM1},
    { "SSM_TR_State4_MovingUp1_1_State4_SM1", SSM_TR_State4_MovingUp1_1_State4_SM1},
    { "SSM_TR_State4_MovingUp1_1_State4_SM1", SSM_TR_State4_MovingUp1_1_State4_SM1},
    { "SSM_TR_State4_MovingUp_2_State4_SM1", SSM_TR_State4_MovingUp_2_State4_SM1},
    { "SSM_TR_State4_MovingUp_2_State4_SM1", SSM_TR_State4_MovingUp_2_State4_SM1},
    { "SSM_TR_State4_State4_3_State4_SM1", SSM_TR_State4_State4_3_State4_SM1},
    { "SSM_TR_State4_State4_3_State4_SM1", SSM_TR_State4_State4_3_State4_SM1},
    { "SSM_TR_State4_Initial_4_State4_SM1", SSM_TR_State4_Initial_4_State4_SM1},
    { "SSM_TR_State4_Initial_4_State4_SM1", SSM_TR_State4_Initial_4_State4_SM1},
    { "SSM_TR_Initial_State4_1_Initial_SM1", SSM_TR_Initial_State4_1_Initial_SM1},
    { "SSM_TR_Initial_State4_1_Initial_SM1", SSM_TR_Initial_State4_1_Initial_SM1},
    { "SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1", SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1},
    { "SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1", SSM_TR_WaintingForNegPulse_State4_1_WaintingForNegPulse_SM1},
    { "SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1", SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1},
    { "SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1", SSM_TR_WaintingForNegPulse_WaintingForNegPulse_2_WaintingForNegPulse_SM1},
    { "SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1", SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1},
    { "SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1", SSM_TR_WaintingForNegPulse_Initial_3_WaintingForNegPulse_SM1},
};
const int _3_SSM_TR_SM1_nb_values = 26;

int _3_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL
        && pSim_3_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_3_SSM_TR_SM1*)pValue, _3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__3_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _3_SSM_TR_SM1 rTemp;
    return string_to__3_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__3_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_3_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_3_SSM_TR_SM1*)pValue = (_3_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__3_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_SSM_TR_SM1VTable);
    }
    return 1;
}

int _3_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_3_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_3_SSM_TR_SM1*)pValue);
    return 1;
}

int is__3_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_3_SSM_TR_SM1VTable);
    }
    return 1;
}

int _3_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_3_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_3_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__3_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_3_SSM_TR_SM1VTable != NULL
        && pSim_3_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_3_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_3_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_3_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_3_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_3_SSM_TR_SM1*)pValue1), (int)(*(_3_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__3_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__3_SSM_TR_SM1(void *pValue)
{
    *(_3_SSM_TR_SM1*)pValue = _36_SSM_TR_no_trans_SM1;
    return 1;
}

int release__3_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__3_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_3_SSM_TR_SM1*)pToValue) = *((_3_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__3_SSM_TR_SM1_Utils = {
    _3_SSM_TR_SM1_to_string,
    check__3_SSM_TR_SM1_string,
    string_to__3_SSM_TR_SM1,
    is__3_SSM_TR_SM1_double_conversion_allowed,
    _3_SSM_TR_SM1_to_double,
    is__3_SSM_TR_SM1_long_conversion_allowed,
    _3_SSM_TR_SM1_to_long,
    compare__3_SSM_TR_SM1,
    get__3_SSM_TR_SM1_signature,
    init__3_SSM_TR_SM1,
    release__3_SSM_TR_SM1,
    copy__3_SSM_TR_SM1,
    sizeof(_3_SSM_TR_SM1)
};

/****************************************************************
 ** _4_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_4_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _4_SSM_ST_SM1_values[] = {
    { "NormalMode", SSM_st_NormalMode_SM1},
    { "NormalMode", SSM_st_NormalMode_SM1},
    { "Environment1", SSM_st_Environment1_SM1},
    { "Environment1", SSM_st_Environment1_SM1},
    { "Safety2", SSM_st_Safety2_SM1},
    { "Safety2", SSM_st_Safety2_SM1},
    { "Safety4", SSM_st_Safety4_SM1},
    { "Safety4", SSM_st_Safety4_SM1},
    { "Safety3", SSM_st_Safety3_SM1},
    { "Safety3", SSM_st_Safety3_SM1},
    { "Safety1PC", SSM_st_Safety1PC_SM1},
    { "Safety1PC", SSM_st_Safety1PC_SM1},
    { "Safety5", SSM_st_Safety5_SM1},
    { "Safety5", SSM_st_Safety5_SM1},
    { "Environment2", SSM_st_Environment2_SM1},
    { "Environment2", SSM_st_Environment2_SM1},
    { "Environment3", SSM_st_Environment3_SM1},
    { "Environment3", SSM_st_Environment3_SM1},
    { "Safety1", SSM_st_Safety1_SM1},
    { "Safety1", SSM_st_Safety1_SM1},
    { "Environment3PC", SSM_st_Environment3PC_SM1},
    { "Environment3PC", SSM_st_Environment3PC_SM1},
};
const int _4_SSM_ST_SM1_nb_values = 22;

int _4_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL
        && pSim_4_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_4_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_4_SSM_ST_SM1*)pValue, _4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__4_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _4_SSM_ST_SM1 rTemp;
    return string_to__4_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__4_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_4_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_4_SSM_ST_SM1*)pValue = (_4_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__4_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_4_SSM_ST_SM1VTable);
    }
    return 1;
}

int _4_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_4_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_4_SSM_ST_SM1*)pValue);
    return 1;
}

int is__4_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_4_SSM_ST_SM1VTable);
    }
    return 1;
}

int _4_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_4_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_4_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__4_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_4_SSM_ST_SM1VTable != NULL
        && pSim_4_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_4_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_4_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_4_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_4_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_4_SSM_ST_SM1*)pValue1), (int)(*(_4_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__4_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__4_SSM_ST_SM1(void *pValue)
{
    *(_4_SSM_ST_SM1*)pValue = SSM_st_NormalMode_SM1;
    return 1;
}

int release__4_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__4_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_4_SSM_ST_SM1*)pToValue) = *((_4_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__4_SSM_ST_SM1_Utils = {
    _4_SSM_ST_SM1_to_string,
    check__4_SSM_ST_SM1_string,
    string_to__4_SSM_ST_SM1,
    is__4_SSM_ST_SM1_double_conversion_allowed,
    _4_SSM_ST_SM1_to_double,
    is__4_SSM_ST_SM1_long_conversion_allowed,
    _4_SSM_ST_SM1_to_long,
    compare__4_SSM_ST_SM1,
    get__4_SSM_ST_SM1_signature,
    init__4_SSM_ST_SM1,
    release__4_SSM_ST_SM1,
    copy__4_SSM_ST_SM1,
    sizeof(_4_SSM_ST_SM1)
};

/****************************************************************
 ** _5_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_5_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _5_SSM_TR_SM1_values[] = {
    { "_35_SSM_TR_no_trans_SM1", _35_SSM_TR_no_trans_SM1},
    { "_35_SSM_TR_no_trans_SM1", _35_SSM_TR_no_trans_SM1},
    { "SSM_TR_NormalMode_Safety5_1_NormalMode_SM1", SSM_TR_NormalMode_Safety5_1_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety5_1_NormalMode_SM1", SSM_TR_NormalMode_Safety5_1_NormalMode_SM1},
    { "SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1", SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1},
    { "SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1", SSM_TR_NormalMode_Environment3PC_2_NormalMode_SM1},
    { "SSM_TR_NormalMode_Environment2_3_NormalMode_SM1", SSM_TR_NormalMode_Environment2_3_NormalMode_SM1},
    { "SSM_TR_NormalMode_Environment2_3_NormalMode_SM1", SSM_TR_NormalMode_Environment2_3_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety4_4_NormalMode_SM1", SSM_TR_NormalMode_Safety4_4_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety4_4_NormalMode_SM1", SSM_TR_NormalMode_Safety4_4_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety2_5_NormalMode_SM1", SSM_TR_NormalMode_Safety2_5_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety2_5_NormalMode_SM1", SSM_TR_NormalMode_Safety2_5_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety3_6_NormalMode_SM1", SSM_TR_NormalMode_Safety3_6_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety3_6_NormalMode_SM1", SSM_TR_NormalMode_Safety3_6_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1", SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1", SSM_TR_NormalMode_Safety1PC_7_NormalMode_SM1},
    { "SSM_TR_NormalMode_Environment1_8_NormalMode_SM1", SSM_TR_NormalMode_Environment1_8_NormalMode_SM1},
    { "SSM_TR_NormalMode_Environment1_8_NormalMode_SM1", SSM_TR_NormalMode_Environment1_8_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety4_9_NormalMode_SM1", SSM_TR_NormalMode_Safety4_9_NormalMode_SM1},
    { "SSM_TR_NormalMode_Safety4_9_NormalMode_SM1", SSM_TR_NormalMode_Safety4_9_NormalMode_SM1},
    { "SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1", SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1},
    { "SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1", SSM_TR_Safety1PC_Safety1_1_Safety1PC_SM1},
    { "SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1", SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1},
    { "SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1", SSM_TR_Environment3PC_NormalMode_1_Environment3PC_SM1},
    { "SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1", SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1},
    { "SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1", SSM_TR_Environment3PC_Environment3_2_Environment3PC_SM1},
};
const int _5_SSM_TR_SM1_nb_values = 26;

int _5_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL
        && pSim_5_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_5_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_5_SSM_TR_SM1*)pValue, _5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__5_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _5_SSM_TR_SM1 rTemp;
    return string_to__5_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__5_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_5_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_5_SSM_TR_SM1*)pValue = (_5_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__5_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_5_SSM_TR_SM1VTable);
    }
    return 1;
}

int _5_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_5_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_5_SSM_TR_SM1*)pValue);
    return 1;
}

int is__5_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_5_SSM_TR_SM1VTable);
    }
    return 1;
}

int _5_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_5_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_5_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__5_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_5_SSM_TR_SM1VTable != NULL
        && pSim_5_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_5_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_5_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_5_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_5_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_5_SSM_TR_SM1*)pValue1), (int)(*(_5_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__5_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__5_SSM_TR_SM1(void *pValue)
{
    *(_5_SSM_TR_SM1*)pValue = _35_SSM_TR_no_trans_SM1;
    return 1;
}

int release__5_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__5_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_5_SSM_TR_SM1*)pToValue) = *((_5_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__5_SSM_TR_SM1_Utils = {
    _5_SSM_TR_SM1_to_string,
    check__5_SSM_TR_SM1_string,
    string_to__5_SSM_TR_SM1,
    is__5_SSM_TR_SM1_double_conversion_allowed,
    _5_SSM_TR_SM1_to_double,
    is__5_SSM_TR_SM1_long_conversion_allowed,
    _5_SSM_TR_SM1_to_long,
    compare__5_SSM_TR_SM1,
    get__5_SSM_TR_SM1_signature,
    init__5_SSM_TR_SM1,
    release__5_SSM_TR_SM1,
    copy__5_SSM_TR_SM1,
    sizeof(_5_SSM_TR_SM1)
};

/****************************************************************
 ** _6_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_6_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _6_SSM_ST_SM1_values[] = {
    { "State1", SSM_st_State1_SM1},
    { "State1", SSM_st_State1_SM1},
};
const int _6_SSM_ST_SM1_nb_values = 2;

int _6_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL
        && pSim_6_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_6_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_6_SSM_ST_SM1*)pValue, _6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__6_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _6_SSM_ST_SM1 rTemp;
    return string_to__6_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__6_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_6_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_6_SSM_ST_SM1*)pValue = (_6_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__6_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_6_SSM_ST_SM1VTable);
    }
    return 1;
}

int _6_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_6_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_6_SSM_ST_SM1*)pValue);
    return 1;
}

int is__6_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_6_SSM_ST_SM1VTable);
    }
    return 1;
}

int _6_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_6_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_6_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__6_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_6_SSM_ST_SM1VTable != NULL
        && pSim_6_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_6_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_6_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_6_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_6_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_6_SSM_ST_SM1*)pValue1), (int)(*(_6_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__6_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__6_SSM_ST_SM1(void *pValue)
{
    *(_6_SSM_ST_SM1*)pValue = SSM_st_State1_SM1;
    return 1;
}

int release__6_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__6_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_6_SSM_ST_SM1*)pToValue) = *((_6_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__6_SSM_ST_SM1_Utils = {
    _6_SSM_ST_SM1_to_string,
    check__6_SSM_ST_SM1_string,
    string_to__6_SSM_ST_SM1,
    is__6_SSM_ST_SM1_double_conversion_allowed,
    _6_SSM_ST_SM1_to_double,
    is__6_SSM_ST_SM1_long_conversion_allowed,
    _6_SSM_ST_SM1_to_long,
    compare__6_SSM_ST_SM1,
    get__6_SSM_ST_SM1_signature,
    init__6_SSM_ST_SM1,
    release__6_SSM_ST_SM1,
    copy__6_SSM_ST_SM1,
    sizeof(_6_SSM_ST_SM1)
};

/****************************************************************
 ** _7_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_7_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _7_SSM_TR_SM1_values[] = {
    { "_34_SSM_TR_no_trans_SM1", _34_SSM_TR_no_trans_SM1},
    { "_34_SSM_TR_no_trans_SM1", _34_SSM_TR_no_trans_SM1},
};
const int _7_SSM_TR_SM1_nb_values = 2;

int _7_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL
        && pSim_7_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_7_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_7_SSM_TR_SM1*)pValue, _7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__7_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _7_SSM_TR_SM1 rTemp;
    return string_to__7_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__7_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_7_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_7_SSM_TR_SM1*)pValue = (_7_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__7_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_7_SSM_TR_SM1VTable);
    }
    return 1;
}

int _7_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_7_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_7_SSM_TR_SM1*)pValue);
    return 1;
}

int is__7_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_7_SSM_TR_SM1VTable);
    }
    return 1;
}

int _7_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_7_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_7_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__7_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_7_SSM_TR_SM1VTable != NULL
        && pSim_7_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_7_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_7_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_7_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_7_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_7_SSM_TR_SM1*)pValue1), (int)(*(_7_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__7_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__7_SSM_TR_SM1(void *pValue)
{
    *(_7_SSM_TR_SM1*)pValue = _34_SSM_TR_no_trans_SM1;
    return 1;
}

int release__7_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__7_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_7_SSM_TR_SM1*)pToValue) = *((_7_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__7_SSM_TR_SM1_Utils = {
    _7_SSM_TR_SM1_to_string,
    check__7_SSM_TR_SM1_string,
    string_to__7_SSM_TR_SM1,
    is__7_SSM_TR_SM1_double_conversion_allowed,
    _7_SSM_TR_SM1_to_double,
    is__7_SSM_TR_SM1_long_conversion_allowed,
    _7_SSM_TR_SM1_to_long,
    compare__7_SSM_TR_SM1,
    get__7_SSM_TR_SM1_signature,
    init__7_SSM_TR_SM1,
    release__7_SSM_TR_SM1,
    copy__7_SSM_TR_SM1,
    sizeof(_7_SSM_TR_SM1)
};

/****************************************************************
 ** _8_SSM_ST_SM2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_8_SSM_ST_SM2VTable_defined
    extern struct SimTypeVTable *pSim_8_SSM_ST_SM2VTable;
  #else 
    struct SimTypeVTable *pSim_8_SSM_ST_SM2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_8_SSM_ST_SM2VTable;
#endif

static SimEnumValUtils _8_SSM_ST_SM2_values[] = {
    { "Floor1Button10", SSM_st_Floor1Button10_SM2},
    { "Floor1Button10", SSM_st_Floor1Button10_SM2},
    { "Floor1Button11", SSM_st_Floor1Button11_SM2},
    { "Floor1Button11", SSM_st_Floor1Button11_SM2},
    { "Floor1Button4", SSM_st_Floor1Button4_SM2},
    { "Floor1Button4", SSM_st_Floor1Button4_SM2},
};
const int _8_SSM_ST_SM2_nb_values = 6;

int _8_SSM_ST_SM2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_8_SSM_ST_SM2VTable != NULL
        && pSim_8_SSM_ST_SM2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_8_SSM_ST_SM2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_8_SSM_ST_SM2*)pValue, _8_SSM_ST_SM2_values, _8_SSM_ST_SM2_nb_values, pfnStrAppend, pStrObj); 
}

int check__8_SSM_ST_SM2_string(const char *str, char **endptr)
{
    static _8_SSM_ST_SM2 rTemp;
    return string_to__8_SSM_ST_SM2(str, (void*)&rTemp, endptr);
}

int string_to__8_SSM_ST_SM2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_8_SSM_ST_SM2VTable != NULL) {
        nRet = string_to_VTable(str, pSim_8_SSM_ST_SM2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _8_SSM_ST_SM2_values, _8_SSM_ST_SM2_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_8_SSM_ST_SM2*)pValue = (_8_SSM_ST_SM2)nTemp;
    }
    return nRet;
}

int is__8_SSM_ST_SM2_double_conversion_allowed()
{
    if (pSim_8_SSM_ST_SM2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_8_SSM_ST_SM2VTable);
    }
    return 1;
}

int _8_SSM_ST_SM2_to_double(const void *pValue, double *nValue)
{
    if (pSim_8_SSM_ST_SM2VTable != NULL) {
        return VTable_to_double(pValue, pSim_8_SSM_ST_SM2VTable, nValue);
    }
    *nValue = (double)*((_8_SSM_ST_SM2*)pValue);
    return 1;
}

int is__8_SSM_ST_SM2_long_conversion_allowed()
{
    if (pSim_8_SSM_ST_SM2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_8_SSM_ST_SM2VTable);
    }
    return 1;
}

int _8_SSM_ST_SM2_to_long(const void *pValue, long *nValue)
{
    if (pSim_8_SSM_ST_SM2VTable != NULL) {
        return VTable_to_long(pValue, pSim_8_SSM_ST_SM2VTable, nValue);
    }
    *nValue = (long)*((_8_SSM_ST_SM2*)pValue);
    return 1;
}

void compare__8_SSM_ST_SM2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_8_SSM_ST_SM2VTable != NULL
        && pSim_8_SSM_ST_SM2VTable->m_version >= Scv612
        && pSim_8_SSM_ST_SM2VTable->m_pfnCompare != NULL) {
        if (pSim_8_SSM_ST_SM2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_8_SSM_ST_SM2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_8_SSM_ST_SM2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_8_SSM_ST_SM2*)pValue1), (int)(*(_8_SSM_ST_SM2*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__8_SSM_ST_SM2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_8_SSM_ST_SM2_values, _8_SSM_ST_SM2_nb_values, pfnStrAppend, pStrObj);
}

int init__8_SSM_ST_SM2(void *pValue)
{
    *(_8_SSM_ST_SM2*)pValue = SSM_st_Floor1Button10_SM2;
    return 1;
}

int release__8_SSM_ST_SM2(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__8_SSM_ST_SM2(void *pToValue, const void *pFromValue)
{
    *((_8_SSM_ST_SM2*)pToValue) = *((_8_SSM_ST_SM2*)pFromValue);
    return 1;
}

SimTypeUtils _Type__8_SSM_ST_SM2_Utils = {
    _8_SSM_ST_SM2_to_string,
    check__8_SSM_ST_SM2_string,
    string_to__8_SSM_ST_SM2,
    is__8_SSM_ST_SM2_double_conversion_allowed,
    _8_SSM_ST_SM2_to_double,
    is__8_SSM_ST_SM2_long_conversion_allowed,
    _8_SSM_ST_SM2_to_long,
    compare__8_SSM_ST_SM2,
    get__8_SSM_ST_SM2_signature,
    init__8_SSM_ST_SM2,
    release__8_SSM_ST_SM2,
    copy__8_SSM_ST_SM2,
    sizeof(_8_SSM_ST_SM2)
};

/****************************************************************
 ** _9_SSM_TR_SM2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_9_SSM_TR_SM2VTable_defined
    extern struct SimTypeVTable *pSim_9_SSM_TR_SM2VTable;
  #else 
    struct SimTypeVTable *pSim_9_SSM_TR_SM2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_9_SSM_TR_SM2VTable;
#endif

static SimEnumValUtils _9_SSM_TR_SM2_values[] = {
    { "SSM_TR_no_trans_SM2", SSM_TR_no_trans_SM2},
    { "SSM_TR_no_trans_SM2", SSM_TR_no_trans_SM2},
    { "_32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2", _32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2},
    { "_32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2", _32_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM2},
    { "_31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2", _31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2},
    { "_31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2", _31_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM2},
    { "_29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2", _29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2},
    { "_29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2", _29_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM2},
    { "_30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2", _30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2},
    { "_30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2", _30_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM2},
};
const int _9_SSM_TR_SM2_nb_values = 10;

int _9_SSM_TR_SM2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_9_SSM_TR_SM2VTable != NULL
        && pSim_9_SSM_TR_SM2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_9_SSM_TR_SM2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_9_SSM_TR_SM2*)pValue, _9_SSM_TR_SM2_values, _9_SSM_TR_SM2_nb_values, pfnStrAppend, pStrObj); 
}

int check__9_SSM_TR_SM2_string(const char *str, char **endptr)
{
    static _9_SSM_TR_SM2 rTemp;
    return string_to__9_SSM_TR_SM2(str, (void*)&rTemp, endptr);
}

int string_to__9_SSM_TR_SM2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_9_SSM_TR_SM2VTable != NULL) {
        nRet = string_to_VTable(str, pSim_9_SSM_TR_SM2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _9_SSM_TR_SM2_values, _9_SSM_TR_SM2_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_9_SSM_TR_SM2*)pValue = (_9_SSM_TR_SM2)nTemp;
    }
    return nRet;
}

int is__9_SSM_TR_SM2_double_conversion_allowed()
{
    if (pSim_9_SSM_TR_SM2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_9_SSM_TR_SM2VTable);
    }
    return 1;
}

int _9_SSM_TR_SM2_to_double(const void *pValue, double *nValue)
{
    if (pSim_9_SSM_TR_SM2VTable != NULL) {
        return VTable_to_double(pValue, pSim_9_SSM_TR_SM2VTable, nValue);
    }
    *nValue = (double)*((_9_SSM_TR_SM2*)pValue);
    return 1;
}

int is__9_SSM_TR_SM2_long_conversion_allowed()
{
    if (pSim_9_SSM_TR_SM2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_9_SSM_TR_SM2VTable);
    }
    return 1;
}

int _9_SSM_TR_SM2_to_long(const void *pValue, long *nValue)
{
    if (pSim_9_SSM_TR_SM2VTable != NULL) {
        return VTable_to_long(pValue, pSim_9_SSM_TR_SM2VTable, nValue);
    }
    *nValue = (long)*((_9_SSM_TR_SM2*)pValue);
    return 1;
}

void compare__9_SSM_TR_SM2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_9_SSM_TR_SM2VTable != NULL
        && pSim_9_SSM_TR_SM2VTable->m_version >= Scv612
        && pSim_9_SSM_TR_SM2VTable->m_pfnCompare != NULL) {
        if (pSim_9_SSM_TR_SM2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_9_SSM_TR_SM2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_9_SSM_TR_SM2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_9_SSM_TR_SM2*)pValue1), (int)(*(_9_SSM_TR_SM2*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__9_SSM_TR_SM2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_9_SSM_TR_SM2_values, _9_SSM_TR_SM2_nb_values, pfnStrAppend, pStrObj);
}

int init__9_SSM_TR_SM2(void *pValue)
{
    *(_9_SSM_TR_SM2*)pValue = SSM_TR_no_trans_SM2;
    return 1;
}

int release__9_SSM_TR_SM2(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__9_SSM_TR_SM2(void *pToValue, const void *pFromValue)
{
    *((_9_SSM_TR_SM2*)pToValue) = *((_9_SSM_TR_SM2*)pFromValue);
    return 1;
}

SimTypeUtils _Type__9_SSM_TR_SM2_Utils = {
    _9_SSM_TR_SM2_to_string,
    check__9_SSM_TR_SM2_string,
    string_to__9_SSM_TR_SM2,
    is__9_SSM_TR_SM2_double_conversion_allowed,
    _9_SSM_TR_SM2_to_double,
    is__9_SSM_TR_SM2_long_conversion_allowed,
    _9_SSM_TR_SM2_to_long,
    compare__9_SSM_TR_SM2,
    get__9_SSM_TR_SM2_signature,
    init__9_SSM_TR_SM2,
    release__9_SSM_TR_SM2,
    copy__9_SSM_TR_SM2,
    sizeof(_9_SSM_TR_SM2)
};

/****************************************************************
 ** Direction 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimDirectionVTable_defined
    extern struct SimTypeVTable *pSimDirectionVTable;
  #else 
    struct SimTypeVTable *pSimDirectionVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimDirectionVTable;
#endif

static SimEnumValUtils Direction_values[] = {
    { "Up", Up},
    { "Up", Up},
    { "Down", Down},
    { "Down", Down},
    { "None", None},
    { "None", None},
};
const int Direction_nb_values = 6;

int Direction_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimDirectionVTable != NULL
        && pSimDirectionVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimDirectionVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(Direction*)pValue, Direction_values, Direction_nb_values, pfnStrAppend, pStrObj); 
}

int check_Direction_string(const char *str, char **endptr)
{
    static Direction rTemp;
    return string_to_Direction(str, (void*)&rTemp, endptr);
}

int string_to_Direction(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimDirectionVTable != NULL) {
        nRet = string_to_VTable(str, pSimDirectionVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, Direction_values, Direction_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(Direction*)pValue = (Direction)nTemp;
    }
    return nRet;
}

int is_Direction_double_conversion_allowed()
{
    if (pSimDirectionVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimDirectionVTable);
    }
    return 1;
}

int Direction_to_double(const void *pValue, double *nValue)
{
    if (pSimDirectionVTable != NULL) {
        return VTable_to_double(pValue, pSimDirectionVTable, nValue);
    }
    *nValue = (double)*((Direction*)pValue);
    return 1;
}

int is_Direction_long_conversion_allowed()
{
    if (pSimDirectionVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimDirectionVTable);
    }
    return 1;
}

int Direction_to_long(const void *pValue, long *nValue)
{
    if (pSimDirectionVTable != NULL) {
        return VTable_to_long(pValue, pSimDirectionVTable, nValue);
    }
    *nValue = (long)*((Direction*)pValue);
    return 1;
}

void compare_Direction(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimDirectionVTable != NULL
        && pSimDirectionVTable->m_version >= Scv612
        && pSimDirectionVTable->m_pfnCompare != NULL) {
        if (pSimDirectionVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimDirectionVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimDirectionVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(Direction*)pValue1), (int)(*(Direction*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_Direction_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(Direction_values, Direction_nb_values, pfnStrAppend, pStrObj);
}

int init_Direction(void *pValue)
{
    *(Direction*)pValue = Up;
    return 1;
}

int release_Direction(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_Direction(void *pToValue, const void *pFromValue)
{
    *((Direction*)pToValue) = *((Direction*)pFromValue);
    return 1;
}

SimTypeUtils _Type_Direction_Utils = {
    Direction_to_string,
    check_Direction_string,
    string_to_Direction,
    is_Direction_double_conversion_allowed,
    Direction_to_double,
    is_Direction_long_conversion_allowed,
    Direction_to_long,
    compare_Direction,
    get_Direction_signature,
    init_Direction,
    release_Direction,
    copy_Direction,
    sizeof(Direction)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBoolVTable_defined
    extern struct SimTypeVTable *pSimBoolVTable;
  #else 
    struct SimTypeVTable *pSimBoolVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBoolVTable;
#endif

int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, (void*)&rTemp, endptr);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_double(const void *pValue, double *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int is_kcg_bool_long_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("B", pStrObj);
}

int init_kcg_bool(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int release_kcg_bool(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_bool(void *pToValue, const void *pFromValue)
{
    *((kcg_bool*)pToValue) = *((kcg_bool*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_conversion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    init_kcg_bool,
    release_kcg_bool,
    copy_kcg_bool,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCharVTable_defined
    extern struct SimTypeVTable *pSimCharVTable;
  #else 
    struct SimTypeVTable *pSimCharVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCharVTable;
#endif

int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, (void*)&rTemp, endptr);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_double(const void *pValue, double *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_char*)pValue);
    return 1;
}

int is_kcg_char_long_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_char*)pValue);
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("C", pStrObj);
}

int init_kcg_char(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int release_kcg_char(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_char(void *pToValue, const void *pFromValue)
{
    *((kcg_char*)pToValue) = *((kcg_char*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_conversion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    init_kcg_char,
    release_kcg_char,
    copy_kcg_char,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_float32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat32VTable_defined
    extern struct SimTypeVTable *pSimFloat32VTable;
  #else 
    struct SimTypeVTable *pSimFloat32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat32VTable;
#endif

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float32_to_string(*((kcg_float32*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float32_string(const char *str, char **endptr)
{
    static kcg_float32 rTemp;
    return string_to_kcg_float32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_float32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat32VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceFloat;
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat32VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat32VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceFloat
               && pSimFloat32VTable->m_version >= Scv612
               && pSimFloat32VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F32", pStrObj);
}

int init_kcg_float32(void *pValue)
{
    *(kcg_float32*)pValue = 0.0;
    return 1;
}

int release_kcg_float32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float32(void *pToValue, const void *pFromValue)
{
    *((kcg_float32*)pToValue) = *((kcg_float32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float32_Utils = {
    kcg_float32_to_string,
    check_kcg_float32_string,
    string_to_kcg_float32,
    is_kcg_float32_double_conversion_allowed,
    kcg_float32_to_double,
    is_kcg_float32_long_conversion_allowed,
    kcg_float32_to_long,
    compare_kcg_float32,
    get_kcg_float32_signature,
    init_kcg_float32,
    release_kcg_float32,
    copy_kcg_float32,
    sizeof(kcg_float32)
};

/****************************************************************
 ** kcg_float64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat64VTable_defined
    extern struct SimTypeVTable *pSimFloat64VTable;
  #else 
    struct SimTypeVTable *pSimFloat64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat64VTable;
#endif

int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float64_to_string(*((kcg_float64*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float64_string(const char *str, char **endptr)
{
    static kcg_float64 rTemp;
    return string_to_kcg_float64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_float64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float64(str, (kcg_float64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float64_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float64*)pValue);
    return 1;
}

int is_kcg_float64_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float64*)pValue);
    return 1;
}

void compare_kcg_float64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat64VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat64VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimFloat64VTable->m_version >= Scv612
               && pSimFloat64VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float64(pResult, *((kcg_float64*)pValue1), *((kcg_float64*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
}

int init_kcg_float64(void *pValue)
{
    *(kcg_float64*)pValue = 0.0;
    return 1;
}

int release_kcg_float64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float64(void *pToValue, const void *pFromValue)
{
    *((kcg_float64*)pToValue) = *((kcg_float64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float64_Utils = {
    kcg_float64_to_string,
    check_kcg_float64_string,
    string_to_kcg_float64,
    is_kcg_float64_double_conversion_allowed,
    kcg_float64_to_double,
    is_kcg_float64_long_conversion_allowed,
    kcg_float64_to_long,
    compare_kcg_float64,
    get_kcg_float64_signature,
    init_kcg_float64,
    release_kcg_float64,
    copy_kcg_float64,
    sizeof(kcg_float64)
};

/****************************************************************
 ** kcg_int16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt16VTable_defined
    extern struct SimTypeVTable *pSimInt16VTable;
  #else 
    struct SimTypeVTable *pSimInt16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt16VTable;
#endif

int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int16_to_string(*((kcg_int16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int16_string(const char *str, char **endptr)
{
    static kcg_int16 rTemp;
    return string_to_kcg_int16(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt16VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int16(str, (kcg_int16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int16_double_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_double(const void *pValue, double *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_double(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (double)*((kcg_int16*)pValue);
    return 1;
}

int is_kcg_int16_long_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_long(const void *pValue, long *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_long(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (long)*((kcg_int16*)pValue);
    return 1;
}

void compare_kcg_int16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_version >= Scv612
        && pSimInt16VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int16(pResult, *((kcg_int16*)pValue1), *((kcg_int16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I16", pStrObj);
}

int init_kcg_int16(void *pValue)
{
    *(kcg_int16*)pValue = 0;
    return 1;
}

int release_kcg_int16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int16(void *pToValue, const void *pFromValue)
{
    *((kcg_int16*)pToValue) = *((kcg_int16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int16_Utils = {
    kcg_int16_to_string,
    check_kcg_int16_string,
    string_to_kcg_int16,
    is_kcg_int16_double_conversion_allowed,
    kcg_int16_to_double,
    is_kcg_int16_long_conversion_allowed,
    kcg_int16_to_long,
    compare_kcg_int16,
    get_kcg_int16_signature,
    init_kcg_int16,
    release_kcg_int16,
    copy_kcg_int16,
    sizeof(kcg_int16)
};

/****************************************************************
 ** kcg_int32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt32VTable_defined
    extern struct SimTypeVTable *pSimInt32VTable;
  #else 
    struct SimTypeVTable *pSimInt32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt32VTable;
#endif

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int32_to_string(*((kcg_int32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int32_string(const char *str, char **endptr)
{
    static kcg_int32 rTemp;
    return string_to_kcg_int32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt32VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int32(str, (kcg_int32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int32_double_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_double(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_long(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_version >= Scv612
        && pSimInt32VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int32(pResult, *((kcg_int32*)pValue1), *((kcg_int32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I32", pStrObj);
}

int init_kcg_int32(void *pValue)
{
    *(kcg_int32*)pValue = 0;
    return 1;
}

int release_kcg_int32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int32(void *pToValue, const void *pFromValue)
{
    *((kcg_int32*)pToValue) = *((kcg_int32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int32_Utils = {
    kcg_int32_to_string,
    check_kcg_int32_string,
    string_to_kcg_int32,
    is_kcg_int32_double_conversion_allowed,
    kcg_int32_to_double,
    is_kcg_int32_long_conversion_allowed,
    kcg_int32_to_long,
    compare_kcg_int32,
    get_kcg_int32_signature,
    init_kcg_int32,
    release_kcg_int32,
    copy_kcg_int32,
    sizeof(kcg_int32)
};

/****************************************************************
 ** kcg_int64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt64VTable_defined
    extern struct SimTypeVTable *pSimInt64VTable;
  #else 
    struct SimTypeVTable *pSimInt64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt64VTable;
#endif

int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int64_to_string(*((kcg_int64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int64_string(const char *str, char **endptr)
{
    static kcg_int64 rTemp;
    return string_to_kcg_int64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int64(str, (kcg_int64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int64_double_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int64*)pValue);
    return 1;
}

int is_kcg_int64_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int64*)pValue);
    return 1;
}

void compare_kcg_int64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int64(pResult, *((kcg_int64*)pValue1), *((kcg_int64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I64", pStrObj);
}

int init_kcg_int64(void *pValue)
{
    *(kcg_int64*)pValue = 0;
    return 1;
}

int release_kcg_int64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int64(void *pToValue, const void *pFromValue)
{
    *((kcg_int64*)pToValue) = *((kcg_int64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int64_Utils = {
    kcg_int64_to_string,
    check_kcg_int64_string,
    string_to_kcg_int64,
    is_kcg_int64_double_conversion_allowed,
    kcg_int64_to_double,
    is_kcg_int64_long_conversion_allowed,
    kcg_int64_to_long,
    compare_kcg_int64,
    get_kcg_int64_signature,
    init_kcg_int64,
    release_kcg_int64,
    copy_kcg_int64,
    sizeof(kcg_int64)
};

/****************************************************************
 ** kcg_int8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt8VTable_defined
    extern struct SimTypeVTable *pSimInt8VTable;
  #else 
    struct SimTypeVTable *pSimInt8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt8VTable;
#endif

int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int8_to_string(*((kcg_int8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int8_string(const char *str, char **endptr)
{
    static kcg_int8 rTemp;
    return string_to_kcg_int8(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt8VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int8(str, (kcg_int8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int8_double_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_double(const void *pValue, double *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_double(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (double)*((kcg_int8*)pValue);
    return 1;
}

int is_kcg_int8_long_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_long(const void *pValue, long *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_long(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (long)*((kcg_int8*)pValue);
    return 1;
}

void compare_kcg_int8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_version >= Scv612
        && pSimInt8VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int8(pResult, *((kcg_int8*)pValue1), *((kcg_int8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I8", pStrObj);
}

int init_kcg_int8(void *pValue)
{
    *(kcg_int8*)pValue = 0;
    return 1;
}

int release_kcg_int8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int8(void *pToValue, const void *pFromValue)
{
    *((kcg_int8*)pToValue) = *((kcg_int8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int8_Utils = {
    kcg_int8_to_string,
    check_kcg_int8_string,
    string_to_kcg_int8,
    is_kcg_int8_double_conversion_allowed,
    kcg_int8_to_double,
    is_kcg_int8_long_conversion_allowed,
    kcg_int8_to_long,
    compare_kcg_int8,
    get_kcg_int8_signature,
    init_kcg_int8,
    release_kcg_int8,
    copy_kcg_int8,
    sizeof(kcg_int8)
};

/****************************************************************
 ** kcg_size 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSizeVTable_defined
    extern struct SimTypeVTable *pSimSizeVTable;
  #else 
    struct SimTypeVTable *pSimSizeVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSizeVTable;
#endif

int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_size_to_string(*((kcg_size*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_size_string(const char *str, char **endptr)
{
    static kcg_size rTemp;
    return string_to_kcg_size(str, (void*)&rTemp, endptr);
}

int string_to_kcg_size(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static size_t rTemp;
    skip_whitespace(str);
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimSizeVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimSizeVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_size*)pValue = (kcg_size)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_size(str, (kcg_size*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_size_double_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_double(const void *pValue, double *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_double(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_size*)pValue);
    return 1;
}

int is_kcg_size_long_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_long(const void *pValue, long *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_long(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_size*)pValue);
    return 1;
}

void compare_kcg_size(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_version >= Scv612
        && pSimSizeVTable->m_pfnCompare != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimSizeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value1 = (size_t)(*(const kcg_size*)pValue1);
            size_t value2 = (size_t)(*(const kcg_size*)pValue2);
            pSimSizeVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_size(pResult, *((kcg_size*)pValue1), *((kcg_size*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("S", pStrObj);
}

int init_kcg_size(void *pValue)
{
    *(kcg_size*)pValue = 0;
    return 1;
}

int release_kcg_size(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_size(void *pToValue, const void *pFromValue)
{
    *((kcg_size*)pToValue) = *((kcg_size*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_size_Utils = {
    kcg_size_to_string,
    check_kcg_size_string,
    string_to_kcg_size,
    is_kcg_size_double_conversion_allowed,
    kcg_size_to_double,
    is_kcg_size_long_conversion_allowed,
    kcg_size_to_long,
    compare_kcg_size,
    get_kcg_size_signature,
    init_kcg_size,
    release_kcg_size,
    copy_kcg_size,
    sizeof(kcg_size)
};

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint16VTable_defined
    extern struct SimTypeVTable *pSimUint16VTable;
  #else 
    struct SimTypeVTable *pSimUint16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint16VTable;
#endif

int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint16_to_string(*((kcg_uint16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint16_string(const char *str, char **endptr)
{
    static kcg_uint16 rTemp;
    return string_to_kcg_uint16(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint16VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint16(str, (kcg_uint16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint16_double_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_double(const void *pValue, double *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_double(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (double)*((kcg_uint16*)pValue);
    return 1;
}

int is_kcg_uint16_long_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_long(const void *pValue, long *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_long(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (long)*((kcg_uint16*)pValue);
    return 1;
}

void compare_kcg_uint16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_version >= Scv612
        && pSimUint16VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint16(pResult, *((kcg_uint16*)pValue1), *((kcg_uint16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI16", pStrObj);
}

int init_kcg_uint16(void *pValue)
{
    *(kcg_uint16*)pValue = 0;
    return 1;
}

int release_kcg_uint16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint16(void *pToValue, const void *pFromValue)
{
    *((kcg_uint16*)pToValue) = *((kcg_uint16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint16_Utils = {
    kcg_uint16_to_string,
    check_kcg_uint16_string,
    string_to_kcg_uint16,
    is_kcg_uint16_double_conversion_allowed,
    kcg_uint16_to_double,
    is_kcg_uint16_long_conversion_allowed,
    kcg_uint16_to_long,
    compare_kcg_uint16,
    get_kcg_uint16_signature,
    init_kcg_uint16,
    release_kcg_uint16,
    copy_kcg_uint16,
    sizeof(kcg_uint16)
};

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint32VTable_defined
    extern struct SimTypeVTable *pSimUint32VTable;
  #else 
    struct SimTypeVTable *pSimUint32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint32VTable;
#endif

int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint32_to_string(*((kcg_uint32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint32_string(const char *str, char **endptr)
{
    static kcg_uint32 rTemp;
    return string_to_kcg_uint32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint32VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint32(str, (kcg_uint32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint32_double_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_double(const void *pValue, double *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_double(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (double)*((kcg_uint32*)pValue);
    return 1;
}

int is_kcg_uint32_long_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_long(const void *pValue, long *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_long(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (long)*((kcg_uint32*)pValue);
    return 1;
}

void compare_kcg_uint32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_version >= Scv612
        && pSimUint32VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint32(pResult, *((kcg_uint32*)pValue1), *((kcg_uint32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI32", pStrObj);
}

int init_kcg_uint32(void *pValue)
{
    *(kcg_uint32*)pValue = 0;
    return 1;
}

int release_kcg_uint32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint32(void *pToValue, const void *pFromValue)
{
    *((kcg_uint32*)pToValue) = *((kcg_uint32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint32_Utils = {
    kcg_uint32_to_string,
    check_kcg_uint32_string,
    string_to_kcg_uint32,
    is_kcg_uint32_double_conversion_allowed,
    kcg_uint32_to_double,
    is_kcg_uint32_long_conversion_allowed,
    kcg_uint32_to_long,
    compare_kcg_uint32,
    get_kcg_uint32_signature,
    init_kcg_uint32,
    release_kcg_uint32,
    copy_kcg_uint32,
    sizeof(kcg_uint32)
};

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint64VTable_defined
    extern struct SimTypeVTable *pSimUint64VTable;
  #else 
    struct SimTypeVTable *pSimUint64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint64VTable;
#endif

int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint64_to_string(*((kcg_uint64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint64_string(const char *str, char **endptr)
{
    static kcg_uint64 rTemp;
    return string_to_kcg_uint64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint64VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint64(str, (kcg_uint64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint64_double_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_double(const void *pValue, double *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_double(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (double)*((kcg_uint64*)pValue);
    return 1;
}

int is_kcg_uint64_long_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_long(const void *pValue, long *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_long(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (long)*((kcg_uint64*)pValue);
    return 1;
}

void compare_kcg_uint64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_version >= Scv612
        && pSimUint64VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint64(pResult, *((kcg_uint64*)pValue1), *((kcg_uint64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI64", pStrObj);
}

int init_kcg_uint64(void *pValue)
{
    *(kcg_uint64*)pValue = 0;
    return 1;
}

int release_kcg_uint64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint64(void *pToValue, const void *pFromValue)
{
    *((kcg_uint64*)pToValue) = *((kcg_uint64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint64_Utils = {
    kcg_uint64_to_string,
    check_kcg_uint64_string,
    string_to_kcg_uint64,
    is_kcg_uint64_double_conversion_allowed,
    kcg_uint64_to_double,
    is_kcg_uint64_long_conversion_allowed,
    kcg_uint64_to_long,
    compare_kcg_uint64,
    get_kcg_uint64_signature,
    init_kcg_uint64,
    release_kcg_uint64,
    copy_kcg_uint64,
    sizeof(kcg_uint64)
};

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint8VTable_defined
    extern struct SimTypeVTable *pSimUint8VTable;
  #else 
    struct SimTypeVTable *pSimUint8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint8VTable;
#endif

int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint8_to_string(*((kcg_uint8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint8_string(const char *str, char **endptr)
{
    static kcg_uint8 rTemp;
    return string_to_kcg_uint8(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint8VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint8(str, (kcg_uint8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint8_double_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_double(const void *pValue, double *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_double(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (double)*((kcg_uint8*)pValue);
    return 1;
}

int is_kcg_uint8_long_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_long(const void *pValue, long *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_long(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (long)*((kcg_uint8*)pValue);
    return 1;
}

void compare_kcg_uint8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_version >= Scv612
        && pSimUint8VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint8(pResult, *((kcg_uint8*)pValue1), *((kcg_uint8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI8", pStrObj);
}

int init_kcg_uint8(void *pValue)
{
    *(kcg_uint8*)pValue = 0;
    return 1;
}

int release_kcg_uint8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint8(void *pToValue, const void *pFromValue)
{
    *((kcg_uint8*)pToValue) = *((kcg_uint8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint8_Utils = {
    kcg_uint8_to_string,
    check_kcg_uint8_string,
    string_to_kcg_uint8,
    is_kcg_uint8_double_conversion_allowed,
    kcg_uint8_to_double,
    is_kcg_uint8_long_conversion_allowed,
    kcg_uint8_to_long,
    compare_kcg_uint8,
    get_kcg_uint8_signature,
    init_kcg_uint8,
    release_kcg_uint8,
    copy_kcg_uint8,
    sizeof(kcg_uint8)
};

/****************************************************************
 ** PDirection 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimPDirectionVTable_defined
    extern struct SimTypeVTable *pSimPDirectionVTable;
  #else 
    struct SimTypeVTable *pSimPDirectionVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimPDirectionVTable;
#endif

static SimEnumValUtils PDirection_values[] = {
    { "Upward", Upward},
    { "Upward", Upward},
    { "Downward", Downward},
    { "Downward", Downward},
    { "Stop", Stop},
    { "Stop", Stop},
};
const int PDirection_nb_values = 6;

int PDirection_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimPDirectionVTable != NULL
        && pSimPDirectionVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimPDirectionVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(PDirection*)pValue, PDirection_values, PDirection_nb_values, pfnStrAppend, pStrObj); 
}

int check_PDirection_string(const char *str, char **endptr)
{
    static PDirection rTemp;
    return string_to_PDirection(str, (void*)&rTemp, endptr);
}

int string_to_PDirection(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimPDirectionVTable != NULL) {
        nRet = string_to_VTable(str, pSimPDirectionVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, PDirection_values, PDirection_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(PDirection*)pValue = (PDirection)nTemp;
    }
    return nRet;
}

int is_PDirection_double_conversion_allowed()
{
    if (pSimPDirectionVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimPDirectionVTable);
    }
    return 1;
}

int PDirection_to_double(const void *pValue, double *nValue)
{
    if (pSimPDirectionVTable != NULL) {
        return VTable_to_double(pValue, pSimPDirectionVTable, nValue);
    }
    *nValue = (double)*((PDirection*)pValue);
    return 1;
}

int is_PDirection_long_conversion_allowed()
{
    if (pSimPDirectionVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimPDirectionVTable);
    }
    return 1;
}

int PDirection_to_long(const void *pValue, long *nValue)
{
    if (pSimPDirectionVTable != NULL) {
        return VTable_to_long(pValue, pSimPDirectionVTable, nValue);
    }
    *nValue = (long)*((PDirection*)pValue);
    return 1;
}

void compare_PDirection(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimPDirectionVTable != NULL
        && pSimPDirectionVTable->m_version >= Scv612
        && pSimPDirectionVTable->m_pfnCompare != NULL) {
        if (pSimPDirectionVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimPDirectionVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimPDirectionVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(PDirection*)pValue1), (int)(*(PDirection*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_PDirection_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(PDirection_values, PDirection_nb_values, pfnStrAppend, pStrObj);
}

int init_PDirection(void *pValue)
{
    *(PDirection*)pValue = Upward;
    return 1;
}

int release_PDirection(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_PDirection(void *pToValue, const void *pFromValue)
{
    *((PDirection*)pToValue) = *((PDirection*)pFromValue);
    return 1;
}

SimTypeUtils _Type_PDirection_Utils = {
    PDirection_to_string,
    check_PDirection_string,
    string_to_PDirection,
    is_PDirection_double_conversion_allowed,
    PDirection_to_double,
    is_PDirection_long_conversion_allowed,
    PDirection_to_long,
    compare_PDirection,
    get_PDirection_signature,
    init_PDirection,
    release_PDirection,
    copy_PDirection,
    sizeof(PDirection)
};

/****************************************************************
 ** SSM_ST_PlanningModule 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_PlanningModuleVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_PlanningModuleVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_PlanningModuleVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_PlanningModuleVTable;
#endif

static SimEnumValUtils SSM_ST_PlanningModule_values[] = {
    { "Floor1", SSM_st_Floor1_PlanningModule},
    { "Floor1", SSM_st_Floor1_PlanningModule},
    { "Movin1To2", SSM_st_Movin1To2_PlanningModule},
    { "Movin1To2", SSM_st_Movin1To2_PlanningModule},
    { "Floor2", SSM_st_Floor2_PlanningModule},
    { "Floor2", SSM_st_Floor2_PlanningModule},
    { "Floor3", SSM_st_Floor3_PlanningModule},
    { "Floor3", SSM_st_Floor3_PlanningModule},
    { "Movin1To3", SSM_st_Movin1To3_PlanningModule},
    { "Movin1To3", SSM_st_Movin1To3_PlanningModule},
    { "Moving2To3", SSM_st_Moving2To3_PlanningModule},
    { "Moving2To3", SSM_st_Moving2To3_PlanningModule},
    { "Moving3To1", SSM_st_Moving3To1_PlanningModule},
    { "Moving3To1", SSM_st_Moving3To1_PlanningModule},
    { "Moving3To2", SSM_st_Moving3To2_PlanningModule},
    { "Moving3To2", SSM_st_Moving3To2_PlanningModule},
    { "Movin2To1", SSM_st_Movin2To1_PlanningModule},
    { "Movin2To1", SSM_st_Movin2To1_PlanningModule},
    { "Stop", SSM_st_Stop_PlanningModule},
    { "Stop", SSM_st_Stop_PlanningModule},
};
const int SSM_ST_PlanningModule_nb_values = 20;

int SSM_ST_PlanningModule_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_PlanningModuleVTable != NULL
        && pSimSSM_ST_PlanningModuleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_PlanningModuleVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_PlanningModule*)pValue, SSM_ST_PlanningModule_values, SSM_ST_PlanningModule_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_PlanningModule_string(const char *str, char **endptr)
{
    static SSM_ST_PlanningModule rTemp;
    return string_to_SSM_ST_PlanningModule(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_PlanningModule(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_PlanningModuleVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_PlanningModuleVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_PlanningModule_values, SSM_ST_PlanningModule_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_PlanningModule*)pValue = (SSM_ST_PlanningModule)nTemp;
    }
    return nRet;
}

int is_SSM_ST_PlanningModule_double_conversion_allowed()
{
    if (pSimSSM_ST_PlanningModuleVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_PlanningModuleVTable);
    }
    return 1;
}

int SSM_ST_PlanningModule_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_PlanningModuleVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_PlanningModuleVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_PlanningModule*)pValue);
    return 1;
}

int is_SSM_ST_PlanningModule_long_conversion_allowed()
{
    if (pSimSSM_ST_PlanningModuleVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_PlanningModuleVTable);
    }
    return 1;
}

int SSM_ST_PlanningModule_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_PlanningModuleVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_PlanningModuleVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_PlanningModule*)pValue);
    return 1;
}

void compare_SSM_ST_PlanningModule(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_PlanningModuleVTable != NULL
        && pSimSSM_ST_PlanningModuleVTable->m_version >= Scv612
        && pSimSSM_ST_PlanningModuleVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_PlanningModuleVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_PlanningModuleVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_PlanningModuleVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_PlanningModule*)pValue1), (int)(*(SSM_ST_PlanningModule*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_PlanningModule_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_PlanningModule_values, SSM_ST_PlanningModule_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_PlanningModule(void *pValue)
{
    *(SSM_ST_PlanningModule*)pValue = SSM_st_Floor1_PlanningModule;
    return 1;
}

int release_SSM_ST_PlanningModule(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_PlanningModule(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_PlanningModule*)pToValue) = *((SSM_ST_PlanningModule*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_PlanningModule_Utils = {
    SSM_ST_PlanningModule_to_string,
    check_SSM_ST_PlanningModule_string,
    string_to_SSM_ST_PlanningModule,
    is_SSM_ST_PlanningModule_double_conversion_allowed,
    SSM_ST_PlanningModule_to_double,
    is_SSM_ST_PlanningModule_long_conversion_allowed,
    SSM_ST_PlanningModule_to_long,
    compare_SSM_ST_PlanningModule,
    get_SSM_ST_PlanningModule_signature,
    init_SSM_ST_PlanningModule,
    release_SSM_ST_PlanningModule,
    copy_SSM_ST_PlanningModule,
    sizeof(SSM_ST_PlanningModule)
};

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM1VTable;
#endif

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "Initial", _38_SSM_st_Initial_SM1},
    { "Initial", _38_SSM_st_Initial_SM1},
    { "MoveUp", SSM_st_MoveUp_SM1},
    { "MoveUp", SSM_st_MoveUp_SM1},
    { "MoveDown", SSM_st_MoveDown_SM1},
    { "MoveDown", SSM_st_MoveDown_SM1},
    { "StopMotor", SSM_st_StopMotor_SM1},
    { "StopMotor", SSM_st_StopMotor_SM1},
};
const int SSM_ST_SM1_nb_values = 8;

int SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM1 rTemp;
    return string_to_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = (SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM1*)pValue);
    return 1;
}

int is_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM1*)pValue);
    return 1;
}

void compare_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM1*)pValue1), (int)(*(SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM1(void *pValue)
{
    *(SSM_ST_SM1*)pValue = _38_SSM_st_Initial_SM1;
    return 1;
}

int release_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM1*)pToValue) = *((SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM1_Utils = {
    SSM_ST_SM1_to_string,
    check_SSM_ST_SM1_string,
    string_to_SSM_ST_SM1,
    is_SSM_ST_SM1_double_conversion_allowed,
    SSM_ST_SM1_to_double,
    is_SSM_ST_SM1_long_conversion_allowed,
    SSM_ST_SM1_to_long,
    compare_SSM_ST_SM1,
    get_SSM_ST_SM1_signature,
    init_SSM_ST_SM1,
    release_SSM_ST_SM1,
    copy_SSM_ST_SM1,
    sizeof(SSM_ST_SM1)
};

/****************************************************************
 ** SSM_ST_SM2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM2VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM2VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM2VTable;
#endif

static SimEnumValUtils SSM_ST_SM2_values[] = {
    { "State11", SSM_st_State11_SM2},
    { "State11", SSM_st_State11_SM2},
    { "State12", SSM_st_State12_SM2},
    { "State12", SSM_st_State12_SM2},
    { "State13", SSM_st_State13_SM2},
    { "State13", SSM_st_State13_SM2},
    { "State14", SSM_st_State14_SM2},
    { "State14", SSM_st_State14_SM2},
    { "State17", SSM_st_State17_SM2},
    { "State17", SSM_st_State17_SM2},
    { "State16", SSM_st_State16_SM2},
    { "State16", SSM_st_State16_SM2},
    { "State15", SSM_st_State15_SM2},
    { "State15", SSM_st_State15_SM2},
};
const int SSM_ST_SM2_nb_values = 14;

int SSM_ST_SM2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM2VTable != NULL
        && pSimSSM_ST_SM2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM2*)pValue, SSM_ST_SM2_values, SSM_ST_SM2_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM2_string(const char *str, char **endptr)
{
    static SSM_ST_SM2 rTemp;
    return string_to_SSM_ST_SM2(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM2VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM2_values, SSM_ST_SM2_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM2*)pValue = (SSM_ST_SM2)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM2_double_conversion_allowed()
{
    if (pSimSSM_ST_SM2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM2VTable);
    }
    return 1;
}

int SSM_ST_SM2_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM2VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM2VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM2*)pValue);
    return 1;
}

int is_SSM_ST_SM2_long_conversion_allowed()
{
    if (pSimSSM_ST_SM2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM2VTable);
    }
    return 1;
}

int SSM_ST_SM2_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM2VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM2VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM2*)pValue);
    return 1;
}

void compare_SSM_ST_SM2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM2VTable != NULL
        && pSimSSM_ST_SM2VTable->m_version >= Scv612
        && pSimSSM_ST_SM2VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM2*)pValue1), (int)(*(SSM_ST_SM2*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM2_values, SSM_ST_SM2_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM2(void *pValue)
{
    *(SSM_ST_SM2*)pValue = SSM_st_State11_SM2;
    return 1;
}

int release_SSM_ST_SM2(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM2(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM2*)pToValue) = *((SSM_ST_SM2*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM2_Utils = {
    SSM_ST_SM2_to_string,
    check_SSM_ST_SM2_string,
    string_to_SSM_ST_SM2,
    is_SSM_ST_SM2_double_conversion_allowed,
    SSM_ST_SM2_to_double,
    is_SSM_ST_SM2_long_conversion_allowed,
    SSM_ST_SM2_to_long,
    compare_SSM_ST_SM2,
    get_SSM_ST_SM2_signature,
    init_SSM_ST_SM2,
    release_SSM_ST_SM2,
    copy_SSM_ST_SM2,
    sizeof(SSM_ST_SM2)
};

/****************************************************************
 ** SSM_ST_SM3 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM3VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM3VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM3VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM3VTable;
#endif

static SimEnumValUtils SSM_ST_SM3_values[] = {
    { "Floor1Button10", SSM_st_Floor1Button10_SM3},
    { "Floor1Button10", SSM_st_Floor1Button10_SM3},
    { "Floor1Button11", SSM_st_Floor1Button11_SM3},
    { "Floor1Button11", SSM_st_Floor1Button11_SM3},
    { "Floor1Button4", SSM_st_Floor1Button4_SM3},
    { "Floor1Button4", SSM_st_Floor1Button4_SM3},
};
const int SSM_ST_SM3_nb_values = 6;

int SSM_ST_SM3_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM3VTable != NULL
        && pSimSSM_ST_SM3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM3VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM3*)pValue, SSM_ST_SM3_values, SSM_ST_SM3_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM3_string(const char *str, char **endptr)
{
    static SSM_ST_SM3 rTemp;
    return string_to_SSM_ST_SM3(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM3(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM3VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM3VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM3_values, SSM_ST_SM3_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM3*)pValue = (SSM_ST_SM3)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM3_double_conversion_allowed()
{
    if (pSimSSM_ST_SM3VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM3VTable);
    }
    return 1;
}

int SSM_ST_SM3_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM3VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM3VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM3*)pValue);
    return 1;
}

int is_SSM_ST_SM3_long_conversion_allowed()
{
    if (pSimSSM_ST_SM3VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM3VTable);
    }
    return 1;
}

int SSM_ST_SM3_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM3VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM3VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM3*)pValue);
    return 1;
}

void compare_SSM_ST_SM3(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM3VTable != NULL
        && pSimSSM_ST_SM3VTable->m_version >= Scv612
        && pSimSSM_ST_SM3VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM3VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM3*)pValue1), (int)(*(SSM_ST_SM3*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM3_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM3_values, SSM_ST_SM3_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM3(void *pValue)
{
    *(SSM_ST_SM3*)pValue = SSM_st_Floor1Button10_SM3;
    return 1;
}

int release_SSM_ST_SM3(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM3(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM3*)pToValue) = *((SSM_ST_SM3*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM3_Utils = {
    SSM_ST_SM3_to_string,
    check_SSM_ST_SM3_string,
    string_to_SSM_ST_SM3,
    is_SSM_ST_SM3_double_conversion_allowed,
    SSM_ST_SM3_to_double,
    is_SSM_ST_SM3_long_conversion_allowed,
    SSM_ST_SM3_to_long,
    compare_SSM_ST_SM3,
    get_SSM_ST_SM3_signature,
    init_SSM_ST_SM3,
    release_SSM_ST_SM3,
    copy_SSM_ST_SM3,
    sizeof(SSM_ST_SM3)
};

/****************************************************************
 ** SSM_ST_SM4 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM4VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM4VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM4VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM4VTable;
#endif

static SimEnumValUtils SSM_ST_SM4_values[] = {
    { "Floor1Button10", SSM_st_Floor1Button10_SM4},
    { "Floor1Button10", SSM_st_Floor1Button10_SM4},
    { "Floor1Button11", SSM_st_Floor1Button11_SM4},
    { "Floor1Button11", SSM_st_Floor1Button11_SM4},
    { "Floor1Button4", SSM_st_Floor1Button4_SM4},
    { "Floor1Button4", SSM_st_Floor1Button4_SM4},
};
const int SSM_ST_SM4_nb_values = 6;

int SSM_ST_SM4_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM4VTable != NULL
        && pSimSSM_ST_SM4VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM4VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM4*)pValue, SSM_ST_SM4_values, SSM_ST_SM4_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM4_string(const char *str, char **endptr)
{
    static SSM_ST_SM4 rTemp;
    return string_to_SSM_ST_SM4(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM4(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM4VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM4VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM4_values, SSM_ST_SM4_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM4*)pValue = (SSM_ST_SM4)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM4_double_conversion_allowed()
{
    if (pSimSSM_ST_SM4VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM4VTable);
    }
    return 1;
}

int SSM_ST_SM4_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM4VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM4VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM4*)pValue);
    return 1;
}

int is_SSM_ST_SM4_long_conversion_allowed()
{
    if (pSimSSM_ST_SM4VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM4VTable);
    }
    return 1;
}

int SSM_ST_SM4_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM4VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM4VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM4*)pValue);
    return 1;
}

void compare_SSM_ST_SM4(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM4VTable != NULL
        && pSimSSM_ST_SM4VTable->m_version >= Scv612
        && pSimSSM_ST_SM4VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM4VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM4VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM4VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM4*)pValue1), (int)(*(SSM_ST_SM4*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM4_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM4_values, SSM_ST_SM4_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM4(void *pValue)
{
    *(SSM_ST_SM4*)pValue = SSM_st_Floor1Button10_SM4;
    return 1;
}

int release_SSM_ST_SM4(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM4(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM4*)pToValue) = *((SSM_ST_SM4*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM4_Utils = {
    SSM_ST_SM4_to_string,
    check_SSM_ST_SM4_string,
    string_to_SSM_ST_SM4,
    is_SSM_ST_SM4_double_conversion_allowed,
    SSM_ST_SM4_to_double,
    is_SSM_ST_SM4_long_conversion_allowed,
    SSM_ST_SM4_to_long,
    compare_SSM_ST_SM4,
    get_SSM_ST_SM4_signature,
    init_SSM_ST_SM4,
    release_SSM_ST_SM4,
    copy_SSM_ST_SM4,
    sizeof(SSM_ST_SM4)
};

/****************************************************************
 ** SSM_ST_SM5 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM5VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM5VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM5VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM5VTable;
#endif

static SimEnumValUtils SSM_ST_SM5_values[] = {
    { "Floor1Button10", SSM_st_Floor1Button10_SM5},
    { "Floor1Button10", SSM_st_Floor1Button10_SM5},
    { "Floor1Button11", SSM_st_Floor1Button11_SM5},
    { "Floor1Button11", SSM_st_Floor1Button11_SM5},
    { "Floor1Button4", SSM_st_Floor1Button4_SM5},
    { "Floor1Button4", SSM_st_Floor1Button4_SM5},
};
const int SSM_ST_SM5_nb_values = 6;

int SSM_ST_SM5_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM5VTable != NULL
        && pSimSSM_ST_SM5VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM5VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM5*)pValue, SSM_ST_SM5_values, SSM_ST_SM5_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM5_string(const char *str, char **endptr)
{
    static SSM_ST_SM5 rTemp;
    return string_to_SSM_ST_SM5(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM5(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM5VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM5VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM5_values, SSM_ST_SM5_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM5*)pValue = (SSM_ST_SM5)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM5_double_conversion_allowed()
{
    if (pSimSSM_ST_SM5VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM5VTable);
    }
    return 1;
}

int SSM_ST_SM5_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM5VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM5VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM5*)pValue);
    return 1;
}

int is_SSM_ST_SM5_long_conversion_allowed()
{
    if (pSimSSM_ST_SM5VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM5VTable);
    }
    return 1;
}

int SSM_ST_SM5_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM5VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM5VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM5*)pValue);
    return 1;
}

void compare_SSM_ST_SM5(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM5VTable != NULL
        && pSimSSM_ST_SM5VTable->m_version >= Scv612
        && pSimSSM_ST_SM5VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM5VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM5VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM5VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM5*)pValue1), (int)(*(SSM_ST_SM5*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM5_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM5_values, SSM_ST_SM5_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM5(void *pValue)
{
    *(SSM_ST_SM5*)pValue = SSM_st_Floor1Button10_SM5;
    return 1;
}

int release_SSM_ST_SM5(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM5(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM5*)pToValue) = *((SSM_ST_SM5*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM5_Utils = {
    SSM_ST_SM5_to_string,
    check_SSM_ST_SM5_string,
    string_to_SSM_ST_SM5,
    is_SSM_ST_SM5_double_conversion_allowed,
    SSM_ST_SM5_to_double,
    is_SSM_ST_SM5_long_conversion_allowed,
    SSM_ST_SM5_to_long,
    compare_SSM_ST_SM5,
    get_SSM_ST_SM5_signature,
    init_SSM_ST_SM5,
    release_SSM_ST_SM5,
    copy_SSM_ST_SM5,
    sizeof(SSM_ST_SM5)
};

/****************************************************************
 ** SSM_ST_SM6 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM6VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM6VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM6VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM6VTable;
#endif

static SimEnumValUtils SSM_ST_SM6_values[] = {
    { "Floor1Button10", SSM_st_Floor1Button10_SM6},
    { "Floor1Button10", SSM_st_Floor1Button10_SM6},
    { "Floor1Button11", SSM_st_Floor1Button11_SM6},
    { "Floor1Button11", SSM_st_Floor1Button11_SM6},
    { "Floor1Button4", SSM_st_Floor1Button4_SM6},
    { "Floor1Button4", SSM_st_Floor1Button4_SM6},
};
const int SSM_ST_SM6_nb_values = 6;

int SSM_ST_SM6_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM6VTable != NULL
        && pSimSSM_ST_SM6VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM6VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM6*)pValue, SSM_ST_SM6_values, SSM_ST_SM6_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM6_string(const char *str, char **endptr)
{
    static SSM_ST_SM6 rTemp;
    return string_to_SSM_ST_SM6(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM6(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM6VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM6VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM6_values, SSM_ST_SM6_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM6*)pValue = (SSM_ST_SM6)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM6_double_conversion_allowed()
{
    if (pSimSSM_ST_SM6VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM6VTable);
    }
    return 1;
}

int SSM_ST_SM6_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM6VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM6VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM6*)pValue);
    return 1;
}

int is_SSM_ST_SM6_long_conversion_allowed()
{
    if (pSimSSM_ST_SM6VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM6VTable);
    }
    return 1;
}

int SSM_ST_SM6_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM6VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM6VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM6*)pValue);
    return 1;
}

void compare_SSM_ST_SM6(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM6VTable != NULL
        && pSimSSM_ST_SM6VTable->m_version >= Scv612
        && pSimSSM_ST_SM6VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM6VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM6VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM6VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM6*)pValue1), (int)(*(SSM_ST_SM6*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM6_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM6_values, SSM_ST_SM6_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM6(void *pValue)
{
    *(SSM_ST_SM6*)pValue = SSM_st_Floor1Button10_SM6;
    return 1;
}

int release_SSM_ST_SM6(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM6(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM6*)pToValue) = *((SSM_ST_SM6*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM6_Utils = {
    SSM_ST_SM6_to_string,
    check_SSM_ST_SM6_string,
    string_to_SSM_ST_SM6,
    is_SSM_ST_SM6_double_conversion_allowed,
    SSM_ST_SM6_to_double,
    is_SSM_ST_SM6_long_conversion_allowed,
    SSM_ST_SM6_to_long,
    compare_SSM_ST_SM6,
    get_SSM_ST_SM6_signature,
    init_SSM_ST_SM6,
    release_SSM_ST_SM6,
    copy_SSM_ST_SM6,
    sizeof(SSM_ST_SM6)
};

/****************************************************************
 ** SSM_TR_PlanningModule 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_PlanningModuleVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_PlanningModuleVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_PlanningModuleVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_PlanningModuleVTable;
#endif

static SimEnumValUtils SSM_TR_PlanningModule_values[] = {
    { "SSM_TR_no_trans_PlanningModule", SSM_TR_no_trans_PlanningModule},
    { "SSM_TR_no_trans_PlanningModule", SSM_TR_no_trans_PlanningModule},
    { "SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule", SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule},
    { "SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule", SSM_TR_Floor1_Movin1To2_1_Floor1_PlanningModule},
    { "SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule", SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule},
    { "SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule", SSM_TR_Floor1_Movin1To3_2_Floor1_PlanningModule},
    { "SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule", SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule},
    { "SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule", SSM_TR_Movin1To2_Movin1To2_1_Movin1To2_PlanningModule},
    { "SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule", SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule},
    { "SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule", SSM_TR_Movin1To2_Floor2_2_Movin1To2_PlanningModule},
    { "SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule", SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule},
    { "SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule", SSM_TR_Movin1To2_Stop_3_Movin1To2_PlanningModule},
    { "SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule", SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule},
    { "SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule", SSM_TR_Floor2_Moving2To3_1_Floor2_PlanningModule},
    { "SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule", SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule},
    { "SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule", SSM_TR_Floor2_Movin2To1_2_Floor2_PlanningModule},
    { "SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule", SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule},
    { "SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule", SSM_TR_Floor3_Moving3To1_1_Floor3_PlanningModule},
    { "SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule", SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule},
    { "SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule", SSM_TR_Floor3_Moving3To2_2_Floor3_PlanningModule},
    { "SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule", SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule},
    { "SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule", SSM_TR_Movin1To3_Floor3_1_Movin1To3_PlanningModule},
    { "SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule", SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule},
    { "SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule", SSM_TR_Movin1To3_Movin1To3_2_Movin1To3_PlanningModule},
    { "SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule", SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule},
    { "SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule", SSM_TR_Movin1To3_Movin1To2_3_Movin1To3_PlanningModule},
    { "SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule", SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule},
    { "SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule", SSM_TR_Moving2To3_Floor3_1_Moving2To3_PlanningModule},
    { "SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule", SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule},
    { "SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule", SSM_TR_Moving2To3_Moving2To3_2_Moving2To3_PlanningModule},
    { "SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule", SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule},
    { "SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule", SSM_TR_Moving2To3_Stop_3_Moving2To3_PlanningModule},
    { "SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule", SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule},
    { "SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule", SSM_TR_Moving3To1_Floor1_1_Moving3To1_PlanningModule},
    { "SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule", SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule},
    { "SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule", SSM_TR_Moving3To1_Moving3To1_2_Moving3To1_PlanningModule},
    { "SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule", SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule},
    { "SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule", SSM_TR_Moving3To1_Moving3To2_3_Moving3To1_PlanningModule},
    { "SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule", SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule},
    { "SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule", SSM_TR_Moving3To1_Stop_4_Moving3To1_PlanningModule},
    { "SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule", SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule},
    { "SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule", SSM_TR_Moving3To2_Floor2_1_Moving3To2_PlanningModule},
    { "SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule", SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule},
    { "SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule", SSM_TR_Moving3To2_Moving3To2_2_Moving3To2_PlanningModule},
    { "SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule", SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule},
    { "SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule", SSM_TR_Moving3To2_Stop_3_Moving3To2_PlanningModule},
    { "SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule", SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule},
    { "SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule", SSM_TR_Movin2To1_Floor1_1_Movin2To1_PlanningModule},
    { "SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule", SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule},
    { "SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule", SSM_TR_Movin2To1_Movin2To1_2_Movin2To1_PlanningModule},
    { "SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule", SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule},
    { "SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule", SSM_TR_Movin2To1_Stop_3_Movin2To1_PlanningModule},
};
const int SSM_TR_PlanningModule_nb_values = 52;

int SSM_TR_PlanningModule_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_PlanningModuleVTable != NULL
        && pSimSSM_TR_PlanningModuleVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_PlanningModuleVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_PlanningModule*)pValue, SSM_TR_PlanningModule_values, SSM_TR_PlanningModule_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_PlanningModule_string(const char *str, char **endptr)
{
    static SSM_TR_PlanningModule rTemp;
    return string_to_SSM_TR_PlanningModule(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_PlanningModule(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_PlanningModuleVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_PlanningModuleVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_PlanningModule_values, SSM_TR_PlanningModule_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_PlanningModule*)pValue = (SSM_TR_PlanningModule)nTemp;
    }
    return nRet;
}

int is_SSM_TR_PlanningModule_double_conversion_allowed()
{
    if (pSimSSM_TR_PlanningModuleVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_PlanningModuleVTable);
    }
    return 1;
}

int SSM_TR_PlanningModule_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_PlanningModuleVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_PlanningModuleVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_PlanningModule*)pValue);
    return 1;
}

int is_SSM_TR_PlanningModule_long_conversion_allowed()
{
    if (pSimSSM_TR_PlanningModuleVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_PlanningModuleVTable);
    }
    return 1;
}

int SSM_TR_PlanningModule_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_PlanningModuleVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_PlanningModuleVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_PlanningModule*)pValue);
    return 1;
}

void compare_SSM_TR_PlanningModule(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_PlanningModuleVTable != NULL
        && pSimSSM_TR_PlanningModuleVTable->m_version >= Scv612
        && pSimSSM_TR_PlanningModuleVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_PlanningModuleVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_PlanningModuleVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_PlanningModuleVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_PlanningModule*)pValue1), (int)(*(SSM_TR_PlanningModule*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_PlanningModule_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_PlanningModule_values, SSM_TR_PlanningModule_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_PlanningModule(void *pValue)
{
    *(SSM_TR_PlanningModule*)pValue = SSM_TR_no_trans_PlanningModule;
    return 1;
}

int release_SSM_TR_PlanningModule(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_PlanningModule(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_PlanningModule*)pToValue) = *((SSM_TR_PlanningModule*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_PlanningModule_Utils = {
    SSM_TR_PlanningModule_to_string,
    check_SSM_TR_PlanningModule_string,
    string_to_SSM_TR_PlanningModule,
    is_SSM_TR_PlanningModule_double_conversion_allowed,
    SSM_TR_PlanningModule_to_double,
    is_SSM_TR_PlanningModule_long_conversion_allowed,
    SSM_TR_PlanningModule_to_long,
    compare_SSM_TR_PlanningModule,
    get_SSM_TR_PlanningModule_signature,
    init_SSM_TR_PlanningModule,
    release_SSM_TR_PlanningModule,
    copy_SSM_TR_PlanningModule,
    sizeof(SSM_TR_PlanningModule)
};

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM1VTable;
#endif

static SimEnumValUtils SSM_TR_SM1_values[] = {
    { "_37_SSM_TR_no_trans_SM1", _37_SSM_TR_no_trans_SM1},
    { "_37_SSM_TR_no_trans_SM1", _37_SSM_TR_no_trans_SM1},
    { "SSM_TR_Initial_MoveUp_1_Initial_SM1", SSM_TR_Initial_MoveUp_1_Initial_SM1},
    { "SSM_TR_Initial_MoveUp_1_Initial_SM1", SSM_TR_Initial_MoveUp_1_Initial_SM1},
    { "SSM_TR_Initial_MoveDown_2_Initial_SM1", SSM_TR_Initial_MoveDown_2_Initial_SM1},
    { "SSM_TR_Initial_MoveDown_2_Initial_SM1", SSM_TR_Initial_MoveDown_2_Initial_SM1},
    { "SSM_TR_Initial_StopMotor_3_Initial_SM1", SSM_TR_Initial_StopMotor_3_Initial_SM1},
    { "SSM_TR_Initial_StopMotor_3_Initial_SM1", SSM_TR_Initial_StopMotor_3_Initial_SM1},
    { "SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1", SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1},
    { "SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1", SSM_TR_MoveUp_MoveDown_1_MoveUp_SM1},
    { "SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1", SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1},
    { "SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1", SSM_TR_MoveUp_StopMotor_2_MoveUp_SM1},
    { "SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1", SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1},
    { "SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1", SSM_TR_MoveDown_MoveUp_1_MoveDown_SM1},
    { "SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1", SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1},
    { "SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1", SSM_TR_MoveDown_StopMotor_2_MoveDown_SM1},
    { "SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1", SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1},
    { "SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1", SSM_TR_StopMotor_MoveDown_1_StopMotor_SM1},
    { "SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1", SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1},
    { "SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1", SSM_TR_StopMotor_MoveUp_2_StopMotor_SM1},
};
const int SSM_TR_SM1_nb_values = 20;

int SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM1 rTemp;
    return string_to_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = (SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM1*)pValue);
    return 1;
}

int is_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM1*)pValue);
    return 1;
}

void compare_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM1*)pValue1), (int)(*(SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM1(void *pValue)
{
    *(SSM_TR_SM1*)pValue = _37_SSM_TR_no_trans_SM1;
    return 1;
}

int release_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM1*)pToValue) = *((SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM1_Utils = {
    SSM_TR_SM1_to_string,
    check_SSM_TR_SM1_string,
    string_to_SSM_TR_SM1,
    is_SSM_TR_SM1_double_conversion_allowed,
    SSM_TR_SM1_to_double,
    is_SSM_TR_SM1_long_conversion_allowed,
    SSM_TR_SM1_to_long,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    init_SSM_TR_SM1,
    release_SSM_TR_SM1,
    copy_SSM_TR_SM1,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** SSM_TR_SM2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM2VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM2VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM2VTable;
#endif

static SimEnumValUtils SSM_TR_SM2_values[] = {
    { "_33_SSM_TR_no_trans_SM2", _33_SSM_TR_no_trans_SM2},
    { "_33_SSM_TR_no_trans_SM2", _33_SSM_TR_no_trans_SM2},
    { "SSM_TR_State11_State12_1_State11_SM2", SSM_TR_State11_State12_1_State11_SM2},
    { "SSM_TR_State11_State12_1_State11_SM2", SSM_TR_State11_State12_1_State11_SM2},
    { "SSM_TR_State11_State13_2_State11_SM2", SSM_TR_State11_State13_2_State11_SM2},
    { "SSM_TR_State11_State13_2_State11_SM2", SSM_TR_State11_State13_2_State11_SM2},
    { "SSM_TR_State11_State14_3_State11_SM2", SSM_TR_State11_State14_3_State11_SM2},
    { "SSM_TR_State11_State14_3_State11_SM2", SSM_TR_State11_State14_3_State11_SM2},
    { "SSM_TR_State11_State16_4_State11_SM2", SSM_TR_State11_State16_4_State11_SM2},
    { "SSM_TR_State11_State16_4_State11_SM2", SSM_TR_State11_State16_4_State11_SM2},
    { "SSM_TR_State11_State17_5_State11_SM2", SSM_TR_State11_State17_5_State11_SM2},
    { "SSM_TR_State11_State17_5_State11_SM2", SSM_TR_State11_State17_5_State11_SM2},
    { "SSM_TR_State11_State15_6_State11_SM2", SSM_TR_State11_State15_6_State11_SM2},
    { "SSM_TR_State11_State15_6_State11_SM2", SSM_TR_State11_State15_6_State11_SM2},
    { "SSM_TR_State12_State11_1_State12_SM2", SSM_TR_State12_State11_1_State12_SM2},
    { "SSM_TR_State12_State11_1_State12_SM2", SSM_TR_State12_State11_1_State12_SM2},
    { "SSM_TR_State13_State11_1_State13_SM2", SSM_TR_State13_State11_1_State13_SM2},
    { "SSM_TR_State13_State11_1_State13_SM2", SSM_TR_State13_State11_1_State13_SM2},
    { "SSM_TR_State14_State11_1_State14_SM2", SSM_TR_State14_State11_1_State14_SM2},
    { "SSM_TR_State14_State11_1_State14_SM2", SSM_TR_State14_State11_1_State14_SM2},
    { "SSM_TR_State17_State11_1_State17_SM2", SSM_TR_State17_State11_1_State17_SM2},
    { "SSM_TR_State17_State11_1_State17_SM2", SSM_TR_State17_State11_1_State17_SM2},
    { "SSM_TR_State16_State11_1_State16_SM2", SSM_TR_State16_State11_1_State16_SM2},
    { "SSM_TR_State16_State11_1_State16_SM2", SSM_TR_State16_State11_1_State16_SM2},
    { "SSM_TR_State15_State11_1_State15_SM2", SSM_TR_State15_State11_1_State15_SM2},
    { "SSM_TR_State15_State11_1_State15_SM2", SSM_TR_State15_State11_1_State15_SM2},
};
const int SSM_TR_SM2_nb_values = 26;

int SSM_TR_SM2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM2VTable != NULL
        && pSimSSM_TR_SM2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM2*)pValue, SSM_TR_SM2_values, SSM_TR_SM2_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM2_string(const char *str, char **endptr)
{
    static SSM_TR_SM2 rTemp;
    return string_to_SSM_TR_SM2(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM2VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM2_values, SSM_TR_SM2_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM2*)pValue = (SSM_TR_SM2)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM2_double_conversion_allowed()
{
    if (pSimSSM_TR_SM2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM2VTable);
    }
    return 1;
}

int SSM_TR_SM2_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM2VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM2VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM2*)pValue);
    return 1;
}

int is_SSM_TR_SM2_long_conversion_allowed()
{
    if (pSimSSM_TR_SM2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM2VTable);
    }
    return 1;
}

int SSM_TR_SM2_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM2VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM2VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM2*)pValue);
    return 1;
}

void compare_SSM_TR_SM2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM2VTable != NULL
        && pSimSSM_TR_SM2VTable->m_version >= Scv612
        && pSimSSM_TR_SM2VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM2*)pValue1), (int)(*(SSM_TR_SM2*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM2_values, SSM_TR_SM2_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM2(void *pValue)
{
    *(SSM_TR_SM2*)pValue = _33_SSM_TR_no_trans_SM2;
    return 1;
}

int release_SSM_TR_SM2(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM2(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM2*)pToValue) = *((SSM_TR_SM2*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM2_Utils = {
    SSM_TR_SM2_to_string,
    check_SSM_TR_SM2_string,
    string_to_SSM_TR_SM2,
    is_SSM_TR_SM2_double_conversion_allowed,
    SSM_TR_SM2_to_double,
    is_SSM_TR_SM2_long_conversion_allowed,
    SSM_TR_SM2_to_long,
    compare_SSM_TR_SM2,
    get_SSM_TR_SM2_signature,
    init_SSM_TR_SM2,
    release_SSM_TR_SM2,
    copy_SSM_TR_SM2,
    sizeof(SSM_TR_SM2)
};

/****************************************************************
 ** SSM_TR_SM3 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM3VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM3VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM3VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM3VTable;
#endif

static SimEnumValUtils SSM_TR_SM3_values[] = {
    { "SSM_TR_no_trans_SM3", SSM_TR_no_trans_SM3},
    { "SSM_TR_no_trans_SM3", SSM_TR_no_trans_SM3},
    { "_28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3", _28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3},
    { "_28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3", _28_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM3},
    { "_27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3", _27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3},
    { "_27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3", _27_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM3},
    { "_25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3", _25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3},
    { "_25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3", _25_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM3},
    { "_26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3", _26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3},
    { "_26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3", _26_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM3},
};
const int SSM_TR_SM3_nb_values = 10;

int SSM_TR_SM3_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM3VTable != NULL
        && pSimSSM_TR_SM3VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM3VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM3*)pValue, SSM_TR_SM3_values, SSM_TR_SM3_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM3_string(const char *str, char **endptr)
{
    static SSM_TR_SM3 rTemp;
    return string_to_SSM_TR_SM3(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM3(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM3VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM3VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM3_values, SSM_TR_SM3_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM3*)pValue = (SSM_TR_SM3)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM3_double_conversion_allowed()
{
    if (pSimSSM_TR_SM3VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM3VTable);
    }
    return 1;
}

int SSM_TR_SM3_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM3VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM3VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM3*)pValue);
    return 1;
}

int is_SSM_TR_SM3_long_conversion_allowed()
{
    if (pSimSSM_TR_SM3VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM3VTable);
    }
    return 1;
}

int SSM_TR_SM3_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM3VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM3VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM3*)pValue);
    return 1;
}

void compare_SSM_TR_SM3(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM3VTable != NULL
        && pSimSSM_TR_SM3VTable->m_version >= Scv612
        && pSimSSM_TR_SM3VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM3VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM3VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM3VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM3*)pValue1), (int)(*(SSM_TR_SM3*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM3_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM3_values, SSM_TR_SM3_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM3(void *pValue)
{
    *(SSM_TR_SM3*)pValue = SSM_TR_no_trans_SM3;
    return 1;
}

int release_SSM_TR_SM3(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM3(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM3*)pToValue) = *((SSM_TR_SM3*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM3_Utils = {
    SSM_TR_SM3_to_string,
    check_SSM_TR_SM3_string,
    string_to_SSM_TR_SM3,
    is_SSM_TR_SM3_double_conversion_allowed,
    SSM_TR_SM3_to_double,
    is_SSM_TR_SM3_long_conversion_allowed,
    SSM_TR_SM3_to_long,
    compare_SSM_TR_SM3,
    get_SSM_TR_SM3_signature,
    init_SSM_TR_SM3,
    release_SSM_TR_SM3,
    copy_SSM_TR_SM3,
    sizeof(SSM_TR_SM3)
};

/****************************************************************
 ** SSM_TR_SM4 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM4VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM4VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM4VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM4VTable;
#endif

static SimEnumValUtils SSM_TR_SM4_values[] = {
    { "SSM_TR_no_trans_SM4", SSM_TR_no_trans_SM4},
    { "SSM_TR_no_trans_SM4", SSM_TR_no_trans_SM4},
    { "_24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4", _24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4},
    { "_24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4", _24_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM4},
    { "_23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4", _23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4},
    { "_23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4", _23_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM4},
    { "_21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4", _21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4},
    { "_21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4", _21_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM4},
    { "_22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4", _22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4},
    { "_22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4", _22_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM4},
};
const int SSM_TR_SM4_nb_values = 10;

int SSM_TR_SM4_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM4VTable != NULL
        && pSimSSM_TR_SM4VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM4VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM4*)pValue, SSM_TR_SM4_values, SSM_TR_SM4_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM4_string(const char *str, char **endptr)
{
    static SSM_TR_SM4 rTemp;
    return string_to_SSM_TR_SM4(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM4(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM4VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM4VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM4_values, SSM_TR_SM4_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM4*)pValue = (SSM_TR_SM4)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM4_double_conversion_allowed()
{
    if (pSimSSM_TR_SM4VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM4VTable);
    }
    return 1;
}

int SSM_TR_SM4_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM4VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM4VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM4*)pValue);
    return 1;
}

int is_SSM_TR_SM4_long_conversion_allowed()
{
    if (pSimSSM_TR_SM4VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM4VTable);
    }
    return 1;
}

int SSM_TR_SM4_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM4VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM4VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM4*)pValue);
    return 1;
}

void compare_SSM_TR_SM4(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM4VTable != NULL
        && pSimSSM_TR_SM4VTable->m_version >= Scv612
        && pSimSSM_TR_SM4VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM4VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM4VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM4VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM4*)pValue1), (int)(*(SSM_TR_SM4*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM4_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM4_values, SSM_TR_SM4_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM4(void *pValue)
{
    *(SSM_TR_SM4*)pValue = SSM_TR_no_trans_SM4;
    return 1;
}

int release_SSM_TR_SM4(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM4(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM4*)pToValue) = *((SSM_TR_SM4*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM4_Utils = {
    SSM_TR_SM4_to_string,
    check_SSM_TR_SM4_string,
    string_to_SSM_TR_SM4,
    is_SSM_TR_SM4_double_conversion_allowed,
    SSM_TR_SM4_to_double,
    is_SSM_TR_SM4_long_conversion_allowed,
    SSM_TR_SM4_to_long,
    compare_SSM_TR_SM4,
    get_SSM_TR_SM4_signature,
    init_SSM_TR_SM4,
    release_SSM_TR_SM4,
    copy_SSM_TR_SM4,
    sizeof(SSM_TR_SM4)
};

/****************************************************************
 ** SSM_TR_SM5 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM5VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM5VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM5VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM5VTable;
#endif

static SimEnumValUtils SSM_TR_SM5_values[] = {
    { "SSM_TR_no_trans_SM5", SSM_TR_no_trans_SM5},
    { "SSM_TR_no_trans_SM5", SSM_TR_no_trans_SM5},
    { "_16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5", _16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5},
    { "_16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5", _16_SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM5},
    { "_15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5", _15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5},
    { "_15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5", _15_SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM5},
    { "_13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5", _13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5},
    { "_13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5", _13_SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM5},
    { "_14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5", _14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5},
    { "_14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5", _14_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM5},
};
const int SSM_TR_SM5_nb_values = 10;

int SSM_TR_SM5_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM5VTable != NULL
        && pSimSSM_TR_SM5VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM5VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM5*)pValue, SSM_TR_SM5_values, SSM_TR_SM5_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM5_string(const char *str, char **endptr)
{
    static SSM_TR_SM5 rTemp;
    return string_to_SSM_TR_SM5(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM5(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM5VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM5VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM5_values, SSM_TR_SM5_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM5*)pValue = (SSM_TR_SM5)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM5_double_conversion_allowed()
{
    if (pSimSSM_TR_SM5VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM5VTable);
    }
    return 1;
}

int SSM_TR_SM5_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM5VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM5VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM5*)pValue);
    return 1;
}

int is_SSM_TR_SM5_long_conversion_allowed()
{
    if (pSimSSM_TR_SM5VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM5VTable);
    }
    return 1;
}

int SSM_TR_SM5_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM5VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM5VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM5*)pValue);
    return 1;
}

void compare_SSM_TR_SM5(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM5VTable != NULL
        && pSimSSM_TR_SM5VTable->m_version >= Scv612
        && pSimSSM_TR_SM5VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM5VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM5VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM5VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM5*)pValue1), (int)(*(SSM_TR_SM5*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM5_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM5_values, SSM_TR_SM5_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM5(void *pValue)
{
    *(SSM_TR_SM5*)pValue = SSM_TR_no_trans_SM5;
    return 1;
}

int release_SSM_TR_SM5(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM5(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM5*)pToValue) = *((SSM_TR_SM5*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM5_Utils = {
    SSM_TR_SM5_to_string,
    check_SSM_TR_SM5_string,
    string_to_SSM_TR_SM5,
    is_SSM_TR_SM5_double_conversion_allowed,
    SSM_TR_SM5_to_double,
    is_SSM_TR_SM5_long_conversion_allowed,
    SSM_TR_SM5_to_long,
    compare_SSM_TR_SM5,
    get_SSM_TR_SM5_signature,
    init_SSM_TR_SM5,
    release_SSM_TR_SM5,
    copy_SSM_TR_SM5,
    sizeof(SSM_TR_SM5)
};

/****************************************************************
 ** SSM_TR_SM6 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM6VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM6VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM6VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM6VTable;
#endif

static SimEnumValUtils SSM_TR_SM6_values[] = {
    { "SSM_TR_no_trans_SM6", SSM_TR_no_trans_SM6},
    { "SSM_TR_no_trans_SM6", SSM_TR_no_trans_SM6},
    { "SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6", SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6},
    { "SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6", SSM_TR_Floor1Button10_Floor1Button4_1_Floor1Button10_SM6},
    { "SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6", SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6},
    { "SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6", SSM_TR_Floor1Button11_Floor1Button10_1_Floor1Button11_SM6},
    { "SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6", SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6},
    { "SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6", SSM_TR_Floor1Button4_Floor1Button11_1_Floor1Button4_SM6},
    { "_12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6", _12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6},
    { "_12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6", _12_SSM_TR_Floor1Button4_Floor1Button10_2_Floor1Button4_SM6},
};
const int SSM_TR_SM6_nb_values = 10;

int SSM_TR_SM6_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM6VTable != NULL
        && pSimSSM_TR_SM6VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM6VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM6*)pValue, SSM_TR_SM6_values, SSM_TR_SM6_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM6_string(const char *str, char **endptr)
{
    static SSM_TR_SM6 rTemp;
    return string_to_SSM_TR_SM6(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM6(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM6VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM6VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM6_values, SSM_TR_SM6_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM6*)pValue = (SSM_TR_SM6)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM6_double_conversion_allowed()
{
    if (pSimSSM_TR_SM6VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM6VTable);
    }
    return 1;
}

int SSM_TR_SM6_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM6VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM6VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM6*)pValue);
    return 1;
}

int is_SSM_TR_SM6_long_conversion_allowed()
{
    if (pSimSSM_TR_SM6VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM6VTable);
    }
    return 1;
}

int SSM_TR_SM6_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM6VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM6VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM6*)pValue);
    return 1;
}

void compare_SSM_TR_SM6(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM6VTable != NULL
        && pSimSSM_TR_SM6VTable->m_version >= Scv612
        && pSimSSM_TR_SM6VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM6VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM6VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM6VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM6*)pValue1), (int)(*(SSM_TR_SM6*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM6_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM6_values, SSM_TR_SM6_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM6(void *pValue)
{
    *(SSM_TR_SM6*)pValue = SSM_TR_no_trans_SM6;
    return 1;
}

int release_SSM_TR_SM6(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM6(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM6*)pToValue) = *((SSM_TR_SM6*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM6_Utils = {
    SSM_TR_SM6_to_string,
    check_SSM_TR_SM6_string,
    string_to_SSM_TR_SM6,
    is_SSM_TR_SM6_double_conversion_allowed,
    SSM_TR_SM6_to_double,
    is_SSM_TR_SM6_long_conversion_allowed,
    SSM_TR_SM6_to_long,
    compare_SSM_TR_SM6,
    get_SSM_TR_SM6_signature,
    init_SSM_TR_SM6,
    release_SSM_TR_SM6,
    copy_SSM_TR_SM6,
    sizeof(SSM_TR_SM6)
};

