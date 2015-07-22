#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct InternalEnumerator_1_t2642;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m20769_gshared (InternalEnumerator_1_t2642 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m20769(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2642 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m20769_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20770_gshared (InternalEnumerator_1_t2642 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20770(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2642 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m20770_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m20771_gshared (InternalEnumerator_1_t2642 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m20771(__this, method) (( void (*) (InternalEnumerator_1_t2642 *, const MethodInfo*))InternalEnumerator_1_Dispose_m20771_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m20772_gshared (InternalEnumerator_1_t2642 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m20772(__this, method) (( bool (*) (InternalEnumerator_1_t2642 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m20772_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t2641  InternalEnumerator_1_get_Current_m20773_gshared (InternalEnumerator_1_t2642 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m20773(__this, method) (( KeyValuePair_2_t2641  (*) (InternalEnumerator_1_t2642 *, const MethodInfo*))InternalEnumerator_1_get_Current_m20773_gshared)(__this, method)
