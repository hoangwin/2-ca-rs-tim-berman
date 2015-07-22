#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2059;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2052;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12889_gshared (Enumerator_t2059 * __this, Dictionary_2_t2052 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12889(__this, ___dictionary, method) (( void (*) (Enumerator_t2059 *, Dictionary_2_t2052 *, const MethodInfo*))Enumerator__ctor_m12889_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12890_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12890(__this, method) (( Object_t * (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12890_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12891_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12891(__this, method) (( DictionaryEntry_t65  (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12891_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12892_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12892(__this, method) (( Object_t * (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12892_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12893_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12893(__this, method) (( Object_t * (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12893_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12894_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12894(__this, method) (( bool (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_MoveNext_m12894_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2053  Enumerator_get_Current_m12895_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12895(__this, method) (( KeyValuePair_2_t2053  (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_get_Current_m12895_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12896_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12896(__this, method) (( Object_t * (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_get_CurrentKey_m12896_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12897_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12897(__this, method) (( int32_t (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_get_CurrentValue_m12897_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12898_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12898(__this, method) (( void (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_VerifyState_m12898_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12899_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12899(__this, method) (( void (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_VerifyCurrent_m12899_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12900_gshared (Enumerator_t2059 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12900(__this, method) (( void (*) (Enumerator_t2059 *, const MethodInfo*))Enumerator_Dispose_m12900_gshared)(__this, method)
