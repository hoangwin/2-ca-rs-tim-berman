#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2531;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t889;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2529;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2551;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2785;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m19446_gshared (ThreadSafeDictionary_2_t2531 * __this, ThreadSafeDictionaryValueFactory_2_t2529 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m19446(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2531 *, ThreadSafeDictionaryValueFactory_2_t2529 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m19446_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m19448_gshared (ThreadSafeDictionary_2_t2531 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m19448(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2531 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m19448_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m19450_gshared (ThreadSafeDictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m19450(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2531 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m19450_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m19452_gshared (ThreadSafeDictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m19452(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2531 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m19452_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m19454_gshared (ThreadSafeDictionary_2_t2531 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m19454(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2531 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m19454_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m19456_gshared (ThreadSafeDictionary_2_t2531 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m19456(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2531 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m19456_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m19458_gshared (ThreadSafeDictionary_2_t2531 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m19458(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2531 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m19458_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m19460_gshared (ThreadSafeDictionary_2_t2531 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m19460(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2531 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m19460_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m19462_gshared (ThreadSafeDictionary_2_t2531 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m19462(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2531 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m19462_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m19464_gshared (ThreadSafeDictionary_2_t2531 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m19464(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2531 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m19464_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m19466_gshared (ThreadSafeDictionary_2_t2531 * __this, KeyValuePair_2_t2157  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m19466(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2531 *, KeyValuePair_2_t2157 , const MethodInfo*))ThreadSafeDictionary_2_Add_m19466_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m19468_gshared (ThreadSafeDictionary_2_t2531 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m19468(__this, method) (( void (*) (ThreadSafeDictionary_2_t2531 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m19468_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m19470_gshared (ThreadSafeDictionary_2_t2531 * __this, KeyValuePair_2_t2157  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m19470(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2531 *, KeyValuePair_2_t2157 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m19470_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m19472_gshared (ThreadSafeDictionary_2_t2531 * __this, KeyValuePair_2U5BU5D_t2551* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m19472(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2531 *, KeyValuePair_2U5BU5D_t2551*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m19472_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m19474_gshared (ThreadSafeDictionary_2_t2531 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m19474(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2531 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m19474_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m19476_gshared (ThreadSafeDictionary_2_t2531 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m19476(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2531 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m19476_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m19478_gshared (ThreadSafeDictionary_2_t2531 * __this, KeyValuePair_2_t2157  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m19478(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2531 *, KeyValuePair_2_t2157 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m19478_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m19480_gshared (ThreadSafeDictionary_2_t2531 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m19480(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2531 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m19480_gshared)(__this, method)
