#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2156;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t889;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2159;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2163;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2050;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2784;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2551;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2785;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14118_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14118(__this, method) (( void (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2__ctor_m14118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14120_gshared (Dictionary_2_t2156 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14120(__this, ___comparer, method) (( void (*) (Dictionary_2_t2156 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14120_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14122_gshared (Dictionary_2_t2156 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m14122(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2156 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14122_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14124_gshared (Dictionary_2_t2156 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14124(__this, ___capacity, method) (( void (*) (Dictionary_2_t2156 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14124_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14126_gshared (Dictionary_2_t2156 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14126(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2156 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14126_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14128_gshared (Dictionary_2_t2156 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14128(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2156 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m14128_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14130_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14130(__this, method) (( Object_t* (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14130_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14132_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14132(__this, method) (( Object_t* (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14132_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14134_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14134(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14134_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14136_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14136(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14136_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14138_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14138(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14138_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14140_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14140(__this, ___key, method) (( bool (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14140_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14142_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14142(__this, ___key, method) (( void (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14142_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14144_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14144(__this, method) (( bool (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14144_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14146_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14146(__this, method) (( Object_t * (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14146_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14148_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14148(__this, method) (( bool (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14150_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2_t2157  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14150(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2156 *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14150_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14152_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2_t2157  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14152(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2156 *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14152_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14154_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2U5BU5D_t2551* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14154(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2156 *, KeyValuePair_2U5BU5D_t2551*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14154_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14156_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2_t2157  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14156(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2156 *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14156_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14158_gshared (Dictionary_2_t2156 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14158(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14158_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14160_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14160(__this, method) (( Object_t * (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14160_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14162_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14162(__this, method) (( Object_t* (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14162_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14164_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14164(__this, method) (( Object_t * (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14166_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14166(__this, method) (( int32_t (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_get_Count_m14166_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m14168_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14168(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14168_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14170_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14170(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m14170_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14172_gshared (Dictionary_2_t2156 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14172(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2156 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14172_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14174_gshared (Dictionary_2_t2156 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14174(__this, ___size, method) (( void (*) (Dictionary_2_t2156 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14174_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14176_gshared (Dictionary_2_t2156 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14176(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14176_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2157  Dictionary_2_make_pair_m14178_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14178(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2157  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m14178_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14180_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14180(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m14180_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14182_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14182(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m14182_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14184_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2U5BU5D_t2551* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14184(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2156 *, KeyValuePair_2U5BU5D_t2551*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14184_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m14186_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14186(__this, method) (( void (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_Resize_m14186_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14188_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14188(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2156 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m14188_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14190_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14190(__this, method) (( void (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_Clear_m14190_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14192_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14192(__this, ___key, method) (( bool (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14192_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14194_gshared (Dictionary_2_t2156 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14194(__this, ___value, method) (( bool (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m14194_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14196_gshared (Dictionary_2_t2156 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14196(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2156 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m14196_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14198_gshared (Dictionary_2_t2156 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14198(__this, ___sender, method) (( void (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14198_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14200_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14200(__this, ___key, method) (( bool (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14200_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14202_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14202(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2156 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m14202_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2159 * Dictionary_2_get_Keys_m14204_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14204(__this, method) (( KeyCollection_t2159 * (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_get_Keys_m14204_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2163 * Dictionary_2_get_Values_m14206_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14206(__this, method) (( ValueCollection_t2163 * (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_get_Values_m14206_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14208_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14208(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14208_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m14210_gshared (Dictionary_2_t2156 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14210(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14210_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14212_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2_t2157  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14212(__this, ___pair, method) (( bool (*) (Dictionary_2_t2156 *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14212_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2161  Dictionary_2_GetEnumerator_m14213_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14213(__this, method) (( Enumerator_t2161  (*) (Dictionary_2_t2156 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14213_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m14215_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14215(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14215_gshared)(__this /* static, unused */, ___key, ___value, method)
