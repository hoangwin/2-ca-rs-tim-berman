#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2556;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2553;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19904_gshared (Enumerator_t2556 * __this, Dictionary_2_t2553 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19904(__this, ___dictionary, method) (( void (*) (Enumerator_t2556 *, Dictionary_2_t2553 *, const MethodInfo*))Enumerator__ctor_m19904_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19905_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19905(__this, method) (( Object_t * (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19905_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19906_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19906(__this, method) (( DictionaryEntry_t65  (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19906_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19907_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19907(__this, method) (( Object_t * (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19907_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19908_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19908(__this, method) (( Object_t * (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19908_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19909_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19909(__this, method) (( bool (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_MoveNext_m19909_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2527  Enumerator_get_Current_m19910_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19910(__this, method) (( KeyValuePair_2_t2527  (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_get_Current_m19910_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19911_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19911(__this, method) (( Object_t * (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_get_CurrentKey_m19911_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2157  Enumerator_get_CurrentValue_m19912_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19912(__this, method) (( KeyValuePair_2_t2157  (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_get_CurrentValue_m19912_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m19913_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19913(__this, method) (( void (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_VerifyState_m19913_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19914_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19914(__this, method) (( void (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_VerifyCurrent_m19914_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m19915_gshared (Enumerator_t2556 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19915(__this, method) (( void (*) (Enumerator_t2556 *, const MethodInfo*))Enumerator_Dispose_m19915_gshared)(__this, method)
