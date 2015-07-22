#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t450;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t456;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t487;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3782(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t450 *, UnityAction_1_t456 *, UnityAction_1_t456 *, const MethodInfo*))ObjectPool_1__ctor_m15435_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m16505(__this, method) (( int32_t (*) (ObjectPool_1_t450 *, const MethodInfo*))ObjectPool_1_get_countAll_m15437_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16506(__this, ___value, method) (( void (*) (ObjectPool_1_t450 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m15439_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m16507(__this, method) (( int32_t (*) (ObjectPool_1_t450 *, const MethodInfo*))ObjectPool_1_get_countActive_m15441_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16508(__this, method) (( int32_t (*) (ObjectPool_1_t450 *, const MethodInfo*))ObjectPool_1_get_countInactive_m15443_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m3789(__this, method) (( List_1_t487 * (*) (ObjectPool_1_t450 *, const MethodInfo*))ObjectPool_1_Get_m15445_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m3792(__this, ___element, method) (( void (*) (ObjectPool_1_t450 *, List_1_t487 *, const MethodInfo*))ObjectPool_1_Release_m15447_gshared)(__this, ___element, method)
