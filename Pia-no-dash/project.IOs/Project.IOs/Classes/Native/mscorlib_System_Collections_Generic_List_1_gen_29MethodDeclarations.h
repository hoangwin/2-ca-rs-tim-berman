#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t587;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2391;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t889;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t624;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2027;
// System.Object[]
struct ObjectU5BU5D_t38;
// System.Predicate`1<System.Object>
struct Predicate_1_t2032;
// System.Comparison`1<System.Object>
struct Comparison_1_t342;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m5426_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1__ctor_m5426(__this, method) (( void (*) (List_1_t587 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12475_gshared (List_1_t587 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12475(__this, ___capacity, method) (( void (*) (List_1_t587 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m12477_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12477(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479(__this, method) (( Object_t* (*) (List_1_t587 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12481_gshared (List_1_t587 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12481(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t587 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12483(__this, method) (( Object_t * (*) (List_1_t587 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12485_gshared (List_1_t587 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12485(__this, ___item, method) (( int32_t (*) (List_1_t587 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12487_gshared (List_1_t587 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12487(__this, ___item, method) (( bool (*) (List_1_t587 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12489_gshared (List_1_t587 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12489(__this, ___item, method) (( int32_t (*) (List_1_t587 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12491_gshared (List_1_t587 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12491(__this, ___index, ___item, method) (( void (*) (List_1_t587 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12493_gshared (List_1_t587 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12493(__this, ___item, method) (( void (*) (List_1_t587 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495(__this, method) (( bool (*) (List_1_t587 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12497(__this, method) (( bool (*) (List_1_t587 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12499(__this, method) (( Object_t * (*) (List_1_t587 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12501(__this, method) (( bool (*) (List_1_t587 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12503(__this, method) (( bool (*) (List_1_t587 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12505_gshared (List_1_t587 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12505(__this, ___index, method) (( Object_t * (*) (List_1_t587 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12507_gshared (List_1_t587 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12507(__this, ___index, ___value, method) (( void (*) (List_1_t587 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m12509_gshared (List_1_t587 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m12509(__this, ___item, method) (( void (*) (List_1_t587 *, Object_t *, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12511_gshared (List_1_t587 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12511(__this, ___newCount, method) (( void (*) (List_1_t587 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12513_gshared (List_1_t587 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12513(__this, ___collection, method) (( void (*) (List_1_t587 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12515_gshared (List_1_t587 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12515(__this, ___enumerable, method) (( void (*) (List_1_t587 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12517_gshared (List_1_t587 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12517(__this, ___collection, method) (( void (*) (List_1_t587 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2027 * List_1_AsReadOnly_m12519_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12519(__this, method) (( ReadOnlyCollection_1_t2027 * (*) (List_1_t587 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m12521_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_Clear_m12521(__this, method) (( void (*) (List_1_t587 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m12523_gshared (List_1_t587 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m12523(__this, ___item, method) (( bool (*) (List_1_t587 *, Object_t *, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12525_gshared (List_1_t587 * __this, ObjectU5BU5D_t38* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12525(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t587 *, ObjectU5BU5D_t38*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m12527_gshared (List_1_t587 * __this, Predicate_1_t2032 * ___match, const MethodInfo* method);
#define List_1_Find_m12527(__this, ___match, method) (( Object_t * (*) (List_1_t587 *, Predicate_1_t2032 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12529_gshared (Object_t * __this /* static, unused */, Predicate_1_t2032 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12529(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2032 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12531_gshared (List_1_t587 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2032 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12531(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t587 *, int32_t, int32_t, Predicate_1_t2032 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2025  List_1_GetEnumerator_m12532_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12532(__this, method) (( Enumerator_t2025  (*) (List_1_t587 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12534_gshared (List_1_t587 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m12534(__this, ___item, method) (( int32_t (*) (List_1_t587 *, Object_t *, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12536_gshared (List_1_t587 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12536(__this, ___start, ___delta, method) (( void (*) (List_1_t587 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12538_gshared (List_1_t587 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12538(__this, ___index, method) (( void (*) (List_1_t587 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12540_gshared (List_1_t587 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m12540(__this, ___index, ___item, method) (( void (*) (List_1_t587 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12542_gshared (List_1_t587 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12542(__this, ___collection, method) (( void (*) (List_1_t587 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m12544_gshared (List_1_t587 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m12544(__this, ___item, method) (( bool (*) (List_1_t587 *, Object_t *, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12546_gshared (List_1_t587 * __this, Predicate_1_t2032 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12546(__this, ___match, method) (( int32_t (*) (List_1_t587 *, Predicate_1_t2032 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12548_gshared (List_1_t587 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12548(__this, ___index, method) (( void (*) (List_1_t587 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m12550_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_Reverse_m12550(__this, method) (( void (*) (List_1_t587 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m12552_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_Sort_m12552(__this, method) (( void (*) (List_1_t587 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12554_gshared (List_1_t587 * __this, Comparison_1_t342 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12554(__this, ___comparison, method) (( void (*) (List_1_t587 *, Comparison_1_t342 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t38* List_1_ToArray_m12556_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_ToArray_m12556(__this, method) (( ObjectU5BU5D_t38* (*) (List_1_t587 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m12558_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12558(__this, method) (( void (*) (List_1_t587 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12560_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12560(__this, method) (( int32_t (*) (List_1_t587 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12562_gshared (List_1_t587 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12562(__this, ___value, method) (( void (*) (List_1_t587 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m12564_gshared (List_1_t587 * __this, const MethodInfo* method);
#define List_1_get_Count_m12564(__this, method) (( int32_t (*) (List_1_t587 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m12566_gshared (List_1_t587 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12566(__this, ___index, method) (( Object_t * (*) (List_1_t587 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12568_gshared (List_1_t587 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m12568(__this, ___index, ___value, method) (( void (*) (List_1_t587 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
