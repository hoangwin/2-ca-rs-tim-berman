#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// BetterList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// BetterList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__IteratoMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// BetterList`1<System.Object>
#include "AssemblyU2DCSharp_BetterList_1_gen_13.h"
#include "mscorlib_ArrayTypes.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void BetterList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m13449_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2104 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m13450_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2104 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m13451_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2104 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m13452_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2104 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t2103 * L_2 = (BetterList_1_t2103 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		ObjectU5BU5D_t38* L_3 = (ObjectU5BU5D_t38*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t2103 * L_4 = (BetterList_1_t2103 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		ObjectU5BU5D_t38* L_5 = (ObjectU5BU5D_t38*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t2103 * L_10 = (BetterList_1_t2103 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m13453_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2104 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Reset_m13454_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2104 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// BetterList`1/CompareFunc<System.Object>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1/CompareFunc<System.Object>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_3MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void BetterList`1/CompareFunc<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m13455_gshared (CompareFunc_t2105 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 BetterList`1/CompareFunc<System.Object>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m13456_gshared (CompareFunc_t2105 * __this, Object_t * ___left, Object_t * ___right, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CompareFunc_Invoke_m13456((CompareFunc_t2105 *)__this->___prev_9,___left, ___right, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___left, Object_t * ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___left, Object_t * ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult BetterList`1/CompareFunc<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * CompareFunc_BeginInvoke_m13457_gshared (CompareFunc_t2105 * __this, Object_t * ___left, Object_t * ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___left;
	__d_args[1] = ___right;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 BetterList`1/CompareFunc<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m13458_gshared (CompareFunc_t2105 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_17MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_7MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_0MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t2128;
struct DictionaryEntryU5BU5D_t3064;
struct Transform_1_t2127;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t65_TisDictionaryEntry_t65_m21625_gshared (Dictionary_2_t2128 * __this, DictionaryEntryU5BU5D_t3064* p0, int32_t p1, Transform_1_t2127 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t65_TisDictionaryEntry_t65_m21625(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2128 *, DictionaryEntryU5BU5D_t3064*, int32_t, Transform_1_t2127 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t65_TisDictionaryEntry_t65_m21625_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2128;
struct Array_t;
struct Transform_1_t2138;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2129_m21627_gshared (Dictionary_2_t2128 * __this, Array_t * p0, int32_t p1, Transform_1_t2138 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2129_m21627(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, Transform_1_t2138 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2129_m21627_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2128;
struct KeyValuePair_2U5BU5D_t2777;
struct Transform_1_t2138;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2129_TisKeyValuePair_2_t2129_m21628_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2U5BU5D_t2777* p0, int32_t p1, Transform_1_t2138 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2129_TisKeyValuePair_2_t2129_m21628(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2128 *, KeyValuePair_2U5BU5D_t2777*, int32_t, Transform_1_t2138 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2129_TisKeyValuePair_2_t2129_m21628_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13745_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2128 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13747_gshared (Dictionary_2_t2128 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2128 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m13749_gshared (Dictionary_2_t2128 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2128 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13751_gshared (Dictionary_2_t2128 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2128 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1502;
extern "C" void Dictionary_2__ctor_m13753_gshared (Dictionary_2_t2128 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral1502 = il2cpp_codegen_string_literal_from_index(1502);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2129  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral1502, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2128 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t2129  L_9 = (KeyValuePair_2_t2129 )InterfaceFuncInvoker0< KeyValuePair_2_t2129  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2129 )L_9;
			int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2129 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2129 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2128 *)__this);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2128 *)__this, (int32_t)L_10, (Object_t *)L_11);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13755_gshared (Dictionary_2_t2128 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m13757_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2128 *)__this);
		KeyCollection_t2131 * L_0 = (( KeyCollection_t2131 * (*) (Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m13759_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2128 *)__this);
		ValueCollection_t2135 * L_0 = (( ValueCollection_t2135 * (*) (Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13761_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t2128 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2128 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2128 *)__this);
		int32_t L_4 = (( int32_t (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2128 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2128 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey) */, (Dictionary_2_t2128 *)__this, (int32_t)L_4);
		return L_5;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13763_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2128 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2128 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2128 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2128 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2128 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t2128 *)__this, (int32_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13765_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2128 *)__this);
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2128 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2128 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2128 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2128 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2128 *)__this, (int32_t)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13767_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2128 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2128 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13769_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2128 *)__this);
		VirtFuncInvoker1< bool, int32_t >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey) */, (Dictionary_2_t2128 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13771_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13773_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13775_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13777_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2_t2129  ___keyValuePair, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2129 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2129 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2128 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2128 *)__this, (int32_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13779_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2_t2129  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2129  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2128 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2128 *, KeyValuePair_2_t2129 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2128 *)__this, (KeyValuePair_2_t2129 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13781_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2U5BU5D_t2777* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2777* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, KeyValuePair_2U5BU5D_t2777*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2128 *)__this, (KeyValuePair_2U5BU5D_t2777*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13783_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2_t2129  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2129  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2128 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2128 *, KeyValuePair_2_t2129 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2128 *)__this, (KeyValuePair_2_t2129 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2129 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2128 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey) */, (Dictionary_2_t2128 *)__this, (int32_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t3064_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13785_gshared (Dictionary_2_t2128 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t3064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3093);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2777* V_0 = {0};
	DictionaryEntryU5BU5D_t3064* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3064* G_B5_1 = {0};
	Dictionary_2_t2128 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3064* G_B4_1 = {0};
	Dictionary_2_t2128 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2777*)((KeyValuePair_2U5BU5D_t2777*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2777* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2777* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, KeyValuePair_2U5BU5D_t2777*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2128 *)__this, (KeyValuePair_2U5BU5D_t2777*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2128 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t3064*)((DictionaryEntryU5BU5D_t3064*)IsInst(L_6, DictionaryEntryU5BU5D_t3064_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t3064* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t3064* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2127 * L_10 = ((Dictionary_2_t2128_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2128 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2128 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2127 * L_12 = (Transform_1_t2127 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2127 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2128_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2128 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2127 * L_13 = ((Dictionary_2_t2128_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2128 *)G_B5_2);
		(( void (*) (Dictionary_2_t2128 *, DictionaryEntryU5BU5D_t3064*, int32_t, Transform_1_t2127 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2128 *)G_B5_2, (DictionaryEntryU5BU5D_t3064*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2127 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2138 * L_17 = (Transform_1_t2138 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2138 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, Transform_1_t2138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2128 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2138 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13787_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133  L_0 = {0};
		(( void (*) (Enumerator_t2133 *, Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2133  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13789_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133  L_0 = {0};
		(( void (*) (Enumerator_t2133 *, Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2133  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13791_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2139 * L_0 = (ShimEnumerator_t2139 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2139 *, Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13793_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1446_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" Object_t * Dictionary_2_get_Item_m13795_gshared (Dictionary_2_t2128 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		KeyNotFoundException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3094);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t2047* L_9 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t195* L_14 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), (int32_t)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t38* L_19 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_21));
	}

IL_0089:
	{
		LinkU5BU5D_t2047* L_22 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1446 * L_26 = (KeyNotFoundException_t1446 *)il2cpp_codegen_object_new (KeyNotFoundException_t1446_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m8862(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" void Dictionary_2_set_Item_m13797_gshared (Dictionary_2_t2128 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t195* L_6 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t2047* L_11 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t195* L_16 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2047* L_22 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t195* L_32 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t2047* L_38 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t2047* L_41 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t195* L_43 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_41, L_42))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45))-(int32_t)1));
		Int32U5BU5D_t195* L_46 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47)) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t2047* L_49 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_49, L_50))->___HashCode_0 = L_51;
		Int32U5BU5D_t195* L_52 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int32_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53)) = (int32_t)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t2047* L_56 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t2047* L_58 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_58, L_59))->___Next_1);
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_56, L_57))->___Next_1 = L_60;
		LinkU5BU5D_t2047* L_61 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t195* L_63 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_61, L_62))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65))-(int32_t)1));
		Int32U5BU5D_t195* L_66 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67)) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		ObjectU5BU5D_t38* L_69 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		Object_t * L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_69, L_70)) = (Object_t *)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1473;
extern "C" void Dictionary_2_Init_m13799_gshared (Dictionary_2_t2128 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		_stringLiteral1473 = il2cpp_codegen_string_literal_from_index(1473);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2128 * G_B4_0 = {0};
	Dictionary_2_t2128 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2128 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t928 * L_1 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_1, (String_t*)_stringLiteral1473, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2128 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2128 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2128 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t2067 * L_5 = (( EqualityComparer_1_t2067 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2128 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2128 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t195_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2047_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m13801_gshared (Dictionary_2_t2128 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		LinkU5BU5D_t2047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3095);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t195*)SZArrayNew(Int32U5BU5D_t195_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2047*)SZArrayNew(LinkU5BU5D_t2047_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int32U5BU5D_t195*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t38*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t195* L_4 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t195* L_6 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral439;
extern Il2CppCodeGenString* _stringLiteral871;
extern Il2CppCodeGenString* _stringLiteral2932;
extern Il2CppCodeGenString* _stringLiteral2933;
extern "C" void Dictionary_2_CopyToCheck_m13803_gshared (Dictionary_2_t2128 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral439 = il2cpp_codegen_string_literal_from_index(439);
		_stringLiteral871 = il2cpp_codegen_string_literal_from_index(871);
		_stringLiteral2932 = il2cpp_codegen_string_literal_from_index(2932);
		_stringLiteral2933 = il2cpp_codegen_string_literal_from_index(2933);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral439, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t928 * L_3 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_3, (String_t*)_stringLiteral871, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m7446((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t626 * L_7 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_7, (String_t*)_stringLiteral2932, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m7446((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2128 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count() */, (Dictionary_2_t2128 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t626 * L_12 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_12, (String_t*)_stringLiteral2933, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2129  Dictionary_2_make_pair_m13805_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2129  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2129 *, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (int32_t)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m13807_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13809_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13811_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2U5BU5D_t2777* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2777* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2128 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2777* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2138 * L_5 = (Transform_1_t2138 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2138 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, KeyValuePair_2U5BU5D_t2777*, int32_t, Transform_1_t2138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2128 *)__this, (KeyValuePair_2U5BU5D_t2777*)L_2, (int32_t)L_3, (Transform_1_t2138 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t195_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2047_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m13813_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32U5BU5D_t195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		LinkU5BU5D_t2047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3095);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t195* V_1 = {0};
	LinkU5BU5D_t2047* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t195* V_7 = {0};
	ObjectU5BU5D_t38* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t24_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m9094(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t195*)((Int32U5BU5D_t195*)SZArrayNew(Int32U5BU5D_t195_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t2047*)((LinkU5BU5D_t2047*)SZArrayNew(LinkU5BU5D_t2047_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t195* L_4 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t2047* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t195* L_10 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2047* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t195* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t195* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2047* L_26 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t195* L_32 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t195* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2047* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (Int32U5BU5D_t195*)((Int32U5BU5D_t195*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t38*)((ObjectU5BU5D_t38*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		Int32U5BU5D_t195* L_37 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		Int32U5BU5D_t195* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m378(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t38* L_40 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		ObjectU5BU5D_t38* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m378(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int32U5BU5D_t195* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t38* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern Il2CppCodeGenString* _stringLiteral2934;
extern "C" void Dictionary_2_Add_m13815_gshared (Dictionary_2_t2128 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		_stringLiteral2934 = il2cpp_codegen_string_literal_from_index(2934);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t195* L_6 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t2047* L_10 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t195* L_15 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		int32_t L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_15, L_17)), (int32_t)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t626 * L_20 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_20, (String_t*)_stringLiteral2934, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t2047* L_21 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_29 = V_0;
		Int32U5BU5D_t195* L_30 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t2047* L_36 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_36, L_37))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t2047* L_39 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_39, L_40))->___HashCode_0 = L_41;
		LinkU5BU5D_t2047* L_42 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t195* L_44 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t195* L_47 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		Int32U5BU5D_t195* L_50 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		int32_t L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51)) = (int32_t)L_52;
		ObjectU5BU5D_t38* L_53 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13817_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->___table_4);
		Int32U5BU5D_t195* L_1 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t195* L_2 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		Int32U5BU5D_t195* L_3 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t38* L_4 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		ObjectU5BU5D_t38* L_5 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t2047* L_6 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		LinkU5BU5D_t2047* L_7 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" bool Dictionary_2_ContainsKey_m13819_gshared (Dictionary_2_t2128 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t2047* L_9 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t195* L_14 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), (int32_t)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t2047* L_19 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_19, L_20))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13821_gshared (Dictionary_2_t2128 * __this, Object_t * ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2029 * L_0 = (( EqualityComparer_1_t2029 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t195* L_1 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		ObjectU5BU5D_t38* L_5 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), (Object_t *)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t2047* L_10 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t195* L_16 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral880;
extern Il2CppCodeGenString* _stringLiteral882;
extern Il2CppCodeGenString* _stringLiteral884;
extern Il2CppCodeGenString* _stringLiteral1507;
extern Il2CppCodeGenString* _stringLiteral2935;
extern "C" void Dictionary_2_GetObjectData_m13823_gshared (Dictionary_2_t2128 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral880 = il2cpp_codegen_string_literal_from_index(880);
		_stringLiteral882 = il2cpp_codegen_string_literal_from_index(882);
		_stringLiteral884 = il2cpp_codegen_string_literal_from_index(884);
		_stringLiteral1507 = il2cpp_codegen_string_literal_from_index(1507);
		_stringLiteral2935 = il2cpp_codegen_string_literal_from_index(2935);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2777* V_0 = {0};
	{
		SerializationInfo_t900 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral880, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		SerializationInfo_t900 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t900 *)L_2);
		SerializationInfo_AddValue_m7453((SerializationInfo_t900 *)L_2, (String_t*)_stringLiteral882, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t900 *)L_4);
		SerializationInfo_AddValue_m6487((SerializationInfo_t900 *)L_4, (String_t*)_stringLiteral884, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2777*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2777*)((KeyValuePair_2U5BU5D_t2777*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2777* L_8 = V_0;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, KeyValuePair_2U5BU5D_t2777*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2128 *)__this, (KeyValuePair_2U5BU5D_t2777*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t900 * L_9 = ___info;
		Int32U5BU5D_t195* L_10 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t900 *)L_9);
		SerializationInfo_AddValue_m7453((SerializationInfo_t900 *)L_9, (String_t*)_stringLiteral1507, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t900 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2777* L_12 = V_0;
		NullCheck((SerializationInfo_t900 *)L_11);
		SerializationInfo_AddValue_m6487((SerializationInfo_t900 *)L_11, (String_t*)_stringLiteral2935, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral882;
extern Il2CppCodeGenString* _stringLiteral884;
extern Il2CppCodeGenString* _stringLiteral1507;
extern Il2CppCodeGenString* _stringLiteral2935;
extern "C" void Dictionary_2_OnDeserialization_m13825_gshared (Dictionary_2_t2128 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral882 = il2cpp_codegen_string_literal_from_index(882);
		_stringLiteral884 = il2cpp_codegen_string_literal_from_index(884);
		_stringLiteral1507 = il2cpp_codegen_string_literal_from_index(1507);
		_stringLiteral2935 = il2cpp_codegen_string_literal_from_index(2935);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2777* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t900 * L_0 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		SerializationInfo_t900 * L_1 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t900 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m7461((SerializationInfo_t900 *)L_1, (String_t*)_stringLiteral882, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t900 * L_3 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t900 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m7454((SerializationInfo_t900 *)L_3, (String_t*)_stringLiteral884, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t900 * L_6 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t900 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m7461((SerializationInfo_t900 *)L_6, (String_t*)_stringLiteral1507, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t900 * L_8 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t900 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m7454((SerializationInfo_t900 *)L_8, (String_t*)_stringLiteral2935, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2777*)((KeyValuePair_2U5BU5D_t2777*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t2128 *)__this);
		(( void (*) (Dictionary_2_t2128 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2128 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2777* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2777* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2129 *)((KeyValuePair_2_t2129 *)(KeyValuePair_2_t2129 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2777* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2129 *)((KeyValuePair_2_t2129 *)(KeyValuePair_2_t2129 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2128 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2128 *)__this, (int32_t)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2777* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t900 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" bool Dictionary_2_Remove_m13827_gshared (Dictionary_2_t2128 * __this, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Object_t * V_5 = {0};
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t195* L_6 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t2047* L_11 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t195* L_16 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), (int32_t)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2047* L_22 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t195* L_29 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t2047* L_31 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_31, L_32))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30)) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t2047* L_34 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t2047* L_36 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_36, L_37))->___Next_1);
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_34, L_35))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t2047* L_39 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_39, L_40))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t2047* L_43 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_43, L_44))->___HashCode_0 = 0;
		Int32U5BU5D_t195* L_45 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Int32_t39_il2cpp_TypeInfo_var, (&V_4));
		int32_t L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_45, L_46)) = (int32_t)L_47;
		ObjectU5BU5D_t38* L_48 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, L_49)) = (Object_t *)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" bool Dictionary_2_TryGetValue_m13829_gshared (Dictionary_2_t2128 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		int32_t L_0 = ___key;
		goto IL_0016;
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		int32_t L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int32>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (int32_t)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t2047* L_9 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		Int32U5BU5D_t195* L_14 = (Int32U5BU5D_t195*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int32>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), (int32_t)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		Object_t ** L_19 = ___value;
		ObjectU5BU5D_t38* L_20 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t2047* L_23 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		Object_t ** L_27 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2131 * Dictionary_2_get_Keys_m13831_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2131 * L_0 = (KeyCollection_t2131 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2131 *, Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2135 * Dictionary_2_get_Values_m13833_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2135 * L_0 = (ValueCollection_t2135 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2135 *, Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern Il2CppCodeGenString* _stringLiteral2936;
extern "C" int32_t Dictionary_2_ToTKey_m13835_gshared (Dictionary_2_t2128 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		_stringLiteral2936 = il2cpp_codegen_string_literal_from_index(2936);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m421(NULL /*static, unused*/, (String_t*)_stringLiteral2936, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t626 * L_6 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5557(L_6, (String_t*)L_5, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2936;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" Object_t * Dictionary_2_ToTValue_m13837_gshared (Dictionary_2_t2128 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral2936 = il2cpp_codegen_string_literal_from_index(2936);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m421(NULL /*static, unused*/, (String_t*)_stringLiteral2936, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t626 * L_8 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5557(L_8, (String_t*)L_7, (String_t*)_stringLiteral19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13839_gshared (Dictionary_2_t2128 * __this, KeyValuePair_2_t2129  ___pair, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2129 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2128 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2128 *)__this, (int32_t)L_0, (Object_t **)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2029 * L_2 = (( EqualityComparer_1_t2029 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2129 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t2029 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t2029 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2133  Dictionary_2_GetEnumerator_m13841_gshared (Dictionary_2_t2128 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133  L_0 = {0};
		(( void (*) (Enumerator_t2133 *, Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2128 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m13843_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		Object_t * L_3 = ___value;
		DictionaryEntry_t65  L_4 = {0};
		DictionaryEntry__ctor_m7444(&L_4, (Object_t *)L_2, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_24.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_24MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2129  Array_InternalArray__get_Item_TisKeyValuePair_2_t2129_m21610_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2129_m21610(__this, p0, method) (( KeyValuePair_2_t2129  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2129_m21610_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13844_gshared (InternalEnumerator_1_t2130 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13845_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2129  L_0 = (( KeyValuePair_2_t2129  (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2130 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2129  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13846_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13847_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m7446((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Current()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2926;
extern Il2CppCodeGenString* _stringLiteral2927;
extern "C" KeyValuePair_2_t2129  InternalEnumerator_1_get_Current_m13848_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2926 = il2cpp_codegen_string_literal_from_index(2926);
		_stringLiteral2927 = il2cpp_codegen_string_literal_from_index(2927);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_1, (String_t*)_stringLiteral2926, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1154 * L_3 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_3, (String_t*)_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m7446((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2129  L_8 = (( KeyValuePair_2_t2129  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m13849_gshared (KeyValuePair_2_t2129 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2129 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2129 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2129 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2129 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m13850_gshared (KeyValuePair_2_t2129 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m13851_gshared (KeyValuePair_2_t2129 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m13852_gshared (KeyValuePair_2_t2129 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m13853_gshared (KeyValuePair_2_t2129 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
extern TypeInfo* StringU5BU5D_t284_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral453;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral454;
extern "C" String_t* KeyValuePair_2_ToString_m13854_gshared (KeyValuePair_2_t2129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral454 = il2cpp_codegen_string_literal_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t284* G_B2_1 = {0};
	StringU5BU5D_t284* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t284* G_B1_1 = {0};
	StringU5BU5D_t284* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t284* G_B3_2 = {0};
	StringU5BU5D_t284* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t284* G_B5_1 = {0};
	StringU5BU5D_t284* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t284* G_B4_1 = {0};
	StringU5BU5D_t284* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t284* G_B6_2 = {0};
	StringU5BU5D_t284* G_B6_3 = {0};
	{
		StringU5BU5D_t284* L_0 = (StringU5BU5D_t284*)((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral453);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral453;
		StringU5BU5D_t284* L_1 = (StringU5BU5D_t284*)L_0;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2129 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
	}
	{
		int32_t L_3 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2129 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		NullCheck((int32_t*)(&V_0));
		String_t* L_4 = Int32_ToString_m2467((int32_t*)(&V_0), NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t284* L_6 = (StringU5BU5D_t284*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral126);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)_stringLiteral126;
		StringU5BU5D_t284* L_7 = (StringU5BU5D_t284*)L_6;
		Object_t * L_8 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2129 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2129 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_9;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t284* L_12 = (StringU5BU5D_t284*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral454);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4)) = (String_t*)_stringLiteral454;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m5393(NULL /*static, unused*/, (StringU5BU5D_t284*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_4MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4MethodDeclarations.h"
struct Dictionary_2_t2128;
struct Array_t;
struct Transform_1_t2134;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t39_m21621_gshared (Dictionary_2_t2128 * __this, Array_t * p0, int32_t p1, Transform_1_t2134 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t39_m21621(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, Transform_1_t2134 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t39_m21621_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2128;
struct Int32U5BU5D_t195;
struct Transform_1_t2134;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t39_TisInt32_t39_m21622_gshared (Dictionary_2_t2128 * __this, Int32U5BU5D_t195* p0, int32_t p1, Transform_1_t2134 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t39_TisInt32_t39_m21622(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2128 *, Int32U5BU5D_t195*, int32_t, Transform_1_t2134 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t39_TisInt32_t39_m21622_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1502;
extern "C" void KeyCollection__ctor_m13855_gshared (KeyCollection_t2131 * __this, Dictionary_2_t2128 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral1502 = il2cpp_codegen_string_literal_from_index(1502);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2128 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral1502, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Dictionary_2_t2128 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13856_gshared (KeyCollection_t2131 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13857_gshared (KeyCollection_t2131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13858_gshared (KeyCollection_t2131 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t2128 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2128 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13859_gshared (KeyCollection_t2131 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13860_gshared (KeyCollection_t2131 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2131 *)__this);
		Enumerator_t2132  L_0 = (( Enumerator_t2132  (*) (KeyCollection_t2131 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2131 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2132  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13861_gshared (KeyCollection_t2131 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int32U5BU5D_t195* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int32U5BU5D_t195*)((Int32U5BU5D_t195*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t195* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Int32U5BU5D_t195* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2131 *)__this);
		(( void (*) (KeyCollection_t2131 *, Int32U5BU5D_t195*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2131 *)__this, (Int32U5BU5D_t195*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2128 * L_4 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2128 *)L_4);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2128 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2128 * L_7 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2134 * L_11 = (Transform_1_t2134 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2134 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2128 *)L_7);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, Transform_1_t2134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2128 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2134 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13862_gshared (KeyCollection_t2131 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2131 *)__this);
		Enumerator_t2132  L_0 = (( Enumerator_t2132  (*) (KeyCollection_t2131 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2131 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2132  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13863_gshared (KeyCollection_t2131 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13864_gshared (KeyCollection_t2131 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13865_gshared (KeyCollection_t2131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1326_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m13866_gshared (KeyCollection_t2131 * __this, Int32U5BU5D_t195* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Int32U5BU5D_t195* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2128 *)L_0);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2128 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2128 * L_3 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Int32U5BU5D_t195* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2134 * L_7 = (Transform_1_t2134 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2134 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2128 *)L_3);
		(( void (*) (Dictionary_2_t2128 *, Int32U5BU5D_t195*, int32_t, Transform_1_t2134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2128 *)L_3, (Int32U5BU5D_t195*)L_4, (int32_t)L_5, (Transform_1_t2134 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2132  KeyCollection_GetEnumerator_m13867_gshared (KeyCollection_t2131 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Enumerator_t2132  L_1 = {0};
		(( void (*) (Enumerator_t2132 *, Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2128 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m13868_gshared (KeyCollection_t2131 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2128 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count() */, (Dictionary_2_t2128 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13869_gshared (Enumerator_t2132 * __this, Dictionary_2_t2128 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = ___host;
		NullCheck((Dictionary_2_t2128 *)L_0);
		Enumerator_t2133  L_1 = (( Enumerator_t2133  (*) (Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2128 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13870_gshared (Enumerator_t2132 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13871_gshared (Enumerator_t2132 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13872_gshared (Enumerator_t2132 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" int32_t Enumerator_get_Current_m13873_gshared (Enumerator_t2132 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2129 * L_1 = (KeyValuePair_2_t2129 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2129 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13874_gshared (Enumerator_t2133 * __this, Dictionary_2_t2128 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2128 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13875_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2129  L_0 = (KeyValuePair_2_t2129 )(__this->___current_3);
		KeyValuePair_2_t2129  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13876_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2129 * L_0 = (KeyValuePair_2_t2129 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2129 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t2129 * L_4 = (KeyValuePair_2_t2129 *)&(__this->___current_3);
		Object_t * L_5 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2129 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		DictionaryEntry_t65  L_6 = {0};
		DictionaryEntry__ctor_m7444(&L_6, (Object_t *)L_3, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13877_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13878_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13879_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t2128 * L_4 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2047* L_5 = (LinkU5BU5D_t2047*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t2128 * L_8 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck(L_8);
		Int32U5BU5D_t195* L_9 = (Int32U5BU5D_t195*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2128 * L_12 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t38* L_13 = (ObjectU5BU5D_t38*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2129  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2129 *, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2128 * L_18 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2129  Enumerator_get_Current_m13880_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2129  L_0 = (KeyValuePair_2_t2129 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13881_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2129 * L_0 = (KeyValuePair_2_t2129 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2129 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13882_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2129 * L_0 = (KeyValuePair_2_t2129 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2129 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern TypeInfo* ObjectDisposedException_t989_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2938;
extern "C" void Enumerator_VerifyState_m13883_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(616);
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2938 = il2cpp_codegen_string_literal_from_index(2938);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t989 * L_1 = (ObjectDisposedException_t989 *)il2cpp_codegen_object_new (ObjectDisposedException_t989_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m5558(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Dictionary_2_t2128 * L_2 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1154 * L_5 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_5, (String_t*)_stringLiteral2938, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2939;
extern "C" void Enumerator_VerifyCurrent_m13884_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2939 = il2cpp_codegen_string_literal_from_index(2939);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2133 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_1, (String_t*)_stringLiteral2939, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13885_gshared (Enumerator_t2133 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2128 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13886_gshared (Transform_1_t2134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m13887_gshared (Transform_1_t2134 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13887((Transform_1_t2134 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m13888_gshared (Transform_1_t2134 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t39_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m13889_gshared (Transform_1_t2134 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
struct Dictionary_2_t2128;
struct Array_t;
struct Transform_1_t2137;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21624_gshared (Dictionary_2_t2128 * __this, Array_t * p0, int32_t p1, Transform_1_t2137 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21624(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, Transform_1_t2137 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21624_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2128;
struct ObjectU5BU5D_t38;
struct Transform_1_t2137;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21623_gshared (Dictionary_2_t2128 * __this, ObjectU5BU5D_t38* p0, int32_t p1, Transform_1_t2137 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21623(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2128 *, ObjectU5BU5D_t38*, int32_t, Transform_1_t2137 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21623_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1502;
extern "C" void ValueCollection__ctor_m13890_gshared (ValueCollection_t2135 * __this, Dictionary_2_t2128 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral1502 = il2cpp_codegen_string_literal_from_index(1502);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2128 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral1502, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Dictionary_2_t2128 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13891_gshared (ValueCollection_t2135 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13892_gshared (ValueCollection_t2135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13893_gshared (ValueCollection_t2135 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2128 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2128 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2128 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13894_gshared (ValueCollection_t2135 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13895_gshared (ValueCollection_t2135 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2135 *)__this);
		Enumerator_t2136  L_0 = (( Enumerator_t2136  (*) (ValueCollection_t2135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2136  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13896_gshared (ValueCollection_t2135 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t38* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t38*)((ObjectU5BU5D_t38*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t38* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t38* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2135 *)__this);
		(( void (*) (ValueCollection_t2135 *, ObjectU5BU5D_t38*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2135 *)__this, (ObjectU5BU5D_t38*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2128 * L_4 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2128 *)L_4);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2128 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2128 * L_7 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2137 * L_11 = (Transform_1_t2137 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2137 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2128 *)L_7);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, Transform_1_t2137 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2128 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2137 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13897_gshared (ValueCollection_t2135 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2135 *)__this);
		Enumerator_t2136  L_0 = (( Enumerator_t2136  (*) (ValueCollection_t2135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2136  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13898_gshared (ValueCollection_t2135 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13899_gshared (ValueCollection_t2135 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13900_gshared (ValueCollection_t2135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1326_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13901_gshared (ValueCollection_t2135 * __this, ObjectU5BU5D_t38* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		ObjectU5BU5D_t38* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2128 *)L_0);
		(( void (*) (Dictionary_2_t2128 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2128 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2128 * L_3 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		ObjectU5BU5D_t38* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2137 * L_7 = (Transform_1_t2137 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2137 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2128 *)L_3);
		(( void (*) (Dictionary_2_t2128 *, ObjectU5BU5D_t38*, int32_t, Transform_1_t2137 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2128 *)L_3, (ObjectU5BU5D_t38*)L_4, (int32_t)L_5, (Transform_1_t2137 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2136  ValueCollection_GetEnumerator_m13902_gshared (ValueCollection_t2135 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		Enumerator_t2136  L_1 = {0};
		(( void (*) (Enumerator_t2136 *, Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2128 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13903_gshared (ValueCollection_t2135 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = (Dictionary_2_t2128 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2128 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count() */, (Dictionary_2_t2128 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13904_gshared (Enumerator_t2136 * __this, Dictionary_2_t2128 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2128 * L_0 = ___host;
		NullCheck((Dictionary_2_t2128 *)L_0);
		Enumerator_t2133  L_1 = (( Enumerator_t2133  (*) (Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2128 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13905_gshared (Enumerator_t2136 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13906_gshared (Enumerator_t2136 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13907_gshared (Enumerator_t2136 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m13908_gshared (Enumerator_t2136 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2129 * L_1 = (KeyValuePair_2_t2129 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2129 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13909_gshared (Transform_1_t2137 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m13910_gshared (Transform_1_t2137 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13910((Transform_1_t2137 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m13911_gshared (Transform_1_t2137 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t39_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m13912_gshared (Transform_1_t2137 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13913_gshared (Transform_1_t2127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t65  Transform_1_Invoke_m13914_gshared (Transform_1_t2127 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13914((Transform_1_t2127 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t65  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t65  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m13915_gshared (Transform_1_t2127 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t39_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t65  Transform_1_EndInvoke_m13916_gshared (Transform_1_t2127 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t65 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13917_gshared (Transform_1_t2138 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2129  Transform_1_Invoke_m13918_gshared (Transform_1_t2138 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m13918((Transform_1_t2138 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2129  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2129  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m13919_gshared (Transform_1_t2138 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t39_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2129  Transform_1_EndInvoke_m13920_gshared (Transform_1_t2138 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2129 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13921_gshared (ShimEnumerator_t2139 * __this, Dictionary_2_t2128 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2128 * L_0 = ___host;
		NullCheck((Dictionary_2_t2128 *)L_0);
		Enumerator_t2133  L_1 = (( Enumerator_t2133  (*) (Dictionary_2_t2128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2128 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13922_gshared (ShimEnumerator_t2139 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m13923_gshared (ShimEnumerator_t2139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(778);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2133  L_0 = (Enumerator_t2133 )(__this->___host_enumerator_0);
		Enumerator_t2133  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t65  L_3 = (DictionaryEntry_t65 )InterfaceFuncInvoker0< DictionaryEntry_t65  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13924_gshared (ShimEnumerator_t2139 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2129  V_0 = {0};
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2129  L_1 = (( KeyValuePair_2_t2129  (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2129 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2129 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13925_gshared (ShimEnumerator_t2139 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2129  V_0 = {0};
	{
		Enumerator_t2133 * L_0 = (Enumerator_t2133 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2129  L_1 = (( KeyValuePair_2_t2129  (*) (Enumerator_t2133 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2133 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2129 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2129 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2129 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t65_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m13926_gshared (ShimEnumerator_t2139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2139 *)__this);
		DictionaryEntry_t65  L_0 = (DictionaryEntry_t65 )VirtFuncInvoker0< DictionaryEntry_t65  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry() */, (ShimEnumerator_t2139 *)__this);
		DictionaryEntry_t65  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t65_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_8.h"
// System.Predicate`1<System.Int32>
#include "mscorlib_System_Predicate_1_gen_12.h"
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_15.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_8MethodDeclarations.h"
// System.Predicate`1<System.Int32>
#include "mscorlib_System_Predicate_1_gen_12MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"
struct Array_t;
struct Int32U5BU5D_t195;
// Declaration System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisInt32_t39_m21630_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t195** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisInt32_t39_m21630(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t195**, int32_t, const MethodInfo*))Array_Resize_TisInt32_t39_m21630_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct Int32U5BU5D_t195;
// Declaration System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisInt32_t39_m21631_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t195* p0, int32_t p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisInt32_t39_m21631(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t195*, int32_t, int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisInt32_t39_m21631_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Int32U5BU5D_t195;
struct IComparer_1_t3119;
// Declaration System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisInt32_t39_m21633_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t195* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisInt32_t39_m21633(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t195*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisInt32_t39_m21633_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Int32U5BU5D_t195;
struct Comparison_1_t2152;
// Declaration System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Int32>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisInt32_t39_m21639_gshared (Object_t * __this /* static, unused */, Int32U5BU5D_t195* p0, int32_t p1, Comparison_1_t2152 * p2, const MethodInfo* method);
#define Array_Sort_TisInt32_t39_m21639(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t195*, int32_t, Comparison_1_t2152 *, const MethodInfo*))Array_Sort_TisInt32_t39_m21639_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m2083_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t195* L_0 = ((List_1_t165_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1473;
extern "C" void List_1__ctor_m13977_gshared (List_1_t165 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		_stringLiteral1473 = il2cpp_codegen_string_literal_from_index(1473);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t928 * L_1 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_1, (String_t*)_stringLiteral1473, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((Int32U5BU5D_t195*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m13978_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t165_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((Int32U5BU5D_t195*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13979_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t165 *)__this);
		Enumerator_t2144  L_0 = (( Enumerator_t2144  (*) (List_1_t165 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((List_1_t165 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2144  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m13980_gshared (List_1_t165 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m378(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m13981_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t165 *)__this);
		Enumerator_t2144  L_0 = (( Enumerator_t2144  (*) (List_1_t165 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((List_1_t165 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t2144  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t902_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2928;
extern "C" int32_t List_1_System_Collections_IList_Add_m13982_gshared (List_1_t165 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t902_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		InvalidCastException_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral2928 = il2cpp_codegen_string_literal_from_index(2928);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t165 *)__this);
			VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(T) */, (List_1_t165 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_0036;
		}

IL_001a:
		{
			; // IL_001a: leave IL_002b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t902_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001f;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1909_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0025;
		throw e;
	}

CATCH_001f:
	{ // begin catch(System.NullReferenceException)
		goto IL_002b;
	} // end catch (depth: 1)

CATCH_0025:
	{ // begin catch(System.InvalidCastException)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		ArgumentException_t626 * L_2 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_2, (String_t*)_stringLiteral2928, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0036:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t902_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1909_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m13983_gshared (List_1_t165 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t902_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		InvalidCastException_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t165 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T) */, (List_1_t165 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (bool)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t902_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1909_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return 0;
	}

IL_0025:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t902_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1909_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m13984_gshared (List_1_t165 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t902_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		InvalidCastException_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t165 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T) */, (List_1_t165 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			V_0 = (int32_t)L_1;
			goto IL_0025;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t902_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1909_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return (-1);
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t902_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2928;
extern "C" void List_1_System_Collections_IList_Insert_m13985_gshared (List_1_t165 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t902_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		InvalidCastException_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral2928 = il2cpp_codegen_string_literal_from_index(2928);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t165 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t165 *)__this);
			VirtActionInvoker2< int32_t, int32_t >::Invoke(29 /* System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T) */, (List_1_t165 *)__this, (int32_t)L_1, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0035;
		}

IL_0019:
		{
			; // IL_0019: leave IL_002a
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t902_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001e;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1909_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.NullReferenceException)
		goto IL_002a;
	} // end catch (depth: 1)

CATCH_0024:
	{ // begin catch(System.InvalidCastException)
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		ArgumentException_t626 * L_3 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_3, (String_t*)_stringLiteral2928, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t902_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1909_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m13986_gshared (List_1_t165 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t902_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		InvalidCastException_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			NullCheck((List_1_t165 *)__this);
			VirtFuncInvoker1< bool, int32_t >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T) */, (List_1_t165 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_0023;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t902_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1909_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13987_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m13988_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m13989_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m13990_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m13991_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m13992_gshared (List_1_t165 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t165 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32) */, (List_1_t165 *)__this, (int32_t)L_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t902_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1909_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" void List_1_System_Collections_IList_set_Item_m13993_gshared (List_1_t165 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t902_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		InvalidCastException_t1909_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(882);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t165 *)__this);
			VirtActionInvoker2< int32_t, int32_t >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T) */, (List_1_t165 *)__this, (int32_t)L_0, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4))))));
			goto IL_002e;
		}

IL_0012:
		{
			; // IL_0012: leave IL_0023
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t902_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0017;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1909_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.NullReferenceException)
		goto IL_0023;
	} // end catch (depth: 1)

CATCH_001d:
	{ // begin catch(System.InvalidCastException)
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ArgumentException_t626 * L_2 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_2, (String_t*)_stringLiteral19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m13994_gshared (List_1_t165 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		Int32U5BU5D_t195* L_1 = (Int32U5BU5D_t195*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t165 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_001a:
	{
		Int32U5BU5D_t195* L_2 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		int32_t L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_5)) = (int32_t)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m13995_gshared (List_1_t165 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		Int32U5BU5D_t195* L_3 = (Int32U5BU5D_t195*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		NullCheck((List_1_t165 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t165 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)((List_1_t165 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		int32_t L_5 = Math_Max_m6457(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m6457(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((List_1_t165 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
	}

IL_0031:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m13996_gshared (List_1_t165 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t165 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		Object_t* L_4 = ___collection;
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< Int32U5BU5D_t195*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), (Object_t*)L_4, (Int32U5BU5D_t195*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m13997_gshared (List_1_t165 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001a;
		}

IL_000c:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), (Object_t*)L_2);
			V_0 = (int32_t)L_3;
			int32_t L_4 = V_0;
			NullCheck((List_1_t165 *)__this);
			VirtActionInvoker1< int32_t >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Int32>::Add(T) */, (List_1_t165 *)__this, (int32_t)L_4);
		}

IL_001a:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_002e;
			}
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(42)
		}

IL_002e:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m13998_gshared (List_1_t165 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t165 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((List_1_t165 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		goto IL_0027;
	}

IL_0020:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((List_1_t165 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
	}

IL_0027:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2146 * List_1_AsReadOnly_m13999_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t2146 * L_0 = (ReadOnlyCollection_1_t2146 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t2146 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14000_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		Int32U5BU5D_t195* L_1 = (Int32U5BU5D_t195*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14001_gshared (List_1_t165 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t195*, int32_t, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Int32U5BU5D_t195*)L_0, (int32_t)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14002_gshared (List_1_t165 * __this, Int32U5BU5D_t195* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		Int32U5BU5D_t195* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m378(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_Find_m14003_gshared (List_1_t165 * __this, Predicate_1_t2148 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		Predicate_1_t2148 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2148 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2148 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t2148 * L_2 = ___match;
		NullCheck((List_1_t165 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t165 *, int32_t, int32_t, Predicate_1_t2148 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t165 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t2148 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7));
		goto IL_0036;
	}

IL_002d:
	{
		Initobj (Int32_t39_il2cpp_TypeInfo_var, (&V_1));
		int32_t L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2060;
extern "C" void List_1_CheckMatch_m14004_gshared (Object_t * __this /* static, unused */, Predicate_1_t2148 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral2060 = il2cpp_codegen_string_literal_from_index(2060);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t2148 * L_0 = ___match;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral2060, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14005_gshared (List_1_t165 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2148 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0028;
	}

IL_000b:
	{
		Predicate_1_t2148 * L_3 = ___match;
		Int32U5BU5D_t195* L_4 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t2148 *)L_3);
		bool L_7 = (( bool (*) (Predicate_1_t2148 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2148 *)L_3, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2144  List_1_GetEnumerator_m14006_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2144  L_0 = {0};
		(( void (*) (Enumerator_t2144 *, List_1_t165 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t165 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14007_gshared (List_1_t165 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, Int32U5BU5D_t195*, int32_t, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (Int32U5BU5D_t195*)L_0, (int32_t)L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14008_gshared (List_1_t165 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000c:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_6 = ___start;
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m378(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		Int32U5BU5D_t195* L_15 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral871;
extern "C" void List_1_CheckIndex_m14009_gshared (List_1_t165 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		_stringLiteral871 = il2cpp_codegen_string_literal_from_index(871);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t928 * L_3 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_3, (String_t*)_stringLiteral871, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14010_gshared (List_1_t165 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t165 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Int32U5BU5D_t195* L_2 = (Int32U5BU5D_t195*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((List_1_t165 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0021:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t165 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Int32U5BU5D_t195* L_4 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_5 = ___index;
		int32_t L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2929;
extern "C" void List_1_CheckCollection_m14011_gshared (List_1_t165 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral2929 = il2cpp_codegen_string_literal_from_index(2929);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral2929, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14012_gshared (List_1_t165 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___item;
		NullCheck((List_1_t165 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T) */, (List_1_t165 *)__this, (int32_t)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t165 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32) */, (List_1_t165 *)__this, (int32_t)L_3);
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14013_gshared (List_1_t165 * __this, Predicate_1_t2148 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t2148 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t2148 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t2148 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0011:
	{
		Predicate_1_t2148 * L_1 = ___match;
		Int32U5BU5D_t195* L_2 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t2148 *)L_1);
		bool L_5 = (( bool (*) (Predicate_1_t2148 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2148 *)L_1, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}

IL_003d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004b;
		}
	}
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0099;
	}

IL_0062:
	{
		Predicate_1_t2148 * L_13 = ___match;
		Int32U5BU5D_t195* L_14 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t2148 *)L_13);
		bool L_17 = (( bool (*) (Predicate_1_t2148 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)((Predicate_1_t2148 *)L_13, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		if (L_17)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t195* L_18 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		Int32U5BU5D_t195* L_21 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
	}

IL_0095:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		Int32U5BU5D_t195* L_29 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00bd:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral871;
extern "C" void List_1_RemoveAt_m14014_gshared (List_1_t165 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		_stringLiteral871 = il2cpp_codegen_string_literal_from_index(871);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}

IL_0013:
	{
		ArgumentOutOfRangeException_t928 * L_3 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_3, (String_t*)_stringLiteral871, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t165 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14015_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m6476(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14016_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Comparer_1_t2149 * L_2 = (( Comparer_1_t2149 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t195*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, (Int32U5BU5D_t195*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14017_gshared (List_1_t165 * __this, Comparison_1_t2152 * ___comparison, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t2152 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t195*, int32_t, Comparison_1_t2152 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, (Int32U5BU5D_t195*)L_0, (int32_t)L_1, (Comparison_1_t2152 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t195* List_1_ToArray_m14018_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	Int32U5BU5D_t195* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (Int32U5BU5D_t195*)((Int32U5BU5D_t195*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_0));
		Int32U5BU5D_t195* L_1 = (Int32U5BU5D_t195*)(__this->____items_1);
		Int32U5BU5D_t195* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m299(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		Int32U5BU5D_t195* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14019_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((List_1_t165 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14020_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m14021_gshared (List_1_t165 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t928 * L_2 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7496(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0012:
	{
		Int32U5BU5D_t195** L_3 = (Int32U5BU5D_t195**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, Int32U5BU5D_t195**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, (Int32U5BU5D_t195**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14022_gshared (List_1_t165 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral871;
extern "C" int32_t List_1_get_Item_m14023_gshared (List_1_t165 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		_stringLiteral871 = il2cpp_codegen_string_literal_from_index(871);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentOutOfRangeException_t928 * L_2 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_2, (String_t*)_stringLiteral871, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		Int32U5BU5D_t195* L_3 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral871;
extern "C" void List_1_set_Item_m14024_gshared (List_1_t165 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		_stringLiteral871 = il2cpp_codegen_string_literal_from_index(871);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t165 *)__this);
		(( void (*) (List_1_t165 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((List_1_t165 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t928 * L_3 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_3, (String_t*)_stringLiteral871, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		Int32U5BU5D_t195* L_4 = (Int32U5BU5D_t195*)(__this->____items_1);
		int32_t L_5 = ___index;
		int32_t L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m14025_gshared (Enumerator_t2144 * __this, List_1_t165 * ___l, const MethodInfo* method)
{
	{
		List_1_t165 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t165 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Int32>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14026_gshared (Enumerator_t2144 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2144 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2144 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7448(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___current_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m14027_gshared (Enumerator_t2144 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t165 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::VerifyState()
extern TypeInfo* ObjectDisposedException_t989_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2930;
extern "C" void Enumerator_VerifyState_m14028_gshared (Enumerator_t2144 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(616);
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2930 = il2cpp_codegen_string_literal_from_index(2930);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t165 * L_0 = (List_1_t165 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		Enumerator_t2144  L_1 = (*(Enumerator_t2144 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m337((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t989 * L_5 = (ObjectDisposedException_t989 *)il2cpp_codegen_object_new (ObjectDisposedException_t989_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m5558(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t165 * L_7 = (List_1_t165 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0047;
		}
	}
	{
		InvalidOperationException_t1154 * L_9 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_9, (String_t*)_stringLiteral2930, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14029_gshared (Enumerator_t2144 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t2144 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2144 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t165 * L_2 = (List_1_t165 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t165 * L_4 = (List_1_t165 *)(__this->___l_0);
		NullCheck(L_4);
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_0053:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m14030_gshared (Enumerator_t2144 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1484;
extern "C" void ReadOnlyCollection_1__ctor_m14031_gshared (ReadOnlyCollection_1_t2146 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral1484 = il2cpp_codegen_string_literal_from_index(1484);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral1484, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14032_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m14033_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m14034_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m14035_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m14036_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m14037_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2146 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2146 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m14038_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14039_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m14040_gshared (ReadOnlyCollection_1_t2146 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1326_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1326_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1326_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t893_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m14041_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t893_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m14042_gshared (ReadOnlyCollection_1_t2146 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m14043_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m14044_gshared (ReadOnlyCollection_1_t2146 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14045_gshared (ReadOnlyCollection_1_t2146 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m14046_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m14047_gshared (ReadOnlyCollection_1_t2146 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m14048_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m14049_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m14050_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m14051_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m14052_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m14053_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m14054_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m14055_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m14056_gshared (ReadOnlyCollection_1_t2146 * __this, Int32U5BU5D_t195* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Int32U5BU5D_t195* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Int32U5BU5D_t195*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Int32U5BU5D_t195*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m14057_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m14058_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m14059_gshared (ReadOnlyCollection_1_t2146 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t ReadOnlyCollection_1_get_Item_m14060_gshared (ReadOnlyCollection_1_t2146 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Int32>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m14061_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t165 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t165 * L_0 = (List_1_t165 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t165 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t165 *)L_0;
		List_1_t165 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1326_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t165 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14062_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14063_gshared (Collection_1_t2147 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t1326_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1326_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t1326_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14064_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14065_gshared (Collection_1_t2147 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		int32_t L_4 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t2147 *)__this, (int32_t)L_2, (int32_t)L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14066_gshared (Collection_1_t2147 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14067_gshared (Collection_1_t2147 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_2, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001d:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14068_gshared (Collection_1_t2147 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t2147 *)__this, (int32_t)L_0, (int32_t)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14069_gshared (Collection_1_t2147 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2147 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T) */, (Collection_1_t2147 *)__this, (int32_t)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t2147 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14070_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14071_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14072_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14073_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14074_gshared (Collection_1_t2147 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14075_gshared (Collection_1_t2147 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T) */, (Collection_1_t2147 *)__this, (int32_t)L_0, (int32_t)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m14076_gshared (Collection_1_t2147 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___item;
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t2147 *)__this, (int32_t)L_2, (int32_t)L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m14077_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems() */, (Collection_1_t2147 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m14078_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m14079_gshared (Collection_1_t2147 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m14080_gshared (Collection_1_t2147 * __this, Int32U5BU5D_t195* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Int32U5BU5D_t195* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< Int32U5BU5D_t195*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Int32U5BU5D_t195*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14081_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14082_gshared (Collection_1_t2147 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14083_gshared (Collection_1_t2147 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___item;
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T) */, (Collection_1_t2147 *)__this, (int32_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14084_gshared (Collection_1_t2147 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		int32_t L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Int32>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (int32_t)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m14085_gshared (Collection_1_t2147 * __this, int32_t ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___item;
		NullCheck((Collection_1_t2147 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T) */, (Collection_1_t2147 *)__this, (int32_t)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t2147 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14086_gshared (Collection_1_t2147 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32) */, (Collection_1_t2147 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14087_gshared (Collection_1_t2147 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14088_gshared (Collection_1_t2147 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m14089_gshared (Collection_1_t2147 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14090_gshared (Collection_1_t2147 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___value;
		NullCheck((Collection_1_t2147 *)__this);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T) */, (Collection_1_t2147 *)__this, (int32_t)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14091_gshared (Collection_1_t2147 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		int32_t L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int32>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int32_t)L_1, (int32_t)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m14092_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		G_B6_0 = G_B4_0;
		goto IL_0029;
	}

IL_0028:
	{
		G_B6_0 = 1;
	}

IL_0029:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2928;
extern "C" int32_t Collection_1_ConvertItem_m14093_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral2928 = il2cpp_codegen_string_literal_from_index(2928);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(int32_t*)((int32_t*)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_0012:
	{
		ArgumentException_t626 * L_3 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_3, (String_t*)_stringLiteral2928, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m14094_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t45 * L_2 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m14095_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t1326_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t1326_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t1285_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m14096_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t1285_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1285_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14097_gshared (Predicate_1_t2148 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14098_gshared (Predicate_1_t2148 * __this, int32_t ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m14098((Predicate_1_t2148 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m14099_gshared (Predicate_1_t2148 * __this, int32_t ___obj, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t39_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14100_gshared (Predicate_1_t2148 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.ctor()
extern "C" void Comparer_1__ctor_m14101_gshared (Comparer_1_t2149 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.cctor()
extern const Il2CppType* GenericComparer_1_t3155_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m14102_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t3155_0_0_0_var = il2cpp_codegen_type_from_index(3092);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(GenericComparer_1_t3155_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t793* L_4 = (TypeU5BU5D_t793*)((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t793* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t793*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m5364(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2149_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2149 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2151 * L_8 = (DefaultComparer_t2151 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2151 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2149_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m14103_gshared (Comparer_1_t2149 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2149 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T) */, (Comparer_1_t2149 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		ArgumentException_t626 * L_8 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11625(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
extern "C" Comparer_1_t2149 * Comparer_1_get_Default_m14104_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2149 * L_0 = ((Comparer_1_t2149_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericComparer`1<System.Int32>::.ctor()
extern "C" void GenericComparer_1__ctor_m14105_gshared (GenericComparer_1_t2150 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2149 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2149 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2149 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Int32>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m14106_gshared (GenericComparer_1_t2150 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		goto IL_001e;
	}
	{
		int32_t L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		int32_t L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		int32_t L_3 = ___y;
		NullCheck((int32_t*)(&___x));
		int32_t L_4 = Int32_CompareTo_m2395((int32_t*)(&___x), (int32_t)L_3, NULL);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m14107_gshared (DefaultComparer_t2151 * __this, const MethodInfo* method)
{
	{
		NullCheck((Comparer_1_t2149 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Comparer_1_t2149 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2149 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
extern TypeInfo* IComparable_t1991_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2931;
extern "C" int32_t DefaultComparer_Compare_m14108_gshared (DefaultComparer_t2151 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t1991_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(908);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral2931 = il2cpp_codegen_string_literal_from_index(2931);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		goto IL_001e;
	}
	{
		int32_t L_1 = ___y;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		int32_t L_2 = ___y;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		int32_t L_3 = ___x;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_6 = ___x;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		int32_t L_9 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.IComparable`1<System.Int32>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)((Object_t*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (int32_t)L_9);
		return L_10;
	}

IL_004d:
	{
		int32_t L_11 = ___x;
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((Object_t *)IsInst(L_13, IComparable_t1991_il2cpp_TypeInfo_var)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = ___x;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		int32_t L_17 = ___y;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		NullCheck((Object_t *)((Object_t *)Castclass(L_16, IComparable_t1991_il2cpp_TypeInfo_var)));
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t1991_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_16, IComparable_t1991_il2cpp_TypeInfo_var)), (Object_t *)L_19);
		return L_20;
	}

IL_0074:
	{
		ArgumentException_t626 * L_21 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_21, (String_t*)_stringLiteral2931, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Int32>
#include "mscorlib_System_Comparison_1_gen_15MethodDeclarations.h"



// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14109_gshared (Comparison_1_t2152 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14110_gshared (Comparison_1_t2152 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m14110((Comparison_1_t2152 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m14111_gshared (Comparison_1_t2152 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t39_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(Int32_t39_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14112_gshared (Comparison_1_t2152 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Byte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t914_m21642_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t914_m21642(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisByte_t914_m21642_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Byte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14113_gshared (InternalEnumerator_1_t2153 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14114_gshared (InternalEnumerator_1_t2153 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (InternalEnumerator_1_t2153 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2153 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Byte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14115_gshared (InternalEnumerator_1_t2153 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Byte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14116_gshared (InternalEnumerator_1_t2153 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m7446((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Byte>::get_Current()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2926;
extern Il2CppCodeGenString* _stringLiteral2927;
extern "C" uint8_t InternalEnumerator_1_get_Current_m14117_gshared (InternalEnumerator_1_t2153 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2926 = il2cpp_codegen_string_literal_from_index(2926);
		_stringLiteral2927 = il2cpp_codegen_string_literal_from_index(2927);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_1, (String_t*)_stringLiteral2926, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1154 * L_3 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_3, (String_t*)_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m7446((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint8_t L_8 = (( uint8_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"
struct Dictionary_2_t2156;
struct DictionaryEntryU5BU5D_t3064;
struct Transform_1_t2155;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t65_TisDictionaryEntry_t65_m21665_gshared (Dictionary_2_t2156 * __this, DictionaryEntryU5BU5D_t3064* p0, int32_t p1, Transform_1_t2155 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t65_TisDictionaryEntry_t65_m21665(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2156 *, DictionaryEntryU5BU5D_t3064*, int32_t, Transform_1_t2155 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t65_TisDictionaryEntry_t65_m21665_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2156;
struct Array_t;
struct Transform_1_t2165;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2157_m21667_gshared (Dictionary_2_t2156 * __this, Array_t * p0, int32_t p1, Transform_1_t2165 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2157_m21667(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, Transform_1_t2165 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t2157_m21667_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2156;
struct KeyValuePair_2U5BU5D_t2551;
struct Transform_1_t2165;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2157_TisKeyValuePair_2_t2157_m21668_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2U5BU5D_t2551* p0, int32_t p1, Transform_1_t2165 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2157_TisKeyValuePair_2_t2157_m21668(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2156 *, KeyValuePair_2U5BU5D_t2551*, int32_t, Transform_1_t2165 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t2157_TisKeyValuePair_2_t2157_m21668_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m14118_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2156 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14120_gshared (Dictionary_2_t2156 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2156 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m14122_gshared (Dictionary_2_t2156 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t2156 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14124_gshared (Dictionary_2_t2156 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2156 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1502;
extern "C" void Dictionary_2__ctor_m14126_gshared (Dictionary_2_t2156 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral1502 = il2cpp_codegen_string_literal_from_index(1502);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t2157  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral1502, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2156 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t2157  L_9 = (KeyValuePair_2_t2157 )InterfaceFuncInvoker0< KeyValuePair_2_t2157  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t2157 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2157 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2157 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t2156 *)__this);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2156 *)__this, (Object_t *)L_10, (Object_t *)L_11);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14128_gshared (Dictionary_2_t2156 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m14130_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2156 *)__this);
		KeyCollection_t2159 * L_0 = (( KeyCollection_t2159 * (*) (Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m14132_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t2156 *)__this);
		ValueCollection_t2163 * L_0 = (( ValueCollection_t2163 * (*) (Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14134_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t2156 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2156 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2156 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2156 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t2156 *)__this);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(20 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey) */, (Dictionary_2_t2156 *)__this, (Object_t *)L_4);
		return L_5;
	}

IL_002f:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14136_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2156 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2156 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2156 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2156 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2156 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, (Dictionary_2_t2156 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14138_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t2156 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t2156 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t2156 *)__this);
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t2156 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t2156 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2156 *)__this, (Object_t *)L_1, (Object_t *)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14140_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2156 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2156 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0029:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14142_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t2156 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t2156 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14144_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14146_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14148_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14150_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2_t2157  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2157 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2157 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2156 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2156 *)__this, (Object_t *)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14152_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2_t2157  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2157  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2156 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2156 *, KeyValuePair_2_t2157 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2156 *)__this, (KeyValuePair_2_t2157 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14154_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2U5BU5D_t2551* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2551* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, KeyValuePair_2U5BU5D_t2551*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2156 *)__this, (KeyValuePair_2U5BU5D_t2551*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14156_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2_t2157  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2157  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t2156 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t2156 *, KeyValuePair_2_t2157 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t2156 *)__this, (KeyValuePair_2_t2157 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2157 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2156 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey) */, (Dictionary_2_t2156 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t3064_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14158_gshared (Dictionary_2_t2156 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t3064_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3093);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2551* V_0 = {0};
	DictionaryEntryU5BU5D_t3064* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t3064* G_B5_1 = {0};
	Dictionary_2_t2156 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t3064* G_B4_1 = {0};
	Dictionary_2_t2156 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t2551*)((KeyValuePair_2U5BU5D_t2551*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t2551* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		KeyValuePair_2U5BU5D_t2551* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, KeyValuePair_2U5BU5D_t2551*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2156 *)__this, (KeyValuePair_2U5BU5D_t2551*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0016:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2156 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t3064*)((DictionaryEntryU5BU5D_t3064*)IsInst(L_6, DictionaryEntryU5BU5D_t3064_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t3064* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		DictionaryEntryU5BU5D_t3064* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t2155 * L_10 = ((Dictionary_2_t2156_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t2156 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t2156 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t2155 * L_12 = (Transform_1_t2155 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t2155 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t2156_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t2156 *)(G_B4_2));
	}

IL_0046:
	{
		Transform_1_t2155 * L_13 = ((Dictionary_2_t2156_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t2156 *)G_B5_2);
		(( void (*) (Dictionary_2_t2156 *, DictionaryEntryU5BU5D_t3064*, int32_t, Transform_1_t2155 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t2156 *)G_B5_2, (DictionaryEntryU5BU5D_t3064*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t2155 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_0051:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2165 * L_17 = (Transform_1_t2165 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2165 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, Transform_1_t2165 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t2156 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t2165 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14160_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161  L_0 = {0};
		(( void (*) (Enumerator_t2161 *, Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2161  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14162_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161  L_0 = {0};
		(( void (*) (Enumerator_t2161 *, Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t2161  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14164_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t2166 * L_0 = (ShimEnumerator_t2166 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t2166 *, Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14166_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t1446_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" Object_t * Dictionary_2_get_Item_m14168_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		KeyNotFoundException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3094);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_009b;
	}

IL_0048:
	{
		LinkU5BU5D_t2047* L_9 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t38* L_14 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t38* L_19 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_21));
	}

IL_0089:
	{
		LinkU5BU5D_t2047* L_22 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_1 = (int32_t)L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		KeyNotFoundException_t1446 * L_26 = (KeyNotFoundException_t1446 *)il2cpp_codegen_object_new (KeyNotFoundException_t1446_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m8862(L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_26);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" void Dictionary_2_set_Item_m14170_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t195* L_6 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}

IL_004e:
	{
		LinkU5BU5D_t2047* L_11 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t38* L_16 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		goto IL_00a2;
	}

IL_0087:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2047* L_22 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}

IL_00a2:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_4 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_4;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00de;
		}
	}
	{
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t195* L_32 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00de:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_4 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_4;
		V_2 = (int32_t)L_37;
		goto IL_011c;
	}

IL_0105:
	{
		LinkU5BU5D_t2047* L_38 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_011c:
	{
		LinkU5BU5D_t2047* L_41 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		Int32U5BU5D_t195* L_43 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = L_44;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_41, L_42))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_43, L_45))-(int32_t)1));
		Int32U5BU5D_t195* L_46 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_46, L_47)) = (int32_t)((int32_t)((int32_t)L_48+(int32_t)1));
		LinkU5BU5D_t2047* L_49 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = V_0;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_49, L_50))->___HashCode_0 = L_51;
		ObjectU5BU5D_t38* L_52 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		Object_t * L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, L_53)) = (Object_t *)L_54;
		goto IL_01b5;
	}

IL_0166:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_01b5;
		}
	}
	{
		LinkU5BU5D_t2047* L_56 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_57 = V_3;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_57);
		LinkU5BU5D_t2047* L_58 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_59 = V_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		int32_t L_60 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_58, L_59))->___Next_1);
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_56, L_57))->___Next_1 = L_60;
		LinkU5BU5D_t2047* L_61 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_62 = V_2;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, L_62);
		Int32U5BU5D_t195* L_63 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		int32_t L_65 = L_64;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_61, L_62))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_63, L_65))-(int32_t)1));
		Int32U5BU5D_t195* L_66 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_66, L_67)) = (int32_t)((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_01b5:
	{
		ObjectU5BU5D_t38* L_69 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_70 = V_2;
		Object_t * L_71 = ___value;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_69, L_70)) = (Object_t *)L_71;
		int32_t L_72 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_72+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1473;
extern "C" void Dictionary_2_Init_m14172_gshared (Dictionary_2_t2156 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		_stringLiteral1473 = il2cpp_codegen_string_literal_from_index(1473);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t2156 * G_B4_0 = {0};
	Dictionary_2_t2156 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t2156 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t928 * L_1 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_1, (String_t*)_stringLiteral1473, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t2156 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t2156 *)(__this));
			goto IL_0021;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t2156 *)(G_B3_0));
		goto IL_0026;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		EqualityComparer_1_t2029 * L_5 = (( EqualityComparer_1_t2029 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t2156 *)(G_B4_0));
	}

IL_0026:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_0035:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2156 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t195_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2047_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m14174_gshared (Dictionary_2_t2156 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		LinkU5BU5D_t2047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3095);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t195*)SZArrayNew(Int32U5BU5D_t195_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2047*)SZArrayNew(LinkU5BU5D_t2047_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t38*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ObjectU5BU5D_t38*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t195* L_4 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_0074;
		}
	}
	{
		Int32U5BU5D_t195* L_6 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral439;
extern Il2CppCodeGenString* _stringLiteral871;
extern Il2CppCodeGenString* _stringLiteral2932;
extern Il2CppCodeGenString* _stringLiteral2933;
extern "C" void Dictionary_2_CopyToCheck_m14176_gshared (Dictionary_2_t2156 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(528);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral439 = il2cpp_codegen_string_literal_from_index(439);
		_stringLiteral871 = il2cpp_codegen_string_literal_from_index(871);
		_stringLiteral2932 = il2cpp_codegen_string_literal_from_index(2932);
		_stringLiteral2933 = il2cpp_codegen_string_literal_from_index(2933);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral439, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t928 * L_3 = (ArgumentOutOfRangeException_t928 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t928_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6440(L_3, (String_t*)_stringLiteral871, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m7446((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t626 * L_7 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_7, (String_t*)_stringLiteral2932, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m7446((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t2156 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t2156 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}
	{
		ArgumentException_t626 * L_12 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_12, (String_t*)_stringLiteral2933, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2157  Dictionary_2_make_pair_m14178_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t2157  L_2 = {0};
		(( void (*) (KeyValuePair_2_t2157 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14180_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m14182_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14184_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2U5BU5D_t2551* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t2551* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t2156 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t2551* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t2165 * L_5 = (Transform_1_t2165 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t2165 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, KeyValuePair_2U5BU5D_t2551*, int32_t, Transform_1_t2165 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)((Dictionary_2_t2156 *)__this, (KeyValuePair_2U5BU5D_t2551*)L_2, (int32_t)L_3, (Transform_1_t2165 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t195_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2047_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m14186_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32U5BU5D_t195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		LinkU5BU5D_t2047_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3095);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t195* V_1 = {0};
	LinkU5BU5D_t2047* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t38* V_7 = {0};
	ObjectU5BU5D_t38* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t24_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m9094(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t195*)((Int32U5BU5D_t195*)SZArrayNew(Int32U5BU5D_t195_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t2047*)((LinkU5BU5D_t2047*)SZArrayNew(LinkU5BU5D_t2047_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00b1;
	}

IL_0027:
	{
		Int32U5BU5D_t195* L_4 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a5;
	}

IL_0038:
	{
		LinkU5BU5D_t2047* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t38* L_10 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2047* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t195* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t195* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2047* L_26 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a5:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00b1:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t195* L_32 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t195* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2047* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t38*)((ObjectU5BU5D_t38*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = (ObjectU5BU5D_t38*)((ObjectU5BU5D_t38*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t38* L_37 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		ObjectU5BU5D_t38* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m378(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ObjectU5BU5D_t38* L_40 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		ObjectU5BU5D_t38* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m378(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t38* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t38* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern Il2CppCodeGenString* _stringLiteral2934;
extern "C" void Dictionary_2_Add_m14188_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		_stringLiteral2934 = il2cpp_codegen_string_literal_from_index(2934);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t195* L_6 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		goto IL_009b;
	}

IL_004a:
	{
		LinkU5BU5D_t2047* L_10 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t38* L_15 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t626 * L_20 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_20, (String_t*)_stringLiteral2934, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0089:
	{
		LinkU5BU5D_t2047* L_21 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_2 = (int32_t)L_23;
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_25 = (int32_t)(__this->___count_10);
		int32_t L_26 = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		V_3 = (int32_t)L_26;
		__this->___count_10 = L_26;
		int32_t L_27 = V_3;
		int32_t L_28 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_00d5;
		}
	}
	{
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_29 = V_0;
		Int32U5BU5D_t195* L_30 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_30);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))));
	}

IL_00d5:
	{
		int32_t L_31 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_31;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_34 = (int32_t)L_33;
		V_3 = (int32_t)L_34;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		int32_t L_35 = V_3;
		V_2 = (int32_t)L_35;
		goto IL_0111;
	}

IL_00fa:
	{
		LinkU5BU5D_t2047* L_36 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_36, L_37))->___Next_1);
		__this->___emptySlot_9 = L_38;
	}

IL_0111:
	{
		LinkU5BU5D_t2047* L_39 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = V_0;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_39, L_40))->___HashCode_0 = L_41;
		LinkU5BU5D_t2047* L_42 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t195* L_44 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t195* L_47 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		ObjectU5BU5D_t38* L_50 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_51 = V_2;
		Object_t * L_52 = ___key;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)) = (Object_t *)L_52;
		ObjectU5BU5D_t38* L_53 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___value;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m14190_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t195* L_0 = (Int32U5BU5D_t195*)(__this->___table_4);
		Int32U5BU5D_t195* L_1 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t38* L_2 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		ObjectU5BU5D_t38* L_3 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t38* L_4 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		ObjectU5BU5D_t38* L_5 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t2047* L_6 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		LinkU5BU5D_t2047* L_7 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m5556(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" bool Dictionary_2_ContainsKey_m14192_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_0090;
	}

IL_0048:
	{
		LinkU5BU5D_t2047* L_9 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007e;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t38* L_14 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		return 1;
	}

IL_007e:
	{
		LinkU5BU5D_t2047* L_19 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_19, L_20))->___Next_1);
		V_1 = (int32_t)L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14194_gshared (Dictionary_2_t2156 * __this, Object_t * ___value, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2029 * L_0 = (( EqualityComparer_1_t2029 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0054;
	}

IL_000d:
	{
		Int32U5BU5D_t195* L_1 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0049;
	}

IL_001d:
	{
		Object_t* L_4 = V_0;
		ObjectU5BU5D_t38* L_5 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), (Object_t*)L_4, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), (Object_t *)L_8);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		return 1;
	}

IL_0037:
	{
		LinkU5BU5D_t2047* L_10 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t195* L_16 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral880;
extern Il2CppCodeGenString* _stringLiteral882;
extern Il2CppCodeGenString* _stringLiteral884;
extern Il2CppCodeGenString* _stringLiteral1507;
extern Il2CppCodeGenString* _stringLiteral2935;
extern "C" void Dictionary_2_GetObjectData_m14196_gshared (Dictionary_2_t2156 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral880 = il2cpp_codegen_string_literal_from_index(880);
		_stringLiteral882 = il2cpp_codegen_string_literal_from_index(882);
		_stringLiteral884 = il2cpp_codegen_string_literal_from_index(884);
		_stringLiteral1507 = il2cpp_codegen_string_literal_from_index(1507);
		_stringLiteral2935 = il2cpp_codegen_string_literal_from_index(2935);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t2551* V_0 = {0};
	{
		SerializationInfo_t900 * L_0 = ___info;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral880, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		SerializationInfo_t900 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t900 *)L_2);
		SerializationInfo_AddValue_m7453((SerializationInfo_t900 *)L_2, (String_t*)_stringLiteral882, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t900 *)L_4);
		SerializationInfo_AddValue_m6487((SerializationInfo_t900 *)L_4, (String_t*)_stringLiteral884, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t2551*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t2551*)((KeyValuePair_2U5BU5D_t2551*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49), L_7));
		KeyValuePair_2U5BU5D_t2551* L_8 = V_0;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, KeyValuePair_2U5BU5D_t2551*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t2156 *)__this, (KeyValuePair_2U5BU5D_t2551*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_0055:
	{
		SerializationInfo_t900 * L_9 = ___info;
		Int32U5BU5D_t195* L_10 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t900 *)L_9);
		SerializationInfo_AddValue_m7453((SerializationInfo_t900 *)L_9, (String_t*)_stringLiteral1507, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t900 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t2551* L_12 = V_0;
		NullCheck((SerializationInfo_t900 *)L_11);
		SerializationInfo_AddValue_m6487((SerializationInfo_t900 *)L_11, (String_t*)_stringLiteral2935, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral882;
extern Il2CppCodeGenString* _stringLiteral884;
extern Il2CppCodeGenString* _stringLiteral1507;
extern Il2CppCodeGenString* _stringLiteral2935;
extern "C" void Dictionary_2_OnDeserialization_m14198_gshared (Dictionary_2_t2156 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral882 = il2cpp_codegen_string_literal_from_index(882);
		_stringLiteral884 = il2cpp_codegen_string_literal_from_index(884);
		_stringLiteral1507 = il2cpp_codegen_string_literal_from_index(1507);
		_stringLiteral2935 = il2cpp_codegen_string_literal_from_index(2935);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t2551* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t900 * L_0 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		SerializationInfo_t900 * L_1 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t900 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m7461((SerializationInfo_t900 *)L_1, (String_t*)_stringLiteral882, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t900 * L_3 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t900 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m7454((SerializationInfo_t900 *)L_3, (String_t*)_stringLiteral884, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t900 * L_6 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t900 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m7461((SerializationInfo_t900 *)L_6, (String_t*)_stringLiteral1507, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t900 * L_8 = (SerializationInfo_t900 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t900 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m7454((SerializationInfo_t900 *)L_8, (String_t*)_stringLiteral2935, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t2551*)((KeyValuePair_2U5BU5D_t2551*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0083;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_0083:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t2156 *)__this);
		(( void (*) (Dictionary_2_t2156 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)((Dictionary_2_t2156 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t2551* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00c9;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00c0;
	}

IL_009e:
	{
		KeyValuePair_2U5BU5D_t2551* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2157 *)((KeyValuePair_2_t2157 *)(KeyValuePair_2_t2157 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t2551* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2157 *)((KeyValuePair_2_t2157 *)(KeyValuePair_2_t2157 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t2156 *)__this);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, (Dictionary_2_t2156 *)__this, (Object_t *)L_16, (Object_t *)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t2551* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_009e;
		}
	}

IL_00c9:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t900 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" bool Dictionary_2_Remove_m14200_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		int32_t L_5 = V_0;
		Int32U5BU5D_t195* L_6 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_6);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))));
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9))-(int32_t)1));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		return 0;
	}

IL_004e:
	{
		V_3 = (int32_t)(-1);
	}

IL_0050:
	{
		LinkU5BU5D_t2047* L_11 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0089;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t38* L_16 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00a4;
	}

IL_0089:
	{
		int32_t L_21 = V_2;
		V_3 = (int32_t)L_21;
		LinkU5BU5D_t2047* L_22 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0050;
		}
	}

IL_00a4:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		return 0;
	}

IL_00ad:
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_27-(int32_t)1));
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		Int32U5BU5D_t195* L_29 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_30 = V_1;
		LinkU5BU5D_t2047* L_31 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_32 = V_2;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_31, L_32))->___Next_1);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, L_30)) = (int32_t)((int32_t)((int32_t)L_33+(int32_t)1));
		goto IL_0104;
	}

IL_00e2:
	{
		LinkU5BU5D_t2047* L_34 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, L_35);
		LinkU5BU5D_t2047* L_36 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_37 = V_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_36, L_37))->___Next_1);
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_34, L_35))->___Next_1 = L_38;
	}

IL_0104:
	{
		LinkU5BU5D_t2047* L_39 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(__this->___emptySlot_9);
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_39, L_40))->___Next_1 = L_41;
		int32_t L_42 = V_2;
		__this->___emptySlot_9 = L_42;
		LinkU5BU5D_t2047* L_43 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_43, L_44))->___HashCode_0 = 0;
		ObjectU5BU5D_t38* L_45 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_46 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_47 = V_4;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, L_46)) = (Object_t *)L_47;
		ObjectU5BU5D_t38* L_48 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_49 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_50 = V_5;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, L_49)) = (Object_t *)L_50;
		int32_t L_51 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_51+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern "C" bool Dictionary_2_TryGetValue_m14202_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t* L_2 = (Object_t*)(__this->___hcp_12);
		Object_t * L_3 = ___key;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_2, (Object_t *)L_3);
		V_0 = (int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t195* L_5 = (Int32U5BU5D_t195*)(__this->___table_4);
		int32_t L_6 = V_0;
		Int32U5BU5D_t195* L_7 = (Int32U5BU5D_t195*)(__this->___table_4);
		NullCheck(L_7);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))));
		int32_t L_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_8))-(int32_t)1));
		goto IL_00a2;
	}

IL_0048:
	{
		LinkU5BU5D_t2047* L_9 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_9, L_10))->___HashCode_0);
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0090;
		}
	}
	{
		Object_t* L_13 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t38* L_14 = (ObjectU5BU5D_t38*)(__this->___keySlots_6);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		Object_t * L_17 = ___key;
		NullCheck((Object_t*)L_13);
		bool L_18 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_13, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)), (Object_t *)L_17);
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		Object_t ** L_19 = ___value;
		ObjectU5BU5D_t38* L_20 = (ObjectU5BU5D_t38*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		*L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22));
		return 1;
	}

IL_0090:
	{
		LinkU5BU5D_t2047* L_23 = (LinkU5BU5D_t2047*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_00a2:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		Object_t ** L_27 = ___value;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_2));
		Object_t * L_28 = V_2;
		*L_27 = L_28;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2159 * Dictionary_2_get_Keys_m14204_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t2159 * L_0 = (KeyCollection_t2159 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t2159 *, Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2163 * Dictionary_2_get_Values_m14206_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t2163 * L_0 = (ValueCollection_t2163 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t2163 *, Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, (Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral868;
extern Il2CppCodeGenString* _stringLiteral2936;
extern "C" Object_t * Dictionary_2_ToTKey_m14208_gshared (Dictionary_2_t2156 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral868 = il2cpp_codegen_string_literal_from_index(868);
		_stringLiteral2936 = il2cpp_codegen_string_literal_from_index(2936);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m421(NULL /*static, unused*/, (String_t*)_stringLiteral2936, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t626 * L_6 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5557(L_6, (String_t*)L_5, (String_t*)_stringLiteral868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0040:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2936;
extern Il2CppCodeGenString* _stringLiteral19;
extern "C" Object_t * Dictionary_2_ToTValue_m14210_gshared (Dictionary_2_t2156 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral2936 = il2cpp_codegen_string_literal_from_index(2936);
		_stringLiteral19 = il2cpp_codegen_string_literal_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_0));
		Object_t * L_3 = V_0;
		return L_3;
	}

IL_0024:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m421(NULL /*static, unused*/, (String_t*)_stringLiteral2936, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t626 * L_8 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m5557(L_8, (String_t*)L_7, (String_t*)_stringLiteral19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0053:
	{
		Object_t * L_9 = ___value;
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14212_gshared (Dictionary_2_t2156 * __this, KeyValuePair_2_t2157  ___pair, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2157 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t2156 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t2156 *)__this, (Object_t *)L_0, (Object_t **)(&V_0));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47));
		EqualityComparer_1_t2029 * L_2 = (( EqualityComparer_1_t2029 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2157 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck((EqualityComparer_1_t2029 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t2029 *)L_2, (Object_t *)L_3, (Object_t *)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2161  Dictionary_2_GetEnumerator_m14213_gshared (Dictionary_2_t2156 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161  L_0 = {0};
		(( void (*) (Enumerator_t2161 *, Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t2156 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t65  Dictionary_2_U3CCopyToU3Em__0_m14215_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		DictionaryEntry_t65  L_2 = {0};
		DictionaryEntry__ctor_m7444(&L_2, (Object_t *)L_0, (Object_t *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t2157  Array_InternalArray__get_Item_TisKeyValuePair_2_t2157_m21653_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t2157_m21653(__this, p0, method) (( KeyValuePair_2_t2157  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t2157_m21653_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14216_gshared (InternalEnumerator_1_t2158 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14217_gshared (InternalEnumerator_1_t2158 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2157  L_0 = (( KeyValuePair_2_t2157  (*) (InternalEnumerator_1_t2158 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2158 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2157  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14218_gshared (InternalEnumerator_1_t2158 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14219_gshared (InternalEnumerator_1_t2158 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m7446((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2926;
extern Il2CppCodeGenString* _stringLiteral2927;
extern "C" KeyValuePair_2_t2157  InternalEnumerator_1_get_Current_m14220_gshared (InternalEnumerator_1_t2158 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2926 = il2cpp_codegen_string_literal_from_index(2926);
		_stringLiteral2927 = il2cpp_codegen_string_literal_from_index(2927);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_1, (String_t*)_stringLiteral2926, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1154 * L_3 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_3, (String_t*)_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m7446((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t2157  L_8 = (( KeyValuePair_2_t2157  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m14221_gshared (KeyValuePair_2_t2157 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t2157 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t2157 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t2157 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t2157 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m14222_gshared (KeyValuePair_2_t2157 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m14223_gshared (KeyValuePair_2_t2157 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m14224_gshared (KeyValuePair_2_t2157 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m14225_gshared (KeyValuePair_2_t2157 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringU5BU5D_t284_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral453;
extern Il2CppCodeGenString* _stringLiteral126;
extern Il2CppCodeGenString* _stringLiteral454;
extern "C" String_t* KeyValuePair_2_ToString_m14226_gshared (KeyValuePair_2_t2157 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		_stringLiteral454 = il2cpp_codegen_string_literal_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t284* G_B2_1 = {0};
	StringU5BU5D_t284* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t284* G_B1_1 = {0};
	StringU5BU5D_t284* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t284* G_B3_2 = {0};
	StringU5BU5D_t284* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t284* G_B5_1 = {0};
	StringU5BU5D_t284* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t284* G_B4_1 = {0};
	StringU5BU5D_t284* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t284* G_B6_2 = {0};
	StringU5BU5D_t284* G_B6_3 = {0};
	{
		StringU5BU5D_t284* L_0 = (StringU5BU5D_t284*)((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral453);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral453;
		StringU5BU5D_t284* L_1 = (StringU5BU5D_t284*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2157 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2157 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_3;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t284* L_6 = (StringU5BU5D_t284*)G_B3_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, _stringLiteral126);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 2)) = (String_t*)_stringLiteral126;
		StringU5BU5D_t284* L_7 = (StringU5BU5D_t284*)L_6;
		Object_t * L_8 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2157 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2157 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Object_t *)L_9;
		NullCheck((Object_t *)(*(&V_1)));
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t284* L_12 = (StringU5BU5D_t284*)G_B6_3;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, _stringLiteral454);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 4)) = (String_t*)_stringLiteral454;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m5393(NULL /*static, unused*/, (StringU5BU5D_t284*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7MethodDeclarations.h"
struct Dictionary_2_t2156;
struct Array_t;
struct Transform_1_t2162;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21664_gshared (Dictionary_2_t2156 * __this, Array_t * p0, int32_t p1, Transform_1_t2162 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21664(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, Transform_1_t2162 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m21664_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t2156;
struct ObjectU5BU5D_t38;
struct Transform_1_t2162;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21663_gshared (Dictionary_2_t2156 * __this, ObjectU5BU5D_t38* p0, int32_t p1, Transform_1_t2162 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21663(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t2156 *, ObjectU5BU5D_t38*, int32_t, Transform_1_t2162 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m21663_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1502;
extern "C" void KeyCollection__ctor_m14227_gshared (KeyCollection_t2159 * __this, Dictionary_2_t2156 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral1502 = il2cpp_codegen_string_literal_from_index(1502);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2156 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral1502, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Dictionary_2_t2156 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m14228_gshared (KeyCollection_t2159 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m14229_gshared (KeyCollection_t2159 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m14230_gshared (KeyCollection_t2159 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2156 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, (Dictionary_2_t2156 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m14231_gshared (KeyCollection_t2159 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m14232_gshared (KeyCollection_t2159 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2159 *)__this);
		Enumerator_t2160  L_0 = (( Enumerator_t2160  (*) (KeyCollection_t2159 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2159 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2160  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m14233_gshared (KeyCollection_t2159 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t38* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t38*)((ObjectU5BU5D_t38*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t38* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t38* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t2159 *)__this);
		(( void (*) (KeyCollection_t2159 *, ObjectU5BU5D_t38*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyCollection_t2159 *)__this, (ObjectU5BU5D_t38*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2156 * L_4 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2156 *)L_4);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2156 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2156 * L_7 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2162 * L_11 = (Transform_1_t2162 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2162 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2156 *)L_7);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, Transform_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2156 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2162 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m14234_gshared (KeyCollection_t2159 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t2159 *)__this);
		Enumerator_t2160  L_0 = (( Enumerator_t2160  (*) (KeyCollection_t2159 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t2159 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2160  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m14235_gshared (KeyCollection_t2159 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m14236_gshared (KeyCollection_t2159 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m14237_gshared (KeyCollection_t2159 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1326_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m14238_gshared (KeyCollection_t2159 * __this, ObjectU5BU5D_t38* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		ObjectU5BU5D_t38* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2156 *)L_0);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2156 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2156 * L_3 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		ObjectU5BU5D_t38* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2162 * L_7 = (Transform_1_t2162 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2162 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2156 *)L_3);
		(( void (*) (Dictionary_2_t2156 *, ObjectU5BU5D_t38*, int32_t, Transform_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2156 *)L_3, (ObjectU5BU5D_t38*)L_4, (int32_t)L_5, (Transform_1_t2162 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2160  KeyCollection_GetEnumerator_m14239_gshared (KeyCollection_t2159 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		Enumerator_t2160  L_1 = {0};
		(( void (*) (Enumerator_t2160 *, Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2156 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m14240_gshared (KeyCollection_t2159 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2156 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t2156 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14241_gshared (Enumerator_t2160 * __this, Dictionary_2_t2156 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = ___host;
		NullCheck((Dictionary_2_t2156 *)L_0);
		Enumerator_t2161  L_1 = (( Enumerator_t2161  (*) (Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2156 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14242_gshared (Enumerator_t2160 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14243_gshared (Enumerator_t2160 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14244_gshared (Enumerator_t2160 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m14245_gshared (Enumerator_t2160 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2157 * L_1 = (KeyValuePair_2_t2157 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2157 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14246_gshared (Enumerator_t2161 * __this, Dictionary_2_t2156 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t2156 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14247_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2157  L_0 = (KeyValuePair_2_t2157 )(__this->___current_3);
		KeyValuePair_2_t2157  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t65  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14248_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2157 * L_0 = (KeyValuePair_2_t2157 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2157 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		KeyValuePair_2_t2157 * L_2 = (KeyValuePair_2_t2157 *)&(__this->___current_3);
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2157 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		DictionaryEntry_t65  L_4 = {0};
		DictionaryEntry__ctor_m7444(&L_4, (Object_t *)L_1, (Object_t *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14249_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14250_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14251_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t2156 * L_4 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2047* L_5 = (LinkU5BU5D_t2047*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1445 *)(Link_t1445 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_007b;
		}
	}
	{
		Dictionary_2_t2156 * L_8 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t38* L_9 = (ObjectU5BU5D_t38*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t2156 * L_12 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t38* L_13 = (ObjectU5BU5D_t38*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2157  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2157 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_007b:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t2156 * L_18 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2157  Enumerator_get_Current_m14252_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2157  L_0 = (KeyValuePair_2_t2157 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14253_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2157 * L_0 = (KeyValuePair_2_t2157 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2157 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m14254_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2157 * L_0 = (KeyValuePair_2_t2157 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2157 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern TypeInfo* ObjectDisposedException_t989_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2938;
extern "C" void Enumerator_VerifyState_m14255_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(616);
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2938 = il2cpp_codegen_string_literal_from_index(2938);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t989 * L_1 = (ObjectDisposedException_t989 *)il2cpp_codegen_object_new (ObjectDisposedException_t989_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m5558(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Dictionary_2_t2156 * L_2 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1154 * L_5 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_5, (String_t*)_stringLiteral2938, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2939;
extern "C" void Enumerator_VerifyCurrent_m14256_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2939 = il2cpp_codegen_string_literal_from_index(2939);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2161 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_1, (String_t*)_stringLiteral2939, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14257_gshared (Enumerator_t2161 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t2156 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14258_gshared (Transform_1_t2162 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m14259_gshared (Transform_1_t2162 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14259((Transform_1_t2162 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14260_gshared (Transform_1_t2162 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m14261_gshared (Transform_1_t2162 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_11MethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1502;
extern "C" void ValueCollection__ctor_m14262_gshared (ValueCollection_t2163 * __this, Dictionary_2_t2156 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral1502 = il2cpp_codegen_string_literal_from_index(1502);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2156 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, (String_t*)_stringLiteral1502, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		Dictionary_2_t2156 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14263_gshared (ValueCollection_t2163 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14264_gshared (ValueCollection_t2163 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14265_gshared (ValueCollection_t2163 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t2156 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t2156 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2156 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2937;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14266_gshared (ValueCollection_t2163 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2937 = il2cpp_codegen_string_literal_from_index(2937);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, (String_t*)_stringLiteral2937, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14267_gshared (ValueCollection_t2163 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2163 *)__this);
		Enumerator_t2164  L_0 = (( Enumerator_t2164  (*) (ValueCollection_t2163 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2163 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2164  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m14268_gshared (ValueCollection_t2163 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t38* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t38*)((ObjectU5BU5D_t38*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t38* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t38* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2163 *)__this);
		(( void (*) (ValueCollection_t2163 *, ObjectU5BU5D_t38*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((ValueCollection_t2163 *)__this, (ObjectU5BU5D_t38*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}

IL_0016:
	{
		Dictionary_2_t2156 * L_4 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t2156 *)L_4);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2156 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2156 * L_7 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2162 * L_11 = (Transform_1_t2162 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2162 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2156 *)L_7);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, Transform_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t2156 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2162 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14269_gshared (ValueCollection_t2163 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2163 *)__this);
		Enumerator_t2164  L_0 = (( Enumerator_t2164  (*) (ValueCollection_t2163 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2163 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2164  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14270_gshared (ValueCollection_t2163 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14271_gshared (ValueCollection_t2163 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m14272_gshared (ValueCollection_t2163 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t1326_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m14273_gshared (ValueCollection_t2163 * __this, ObjectU5BU5D_t38* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		ObjectU5BU5D_t38* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t2156 *)L_0);
		(( void (*) (Dictionary_2_t2156 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t2156 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t2156 * L_3 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		ObjectU5BU5D_t38* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2162 * L_7 = (Transform_1_t2162 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2162 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t2156 *)L_3);
		(( void (*) (Dictionary_2_t2156 *, ObjectU5BU5D_t38*, int32_t, Transform_1_t2162 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t2156 *)L_3, (ObjectU5BU5D_t38*)L_4, (int32_t)L_5, (Transform_1_t2162 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2164  ValueCollection_GetEnumerator_m14274_gshared (ValueCollection_t2163 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		Enumerator_t2164  L_1 = {0};
		(( void (*) (Enumerator_t2164 *, Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t2156 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m14275_gshared (ValueCollection_t2163 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = (Dictionary_2_t2156 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t2156 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count() */, (Dictionary_2_t2156 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14276_gshared (Enumerator_t2164 * __this, Dictionary_2_t2156 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t2156 * L_0 = ___host;
		NullCheck((Dictionary_2_t2156 *)L_0);
		Enumerator_t2161  L_1 = (( Enumerator_t2161  (*) (Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2156 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14277_gshared (Enumerator_t2164 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m14278_gshared (Enumerator_t2164 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14279_gshared (Enumerator_t2164 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m14280_gshared (Enumerator_t2164 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2157 * L_1 = (KeyValuePair_2_t2157 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2157 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14281_gshared (Transform_1_t2155 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t65  Transform_1_Invoke_m14282_gshared (Transform_1_t2155 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14282((Transform_1_t2155 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t65  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t65  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t65  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14283_gshared (Transform_1_t2155 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t65  Transform_1_EndInvoke_m14284_gshared (Transform_1_t2155 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t65 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m14285_gshared (Transform_1_t2165 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2157  Transform_1_Invoke_m14286_gshared (Transform_1_t2165 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m14286((Transform_1_t2165 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2157  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2157  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2157  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m14287_gshared (Transform_1_t2165 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2157  Transform_1_EndInvoke_m14288_gshared (Transform_1_t2165 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2157 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14289_gshared (ShimEnumerator_t2166 * __this, Dictionary_2_t2156 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t2156 * L_0 = ___host;
		NullCheck((Dictionary_2_t2156 *)L_0);
		Enumerator_t2161  L_1 = (( Enumerator_t2161  (*) (Dictionary_2_t2156 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t2156 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14290_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t65  ShimEnumerator_get_Entry_m14291_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(778);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2161  L_0 = (Enumerator_t2161 )(__this->___host_enumerator_0);
		Enumerator_t2161  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t65  L_3 = (DictionaryEntry_t65 )InterfaceFuncInvoker0< DictionaryEntry_t65  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14292_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2157  V_0 = {0};
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2157  L_1 = (( KeyValuePair_2_t2157  (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2157 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2157 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14293_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2157  V_0 = {0};
	{
		Enumerator_t2161 * L_0 = (Enumerator_t2161 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2157  L_1 = (( KeyValuePair_2_t2157  (*) (Enumerator_t2161 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2161 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2157 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t2157 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2157 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern TypeInfo* DictionaryEntry_t65_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m14294_gshared (ShimEnumerator_t2166 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2166 *)__this);
		DictionaryEntry_t65  L_0 = (DictionaryEntry_t65 )VirtFuncInvoker0< DictionaryEntry_t65  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry() */, (ShimEnumerator_t2166 *)__this);
		DictionaryEntry_t65  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t65_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// BetterList`1<UnityEngine.Color>
#include "AssemblyU2DCSharp_BetterList_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Color>
#include "AssemblyU2DCSharp_BetterList_1_gen_0MethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_ArrayTypes.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_0.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1.h"
// BetterList`1/CompareFunc<UnityEngine.Color>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_5.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_0MethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_1MethodDeclarations.h"
// BetterList`1/CompareFunc<UnityEngine.Color>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_5MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Color>::.ctor()
extern "C" void BetterList_1__ctor_m2126_gshared (BetterList_1_t180 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Color>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m14341_gshared (BetterList_1_t180 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t2169 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t2169 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2169 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t2169 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2169 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t2169 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t2169 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Color>::get_Item(System.Int32)
extern "C" Color_t9  BetterList_1_get_Item_m2131_gshared (BetterList_1_t180 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Color>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m14342_gshared (BetterList_1_t180 * __this, int32_t ___i, Color_t9  ___value, const MethodInfo* method)
{
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Color_t9  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_0, L_1)) = (Color_t9 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color>::AllocateMore()
extern TypeInfo* Mathf_t42_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m14343_gshared (BetterList_1_t180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	ColorU5BU5D_t61* V_0 = {0};
	ColorU5BU5D_t61* G_B3_0 = {0};
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		ColorU5BU5D_t61* L_1 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t42_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m2125(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((ColorU5BU5D_t61*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((ColorU5BU5D_t61*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (ColorU5BU5D_t61*)G_B3_0;
		ColorU5BU5D_t61* L_3 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		ColorU5BU5D_t61* L_5 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		ColorU5BU5D_t61* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		ColorU5BU5D_t61* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color>::Trim()
extern "C" void BetterList_1_Trim_m14344_gshared (BetterList_1_t180 * __this, const MethodInfo* method)
{
	ColorU5BU5D_t61* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		ColorU5BU5D_t61* L_2 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (ColorU5BU5D_t61*)((ColorU5BU5D_t61*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		ColorU5BU5D_t61* L_4 = V_0;
		int32_t L_5 = V_1;
		ColorU5BU5D_t61* L_6 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_4, L_5)) = (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		ColorU5BU5D_t61* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (ColorU5BU5D_t61*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color>::Clear()
extern "C" void BetterList_1_Clear_m2150_gshared (BetterList_1_t180 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color>::Release()
extern "C" void BetterList_1_Release_m14345_gshared (BetterList_1_t180 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (ColorU5BU5D_t61*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color>::Add(T)
extern "C" void BetterList_1_Add_m2133_gshared (BetterList_1_t180 * __this, Color_t9  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		ColorU5BU5D_t61* L_2 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t180 *)__this);
		(( void (*) (BetterList_1_t180 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t180 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		ColorU5BU5D_t61* L_3 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Color_t9  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_3, L_6)) = (Color_t9 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m14346_gshared (BetterList_1_t180 * __this, int32_t ___index, Color_t9  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		ColorU5BU5D_t61* L_2 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t180 *)__this);
		(( void (*) (BetterList_1_t180 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t180 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		ColorU5BU5D_t61* L_6 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		ColorU5BU5D_t61* L_8 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_6, L_7)) = (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		ColorU5BU5D_t61* L_14 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Color_t9  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_14, L_15)) = (Color_t9 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Color_t9  L_18 = ___item;
		NullCheck((BetterList_1_t180 *)__this);
		(( void (*) (BetterList_1_t180 *, Color_t9 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t180 *)__this, (Color_t9 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Color>::Contains(T)
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
extern "C" bool BetterList_1_Contains_m14347_gshared (BetterList_1_t180 * __this, Color_t9  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		ColorU5BU5D_t61* L_1 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Color_t9  L_3 = ___item;
		Color_t9  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Color_t9 *)((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_1, L_2)));
		bool L_6 = Color_Equals_m3799((Color_t9 *)((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_1, L_2)), (Object_t *)L_5, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Color>::Remove(T)
extern TypeInfo* Color_t9_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m14348_gshared (BetterList_1_t180 * __this, Color_t9  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t2170 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_t9  V_3 = {0};
	Color_t9  V_4 = {0};
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		EqualityComparer_1_t2170 * L_1 = (( EqualityComparer_1_t2170 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t2170 *)L_1;
		V_1 = (int32_t)0;
		goto IL_00a5;
	}

IL_0018:
	{
		EqualityComparer_1_t2170 * L_2 = V_0;
		ColorU5BU5D_t61* L_3 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Color_t9  L_6 = ___item;
		NullCheck((EqualityComparer_1_t2170 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Color_t9 , Color_t9  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::Equals(!0,!0) */, (EqualityComparer_1_t2170 *)L_2, (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_3, L_5)), (Color_t9 )L_6);
		if (!L_7)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		ColorU5BU5D_t61* L_9 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Color_t9_il2cpp_TypeInfo_var, (&V_3));
		Color_t9  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_9, L_10)) = (Color_t9 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		ColorU5BU5D_t61* L_13 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		ColorU5BU5D_t61* L_15 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_13, L_14)) = (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		ColorU5BU5D_t61* L_21 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_22 = (int32_t)(__this->___size_1);
		Initobj (Color_t9_il2cpp_TypeInfo_var, (&V_4));
		Color_t9  L_23 = V_4;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_21, L_22)) = (Color_t9 )L_23;
		return 1;
	}

IL_00a1:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0018;
		}
	}

IL_00b1:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Color>::RemoveAt(System.Int32)
extern TypeInfo* Color_t9_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m2130_gshared (BetterList_1_t180 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Color_t9  V_1 = {0};
	Color_t9  V_2 = {0};
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		ColorU5BU5D_t61* L_4 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Color_t9_il2cpp_TypeInfo_var, (&V_1));
		Color_t9  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_4, L_5)) = (Color_t9 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		ColorU5BU5D_t61* L_8 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		ColorU5BU5D_t61* L_10 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_8, L_9)) = (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}
	{
		ColorU5BU5D_t61* L_16 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_17 = (int32_t)(__this->___size_1);
		Initobj (Color_t9_il2cpp_TypeInfo_var, (&V_2));
		Color_t9  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_16, L_17)) = (Color_t9 )L_18;
	}

IL_0085:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Color>::Pop()
extern TypeInfo* Color_t9_il2cpp_TypeInfo_var;
extern "C" Color_t9  BetterList_1_Pop_m14349_gshared (BetterList_1_t180 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	Color_t9  V_0 = {0};
	int32_t V_1 = 0;
	Color_t9  V_2 = {0};
	Color_t9  V_3 = {0};
	{
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		ColorU5BU5D_t61* L_2 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_2, L_6));
		ColorU5BU5D_t61* L_7 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Color_t9_il2cpp_TypeInfo_var, (&V_2));
		Color_t9  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_7, L_8)) = (Color_t9 )L_9;
		Color_t9  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Color_t9_il2cpp_TypeInfo_var, (&V_3));
		Color_t9  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Color>::ToArray()
extern "C" ColorU5BU5D_t61* BetterList_1_ToArray_m14350_gshared (BetterList_1_t180 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t180 *)__this);
		(( void (*) (BetterList_1_t180 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((BetterList_1_t180 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		ColorU5BU5D_t61* L_0 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Color>::Sort(BetterList`1/CompareFunc<T>)
extern "C" void BetterList_1_Sort_m14351_gshared (BetterList_1_t180 * __this, CompareFunc_t2172 * ___comparer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Color_t9  V_4 = {0};
	int32_t G_B8_0 = 0;
	{
		V_0 = (int32_t)0;
		int32_t L_0 = (int32_t)(__this->___size_1);
		V_1 = (int32_t)((int32_t)((int32_t)L_0-(int32_t)1));
		V_2 = (bool)1;
		goto IL_00a1;
	}

IL_0012:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = (int32_t)L_1;
		goto IL_009a;
	}

IL_001b:
	{
		CompareFunc_t2172 * L_2 = ___comparer;
		ColorU5BU5D_t61* L_3 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		ColorU5BU5D_t61* L_6 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		NullCheck((CompareFunc_t2172 *)L_2);
		int32_t L_9 = (( int32_t (*) (CompareFunc_t2172 *, Color_t9 , Color_t9 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((CompareFunc_t2172 *)L_2, (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_3, L_5)), (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_6, L_8)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		ColorU5BU5D_t61* L_10 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_4 = (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_10, L_12));
		ColorU5BU5D_t61* L_13 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_14 = V_3;
		ColorU5BU5D_t61* L_15 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_13, L_14)) = (Color_t9 )(*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_15, L_17));
		ColorU5BU5D_t61* L_18 = (ColorU5BU5D_t61*)(__this->___buffer_0);
		int32_t L_19 = V_3;
		Color_t9  L_20 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)));
		*((Color_t9 *)(Color_t9 *)SZArrayLdElema(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)))) = (Color_t9 )L_20;
		V_2 = (bool)1;
		goto IL_0096;
	}

IL_0080:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_22 = V_3;
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0095;
	}

IL_0092:
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_0095:
	{
		V_0 = (int32_t)G_B8_0;
	}

IL_0096:
	{
		int32_t L_24 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_001b;
		}
	}

IL_00a1:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m14352_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2169 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Color_t9  U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m14353_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2169 * __this, const MethodInfo* method)
{
	{
		Color_t9  L_0 = (Color_t9 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m14354_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2169 * __this, const MethodInfo* method)
{
	{
		Color_t9  L_0 = (Color_t9 )(__this->___U24current_2);
		Color_t9  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m14355_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2169 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t180 * L_2 = (BetterList_1_t180 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		ColorU5BU5D_t61* L_3 = (ColorU5BU5D_t61*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t180 * L_4 = (BetterList_1_t180 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		ColorU5BU5D_t61* L_5 = (ColorU5BU5D_t61*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Color_t9 *)(Color_t9 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t180 * L_10 = (BetterList_1_t180 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m14356_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2169 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color>::Reset()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Reset_m14357_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2169 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_1MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::.ctor()
extern "C" void EqualityComparer_1__ctor_m14358_gshared (EqualityComparer_1_t2170 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3154_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14359_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3154_0_0_0_var = il2cpp_codegen_type_from_index(3091);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(GenericEqualityComparer_1_t3154_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t793* L_4 = (TypeU5BU5D_t793*)((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t793* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t793*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m5364(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2170_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2170 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2171 * L_8 = (DefaultComparer_t2171 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2171 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2170_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14360_gshared (EqualityComparer_1_t2170 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2170 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color_t9  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::GetHashCode(T) */, (EqualityComparer_1_t2170 *)__this, (Color_t9 )((*(Color_t9 *)((Color_t9 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14361_gshared (EqualityComparer_1_t2170 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2170 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Color_t9 , Color_t9  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::Equals(T,T) */, (EqualityComparer_1_t2170 *)__this, (Color_t9 )((*(Color_t9 *)((Color_t9 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Color_t9 )((*(Color_t9 *)((Color_t9 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Color>::get_Default()
extern "C" EqualityComparer_1_t2170 * EqualityComparer_1_get_Default_m14362_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2170 * L_0 = ((EqualityComparer_1_t2170_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::.ctor()
extern "C" void DefaultComparer__ctor_m14363_gshared (DefaultComparer_t2171 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2170 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2170 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2170 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14364_gshared (DefaultComparer_t2171 * __this, Color_t9  ___obj, const MethodInfo* method)
{
	{
		Color_t9  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Color_t9 *)(&___obj));
		int32_t L_1 = Color_GetHashCode_m4412((Color_t9 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14365_gshared (DefaultComparer_t2171 * __this, Color_t9  ___x, Color_t9  ___y, const MethodInfo* method)
{
	{
		Color_t9  L_0 = ___x;
		goto IL_0015;
	}
	{
		Color_t9  L_1 = ___y;
		Color_t9  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Color_t9  L_4 = ___y;
		Color_t9  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Color_t9 *)(&___x));
		bool L_7 = Color_Equals_m3799((Color_t9 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/CompareFunc<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14366_gshared (CompareFunc_t2172 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14367_gshared (CompareFunc_t2172 * __this, Color_t9  ___left, Color_t9  ___right, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CompareFunc_Invoke_m14367((CompareFunc_t2172 *)__this->___prev_9,___left, ___right, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Color_t9  ___left, Color_t9  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Color_t9  ___left, Color_t9  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Color_t9_il2cpp_TypeInfo_var;
extern "C" Object_t * CompareFunc_BeginInvoke_m14368_gshared (CompareFunc_t2172 * __this, Color_t9  ___left, Color_t9  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Color_t9_il2cpp_TypeInfo_var, &___left);
	__d_args[1] = Box(Color_t9_il2cpp_TypeInfo_var, &___right);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14369_gshared (CompareFunc_t2172 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// BetterList`1<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_gen_1MethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_1.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
// BetterList`1/CompareFunc<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_6.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_1MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"
// BetterList`1/CompareFunc<UnityEngine.Vector3>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_6MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Vector3>::.ctor()
extern "C" void BetterList_1__ctor_m2278_gshared (BetterList_1_t207 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m14370_gshared (BetterList_1_t207 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t2173 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t2173 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2173 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t2173 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2173 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t2173 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t2173 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t10  BetterList_1_get_Item_m2284_gshared (BetterList_1_t207 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m14371_gshared (BetterList_1_t207 * __this, int32_t ___i, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Vector3_t10  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_0, L_1)) = (Vector3_t10 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::AllocateMore()
extern TypeInfo* Mathf_t42_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m14372_gshared (BetterList_1_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t11* V_0 = {0};
	Vector3U5BU5D_t11* G_B3_0 = {0};
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Vector3U5BU5D_t11* L_1 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t42_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m2125(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((Vector3U5BU5D_t11*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((Vector3U5BU5D_t11*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (Vector3U5BU5D_t11*)G_B3_0;
		Vector3U5BU5D_t11* L_3 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Vector3U5BU5D_t11* L_5 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		Vector3U5BU5D_t11* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		Vector3U5BU5D_t11* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Trim()
extern "C" void BetterList_1_Trim_m14373_gshared (BetterList_1_t207 * __this, const MethodInfo* method)
{
	Vector3U5BU5D_t11* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector3U5BU5D_t11* L_2 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (Vector3U5BU5D_t11*)((Vector3U5BU5D_t11*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		Vector3U5BU5D_t11* L_4 = V_0;
		int32_t L_5 = V_1;
		Vector3U5BU5D_t11* L_6 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_4, L_5)) = (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Vector3U5BU5D_t11* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (Vector3U5BU5D_t11*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Clear()
extern "C" void BetterList_1_Clear_m2281_gshared (BetterList_1_t207 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Release()
extern "C" void BetterList_1_Release_m14374_gshared (BetterList_1_t207 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (Vector3U5BU5D_t11*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Add(T)
extern "C" void BetterList_1_Add_m2147_gshared (BetterList_1_t207 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector3U5BU5D_t11* L_2 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t207 *)__this);
		(( void (*) (BetterList_1_t207 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t207 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		Vector3U5BU5D_t11* L_3 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Vector3_t10  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_3, L_6)) = (Vector3_t10 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m14375_gshared (BetterList_1_t207 * __this, int32_t ___index, Vector3_t10  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector3U5BU5D_t11* L_2 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t207 *)__this);
		(( void (*) (BetterList_1_t207 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t207 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		Vector3U5BU5D_t11* L_6 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		Vector3U5BU5D_t11* L_8 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_6, L_7)) = (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_t11* L_14 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Vector3_t10  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_14, L_15)) = (Vector3_t10 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Vector3_t10  L_18 = ___item;
		NullCheck((BetterList_1_t207 *)__this);
		(( void (*) (BetterList_1_t207 *, Vector3_t10 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t207 *)__this, (Vector3_t10 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector3>::Contains(T)
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
extern "C" bool BetterList_1_Contains_m14376_gshared (BetterList_1_t207 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		Vector3U5BU5D_t11* L_1 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Vector3_t10  L_3 = ___item;
		Vector3_t10  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Vector3_t10 *)((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_1, L_2)));
		bool L_6 = Vector3_Equals_m4405((Vector3_t10 *)((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_1, L_2)), (Object_t *)L_5, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector3>::Remove(T)
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m14377_gshared (BetterList_1_t207 * __this, Vector3_t10  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t2174 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t10  V_3 = {0};
	Vector3_t10  V_4 = {0};
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		EqualityComparer_1_t2174 * L_1 = (( EqualityComparer_1_t2174 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t2174 *)L_1;
		V_1 = (int32_t)0;
		goto IL_00a5;
	}

IL_0018:
	{
		EqualityComparer_1_t2174 * L_2 = V_0;
		Vector3U5BU5D_t11* L_3 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector3_t10  L_6 = ___item;
		NullCheck((EqualityComparer_1_t2174 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Vector3_t10 , Vector3_t10  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(!0,!0) */, (EqualityComparer_1_t2174 *)L_2, (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_3, L_5)), (Vector3_t10 )L_6);
		if (!L_7)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		Vector3U5BU5D_t11* L_9 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Vector3_t10_il2cpp_TypeInfo_var, (&V_3));
		Vector3_t10  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_9, L_10)) = (Vector3_t10 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		Vector3U5BU5D_t11* L_13 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		Vector3U5BU5D_t11* L_15 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_13, L_14)) = (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		Vector3U5BU5D_t11* L_21 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_22 = (int32_t)(__this->___size_1);
		Initobj (Vector3_t10_il2cpp_TypeInfo_var, (&V_4));
		Vector3_t10  L_23 = V_4;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_21, L_22)) = (Vector3_t10 )L_23;
		return 1;
	}

IL_00a1:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0018;
		}
	}

IL_00b1:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m14378_gshared (BetterList_1_t207 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t10  V_1 = {0};
	Vector3_t10  V_2 = {0};
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		Vector3U5BU5D_t11* L_4 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Vector3_t10_il2cpp_TypeInfo_var, (&V_1));
		Vector3_t10  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_4, L_5)) = (Vector3_t10 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		Vector3U5BU5D_t11* L_8 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		Vector3U5BU5D_t11* L_10 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_8, L_9)) = (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}
	{
		Vector3U5BU5D_t11* L_16 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_17 = (int32_t)(__this->___size_1);
		Initobj (Vector3_t10_il2cpp_TypeInfo_var, (&V_2));
		Vector3_t10  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_16, L_17)) = (Vector3_t10 )L_18;
	}

IL_0085:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Vector3>::Pop()
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  BetterList_1_Pop_m14379_gshared (BetterList_1_t207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	int32_t V_1 = 0;
	Vector3_t10  V_2 = {0};
	Vector3_t10  V_3 = {0};
	{
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Vector3U5BU5D_t11* L_2 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_2, L_6));
		Vector3U5BU5D_t11* L_7 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Vector3_t10_il2cpp_TypeInfo_var, (&V_2));
		Vector3_t10  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_7, L_8)) = (Vector3_t10 )L_9;
		Vector3_t10  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Vector3_t10_il2cpp_TypeInfo_var, (&V_3));
		Vector3_t10  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t11* BetterList_1_ToArray_m2253_gshared (BetterList_1_t207 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t207 *)__this);
		(( void (*) (BetterList_1_t207 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((BetterList_1_t207 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Vector3U5BU5D_t11* L_0 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector3>::Sort(BetterList`1/CompareFunc<T>)
extern "C" void BetterList_1_Sort_m14380_gshared (BetterList_1_t207 * __this, CompareFunc_t2176 * ___comparer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Vector3_t10  V_4 = {0};
	int32_t G_B8_0 = 0;
	{
		V_0 = (int32_t)0;
		int32_t L_0 = (int32_t)(__this->___size_1);
		V_1 = (int32_t)((int32_t)((int32_t)L_0-(int32_t)1));
		V_2 = (bool)1;
		goto IL_00a1;
	}

IL_0012:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = (int32_t)L_1;
		goto IL_009a;
	}

IL_001b:
	{
		CompareFunc_t2176 * L_2 = ___comparer;
		Vector3U5BU5D_t11* L_3 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector3U5BU5D_t11* L_6 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		NullCheck((CompareFunc_t2176 *)L_2);
		int32_t L_9 = (( int32_t (*) (CompareFunc_t2176 *, Vector3_t10 , Vector3_t10 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((CompareFunc_t2176 *)L_2, (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_3, L_5)), (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_6, L_8)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		Vector3U5BU5D_t11* L_10 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_4 = (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_10, L_12));
		Vector3U5BU5D_t11* L_13 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_14 = V_3;
		Vector3U5BU5D_t11* L_15 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_13, L_14)) = (Vector3_t10 )(*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_15, L_17));
		Vector3U5BU5D_t11* L_18 = (Vector3U5BU5D_t11*)(__this->___buffer_0);
		int32_t L_19 = V_3;
		Vector3_t10  L_20 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)));
		*((Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)))) = (Vector3_t10 )L_20;
		V_2 = (bool)1;
		goto IL_0096;
	}

IL_0080:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_22 = V_3;
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0095;
	}

IL_0092:
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_0095:
	{
		V_0 = (int32_t)G_B8_0;
	}

IL_0096:
	{
		int32_t L_24 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_001b;
		}
	}

IL_00a1:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector3>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m14381_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2173 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector3>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Vector3_t10  U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m14382_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2173 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (Vector3_t10 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m14383_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2173 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (Vector3_t10 )(__this->___U24current_2);
		Vector3_t10  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector3>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m14384_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2173 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t207 * L_2 = (BetterList_1_t207 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Vector3U5BU5D_t11* L_3 = (Vector3U5BU5D_t11*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t207 * L_4 = (BetterList_1_t207 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		Vector3U5BU5D_t11* L_5 = (Vector3U5BU5D_t11*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Vector3_t10 *)(Vector3_t10 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t207 * L_10 = (BetterList_1_t207 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector3>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m14385_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2173 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector3>::Reset()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Reset_m14386_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2173 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_2MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::.ctor()
extern "C" void EqualityComparer_1__ctor_m14387_gshared (EqualityComparer_1_t2174 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3154_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14388_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3154_0_0_0_var = il2cpp_codegen_type_from_index(3091);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(GenericEqualityComparer_1_t3154_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t793* L_4 = (TypeU5BU5D_t793*)((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t793* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t793*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m5364(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2174 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2175 * L_8 = (DefaultComparer_t2175 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2175 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14389_gshared (EqualityComparer_1_t2174 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2174 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector3_t10  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::GetHashCode(T) */, (EqualityComparer_1_t2174 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14390_gshared (EqualityComparer_1_t2174 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2174 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector3_t10 , Vector3_t10  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::Equals(T,T) */, (EqualityComparer_1_t2174 *)__this, (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector3_t10 )((*(Vector3_t10 *)((Vector3_t10 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector3>::get_Default()
extern "C" EqualityComparer_1_t2174 * EqualityComparer_1_get_Default_m14391_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2174 * L_0 = ((EqualityComparer_1_t2174_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m14392_gshared (DefaultComparer_t2175 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2174 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2174 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2174 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14393_gshared (DefaultComparer_t2175 * __this, Vector3_t10  ___obj, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Vector3_t10 *)(&___obj));
		int32_t L_1 = Vector3_GetHashCode_m4404((Vector3_t10 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14394_gshared (DefaultComparer_t2175 * __this, Vector3_t10  ___x, Vector3_t10  ___y, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___x;
		goto IL_0015;
	}
	{
		Vector3_t10  L_1 = ___y;
		Vector3_t10  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Vector3_t10  L_4 = ___y;
		Vector3_t10  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Vector3_t10 *)(&___x));
		bool L_7 = Vector3_Equals_m4405((Vector3_t10 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/CompareFunc<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14395_gshared (CompareFunc_t2176 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14396_gshared (CompareFunc_t2176 * __this, Vector3_t10  ___left, Vector3_t10  ___right, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CompareFunc_Invoke_m14396((CompareFunc_t2176 *)__this->___prev_9,___left, ___right, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector3_t10  ___left, Vector3_t10  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector3_t10  ___left, Vector3_t10  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Vector3_t10_il2cpp_TypeInfo_var;
extern "C" Object_t * CompareFunc_BeginInvoke_m14397_gshared (CompareFunc_t2176 * __this, Vector3_t10  ___left, Vector3_t10  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t10_il2cpp_TypeInfo_var, &___left);
	__d_args[1] = Box(Vector3_t10_il2cpp_TypeInfo_var, &___right);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14398_gshared (CompareFunc_t2176 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// BetterList`1<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_gen_2MethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_2.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
// BetterList`1/CompareFunc<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_7.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"
// BetterList`1/CompareFunc<UnityEngine.Vector2>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_7MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Vector2>::.ctor()
extern "C" void BetterList_1__ctor_m2279_gshared (BetterList_1_t208 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m14399_gshared (BetterList_1_t208 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t2177 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t2177 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2177 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t2177 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2177 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t2177 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t2177 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t27  BetterList_1_get_Item_m14400_gshared (BetterList_1_t208 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m14401_gshared (BetterList_1_t208 * __this, int32_t ___i, Vector2_t27  ___value, const MethodInfo* method)
{
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Vector2_t27  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_0, L_1)) = (Vector2_t27 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::AllocateMore()
extern TypeInfo* Mathf_t42_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m14402_gshared (BetterList_1_t208 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector2U5BU5D_t26* V_0 = {0};
	Vector2U5BU5D_t26* G_B3_0 = {0};
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Vector2U5BU5D_t26* L_1 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t42_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m2125(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((Vector2U5BU5D_t26*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((Vector2U5BU5D_t26*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (Vector2U5BU5D_t26*)G_B3_0;
		Vector2U5BU5D_t26* L_3 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Vector2U5BU5D_t26* L_5 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		Vector2U5BU5D_t26* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		Vector2U5BU5D_t26* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Trim()
extern "C" void BetterList_1_Trim_m14403_gshared (BetterList_1_t208 * __this, const MethodInfo* method)
{
	Vector2U5BU5D_t26* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector2U5BU5D_t26* L_2 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (Vector2U5BU5D_t26*)((Vector2U5BU5D_t26*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		Vector2U5BU5D_t26* L_4 = V_0;
		int32_t L_5 = V_1;
		Vector2U5BU5D_t26* L_6 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_4, L_5)) = (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Vector2U5BU5D_t26* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (Vector2U5BU5D_t26*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Clear()
extern "C" void BetterList_1_Clear_m2282_gshared (BetterList_1_t208 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Release()
extern "C" void BetterList_1_Release_m14404_gshared (BetterList_1_t208 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (Vector2U5BU5D_t26*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Add(T)
extern "C" void BetterList_1_Add_m2148_gshared (BetterList_1_t208 * __this, Vector2_t27  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector2U5BU5D_t26* L_2 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t208 *)__this);
		(( void (*) (BetterList_1_t208 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t208 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		Vector2U5BU5D_t26* L_3 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Vector2_t27  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_3, L_6)) = (Vector2_t27 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m14405_gshared (BetterList_1_t208 * __this, int32_t ___index, Vector2_t27  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector2U5BU5D_t26* L_2 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t208 *)__this);
		(( void (*) (BetterList_1_t208 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t208 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		Vector2U5BU5D_t26* L_6 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		Vector2U5BU5D_t26* L_8 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_6, L_7)) = (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		Vector2U5BU5D_t26* L_14 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Vector2_t27  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_14, L_15)) = (Vector2_t27 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Vector2_t27  L_18 = ___item;
		NullCheck((BetterList_1_t208 *)__this);
		(( void (*) (BetterList_1_t208 *, Vector2_t27 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t208 *)__this, (Vector2_t27 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector2>::Contains(T)
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern "C" bool BetterList_1_Contains_m14406_gshared (BetterList_1_t208 * __this, Vector2_t27  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		Vector2U5BU5D_t26* L_1 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Vector2_t27  L_3 = ___item;
		Vector2_t27  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Vector2_t27 *)((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_1, L_2)));
		bool L_6 = Vector2_Equals_m4401((Vector2_t27 *)((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_1, L_2)), (Object_t *)L_5, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector2>::Remove(T)
extern TypeInfo* Vector2_t27_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m14407_gshared (BetterList_1_t208 * __this, Vector2_t27  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t2178 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t27  V_3 = {0};
	Vector2_t27  V_4 = {0};
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		EqualityComparer_1_t2178 * L_1 = (( EqualityComparer_1_t2178 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t2178 *)L_1;
		V_1 = (int32_t)0;
		goto IL_00a5;
	}

IL_0018:
	{
		EqualityComparer_1_t2178 * L_2 = V_0;
		Vector2U5BU5D_t26* L_3 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector2_t27  L_6 = ___item;
		NullCheck((EqualityComparer_1_t2178 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Vector2_t27 , Vector2_t27  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(!0,!0) */, (EqualityComparer_1_t2178 *)L_2, (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_3, L_5)), (Vector2_t27 )L_6);
		if (!L_7)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		Vector2U5BU5D_t26* L_9 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Vector2_t27_il2cpp_TypeInfo_var, (&V_3));
		Vector2_t27  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_9, L_10)) = (Vector2_t27 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		Vector2U5BU5D_t26* L_13 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		Vector2U5BU5D_t26* L_15 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_13, L_14)) = (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		Vector2U5BU5D_t26* L_21 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_22 = (int32_t)(__this->___size_1);
		Initobj (Vector2_t27_il2cpp_TypeInfo_var, (&V_4));
		Vector2_t27  L_23 = V_4;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_21, L_22)) = (Vector2_t27 )L_23;
		return 1;
	}

IL_00a1:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0018;
		}
	}

IL_00b1:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern TypeInfo* Vector2_t27_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m14408_gshared (BetterList_1_t208 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t27  V_1 = {0};
	Vector2_t27  V_2 = {0};
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		Vector2U5BU5D_t26* L_4 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Vector2_t27_il2cpp_TypeInfo_var, (&V_1));
		Vector2_t27  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_4, L_5)) = (Vector2_t27 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		Vector2U5BU5D_t26* L_8 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		Vector2U5BU5D_t26* L_10 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_8, L_9)) = (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}
	{
		Vector2U5BU5D_t26* L_16 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_17 = (int32_t)(__this->___size_1);
		Initobj (Vector2_t27_il2cpp_TypeInfo_var, (&V_2));
		Vector2_t27  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_16, L_17)) = (Vector2_t27 )L_18;
	}

IL_0085:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Vector2>::Pop()
extern TypeInfo* Vector2_t27_il2cpp_TypeInfo_var;
extern "C" Vector2_t27  BetterList_1_Pop_m14409_gshared (BetterList_1_t208 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t27  V_0 = {0};
	int32_t V_1 = 0;
	Vector2_t27  V_2 = {0};
	Vector2_t27  V_3 = {0};
	{
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Vector2U5BU5D_t26* L_2 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_2, L_6));
		Vector2U5BU5D_t26* L_7 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Vector2_t27_il2cpp_TypeInfo_var, (&V_2));
		Vector2_t27  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_7, L_8)) = (Vector2_t27 )L_9;
		Vector2_t27  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Vector2_t27_il2cpp_TypeInfo_var, (&V_3));
		Vector2_t27  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t26* BetterList_1_ToArray_m2255_gshared (BetterList_1_t208 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t208 *)__this);
		(( void (*) (BetterList_1_t208 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((BetterList_1_t208 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Vector2U5BU5D_t26* L_0 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector2>::Sort(BetterList`1/CompareFunc<T>)
extern "C" void BetterList_1_Sort_m14410_gshared (BetterList_1_t208 * __this, CompareFunc_t2180 * ___comparer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Vector2_t27  V_4 = {0};
	int32_t G_B8_0 = 0;
	{
		V_0 = (int32_t)0;
		int32_t L_0 = (int32_t)(__this->___size_1);
		V_1 = (int32_t)((int32_t)((int32_t)L_0-(int32_t)1));
		V_2 = (bool)1;
		goto IL_00a1;
	}

IL_0012:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = (int32_t)L_1;
		goto IL_009a;
	}

IL_001b:
	{
		CompareFunc_t2180 * L_2 = ___comparer;
		Vector2U5BU5D_t26* L_3 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector2U5BU5D_t26* L_6 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		NullCheck((CompareFunc_t2180 *)L_2);
		int32_t L_9 = (( int32_t (*) (CompareFunc_t2180 *, Vector2_t27 , Vector2_t27 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((CompareFunc_t2180 *)L_2, (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_3, L_5)), (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_6, L_8)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		Vector2U5BU5D_t26* L_10 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_4 = (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_10, L_12));
		Vector2U5BU5D_t26* L_13 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_14 = V_3;
		Vector2U5BU5D_t26* L_15 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_13, L_14)) = (Vector2_t27 )(*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_15, L_17));
		Vector2U5BU5D_t26* L_18 = (Vector2U5BU5D_t26*)(__this->___buffer_0);
		int32_t L_19 = V_3;
		Vector2_t27  L_20 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)));
		*((Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)))) = (Vector2_t27 )L_20;
		V_2 = (bool)1;
		goto IL_0096;
	}

IL_0080:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_22 = V_3;
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0095;
	}

IL_0092:
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_0095:
	{
		V_0 = (int32_t)G_B8_0;
	}

IL_0096:
	{
		int32_t L_24 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_001b;
		}
	}

IL_00a1:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector2>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m14411_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2177 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector2>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Vector2_t27  U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m14412_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2177 * __this, const MethodInfo* method)
{
	{
		Vector2_t27  L_0 = (Vector2_t27 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m14413_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2177 * __this, const MethodInfo* method)
{
	{
		Vector2_t27  L_0 = (Vector2_t27 )(__this->___U24current_2);
		Vector2_t27  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector2>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m14414_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2177 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t208 * L_2 = (BetterList_1_t208 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Vector2U5BU5D_t26* L_3 = (Vector2U5BU5D_t26*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t208 * L_4 = (BetterList_1_t208 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		Vector2U5BU5D_t26* L_5 = (Vector2U5BU5D_t26*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Vector2_t27 *)(Vector2_t27 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t208 * L_10 = (BetterList_1_t208 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector2>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m14415_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2177 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector2>::Reset()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Reset_m14416_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2177 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::.ctor()
extern "C" void EqualityComparer_1__ctor_m14417_gshared (EqualityComparer_1_t2178 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3154_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14418_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3154_0_0_0_var = il2cpp_codegen_type_from_index(3091);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(GenericEqualityComparer_1_t3154_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t793* L_4 = (TypeU5BU5D_t793*)((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t793* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t793*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m5364(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2178_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2178 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2179 * L_8 = (DefaultComparer_t2179 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2179 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2178_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14419_gshared (EqualityComparer_1_t2178 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2178 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector2_t27  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::GetHashCode(T) */, (EqualityComparer_1_t2178 *)__this, (Vector2_t27 )((*(Vector2_t27 *)((Vector2_t27 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14420_gshared (EqualityComparer_1_t2178 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2178 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector2_t27 , Vector2_t27  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::Equals(T,T) */, (EqualityComparer_1_t2178 *)__this, (Vector2_t27 )((*(Vector2_t27 *)((Vector2_t27 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector2_t27 )((*(Vector2_t27 *)((Vector2_t27 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector2>::get_Default()
extern "C" EqualityComparer_1_t2178 * EqualityComparer_1_get_Default_m14421_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2178 * L_0 = ((EqualityComparer_1_t2178_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14422_gshared (DefaultComparer_t2179 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2178 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2178 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2178 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14423_gshared (DefaultComparer_t2179 * __this, Vector2_t27  ___obj, const MethodInfo* method)
{
	{
		Vector2_t27  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Vector2_t27 *)(&___obj));
		int32_t L_1 = Vector2_GetHashCode_m4400((Vector2_t27 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14424_gshared (DefaultComparer_t2179 * __this, Vector2_t27  ___x, Vector2_t27  ___y, const MethodInfo* method)
{
	{
		Vector2_t27  L_0 = ___x;
		goto IL_0015;
	}
	{
		Vector2_t27  L_1 = ___y;
		Vector2_t27  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Vector2_t27  L_4 = ___y;
		Vector2_t27  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Vector2_t27 *)(&___x));
		bool L_7 = Vector2_Equals_m4401((Vector2_t27 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/CompareFunc<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14425_gshared (CompareFunc_t2180 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14426_gshared (CompareFunc_t2180 * __this, Vector2_t27  ___left, Vector2_t27  ___right, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CompareFunc_Invoke_m14426((CompareFunc_t2180 *)__this->___prev_9,___left, ___right, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector2_t27  ___left, Vector2_t27  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector2_t27  ___left, Vector2_t27  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Vector2_t27_il2cpp_TypeInfo_var;
extern "C" Object_t * CompareFunc_BeginInvoke_m14427_gshared (CompareFunc_t2180 * __this, Vector2_t27  ___left, Vector2_t27  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t27_il2cpp_TypeInfo_var, &___left);
	__d_args[1] = Box(Vector2_t27_il2cpp_TypeInfo_var, &___right);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14428_gshared (CompareFunc_t2180 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// BetterList`1<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_gen_3MethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_3.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
// BetterList`1/CompareFunc<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_8.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_3MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"
// BetterList`1/CompareFunc<UnityEngine.Color32>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_8MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Color32>::.ctor()
extern "C" void BetterList_1__ctor_m2280_gshared (BetterList_1_t209 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m14429_gshared (BetterList_1_t209 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t2182 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t2182 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2182 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t2182 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2182 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t2182 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t2182 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t183  BetterList_1_get_Item_m14430_gshared (BetterList_1_t209 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m14431_gshared (BetterList_1_t209 * __this, int32_t ___i, Color32_t183  ___value, const MethodInfo* method)
{
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Color32_t183  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_0, L_1)) = (Color32_t183 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::AllocateMore()
extern TypeInfo* Mathf_t42_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m14432_gshared (BetterList_1_t209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Color32U5BU5D_t352* V_0 = {0};
	Color32U5BU5D_t352* G_B3_0 = {0};
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Color32U5BU5D_t352* L_1 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t42_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m2125(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((Color32U5BU5D_t352*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((Color32U5BU5D_t352*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (Color32U5BU5D_t352*)G_B3_0;
		Color32U5BU5D_t352* L_3 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Color32U5BU5D_t352* L_5 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		Color32U5BU5D_t352* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		Color32U5BU5D_t352* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Trim()
extern "C" void BetterList_1_Trim_m14433_gshared (BetterList_1_t209 * __this, const MethodInfo* method)
{
	Color32U5BU5D_t352* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Color32U5BU5D_t352* L_2 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (Color32U5BU5D_t352*)((Color32U5BU5D_t352*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		Color32U5BU5D_t352* L_4 = V_0;
		int32_t L_5 = V_1;
		Color32U5BU5D_t352* L_6 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_4, L_5)) = (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Color32U5BU5D_t352* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (Color32U5BU5D_t352*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Clear()
extern "C" void BetterList_1_Clear_m2283_gshared (BetterList_1_t209 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Release()
extern "C" void BetterList_1_Release_m14434_gshared (BetterList_1_t209 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (Color32U5BU5D_t352*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Add(T)
extern "C" void BetterList_1_Add_m2149_gshared (BetterList_1_t209 * __this, Color32_t183  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Color32U5BU5D_t352* L_2 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t209 *)__this);
		(( void (*) (BetterList_1_t209 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t209 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		Color32U5BU5D_t352* L_3 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Color32_t183  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_3, L_6)) = (Color32_t183 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m14435_gshared (BetterList_1_t209 * __this, int32_t ___index, Color32_t183  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Color32U5BU5D_t352* L_2 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t209 *)__this);
		(( void (*) (BetterList_1_t209 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t209 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		Color32U5BU5D_t352* L_6 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		Color32U5BU5D_t352* L_8 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_6, L_7)) = (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		Color32U5BU5D_t352* L_14 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Color32_t183  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_14, L_15)) = (Color32_t183 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Color32_t183  L_18 = ___item;
		NullCheck((BetterList_1_t209 *)__this);
		(( void (*) (BetterList_1_t209 *, Color32_t183 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t209 *)__this, (Color32_t183 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Color32>::Contains(T)
extern "C" bool BetterList_1_Contains_m14436_gshared (BetterList_1_t209 * __this, Color32_t183  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		Color32U5BU5D_t352* L_1 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Color32_t183  L_3 = ___item;
		Color32_t183  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_1, L_2))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), ((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_1, L_2))), (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Color32>::Remove(T)
extern TypeInfo* Color32_t183_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m14437_gshared (BetterList_1_t209 * __this, Color32_t183  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t2183 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color32_t183  V_3 = {0};
	Color32_t183  V_4 = {0};
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		EqualityComparer_1_t2183 * L_1 = (( EqualityComparer_1_t2183 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t2183 *)L_1;
		V_1 = (int32_t)0;
		goto IL_00a5;
	}

IL_0018:
	{
		EqualityComparer_1_t2183 * L_2 = V_0;
		Color32U5BU5D_t352* L_3 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Color32_t183  L_6 = ___item;
		NullCheck((EqualityComparer_1_t2183 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Color32_t183 , Color32_t183  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(!0,!0) */, (EqualityComparer_1_t2183 *)L_2, (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_3, L_5)), (Color32_t183 )L_6);
		if (!L_7)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		Color32U5BU5D_t352* L_9 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Color32_t183_il2cpp_TypeInfo_var, (&V_3));
		Color32_t183  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_9, L_10)) = (Color32_t183 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		Color32U5BU5D_t352* L_13 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		Color32U5BU5D_t352* L_15 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_13, L_14)) = (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		Color32U5BU5D_t352* L_21 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_22 = (int32_t)(__this->___size_1);
		Initobj (Color32_t183_il2cpp_TypeInfo_var, (&V_4));
		Color32_t183  L_23 = V_4;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_21, L_22)) = (Color32_t183 )L_23;
		return 1;
	}

IL_00a1:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0018;
		}
	}

IL_00b1:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern TypeInfo* Color32_t183_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m14438_gshared (BetterList_1_t209 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Color32_t183  V_1 = {0};
	Color32_t183  V_2 = {0};
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		Color32U5BU5D_t352* L_4 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Color32_t183_il2cpp_TypeInfo_var, (&V_1));
		Color32_t183  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_4, L_5)) = (Color32_t183 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		Color32U5BU5D_t352* L_8 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		Color32U5BU5D_t352* L_10 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_8, L_9)) = (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}
	{
		Color32U5BU5D_t352* L_16 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_17 = (int32_t)(__this->___size_1);
		Initobj (Color32_t183_il2cpp_TypeInfo_var, (&V_2));
		Color32_t183  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_16, L_17)) = (Color32_t183 )L_18;
	}

IL_0085:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Color32>::Pop()
extern TypeInfo* Color32_t183_il2cpp_TypeInfo_var;
extern "C" Color32_t183  BetterList_1_Pop_m14439_gshared (BetterList_1_t209 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t183  V_0 = {0};
	int32_t V_1 = 0;
	Color32_t183  V_2 = {0};
	Color32_t183  V_3 = {0};
	{
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Color32U5BU5D_t352* L_2 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_2, L_6));
		Color32U5BU5D_t352* L_7 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Color32_t183_il2cpp_TypeInfo_var, (&V_2));
		Color32_t183  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_7, L_8)) = (Color32_t183 )L_9;
		Color32_t183  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Color32_t183_il2cpp_TypeInfo_var, (&V_3));
		Color32_t183  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t352* BetterList_1_ToArray_m2257_gshared (BetterList_1_t209 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t209 *)__this);
		(( void (*) (BetterList_1_t209 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((BetterList_1_t209 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Color32U5BU5D_t352* L_0 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Color32>::Sort(BetterList`1/CompareFunc<T>)
extern "C" void BetterList_1_Sort_m14440_gshared (BetterList_1_t209 * __this, CompareFunc_t2185 * ___comparer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Color32_t183  V_4 = {0};
	int32_t G_B8_0 = 0;
	{
		V_0 = (int32_t)0;
		int32_t L_0 = (int32_t)(__this->___size_1);
		V_1 = (int32_t)((int32_t)((int32_t)L_0-(int32_t)1));
		V_2 = (bool)1;
		goto IL_00a1;
	}

IL_0012:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = (int32_t)L_1;
		goto IL_009a;
	}

IL_001b:
	{
		CompareFunc_t2185 * L_2 = ___comparer;
		Color32U5BU5D_t352* L_3 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Color32U5BU5D_t352* L_6 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		NullCheck((CompareFunc_t2185 *)L_2);
		int32_t L_9 = (( int32_t (*) (CompareFunc_t2185 *, Color32_t183 , Color32_t183 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((CompareFunc_t2185 *)L_2, (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_3, L_5)), (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_6, L_8)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		Color32U5BU5D_t352* L_10 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_4 = (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_10, L_12));
		Color32U5BU5D_t352* L_13 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_14 = V_3;
		Color32U5BU5D_t352* L_15 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_13, L_14)) = (Color32_t183 )(*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_15, L_17));
		Color32U5BU5D_t352* L_18 = (Color32U5BU5D_t352*)(__this->___buffer_0);
		int32_t L_19 = V_3;
		Color32_t183  L_20 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)));
		*((Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)))) = (Color32_t183 )L_20;
		V_2 = (bool)1;
		goto IL_0096;
	}

IL_0080:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_22 = V_3;
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0095;
	}

IL_0092:
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_0095:
	{
		V_0 = (int32_t)G_B8_0;
	}

IL_0096:
	{
		int32_t L_24 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_001b;
		}
	}

IL_00a1:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_27.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Color32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_27MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Color32>(System.Int32)
extern "C" Color32_t183  Array_InternalArray__get_Item_TisColor32_t183_m21670_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisColor32_t183_m21670(__this, p0, method) (( Color32_t183  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisColor32_t183_m21670_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14441_gshared (InternalEnumerator_1_t2181 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14442_gshared (InternalEnumerator_1_t2181 * __this, const MethodInfo* method)
{
	{
		Color32_t183  L_0 = (( Color32_t183  (*) (InternalEnumerator_1_t2181 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2181 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Color32_t183  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Color32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14443_gshared (InternalEnumerator_1_t2181 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Color32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14444_gshared (InternalEnumerator_1_t2181 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m7446((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Color32>::get_Current()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2926;
extern Il2CppCodeGenString* _stringLiteral2927;
extern "C" Color32_t183  InternalEnumerator_1_get_Current_m14445_gshared (InternalEnumerator_1_t2181 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2926 = il2cpp_codegen_string_literal_from_index(2926);
		_stringLiteral2927 = il2cpp_codegen_string_literal_from_index(2927);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_1, (String_t*)_stringLiteral2926, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1154 * L_3 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_3, (String_t*)_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m7446((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Color32_t183  L_8 = (( Color32_t183  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color32>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m14446_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2182 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color32>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Color32_t183  U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m14447_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2182 * __this, const MethodInfo* method)
{
	{
		Color32_t183  L_0 = (Color32_t183 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m14448_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2182 * __this, const MethodInfo* method)
{
	{
		Color32_t183  L_0 = (Color32_t183 )(__this->___U24current_2);
		Color32_t183  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color32>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m14449_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2182 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t209 * L_2 = (BetterList_1_t209 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Color32U5BU5D_t352* L_3 = (Color32U5BU5D_t352*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t209 * L_4 = (BetterList_1_t209 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		Color32U5BU5D_t352* L_5 = (Color32U5BU5D_t352*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Color32_t183 *)(Color32_t183 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t209 * L_10 = (BetterList_1_t209 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color32>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m14450_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2182 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Color32>::Reset()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Reset_m14451_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2182 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_4MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::.ctor()
extern "C" void EqualityComparer_1__ctor_m14452_gshared (EqualityComparer_1_t2183 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3154_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14453_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3154_0_0_0_var = il2cpp_codegen_type_from_index(3091);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(GenericEqualityComparer_1_t3154_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t793* L_4 = (TypeU5BU5D_t793*)((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t793* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t793*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m5364(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2183_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2183 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2184 * L_8 = (DefaultComparer_t2184 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2184 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2183_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14454_gshared (EqualityComparer_1_t2183 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2183 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Color32_t183  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::GetHashCode(T) */, (EqualityComparer_1_t2183 *)__this, (Color32_t183 )((*(Color32_t183 *)((Color32_t183 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14455_gshared (EqualityComparer_1_t2183 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2183 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Color32_t183 , Color32_t183  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::Equals(T,T) */, (EqualityComparer_1_t2183 *)__this, (Color32_t183 )((*(Color32_t183 *)((Color32_t183 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Color32_t183 )((*(Color32_t183 *)((Color32_t183 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Color32>::get_Default()
extern "C" EqualityComparer_1_t2183 * EqualityComparer_1_get_Default_m14456_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2183 * L_0 = ((EqualityComparer_1_t2183_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m14457_gshared (DefaultComparer_t2184 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2183 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2183 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2183 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14458_gshared (DefaultComparer_t2184 * __this, Color32_t183  ___obj, const MethodInfo* method)
{
	{
		Color32_t183  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14459_gshared (DefaultComparer_t2184 * __this, Color32_t183  ___x, Color32_t183  ___y, const MethodInfo* method)
{
	{
		Color32_t183  L_0 = ___x;
		goto IL_0015;
	}
	{
		Color32_t183  L_1 = ___y;
		Color32_t183  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Color32_t183  L_4 = ___y;
		Color32_t183  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___x)), (Object_t *)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/CompareFunc<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14460_gshared (CompareFunc_t2185 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14461_gshared (CompareFunc_t2185 * __this, Color32_t183  ___left, Color32_t183  ___right, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CompareFunc_Invoke_m14461((CompareFunc_t2185 *)__this->___prev_9,___left, ___right, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Color32_t183  ___left, Color32_t183  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Color32_t183  ___left, Color32_t183  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Color32_t183_il2cpp_TypeInfo_var;
extern "C" Object_t * CompareFunc_BeginInvoke_m14462_gshared (CompareFunc_t2185 * __this, Color32_t183  ___left, Color32_t183  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(129);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Color32_t183_il2cpp_TypeInfo_var, &___left);
	__d_args[1] = Box(Color32_t183_il2cpp_TypeInfo_var, &___right);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14463_gshared (CompareFunc_t2185 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// BetterList`1<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
// BetterList`1<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_gen_6MethodDeclarations.h"

// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_4.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5.h"
// BetterList`1/CompareFunc<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_10.h"
// BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_U3CGetEnumeratorU3Ec__Iterato_4MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_5MethodDeclarations.h"
// BetterList`1/CompareFunc<UnityEngine.Vector4>
#include "AssemblyU2DCSharp_BetterList_1_CompareFunc_gen_10MethodDeclarations.h"


// System.Void BetterList`1<UnityEngine.Vector4>::.ctor()
extern "C" void BetterList_1__ctor_m2426_gshared (BetterList_1_t275 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> BetterList`1<UnityEngine.Vector4>::GetEnumerator()
extern "C" Object_t* BetterList_1_GetEnumerator_m14692_gshared (BetterList_1_t275 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t2202 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t2202 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2202 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t2202 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2202 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t2202 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t2202 * L_2 = V_0;
		return L_2;
	}
}
// T BetterList`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C" Vector4_t198  BetterList_1_get_Item_m14693_gshared (BetterList_1_t275 * __this, int32_t ___i, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
extern "C" void BetterList_1_set_Item_m14694_gshared (BetterList_1_t275 * __this, int32_t ___i, Vector4_t198  ___value, const MethodInfo* method)
{
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_1 = ___i;
		Vector4_t198  L_2 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_0, L_1)) = (Vector4_t198 )L_2;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::AllocateMore()
extern TypeInfo* Mathf_t42_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_AllocateMore_m14695_gshared (BetterList_1_t275 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	Vector4U5BU5D_t353* V_0 = {0};
	Vector4U5BU5D_t353* G_B3_0 = {0};
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Vector4U5BU5D_t353* L_1 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t42_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Max_m2125(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_1)->max_length)))<<(int32_t)1)), (int32_t)((int32_t)32), /*hidden argument*/NULL);
		G_B3_0 = ((Vector4U5BU5D_t353*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2));
		goto IL_002d;
	}

IL_0026:
	{
		G_B3_0 = ((Vector4U5BU5D_t353*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), ((int32_t)32)));
	}

IL_002d:
	{
		V_0 = (Vector4U5BU5D_t353*)G_B3_0;
		Vector4U5BU5D_t353* L_3 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Vector4U5BU5D_t353* L_5 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		Vector4U5BU5D_t353* L_6 = V_0;
		NullCheck((Array_t *)L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(8 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_5, (Array_t *)(Array_t *)L_6, (int32_t)0);
	}

IL_0052:
	{
		Vector4U5BU5D_t353* L_7 = V_0;
		__this->___buffer_0 = L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Trim()
extern "C" void BetterList_1_Trim_m14696_gshared (BetterList_1_t275 * __this, const MethodInfo* method)
{
	Vector4U5BU5D_t353* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector4U5BU5D_t353* L_2 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		V_0 = (Vector4U5BU5D_t353*)((Vector4U5BU5D_t353*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		V_1 = (int32_t)0;
		goto IL_0049;
	}

IL_0032:
	{
		Vector4U5BU5D_t353* L_4 = V_0;
		int32_t L_5 = V_1;
		Vector4U5BU5D_t353* L_6 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_4, L_5)) = (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_6, L_8));
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		Vector4U5BU5D_t353* L_12 = V_0;
		__this->___buffer_0 = L_12;
	}

IL_005c:
	{
		goto IL_0068;
	}

IL_0061:
	{
		__this->___buffer_0 = (Vector4U5BU5D_t353*)NULL;
	}

IL_0068:
	{
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Clear()
extern "C" void BetterList_1_Clear_m2441_gshared (BetterList_1_t275 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Release()
extern "C" void BetterList_1_Release_m14697_gshared (BetterList_1_t275 * __this, const MethodInfo* method)
{
	{
		__this->___size_1 = 0;
		__this->___buffer_0 = (Vector4U5BU5D_t353*)NULL;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Add(T)
extern "C" void BetterList_1_Add_m2288_gshared (BetterList_1_t275 * __this, Vector4_t198  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector4U5BU5D_t353* L_2 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t275 *)__this);
		(( void (*) (BetterList_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		Vector4U5BU5D_t353* L_3 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_4 = (int32_t)(__this->___size_1);
		int32_t L_5 = (int32_t)L_4;
		V_0 = (int32_t)L_5;
		__this->___size_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		Vector4_t198  L_7 = ___item;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_3, L_6)) = (Vector4_t198 )L_7;
		return;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Insert(System.Int32,T)
extern "C" void BetterList_1_Insert_m14698_gshared (BetterList_1_t275 * __this, int32_t ___index, Vector4_t198  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		Vector4U5BU5D_t353* L_2 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		NullCheck((BetterList_1_t275 *)__this);
		(( void (*) (BetterList_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((BetterList_1_t275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0024:
	{
		int32_t L_3 = ___index;
		int32_t L_4 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = (int32_t)(__this->___size_1);
		V_0 = (int32_t)L_5;
		goto IL_005a;
	}

IL_003c:
	{
		Vector4U5BU5D_t353* L_6 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_7 = V_0;
		Vector4U5BU5D_t353* L_8 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9-(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_6, L_7)) = (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
	}

IL_005a:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___index;
		if ((((int32_t)L_12) > ((int32_t)L_13)))
		{
			goto IL_003c;
		}
	}
	{
		Vector4U5BU5D_t353* L_14 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_15 = ___index;
		Vector4_t198  L_16 = ___item;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_14, L_15)) = (Vector4_t198 )L_16;
		int32_t L_17 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0081:
	{
		Vector4_t198  L_18 = ___item;
		NullCheck((BetterList_1_t275 *)__this);
		(( void (*) (BetterList_1_t275 *, Vector4_t198 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((BetterList_1_t275 *)__this, (Vector4_t198 )L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector4>::Contains(T)
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern "C" bool BetterList_1_Contains_m14699_gshared (BetterList_1_t275 * __this, Vector4_t198  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		V_0 = (int32_t)0;
		goto IL_003c;
	}

IL_0014:
	{
		Vector4U5BU5D_t353* L_1 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		Vector4_t198  L_3 = ___item;
		Vector4_t198  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_4);
		NullCheck((Vector4_t198 *)((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_1, L_2)));
		bool L_6 = Vector4_Equals_m4488((Vector4_t198 *)((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_1, L_2)), (Object_t *)L_5, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		return 1;
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}
}
// System.Boolean BetterList`1<UnityEngine.Vector4>::Remove(T)
extern TypeInfo* Vector4_t198_il2cpp_TypeInfo_var;
extern "C" bool BetterList_1_Remove_m14700_gshared (BetterList_1_t275 * __this, Vector4_t198  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	EqualityComparer_1_t2203 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector4_t198  V_3 = {0};
	Vector4_t198  V_4 = {0};
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		EqualityComparer_1_t2203 * L_1 = (( EqualityComparer_1_t2203 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		V_0 = (EqualityComparer_1_t2203 *)L_1;
		V_1 = (int32_t)0;
		goto IL_00a5;
	}

IL_0018:
	{
		EqualityComparer_1_t2203 * L_2 = V_0;
		Vector4U5BU5D_t353* L_3 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector4_t198  L_6 = ___item;
		NullCheck((EqualityComparer_1_t2203 *)L_2);
		bool L_7 = (bool)VirtFuncInvoker2< bool, Vector4_t198 , Vector4_t198  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(!0,!0) */, (EqualityComparer_1_t2203 *)L_2, (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_3, L_5)), (Vector4_t198 )L_6);
		if (!L_7)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_8-(int32_t)1));
		Vector4U5BU5D_t353* L_9 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_10 = V_1;
		Initobj (Vector4_t198_il2cpp_TypeInfo_var, (&V_3));
		Vector4_t198  L_11 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_9, L_10)) = (Vector4_t198 )L_11;
		int32_t L_12 = V_1;
		V_2 = (int32_t)L_12;
		goto IL_0078;
	}

IL_005a:
	{
		Vector4U5BU5D_t353* L_13 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_14 = V_2;
		Vector4U5BU5D_t353* L_15 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_13, L_14)) = (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_15, L_17));
		int32_t L_18 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_005a;
		}
	}
	{
		Vector4U5BU5D_t353* L_21 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_22 = (int32_t)(__this->___size_1);
		Initobj (Vector4_t198_il2cpp_TypeInfo_var, (&V_4));
		Vector4_t198  L_23 = V_4;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_21, L_22)) = (Vector4_t198 )L_23;
		return 1;
	}

IL_00a1:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0018;
		}
	}

IL_00b1:
	{
		return 0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::RemoveAt(System.Int32)
extern TypeInfo* Vector4_t198_il2cpp_TypeInfo_var;
extern "C" void BetterList_1_RemoveAt_m14701_gshared (BetterList_1_t275 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Vector4_t198  V_1 = {0};
	Vector4_t198  V_2 = {0};
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___size_1);
		__this->___size_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		Vector4U5BU5D_t353* L_4 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_5 = ___index;
		Initobj (Vector4_t198_il2cpp_TypeInfo_var, (&V_1));
		Vector4_t198  L_6 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_4, L_5)) = (Vector4_t198 )L_6;
		int32_t L_7 = ___index;
		V_0 = (int32_t)L_7;
		goto IL_005f;
	}

IL_0041:
	{
		Vector4U5BU5D_t353* L_8 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_9 = V_0;
		Vector4U5BU5D_t353* L_10 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_8, L_9)) = (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_10, L_12));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(__this->___size_1);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0041;
		}
	}
	{
		Vector4U5BU5D_t353* L_16 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_17 = (int32_t)(__this->___size_1);
		Initobj (Vector4_t198_il2cpp_TypeInfo_var, (&V_2));
		Vector4_t198  L_18 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_16, L_17)) = (Vector4_t198 )L_18;
	}

IL_0085:
	{
		return;
	}
}
// T BetterList`1<UnityEngine.Vector4>::Pop()
extern TypeInfo* Vector4_t198_il2cpp_TypeInfo_var;
extern "C" Vector4_t198  BetterList_1_Pop_m14702_gshared (BetterList_1_t275 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t198  V_0 = {0};
	int32_t V_1 = 0;
	Vector4_t198  V_2 = {0};
	Vector4_t198  V_3 = {0};
	{
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_1 = (int32_t)(__this->___size_1);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Vector4U5BU5D_t353* L_2 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_3 = (int32_t)(__this->___size_1);
		int32_t L_4 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		V_1 = (int32_t)L_4;
		__this->___size_1 = L_4;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		int32_t L_6 = L_5;
		V_0 = (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_2, L_6));
		Vector4U5BU5D_t353* L_7 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_8 = (int32_t)(__this->___size_1);
		Initobj (Vector4_t198_il2cpp_TypeInfo_var, (&V_2));
		Vector4_t198  L_9 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_7, L_8)) = (Vector4_t198 )L_9;
		Vector4_t198  L_10 = V_0;
		return L_10;
	}

IL_004f:
	{
		Initobj (Vector4_t198_il2cpp_TypeInfo_var, (&V_3));
		Vector4_t198  L_11 = V_3;
		return L_11;
	}
}
// T[] BetterList`1<UnityEngine.Vector4>::ToArray()
extern "C" Vector4U5BU5D_t353* BetterList_1_ToArray_m2260_gshared (BetterList_1_t275 * __this, const MethodInfo* method)
{
	{
		NullCheck((BetterList_1_t275 *)__this);
		(( void (*) (BetterList_1_t275 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((BetterList_1_t275 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Vector4U5BU5D_t353* L_0 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		return L_0;
	}
}
// System.Void BetterList`1<UnityEngine.Vector4>::Sort(BetterList`1/CompareFunc<T>)
extern "C" void BetterList_1_Sort_m14703_gshared (BetterList_1_t275 * __this, CompareFunc_t2205 * ___comparer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Vector4_t198  V_4 = {0};
	int32_t G_B8_0 = 0;
	{
		V_0 = (int32_t)0;
		int32_t L_0 = (int32_t)(__this->___size_1);
		V_1 = (int32_t)((int32_t)((int32_t)L_0-(int32_t)1));
		V_2 = (bool)1;
		goto IL_00a1;
	}

IL_0012:
	{
		V_2 = (bool)0;
		int32_t L_1 = V_0;
		V_3 = (int32_t)L_1;
		goto IL_009a;
	}

IL_001b:
	{
		CompareFunc_t2205 * L_2 = ___comparer;
		Vector4U5BU5D_t353* L_3 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Vector4U5BU5D_t353* L_6 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)1)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		NullCheck((CompareFunc_t2205 *)L_2);
		int32_t L_9 = (( int32_t (*) (CompareFunc_t2205 *, Vector4_t198 , Vector4_t198 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((CompareFunc_t2205 *)L_2, (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_3, L_5)), (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_6, L_8)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0080;
		}
	}
	{
		Vector4U5BU5D_t353* L_10 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_11 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_4 = (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_10, L_12));
		Vector4U5BU5D_t353* L_13 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_14 = V_3;
		Vector4U5BU5D_t353* L_15 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_16 = V_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		int32_t L_17 = ((int32_t)((int32_t)L_16+(int32_t)1));
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_13, L_14)) = (Vector4_t198 )(*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_15, L_17));
		Vector4U5BU5D_t353* L_18 = (Vector4U5BU5D_t353*)(__this->___buffer_0);
		int32_t L_19 = V_3;
		Vector4_t198  L_20 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)));
		*((Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)))) = (Vector4_t198 )L_20;
		V_2 = (bool)1;
		goto IL_0096;
	}

IL_0080:
	{
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_22 = V_3;
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0095;
	}

IL_0092:
	{
		int32_t L_23 = V_3;
		G_B8_0 = ((int32_t)((int32_t)L_23-(int32_t)1));
	}

IL_0095:
	{
		V_0 = (int32_t)G_B8_0;
	}

IL_0096:
	{
		int32_t L_24 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_001b;
		}
	}

IL_00a1:
	{
		bool L_27 = V_2;
		if (L_27)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_30.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Vector4>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_30MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector4>(System.Int32)
extern "C" Vector4_t198  Array_InternalArray__get_Item_TisVector4_t198_m21682_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector4_t198_m21682(__this, p0, method) (( Vector4_t198  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisVector4_t198_m21682_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14704_gshared (InternalEnumerator_1_t2201 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14705_gshared (InternalEnumerator_1_t2201 * __this, const MethodInfo* method)
{
	{
		Vector4_t198  L_0 = (( Vector4_t198  (*) (InternalEnumerator_1_t2201 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2201 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector4_t198  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector4>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14706_gshared (InternalEnumerator_1_t2201 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector4>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14707_gshared (InternalEnumerator_1_t2201 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m7446((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Vector4>::get_Current()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2926;
extern Il2CppCodeGenString* _stringLiteral2927;
extern "C" Vector4_t198  InternalEnumerator_1_get_Current_m14708_gshared (InternalEnumerator_1_t2201 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2926 = il2cpp_codegen_string_literal_from_index(2926);
		_stringLiteral2927 = il2cpp_codegen_string_literal_from_index(2927);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_1, (String_t*)_stringLiteral2926, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1154 * L_3 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_3, (String_t*)_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m7446((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Vector4_t198  L_8 = (( Vector4_t198  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector4>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m14709_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2202 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector4>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Vector4_t198  U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m14710_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2202 * __this, const MethodInfo* method)
{
	{
		Vector4_t198  L_0 = (Vector4_t198 )(__this->___U24current_2);
		return L_0;
	}
}
// System.Object BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector4>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m14711_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2202 * __this, const MethodInfo* method)
{
	{
		Vector4_t198  L_0 = (Vector4_t198 )(__this->___U24current_2);
		Vector4_t198  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), &L_1);
		return L_2;
	}
}
// System.Boolean BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector4>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m14712_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2202 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0090;
	}

IL_0021:
	{
		BetterList_1_t275 * L_2 = (BetterList_1_t275 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		Vector4U5BU5D_t353* L_3 = (Vector4U5BU5D_t353*)(L_2->___buffer_0);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		BetterList_1_t275 * L_4 = (BetterList_1_t275 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_4);
		Vector4U5BU5D_t353* L_5 = (Vector4U5BU5D_t353*)(L_4->___buffer_0);
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		__this->___U24current_2 = (*(Vector4_t198 *)(Vector4_t198 *)SZArrayLdElema(L_5, L_7));
		__this->___U24PC_1 = 1;
		goto IL_0092;
	}

IL_0065:
	{
		int32_t L_8 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_9 = (int32_t)(__this->___U3CiU3E__0_0);
		BetterList_1_t275 * L_10 = (BetterList_1_t275 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)(L_10->___size_1);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_003d;
		}
	}

IL_0089:
	{
		__this->___U24PC_1 = (-1);
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		return 1;
	}
	// Dead block : IL_0094: ldloc.1
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector4>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m14713_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2202 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BetterList`1/<GetEnumerator>c__Iterator0<UnityEngine.Vector4>::Reset()
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Reset_m14714_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2202 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_5MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::.ctor()
extern "C" void EqualityComparer_1__ctor_m14715_gshared (EqualityComparer_1_t2203 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m298((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t3154_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m14716_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t3154_0_0_0_var = il2cpp_codegen_type_from_index(3091);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(GenericEqualityComparer_1_t3154_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t793* L_4 = (TypeU5BU5D_t793*)((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, (RuntimeTypeHandle_t1348 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t793* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t793*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m5364(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2203_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2203 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		DefaultComparer_t2204 * L_8 = (DefaultComparer_t2204 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2204 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2203_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m14717_gshared (EqualityComparer_1_t2203 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2203 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Vector4_t198  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::GetHashCode(T) */, (EqualityComparer_1_t2203 *)__this, (Vector4_t198 )((*(Vector4_t198 *)((Vector4_t198 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m14718_gshared (EqualityComparer_1_t2203 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2203 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Vector4_t198 , Vector4_t198  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::Equals(T,T) */, (EqualityComparer_1_t2203 *)__this, (Vector4_t198 )((*(Vector4_t198 *)((Vector4_t198 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Vector4_t198 )((*(Vector4_t198 *)((Vector4_t198 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Vector4>::get_Default()
extern "C" EqualityComparer_1_t2203 * EqualityComparer_1_get_Default_m14719_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2203 * L_0 = ((EqualityComparer_1_t2203_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::.ctor()
extern "C" void DefaultComparer__ctor_m14720_gshared (DefaultComparer_t2204 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t2203 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (EqualityComparer_1_t2203 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2203 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14721_gshared (DefaultComparer_t2204 * __this, Vector4_t198  ___obj, const MethodInfo* method)
{
	{
		Vector4_t198  L_0 = ___obj;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Vector4_t198 *)(&___obj));
		int32_t L_1 = Vector4_GetHashCode_m4487((Vector4_t198 *)(&___obj), NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector4>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14722_gshared (DefaultComparer_t2204 * __this, Vector4_t198  ___x, Vector4_t198  ___y, const MethodInfo* method)
{
	{
		Vector4_t198  L_0 = ___x;
		goto IL_0015;
	}
	{
		Vector4_t198  L_1 = ___y;
		Vector4_t198  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((Object_t*)(Object_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Vector4_t198  L_4 = ___y;
		Vector4_t198  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((Vector4_t198 *)(&___x));
		bool L_7 = Vector4_Equals_m4488((Vector4_t198 *)(&___x), (Object_t *)L_6, NULL);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void BetterList`1/CompareFunc<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void CompareFunc__ctor_m14723_gshared (CompareFunc_t2205 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t CompareFunc_Invoke_m14724_gshared (CompareFunc_t2205 * __this, Vector4_t198  ___left, Vector4_t198  ___right, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CompareFunc_Invoke_m14724((CompareFunc_t2205 *)__this->___prev_9,___left, ___right, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Vector4_t198  ___left, Vector4_t198  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Vector4_t198  ___left, Vector4_t198  ___right, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___left, ___right,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult BetterList`1/CompareFunc<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* Vector4_t198_il2cpp_TypeInfo_var;
extern "C" Object_t * CompareFunc_BeginInvoke_m14725_gshared (CompareFunc_t2205 * __this, Vector4_t198  ___left, Vector4_t198  ___right, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector4_t198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector4_t198_il2cpp_TypeInfo_var, &___left);
	__d_args[1] = Box(Vector4_t198_il2cpp_TypeInfo_var, &___right);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 BetterList`1/CompareFunc<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t CompareFunc_EndInvoke_m14726_gshared (CompareFunc_t2205 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"


// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_31MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" Keyframe_t358  Array_InternalArray__get_Item_TisKeyframe_t358_m21693_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyframe_t358_m21693(__this, p0, method) (( Keyframe_t358  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyframe_t358_m21693_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14756_gshared (InternalEnumerator_1_t2207 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14757_gshared (InternalEnumerator_1_t2207 * __this, const MethodInfo* method)
{
	{
		Keyframe_t358  L_0 = (( Keyframe_t358  (*) (InternalEnumerator_1_t2207 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2207 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Keyframe_t358  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14758_gshared (InternalEnumerator_1_t2207 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14759_gshared (InternalEnumerator_1_t2207 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001e;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m7446((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001e:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B5_0 = 0;
	}

IL_0044:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2926;
extern Il2CppCodeGenString* _stringLiteral2927;
extern "C" Keyframe_t358  InternalEnumerator_1_get_Current_m14760_gshared (InternalEnumerator_1_t2207 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2926 = il2cpp_codegen_string_literal_from_index(2926);
		_stringLiteral2927 = il2cpp_codegen_string_literal_from_index(2927);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1154 * L_1 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_1, (String_t*)_stringLiteral2926, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t1154 * L_3 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_3, (String_t*)_stringLiteral2927, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m7446((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Keyframe_t358  L_8 = (( Keyframe_t358  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
