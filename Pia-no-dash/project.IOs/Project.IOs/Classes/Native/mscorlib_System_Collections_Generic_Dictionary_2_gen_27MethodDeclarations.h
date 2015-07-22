#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2640;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t889;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t3028;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2644;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2648;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2050;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t3032;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3033;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3034;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m20671_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20671(__this, method) (( void (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2__ctor_m20671_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20672_gshared (Dictionary_2_t2640 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20672(__this, ___comparer, method) (( void (*) (Dictionary_2_t2640 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20672_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20674_gshared (Dictionary_2_t2640 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m20674(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2640 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20674_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20676_gshared (Dictionary_2_t2640 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20676(__this, ___capacity, method) (( void (*) (Dictionary_2_t2640 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20676_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20678_gshared (Dictionary_2_t2640 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20678(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2640 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20678_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20680_gshared (Dictionary_2_t2640 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20680(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2640 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m20680_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20682_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20682(__this, method) (( Object_t* (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20682_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20684_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20684(__this, method) (( Object_t* (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20686_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20686(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20686_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20688_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20688(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2640 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20688_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20690_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20690(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2640 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20690_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20692_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20692(__this, ___key, method) (( bool (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20692_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20694_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20694(__this, ___key, method) (( void (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20694_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20696_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20696(__this, method) (( bool (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20696_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20698_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20698(__this, method) (( Object_t * (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20700_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20700(__this, method) (( bool (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20700_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20702_gshared (Dictionary_2_t2640 * __this, KeyValuePair_2_t2641  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20702(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2640 *, KeyValuePair_2_t2641 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20702_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20704_gshared (Dictionary_2_t2640 * __this, KeyValuePair_2_t2641  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20704(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2640 *, KeyValuePair_2_t2641 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20704_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20706_gshared (Dictionary_2_t2640 * __this, KeyValuePair_2U5BU5D_t3033* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20706(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2640 *, KeyValuePair_2U5BU5D_t3033*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20706_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20708_gshared (Dictionary_2_t2640 * __this, KeyValuePair_2_t2641  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20708(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2640 *, KeyValuePair_2_t2641 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20708_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20710_gshared (Dictionary_2_t2640 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20710(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2640 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20710_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20712_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20712(__this, method) (( Object_t * (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20712_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20714_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20714(__this, method) (( Object_t* (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20714_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20716_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20716(__this, method) (( Object_t * (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20716_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20718_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20718(__this, method) (( int32_t (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_get_Count_m20718_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m20720_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20720(__this, ___key, method) (( bool (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m20720_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20722_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20722(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2640 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m20722_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20724_gshared (Dictionary_2_t2640 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20724(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2640 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20724_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20726_gshared (Dictionary_2_t2640 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20726(__this, ___size, method) (( void (*) (Dictionary_2_t2640 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20726_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20728_gshared (Dictionary_2_t2640 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20728(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2640 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20728_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2641  Dictionary_2_make_pair_m20730_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20730(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2641  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m20730_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20732_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20732(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m20732_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m20734_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20734(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m20734_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20736_gshared (Dictionary_2_t2640 * __this, KeyValuePair_2U5BU5D_t3033* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20736(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2640 *, KeyValuePair_2U5BU5D_t3033*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20736_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m20738_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20738(__this, method) (( void (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_Resize_m20738_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20740_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20740(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2640 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m20740_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m20742_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20742(__this, method) (( void (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_Clear_m20742_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20744_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20744(__this, ___key, method) (( bool (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m20744_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20746_gshared (Dictionary_2_t2640 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20746(__this, ___value, method) (( bool (*) (Dictionary_2_t2640 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m20746_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20748_gshared (Dictionary_2_t2640 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20748(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2640 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m20748_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20750_gshared (Dictionary_2_t2640 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20750(__this, ___sender, method) (( void (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20750_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20752_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20752(__this, ___key, method) (( bool (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m20752_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20754_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20754(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2640 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m20754_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2644 * Dictionary_2_get_Keys_m20756_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20756(__this, method) (( KeyCollection_t2644 * (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_get_Keys_m20756_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2648 * Dictionary_2_get_Values_m20758_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20758(__this, method) (( ValueCollection_t2648 * (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_get_Values_m20758_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m20760_gshared (Dictionary_2_t2640 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20760(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20760_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m20762_gshared (Dictionary_2_t2640 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20762(__this, ___value, method) (( bool (*) (Dictionary_2_t2640 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20762_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20764_gshared (Dictionary_2_t2640 * __this, KeyValuePair_2_t2641  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20764(__this, ___pair, method) (( bool (*) (Dictionary_2_t2640 *, KeyValuePair_2_t2641 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20764_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2646  Dictionary_2_GetEnumerator_m20766_gshared (Dictionary_2_t2640 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20766(__this, method) (( Enumerator_t2646  (*) (Dictionary_2_t2640 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20766_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m20768_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20768(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20768_gshared)(__this /* static, unused */, ___key, ___value, method)
