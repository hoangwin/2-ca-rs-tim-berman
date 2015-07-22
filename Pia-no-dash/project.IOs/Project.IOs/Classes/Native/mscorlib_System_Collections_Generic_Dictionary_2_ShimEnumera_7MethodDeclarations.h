#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2673;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1261;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21056_gshared (ShimEnumerator_t2673 * __this, Dictionary_2_t1261 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21056(__this, ___host, method) (( void (*) (ShimEnumerator_t2673 *, Dictionary_2_t1261 *, const MethodInfo*))ShimEnumerator__ctor_m21056_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21057_gshared (ShimEnumerator_t2673 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21057(__this, method) (( bool (*) (ShimEnumerator_t2673 *, const MethodInfo*))ShimEnumerator_MoveNext_m21057_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m21058_gshared (ShimEnumerator_t2673 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21058(__this, method) (( DictionaryEntry_t65  (*) (ShimEnumerator_t2673 *, const MethodInfo*))ShimEnumerator_get_Entry_m21058_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21059_gshared (ShimEnumerator_t2673 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21059(__this, method) (( Object_t * (*) (ShimEnumerator_t2673 *, const MethodInfo*))ShimEnumerator_get_Key_m21059_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21060_gshared (ShimEnumerator_t2673 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21060(__this, method) (( Object_t * (*) (ShimEnumerator_t2673 *, const MethodInfo*))ShimEnumerator_get_Value_m21060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21061_gshared (ShimEnumerator_t2673 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21061(__this, method) (( Object_t * (*) (ShimEnumerator_t2673 *, const MethodInfo*))ShimEnumerator_get_Current_m21061_gshared)(__this, method)
