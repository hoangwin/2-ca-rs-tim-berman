#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2475;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2469;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18759_gshared (Enumerator_t2475 * __this, Dictionary_2_t2469 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18759(__this, ___dictionary, method) (( void (*) (Enumerator_t2475 *, Dictionary_2_t2469 *, const MethodInfo*))Enumerator__ctor_m18759_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18760_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18760(__this, method) (( Object_t * (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18760_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18761_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18761(__this, method) (( DictionaryEntry_t65  (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18761_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18762_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18762(__this, method) (( Object_t * (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18762_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18763_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18763(__this, method) (( Object_t * (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18763_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18764_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18764(__this, method) (( bool (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_MoveNext_m18764_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2470  Enumerator_get_Current_m18765_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18765(__this, method) (( KeyValuePair_2_t2470  (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_get_Current_m18765_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18766_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18766(__this, method) (( Object_t * (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_get_CurrentKey_m18766_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m18767_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18767(__this, method) (( int64_t (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_get_CurrentValue_m18767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m18768_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18768(__this, method) (( void (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_VerifyState_m18768_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18769_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18769(__this, method) (( void (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_VerifyCurrent_m18769_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m18770_gshared (Enumerator_t2475 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18770(__this, method) (( void (*) (Enumerator_t2475 *, const MethodInfo*))Enumerator_Dispose_m18770_gshared)(__this, method)
