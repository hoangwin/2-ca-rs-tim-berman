#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t502;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2364;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t859;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m3921_gshared (UnityEvent_1_t502 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3921(__this, method) (( void (*) (UnityEvent_1_t502 *, const MethodInfo*))UnityEvent_1__ctor_m3921_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m17150_gshared (UnityEvent_1_t502 * __this, UnityAction_1_t2364 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m17150(__this, ___call, method) (( void (*) (UnityEvent_1_t502 *, UnityAction_1_t2364 *, const MethodInfo*))UnityEvent_1_AddListener_m17150_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m17151_gshared (UnityEvent_1_t502 * __this, UnityAction_1_t2364 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m17151(__this, ___call, method) (( void (*) (UnityEvent_1_t502 *, UnityAction_1_t2364 *, const MethodInfo*))UnityEvent_1_RemoveListener_m17151_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m17152_gshared (UnityEvent_1_t502 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m17152(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t502 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m17152_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t859 * UnityEvent_1_GetDelegate_m17153_gshared (UnityEvent_1_t502 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17153(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t859 * (*) (UnityEvent_1_t502 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m17153_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t859 * UnityEvent_1_GetDelegate_m17154_gshared (Object_t * __this /* static, unused */, UnityAction_1_t2364 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17154(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t859 * (*) (Object_t * /* static, unused */, UnityAction_1_t2364 *, const MethodInfo*))UnityEvent_1_GetDelegate_m17154_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m3928_gshared (UnityEvent_1_t502 * __this, Vector2_t27  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3928(__this, ___arg0, method) (( void (*) (UnityEvent_1_t502 *, Vector2_t27 , const MethodInfo*))UnityEvent_1_Invoke_m3928_gshared)(__this, ___arg0, method)
