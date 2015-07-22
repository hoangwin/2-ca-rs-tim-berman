#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t58;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Nullable`1<UnityEngine.Vector3>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
extern "C" void Nullable_1__ctor_m13008_gshared (Nullable_1_t58 * __this, Vector3_t10  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m13008(__this, ___value, method) (( void (*) (Nullable_1_t58 *, Vector3_t10 , const MethodInfo*))Nullable_1__ctor_m13008_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m353_gshared (Nullable_1_t58 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m353(__this, method) (( bool (*) (Nullable_1_t58 *, const MethodInfo*))Nullable_1_get_HasValue_m353_gshared)(__this, method)
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
extern "C" Vector3_t10  Nullable_1_get_Value_m354_gshared (Nullable_1_t58 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m354(__this, method) (( Vector3_t10  (*) (Nullable_1_t58 *, const MethodInfo*))Nullable_1_get_Value_m354_gshared)(__this, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m13009_gshared (Nullable_1_t58 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m13009(__this, ___other, method) (( bool (*) (Nullable_1_t58 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m13009_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m13010_gshared (Nullable_1_t58 * __this, Nullable_1_t58  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m13010(__this, ___other, method) (( bool (*) (Nullable_1_t58 *, Nullable_1_t58 , const MethodInfo*))Nullable_1_Equals_m13010_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<UnityEngine.Vector3>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m13011_gshared (Nullable_1_t58 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m13011(__this, method) (( int32_t (*) (Nullable_1_t58 *, const MethodInfo*))Nullable_1_GetHashCode_m13011_gshared)(__this, method)
// System.String System.Nullable`1<UnityEngine.Vector3>::ToString()
extern "C" String_t* Nullable_1_ToString_m13012_gshared (Nullable_1_t58 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m13012(__this, method) (( String_t* (*) (Nullable_1_t58 *, const MethodInfo*))Nullable_1_ToString_m13012_gshared)(__this, method)
