#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t2668;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1261;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21013_gshared (Enumerator_t2668 * __this, Dictionary_2_t1261 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21013(__this, ___dictionary, method) (( void (*) (Enumerator_t2668 *, Dictionary_2_t1261 *, const MethodInfo*))Enumerator__ctor_m21013_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21014_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21014(__this, method) (( Object_t * (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21014_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21015_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21015(__this, method) (( DictionaryEntry_t65  (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21015_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21016_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21016(__this, method) (( Object_t * (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21016_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21017_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21017(__this, method) (( Object_t * (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21018_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21018(__this, method) (( bool (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_MoveNext_m21018_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2664  Enumerator_get_Current_m21019_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21019(__this, method) (( KeyValuePair_2_t2664  (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_get_Current_m21019_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m21020_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21020(__this, method) (( int32_t (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_get_CurrentKey_m21020_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m21021_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21021(__this, method) (( int32_t (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_get_CurrentValue_m21021_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m21022_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21022(__this, method) (( void (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_VerifyState_m21022_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21023_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21023(__this, method) (( void (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_VerifyCurrent_m21023_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m21024_gshared (Enumerator_t2668 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21024(__this, method) (( void (*) (Enumerator_t2668 *, const MethodInfo*))Enumerator_Dispose_m21024_gshared)(__this, method)
