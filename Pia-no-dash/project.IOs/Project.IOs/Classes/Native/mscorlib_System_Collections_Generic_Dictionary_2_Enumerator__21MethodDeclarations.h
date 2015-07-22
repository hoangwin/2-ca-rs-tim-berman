#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Enumerator_t2595;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2589;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20299_gshared (Enumerator_t2595 * __this, Dictionary_2_t2589 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20299(__this, ___dictionary, method) (( void (*) (Enumerator_t2595 *, Dictionary_2_t2589 *, const MethodInfo*))Enumerator__ctor_m20299_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20300_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20300(__this, method) (( Object_t * (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20300_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20301_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20301(__this, method) (( DictionaryEntry_t65  (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20301_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20302_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20302(__this, method) (( Object_t * (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20302_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20303_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20303(__this, method) (( Object_t * (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20303_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20304_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20304(__this, method) (( bool (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_MoveNext_m20304_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2590  Enumerator_get_Current_m20305_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20305(__this, method) (( KeyValuePair_2_t2590  (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_get_Current_m20305_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20306_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20306(__this, method) (( Object_t * (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_get_CurrentKey_m20306_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m20307_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20307(__this, method) (( int32_t (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_get_CurrentValue_m20307_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m20308_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20308(__this, method) (( void (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_VerifyState_m20308_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20309_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20309(__this, method) (( void (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_VerifyCurrent_m20309_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m20310_gshared (Enumerator_t2595 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20310(__this, method) (( void (*) (Enumerator_t2595 *, const MethodInfo*))Enumerator_Dispose_m20310_gshared)(__this, method)
