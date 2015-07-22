#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t957;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t3008;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t2974;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t3009;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t2578;
// System.Type[]
struct TypeU5BU5D_t793;
// System.Predicate`1<System.Type>
struct Predicate_1_t2579;
// System.Comparison`1<System.Type>
struct Comparison_1_t2581;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_39.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
#define List_1__ctor_m5471(__this, method) (( void (*) (List_1_t957 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m20063(__this, ___capacity, method) (( void (*) (List_1_t957 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m20064(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20065(__this, method) (( Object_t* (*) (List_1_t957 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20066(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t957 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20067(__this, method) (( Object_t * (*) (List_1_t957 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20068(__this, ___item, method) (( int32_t (*) (List_1_t957 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20069(__this, ___item, method) (( bool (*) (List_1_t957 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20070(__this, ___item, method) (( int32_t (*) (List_1_t957 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20071(__this, ___index, ___item, method) (( void (*) (List_1_t957 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20072(__this, ___item, method) (( void (*) (List_1_t957 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20073(__this, method) (( bool (*) (List_1_t957 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20074(__this, method) (( bool (*) (List_1_t957 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20075(__this, method) (( Object_t * (*) (List_1_t957 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20076(__this, method) (( bool (*) (List_1_t957 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20077(__this, method) (( bool (*) (List_1_t957 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20078(__this, ___index, method) (( Object_t * (*) (List_1_t957 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20079(__this, ___index, ___value, method) (( void (*) (List_1_t957 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m20080(__this, ___item, method) (( void (*) (List_1_t957 *, Type_t *, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20081(__this, ___newCount, method) (( void (*) (List_1_t957 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20082(__this, ___collection, method) (( void (*) (List_1_t957 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20083(__this, ___enumerable, method) (( void (*) (List_1_t957 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20084(__this, ___collection, method) (( void (*) (List_1_t957 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m20085(__this, method) (( ReadOnlyCollection_1_t2578 * (*) (List_1_t957 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m20086(__this, method) (( void (*) (List_1_t957 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m20087(__this, ___item, method) (( bool (*) (List_1_t957 *, Type_t *, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20088(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t957 *, TypeU5BU5D_t793*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m20089(__this, ___match, method) (( Type_t * (*) (List_1_t957 *, Predicate_1_t2579 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20090(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2579 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20091(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t957 *, int32_t, int32_t, Predicate_1_t2579 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m20092(__this, method) (( Enumerator_t2580  (*) (List_1_t957 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m20093(__this, ___item, method) (( int32_t (*) (List_1_t957 *, Type_t *, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20094(__this, ___start, ___delta, method) (( void (*) (List_1_t957 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20095(__this, ___index, method) (( void (*) (List_1_t957 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m20096(__this, ___index, ___item, method) (( void (*) (List_1_t957 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20097(__this, ___collection, method) (( void (*) (List_1_t957 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m20098(__this, ___item, method) (( bool (*) (List_1_t957 *, Type_t *, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20099(__this, ___match, method) (( int32_t (*) (List_1_t957 *, Predicate_1_t2579 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20100(__this, ___index, method) (( void (*) (List_1_t957 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m20101(__this, method) (( void (*) (List_1_t957 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m20102(__this, method) (( void (*) (List_1_t957 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20103(__this, ___comparison, method) (( void (*) (List_1_t957 *, Comparison_1_t2581 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m5472(__this, method) (( TypeU5BU5D_t793* (*) (List_1_t957 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m20104(__this, method) (( void (*) (List_1_t957 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m20105(__this, method) (( int32_t (*) (List_1_t957 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20106(__this, ___value, method) (( void (*) (List_1_t957 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m20107(__this, method) (( int32_t (*) (List_1_t957 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m20108(__this, ___index, method) (( Type_t * (*) (List_1_t957 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m20109(__this, ___index, ___value, method) (( void (*) (List_1_t957 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
