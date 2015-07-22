#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2256;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2255;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m15435_gshared (ObjectPool_1_t2256 * __this, UnityAction_1_t2255 * ___actionOnGet, UnityAction_1_t2255 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m15435(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2256 *, UnityAction_1_t2255 *, UnityAction_1_t2255 *, const MethodInfo*))ObjectPool_1__ctor_m15435_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m15437_gshared (ObjectPool_1_t2256 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m15437(__this, method) (( int32_t (*) (ObjectPool_1_t2256 *, const MethodInfo*))ObjectPool_1_get_countAll_m15437_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m15439_gshared (ObjectPool_1_t2256 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m15439(__this, ___value, method) (( void (*) (ObjectPool_1_t2256 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m15439_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m15441_gshared (ObjectPool_1_t2256 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m15441(__this, method) (( int32_t (*) (ObjectPool_1_t2256 *, const MethodInfo*))ObjectPool_1_get_countActive_m15441_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m15443_gshared (ObjectPool_1_t2256 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m15443(__this, method) (( int32_t (*) (ObjectPool_1_t2256 *, const MethodInfo*))ObjectPool_1_get_countInactive_m15443_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m15445_gshared (ObjectPool_1_t2256 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m15445(__this, method) (( Object_t * (*) (ObjectPool_1_t2256 *, const MethodInfo*))ObjectPool_1_Get_m15445_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m15447_gshared (ObjectPool_1_t2256 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m15447(__this, ___element, method) (( void (*) (ObjectPool_1_t2256 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m15447_gshared)(__this, ___element, method)
