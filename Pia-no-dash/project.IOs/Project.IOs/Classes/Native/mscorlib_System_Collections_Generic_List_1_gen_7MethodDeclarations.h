#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t165;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2750;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2743;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2781;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2146;
// System.Int32[]
struct Int32U5BU5D_t195;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2148;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2152;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m2083_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1__ctor_m2083(__this, method) (( void (*) (List_1_t165 *, const MethodInfo*))List_1__ctor_m2083_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m13977_gshared (List_1_t165 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m13977(__this, ___capacity, method) (( void (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1__ctor_m13977_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m13978_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m13978(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m13978_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13979_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13979(__this, method) (( Object_t* (*) (List_1_t165 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13979_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13980_gshared (List_1_t165 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m13980(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t165 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m13980_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13981_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13981(__this, method) (( Object_t * (*) (List_1_t165 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m13981_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m13982_gshared (List_1_t165 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m13982(__this, ___item, method) (( int32_t (*) (List_1_t165 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m13982_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m13983_gshared (List_1_t165 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m13983(__this, ___item, method) (( bool (*) (List_1_t165 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m13983_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13984_gshared (List_1_t165 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m13984(__this, ___item, method) (( int32_t (*) (List_1_t165 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m13984_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m13985_gshared (List_1_t165 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m13985(__this, ___index, ___item, method) (( void (*) (List_1_t165 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m13985_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m13986_gshared (List_1_t165 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m13986(__this, ___item, method) (( void (*) (List_1_t165 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m13986_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13987_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13987(__this, method) (( bool (*) (List_1_t165 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13987_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13988_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13988(__this, method) (( bool (*) (List_1_t165 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m13988_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13989_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m13989(__this, method) (( Object_t * (*) (List_1_t165 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m13989_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13990_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m13990(__this, method) (( bool (*) (List_1_t165 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m13990_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13991_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m13991(__this, method) (( bool (*) (List_1_t165 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m13991_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13992_gshared (List_1_t165 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m13992(__this, ___index, method) (( Object_t * (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m13992_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m13993_gshared (List_1_t165 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m13993(__this, ___index, ___value, method) (( void (*) (List_1_t165 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m13993_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m13994_gshared (List_1_t165 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m13994(__this, ___item, method) (( void (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_Add_m13994_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13995_gshared (List_1_t165 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m13995(__this, ___newCount, method) (( void (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m13995_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13996_gshared (List_1_t165 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m13996(__this, ___collection, method) (( void (*) (List_1_t165 *, Object_t*, const MethodInfo*))List_1_AddCollection_m13996_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m13997_gshared (List_1_t165 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m13997(__this, ___enumerable, method) (( void (*) (List_1_t165 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m13997_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13998_gshared (List_1_t165 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m13998(__this, ___collection, method) (( void (*) (List_1_t165 *, Object_t*, const MethodInfo*))List_1_AddRange_m13998_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2146 * List_1_AsReadOnly_m13999_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m13999(__this, method) (( ReadOnlyCollection_1_t2146 * (*) (List_1_t165 *, const MethodInfo*))List_1_AsReadOnly_m13999_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14000_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_Clear_m14000(__this, method) (( void (*) (List_1_t165 *, const MethodInfo*))List_1_Clear_m14000_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14001_gshared (List_1_t165 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m14001(__this, ___item, method) (( bool (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_Contains_m14001_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14002_gshared (List_1_t165 * __this, Int32U5BU5D_t195* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14002(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t165 *, Int32U5BU5D_t195*, int32_t, const MethodInfo*))List_1_CopyTo_m14002_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m14003_gshared (List_1_t165 * __this, Predicate_1_t2148 * ___match, const MethodInfo* method);
#define List_1_Find_m14003(__this, ___match, method) (( int32_t (*) (List_1_t165 *, Predicate_1_t2148 *, const MethodInfo*))List_1_Find_m14003_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14004_gshared (Object_t * __this /* static, unused */, Predicate_1_t2148 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14004(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2148 *, const MethodInfo*))List_1_CheckMatch_m14004_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14005_gshared (List_1_t165 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2148 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14005(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t165 *, int32_t, int32_t, Predicate_1_t2148 *, const MethodInfo*))List_1_GetIndex_m14005_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2144  List_1_GetEnumerator_m14006_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14006(__this, method) (( Enumerator_t2144  (*) (List_1_t165 *, const MethodInfo*))List_1_GetEnumerator_m14006_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14007_gshared (List_1_t165 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m14007(__this, ___item, method) (( int32_t (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_IndexOf_m14007_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14008_gshared (List_1_t165 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14008(__this, ___start, ___delta, method) (( void (*) (List_1_t165 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14008_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14009_gshared (List_1_t165 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14009(__this, ___index, method) (( void (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14009_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14010_gshared (List_1_t165 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m14010(__this, ___index, ___item, method) (( void (*) (List_1_t165 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m14010_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14011_gshared (List_1_t165 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14011(__this, ___collection, method) (( void (*) (List_1_t165 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14011_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14012_gshared (List_1_t165 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m14012(__this, ___item, method) (( bool (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_Remove_m14012_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14013_gshared (List_1_t165 * __this, Predicate_1_t2148 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14013(__this, ___match, method) (( int32_t (*) (List_1_t165 *, Predicate_1_t2148 *, const MethodInfo*))List_1_RemoveAll_m14013_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14014_gshared (List_1_t165 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14014(__this, ___index, method) (( void (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14014_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14015_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_Reverse_m14015(__this, method) (( void (*) (List_1_t165 *, const MethodInfo*))List_1_Reverse_m14015_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14016_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_Sort_m14016(__this, method) (( void (*) (List_1_t165 *, const MethodInfo*))List_1_Sort_m14016_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14017_gshared (List_1_t165 * __this, Comparison_1_t2152 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14017(__this, ___comparison, method) (( void (*) (List_1_t165 *, Comparison_1_t2152 *, const MethodInfo*))List_1_Sort_m14017_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t195* List_1_ToArray_m14018_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_ToArray_m14018(__this, method) (( Int32U5BU5D_t195* (*) (List_1_t165 *, const MethodInfo*))List_1_ToArray_m14018_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14019_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14019(__this, method) (( void (*) (List_1_t165 *, const MethodInfo*))List_1_TrimExcess_m14019_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14020_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14020(__this, method) (( int32_t (*) (List_1_t165 *, const MethodInfo*))List_1_get_Capacity_m14020_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14021_gshared (List_1_t165 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14021(__this, ___value, method) (( void (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14021_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14022_gshared (List_1_t165 * __this, const MethodInfo* method);
#define List_1_get_Count_m14022(__this, method) (( int32_t (*) (List_1_t165 *, const MethodInfo*))List_1_get_Count_m14022_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m14023_gshared (List_1_t165 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14023(__this, ___index, method) (( int32_t (*) (List_1_t165 *, int32_t, const MethodInfo*))List_1_get_Item_m14023_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14024_gshared (List_1_t165 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m14024(__this, ___index, ___value, method) (( void (*) (List_1_t165 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m14024_gshared)(__this, ___index, ___value, method)
