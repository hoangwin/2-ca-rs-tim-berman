#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// System.Object
struct Object_t;
// EventDelegate
struct EventDelegate_t172;
// System.Collections.Generic.IEnumerator`1<EventDelegate>
struct IEnumerator_1_t2755;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<EventDelegate>
struct ICollection_1_t2756;
// System.Collections.Generic.IEnumerable`1<EventDelegate>
struct IEnumerable_1_t2757;
// System.Collections.ObjectModel.ReadOnlyCollection`1<EventDelegate>
struct ReadOnlyCollection_1_t2085;
// EventDelegate[]
struct EventDelegateU5BU5D_t2083;
// System.Predicate`1<EventDelegate>
struct Predicate_1_t2086;
// System.Comparison`1<EventDelegate>
struct Comparison_1_t2088;
// System.Collections.Generic.List`1/Enumerator<EventDelegate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<EventDelegate>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
#define List_1__ctor_m1926(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::.ctor(System.Int32)
#define List_1__ctor_m13118(__this, ___capacity, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::.cctor()
#define List_1__cctor_m13119(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<EventDelegate>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13120(__this, method) (( Object_t* (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13121(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t80 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<EventDelegate>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13122(__this, method) (( Object_t * (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13123(__this, ___item, method) (( int32_t (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13124(__this, ___item, method) (( bool (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13125(__this, ___item, method) (( int32_t (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13126(__this, ___index, ___item, method) (( void (*) (List_1_t80 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13127(__this, ___item, method) (( void (*) (List_1_t80 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13128(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13129(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<EventDelegate>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13130(__this, method) (( Object_t * (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13131(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13132(__this, method) (( bool (*) (List_1_t80 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13133(__this, ___index, method) (( Object_t * (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13134(__this, ___index, ___value, method) (( void (*) (List_1_t80 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Add(T)
#define List_1_Add_m13135(__this, ___item, method) (( void (*) (List_1_t80 *, EventDelegate_t172 *, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13136(__this, ___newCount, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13137(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13138(__this, ___enumerable, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13139(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<EventDelegate>::AsReadOnly()
#define List_1_AsReadOnly_m13140(__this, method) (( ReadOnlyCollection_1_t2085 * (*) (List_1_t80 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Clear()
#define List_1_Clear_m13141(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::Contains(T)
#define List_1_Contains_m13142(__this, ___item, method) (( bool (*) (List_1_t80 *, EventDelegate_t172 *, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13143(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t80 *, EventDelegateU5BU5D_t2083*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<EventDelegate>::Find(System.Predicate`1<T>)
#define List_1_Find_m13144(__this, ___match, method) (( EventDelegate_t172 * (*) (List_1_t80 *, Predicate_1_t2086 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13145(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2086 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13146(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t80 *, int32_t, int32_t, Predicate_1_t2086 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<EventDelegate>::GetEnumerator()
#define List_1_GetEnumerator_m13147(__this, method) (( Enumerator_t2087  (*) (List_1_t80 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::IndexOf(T)
#define List_1_IndexOf_m13148(__this, ___item, method) (( int32_t (*) (List_1_t80 *, EventDelegate_t172 *, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13149(__this, ___start, ___delta, method) (( void (*) (List_1_t80 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13150(__this, ___index, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Insert(System.Int32,T)
#define List_1_Insert_m13151(__this, ___index, ___item, method) (( void (*) (List_1_t80 *, int32_t, EventDelegate_t172 *, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13152(__this, ___collection, method) (( void (*) (List_1_t80 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<EventDelegate>::Remove(T)
#define List_1_Remove_m13153(__this, ___item, method) (( bool (*) (List_1_t80 *, EventDelegate_t172 *, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13154(__this, ___match, method) (( int32_t (*) (List_1_t80 *, Predicate_1_t2086 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13155(__this, ___index, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Reverse()
#define List_1_Reverse_m13156(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Sort()
#define List_1_Sort_m13157(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13158(__this, ___comparison, method) (( void (*) (List_1_t80 *, Comparison_1_t2088 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<EventDelegate>::ToArray()
#define List_1_ToArray_m13159(__this, method) (( EventDelegateU5BU5D_t2083* (*) (List_1_t80 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::TrimExcess()
#define List_1_TrimExcess_m13160(__this, method) (( void (*) (List_1_t80 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::get_Capacity()
#define List_1_get_Capacity_m13161(__this, method) (( int32_t (*) (List_1_t80 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13162(__this, ___value, method) (( void (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<EventDelegate>::get_Count()
#define List_1_get_Count_m13163(__this, method) (( int32_t (*) (List_1_t80 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<EventDelegate>::get_Item(System.Int32)
#define List_1_get_Item_m13164(__this, ___index, method) (( EventDelegate_t172 * (*) (List_1_t80 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<EventDelegate>::set_Item(System.Int32,T)
#define List_1_set_Item_m13165(__this, ___index, ___value, method) (( void (*) (List_1_t80 *, int32_t, EventDelegate_t172 *, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
