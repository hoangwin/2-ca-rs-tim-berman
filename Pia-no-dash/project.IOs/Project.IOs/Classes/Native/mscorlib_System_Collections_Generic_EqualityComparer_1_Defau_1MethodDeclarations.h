#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
struct DefaultComparer_t2171;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern "C" void DefaultComparer__ctor_m14363_gshared (DefaultComparer_t2171 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14363(__this, method) (( void (*) (DefaultComparer_t2171 *, const MethodInfo*))DefaultComparer__ctor_m14363_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14364_gshared (DefaultComparer_t2171 * __this, Color_t9  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14364(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2171 *, Color_t9 , const MethodInfo*))DefaultComparer_GetHashCode_m14364_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14365_gshared (DefaultComparer_t2171 * __this, Color_t9  ___x, Color_t9  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14365(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2171 *, Color_t9 , Color_t9 , const MethodInfo*))DefaultComparer_Equals_m14365_gshared)(__this, ___x, ___y, method)
