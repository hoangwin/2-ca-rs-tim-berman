#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Enumerator_t2512;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2506;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19193_gshared (Enumerator_t2512 * __this, Dictionary_2_t2506 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19193(__this, ___dictionary, method) (( void (*) (Enumerator_t2512 *, Dictionary_2_t2506 *, const MethodInfo*))Enumerator__ctor_m19193_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19194_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19194(__this, method) (( Object_t * (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19194_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19195_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19195(__this, method) (( DictionaryEntry_t65  (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19195_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19196_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19196(__this, method) (( Object_t * (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19196_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19197_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19197(__this, method) (( Object_t * (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19197_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19198_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19198(__this, method) (( bool (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_MoveNext_m19198_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2507  Enumerator_get_Current_m19199_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19199(__this, method) (( KeyValuePair_2_t2507  (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_get_Current_m19199_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m19200_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19200(__this, method) (( uint64_t (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_get_CurrentKey_m19200_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m19201_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19201(__this, method) (( Object_t * (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_get_CurrentValue_m19201_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m19202_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19202(__this, method) (( void (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_VerifyState_m19202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19203_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19203(__this, method) (( void (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_VerifyCurrent_m19203_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m19204_gshared (Enumerator_t2512 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19204(__this, method) (( void (*) (Enumerator_t2512 *, const MethodInfo*))Enumerator_Dispose_m19204_gshared)(__this, method)
