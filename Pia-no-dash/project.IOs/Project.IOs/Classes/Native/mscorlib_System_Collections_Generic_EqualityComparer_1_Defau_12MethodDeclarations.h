#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>
struct DefaultComparer_t2520;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::.ctor()
extern "C" void DefaultComparer__ctor_m19251_gshared (DefaultComparer_t2520 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m19251(__this, method) (( void (*) (DefaultComparer_t2520 *, const MethodInfo*))DefaultComparer__ctor_m19251_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19252_gshared (DefaultComparer_t2520 * __this, uint64_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m19252(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2520 *, uint64_t, const MethodInfo*))DefaultComparer_GetHashCode_m19252_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Networking.Types.NetworkID>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19253_gshared (DefaultComparer_t2520 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m19253(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2520 *, uint64_t, uint64_t, const MethodInfo*))DefaultComparer_Equals_m19253_gshared)(__this, ___x, ___y, method)
