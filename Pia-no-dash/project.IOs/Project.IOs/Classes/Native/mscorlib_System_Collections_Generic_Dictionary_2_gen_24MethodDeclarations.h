#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2553;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t889;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t3001;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t2554;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t2558;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2050;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t3002;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t3003;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t3004;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m19786_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19786(__this, method) (( void (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2__ctor_m19786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19788_gshared (Dictionary_2_t2553 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19788(__this, ___comparer, method) (( void (*) (Dictionary_2_t2553 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19788_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m19790_gshared (Dictionary_2_t2553 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m19790(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2553 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19790_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19792_gshared (Dictionary_2_t2553 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19792(__this, ___capacity, method) (( void (*) (Dictionary_2_t2553 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19792_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19794_gshared (Dictionary_2_t2553 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19794(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2553 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19794_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19796_gshared (Dictionary_2_t2553 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19796(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2553 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m19796_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19798_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19798(__this, method) (( Object_t* (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19798_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19800_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19800(__this, method) (( Object_t* (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19800_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19802_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19802(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19802_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19804_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19804(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2553 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19804_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19806_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19806(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2553 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19806_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19808_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19808(__this, ___key, method) (( bool (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19808_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19810_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19810(__this, ___key, method) (( void (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19810_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19812_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19812(__this, method) (( bool (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19812_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19814_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19814(__this, method) (( Object_t * (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19816_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19816(__this, method) (( bool (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19816_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19818_gshared (Dictionary_2_t2553 * __this, KeyValuePair_2_t2527  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19818(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2553 *, KeyValuePair_2_t2527 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19818_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19820_gshared (Dictionary_2_t2553 * __this, KeyValuePair_2_t2527  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19820(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2553 *, KeyValuePair_2_t2527 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19820_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19822_gshared (Dictionary_2_t2553 * __this, KeyValuePair_2U5BU5D_t3003* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19822(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2553 *, KeyValuePair_2U5BU5D_t3003*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19822_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19824_gshared (Dictionary_2_t2553 * __this, KeyValuePair_2_t2527  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19824(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2553 *, KeyValuePair_2_t2527 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19824_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19826_gshared (Dictionary_2_t2553 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2553 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19826_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19828_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19828(__this, method) (( Object_t * (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19828_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19830_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19830(__this, method) (( Object_t* (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19830_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19832_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19832(__this, method) (( Object_t * (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19832_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19834_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19834(__this, method) (( int32_t (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_get_Count_m19834_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t2157  Dictionary_2_get_Item_m19836_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19836(__this, ___key, method) (( KeyValuePair_2_t2157  (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19836_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19838_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19838(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2553 *, Object_t *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_set_Item_m19838_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19840_gshared (Dictionary_2_t2553 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19840(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2553 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19840_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19842_gshared (Dictionary_2_t2553 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19842(__this, ___size, method) (( void (*) (Dictionary_2_t2553 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19842_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19844_gshared (Dictionary_2_t2553 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19844(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2553 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19844_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2527  Dictionary_2_make_pair_m19846_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19846(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2527  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_make_pair_m19846_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m19848_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m19848(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_pick_key_m19848_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2157  Dictionary_2_pick_value_m19850_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19850(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2157  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_pick_value_m19850_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19852_gshared (Dictionary_2_t2553 * __this, KeyValuePair_2U5BU5D_t3003* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19852(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2553 *, KeyValuePair_2U5BU5D_t3003*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19852_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m19854_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19854(__this, method) (( void (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_Resize_m19854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19856_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19856(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2553 *, Object_t *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_Add_m19856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m19858_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19858(__this, method) (( void (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_Clear_m19858_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19860_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19860(__this, ___key, method) (( bool (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19860_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19862_gshared (Dictionary_2_t2553 * __this, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19862(__this, ___value, method) (( bool (*) (Dictionary_2_t2553 *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_ContainsValue_m19862_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19864_gshared (Dictionary_2_t2553 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19864(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2553 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m19864_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19866_gshared (Dictionary_2_t2553 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19866(__this, ___sender, method) (( void (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19866_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19868_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19868(__this, ___key, method) (( bool (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19868_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19870_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, KeyValuePair_2_t2157 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19870(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2553 *, Object_t *, KeyValuePair_2_t2157 *, const MethodInfo*))Dictionary_2_TryGetValue_m19870_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2554 * Dictionary_2_get_Keys_m19872_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m19872(__this, method) (( KeyCollection_t2554 * (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_get_Keys_m19872_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2558 * Dictionary_2_get_Values_m19874_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19874(__this, method) (( ValueCollection_t2558 * (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_get_Values_m19874_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19876_gshared (Dictionary_2_t2553 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19876(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19876_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t2157  Dictionary_2_ToTValue_m19878_gshared (Dictionary_2_t2553 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19878(__this, ___value, method) (( KeyValuePair_2_t2157  (*) (Dictionary_2_t2553 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19878_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19880_gshared (Dictionary_2_t2553 * __this, KeyValuePair_2_t2527  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19880(__this, ___pair, method) (( bool (*) (Dictionary_2_t2553 *, KeyValuePair_2_t2527 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19880_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2556  Dictionary_2_GetEnumerator_m19882_gshared (Dictionary_2_t2553 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19882(__this, method) (( Enumerator_t2556  (*) (Dictionary_2_t2553 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19882_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m19884_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2157  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19884(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2157 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19884_gshared)(__this /* static, unused */, ___key, ___value, method)
