#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t2161;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2156;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14246_gshared (Enumerator_t2161 * __this, Dictionary_2_t2156 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14246(__this, ___dictionary, method) (( void (*) (Enumerator_t2161 *, Dictionary_2_t2156 *, const MethodInfo*))Enumerator__ctor_m14246_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14247_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14247(__this, method) (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14247_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14248_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14248(__this, method) (( DictionaryEntry_t65  (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14248_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14249_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14249(__this, method) (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14249_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14250_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14250(__this, method) (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14250_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14251_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14251(__this, method) (( bool (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_MoveNext_m14251_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2157  Enumerator_get_Current_m14252_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14252(__this, method) (( KeyValuePair_2_t2157  (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_get_Current_m14252_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14253_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14253(__this, method) (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_get_CurrentKey_m14253_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14254_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14254(__this, method) (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_get_CurrentValue_m14254_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m14255_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14255(__this, method) (( void (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_VerifyState_m14255_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14256_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14256(__this, method) (( void (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_VerifyCurrent_m14256_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14257_gshared (Enumerator_t2161 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14257(__this, method) (( void (*) (Enumerator_t2161 *, const MethodInfo*))Enumerator_Dispose_m14257_gshared)(__this, method)
