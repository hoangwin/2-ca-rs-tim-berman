#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_t2062;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2052;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12919_gshared (Enumerator_t2062 * __this, Dictionary_2_t2052 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m12919(__this, ___host, method) (( void (*) (Enumerator_t2062 *, Dictionary_2_t2052 *, const MethodInfo*))Enumerator__ctor_m12919_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12920_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12920(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12920_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12921_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12921(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_Dispose_m12921_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12922_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12922(__this, method) (( bool (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_MoveNext_m12922_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m12923_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12923(__this, method) (( int32_t (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_Current_m12923_gshared)(__this, method)
