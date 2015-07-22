#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t418;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t2833;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t2834;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t2835;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t2267;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t2263;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2271;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t380;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m3701_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1__ctor_m3701(__this, method) (( void (*) (List_1_t418 *, const MethodInfo*))List_1__ctor_m3701_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15576_gshared (List_1_t418 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15576(__this, ___capacity, method) (( void (*) (List_1_t418 *, int32_t, const MethodInfo*))List_1__ctor_m15576_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m15577_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15577(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15577_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15578_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15578(__this, method) (( Object_t* (*) (List_1_t418 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15578_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15579_gshared (List_1_t418 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15579(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t418 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15579_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15580_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15580(__this, method) (( Object_t * (*) (List_1_t418 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15581_gshared (List_1_t418 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15581(__this, ___item, method) (( int32_t (*) (List_1_t418 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15581_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15582_gshared (List_1_t418 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15582(__this, ___item, method) (( bool (*) (List_1_t418 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15582_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15583_gshared (List_1_t418 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15583(__this, ___item, method) (( int32_t (*) (List_1_t418 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15583_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15584_gshared (List_1_t418 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15584(__this, ___index, ___item, method) (( void (*) (List_1_t418 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15584_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15585_gshared (List_1_t418 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15585(__this, ___item, method) (( void (*) (List_1_t418 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15585_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15586_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15586(__this, method) (( bool (*) (List_1_t418 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15586_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15587_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15587(__this, method) (( bool (*) (List_1_t418 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15587_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15588_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15588(__this, method) (( Object_t * (*) (List_1_t418 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15588_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15589_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15589(__this, method) (( bool (*) (List_1_t418 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15589_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15590_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15590(__this, method) (( bool (*) (List_1_t418 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15590_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15591_gshared (List_1_t418 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15591(__this, ___index, method) (( Object_t * (*) (List_1_t418 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15591_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15592_gshared (List_1_t418 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15592(__this, ___index, ___value, method) (( void (*) (List_1_t418 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15592_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m15593_gshared (List_1_t418 * __this, RaycastResult_t413  ___item, const MethodInfo* method);
#define List_1_Add_m15593(__this, ___item, method) (( void (*) (List_1_t418 *, RaycastResult_t413 , const MethodInfo*))List_1_Add_m15593_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15594_gshared (List_1_t418 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15594(__this, ___newCount, method) (( void (*) (List_1_t418 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15594_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15595_gshared (List_1_t418 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15595(__this, ___collection, method) (( void (*) (List_1_t418 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15595_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15596_gshared (List_1_t418 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15596(__this, ___enumerable, method) (( void (*) (List_1_t418 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15596_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15597_gshared (List_1_t418 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15597(__this, ___collection, method) (( void (*) (List_1_t418 *, Object_t*, const MethodInfo*))List_1_AddRange_m15597_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2267 * List_1_AsReadOnly_m15598_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15598(__this, method) (( ReadOnlyCollection_1_t2267 * (*) (List_1_t418 *, const MethodInfo*))List_1_AsReadOnly_m15598_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m15599_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_Clear_m15599(__this, method) (( void (*) (List_1_t418 *, const MethodInfo*))List_1_Clear_m15599_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m15600_gshared (List_1_t418 * __this, RaycastResult_t413  ___item, const MethodInfo* method);
#define List_1_Contains_m15600(__this, ___item, method) (( bool (*) (List_1_t418 *, RaycastResult_t413 , const MethodInfo*))List_1_Contains_m15600_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15601_gshared (List_1_t418 * __this, RaycastResultU5BU5D_t2263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15601(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t418 *, RaycastResultU5BU5D_t2263*, int32_t, const MethodInfo*))List_1_CopyTo_m15601_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t413  List_1_Find_m15602_gshared (List_1_t418 * __this, Predicate_1_t2271 * ___match, const MethodInfo* method);
#define List_1_Find_m15602(__this, ___match, method) (( RaycastResult_t413  (*) (List_1_t418 *, Predicate_1_t2271 *, const MethodInfo*))List_1_Find_m15602_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15603_gshared (Object_t * __this /* static, unused */, Predicate_1_t2271 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15603(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2271 *, const MethodInfo*))List_1_CheckMatch_m15603_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15604_gshared (List_1_t418 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2271 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15604(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t418 *, int32_t, int32_t, Predicate_1_t2271 *, const MethodInfo*))List_1_GetIndex_m15604_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t2265  List_1_GetEnumerator_m15605_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15605(__this, method) (( Enumerator_t2265  (*) (List_1_t418 *, const MethodInfo*))List_1_GetEnumerator_m15605_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15606_gshared (List_1_t418 * __this, RaycastResult_t413  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15606(__this, ___item, method) (( int32_t (*) (List_1_t418 *, RaycastResult_t413 , const MethodInfo*))List_1_IndexOf_m15606_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15607_gshared (List_1_t418 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15607(__this, ___start, ___delta, method) (( void (*) (List_1_t418 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15607_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15608_gshared (List_1_t418 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15608(__this, ___index, method) (( void (*) (List_1_t418 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15608_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15609_gshared (List_1_t418 * __this, int32_t ___index, RaycastResult_t413  ___item, const MethodInfo* method);
#define List_1_Insert_m15609(__this, ___index, ___item, method) (( void (*) (List_1_t418 *, int32_t, RaycastResult_t413 , const MethodInfo*))List_1_Insert_m15609_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15610_gshared (List_1_t418 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15610(__this, ___collection, method) (( void (*) (List_1_t418 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15610_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m15611_gshared (List_1_t418 * __this, RaycastResult_t413  ___item, const MethodInfo* method);
#define List_1_Remove_m15611(__this, ___item, method) (( bool (*) (List_1_t418 *, RaycastResult_t413 , const MethodInfo*))List_1_Remove_m15611_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15612_gshared (List_1_t418 * __this, Predicate_1_t2271 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15612(__this, ___match, method) (( int32_t (*) (List_1_t418 *, Predicate_1_t2271 *, const MethodInfo*))List_1_RemoveAll_m15612_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15613_gshared (List_1_t418 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15613(__this, ___index, method) (( void (*) (List_1_t418 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15613_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m15614_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_Reverse_m15614(__this, method) (( void (*) (List_1_t418 *, const MethodInfo*))List_1_Reverse_m15614_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m15615_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_Sort_m15615(__this, method) (( void (*) (List_1_t418 *, const MethodInfo*))List_1_Sort_m15615_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m3666_gshared (List_1_t418 * __this, Comparison_1_t380 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m3666(__this, ___comparison, method) (( void (*) (List_1_t418 *, Comparison_1_t380 *, const MethodInfo*))List_1_Sort_m3666_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t2263* List_1_ToArray_m15616_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_ToArray_m15616(__this, method) (( RaycastResultU5BU5D_t2263* (*) (List_1_t418 *, const MethodInfo*))List_1_ToArray_m15616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m15617_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15617(__this, method) (( void (*) (List_1_t418 *, const MethodInfo*))List_1_TrimExcess_m15617_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15618_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15618(__this, method) (( int32_t (*) (List_1_t418 *, const MethodInfo*))List_1_get_Capacity_m15618_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15619_gshared (List_1_t418 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15619(__this, ___value, method) (( void (*) (List_1_t418 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15619_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m15620_gshared (List_1_t418 * __this, const MethodInfo* method);
#define List_1_get_Count_m15620(__this, method) (( int32_t (*) (List_1_t418 *, const MethodInfo*))List_1_get_Count_m15620_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t413  List_1_get_Item_m15621_gshared (List_1_t418 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15621(__this, ___index, method) (( RaycastResult_t413  (*) (List_1_t418 *, int32_t, const MethodInfo*))List_1_get_Item_m15621_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15622_gshared (List_1_t418 * __this, int32_t ___index, RaycastResult_t413  ___value, const MethodInfo* method);
#define List_1_set_Item_m15622(__this, ___index, ___value, method) (( void (*) (List_1_t418 *, int32_t, RaycastResult_t413 , const MethodInfo*))List_1_set_Item_m15622_gshared)(__this, ___index, ___value, method)
