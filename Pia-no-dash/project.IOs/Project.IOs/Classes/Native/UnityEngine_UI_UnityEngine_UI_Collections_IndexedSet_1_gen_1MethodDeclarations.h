#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2301;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2391;
// System.Object[]
struct ObjectU5BU5D_t38;
// System.Predicate`1<System.Object>
struct Predicate_1_t2032;
// System.Comparison`1<System.Object>
struct Comparison_1_t342;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m16172_gshared (IndexedSet_1_t2301 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m16172(__this, method) (( void (*) (IndexedSet_1_t2301 *, const MethodInfo*))IndexedSet_1__ctor_m16172_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16174_gshared (IndexedSet_1_t2301 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16174(__this, method) (( Object_t * (*) (IndexedSet_1_t2301 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16174_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m16176_gshared (IndexedSet_1_t2301 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m16176(__this, ___item, method) (( void (*) (IndexedSet_1_t2301 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m16176_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m16178_gshared (IndexedSet_1_t2301 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m16178(__this, ___item, method) (( bool (*) (IndexedSet_1_t2301 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m16178_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m16180_gshared (IndexedSet_1_t2301 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m16180(__this, method) (( Object_t* (*) (IndexedSet_1_t2301 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m16180_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m16182_gshared (IndexedSet_1_t2301 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m16182(__this, method) (( void (*) (IndexedSet_1_t2301 *, const MethodInfo*))IndexedSet_1_Clear_m16182_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m16184_gshared (IndexedSet_1_t2301 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m16184(__this, ___item, method) (( bool (*) (IndexedSet_1_t2301 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m16184_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m16186_gshared (IndexedSet_1_t2301 * __this, ObjectU5BU5D_t38* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m16186(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2301 *, ObjectU5BU5D_t38*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m16186_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m16188_gshared (IndexedSet_1_t2301 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m16188(__this, method) (( int32_t (*) (IndexedSet_1_t2301 *, const MethodInfo*))IndexedSet_1_get_Count_m16188_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m16190_gshared (IndexedSet_1_t2301 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m16190(__this, method) (( bool (*) (IndexedSet_1_t2301 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m16190_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m16192_gshared (IndexedSet_1_t2301 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m16192(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2301 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m16192_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m16194_gshared (IndexedSet_1_t2301 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m16194(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2301 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m16194_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m16196_gshared (IndexedSet_1_t2301 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m16196(__this, ___index, method) (( void (*) (IndexedSet_1_t2301 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m16196_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m16198_gshared (IndexedSet_1_t2301 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m16198(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2301 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m16198_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m16200_gshared (IndexedSet_1_t2301 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m16200(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2301 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m16200_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m16201_gshared (IndexedSet_1_t2301 * __this, Predicate_1_t2032 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m16201(__this, ___match, method) (( void (*) (IndexedSet_1_t2301 *, Predicate_1_t2032 *, const MethodInfo*))IndexedSet_1_RemoveAll_m16201_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m16202_gshared (IndexedSet_1_t2301 * __this, Comparison_1_t342 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m16202(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2301 *, Comparison_1_t342 *, const MethodInfo*))IndexedSet_1_Sort_m16202_gshared)(__this, ___sortLayoutFunction, method)
