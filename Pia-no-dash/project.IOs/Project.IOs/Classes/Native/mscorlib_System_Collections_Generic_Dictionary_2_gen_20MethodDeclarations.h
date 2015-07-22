#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2506;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.Types.NetworkID>
struct ICollection_1_t2960;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t889;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct KeyCollection_t2510;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ValueCollection_t2514;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t2503;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct IDictionary_2_t2965;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>[]
struct KeyValuePair_2U5BU5D_t2966;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>>
struct IEnumerator_1_t2967;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m19059_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19059(__this, method) (( void (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2__ctor_m19059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19061_gshared (Dictionary_2_t2506 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19061(__this, ___comparer, method) (( void (*) (Dictionary_2_t2506 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19061_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19063_gshared (Dictionary_2_t2506 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m19063(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2506 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19063_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19065_gshared (Dictionary_2_t2506 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19065(__this, ___capacity, method) (( void (*) (Dictionary_2_t2506 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19065_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19067_gshared (Dictionary_2_t2506 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19067(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2506 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19067_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19069_gshared (Dictionary_2_t2506 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19069(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2506 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m19069_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19071_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19071(__this, method) (( Object_t* (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19071_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19073_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19073(__this, method) (( Object_t* (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19073_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19075_gshared (Dictionary_2_t2506 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19075(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2506 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19075_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19077_gshared (Dictionary_2_t2506 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19077(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2506 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19077_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19079_gshared (Dictionary_2_t2506 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19079(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2506 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19079_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19081_gshared (Dictionary_2_t2506 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19081(__this, ___key, method) (( bool (*) (Dictionary_2_t2506 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19081_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19083_gshared (Dictionary_2_t2506 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19083(__this, ___key, method) (( void (*) (Dictionary_2_t2506 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19083_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19085_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19085(__this, method) (( bool (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19085_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19087_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19087(__this, method) (( Object_t * (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19087_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19089_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19089(__this, method) (( bool (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19089_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19091_gshared (Dictionary_2_t2506 * __this, KeyValuePair_2_t2507  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19091(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2506 *, KeyValuePair_2_t2507 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19091_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19093_gshared (Dictionary_2_t2506 * __this, KeyValuePair_2_t2507  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19093(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2506 *, KeyValuePair_2_t2507 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19093_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19095_gshared (Dictionary_2_t2506 * __this, KeyValuePair_2U5BU5D_t2966* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19095(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2506 *, KeyValuePair_2U5BU5D_t2966*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19095_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19097_gshared (Dictionary_2_t2506 * __this, KeyValuePair_2_t2507  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19097(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2506 *, KeyValuePair_2_t2507 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19097_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19099_gshared (Dictionary_2_t2506 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19099(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2506 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19099_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19101_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19101(__this, method) (( Object_t * (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19101_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19103_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19103(__this, method) (( Object_t* (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19103_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19105_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19105(__this, method) (( Object_t * (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19105_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19107_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19107(__this, method) (( int32_t (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_get_Count_m19107_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m19109_gshared (Dictionary_2_t2506 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19109(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2506 *, uint64_t, const MethodInfo*))Dictionary_2_get_Item_m19109_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19111_gshared (Dictionary_2_t2506 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19111(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2506 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m19111_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19113_gshared (Dictionary_2_t2506 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19113(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2506 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19113_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19115_gshared (Dictionary_2_t2506 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19115(__this, ___size, method) (( void (*) (Dictionary_2_t2506 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19115_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19117_gshared (Dictionary_2_t2506 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19117(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2506 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19117_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2507  Dictionary_2_make_pair_m19119_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19119(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2507  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m19119_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m19121_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19121(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m19121_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m19123_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19123(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m19123_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19125_gshared (Dictionary_2_t2506 * __this, KeyValuePair_2U5BU5D_t2966* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19125(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2506 *, KeyValuePair_2U5BU5D_t2966*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19125_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m19127_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19127(__this, method) (( void (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_Resize_m19127_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19129_gshared (Dictionary_2_t2506 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19129(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2506 *, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m19129_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m19131_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19131(__this, method) (( void (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_Clear_m19131_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19133_gshared (Dictionary_2_t2506 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19133(__this, ___key, method) (( bool (*) (Dictionary_2_t2506 *, uint64_t, const MethodInfo*))Dictionary_2_ContainsKey_m19133_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19135_gshared (Dictionary_2_t2506 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19135(__this, ___value, method) (( bool (*) (Dictionary_2_t2506 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m19135_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19137_gshared (Dictionary_2_t2506 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19137(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2506 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m19137_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19139_gshared (Dictionary_2_t2506 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19139(__this, ___sender, method) (( void (*) (Dictionary_2_t2506 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19139_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19141_gshared (Dictionary_2_t2506 * __this, uint64_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19141(__this, ___key, method) (( bool (*) (Dictionary_2_t2506 *, uint64_t, const MethodInfo*))Dictionary_2_Remove_m19141_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19143_gshared (Dictionary_2_t2506 * __this, uint64_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19143(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2506 *, uint64_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m19143_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Keys()
extern "C" KeyCollection_t2510 * Dictionary_2_get_Keys_m19145_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19145(__this, method) (( KeyCollection_t2510 * (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_get_Keys_m19145_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Values()
extern "C" ValueCollection_t2514 * Dictionary_2_get_Values_m19147_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19147(__this, method) (( ValueCollection_t2514 * (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_get_Values_m19147_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m19149_gshared (Dictionary_2_t2506 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19149(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t2506 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19149_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m19151_gshared (Dictionary_2_t2506 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19151(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2506 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19151_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19153_gshared (Dictionary_2_t2506 * __this, KeyValuePair_2_t2507  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19153(__this, ___pair, method) (( bool (*) (Dictionary_2_t2506 *, KeyValuePair_2_t2507 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19153_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::GetEnumerator()
extern "C" Enumerator_t2512  Dictionary_2_GetEnumerator_m19155_gshared (Dictionary_2_t2506 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19155(__this, method) (( Enumerator_t2512  (*) (Dictionary_2_t2506 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19155_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m19157_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19157(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19157_gshared)(__this /* static, unused */, ___key, ___value, method)
