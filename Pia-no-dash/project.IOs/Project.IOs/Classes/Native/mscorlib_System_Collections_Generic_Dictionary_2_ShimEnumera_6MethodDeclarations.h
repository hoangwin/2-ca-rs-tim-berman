#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2652;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2640;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20851_gshared (ShimEnumerator_t2652 * __this, Dictionary_2_t2640 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m20851(__this, ___host, method) (( void (*) (ShimEnumerator_t2652 *, Dictionary_2_t2640 *, const MethodInfo*))ShimEnumerator__ctor_m20851_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20852_gshared (ShimEnumerator_t2652 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m20852(__this, method) (( bool (*) (ShimEnumerator_t2652 *, const MethodInfo*))ShimEnumerator_MoveNext_m20852_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m20853_gshared (ShimEnumerator_t2652 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m20853(__this, method) (( DictionaryEntry_t65  (*) (ShimEnumerator_t2652 *, const MethodInfo*))ShimEnumerator_get_Entry_m20853_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20854_gshared (ShimEnumerator_t2652 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m20854(__this, method) (( Object_t * (*) (ShimEnumerator_t2652 *, const MethodInfo*))ShimEnumerator_get_Key_m20854_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20855_gshared (ShimEnumerator_t2652 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m20855(__this, method) (( Object_t * (*) (ShimEnumerator_t2652 *, const MethodInfo*))ShimEnumerator_get_Value_m20855_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20856_gshared (ShimEnumerator_t2652 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m20856(__this, method) (( Object_t * (*) (ShimEnumerator_t2652 *, const MethodInfo*))ShimEnumerator_get_Current_m20856_gshared)(__this, method)
