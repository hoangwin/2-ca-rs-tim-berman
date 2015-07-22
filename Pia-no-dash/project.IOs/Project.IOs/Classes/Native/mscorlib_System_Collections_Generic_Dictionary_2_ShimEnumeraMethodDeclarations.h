#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2066;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2052;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12941_gshared (ShimEnumerator_t2066 * __this, Dictionary_2_t2052 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12941(__this, ___host, method) (( void (*) (ShimEnumerator_t2066 *, Dictionary_2_t2052 *, const MethodInfo*))ShimEnumerator__ctor_m12941_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12942_gshared (ShimEnumerator_t2066 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12942(__this, method) (( bool (*) (ShimEnumerator_t2066 *, const MethodInfo*))ShimEnumerator_MoveNext_m12942_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m12943_gshared (ShimEnumerator_t2066 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12943(__this, method) (( DictionaryEntry_t65  (*) (ShimEnumerator_t2066 *, const MethodInfo*))ShimEnumerator_get_Entry_m12943_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12944_gshared (ShimEnumerator_t2066 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12944(__this, method) (( Object_t * (*) (ShimEnumerator_t2066 *, const MethodInfo*))ShimEnumerator_get_Key_m12944_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12945_gshared (ShimEnumerator_t2066 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12945(__this, method) (( Object_t * (*) (ShimEnumerator_t2066 *, const MethodInfo*))ShimEnumerator_get_Value_m12945_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12946_gshared (ShimEnumerator_t2066 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12946(__this, method) (( Object_t * (*) (ShimEnumerator_t2066 *, const MethodInfo*))ShimEnumerator_get_Current_m12946_gshared)(__this, method)
