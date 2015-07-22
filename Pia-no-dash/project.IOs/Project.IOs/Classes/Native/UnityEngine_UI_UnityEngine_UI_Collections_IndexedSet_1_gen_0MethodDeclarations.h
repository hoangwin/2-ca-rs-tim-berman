#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t610;
// UnityEngine.UI.Graphic
struct Graphic_t457;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t2878;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t2338;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t2340;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t460;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m3821(__this, method) (( void (*) (IndexedSet_1_t610 *, const MethodInfo*))IndexedSet_1__ctor_m16172_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16954(__this, method) (( Object_t * (*) (IndexedSet_1_t610 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m16174_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m16955(__this, ___item, method) (( void (*) (IndexedSet_1_t610 *, Graphic_t457 *, const MethodInfo*))IndexedSet_1_Add_m16176_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m16956(__this, ___item, method) (( bool (*) (IndexedSet_1_t610 *, Graphic_t457 *, const MethodInfo*))IndexedSet_1_Remove_m16178_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m16957(__this, method) (( Object_t* (*) (IndexedSet_1_t610 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m16180_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m16958(__this, method) (( void (*) (IndexedSet_1_t610 *, const MethodInfo*))IndexedSet_1_Clear_m16182_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m16959(__this, ___item, method) (( bool (*) (IndexedSet_1_t610 *, Graphic_t457 *, const MethodInfo*))IndexedSet_1_Contains_m16184_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m16960(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t610 *, GraphicU5BU5D_t2338*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m16186_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m16961(__this, method) (( int32_t (*) (IndexedSet_1_t610 *, const MethodInfo*))IndexedSet_1_get_Count_m16188_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m16962(__this, method) (( bool (*) (IndexedSet_1_t610 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m16190_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m16963(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t610 *, Graphic_t457 *, const MethodInfo*))IndexedSet_1_IndexOf_m16192_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m16964(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t610 *, int32_t, Graphic_t457 *, const MethodInfo*))IndexedSet_1_Insert_m16194_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m16965(__this, ___index, method) (( void (*) (IndexedSet_1_t610 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m16196_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m16966(__this, ___index, method) (( Graphic_t457 * (*) (IndexedSet_1_t610 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m16198_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m16967(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t610 *, int32_t, Graphic_t457 *, const MethodInfo*))IndexedSet_1_set_Item_m16200_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m16968(__this, ___match, method) (( void (*) (IndexedSet_1_t610 *, Predicate_1_t2340 *, const MethodInfo*))IndexedSet_1_RemoveAll_m16201_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m16969(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t610 *, Comparison_1_t460 *, const MethodInfo*))IndexedSet_1_Sort_m16202_gshared)(__this, ___sortLayoutFunction, method)
