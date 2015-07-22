#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2562;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2553;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19951_gshared (ShimEnumerator_t2562 * __this, Dictionary_2_t2553 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19951(__this, ___host, method) (( void (*) (ShimEnumerator_t2562 *, Dictionary_2_t2553 *, const MethodInfo*))ShimEnumerator__ctor_m19951_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19952_gshared (ShimEnumerator_t2562 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19952(__this, method) (( bool (*) (ShimEnumerator_t2562 *, const MethodInfo*))ShimEnumerator_MoveNext_m19952_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m19953_gshared (ShimEnumerator_t2562 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19953(__this, method) (( DictionaryEntry_t65  (*) (ShimEnumerator_t2562 *, const MethodInfo*))ShimEnumerator_get_Entry_m19953_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19954_gshared (ShimEnumerator_t2562 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19954(__this, method) (( Object_t * (*) (ShimEnumerator_t2562 *, const MethodInfo*))ShimEnumerator_get_Key_m19954_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19955_gshared (ShimEnumerator_t2562 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19955(__this, method) (( Object_t * (*) (ShimEnumerator_t2562 *, const MethodInfo*))ShimEnumerator_get_Value_m19955_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19956_gshared (ShimEnumerator_t2562 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19956(__this, method) (( Object_t * (*) (ShimEnumerator_t2562 *, const MethodInfo*))ShimEnumerator_get_Current_m19956_gshared)(__this, method)
