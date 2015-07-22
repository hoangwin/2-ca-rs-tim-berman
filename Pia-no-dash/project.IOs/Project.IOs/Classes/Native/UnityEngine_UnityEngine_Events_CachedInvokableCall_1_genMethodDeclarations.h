#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t963;
// UnityEngine.Object
struct Object_t62;
struct Object_t62_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t38;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m5489_gshared (CachedInvokableCall_1_t963 * __this, Object_t62 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m5489(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t963 *, Object_t62 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m5489_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m20433_gshared (CachedInvokableCall_1_t963 * __this, ObjectU5BU5D_t38* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m20433(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t963 *, ObjectU5BU5D_t38*, const MethodInfo*))CachedInvokableCall_1_Invoke_m20433_gshared)(__this, ___args, method)
