#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t599;
// System.Object
struct Object_t;
// UnityEngine.UI.Text
struct Text_t296;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>
struct IEnumerator_1_t2864;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>
struct ICollection_1_t2865;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>
struct IEnumerable_1_t2866;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
struct ReadOnlyCollection_1_t2311;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t2309;
// System.Predicate`1<UnityEngine.UI.Text>
struct Predicate_1_t2312;
// System.Comparison`1<UnityEngine.UI.Text>
struct Comparison_1_t2314;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_29MethodDeclarations.h"
#define List_1__ctor_m3771(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1__ctor_m5426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
#define List_1__ctor_m16405(__this, ___capacity, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1__ctor_m12475_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
#define List_1__cctor_m16406(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12477_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16407(__this, method) (( Object_t* (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16408(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t599 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12481_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16409(__this, method) (( Object_t * (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16410(__this, ___item, method) (( int32_t (*) (List_1_t599 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12485_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16411(__this, ___item, method) (( bool (*) (List_1_t599 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12487_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16412(__this, ___item, method) (( int32_t (*) (List_1_t599 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12489_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16413(__this, ___index, ___item, method) (( void (*) (List_1_t599 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12491_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16414(__this, ___item, method) (( void (*) (List_1_t599 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12493_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16415(__this, method) (( bool (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16416(__this, method) (( bool (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12497_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16417(__this, method) (( Object_t * (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12499_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16418(__this, method) (( bool (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16419(__this, method) (( bool (*) (List_1_t599 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12503_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16420(__this, ___index, method) (( Object_t * (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12505_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16421(__this, ___index, ___value, method) (( void (*) (List_1_t599 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12507_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
#define List_1_Add_m16422(__this, ___item, method) (( void (*) (List_1_t599 *, Text_t296 *, const MethodInfo*))List_1_Add_m12509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16423(__this, ___newCount, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12511_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16424(__this, ___collection, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12513_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16425(__this, ___enumerable, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12515_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16426(__this, ___collection, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_AddRange_m12517_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
#define List_1_AsReadOnly_m16427(__this, method) (( ReadOnlyCollection_1_t2311 * (*) (List_1_t599 *, const MethodInfo*))List_1_AsReadOnly_m12519_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
#define List_1_Clear_m16428(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1_Clear_m12521_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
#define List_1_Contains_m16429(__this, ___item, method) (( bool (*) (List_1_t599 *, Text_t296 *, const MethodInfo*))List_1_Contains_m12523_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16430(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t599 *, TextU5BU5D_t2309*, int32_t, const MethodInfo*))List_1_CopyTo_m12525_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
#define List_1_Find_m16431(__this, ___match, method) (( Text_t296 * (*) (List_1_t599 *, Predicate_1_t2312 *, const MethodInfo*))List_1_Find_m12527_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16432(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2312 *, const MethodInfo*))List_1_CheckMatch_m12529_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16433(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t599 *, int32_t, int32_t, Predicate_1_t2312 *, const MethodInfo*))List_1_GetIndex_m12531_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
#define List_1_GetEnumerator_m16434(__this, method) (( Enumerator_t2313  (*) (List_1_t599 *, const MethodInfo*))List_1_GetEnumerator_m12532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
#define List_1_IndexOf_m16435(__this, ___item, method) (( int32_t (*) (List_1_t599 *, Text_t296 *, const MethodInfo*))List_1_IndexOf_m12534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16436(__this, ___start, ___delta, method) (( void (*) (List_1_t599 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12536_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16437(__this, ___index, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12538_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
#define List_1_Insert_m16438(__this, ___index, ___item, method) (( void (*) (List_1_t599 *, int32_t, Text_t296 *, const MethodInfo*))List_1_Insert_m12540_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16439(__this, ___collection, method) (( void (*) (List_1_t599 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12542_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
#define List_1_Remove_m16440(__this, ___item, method) (( bool (*) (List_1_t599 *, Text_t296 *, const MethodInfo*))List_1_Remove_m12544_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16441(__this, ___match, method) (( int32_t (*) (List_1_t599 *, Predicate_1_t2312 *, const MethodInfo*))List_1_RemoveAll_m12546_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16442(__this, ___index, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
#define List_1_Reverse_m16443(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1_Reverse_m12550_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
#define List_1_Sort_m16444(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1_Sort_m12552_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16445(__this, ___comparison, method) (( void (*) (List_1_t599 *, Comparison_1_t2314 *, const MethodInfo*))List_1_Sort_m12554_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
#define List_1_ToArray_m16446(__this, method) (( TextU5BU5D_t2309* (*) (List_1_t599 *, const MethodInfo*))List_1_ToArray_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
#define List_1_TrimExcess_m16447(__this, method) (( void (*) (List_1_t599 *, const MethodInfo*))List_1_TrimExcess_m12558_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
#define List_1_get_Capacity_m16448(__this, method) (( int32_t (*) (List_1_t599 *, const MethodInfo*))List_1_get_Capacity_m12560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16449(__this, ___value, method) (( void (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12562_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
#define List_1_get_Count_m16450(__this, method) (( int32_t (*) (List_1_t599 *, const MethodInfo*))List_1_get_Count_m12564_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
#define List_1_get_Item_m16451(__this, ___index, method) (( Text_t296 * (*) (List_1_t599 *, int32_t, const MethodInfo*))List_1_get_Item_m12566_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#define List_1_set_Item_m16452(__this, ___index, ___value, method) (( void (*) (List_1_t599 *, int32_t, Text_t296 *, const MethodInfo*))List_1_set_Item_m12568_gshared)(__this, ___index, ___value, method)
