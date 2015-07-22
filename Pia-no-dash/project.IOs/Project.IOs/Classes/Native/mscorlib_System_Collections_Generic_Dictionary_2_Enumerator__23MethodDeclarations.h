#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t2646;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2640;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20804_gshared (Enumerator_t2646 * __this, Dictionary_2_t2640 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20804(__this, ___dictionary, method) (( void (*) (Enumerator_t2646 *, Dictionary_2_t2640 *, const MethodInfo*))Enumerator__ctor_m20804_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20805_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20805(__this, method) (( Object_t * (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20805_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20806_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20806(__this, method) (( DictionaryEntry_t65  (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20806_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20807_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20807(__this, method) (( Object_t * (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20807_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20808_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20808(__this, method) (( Object_t * (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20808_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20809_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20809(__this, method) (( bool (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_MoveNext_m20809_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2641  Enumerator_get_Current_m20810_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20810(__this, method) (( KeyValuePair_2_t2641  (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_get_Current_m20810_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20811_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20811(__this, method) (( Object_t * (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_get_CurrentKey_m20811_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m20812_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20812(__this, method) (( bool (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_get_CurrentValue_m20812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m20813_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20813(__this, method) (( void (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_VerifyState_m20813_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20814_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20814(__this, method) (( void (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_VerifyCurrent_m20814_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m20815_gshared (Enumerator_t2646 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20815(__this, method) (( void (*) (Enumerator_t2646 *, const MethodInfo*))Enumerator_Dispose_m20815_gshared)(__this, method)
