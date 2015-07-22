#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2166;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2156;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14289_gshared (ShimEnumerator_t2166 * __this, Dictionary_2_t2156 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14289(__this, ___host, method) (( void (*) (ShimEnumerator_t2166 *, Dictionary_2_t2156 *, const MethodInfo*))ShimEnumerator__ctor_m14289_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14290_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14290(__this, method) (( bool (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_MoveNext_m14290_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m14291_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14291(__this, method) (( DictionaryEntry_t65  (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Entry_m14291_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14292_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14292(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Key_m14292_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14293_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14293(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Value_m14293_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14294_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14294(__this, method) (( Object_t * (*) (ShimEnumerator_t2166 *, const MethodInfo*))ShimEnumerator_get_Current_m14294_gshared)(__this, method)
