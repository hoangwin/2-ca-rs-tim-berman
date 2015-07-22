#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t549;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t550;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t586;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m4013(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t549 *, UnityAction_1_t550 *, UnityAction_1_t550 *, const MethodInfo*))ObjectPool_1__ctor_m15435_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m17656(__this, method) (( int32_t (*) (ObjectPool_1_t549 *, const MethodInfo*))ObjectPool_1_get_countAll_m15437_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m17657(__this, ___value, method) (( void (*) (ObjectPool_1_t549 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m15439_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m17658(__this, method) (( int32_t (*) (ObjectPool_1_t549 *, const MethodInfo*))ObjectPool_1_get_countActive_m15441_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m17659(__this, method) (( int32_t (*) (ObjectPool_1_t549 *, const MethodInfo*))ObjectPool_1_get_countInactive_m15443_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m4014(__this, method) (( List_1_t586 * (*) (ObjectPool_1_t549 *, const MethodInfo*))ObjectPool_1_Get_m15445_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m4015(__this, ___element, method) (( void (*) (ObjectPool_1_t549 *, List_1_t586 *, const MethodInfo*))ObjectPool_1_Release_m15447_gshared)(__this, ___element, method)
