#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t676;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2743;
// System.Collections.Generic.ICollection`1<UnityEngine.GUILayoutUtility/LayoutCache>
struct ICollection_1_t2917;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t675;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct KeyCollection_t2422;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct ValueCollection_t2423;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2125;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct IDictionary_2_t2918;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>[]
struct KeyValuePair_2U5BU5D_t2919;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>>
struct IEnumerator_1_t2920;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
#define Dictionary_2__ctor_m5360(__this, method) (( void (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2__ctor_m13745_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17846(__this, ___comparer, method) (( void (*) (Dictionary_2_t676 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13747_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m17847(__this, ___dictionary, method) (( void (*) (Dictionary_2_t676 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13749_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Int32)
#define Dictionary_2__ctor_m17848(__this, ___capacity, method) (( void (*) (Dictionary_2_t676 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13751_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m17849(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t676 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13753_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m17850(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t676 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m13755_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17851(__this, method) (( Object_t* (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13757_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17852(__this, method) (( Object_t* (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13759_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17853(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t676 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13761_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17854(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t676 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13763_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m17855(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t676 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13765_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m17856(__this, ___key, method) (( bool (*) (Dictionary_2_t676 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13767_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m17857(__this, ___key, method) (( void (*) (Dictionary_2_t676 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17858(__this, method) (( bool (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17859(__this, method) (( Object_t * (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13773_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17860(__this, method) (( bool (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17861(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t676 *, KeyValuePair_2_t2421 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13777_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17862(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t676 *, KeyValuePair_2_t2421 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13779_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17863(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t676 *, KeyValuePair_2U5BU5D_t2919*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13781_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17864(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t676 *, KeyValuePair_2_t2421 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13783_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17865(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t676 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13785_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17866(__this, method) (( Object_t * (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13787_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17867(__this, method) (( Object_t* (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13789_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17868(__this, method) (( Object_t * (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13791_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Count()
#define Dictionary_2_get_Count_m17869(__this, method) (( int32_t (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_get_Count_m13793_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Item(TKey)
#define Dictionary_2_get_Item_m17870(__this, ___key, method) (( LayoutCache_t675 * (*) (Dictionary_2_t676 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13795_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m17871(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t676 *, int32_t, LayoutCache_t675 *, const MethodInfo*))Dictionary_2_set_Item_m13797_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m17872(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t676 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13799_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m17873(__this, ___size, method) (( void (*) (Dictionary_2_t676 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13801_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m17874(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t676 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13803_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m17875(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2421  (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t675 *, const MethodInfo*))Dictionary_2_make_pair_m13805_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m17876(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t675 *, const MethodInfo*))Dictionary_2_pick_key_m13807_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m17877(__this /* static, unused */, ___key, ___value, method) (( LayoutCache_t675 * (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t675 *, const MethodInfo*))Dictionary_2_pick_value_m13809_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m17878(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t676 *, KeyValuePair_2U5BU5D_t2919*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13811_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Resize()
#define Dictionary_2_Resize_m17879(__this, method) (( void (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_Resize_m13813_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Add(TKey,TValue)
#define Dictionary_2_Add_m17880(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t676 *, int32_t, LayoutCache_t675 *, const MethodInfo*))Dictionary_2_Add_m13815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Clear()
#define Dictionary_2_Clear_m17881(__this, method) (( void (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_Clear_m13817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m17882(__this, ___key, method) (( bool (*) (Dictionary_2_t676 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13819_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m17883(__this, ___value, method) (( bool (*) (Dictionary_2_t676 *, LayoutCache_t675 *, const MethodInfo*))Dictionary_2_ContainsValue_m13821_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m17884(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t676 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m13823_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m17885(__this, ___sender, method) (( void (*) (Dictionary_2_t676 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13825_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::Remove(TKey)
#define Dictionary_2_Remove_m17886(__this, ___key, method) (( bool (*) (Dictionary_2_t676 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13827_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m17887(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t676 *, int32_t, LayoutCache_t675 **, const MethodInfo*))Dictionary_2_TryGetValue_m13829_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Keys()
#define Dictionary_2_get_Keys_m17888(__this, method) (( KeyCollection_t2422 * (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_get_Keys_m13831_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::get_Values()
#define Dictionary_2_get_Values_m17889(__this, method) (( ValueCollection_t2423 * (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_get_Values_m13833_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m17890(__this, ___key, method) (( int32_t (*) (Dictionary_2_t676 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13835_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m17891(__this, ___value, method) (( LayoutCache_t675 * (*) (Dictionary_2_t676 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13837_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m17892(__this, ___pair, method) (( bool (*) (Dictionary_2_t676 *, KeyValuePair_2_t2421 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13839_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m17893(__this, method) (( Enumerator_t2424  (*) (Dictionary_2_t676 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13841_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m17894(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, int32_t, LayoutCache_t675 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13843_gshared)(__this /* static, unused */, ___key, ___value, method)
