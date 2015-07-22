#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t552;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t553;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4017(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t552 *, UnityAction_1_t553 *, UnityAction_1_t553 *, const MethodInfo*))ObjectPool_1__ctor_m15435_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m17674(__this, method) (( int32_t (*) (ObjectPool_1_t552 *, const MethodInfo*))ObjectPool_1_get_countAll_m15437_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m17675(__this, ___value, method) (( void (*) (ObjectPool_1_t552 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m15439_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m17676(__this, method) (( int32_t (*) (ObjectPool_1_t552 *, const MethodInfo*))ObjectPool_1_get_countActive_m15441_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m17677(__this, method) (( int32_t (*) (ObjectPool_1_t552 *, const MethodInfo*))ObjectPool_1_get_countInactive_m15443_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m4018(__this, method) (( List_1_t584 * (*) (ObjectPool_1_t552 *, const MethodInfo*))ObjectPool_1_Get_m15445_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m4019(__this, ___element, method) (( void (*) (ObjectPool_1_t552 *, List_1_t584 *, const MethodInfo*))ObjectPool_1_Release_m15447_gshared)(__this, ___element, method)
