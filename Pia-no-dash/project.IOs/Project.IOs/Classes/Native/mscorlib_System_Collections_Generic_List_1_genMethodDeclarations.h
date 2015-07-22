#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t22;
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t24;
// System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable>
struct IEnumerator_1_t2740;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<System.Collections.Hashtable>
struct ICollection_1_t2741;
// System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable>
struct IEnumerable_1_t2742;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Hashtable>
struct ReadOnlyCollection_1_t2039;
// System.Collections.Hashtable[]
struct HashtableU5BU5D_t2024;
// System.Predicate`1<System.Collections.Hashtable>
struct Predicate_1_t2040;
// System.Comparison`1<System.Collections.Hashtable>
struct Comparison_1_t2041;
// System.Collections.Generic.List`1/Enumerator<System.Collections.Hashtable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
#define List_1__ctor_m333(__this, method) (( void (*) (List_1_t22 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::.ctor(System.Int32)
#define List_1__ctor_m12474(__this, ___capacity, method) (( void (*) (List_1_t22 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::.cctor()
#define List_1__cctor_m12476(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12478(__this, method) (( Object_t* (*) (List_1_t22 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m12480(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t22 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12482(__this, method) (( Object_t * (*) (List_1_t22 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m12484(__this, ___item, method) (( int32_t (*) (List_1_t22 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m12486(__this, ___item, method) (( bool (*) (List_1_t22 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m12488(__this, ___item, method) (( int32_t (*) (List_1_t22 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m12490(__this, ___index, ___item, method) (( void (*) (List_1_t22 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m12492(__this, ___item, method) (( void (*) (List_1_t22 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12494(__this, method) (( bool (*) (List_1_t22 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12496(__this, method) (( bool (*) (List_1_t22 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m12498(__this, method) (( Object_t * (*) (List_1_t22 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m12500(__this, method) (( bool (*) (List_1_t22 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m12502(__this, method) (( bool (*) (List_1_t22 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m12504(__this, ___index, method) (( Object_t * (*) (List_1_t22 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m12506(__this, ___index, ___value, method) (( void (*) (List_1_t22 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Add(T)
#define List_1_Add_m12508(__this, ___item, method) (( void (*) (List_1_t22 *, Hashtable_t24 *, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m12510(__this, ___newCount, method) (( void (*) (List_1_t22 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m12512(__this, ___collection, method) (( void (*) (List_1_t22 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m12514(__this, ___enumerable, method) (( void (*) (List_1_t22 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m12516(__this, ___collection, method) (( void (*) (List_1_t22 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Collections.Hashtable>::AsReadOnly()
#define List_1_AsReadOnly_m12518(__this, method) (( ReadOnlyCollection_1_t2039 * (*) (List_1_t22 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Clear()
#define List_1_Clear_m12520(__this, method) (( void (*) (List_1_t22 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Hashtable>::Contains(T)
#define List_1_Contains_m12522(__this, ___item, method) (( bool (*) (List_1_t22 *, Hashtable_t24 *, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m12524(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t22 *, HashtableU5BU5D_t2024*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Collections.Hashtable>::Find(System.Predicate`1<T>)
#define List_1_Find_m12526(__this, ___match, method) (( Hashtable_t24 * (*) (List_1_t22 *, Predicate_1_t2040 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m12528(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2040 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m12530(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t22 *, int32_t, int32_t, Predicate_1_t2040 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Hashtable>::GetEnumerator()
#define List_1_GetEnumerator_m436(__this, method) (( Enumerator_t67  (*) (List_1_t22 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::IndexOf(T)
#define List_1_IndexOf_m12533(__this, ___item, method) (( int32_t (*) (List_1_t22 *, Hashtable_t24 *, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m12535(__this, ___start, ___delta, method) (( void (*) (List_1_t22 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m12537(__this, ___index, method) (( void (*) (List_1_t22 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Insert(System.Int32,T)
#define List_1_Insert_m12539(__this, ___index, ___item, method) (( void (*) (List_1_t22 *, int32_t, Hashtable_t24 *, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m12541(__this, ___collection, method) (( void (*) (List_1_t22 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Collections.Hashtable>::Remove(T)
#define List_1_Remove_m12543(__this, ___item, method) (( bool (*) (List_1_t22 *, Hashtable_t24 *, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m12545(__this, ___match, method) (( int32_t (*) (List_1_t22 *, Predicate_1_t2040 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m12547(__this, ___index, method) (( void (*) (List_1_t22 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Reverse()
#define List_1_Reverse_m12549(__this, method) (( void (*) (List_1_t22 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Sort()
#define List_1_Sort_m12551(__this, method) (( void (*) (List_1_t22 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m12553(__this, ___comparison, method) (( void (*) (List_1_t22 *, Comparison_1_t2041 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Collections.Hashtable>::ToArray()
#define List_1_ToArray_m12555(__this, method) (( HashtableU5BU5D_t2024* (*) (List_1_t22 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::TrimExcess()
#define List_1_TrimExcess_m12557(__this, method) (( void (*) (List_1_t22 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Capacity()
#define List_1_get_Capacity_m12559(__this, method) (( int32_t (*) (List_1_t22 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m12561(__this, ___value, method) (( void (*) (List_1_t22 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Count()
#define List_1_get_Count_m12563(__this, method) (( int32_t (*) (List_1_t22 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Collections.Hashtable>::get_Item(System.Int32)
#define List_1_get_Item_m12565(__this, ___index, method) (( Hashtable_t24 * (*) (List_1_t22 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Hashtable>::set_Item(System.Int32,T)
#define List_1_set_Item_m12567(__this, ___index, ___value, method) (( void (*) (List_1_t22 *, int32_t, Hashtable_t24 *, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
