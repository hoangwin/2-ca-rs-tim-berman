#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
struct InternalEnumerator_1_t2701;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21192_gshared (InternalEnumerator_1_t2701 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m21192(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2701 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m21192_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21193_gshared (InternalEnumerator_1_t2701 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21193(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2701 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21193_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21194_gshared (InternalEnumerator_1_t2701 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m21194(__this, method) (( void (*) (InternalEnumerator_1_t2701 *, const MethodInfo*))InternalEnumerator_1_Dispose_m21194_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21195_gshared (InternalEnumerator_1_t2701 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m21195(__this, method) (( bool (*) (InternalEnumerator_1_t2701 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m21195_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t1542  InternalEnumerator_1_get_Current_m21196_gshared (InternalEnumerator_1_t2701 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m21196(__this, method) (( LabelData_t1542  (*) (InternalEnumerator_1_t2701 *, const MethodInfo*))InternalEnumerator_1_get_Current_m21196_gshared)(__this, method)
