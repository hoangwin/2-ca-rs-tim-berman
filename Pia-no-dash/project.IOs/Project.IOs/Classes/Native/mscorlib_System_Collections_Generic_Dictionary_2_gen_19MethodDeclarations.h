#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2469;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t889;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2944;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2473;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2477;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2050;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2948;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2949;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2950;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m18625_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18625(__this, method) (( void (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2__ctor_m18625_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18627_gshared (Dictionary_2_t2469 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18627(__this, ___comparer, method) (( void (*) (Dictionary_2_t2469 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18627_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18629_gshared (Dictionary_2_t2469 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m18629(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2469 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18629_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18631_gshared (Dictionary_2_t2469 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18631(__this, ___capacity, method) (( void (*) (Dictionary_2_t2469 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18631_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18633_gshared (Dictionary_2_t2469 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18633(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2469 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18633_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18635_gshared (Dictionary_2_t2469 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18635(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2469 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m18635_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18637_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18637(__this, method) (( Object_t* (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18637_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18639_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18639(__this, method) (( Object_t* (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18639_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18641_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18641(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18641_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18643_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18643(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2469 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18643_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18645_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18645(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2469 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18645_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18647_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18647(__this, ___key, method) (( bool (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18647_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18649_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18649(__this, ___key, method) (( void (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18649_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18651_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18651(__this, method) (( bool (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18651_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18653_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18653(__this, method) (( Object_t * (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18653_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18655_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18655(__this, method) (( bool (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18657_gshared (Dictionary_2_t2469 * __this, KeyValuePair_2_t2470  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18657(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2469 *, KeyValuePair_2_t2470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18657_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18659_gshared (Dictionary_2_t2469 * __this, KeyValuePair_2_t2470  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18659(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2469 *, KeyValuePair_2_t2470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18659_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18661_gshared (Dictionary_2_t2469 * __this, KeyValuePair_2U5BU5D_t2949* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18661(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2469 *, KeyValuePair_2U5BU5D_t2949*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18661_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18663_gshared (Dictionary_2_t2469 * __this, KeyValuePair_2_t2470  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18663(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2469 *, KeyValuePair_2_t2470 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18663_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18665_gshared (Dictionary_2_t2469 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2469 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18665_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18667_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18667(__this, method) (( Object_t * (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18667_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18669_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18669(__this, method) (( Object_t* (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18669_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18671_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18671(__this, method) (( Object_t * (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18671_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18673_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18673(__this, method) (( int32_t (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_get_Count_m18673_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m18675_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18675(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18675_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18677_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18677(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2469 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m18677_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18679_gshared (Dictionary_2_t2469 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18679(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2469 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18679_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18681_gshared (Dictionary_2_t2469 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18681(__this, ___size, method) (( void (*) (Dictionary_2_t2469 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18681_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18683_gshared (Dictionary_2_t2469 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18683(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2469 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18683_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2470  Dictionary_2_make_pair_m18685_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18685(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2470  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m18685_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18687_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m18687(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m18687_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m18689_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18689(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m18689_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18691_gshared (Dictionary_2_t2469 * __this, KeyValuePair_2U5BU5D_t2949* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18691(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2469 *, KeyValuePair_2U5BU5D_t2949*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18691_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m18693_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18693(__this, method) (( void (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_Resize_m18693_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18695_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18695(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2469 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m18695_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m18697_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18697(__this, method) (( void (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_Clear_m18697_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18699_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18699(__this, ___key, method) (( bool (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18699_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18701_gshared (Dictionary_2_t2469 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18701(__this, ___value, method) (( bool (*) (Dictionary_2_t2469 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m18701_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18703_gshared (Dictionary_2_t2469 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18703(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2469 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m18703_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18705_gshared (Dictionary_2_t2469 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18705(__this, ___sender, method) (( void (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18705_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18707_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18707(__this, ___key, method) (( bool (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18707_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18709_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18709(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2469 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18709_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2473 * Dictionary_2_get_Keys_m18711_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m18711(__this, method) (( KeyCollection_t2473 * (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_get_Keys_m18711_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2477 * Dictionary_2_get_Values_m18713_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18713(__this, method) (( ValueCollection_t2477 * (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_get_Values_m18713_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18715_gshared (Dictionary_2_t2469 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18715(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18715_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m18717_gshared (Dictionary_2_t2469 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18717(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2469 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18717_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18719_gshared (Dictionary_2_t2469 * __this, KeyValuePair_2_t2470  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18719(__this, ___pair, method) (( bool (*) (Dictionary_2_t2469 *, KeyValuePair_2_t2470 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18719_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2475  Dictionary_2_GetEnumerator_m18721_gshared (Dictionary_2_t2469 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18721(__this, method) (( Enumerator_t2475  (*) (Dictionary_2_t2469 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18721_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m18723_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18723(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18723_gshared)(__this /* static, unused */, ___key, ___value, method)
