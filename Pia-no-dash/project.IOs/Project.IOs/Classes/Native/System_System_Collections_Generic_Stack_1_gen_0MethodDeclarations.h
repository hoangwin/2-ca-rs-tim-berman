#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2254;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2391;
// System.Collections.IEnumerator
struct IEnumerator_t35;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m15448_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1__ctor_m15448(__this, method) (( void (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1__ctor_m15448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m15449_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m15449(__this, method) (( bool (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m15449_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m15450_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m15450(__this, method) (( Object_t * (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m15450_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m15451_gshared (Stack_1_t2254 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m15451(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2254 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m15451_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15452_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15452(__this, method) (( Object_t* (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15452_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m15453_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m15453(__this, method) (( Object_t * (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m15453_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m15454_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1_Peek_m15454(__this, method) (( Object_t * (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1_Peek_m15454_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m15455_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1_Pop_m15455(__this, method) (( Object_t * (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1_Pop_m15455_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m15456_gshared (Stack_1_t2254 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m15456(__this, ___t, method) (( void (*) (Stack_1_t2254 *, Object_t *, const MethodInfo*))Stack_1_Push_m15456_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m15457_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m15457(__this, method) (( int32_t (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1_get_Count_m15457_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2257  Stack_1_GetEnumerator_m15458_gshared (Stack_1_t2254 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m15458(__this, method) (( Enumerator_t2257  (*) (Stack_1_t2254 *, const MethodInfo*))Stack_1_GetEnumerator_m15458_gshared)(__this, method)
