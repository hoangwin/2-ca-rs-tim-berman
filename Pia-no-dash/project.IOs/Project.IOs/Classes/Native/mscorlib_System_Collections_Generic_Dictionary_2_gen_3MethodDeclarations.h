#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t423;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2743;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.PointerEventData>
struct ICollection_1_t2842;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t417;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_t2291;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_t591;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2125;
// System.Collections.Generic.IDictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct IDictionary_2_t2843;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct KeyValuePair_2U5BU5D_t2844;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>>
struct IEnumerator_1_t2845;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"
#define Dictionary_2__ctor_m3708(__this, method) (( void (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2__ctor_m13745_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15967(__this, ___comparer, method) (( void (*) (Dictionary_2_t423 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13747_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m15968(__this, ___dictionary, method) (( void (*) (Dictionary_2_t423 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13749_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Int32)
#define Dictionary_2__ctor_m15969(__this, ___capacity, method) (( void (*) (Dictionary_2_t423 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13751_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m15970(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t423 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13753_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m15971(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t423 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m13755_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15972(__this, method) (( Object_t* (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13757_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15973(__this, method) (( Object_t* (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13759_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15974(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t423 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13761_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15975(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t423 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13763_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m15976(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t423 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13765_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m15977(__this, ___key, method) (( bool (*) (Dictionary_2_t423 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13767_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m15978(__this, ___key, method) (( void (*) (Dictionary_2_t423 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15979(__this, method) (( bool (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15980(__this, method) (( Object_t * (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13773_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15981(__this, method) (( bool (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15982(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t423 *, KeyValuePair_2_t592 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13777_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15983(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t423 *, KeyValuePair_2_t592 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13779_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15984(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t423 *, KeyValuePair_2U5BU5D_t2844*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13781_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15985(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t423 *, KeyValuePair_2_t592 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13783_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15986(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t423 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13785_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15987(__this, method) (( Object_t * (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13787_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15988(__this, method) (( Object_t* (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13789_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15989(__this, method) (( Object_t * (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13791_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Count()
#define Dictionary_2_get_Count_m15990(__this, method) (( int32_t (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_get_Count_m13793_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Item(TKey)
#define Dictionary_2_get_Item_m15991(__this, ___key, method) (( PointerEventData_t417 * (*) (Dictionary_2_t423 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13795_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m15992(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t423 *, int32_t, PointerEventData_t417 *, const MethodInfo*))Dictionary_2_set_Item_m13797_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m15993(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t423 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13799_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m15994(__this, ___size, method) (( void (*) (Dictionary_2_t423 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13801_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m15995(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t423 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13803_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m15996(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t592  (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t417 *, const MethodInfo*))Dictionary_2_make_pair_m13805_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m15997(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t417 *, const MethodInfo*))Dictionary_2_pick_key_m13807_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m15998(__this /* static, unused */, ___key, ___value, method) (( PointerEventData_t417 * (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t417 *, const MethodInfo*))Dictionary_2_pick_value_m13809_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m15999(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t423 *, KeyValuePair_2U5BU5D_t2844*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13811_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Resize()
#define Dictionary_2_Resize_m16000(__this, method) (( void (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_Resize_m13813_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Add(TKey,TValue)
#define Dictionary_2_Add_m16001(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t423 *, int32_t, PointerEventData_t417 *, const MethodInfo*))Dictionary_2_Add_m13815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Clear()
#define Dictionary_2_Clear_m16002(__this, method) (( void (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_Clear_m13817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m16003(__this, ___key, method) (( bool (*) (Dictionary_2_t423 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13819_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m16004(__this, ___value, method) (( bool (*) (Dictionary_2_t423 *, PointerEventData_t417 *, const MethodInfo*))Dictionary_2_ContainsValue_m13821_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m16005(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t423 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m13823_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m16006(__this, ___sender, method) (( void (*) (Dictionary_2_t423 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13825_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::Remove(TKey)
#define Dictionary_2_Remove_m16007(__this, ___key, method) (( bool (*) (Dictionary_2_t423 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13827_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m16008(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t423 *, int32_t, PointerEventData_t417 **, const MethodInfo*))Dictionary_2_TryGetValue_m13829_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Keys()
#define Dictionary_2_get_Keys_m16009(__this, method) (( KeyCollection_t2291 * (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_get_Keys_m13831_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Values()
#define Dictionary_2_get_Values_m3710(__this, method) (( ValueCollection_t591 * (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_get_Values_m13833_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m16010(__this, ___key, method) (( int32_t (*) (Dictionary_2_t423 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13835_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m16011(__this, ___value, method) (( PointerEventData_t417 * (*) (Dictionary_2_t423 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13837_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m16012(__this, ___pair, method) (( bool (*) (Dictionary_2_t423 *, KeyValuePair_2_t592 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13839_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m3715(__this, method) (( Enumerator_t593  (*) (Dictionary_2_t423 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13841_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m16013(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, int32_t, PointerEventData_t417 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13843_gshared)(__this /* static, unused */, ___key, ___value, method)
