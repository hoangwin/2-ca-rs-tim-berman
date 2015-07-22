#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t132;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2751;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t888;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2754;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t2079;
// System.String[]
struct StringU5BU5D_t284;
// System.Predicate`1<System.String>
struct Predicate_1_t2080;
// System.Comparison`1<System.String>
struct Comparison_1_t2082;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
#define List_1__ctor_m2029(__this, method) (( void (*) (List_1_t132 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m13028(__this, ___capacity, method) (( void (*) (List_1_t132 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m13029(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13030(__this, method) (( Object_t* (*) (List_1_t132 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13031(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t132 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13032(__this, method) (( Object_t * (*) (List_1_t132 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13033(__this, ___item, method) (( int32_t (*) (List_1_t132 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13034(__this, ___item, method) (( bool (*) (List_1_t132 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13035(__this, ___item, method) (( int32_t (*) (List_1_t132 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13036(__this, ___index, ___item, method) (( void (*) (List_1_t132 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13037(__this, ___item, method) (( void (*) (List_1_t132 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13038(__this, method) (( bool (*) (List_1_t132 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13039(__this, method) (( bool (*) (List_1_t132 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13040(__this, method) (( Object_t * (*) (List_1_t132 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13041(__this, method) (( bool (*) (List_1_t132 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13042(__this, method) (( bool (*) (List_1_t132 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13043(__this, ___index, method) (( Object_t * (*) (List_1_t132 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13044(__this, ___index, ___value, method) (( void (*) (List_1_t132 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m13045(__this, ___item, method) (( void (*) (List_1_t132 *, String_t*, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13046(__this, ___newCount, method) (( void (*) (List_1_t132 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13047(__this, ___collection, method) (( void (*) (List_1_t132 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13048(__this, ___enumerable, method) (( void (*) (List_1_t132 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13049(__this, ___collection, method) (( void (*) (List_1_t132 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.String>::AsReadOnly()
#define List_1_AsReadOnly_m13050(__this, method) (( ReadOnlyCollection_1_t2079 * (*) (List_1_t132 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m13051(__this, method) (( void (*) (List_1_t132 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m13052(__this, ___item, method) (( bool (*) (List_1_t132 *, String_t*, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13053(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t132 *, StringU5BU5D_t284*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.String>::Find(System.Predicate`1<T>)
#define List_1_Find_m13054(__this, ___match, method) (( String_t* (*) (List_1_t132 *, Predicate_1_t2080 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13055(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2080 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13056(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t132 *, int32_t, int32_t, Predicate_1_t2080 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m13057(__this, method) (( Enumerator_t2081  (*) (List_1_t132 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m13058(__this, ___item, method) (( int32_t (*) (List_1_t132 *, String_t*, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13059(__this, ___start, ___delta, method) (( void (*) (List_1_t132 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13060(__this, ___index, method) (( void (*) (List_1_t132 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m13061(__this, ___index, ___item, method) (( void (*) (List_1_t132 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13062(__this, ___collection, method) (( void (*) (List_1_t132 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m13063(__this, ___item, method) (( bool (*) (List_1_t132 *, String_t*, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13064(__this, ___match, method) (( int32_t (*) (List_1_t132 *, Predicate_1_t2080 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13065(__this, ___index, method) (( void (*) (List_1_t132 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Reverse()
#define List_1_Reverse_m13066(__this, method) (( void (*) (List_1_t132 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort()
#define List_1_Sort_m2450(__this, method) (( void (*) (List_1_t132 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13067(__this, ___comparison, method) (( void (*) (List_1_t132 *, Comparison_1_t2082 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m12447(__this, method) (( StringU5BU5D_t284* (*) (List_1_t132 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::TrimExcess()
#define List_1_TrimExcess_m13068(__this, method) (( void (*) (List_1_t132 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m13069(__this, method) (( int32_t (*) (List_1_t132 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13070(__this, ___value, method) (( void (*) (List_1_t132 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m13071(__this, method) (( int32_t (*) (List_1_t132 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m13072(__this, ___index, method) (( String_t* (*) (List_1_t132 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m13073(__this, ___index, ___value, method) (( void (*) (List_1_t132 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
