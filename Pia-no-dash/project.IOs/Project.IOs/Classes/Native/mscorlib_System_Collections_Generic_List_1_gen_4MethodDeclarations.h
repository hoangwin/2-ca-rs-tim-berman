#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>
struct List_1_t153;
// System.Object
struct Object_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// System.Collections.Generic.IEnumerator`1<UnityEngine.MonoBehaviour>
struct IEnumerator_1_t2764;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<UnityEngine.MonoBehaviour>
struct ICollection_1_t2765;
// System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour>
struct IEnumerable_1_t2766;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.MonoBehaviour>
struct ReadOnlyCollection_1_t2109;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2107;
// System.Predicate`1<UnityEngine.MonoBehaviour>
struct Predicate_1_t2110;
// System.Comparison`1<UnityEngine.MonoBehaviour>
struct Comparison_1_t2112;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.MonoBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
#define List_1__ctor_m13463(__this, method) (( void (*) (List_1_t153 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::.ctor(System.Int32)
#define List_1__ctor_m13464(__this, ___capacity, method) (( void (*) (List_1_t153 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::.cctor()
#define List_1__cctor_m13465(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13466(__this, method) (( Object_t* (*) (List_1_t153 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13467(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t153 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13468(__this, method) (( Object_t * (*) (List_1_t153 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13469(__this, ___item, method) (( int32_t (*) (List_1_t153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13470(__this, ___item, method) (( bool (*) (List_1_t153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13471(__this, ___item, method) (( int32_t (*) (List_1_t153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13472(__this, ___index, ___item, method) (( void (*) (List_1_t153 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13473(__this, ___item, method) (( void (*) (List_1_t153 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13474(__this, method) (( bool (*) (List_1_t153 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13475(__this, method) (( bool (*) (List_1_t153 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13476(__this, method) (( Object_t * (*) (List_1_t153 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13477(__this, method) (( bool (*) (List_1_t153 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13478(__this, method) (( bool (*) (List_1_t153 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13479(__this, ___index, method) (( Object_t * (*) (List_1_t153 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13480(__this, ___index, ___value, method) (( void (*) (List_1_t153 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Add(T)
#define List_1_Add_m13481(__this, ___item, method) (( void (*) (List_1_t153 *, MonoBehaviour_t2 *, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13482(__this, ___newCount, method) (( void (*) (List_1_t153 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13483(__this, ___collection, method) (( void (*) (List_1_t153 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13484(__this, ___enumerable, method) (( void (*) (List_1_t153 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13485(__this, ___collection, method) (( void (*) (List_1_t153 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::AsReadOnly()
#define List_1_AsReadOnly_m13486(__this, method) (( ReadOnlyCollection_1_t2109 * (*) (List_1_t153 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Clear()
#define List_1_Clear_m13487(__this, method) (( void (*) (List_1_t153 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Contains(T)
#define List_1_Contains_m13488(__this, ___item, method) (( bool (*) (List_1_t153 *, MonoBehaviour_t2 *, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13489(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t153 *, MonoBehaviourU5BU5D_t2107*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Find(System.Predicate`1<T>)
#define List_1_Find_m13490(__this, ___match, method) (( MonoBehaviour_t2 * (*) (List_1_t153 *, Predicate_1_t2110 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13491(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2110 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13492(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t153 *, int32_t, int32_t, Predicate_1_t2110 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::GetEnumerator()
#define List_1_GetEnumerator_m13493(__this, method) (( Enumerator_t2111  (*) (List_1_t153 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::IndexOf(T)
#define List_1_IndexOf_m13494(__this, ___item, method) (( int32_t (*) (List_1_t153 *, MonoBehaviour_t2 *, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13495(__this, ___start, ___delta, method) (( void (*) (List_1_t153 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13496(__this, ___index, method) (( void (*) (List_1_t153 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Insert(System.Int32,T)
#define List_1_Insert_m13497(__this, ___index, ___item, method) (( void (*) (List_1_t153 *, int32_t, MonoBehaviour_t2 *, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13498(__this, ___collection, method) (( void (*) (List_1_t153 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Remove(T)
#define List_1_Remove_m13499(__this, ___item, method) (( bool (*) (List_1_t153 *, MonoBehaviour_t2 *, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13500(__this, ___match, method) (( int32_t (*) (List_1_t153 *, Predicate_1_t2110 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13501(__this, ___index, method) (( void (*) (List_1_t153 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Reverse()
#define List_1_Reverse_m13502(__this, method) (( void (*) (List_1_t153 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Sort()
#define List_1_Sort_m13503(__this, method) (( void (*) (List_1_t153 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13504(__this, ___comparison, method) (( void (*) (List_1_t153 *, Comparison_1_t2112 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::ToArray()
#define List_1_ToArray_m13505(__this, method) (( MonoBehaviourU5BU5D_t2107* (*) (List_1_t153 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::TrimExcess()
#define List_1_TrimExcess_m13506(__this, method) (( void (*) (List_1_t153 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::get_Capacity()
#define List_1_get_Capacity_m13507(__this, method) (( int32_t (*) (List_1_t153 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13508(__this, ___value, method) (( void (*) (List_1_t153 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::get_Count()
#define List_1_get_Count_m13509(__this, method) (( int32_t (*) (List_1_t153 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::get_Item(System.Int32)
#define List_1_get_Item_m13510(__this, ___index, method) (( MonoBehaviour_t2 * (*) (List_1_t153 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.MonoBehaviour>::set_Item(System.Int32,T)
#define List_1_set_Item_m13511(__this, ___index, ___value, method) (( void (*) (List_1_t153 *, int32_t, MonoBehaviour_t2 *, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
