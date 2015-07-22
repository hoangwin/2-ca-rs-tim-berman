#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2128;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2743;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t889;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2131;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2135;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2125;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2776;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t900;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2777;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2778;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1325;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13745_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13745(__this, method) (( void (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2__ctor_m13745_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13747_gshared (Dictionary_2_t2128 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13747(__this, ___comparer, method) (( void (*) (Dictionary_2_t2128 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13747_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13749_gshared (Dictionary_2_t2128 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m13749(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2128 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13749_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13751_gshared (Dictionary_2_t2128 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13751(__this, ___capacity, method) (( void (*) (Dictionary_2_t2128 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13751_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13753_gshared (Dictionary_2_t2128 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13753(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2128 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13753_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13755_gshared (Dictionary_2_t2128 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13755(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2128 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2__ctor_m13755_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13757_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13757(__this, method) (( Object_t* (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13757_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13759_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13759(__this, method) (( Object_t* (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13759_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13761_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13761(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13761_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13763_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13763(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2128 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13763_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13765_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13765(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2128 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13765_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13767_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13767(__this, ___key, method) (( bool (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13767_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13769_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13769(__this, ___key, method) (( void (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13769_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13771_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13771(__this, method) (( bool (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13773_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13773(__this, method) (( Object_t * (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13773_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13775_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13775(__this, method) (( bool (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13777_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2_t2129  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13777(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2128 *, KeyValuePair_2_t2129 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13777_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13779_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2_t2129  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13779(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2128 *, KeyValuePair_2_t2129 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13779_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13781_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2U5BU5D_t2777* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13781(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2128 *, KeyValuePair_2U5BU5D_t2777*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13781_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13783_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2_t2129  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13783(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2128 *, KeyValuePair_2_t2129 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13783_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13785_gshared (Dictionary_2_t2128 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13785(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13785_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13787_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13787(__this, method) (( Object_t * (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13787_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13789_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13789(__this, method) (( Object_t* (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13789_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13791_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13791(__this, method) (( Object_t * (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13791_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13793_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13793(__this, method) (( int32_t (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_get_Count_m13793_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13795_gshared (Dictionary_2_t2128 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13795(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2128 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13795_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13797_gshared (Dictionary_2_t2128 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13797(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2128 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13797_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13799_gshared (Dictionary_2_t2128 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13799(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2128 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13799_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13801_gshared (Dictionary_2_t2128 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13801(__this, ___size, method) (( void (*) (Dictionary_2_t2128 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13801_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13803_gshared (Dictionary_2_t2128 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13803(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13803_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2129  Dictionary_2_make_pair_m13805_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13805(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2129  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13805_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m13807_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13807(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m13807_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13809_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13809(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13809_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13811_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2U5BU5D_t2777* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13811(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2128 *, KeyValuePair_2U5BU5D_t2777*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13811_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13813_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13813(__this, method) (( void (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_Resize_m13813_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13815_gshared (Dictionary_2_t2128 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13815(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2128 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13817_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13817(__this, method) (( void (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_Clear_m13817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13819_gshared (Dictionary_2_t2128 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13819(__this, ___key, method) (( bool (*) (Dictionary_2_t2128 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13819_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13821_gshared (Dictionary_2_t2128 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13821(__this, ___value, method) (( bool (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13821_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13823_gshared (Dictionary_2_t2128 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13823(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2128 *, SerializationInfo_t900 *, StreamingContext_t901 , const MethodInfo*))Dictionary_2_GetObjectData_m13823_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13825_gshared (Dictionary_2_t2128 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13825(__this, ___sender, method) (( void (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13825_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13827_gshared (Dictionary_2_t2128 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13827(__this, ___key, method) (( bool (*) (Dictionary_2_t2128 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13827_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13829_gshared (Dictionary_2_t2128 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13829(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2128 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13829_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2131 * Dictionary_2_get_Keys_m13831_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13831(__this, method) (( KeyCollection_t2131 * (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_get_Keys_m13831_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2135 * Dictionary_2_get_Values_m13833_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13833(__this, method) (( ValueCollection_t2135 * (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_get_Values_m13833_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13835_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13835(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13835_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13837_gshared (Dictionary_2_t2128 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13837(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13837_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13839_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2_t2129  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13839(__this, ___pair, method) (( bool (*) (Dictionary_2_t2128 *, KeyValuePair_2_t2129 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13839_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2133  Dictionary_2_GetEnumerator_m13841_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13841(__this, method) (( Enumerator_t2133  (*) (Dictionary_2_t2128 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13841_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m13843_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13843(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t65  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13843_gshared)(__this /* static, unused */, ___key, ___value, method)
