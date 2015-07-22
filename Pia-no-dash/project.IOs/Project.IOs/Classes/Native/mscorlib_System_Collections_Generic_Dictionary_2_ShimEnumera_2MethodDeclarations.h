#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2481;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2469;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18806_gshared (ShimEnumerator_t2481 * __this, Dictionary_2_t2469 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m18806(__this, ___host, method) (( void (*) (ShimEnumerator_t2481 *, Dictionary_2_t2469 *, const MethodInfo*))ShimEnumerator__ctor_m18806_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18807_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m18807(__this, method) (( bool (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_MoveNext_m18807_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m18808_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m18808(__this, method) (( DictionaryEntry_t65  (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_get_Entry_m18808_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18809_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m18809(__this, method) (( Object_t * (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_get_Key_m18809_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18810_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m18810(__this, method) (( Object_t * (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_get_Value_m18810_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18811_gshared (ShimEnumerator_t2481 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m18811(__this, method) (( Object_t * (*) (ShimEnumerator_t2481 *, const MethodInfo*))ShimEnumerator_get_Current_m18811_gshared)(__this, method)
