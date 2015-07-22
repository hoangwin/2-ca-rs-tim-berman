#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t514;
// System.Object
struct Object_t;
// UnityEngine.UI.StencilMaterial/MatEntry
struct MatEntry_t513;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerator_1_t2900;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ICollection_1_t2901;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct IEnumerable_1_t2902;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct ReadOnlyCollection_1_t2380;
// UnityEngine.UI.StencilMaterial/MatEntry[]
struct MatEntryU5BU5D_t2378;
// System.Predicate`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Predicate_1_t2381;
// System.Comparison`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct Comparison_1_t2383;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.StencilMaterial/MatEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
#define List_1__ctor_m3951(__this, method) (( void (*) (List_1_t514 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.ctor(System.Int32)
#define List_1__ctor_m17347(__this, ___capacity, method) (( void (*) (List_1_t514 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::.cctor()
#define List_1__cctor_m17348(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17349(__this, method) (( Object_t* (*) (List_1_t514 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17350(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t514 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17351(__this, method) (( Object_t * (*) (List_1_t514 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17352(__this, ___item, method) (( int32_t (*) (List_1_t514 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17353(__this, ___item, method) (( bool (*) (List_1_t514 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17354(__this, ___item, method) (( int32_t (*) (List_1_t514 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17355(__this, ___index, ___item, method) (( void (*) (List_1_t514 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17356(__this, ___item, method) (( void (*) (List_1_t514 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17357(__this, method) (( bool (*) (List_1_t514 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17358(__this, method) (( bool (*) (List_1_t514 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17359(__this, method) (( Object_t * (*) (List_1_t514 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17360(__this, method) (( bool (*) (List_1_t514 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17361(__this, method) (( bool (*) (List_1_t514 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17362(__this, ___index, method) (( Object_t * (*) (List_1_t514 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17363(__this, ___index, ___value, method) (( void (*) (List_1_t514 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Add(T)
#define List_1_Add_m17364(__this, ___item, method) (( void (*) (List_1_t514 *, MatEntry_t513 *, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17365(__this, ___newCount, method) (( void (*) (List_1_t514 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17366(__this, ___collection, method) (( void (*) (List_1_t514 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17367(__this, ___enumerable, method) (( void (*) (List_1_t514 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17368(__this, ___collection, method) (( void (*) (List_1_t514 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::AsReadOnly()
#define List_1_AsReadOnly_m17369(__this, method) (( ReadOnlyCollection_1_t2380 * (*) (List_1_t514 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Clear()
#define List_1_Clear_m17370(__this, method) (( void (*) (List_1_t514 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Contains(T)
#define List_1_Contains_m17371(__this, ___item, method) (( bool (*) (List_1_t514 *, MatEntry_t513 *, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17372(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t514 *, MatEntryU5BU5D_t2378*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m17373(__this, ___match, method) (( MatEntry_t513 * (*) (List_1_t514 *, Predicate_1_t2381 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17374(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2381 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17375(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t514 *, int32_t, int32_t, Predicate_1_t2381 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::GetEnumerator()
#define List_1_GetEnumerator_m17376(__this, method) (( Enumerator_t2382  (*) (List_1_t514 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::IndexOf(T)
#define List_1_IndexOf_m17377(__this, ___item, method) (( int32_t (*) (List_1_t514 *, MatEntry_t513 *, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17378(__this, ___start, ___delta, method) (( void (*) (List_1_t514 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17379(__this, ___index, method) (( void (*) (List_1_t514 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Insert(System.Int32,T)
#define List_1_Insert_m17380(__this, ___index, ___item, method) (( void (*) (List_1_t514 *, int32_t, MatEntry_t513 *, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17381(__this, ___collection, method) (( void (*) (List_1_t514 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Remove(T)
#define List_1_Remove_m17382(__this, ___item, method) (( bool (*) (List_1_t514 *, MatEntry_t513 *, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17383(__this, ___match, method) (( int32_t (*) (List_1_t514 *, Predicate_1_t2381 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17384(__this, ___index, method) (( void (*) (List_1_t514 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Reverse()
#define List_1_Reverse_m17385(__this, method) (( void (*) (List_1_t514 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort()
#define List_1_Sort_m17386(__this, method) (( void (*) (List_1_t514 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17387(__this, ___comparison, method) (( void (*) (List_1_t514 *, Comparison_1_t2383 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::ToArray()
#define List_1_ToArray_m17388(__this, method) (( MatEntryU5BU5D_t2378* (*) (List_1_t514 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::TrimExcess()
#define List_1_TrimExcess_m17389(__this, method) (( void (*) (List_1_t514 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Capacity()
#define List_1_get_Capacity_m17390(__this, method) (( int32_t (*) (List_1_t514 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17391(__this, ___value, method) (( void (*) (List_1_t514 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Count()
#define List_1_get_Count_m17392(__this, method) (( int32_t (*) (List_1_t514 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::get_Item(System.Int32)
#define List_1_get_Item_m17393(__this, ___index, method) (( MatEntry_t513 * (*) (List_1_t514 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m17394(__this, ___index, ___value, method) (( void (*) (List_1_t514 *, int32_t, MatEntry_t513 *, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
