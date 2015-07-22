#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1986;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_0.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m12457_gshared (Nullable_1_t1986 * __this, TimeSpan_t1235  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m12457(__this, ___value, method) (( void (*) (Nullable_1_t1986 *, TimeSpan_t1235 , const MethodInfo*))Nullable_1__ctor_m12457_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m12458_gshared (Nullable_1_t1986 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m12458(__this, method) (( bool (*) (Nullable_1_t1986 *, const MethodInfo*))Nullable_1_get_HasValue_m12458_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1235  Nullable_1_get_Value_m12459_gshared (Nullable_1_t1986 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m12459(__this, method) (( TimeSpan_t1235  (*) (Nullable_1_t1986 *, const MethodInfo*))Nullable_1_get_Value_m12459_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m21406_gshared (Nullable_1_t1986 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m21406(__this, ___other, method) (( bool (*) (Nullable_1_t1986 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m21406_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m21407_gshared (Nullable_1_t1986 * __this, Nullable_1_t1986  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m21407(__this, ___other, method) (( bool (*) (Nullable_1_t1986 *, Nullable_1_t1986 , const MethodInfo*))Nullable_1_Equals_m21407_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m21408_gshared (Nullable_1_t1986 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m21408(__this, method) (( int32_t (*) (Nullable_1_t1986 *, const MethodInfo*))Nullable_1_GetHashCode_m21408_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m21409_gshared (Nullable_1_t1986 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m21409(__this, method) (( String_t* (*) (Nullable_1_t1986 *, const MethodInfo*))Nullable_1_ToString_m21409_gshared)(__this, method)
