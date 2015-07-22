#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t754;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2939;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2940;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2941;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2450;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t881;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2454;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2457;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_35.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m18340_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1__ctor_m18340(__this, method) (( void (*) (List_1_t754 *, const MethodInfo*))List_1__ctor_m18340_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5400_gshared (List_1_t754 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5400(__this, ___capacity, method) (( void (*) (List_1_t754 *, int32_t, const MethodInfo*))List_1__ctor_m5400_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m18341_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18341(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18341_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18342_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18342(__this, method) (( Object_t* (*) (List_1_t754 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18342_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18343_gshared (List_1_t754 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18343(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t754 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18343_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18344_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18344(__this, method) (( Object_t * (*) (List_1_t754 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18344_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18345_gshared (List_1_t754 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18345(__this, ___item, method) (( int32_t (*) (List_1_t754 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18345_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18346_gshared (List_1_t754 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18346(__this, ___item, method) (( bool (*) (List_1_t754 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18346_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18347_gshared (List_1_t754 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18347(__this, ___item, method) (( int32_t (*) (List_1_t754 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18347_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18348_gshared (List_1_t754 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18348(__this, ___index, ___item, method) (( void (*) (List_1_t754 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18348_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18349_gshared (List_1_t754 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18349(__this, ___item, method) (( void (*) (List_1_t754 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18350_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18350(__this, method) (( bool (*) (List_1_t754 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18350_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18351_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18351(__this, method) (( bool (*) (List_1_t754 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18351_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18352_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18352(__this, method) (( Object_t * (*) (List_1_t754 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18352_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18353_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18353(__this, method) (( bool (*) (List_1_t754 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18353_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18354_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18354(__this, method) (( bool (*) (List_1_t754 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18354_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18355_gshared (List_1_t754 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18355(__this, ___index, method) (( Object_t * (*) (List_1_t754 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18355_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18356_gshared (List_1_t754 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18356(__this, ___index, ___value, method) (( void (*) (List_1_t754 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18356_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m18357_gshared (List_1_t754 * __this, UICharInfo_t615  ___item, const MethodInfo* method);
#define List_1_Add_m18357(__this, ___item, method) (( void (*) (List_1_t754 *, UICharInfo_t615 , const MethodInfo*))List_1_Add_m18357_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18358_gshared (List_1_t754 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18358(__this, ___newCount, method) (( void (*) (List_1_t754 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18358_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18359_gshared (List_1_t754 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18359(__this, ___collection, method) (( void (*) (List_1_t754 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18359_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18360_gshared (List_1_t754 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18360(__this, ___enumerable, method) (( void (*) (List_1_t754 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18360_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18361_gshared (List_1_t754 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18361(__this, ___collection, method) (( void (*) (List_1_t754 *, Object_t*, const MethodInfo*))List_1_AddRange_m18361_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2450 * List_1_AsReadOnly_m18362_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18362(__this, method) (( ReadOnlyCollection_1_t2450 * (*) (List_1_t754 *, const MethodInfo*))List_1_AsReadOnly_m18362_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m18363_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_Clear_m18363(__this, method) (( void (*) (List_1_t754 *, const MethodInfo*))List_1_Clear_m18363_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m18364_gshared (List_1_t754 * __this, UICharInfo_t615  ___item, const MethodInfo* method);
#define List_1_Contains_m18364(__this, ___item, method) (( bool (*) (List_1_t754 *, UICharInfo_t615 , const MethodInfo*))List_1_Contains_m18364_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18365_gshared (List_1_t754 * __this, UICharInfoU5BU5D_t881* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18365(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t754 *, UICharInfoU5BU5D_t881*, int32_t, const MethodInfo*))List_1_CopyTo_m18365_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t615  List_1_Find_m18366_gshared (List_1_t754 * __this, Predicate_1_t2454 * ___match, const MethodInfo* method);
#define List_1_Find_m18366(__this, ___match, method) (( UICharInfo_t615  (*) (List_1_t754 *, Predicate_1_t2454 *, const MethodInfo*))List_1_Find_m18366_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18367_gshared (Object_t * __this /* static, unused */, Predicate_1_t2454 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18367(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2454 *, const MethodInfo*))List_1_CheckMatch_m18367_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18368_gshared (List_1_t754 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2454 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18368(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t754 *, int32_t, int32_t, Predicate_1_t2454 *, const MethodInfo*))List_1_GetIndex_m18368_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2449  List_1_GetEnumerator_m18369_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18369(__this, method) (( Enumerator_t2449  (*) (List_1_t754 *, const MethodInfo*))List_1_GetEnumerator_m18369_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18370_gshared (List_1_t754 * __this, UICharInfo_t615  ___item, const MethodInfo* method);
#define List_1_IndexOf_m18370(__this, ___item, method) (( int32_t (*) (List_1_t754 *, UICharInfo_t615 , const MethodInfo*))List_1_IndexOf_m18370_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18371_gshared (List_1_t754 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18371(__this, ___start, ___delta, method) (( void (*) (List_1_t754 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18371_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18372_gshared (List_1_t754 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18372(__this, ___index, method) (( void (*) (List_1_t754 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18372_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18373_gshared (List_1_t754 * __this, int32_t ___index, UICharInfo_t615  ___item, const MethodInfo* method);
#define List_1_Insert_m18373(__this, ___index, ___item, method) (( void (*) (List_1_t754 *, int32_t, UICharInfo_t615 , const MethodInfo*))List_1_Insert_m18373_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18374_gshared (List_1_t754 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18374(__this, ___collection, method) (( void (*) (List_1_t754 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18374_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m18375_gshared (List_1_t754 * __this, UICharInfo_t615  ___item, const MethodInfo* method);
#define List_1_Remove_m18375(__this, ___item, method) (( bool (*) (List_1_t754 *, UICharInfo_t615 , const MethodInfo*))List_1_Remove_m18375_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18376_gshared (List_1_t754 * __this, Predicate_1_t2454 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18376(__this, ___match, method) (( int32_t (*) (List_1_t754 *, Predicate_1_t2454 *, const MethodInfo*))List_1_RemoveAll_m18376_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18377_gshared (List_1_t754 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18377(__this, ___index, method) (( void (*) (List_1_t754 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18377_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m18378_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_Reverse_m18378(__this, method) (( void (*) (List_1_t754 *, const MethodInfo*))List_1_Reverse_m18378_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m18379_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_Sort_m18379(__this, method) (( void (*) (List_1_t754 *, const MethodInfo*))List_1_Sort_m18379_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18380_gshared (List_1_t754 * __this, Comparison_1_t2457 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18380(__this, ___comparison, method) (( void (*) (List_1_t754 *, Comparison_1_t2457 *, const MethodInfo*))List_1_Sort_m18380_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t881* List_1_ToArray_m18381_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_ToArray_m18381(__this, method) (( UICharInfoU5BU5D_t881* (*) (List_1_t754 *, const MethodInfo*))List_1_ToArray_m18381_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m18382_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18382(__this, method) (( void (*) (List_1_t754 *, const MethodInfo*))List_1_TrimExcess_m18382_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18383_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18383(__this, method) (( int32_t (*) (List_1_t754 *, const MethodInfo*))List_1_get_Capacity_m18383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18384_gshared (List_1_t754 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18384(__this, ___value, method) (( void (*) (List_1_t754 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18384_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m18385_gshared (List_1_t754 * __this, const MethodInfo* method);
#define List_1_get_Count_m18385(__this, method) (( int32_t (*) (List_1_t754 *, const MethodInfo*))List_1_get_Count_m18385_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t615  List_1_get_Item_m18386_gshared (List_1_t754 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18386(__this, ___index, method) (( UICharInfo_t615  (*) (List_1_t754 *, int32_t, const MethodInfo*))List_1_get_Item_m18386_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18387_gshared (List_1_t754 * __this, int32_t ___index, UICharInfo_t615  ___value, const MethodInfo* method);
#define List_1_set_Item_m18387(__this, ___index, ___value, method) (( void (*) (List_1_t754 *, int32_t, UICharInfo_t615 , const MethodInfo*))List_1_set_Item_m18387_gshared)(__this, ___index, ___value, method)
