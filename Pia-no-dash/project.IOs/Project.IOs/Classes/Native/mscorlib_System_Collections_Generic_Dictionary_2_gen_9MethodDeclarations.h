#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t691;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t888;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t2927;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t677;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t2433;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t910;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2048;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t2928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t2929;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t2930;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"
#define Dictionary_2__ctor_m18039(__this, method) (( void (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2__ctor_m14118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m5367(__this, ___comparer, method) (( void (*) (Dictionary_2_t691 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14120_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m18040(__this, ___dictionary, method) (( void (*) (Dictionary_2_t691 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14122_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m18041(__this, ___capacity, method) (( void (*) (Dictionary_2_t691 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14124_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m18042(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t691 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14126_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m18043(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t691 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m14128_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18044(__this, method) (( Object_t* (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14130_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18045(__this, method) (( Object_t* (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14132_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18046(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t691 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14134_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18047(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t691 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14136_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m18048(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t691 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14138_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m18049(__this, ___key, method) (( bool (*) (Dictionary_2_t691 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14140_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m18050(__this, ___key, method) (( void (*) (Dictionary_2_t691 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14142_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18051(__this, method) (( bool (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14144_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18052(__this, method) (( Object_t * (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14146_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18053(__this, method) (( bool (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14148_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18054(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t691 *, KeyValuePair_2_t2432 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14150_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18055(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t691 *, KeyValuePair_2_t2432 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14152_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18056(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t691 *, KeyValuePair_2U5BU5D_t2929*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14154_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18057(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t691 *, KeyValuePair_2_t2432 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14156_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18058(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t691 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14158_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18059(__this, method) (( Object_t * (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14160_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18060(__this, method) (( Object_t* (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14162_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18061(__this, method) (( Object_t * (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14164_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m18062(__this, method) (( int32_t (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_get_Count_m14166_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m18063(__this, ___key, method) (( GUIStyle_t677 * (*) (Dictionary_2_t691 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m14168_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m18064(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t691 *, String_t*, GUIStyle_t677 *, const MethodInfo*))Dictionary_2_set_Item_m14170_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m18065(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t691 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14172_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m18066(__this, ___size, method) (( void (*) (Dictionary_2_t691 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14174_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m18067(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t691 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14176_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m18068(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2432  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t677 *, const MethodInfo*))Dictionary_2_make_pair_m14178_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m18069(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t677 *, const MethodInfo*))Dictionary_2_pick_key_m14180_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m18070(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t677 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t677 *, const MethodInfo*))Dictionary_2_pick_value_m14182_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m18071(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t691 *, KeyValuePair_2U5BU5D_t2929*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14184_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m18072(__this, method) (( void (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_Resize_m14186_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m18073(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t691 *, String_t*, GUIStyle_t677 *, const MethodInfo*))Dictionary_2_Add_m14188_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m18074(__this, method) (( void (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_Clear_m14190_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m18075(__this, ___key, method) (( bool (*) (Dictionary_2_t691 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m14192_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m18076(__this, ___value, method) (( bool (*) (Dictionary_2_t691 *, GUIStyle_t677 *, const MethodInfo*))Dictionary_2_ContainsValue_m14194_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m18077(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t691 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m14196_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m18078(__this, ___sender, method) (( void (*) (Dictionary_2_t691 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14198_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m18079(__this, ___key, method) (( bool (*) (Dictionary_2_t691 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m14200_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m18080(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t691 *, String_t*, GUIStyle_t677 **, const MethodInfo*))Dictionary_2_TryGetValue_m14202_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m18081(__this, method) (( KeyCollection_t2433 * (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_get_Keys_m14204_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m5368(__this, method) (( ValueCollection_t910 * (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_get_Values_m14206_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m18082(__this, ___key, method) (( String_t* (*) (Dictionary_2_t691 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14208_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m18083(__this, ___value, method) (( GUIStyle_t677 * (*) (Dictionary_2_t691 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14210_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m18084(__this, ___pair, method) (( bool (*) (Dictionary_2_t691 *, KeyValuePair_2_t2432 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14212_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m18085(__this, method) (( Enumerator_t2434  (*) (Dictionary_2_t691 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14213_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m18086(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t677 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14215_gshared)(__this /* static, unused */, ___key, ___value, method)
