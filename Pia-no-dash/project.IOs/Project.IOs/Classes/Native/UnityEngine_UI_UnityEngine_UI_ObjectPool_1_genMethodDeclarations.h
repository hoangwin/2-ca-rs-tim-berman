#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t406;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t407;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t577;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3693(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t406 *, UnityAction_1_t407 *, UnityAction_1_t407 *, const MethodInfo*))ObjectPool_1__ctor_m15435_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m15436(__this, method) (( int32_t (*) (ObjectPool_1_t406 *, const MethodInfo*))ObjectPool_1_get_countAll_m15437_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m15438(__this, ___value, method) (( void (*) (ObjectPool_1_t406 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m15439_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m15440(__this, method) (( int32_t (*) (ObjectPool_1_t406 *, const MethodInfo*))ObjectPool_1_get_countActive_m15441_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m15442(__this, method) (( int32_t (*) (ObjectPool_1_t406 *, const MethodInfo*))ObjectPool_1_get_countInactive_m15443_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m15444(__this, method) (( List_1_t577 * (*) (ObjectPool_1_t406 *, const MethodInfo*))ObjectPool_1_Get_m15445_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m15446(__this, ___element, method) (( void (*) (ObjectPool_1_t406 *, List_1_t577 *, const MethodInfo*))ObjectPool_1_Release_m15447_gshared)(__this, ___element, method)
