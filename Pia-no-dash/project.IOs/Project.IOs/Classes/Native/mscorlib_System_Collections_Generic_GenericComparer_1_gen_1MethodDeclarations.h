#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t2018;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m12460_gshared (GenericComparer_1_t2018 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m12460(__this, method) (( void (*) (GenericComparer_1_t2018 *, const MethodInfo*))GenericComparer_1__ctor_m12460_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m21410_gshared (GenericComparer_1_t2018 * __this, Guid_t66  ___x, Guid_t66  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m21410(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2018 *, Guid_t66 , Guid_t66 , const MethodInfo*))GenericComparer_1_Compare_m21410_gshared)(__this, ___x, ___y, method)
