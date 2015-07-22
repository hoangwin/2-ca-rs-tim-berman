#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2735;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m21424_gshared (DefaultComparer_t2735 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m21424(__this, method) (( void (*) (DefaultComparer_t2735 *, const MethodInfo*))DefaultComparer__ctor_m21424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m21425_gshared (DefaultComparer_t2735 * __this, Guid_t66  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m21425(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2735 *, Guid_t66 , const MethodInfo*))DefaultComparer_GetHashCode_m21425_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m21426_gshared (DefaultComparer_t2735 * __this, Guid_t66  ___x, Guid_t66  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m21426(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2735 *, Guid_t66 , Guid_t66 , const MethodInfo*))DefaultComparer_Equals_m21426_gshared)(__this, ___x, ___y, method)
