﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1261;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2743;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2666;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2670;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2125;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t3038;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3039;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t3040;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m20933_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20933(__this, method) (( void (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2__ctor_m20933_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20934_gshared (Dictionary_2_t1261 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20934(__this, ___comparer, method) (( void (*) (Dictionary_2_t1261 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20934_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m20935_gshared (Dictionary_2_t1261 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m20935(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1261 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20935_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20936_gshared (Dictionary_2_t1261 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20936(__this, ___capacity, method) (( void (*) (Dictionary_2_t1261 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20936_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20937_gshared (Dictionary_2_t1261 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20937(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1261 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20937_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20938_gshared (Dictionary_2_t1261 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20938(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1261 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m20938_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20939_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20939(__this, method) (( Object_t* (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m20939_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20940_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20940(__this, method) (( Object_t* (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m20940_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20941_gshared (Dictionary_2_t1261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20941(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1261 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20941_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20942_gshared (Dictionary_2_t1261 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20942(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1261 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20942_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20943_gshared (Dictionary_2_t1261 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20943(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1261 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20943_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20944_gshared (Dictionary_2_t1261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20944(__this, ___key, method) (( bool (*) (Dictionary_2_t1261 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20944_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20945_gshared (Dictionary_2_t1261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20945(__this, ___key, method) (( void (*) (Dictionary_2_t1261 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20945_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20946_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20946(__this, method) (( bool (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20946_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20947_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20947(__this, method) (( Object_t * (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20947_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20948_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20948(__this, method) (( bool (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20948_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20949_gshared (Dictionary_2_t1261 * __this, KeyValuePair_2_t2664  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20949(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1261 *, KeyValuePair_2_t2664 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20949_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20950_gshared (Dictionary_2_t1261 * __this, KeyValuePair_2_t2664  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20950(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1261 *, KeyValuePair_2_t2664 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20950_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20951_gshared (Dictionary_2_t1261 * __this, KeyValuePair_2U5BU5D_t3039* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20951(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1261 *, KeyValuePair_2U5BU5D_t3039*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20951_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20952_gshared (Dictionary_2_t1261 * __this, KeyValuePair_2_t2664  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20952(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1261 *, KeyValuePair_2_t2664 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20952_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20953_gshared (Dictionary_2_t1261 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20953(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1261 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20953_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20954_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20954(__this, method) (( Object_t * (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20954_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20955_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20955(__this, method) (( Object_t* (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20955_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20956_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20956(__this, method) (( Object_t * (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20956_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20957_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20957(__this, method) (( int32_t (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_get_Count_m20957_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m20958_gshared (Dictionary_2_t1261 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20958(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1261 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20958_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20959_gshared (Dictionary_2_t1261 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20959(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1261 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m20959_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20960_gshared (Dictionary_2_t1261 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20960(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1261 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20960_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20961_gshared (Dictionary_2_t1261 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20961(__this, ___size, method) (( void (*) (Dictionary_2_t1261 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20961_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20962_gshared (Dictionary_2_t1261 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20962(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1261 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20962_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2664  Dictionary_2_make_pair_m20963_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20963(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2664  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m20963_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m20964_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20964(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m20964_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m20965_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20965(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m20965_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20966_gshared (Dictionary_2_t1261 * __this, KeyValuePair_2U5BU5D_t3039* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20966(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1261 *, KeyValuePair_2U5BU5D_t3039*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20966_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m20967_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20967(__this, method) (( void (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_Resize_m20967_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20968_gshared (Dictionary_2_t1261 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20968(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1261 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m20968_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m20969_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20969(__this, method) (( void (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_Clear_m20969_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20970_gshared (Dictionary_2_t1261 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20970(__this, ___key, method) (( bool (*) (Dictionary_2_t1261 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20970_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20971_gshared (Dictionary_2_t1261 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20971(__this, ___value, method) (( bool (*) (Dictionary_2_t1261 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m20971_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20972_gshared (Dictionary_2_t1261 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20972(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1261 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m20972_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20973_gshared (Dictionary_2_t1261 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20973(__this, ___sender, method) (( void (*) (Dictionary_2_t1261 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20973_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20974_gshared (Dictionary_2_t1261 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20974(__this, ___key, method) (( bool (*) (Dictionary_2_t1261 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20974_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20975_gshared (Dictionary_2_t1261 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20975(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1261 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m20975_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2666 * Dictionary_2_get_Keys_m20976_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20976(__this, method) (( KeyCollection_t2666 * (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_get_Keys_m20976_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2670 * Dictionary_2_get_Values_m20977_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20977(__this, method) (( ValueCollection_t2670 * (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_get_Values_m20977_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20978_gshared (Dictionary_2_t1261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20978(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1261 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20978_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m20979_gshared (Dictionary_2_t1261 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20979(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1261 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20979_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20980_gshared (Dictionary_2_t1261 * __this, KeyValuePair_2_t2664  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20980(__this, ___pair, method) (( bool (*) (Dictionary_2_t1261 *, KeyValuePair_2_t2664 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20980_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2668  Dictionary_2_GetEnumerator_m20981_gshared (Dictionary_2_t1261 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20981(__this, method) (( Enumerator_t2668  (*) (Dictionary_2_t1261 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20981_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m20982_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20982(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20982_gshared)(__this /* static, unused */, ___key, ___value, method)
