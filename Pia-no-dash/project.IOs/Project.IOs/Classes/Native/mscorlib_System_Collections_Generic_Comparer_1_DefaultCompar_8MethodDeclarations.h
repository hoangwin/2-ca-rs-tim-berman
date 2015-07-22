#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2737;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m21432_gshared (DefaultComparer_t2737 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21432(__this, method) (( void (*) (DefaultComparer_t2737 *, const MethodInfo*))DefaultComparer__ctor_m21432_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m21433_gshared (DefaultComparer_t2737 * __this, TimeSpan_t1235  ___x, TimeSpan_t1235  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m21433(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2737 *, TimeSpan_t1235 , TimeSpan_t1235 , const MethodInfo*))DefaultComparer_Compare_m21433_gshared)(__this, ___x, ___y, method)
