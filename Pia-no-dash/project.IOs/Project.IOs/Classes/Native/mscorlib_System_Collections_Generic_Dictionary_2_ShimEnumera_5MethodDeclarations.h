#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ShimEnumerator_t2601;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2589;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m20346_gshared (ShimEnumerator_t2601 * __this, Dictionary_2_t2589 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m20346(__this, ___host, method) (( void (*) (ShimEnumerator_t2601 *, Dictionary_2_t2589 *, const MethodInfo*))ShimEnumerator__ctor_m20346_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m20347_gshared (ShimEnumerator_t2601 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m20347(__this, method) (( bool (*) (ShimEnumerator_t2601 *, const MethodInfo*))ShimEnumerator_MoveNext_m20347_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Entry()
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m20348_gshared (ShimEnumerator_t2601 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m20348(__this, method) (( DictionaryEntry_t65  (*) (ShimEnumerator_t2601 *, const MethodInfo*))ShimEnumerator_get_Entry_m20348_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m20349_gshared (ShimEnumerator_t2601 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m20349(__this, method) (( Object_t * (*) (ShimEnumerator_t2601 *, const MethodInfo*))ShimEnumerator_get_Key_m20349_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m20350_gshared (ShimEnumerator_t2601 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m20350(__this, method) (( Object_t * (*) (ShimEnumerator_t2601 *, const MethodInfo*))ShimEnumerator_get_Value_m20350_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m20351_gshared (ShimEnumerator_t2601 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m20351(__this, method) (( Object_t * (*) (ShimEnumerator_t2601 *, const MethodInfo*))ShimEnumerator_get_Current_m20351_gshared)(__this, method)
