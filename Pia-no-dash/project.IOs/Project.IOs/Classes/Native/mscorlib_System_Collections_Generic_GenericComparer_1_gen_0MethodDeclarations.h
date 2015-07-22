#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
struct GenericComparer_1_t2016;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void GenericComparer_1__ctor_m12455_gshared (GenericComparer_1_t2016 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m12455(__this, method) (( void (*) (GenericComparer_1_t2016 *, const MethodInfo*))GenericComparer_1__ctor_m12455_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m21389_gshared (GenericComparer_1_t2016 * __this, DateTimeOffset_t946  ___x, DateTimeOffset_t946  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m21389(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2016 *, DateTimeOffset_t946 , DateTimeOffset_t946 , const MethodInfo*))GenericComparer_1_Compare_m21389_gshared)(__this, ___x, ___y, method)
