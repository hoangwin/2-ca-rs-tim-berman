#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t755;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2942;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t617;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2943;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2459;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t882;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2463;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2466;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m18482_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1__ctor_m18482(__this, method) (( void (*) (List_1_t755 *, const MethodInfo*))List_1__ctor_m18482_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5401_gshared (List_1_t755 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5401(__this, ___capacity, method) (( void (*) (List_1_t755 *, int32_t, const MethodInfo*))List_1__ctor_m5401_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m18483_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18483(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18483_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18484_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18484(__this, method) (( Object_t* (*) (List_1_t755 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18484_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18485_gshared (List_1_t755 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18485(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t755 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18485_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18486_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18486(__this, method) (( Object_t * (*) (List_1_t755 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18486_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18487_gshared (List_1_t755 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18487(__this, ___item, method) (( int32_t (*) (List_1_t755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18487_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18488_gshared (List_1_t755 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18488(__this, ___item, method) (( bool (*) (List_1_t755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18488_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18489_gshared (List_1_t755 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18489(__this, ___item, method) (( int32_t (*) (List_1_t755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18490_gshared (List_1_t755 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18490(__this, ___index, ___item, method) (( void (*) (List_1_t755 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18490_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18491_gshared (List_1_t755 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18491(__this, ___item, method) (( void (*) (List_1_t755 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18491_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18492_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18492(__this, method) (( bool (*) (List_1_t755 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18492_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18493_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18493(__this, method) (( bool (*) (List_1_t755 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18493_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18494_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18494(__this, method) (( Object_t * (*) (List_1_t755 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18494_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18495_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18495(__this, method) (( bool (*) (List_1_t755 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18496_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18496(__this, method) (( bool (*) (List_1_t755 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18496_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18497_gshared (List_1_t755 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18497(__this, ___index, method) (( Object_t * (*) (List_1_t755 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18497_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18498_gshared (List_1_t755 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18498(__this, ___index, ___value, method) (( void (*) (List_1_t755 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18498_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m18499_gshared (List_1_t755 * __this, UILineInfo_t613  ___item, const MethodInfo* method);
#define List_1_Add_m18499(__this, ___item, method) (( void (*) (List_1_t755 *, UILineInfo_t613 , const MethodInfo*))List_1_Add_m18499_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18500_gshared (List_1_t755 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18500(__this, ___newCount, method) (( void (*) (List_1_t755 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18500_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18501_gshared (List_1_t755 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18501(__this, ___collection, method) (( void (*) (List_1_t755 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18501_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18502_gshared (List_1_t755 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18502(__this, ___enumerable, method) (( void (*) (List_1_t755 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18502_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m18503_gshared (List_1_t755 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m18503(__this, ___collection, method) (( void (*) (List_1_t755 *, Object_t*, const MethodInfo*))List_1_AddRange_m18503_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2459 * List_1_AsReadOnly_m18504_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18504(__this, method) (( ReadOnlyCollection_1_t2459 * (*) (List_1_t755 *, const MethodInfo*))List_1_AsReadOnly_m18504_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m18505_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_Clear_m18505(__this, method) (( void (*) (List_1_t755 *, const MethodInfo*))List_1_Clear_m18505_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m18506_gshared (List_1_t755 * __this, UILineInfo_t613  ___item, const MethodInfo* method);
#define List_1_Contains_m18506(__this, ___item, method) (( bool (*) (List_1_t755 *, UILineInfo_t613 , const MethodInfo*))List_1_Contains_m18506_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18507_gshared (List_1_t755 * __this, UILineInfoU5BU5D_t882* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18507(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t755 *, UILineInfoU5BU5D_t882*, int32_t, const MethodInfo*))List_1_CopyTo_m18507_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t613  List_1_Find_m18508_gshared (List_1_t755 * __this, Predicate_1_t2463 * ___match, const MethodInfo* method);
#define List_1_Find_m18508(__this, ___match, method) (( UILineInfo_t613  (*) (List_1_t755 *, Predicate_1_t2463 *, const MethodInfo*))List_1_Find_m18508_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18509_gshared (Object_t * __this /* static, unused */, Predicate_1_t2463 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18509(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2463 *, const MethodInfo*))List_1_CheckMatch_m18509_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18510_gshared (List_1_t755 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2463 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18510(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t755 *, int32_t, int32_t, Predicate_1_t2463 *, const MethodInfo*))List_1_GetIndex_m18510_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2458  List_1_GetEnumerator_m18511_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18511(__this, method) (( Enumerator_t2458  (*) (List_1_t755 *, const MethodInfo*))List_1_GetEnumerator_m18511_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18512_gshared (List_1_t755 * __this, UILineInfo_t613  ___item, const MethodInfo* method);
#define List_1_IndexOf_m18512(__this, ___item, method) (( int32_t (*) (List_1_t755 *, UILineInfo_t613 , const MethodInfo*))List_1_IndexOf_m18512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18513_gshared (List_1_t755 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18513(__this, ___start, ___delta, method) (( void (*) (List_1_t755 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18513_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18514_gshared (List_1_t755 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18514(__this, ___index, method) (( void (*) (List_1_t755 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18514_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18515_gshared (List_1_t755 * __this, int32_t ___index, UILineInfo_t613  ___item, const MethodInfo* method);
#define List_1_Insert_m18515(__this, ___index, ___item, method) (( void (*) (List_1_t755 *, int32_t, UILineInfo_t613 , const MethodInfo*))List_1_Insert_m18515_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18516_gshared (List_1_t755 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18516(__this, ___collection, method) (( void (*) (List_1_t755 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18516_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m18517_gshared (List_1_t755 * __this, UILineInfo_t613  ___item, const MethodInfo* method);
#define List_1_Remove_m18517(__this, ___item, method) (( bool (*) (List_1_t755 *, UILineInfo_t613 , const MethodInfo*))List_1_Remove_m18517_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18518_gshared (List_1_t755 * __this, Predicate_1_t2463 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18518(__this, ___match, method) (( int32_t (*) (List_1_t755 *, Predicate_1_t2463 *, const MethodInfo*))List_1_RemoveAll_m18518_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18519_gshared (List_1_t755 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18519(__this, ___index, method) (( void (*) (List_1_t755 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18519_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m18520_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_Reverse_m18520(__this, method) (( void (*) (List_1_t755 *, const MethodInfo*))List_1_Reverse_m18520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m18521_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_Sort_m18521(__this, method) (( void (*) (List_1_t755 *, const MethodInfo*))List_1_Sort_m18521_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18522_gshared (List_1_t755 * __this, Comparison_1_t2466 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18522(__this, ___comparison, method) (( void (*) (List_1_t755 *, Comparison_1_t2466 *, const MethodInfo*))List_1_Sort_m18522_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t882* List_1_ToArray_m18523_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_ToArray_m18523(__this, method) (( UILineInfoU5BU5D_t882* (*) (List_1_t755 *, const MethodInfo*))List_1_ToArray_m18523_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m18524_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18524(__this, method) (( void (*) (List_1_t755 *, const MethodInfo*))List_1_TrimExcess_m18524_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18525_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18525(__this, method) (( int32_t (*) (List_1_t755 *, const MethodInfo*))List_1_get_Capacity_m18525_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18526_gshared (List_1_t755 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18526(__this, ___value, method) (( void (*) (List_1_t755 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18526_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m18527_gshared (List_1_t755 * __this, const MethodInfo* method);
#define List_1_get_Count_m18527(__this, method) (( int32_t (*) (List_1_t755 *, const MethodInfo*))List_1_get_Count_m18527_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t613  List_1_get_Item_m18528_gshared (List_1_t755 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18528(__this, ___index, method) (( UILineInfo_t613  (*) (List_1_t755 *, int32_t, const MethodInfo*))List_1_get_Item_m18528_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18529_gshared (List_1_t755 * __this, int32_t ___index, UILineInfo_t613  ___value, const MethodInfo* method);
#define List_1_set_Item_m18529(__this, ___index, ___value, method) (( void (*) (List_1_t755 *, int32_t, UILineInfo_t613 , const MethodInfo*))List_1_set_Item_m18529_gshared)(__this, ___index, ___value, method)
