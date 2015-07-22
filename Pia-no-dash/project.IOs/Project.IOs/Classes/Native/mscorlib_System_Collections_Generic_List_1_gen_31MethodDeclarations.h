#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t680;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t679;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t2924;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutEntry>
struct ICollection_1_t2925;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GUILayoutEntry>
struct IEnumerable_1_t2926;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GUILayoutEntry>
struct ReadOnlyCollection_1_t2427;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2425;
// System.Predicate`1<UnityEngine.GUILayoutEntry>
struct Predicate_1_t2428;
// System.Comparison`1<UnityEngine.GUILayoutEntry>
struct Comparison_1_t2429;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
#define List_1__ctor_m5365(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m17949(__this, ___capacity, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m17950(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17951(__this, method) (( Object_t* (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17952(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t680 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17953(__this, method) (( Object_t * (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17954(__this, ___item, method) (( int32_t (*) (List_1_t680 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17955(__this, ___item, method) (( bool (*) (List_1_t680 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17956(__this, ___item, method) (( int32_t (*) (List_1_t680 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17957(__this, ___index, ___item, method) (( void (*) (List_1_t680 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17958(__this, ___item, method) (( void (*) (List_1_t680 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17959(__this, method) (( bool (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17960(__this, method) (( bool (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17961(__this, method) (( Object_t * (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17962(__this, method) (( bool (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17963(__this, method) (( bool (*) (List_1_t680 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17964(__this, ___index, method) (( Object_t * (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17965(__this, ___index, ___value, method) (( void (*) (List_1_t680 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m17966(__this, ___item, method) (( void (*) (List_1_t680 *, GUILayoutEntry_t679 *, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17967(__this, ___newCount, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17968(__this, ___collection, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17969(__this, ___enumerable, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17970(__this, ___collection, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::AsReadOnly()
#define List_1_AsReadOnly_m17971(__this, method) (( ReadOnlyCollection_1_t2427 * (*) (List_1_t680 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m17972(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m17973(__this, ___item, method) (( bool (*) (List_1_t680 *, GUILayoutEntry_t679 *, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17974(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t680 *, GUILayoutEntryU5BU5D_t2425*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Find(System.Predicate`1<T>)
#define List_1_Find_m17975(__this, ___match, method) (( GUILayoutEntry_t679 * (*) (List_1_t680 *, Predicate_1_t2428 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17976(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2428 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17977(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t680 *, int32_t, int32_t, Predicate_1_t2428 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m5361(__this, method) (( Enumerator_t908  (*) (List_1_t680 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m17978(__this, ___item, method) (( int32_t (*) (List_1_t680 *, GUILayoutEntry_t679 *, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17979(__this, ___start, ___delta, method) (( void (*) (List_1_t680 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17980(__this, ___index, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m17981(__this, ___index, ___item, method) (( void (*) (List_1_t680 *, int32_t, GUILayoutEntry_t679 *, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17982(__this, ___collection, method) (( void (*) (List_1_t680 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m17983(__this, ___item, method) (( bool (*) (List_1_t680 *, GUILayoutEntry_t679 *, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17984(__this, ___match, method) (( int32_t (*) (List_1_t680 *, Predicate_1_t2428 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17985(__this, ___index, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Reverse()
#define List_1_Reverse_m17986(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort()
#define List_1_Sort_m17987(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17988(__this, ___comparison, method) (( void (*) (List_1_t680 *, Comparison_1_t2429 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m17989(__this, method) (( GUILayoutEntryU5BU5D_t2425* (*) (List_1_t680 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::TrimExcess()
#define List_1_TrimExcess_m17990(__this, method) (( void (*) (List_1_t680 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m17991(__this, method) (( int32_t (*) (List_1_t680 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17992(__this, ___value, method) (( void (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m17993(__this, method) (( int32_t (*) (List_1_t680 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m17994(__this, ___index, method) (( GUILayoutEntry_t679 * (*) (List_1_t680 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m17995(__this, ___index, ___value, method) (( void (*) (List_1_t680 *, int32_t, GUILayoutEntry_t679 *, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
