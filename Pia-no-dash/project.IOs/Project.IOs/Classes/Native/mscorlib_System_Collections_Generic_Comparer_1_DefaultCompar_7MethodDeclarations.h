#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2733;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m21415_gshared (DefaultComparer_t2733 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21415(__this, method) (( void (*) (DefaultComparer_t2733 *, const MethodInfo*))DefaultComparer__ctor_m21415_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m21416_gshared (DefaultComparer_t2733 * __this, Guid_t66  ___x, Guid_t66  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m21416(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2733 *, Guid_t66 , Guid_t66 , const MethodInfo*))DefaultComparer_Compare_m21416_gshared)(__this, ___x, ___y, method)
