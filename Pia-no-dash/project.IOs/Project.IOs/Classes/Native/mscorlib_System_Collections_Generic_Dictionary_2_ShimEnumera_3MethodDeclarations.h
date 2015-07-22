#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t2518;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2506;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19240_gshared (ShimEnumerator_t2518 * __this, Dictionary_2_t2506 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19240(__this, ___host, method) (( void (*) (ShimEnumerator_t2518 *, Dictionary_2_t2506 *, const MethodInfo*))ShimEnumerator__ctor_m19240_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19241_gshared (ShimEnumerator_t2518 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19241(__this, method) (( bool (*) (ShimEnumerator_t2518 *, const MethodInfo*))ShimEnumerator_MoveNext_m19241_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m19242_gshared (ShimEnumerator_t2518 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19242(__this, method) (( DictionaryEntry_t65  (*) (ShimEnumerator_t2518 *, const MethodInfo*))ShimEnumerator_get_Entry_m19242_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19243_gshared (ShimEnumerator_t2518 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19243(__this, method) (( Object_t * (*) (ShimEnumerator_t2518 *, const MethodInfo*))ShimEnumerator_get_Key_m19243_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19244_gshared (ShimEnumerator_t2518 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19244(__this, method) (( Object_t * (*) (ShimEnumerator_t2518 *, const MethodInfo*))ShimEnumerator_get_Value_m19244_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19245_gshared (ShimEnumerator_t2518 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19245(__this, method) (( Object_t * (*) (ShimEnumerator_t2518 *, const MethodInfo*))ShimEnumerator_get_Current_m19245_gshared)(__this, method)
