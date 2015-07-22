#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
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
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern Il2CppCodeGenString* _stringLiteral2106;
extern "C" void TargetInvocationException__ctor_m10236 (TargetInvocationException_t1608 * __this, Exception_t54 * ___inner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2106 = il2cpp_codegen_string_literal_from_index(2106);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t54 * L_0 = ___inner;
		Exception__ctor_m5483(__this, _stringLiteral2106, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m10237 (TargetInvocationException_t1608 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___sc, const MethodInfo* method)
{
	{
		SerializationInfo_t900 * L_0 = ___info;
		StreamingContext_t901  L_1 = ___sc;
		Exception__ctor_m5484(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"

// Locale
#include "mscorlib_LocaleMethodDeclarations.h"


// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern Il2CppCodeGenString* _stringLiteral2107;
extern "C" void TargetParameterCountException__ctor_m10238 (TargetParameterCountException_t1609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2107 = il2cpp_codegen_string_literal_from_index(2107);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m8368(NULL /*static, unused*/, _stringLiteral2107, /*hidden argument*/NULL);
		Exception__ctor_m5396(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m10239 (TargetParameterCountException_t1609 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m5396(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetParameterCountException__ctor_m10240 (TargetParameterCountException_t1609 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t900 * L_0 = ___info;
		StreamingContext_t901  L_1 = ___context;
		Exception__ctor_m5484(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"



// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2108;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m10241 (NeutralResourcesLanguageAttribute_t1611 * __this, String_t* ___cultureName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		_stringLiteral2108 = il2cpp_codegen_string_literal_from_index(2108);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, _stringLiteral2108, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"

// System.Version
#include "mscorlib_System_Version.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"


// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern TypeInfo* Version_t1202_il2cpp_TypeInfo_var;
extern "C" void SatelliteContractVersionAttribute__ctor_m10242 (SatelliteContractVersionAttribute_t1612 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t1202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(769);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version;
		Version_t1202 * L_1 = (Version_t1202 *)il2cpp_codegen_object_new (Version_t1202_il2cpp_TypeInfo_var);
		Version__ctor_m12375(L_1, L_0, /*hidden argument*/NULL);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"



// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"


// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern "C" void CompilationRelaxationsAttribute__ctor_m10243 (CompilationRelaxationsAttribute_t1614 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
extern "C" void DefaultDependencyAttribute__ctor_m10244 (DefaultDependencyAttribute_t1615 * __this, int32_t ___loadHintArgument, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"



// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
extern "C" void StringFreezingAttribute__ctor_m10245 (StringFreezingAttribute_t1618 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_ConsistencyMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
extern "C" void CriticalFinalizerObject__ctor_m10246 (CriticalFinalizerObject_t1621 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern "C" void CriticalFinalizerObject_Finalize_m10247 (CriticalFinalizerObject_t1621 * __this, const MethodInfo* method)
{
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0xC, FINALLY_0005);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0005;
	}

FINALLY_0005:
	{ // begin finally (depth: 1)
		Object_Finalize_m5346(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(5)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5)
	{
		IL2CPP_JUMP_TBL(0xC, IL_000c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_000c:
	{
		return;
	}
}
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"



// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
extern "C" void ReliabilityContractAttribute__ctor_m10248 (ReliabilityContractAttribute_t1622 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___consistencyGuarantee;
		__this->___consistency_0 = L_0;
		int32_t L_1 = ___cer;
		__this->___cer_1 = L_1;
		return;
	}
}
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArguments.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArgumentsMethodDeclarations.h"



// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConventionMethodDeclarations.h"



// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSetMethodDeclarations.h"



// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttribMethodDeclarations.h"

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// System.Void System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(System.Runtime.InteropServices.ClassInterfaceType)
extern "C" void ClassInterfaceAttribute__ctor_m10249 (ClassInterfaceAttribute_t1626 * __this, int32_t ___classInterfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___classInterfaceType;
		__this->___ciType_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"


// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
extern "C" void ComDefaultInterfaceAttribute__ctor_m10250 (ComDefaultInterfaceAttribute_t1628 * __this, Type_t * ___defaultInterface, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___defaultInterface;
		__this->____type_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.DispIdAttribute::.ctor(System.Int32)
extern "C" void DispIdAttribute__ctor_m10251 (DispIdAttribute_t1630 * __this, int32_t ___dispId, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___dispId;
		__this->___id_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" void GCHandle__ctor_m10252 (GCHandle_t1631 * __this, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		int32_t L_0 = ___type;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___type;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0011;
		}
	}

IL_000e:
	{
		___type = 2;
	}

IL_0011:
	{
		Object_t * L_2 = ___value;
		int32_t L_3 = ___type;
		int32_t L_4 = GCHandle_GetTargetHandle_m10258(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m10253 (GCHandle_t1631 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2109;
extern "C" Object_t * GCHandle_get_Target_m10254 (GCHandle_t1631 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		_stringLiteral2109 = il2cpp_codegen_string_literal_from_index(2109);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GCHandle_get_IsAllocated_m10253(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m8368(NULL /*static, unused*/, _stringLiteral2109, /*hidden argument*/NULL);
		InvalidOperationException_t1154 * L_2 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m10257(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" GCHandle_t1631  GCHandle_Alloc_m10255 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = ___type;
		GCHandle_t1631  L_2 = {0};
		GCHandle__ctor_m10252(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" void GCHandle_Free_m10256 (GCHandle_t1631 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m10259(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C" Object_t * GCHandle_GetTarget_m10257 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*GCHandle_GetTarget_m10257_ftn) (int32_t);
	return  ((GCHandle_GetTarget_m10257_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::GetTarget) (___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m10258 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef int32_t (*GCHandle_GetTargetHandle_m10258_ftn) (Object_t *, int32_t, int32_t);
	return  ((GCHandle_GetTargetHandle_m10258_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::GetTargetHandle) (___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m10259 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*GCHandle_FreeHandle_m10259_ftn) (int32_t);
	 ((GCHandle_FreeHandle_m10259_ftn)mscorlib::System::Runtime::InteropServices::GCHandle::FreeHandle) (___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern TypeInfo* GCHandle_t1631_il2cpp_TypeInfo_var;
extern "C" bool GCHandle_Equals_m10260 (GCHandle_t1631 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GCHandle_t1631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1087);
		s_Il2CppMethodIntialized = true;
	}
	GCHandle_t1631  V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Object_t * L_1 = ___o;
		if (((Object_t *)IsInst(L_1, GCHandle_t1631_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		int32_t L_2 = (__this->___handle_0);
		Object_t * L_3 = ___o;
		V_0 = ((*(GCHandle_t1631 *)((GCHandle_t1631 *)UnBox (L_3, GCHandle_t1631_il2cpp_TypeInfo_var))));
		int32_t L_4 = ((&V_0)->___handle_0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern "C" int32_t GCHandle_GetHashCode_m10261 (GCHandle_t1631 * __this, const MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m5356(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleTypeMethodDeclarations.h"



// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribuMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.InterfaceTypeAttribute::.ctor(System.Runtime.InteropServices.ComInterfaceType)
extern "C" void InterfaceTypeAttribute__ctor_m10262 (InterfaceTypeAttribute_t1633 * __this, int32_t ___interfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___interfaceType;
		__this->___intType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_Marshal.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"

// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern TypeInfo* Marshal_t1634_il2cpp_TypeInfo_var;
extern "C" void Marshal__cctor_m10263 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		((Marshal_t1634_StaticFields*)Marshal_t1634_il2cpp_TypeInfo_var->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t1902 * L_0 = Environment_get_OSVersion_m12005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m12261(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		((Marshal_t1634_StaticFields*)Marshal_t1634_il2cpp_TypeInfo_var->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m10264 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*Marshal_copy_from_unmanaged_m10264_ftn) (IntPtr_t, int32_t, Array_t *, int32_t);
	 ((Marshal_copy_from_unmanaged_m10264_ftn)mscorlib::System::Runtime::InteropServices::Marshal::copy_from_unmanaged) (___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t1634_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m10265 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t169* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		ByteU5BU5D_t169* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1634_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m10264(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t1634_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m10266 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t286* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t1634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(937);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		CharU5BU5D_t286* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1634_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m10264(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExce.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExceMethodDeclarations.h"

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor()
extern Il2CppCodeGenString* _stringLiteral2110;
extern "C" void MarshalDirectiveException__ctor_m10267 (MarshalDirectiveException_t1635 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2110 = il2cpp_codegen_string_literal_from_index(2110);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m8368(NULL /*static, unused*/, _stringLiteral2110, /*hidden argument*/NULL);
		SystemException__ctor_m7498(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m5482(__this, ((int32_t)-2146233035), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MarshalDirectiveException__ctor_m10268 (MarshalDirectiveException_t1635 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t900 * L_0 = ___info;
		StreamingContext_t901  L_1 = ___context;
		SystemException__ctor_m12294(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
extern "C" void PreserveSigAttribute__ctor_m10269 (PreserveSigAttribute_t1636 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeHandle__ctor_m10270 (SafeHandle_t1376 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m10246(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___invalidHandleValue;
		__this->___invalid_handle_value_1 = L_0;
		bool L_1 = ___ownsHandle;
		__this->___owns_handle_3 = L_1;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern TypeInfo* ObjectDisposedException_t989_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_Close_m10271 (SafeHandle_t1376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(616);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m337(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t989 * L_3 = (ObjectDisposedException_t989 *)il2cpp_codegen_object_new (ObjectDisposedException_t989_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m5558(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m11515(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0070;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_0070;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
		__this->___refcount_2 = (-1);
	}

IL_0070:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern TypeInfo* ObjectDisposedException_t989_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousAddRef_m10272 (SafeHandle_t1376 * __this, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(616);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m337(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t989 * L_3 = (ObjectDisposedException_t989 *)il2cpp_codegen_object_new (ObjectDisposedException_t989_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m5558(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_7 = Object_GetType_m337(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_7);
		ObjectDisposedException_t989 * L_9 = (ObjectDisposedException_t989 *)il2cpp_codegen_object_new (ObjectDisposedException_t989_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m5558(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0040:
	{
		int32_t* L_10 = &(__this->___refcount_2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = Interlocked_CompareExchange_m11515(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_001d;
		}
	}
	{
		bool* L_15 = ___success;
		*((int8_t*)(L_15)) = (int8_t)1;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern TypeInfo* ObjectDisposedException_t989_il2cpp_TypeInfo_var;
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m10273 (SafeHandle_t1376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(616);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m337(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t989 * L_3 = (ObjectDisposedException_t989 *)il2cpp_codegen_object_new (ObjectDisposedException_t989_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m5558(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		IntPtr_t L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern TypeInfo* ObjectDisposedException_t989_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousRelease_m10274 (SafeHandle_t1376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t989_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(616);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m337(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t989 * L_3 = (ObjectDisposedException_t989 *)il2cpp_codegen_object_new (ObjectDisposedException_t989_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m5558(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m11515(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_006a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
	}

IL_006a:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C" void SafeHandle_Dispose_m10275 (SafeHandle_t1376 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m5555(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m10276 (SafeHandle_t1376 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		SafeHandle_Close_m10271(__this, /*hidden argument*/NULL);
		goto IL_0011;
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" void SafeHandle_SetHandle_m10277 (SafeHandle_t1376 * __this, IntPtr_t ___handle, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C" void SafeHandle_Finalize_m10278 (SafeHandle_t1376 * __this, const MethodInfo* method)
{
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
			bool L_0 = (__this->___owns_handle_3);
			if (!L_0)
			{
				goto IL_0029;
			}
		}

IL_000b:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
			if (L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
			IntPtr_t L_2 = (__this->___invalid_handle_value_1);
			__this->___handle_0 = L_2;
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m10247(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0035:
	{
		return;
	}
}
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAtMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
extern "C" void TypeLibImportClassAttribute__ctor_m10279 (TypeLibImportClassAttribute_t1637 * __this, Type_t * ___importClass, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___importClass;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		__this->____importClass_0 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttribMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibVersionAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TypeLibVersionAttribute__ctor_m10280 (TypeLibVersionAttribute_t1638 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major;
		__this->___major_0 = L_0;
		int32_t L_1 = ___minor;
		__this->___minor_1 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"



// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"


// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern TypeInfo* ActivationServices_t1641_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionLevelActivator_t1643_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m10281 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivationServices_t1641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1088);
		ConstructionLevelActivator_t1643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1089);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivationServices_t1641_StaticFields*)ActivationServices_t1641_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ConstructionLevelActivator_t1643 * L_1 = (ConstructionLevelActivator_t1643 *)il2cpp_codegen_object_new (ConstructionLevelActivator_t1643_il2cpp_TypeInfo_var);
		ConstructionLevelActivator__ctor_m10287(L_1, /*hidden argument*/NULL);
		((ActivationServices_t1641_StaticFields*)ActivationServices_t1641_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = ((ActivationServices_t1641_StaticFields*)ActivationServices_t1641_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern TypeInfo* IContextAttribute_t1996_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* UrlAttribute_t1646_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2111;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m10282 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t38* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextAttribute_t1996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1090);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		UrlAttribute_t1646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		_stringLiteral2111 = il2cpp_codegen_string_literal_from_index(2111);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t38* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t1698 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t38* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0040;
	}

IL_000b:
	{
		ObjectU5BU5D_t38* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, IContextAttribute_t1996_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RemotingException_t1714 * L_5 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_5, _stringLiteral2111, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0025:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t1646 *)IsInst(L_6, UrlAttribute_t1646_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t1646 *)Castclass(L_7, UrlAttribute_t1646_il2cpp_TypeInfo_var)));
		String_t* L_8 = UrlAttribute_get_UrlValue_m10289(((UrlAttribute_t1646 *)Castclass(L_7, UrlAttribute_t1646_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003c:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_10 = V_3;
		ObjectU5BU5D_t38* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_13 = ___type;
		String_t* L_14 = V_0;
		ObjectU5BU5D_t38* L_15 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_16 = RemotingServices_CreateClientProxy_m10623(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0058:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry_t1698 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m10565(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		ActivatedClientTypeEntry_t1698 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_0070;
		}
	}
	{
		ActivatedClientTypeEntry_t1698 * L_20 = V_4;
		ObjectU5BU5D_t38* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_22 = RemotingServices_CreateClientProxy_m10622(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_0070:
	{
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_23);
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		Type_t * L_25 = ___type;
		ObjectU5BU5D_t38* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m10624(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_0083:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern TypeInfo* ConstructionCall_t1669_il2cpp_TypeInfo_var;
extern TypeInfo* AppDomainLevelActivator_t1642_il2cpp_TypeInfo_var;
extern TypeInfo* ContextLevelActivator_t1644_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1657_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IContextAttribute_t1996_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" ConstructionCall_t1669 * ActivationServices_CreateConstructionCall_m10283 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t38* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t1669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		AppDomainLevelActivator_t1642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1096);
		ContextLevelActivator_t1644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1097);
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Thread_t1657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		IContextAttribute_t1996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1090);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCall_t1669 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t64 * V_2 = {0};
	bool V_3 = false;
	Context_t1655 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t38* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t38* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		Type_t * L_0 = ___type;
		ConstructionCall_t1669 * L_1 = (ConstructionCall_t1669 *)il2cpp_codegen_object_new (ConstructionCall_t1669_il2cpp_TypeInfo_var);
		ConstructionCall__ctor_m10369(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ConstructionCall_t1669 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m10281(NULL /*static, unused*/, /*hidden argument*/NULL);
		AppDomainLevelActivator_t1642 * L_7 = (AppDomainLevelActivator_t1642 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t1642_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m10286(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_4, L_7);
		ConstructionCall_t1669 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m10372(L_8, 0, /*hidden argument*/NULL);
		ConstructionCall_t1669 * L_9 = V_0;
		return L_9;
	}

IL_002c:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m10281(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t1644 * L_12 = (ContextLevelActivator_t1644 *)il2cpp_codegen_object_new (ContextLevelActivator_t1644_il2cpp_TypeInfo_var);
		ContextLevelActivator__ctor_m10288(L_12, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		ArrayList_t64 * L_13 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_13, /*hidden argument*/NULL);
		V_2 = L_13;
		ObjectU5BU5D_t38* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_004c;
		}
	}
	{
		ArrayList_t64 * L_15 = V_2;
		ObjectU5BU5D_t38* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(43 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_004c:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		String_t* L_18 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m400(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
		Context_t1655 * L_20 = Thread_get_CurrentContext_m11534(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		ArrayList_t64 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
		V_6 = L_23;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0096;
		}

IL_0072:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_24);
			V_5 = ((Object_t *)Castclass(L_25, IContextAttribute_t1996_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_5;
			Context_t1655 * L_27 = V_4;
			ConstructionCall_t1669 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t1655 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1996_il2cpp_TypeInfo_var, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0096;
			}
		}

IL_008f:
		{
			V_3 = 0;
			goto IL_00a2;
		}

IL_0096:
		{
			Object_t * L_30 = V_6;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_0072;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_6;
			V_13 = ((Object_t *)IsInst(L_32, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_33 = V_13;
			if (L_33)
			{
				goto IL_00b5;
			}
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(167)
		}

IL_00b5:
		{
			Object_t * L_34 = V_13;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(167)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_00bd:
	{
		Type_t * L_35 = ___type;
		NullCheck(L_35);
		ObjectU5BU5D_t38* L_36 = (ObjectU5BU5D_t38*)VirtFuncInvoker1< ObjectU5BU5D_t38*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t38* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_010d;
	}

IL_00d2:
	{
		ObjectU5BU5D_t38* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, IContextAttribute_t1996_il2cpp_TypeInfo_var)))
		{
			goto IL_0107;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00fc;
		}
	}
	{
		Object_t * L_43 = V_8;
		Context_t1655 * L_44 = V_4;
		ConstructionCall_t1669 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, IContextAttribute_t1996_il2cpp_TypeInfo_var)));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t1655 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1996_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IContextAttribute_t1996_il2cpp_TypeInfo_var)), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00fd;
	}

IL_00fc:
	{
		G_B19_0 = 0;
	}

IL_00fd:
	{
		V_3 = G_B19_0;
		ArrayList_t64 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_48);
	}

IL_0107:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_010d:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t38* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0174;
		}
	}
	{
		ConstructionCall_t1669 * L_53 = V_0;
		ArrayList_t64 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t38* L_55 = (ObjectU5BU5D_t38*)VirtFuncInvoker0< ObjectU5BU5D_t38* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m10378(L_53, L_55, /*hidden argument*/NULL);
		ArrayList_t64 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_56);
		V_12 = L_57;
	}

IL_0132:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014d;
		}

IL_0137:
		{
			Object_t * L_58 = V_12;
			NullCheck(L_58);
			Object_t * L_59 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_58);
			V_11 = ((Object_t *)Castclass(L_59, IContextAttribute_t1996_il2cpp_TypeInfo_var));
			Object_t * L_60 = V_11;
			ConstructionCall_t1669 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t1996_il2cpp_TypeInfo_var, L_60, L_61);
		}

IL_014d:
		{
			Object_t * L_62 = V_12;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_0137;
			}
		}

IL_0159:
		{
			IL2CPP_LEAVE(0x174, FINALLY_015e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_015e;
	}

FINALLY_015e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_12;
			V_14 = ((Object_t *)IsInst(L_64, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_65 = V_14;
			if (L_65)
			{
				goto IL_016c;
			}
		}

IL_016b:
		{
			IL2CPP_END_FINALLY(350)
		}

IL_016c:
		{
			Object_t * L_66 = V_14;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(350)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(350)
	{
		IL2CPP_JUMP_TBL(0x174, IL_0174)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0174:
	{
		String_t* L_67 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		String_t* L_68 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Inequality_m443(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_018c;
		}
	}
	{
		String_t* L_70 = ___activationUrl;
		Object_t * L_71 = V_1;
		AppDomainLevelActivator_t1642 * L_72 = (AppDomainLevelActivator_t1642 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t1642_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m10286(L_72, L_70, L_71, /*hidden argument*/NULL);
		V_1 = L_72;
	}

IL_018c:
	{
		ConstructionCall_t1669 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_73, L_74);
		ConstructionCall_t1669 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m10372(L_75, L_76, /*hidden argument*/NULL);
		ConstructionCall_t1669 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m10284 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m10284_ftn) (Type_t *);
	return  ((ActivationServices_AllocateUninitializedClassInstance_m10284_ftn)mscorlib::System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance) (___type);
}
// System.Void System.Runtime.Remoting.Activation.ActivationServices::EnableProxyActivation(System.Type,System.Boolean)
extern "C" void ActivationServices_EnableProxyActivation_m10285 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___enable, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef void (*ActivationServices_EnableProxyActivation_m10285_ftn) (Type_t *, bool);
	 ((ActivationServices_EnableProxyActivation_m10285_ftn)mscorlib::System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation) (___type, ___enable);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
extern "C" void AppDomainLevelActivator__ctor_m10286 (AppDomainLevelActivator_t1642 * __this, String_t* ___activationUrl, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___activationUrl;
		__this->____activationUrl_0 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
extern "C" void ConstructionLevelActivator__ctor_m10287 (ConstructionLevelActivator_t1643 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ContextLevelActivator__ctor_m10288 (ContextLevelActivator_t1644 * __this, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___next;
		__this->___m_NextActivator_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m10289 (UrlAttribute_t1646 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern TypeInfo* UrlAttribute_t1646_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool UrlAttribute_Equals_m10290 (UrlAttribute_t1646 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UrlAttribute_t1646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1092);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t1646 *)IsInst(L_0, UrlAttribute_t1646_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_1 = ___o;
		NullCheck(((UrlAttribute_t1646 *)Castclass(L_1, UrlAttribute_t1646_il2cpp_TypeInfo_var)));
		String_t* L_2 = UrlAttribute_get_UrlValue_m10289(((UrlAttribute_t1646 *)Castclass(L_1, UrlAttribute_t1646_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m400(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C" int32_t UrlAttribute_GetHashCode_m10291 (UrlAttribute_t1646 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m2091(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void UrlAttribute_GetPropertiesForNewContext_m10292 (UrlAttribute_t1646 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool UrlAttribute_IsContextOK_m10293 (UrlAttribute_t1646 * __this, Context_t1655 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern "C" void ChannelInfo__ctor_m10294 (ChannelInfo_t1648 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t38* L_0 = ChannelServices_GetCurrentChannelInfo_m10303(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern "C" ObjectU5BU5D_t38* ChannelInfo_get_ChannelData_m10295 (ChannelInfo_t1648 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t38* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelData.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderData.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Runtime.Remoting.ChannelData
#include "mscorlib_System_Runtime_Remoting_ChannelDataMethodDeclarations.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* CrossContextChannel_t1649_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t284_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2112;
extern Il2CppCodeGenString* _stringLiteral2113;
extern Il2CppCodeGenString* _stringLiteral2114;
extern "C" void ChannelServices__cctor_m10296 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		CrossContextChannel_t1649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1099);
		StringU5BU5D_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		_stringLiteral2112 = il2cpp_codegen_string_literal_from_index(2112);
		_stringLiteral2113 = il2cpp_codegen_string_literal_from_index(2113);
		_stringLiteral2114 = il2cpp_codegen_string_literal_from_index(2114);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t64 * L_0 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_0, /*hidden argument*/NULL);
		((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t64 * L_1 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_1, /*hidden argument*/NULL);
		((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t1649 * L_2 = (CrossContextChannel_t1649 *)il2cpp_codegen_object_new (CrossContextChannel_t1649_il2cpp_TypeInfo_var);
		CrossContextChannel__ctor_m10334(L_2, /*hidden argument*/NULL);
		((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3 = _stringLiteral2112;
		StringU5BU5D_t284* L_3 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, _stringLiteral2113);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)_stringLiteral2113;
		StringU5BU5D_t284* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, _stringLiteral2114);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)_stringLiteral2114;
		((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.String,System.Object,System.String&)
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1981_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelSender_t1980_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m10297 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___remoteChannelData, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		IChannel_t1981_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1100);
		IChannelSender_t1980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1101);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t38* V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___remoteChannelData;
		V_0 = ((ObjectU5BU5D_t38*)Castclass(L_0, ObjectU5BU5D_t38_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		ArrayList_t64 * L_1 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_4 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0023:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0064;
			}

IL_0028:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_6);
				V_2 = ((Object_t *)Castclass(L_7, IChannel_t1981_il2cpp_TypeInfo_var));
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelSender_t1980_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (L_9)
				{
					goto IL_0048;
				}
			}

IL_0043:
			{
				goto IL_0064;
			}

IL_0048:
			{
				Object_t * L_10 = V_4;
				String_t* L_11 = ___url;
				ObjectU5BU5D_t38* L_12 = V_0;
				String_t** L_13 = ___objectUri;
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
				Object_t * L_14 = ChannelServices_CreateClientChannelSinkChain_m10298(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
				V_5 = L_14;
				Object_t * L_15 = V_5;
				if (!L_15)
				{
					goto IL_0064;
				}
			}

IL_005b:
			{
				Object_t * L_16 = V_5;
				V_9 = L_16;
				IL2CPP_LEAVE(0x114, FINALLY_0074);
			}

IL_0064:
			{
				Object_t * L_17 = V_3;
				NullCheck(L_17);
				bool L_18 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0028;
				}
			}

IL_006f:
			{
				IL2CPP_LEAVE(0x89, FINALLY_0074);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t54 *)e.ex;
			goto FINALLY_0074;
		}

FINALLY_0074:
		{ // begin finally (depth: 2)
			{
				Object_t * L_19 = V_3;
				V_10 = ((Object_t *)IsInst(L_19, IDisposable_t56_il2cpp_TypeInfo_var));
				Object_t * L_20 = V_10;
				if (L_20)
				{
					goto IL_0081;
				}
			}

IL_0080:
			{
				IL2CPP_END_FINALLY(116)
			}

IL_0081:
			{
				Object_t * L_21 = V_10;
				NullCheck(L_21);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_21);
				IL2CPP_END_FINALLY(116)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(116)
		{
			IL2CPP_END_CLEANUP(0x114, FINALLY_0108);
			IL2CPP_JUMP_TBL(0x89, IL_0089)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
		}

IL_0089:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			RemotingConfiguration_LoadDefaultDelayedChannels_m10564(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_22 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
			NullCheck(L_22);
			Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
			V_7 = L_23;
		}

IL_009a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00dc;
			}

IL_009f:
			{
				Object_t * L_24 = V_7;
				NullCheck(L_24);
				Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_24);
				V_6 = ((Object_t *)Castclass(L_25, IChannelSender_t1980_il2cpp_TypeInfo_var));
				Object_t * L_26 = V_6;
				String_t* L_27 = ___url;
				ObjectU5BU5D_t38* L_28 = V_0;
				String_t** L_29 = ___objectUri;
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
				Object_t * L_30 = ChannelServices_CreateClientChannelSinkChain_m10298(NULL /*static, unused*/, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
				V_8 = L_30;
				Object_t * L_31 = V_8;
				if (!L_31)
				{
					goto IL_00dc;
				}
			}

IL_00c0:
			{
				IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
				ArrayList_t64 * L_32 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
				Object_t * L_33 = V_6;
				NullCheck(L_32);
				VirtActionInvoker1< Object_t * >::Invoke(37 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_32, L_33);
				Object_t * L_34 = V_6;
				ChannelServices_RegisterChannel_m10299(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
				Object_t * L_35 = V_8;
				V_9 = L_35;
				IL2CPP_LEAVE(0x114, FINALLY_00ed);
			}

IL_00dc:
			{
				Object_t * L_36 = V_7;
				NullCheck(L_36);
				bool L_37 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_36);
				if (L_37)
				{
					goto IL_009f;
				}
			}

IL_00e8:
			{
				IL2CPP_LEAVE(0x103, FINALLY_00ed);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t54 *)e.ex;
			goto FINALLY_00ed;
		}

FINALLY_00ed:
		{ // begin finally (depth: 2)
			{
				Object_t * L_38 = V_7;
				V_11 = ((Object_t *)IsInst(L_38, IDisposable_t56_il2cpp_TypeInfo_var));
				Object_t * L_39 = V_11;
				if (L_39)
				{
					goto IL_00fb;
				}
			}

IL_00fa:
			{
				IL2CPP_END_FINALLY(237)
			}

IL_00fb:
			{
				Object_t * L_40 = V_11;
				NullCheck(L_40);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_40);
				IL2CPP_END_FINALLY(237)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(237)
		{
			IL2CPP_END_CLEANUP(0x114, FINALLY_0108);
			IL2CPP_JUMP_TBL(0x103, IL_0103)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
		}

IL_0103:
		{
			IL2CPP_LEAVE(0x10F, FINALLY_0108);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0108;
	}

FINALLY_0108:
	{ // begin finally (depth: 1)
		Object_t * L_41 = V_1;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(264)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(264)
	{
		IL2CPP_JUMP_TBL(0x114, IL_0114)
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_010f:
	{
		String_t** L_42 = ___objectUri;
		*((Object_t **)(L_42)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}

IL_0114:
	{
		Object_t * L_43 = V_9;
		return L_43;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender,System.String,System.Object[],System.String&)
extern TypeInfo* IChannelSender_t1980_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelDataStore_t1997_il2cpp_TypeInfo_var;
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m10298 (Object_t * __this /* static, unused */, Object_t * ___sender, String_t* ___url, ObjectU5BU5D_t38* ___channelDataArray, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelSender_t1980_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1101);
		IChannelDataStore_t1997_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1102);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t38* V_1 = {0};
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		String_t** L_0 = ___objectUri;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		ObjectU5BU5D_t38* L_1 = ___channelDataArray;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_2 = ___sender;
		String_t* L_3 = ___url;
		String_t** L_4 = ___objectUri;
		NullCheck(L_2);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1980_il2cpp_TypeInfo_var, L_2, L_3, NULL, L_4);
		return L_5;
	}

IL_0013:
	{
		ObjectU5BU5D_t38* L_6 = ___channelDataArray;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0050;
	}

IL_001c:
	{
		ObjectU5BU5D_t38* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9));
		Object_t * L_10 = V_0;
		if (!((Object_t *)IsInst(L_10, IChannelDataStore_t1997_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_11 = ___sender;
		Object_t * L_12 = V_0;
		String_t** L_13 = ___objectUri;
		NullCheck(L_11);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1980_il2cpp_TypeInfo_var, L_11, (String_t*)NULL, L_12, L_13);
		V_3 = L_14;
		goto IL_0044;
	}

IL_003a:
	{
		Object_t * L_15 = ___sender;
		String_t* L_16 = ___url;
		Object_t * L_17 = V_0;
		String_t** L_18 = ___objectUri;
		NullCheck(L_15);
		Object_t * L_19 = (Object_t *)InterfaceFuncInvoker3< Object_t *, String_t*, Object_t *, String_t** >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.IChannelSender::CreateMessageSink(System.String,System.Object,System.String&) */, IChannelSender_t1980_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18);
		V_3 = L_19;
	}

IL_0044:
	{
		Object_t * L_20 = V_3;
		if (!L_20)
		{
			goto IL_004c;
		}
	}
	{
		Object_t * L_21 = V_3;
		return L_21;
	}

IL_004c:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_23 = V_2;
		ObjectU5BU5D_t38* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		return (Object_t *)NULL;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m10299 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m10300(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* ISecurableChannel_t1998_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1981_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1999_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1285_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2115;
extern Il2CppCodeGenString* _stringLiteral2116;
extern Il2CppCodeGenString* _stringLiteral2117;
extern Il2CppCodeGenString* _stringLiteral2118;
extern "C" void ChannelServices_RegisterChannel_m10300 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		ISecurableChannel_t1998_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1103);
		IChannel_t1981_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1100);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		IChannelReceiver_t1999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1104);
		IList_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		_stringLiteral2115 = il2cpp_codegen_string_literal_from_index(2115);
		_stringLiteral2116 = il2cpp_codegen_string_literal_from_index(2116);
		_stringLiteral2117 = il2cpp_codegen_string_literal_from_index(2117);
		_stringLiteral2118 = il2cpp_codegen_string_literal_from_index(2118);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___chnl;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, _stringLiteral2115, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		bool L_2 = ___ensureSecurity;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_3 = ___chnl;
		V_1 = ((Object_t *)IsInst(L_3, ISecurableChannel_t1998_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1981_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m3768(NULL /*static, unused*/, _stringLiteral2116, L_6, /*hidden argument*/NULL);
		RemotingException_t1714 * L_8 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003a:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean) */, ISecurableChannel_t1998_il2cpp_TypeInfo_var, L_9, 1);
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		ArrayList_t64 * L_10 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00d4;
		}

IL_005b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_13 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, IChannel_t1981_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1981_il2cpp_TypeInfo_var, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1981_il2cpp_TypeInfo_var, L_18);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_op_Equality_m400(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b5;
			}
		}

IL_0084:
		{
			Object_t * L_21 = ___chnl;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1981_il2cpp_TypeInfo_var, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			bool L_24 = String_op_Inequality_m443(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00b5;
			}
		}

IL_0099:
		{
			Object_t * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t1981_il2cpp_TypeInfo_var, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2117, L_26, _stringLiteral2118, /*hidden argument*/NULL);
			RemotingException_t1714 * L_28 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
			RemotingException__ctor_m10609(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00b5:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t1981_il2cpp_TypeInfo_var, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t1981_il2cpp_TypeInfo_var, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00d0;
			}
		}

IL_00c7:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00d0;
			}
		}

IL_00ce:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00d0:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00d4:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_37 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_005b;
			}
		}

IL_00e4:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00fc;
			}
		}

IL_00eb:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_40 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(35 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_40, L_41, L_42);
			goto IL_0108;
		}

IL_00fc:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_43 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_0108:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, IChannelReceiver_t1999_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0139;
			}
		}

IL_0117:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			Object_t * L_47 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m337(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1285_il2cpp_TypeInfo_var, L_47, L_50);
			if (!L_51)
			{
				goto IL_0139;
			}
		}

IL_0131:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(1 /* System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object) */, IChannelReceiver_t1999_il2cpp_TypeInfo_var, L_52, NULL);
		}

IL_0139:
		{
			IL2CPP_LEAVE(0x145, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		Object_t * L_53 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x145, IL_0145)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0145:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannelConfig(System.Runtime.Remoting.ChannelData)
extern const Il2CppType* IChannelSender_t1980_0_0_0_var;
extern const Il2CppType* IChannelReceiver_t1999_0_0_0_var;
extern const Il2CppType* IDictionary_t1260_0_0_0_var;
extern const Il2CppType* IClientChannelSinkProvider_t2001_0_0_0_var;
extern const Il2CppType* IServerChannelSinkProvider_t2000_0_0_0_var;
extern TypeInfo* ProviderData_t1712_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* IServerChannelSinkProvider_t2000_il2cpp_TypeInfo_var;
extern TypeInfo* IClientChannelSinkProvider_t2001_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t1981_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1608_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1999_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2119;
extern Il2CppCodeGenString* _stringLiteral2120;
extern Il2CppCodeGenString* _stringLiteral2121;
extern Il2CppCodeGenString* _stringLiteral2122;
extern Il2CppCodeGenString* _stringLiteral447;
extern "C" void ChannelServices_RegisterChannelConfig_m10301 (Object_t * __this /* static, unused */, ChannelData_t1710 * ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelSender_t1980_0_0_0_var = il2cpp_codegen_type_from_index(1101);
		IChannelReceiver_t1999_0_0_0_var = il2cpp_codegen_type_from_index(1104);
		IDictionary_t1260_0_0_0_var = il2cpp_codegen_type_from_index(746);
		IClientChannelSinkProvider_t2001_0_0_0_var = il2cpp_codegen_type_from_index(1105);
		IServerChannelSinkProvider_t2000_0_0_0_var = il2cpp_codegen_type_from_index(1106);
		ProviderData_t1712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1107);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		IServerChannelSinkProvider_t2000_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1106);
		IClientChannelSinkProvider_t2001_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1105);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IChannel_t1981_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1100);
		TargetInvocationException_t1608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1077);
		IChannelReceiver_t1999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1104);
		_stringLiteral2119 = il2cpp_codegen_string_literal_from_index(2119);
		_stringLiteral2120 = il2cpp_codegen_string_literal_from_index(2120);
		_stringLiteral2121 = il2cpp_codegen_string_literal_from_index(2121);
		_stringLiteral2122 = il2cpp_codegen_string_literal_from_index(2122);
		_stringLiteral447 = il2cpp_codegen_string_literal_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	ProviderData_t1712 * V_3 = {0};
	Object_t * V_4 = {0};
	int32_t V_5 = 0;
	ProviderData_t1712 * V_6 = {0};
	Object_t * V_7 = {0};
	Type_t * V_8 = {0};
	ObjectU5BU5D_t38* V_9 = {0};
	TypeU5BU5D_t793* V_10 = {0};
	bool V_11 = false;
	bool V_12 = false;
	ConstructorInfo_t797 * V_13 = {0};
	Object_t * V_14 = {0};
	Object_t * V_15 = {0};
	TargetInvocationException_t1608 * V_16 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Object_t *)NULL;
		V_1 = (Object_t *)NULL;
		ChannelData_t1710 * L_0 = ___channel;
		NullCheck(L_0);
		ArrayList_t64 * L_1 = ChannelData_get_ServerProviders_m10601(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		V_2 = ((int32_t)((int32_t)L_2-(int32_t)1));
		goto IL_0045;
	}

IL_0017:
	{
		ChannelData_t1710 * L_3 = ___channel;
		NullCheck(L_3);
		ArrayList_t64 * L_4 = ChannelData_get_ServerProviders_m10601(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_3 = ((ProviderData_t1712 *)IsInst(L_6, ProviderData_t1712_il2cpp_TypeInfo_var));
		ProviderData_t1712 * L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		Object_t * L_8 = ChannelServices_CreateProvider_m10302(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_4 = ((Object_t *)Castclass(L_8, IServerChannelSinkProvider_t2000_il2cpp_TypeInfo_var));
		Object_t * L_9 = V_4;
		Object_t * L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.IServerChannelSinkProvider::set_Next(System.Runtime.Remoting.Channels.IServerChannelSinkProvider) */, IServerChannelSinkProvider_t2000_il2cpp_TypeInfo_var, L_9, L_10);
		Object_t * L_11 = V_4;
		V_0 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12-(int32_t)1));
	}

IL_0045:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		ChannelData_t1710 * L_14 = ___channel;
		NullCheck(L_14);
		ArrayList_t64 * L_15 = ChannelData_get_ClientProviders_m10602(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_15);
		V_5 = ((int32_t)((int32_t)L_16-(int32_t)1));
		goto IL_0093;
	}

IL_0060:
	{
		ChannelData_t1710 * L_17 = ___channel;
		NullCheck(L_17);
		ArrayList_t64 * L_18 = ChannelData_get_ClientProviders_m10602(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_18, L_19);
		V_6 = ((ProviderData_t1712 *)IsInst(L_20, ProviderData_t1712_il2cpp_TypeInfo_var));
		ProviderData_t1712 * L_21 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		Object_t * L_22 = ChannelServices_CreateProvider_m10302(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_7 = ((Object_t *)Castclass(L_22, IClientChannelSinkProvider_t2001_il2cpp_TypeInfo_var));
		Object_t * L_23 = V_7;
		Object_t * L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.IClientChannelSinkProvider::set_Next(System.Runtime.Remoting.Channels.IClientChannelSinkProvider) */, IClientChannelSinkProvider_t2001_il2cpp_TypeInfo_var, L_23, L_24);
		Object_t * L_25 = V_7;
		V_1 = L_25;
		int32_t L_26 = V_5;
		V_5 = ((int32_t)((int32_t)L_26-(int32_t)1));
	}

IL_0093:
	{
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		ChannelData_t1710 * L_28 = ___channel;
		NullCheck(L_28);
		String_t* L_29 = (L_28->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetType_m8279(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		Type_t * L_31 = V_8;
		if (L_31)
		{
			goto IL_00ca;
		}
	}
	{
		ChannelData_t1710 * L_32 = ___channel;
		NullCheck(L_32);
		String_t* L_33 = (L_32->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2119, L_33, _stringLiteral2120, /*hidden argument*/NULL);
		RemotingException_t1714 * L_35 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_35, L_34, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_00ca:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IChannelSender_t1980_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_37 = V_8;
		NullCheck(L_36);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_36, L_37);
		V_11 = L_38;
		Type_t * L_39 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IChannelReceiver_t1999_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_40 = V_8;
		NullCheck(L_39);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_39, L_40);
		V_12 = L_41;
		bool L_42 = V_11;
		if (!L_42)
		{
			goto IL_014b;
		}
	}
	{
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_014b;
		}
	}
	{
		TypeU5BU5D_t793* L_44 = ((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IDictionary_t1260_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 0);
		ArrayElementTypeCheck (L_44, L_45);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_44, 0)) = (Type_t *)L_45;
		TypeU5BU5D_t793* L_46 = L_44;
		Type_t * L_47 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IClientChannelSinkProvider_t2001_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 1);
		ArrayElementTypeCheck (L_46, L_47);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_46, 1)) = (Type_t *)L_47;
		TypeU5BU5D_t793* L_48 = L_46;
		Type_t * L_49 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IServerChannelSinkProvider_t2000_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 2);
		ArrayElementTypeCheck (L_48, L_49);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_48, 2)) = (Type_t *)L_49;
		V_10 = L_48;
		ObjectU5BU5D_t38* L_50 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 3));
		ChannelData_t1710 * L_51 = ___channel;
		NullCheck(L_51);
		Hashtable_t24 * L_52 = ChannelData_get_CustomProperties_m10603(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		ArrayElementTypeCheck (L_50, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 0)) = (Object_t *)L_52;
		ObjectU5BU5D_t38* L_53 = L_50;
		Object_t * L_54 = V_1;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 1);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 1)) = (Object_t *)L_54;
		ObjectU5BU5D_t38* L_55 = L_53;
		Object_t * L_56 = V_0;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 2);
		ArrayElementTypeCheck (L_55, L_56);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_55, 2)) = (Object_t *)L_56;
		V_9 = L_55;
		goto IL_01e3;
	}

IL_014b:
	{
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_018e;
		}
	}
	{
		TypeU5BU5D_t793* L_58 = ((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IDictionary_t1260_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
		ArrayElementTypeCheck (L_58, L_59);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_58, 0)) = (Type_t *)L_59;
		TypeU5BU5D_t793* L_60 = L_58;
		Type_t * L_61 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IClientChannelSinkProvider_t2001_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 1);
		ArrayElementTypeCheck (L_60, L_61);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_60, 1)) = (Type_t *)L_61;
		V_10 = L_60;
		ObjectU5BU5D_t38* L_62 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 2));
		ChannelData_t1710 * L_63 = ___channel;
		NullCheck(L_63);
		Hashtable_t24 * L_64 = ChannelData_get_CustomProperties_m10603(L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 0);
		ArrayElementTypeCheck (L_62, L_64);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_62, 0)) = (Object_t *)L_64;
		ObjectU5BU5D_t38* L_65 = L_62;
		Object_t * L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 1);
		ArrayElementTypeCheck (L_65, L_66);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_65, 1)) = (Object_t *)L_66;
		V_9 = L_65;
		goto IL_01e3;
	}

IL_018e:
	{
		bool L_67 = V_12;
		if (!L_67)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t793* L_68 = ((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_69 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IDictionary_t1260_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, 0);
		ArrayElementTypeCheck (L_68, L_69);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_68, 0)) = (Type_t *)L_69;
		TypeU5BU5D_t793* L_70 = L_68;
		Type_t * L_71 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IServerChannelSinkProvider_t2000_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, 1);
		ArrayElementTypeCheck (L_70, L_71);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_70, 1)) = (Type_t *)L_71;
		V_10 = L_70;
		ObjectU5BU5D_t38* L_72 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 2));
		ChannelData_t1710 * L_73 = ___channel;
		NullCheck(L_73);
		Hashtable_t24 * L_74 = ChannelData_get_CustomProperties_m10603(L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, 0);
		ArrayElementTypeCheck (L_72, L_74);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_72, 0)) = (Object_t *)L_74;
		ObjectU5BU5D_t38* L_75 = L_72;
		Object_t * L_76 = V_0;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, 1);
		ArrayElementTypeCheck (L_75, L_76);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_75, 1)) = (Object_t *)L_76;
		V_9 = L_75;
		goto IL_01e3;
	}

IL_01d1:
	{
		Type_t * L_77 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m2113(NULL /*static, unused*/, L_77, _stringLiteral2121, /*hidden argument*/NULL);
		RemotingException_t1714 * L_79 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_79, L_78, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_79);
	}

IL_01e3:
	{
		Type_t * L_80 = V_8;
		TypeU5BU5D_t793* L_81 = V_10;
		NullCheck(L_80);
		ConstructorInfo_t797 * L_82 = (ConstructorInfo_t797 *)VirtFuncInvoker1< ConstructorInfo_t797 *, TypeU5BU5D_t793* >::Invoke(68 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_80, L_81);
		V_13 = L_82;
		ConstructorInfo_t797 * L_83 = V_13;
		if (L_83)
		{
			goto IL_0207;
		}
	}
	{
		Type_t * L_84 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_85 = String_Concat_m2113(NULL /*static, unused*/, L_84, _stringLiteral2122, /*hidden argument*/NULL);
		RemotingException_t1714 * L_86 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_86, L_85, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_86);
	}

IL_0207:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t797 * L_87 = V_13;
		ObjectU5BU5D_t38* L_88 = V_9;
		NullCheck(L_87);
		Object_t * L_89 = ConstructorInfo_Invoke_m5467(L_87, L_88, /*hidden argument*/NULL);
		V_14 = ((Object_t *)Castclass(L_89, IChannel_t1981_il2cpp_TypeInfo_var));
		goto IL_022b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t1608_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_021c;
		throw e;
	}

CATCH_021c:
	{ // begin catch(System.Reflection.TargetInvocationException)
		V_16 = ((TargetInvocationException_t1608 *)__exception_local);
		TargetInvocationException_t1608 * L_90 = V_16;
		NullCheck(L_90);
		Exception_t54 * L_91 = (Exception_t54 *)VirtFuncInvoker0< Exception_t54 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_90);
		il2cpp_codegen_raise_exception(L_91);
		goto IL_022b;
	} // end catch (depth: 1)

IL_022b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		ArrayList_t64 * L_92 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_92);
		Object_t * L_93 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_92);
		V_15 = L_93;
		Object_t * L_94 = V_15;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
	}

IL_023e:
	try
	{ // begin try (depth: 1)
		{
			ChannelData_t1710 * L_95 = ___channel;
			NullCheck(L_95);
			String_t* L_96 = (L_95->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_97 = String_op_Equality_m400(NULL /*static, unused*/, L_96, _stringLiteral447, /*hidden argument*/NULL);
			if (!L_97)
			{
				goto IL_0271;
			}
		}

IL_0253:
		{
			Object_t * L_98 = V_14;
			if (((Object_t *)IsInst(L_98, IChannelReceiver_t1999_il2cpp_TypeInfo_var)))
			{
				goto IL_0271;
			}
		}

IL_025f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_99 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1;
			Object_t * L_100 = V_14;
			NullCheck(L_99);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_99, L_100);
			goto IL_0278;
		}

IL_0271:
		{
			Object_t * L_101 = V_14;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ChannelServices_RegisterChannel_m10299(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
		}

IL_0278:
		{
			IL2CPP_LEAVE(0x285, FINALLY_027d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_027d;
	}

FINALLY_027d:
	{ // begin finally (depth: 1)
		Object_t * L_102 = V_15;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(637)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(637)
	{
		IL2CPP_JUMP_TBL(0x285, IL_0285)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0285:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Channels.ChannelServices::CreateProvider(System.Runtime.Remoting.ProviderData)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t54_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t1608_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2119;
extern Il2CppCodeGenString* _stringLiteral2120;
extern Il2CppCodeGenString* _stringLiteral2123;
extern Il2CppCodeGenString* _stringLiteral2124;
extern "C" Object_t * ChannelServices_CreateProvider_m10302 (Object_t * __this /* static, unused */, ProviderData_t1712 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Exception_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		TargetInvocationException_t1608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1077);
		_stringLiteral2119 = il2cpp_codegen_string_literal_from_index(2119);
		_stringLiteral2120 = il2cpp_codegen_string_literal_from_index(2120);
		_stringLiteral2123 = il2cpp_codegen_string_literal_from_index(2123);
		_stringLiteral2124 = il2cpp_codegen_string_literal_from_index(2124);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	ObjectU5BU5D_t38* V_1 = {0};
	Exception_t54 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ProviderData_t1712 * L_0 = ___prov;
		NullCheck(L_0);
		String_t* L_1 = (L_0->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m8279(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		ProviderData_t1712 * L_4 = ___prov;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Type_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2119, L_5, _stringLiteral2120, /*hidden argument*/NULL);
		RemotingException_t1714 * L_7 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		ObjectU5BU5D_t38* L_8 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 2));
		ProviderData_t1712 * L_9 = ___prov;
		NullCheck(L_9);
		Hashtable_t24 * L_10 = (L_9->___CustomProperties_3);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 0)) = (Object_t *)L_10;
		ObjectU5BU5D_t38* L_11 = L_8;
		ProviderData_t1712 * L_12 = ___prov;
		NullCheck(L_12);
		Object_t * L_13 = (L_12->___CustomData_4);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		ArrayElementTypeCheck (L_11, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 1)) = (Object_t *)L_13;
		V_1 = L_11;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			Type_t * L_14 = V_0;
			ObjectU5BU5D_t38* L_15 = V_1;
			Object_t * L_16 = Activator_CreateInstance_m11601(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			goto IL_00a3;
		}

IL_0053:
		{
			; // IL_0053: leave IL_00a3
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t54_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0058;
		throw e;
	}

CATCH_0058:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t54 *)__exception_local);
			Exception_t54 * L_17 = V_2;
			if (!((TargetInvocationException_t1608 *)IsInst(L_17, TargetInvocationException_t1608_il2cpp_TypeInfo_var)))
			{
				goto IL_0070;
			}
		}

IL_0064:
		{
			Exception_t54 * L_18 = V_2;
			NullCheck(((TargetInvocationException_t1608 *)Castclass(L_18, TargetInvocationException_t1608_il2cpp_TypeInfo_var)));
			Exception_t54 * L_19 = (Exception_t54 *)VirtFuncInvoker0< Exception_t54 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, ((TargetInvocationException_t1608 *)Castclass(L_18, TargetInvocationException_t1608_il2cpp_TypeInfo_var)));
			V_2 = L_19;
		}

IL_0070:
		{
			ObjectU5BU5D_t38* L_20 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 4));
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
			ArrayElementTypeCheck (L_20, _stringLiteral2123);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 0)) = (Object_t *)_stringLiteral2123;
			ObjectU5BU5D_t38* L_21 = L_20;
			Type_t * L_22 = V_0;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
			ArrayElementTypeCheck (L_21, L_22);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 1)) = (Object_t *)L_22;
			ObjectU5BU5D_t38* L_23 = L_21;
			NullCheck(L_23);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
			ArrayElementTypeCheck (L_23, _stringLiteral2124);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_23, 2)) = (Object_t *)_stringLiteral2124;
			ObjectU5BU5D_t38* L_24 = L_23;
			Exception_t54 * L_25 = V_2;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_25);
			NullCheck(L_24);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
			ArrayElementTypeCheck (L_24, L_26);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 3)) = (Object_t *)L_26;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m1946(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			RemotingException_t1714 * L_28 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
			RemotingException__ctor_m10609(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_28);
			goto IL_00a3;
		}
	} // end catch (depth: 1)

IL_00a3:
	{
		Object_t * L_29 = V_3;
		return L_29;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t1999_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t38* ChannelServices_GetCurrentChannelInfo_m10303 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		IChannelReceiver_t1999_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1104);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t64 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t64 * L_0 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		ArrayList_t64 * L_1 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_4 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0056;
			}

IL_0027:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelReceiver_t1999_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (!L_9)
				{
					goto IL_0056;
				}
			}

IL_003d:
			{
				Object_t * L_10 = V_4;
				NullCheck(L_10);
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData() */, IChannelReceiver_t1999_il2cpp_TypeInfo_var, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_0056;
				}
			}

IL_004d:
			{
				ArrayList_t64 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
			}

IL_0056:
			{
				Object_t * L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0027;
				}
			}

IL_0061:
			{
				IL2CPP_LEAVE(0x7B, FINALLY_0066);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t54 *)e.ex;
			goto FINALLY_0066;
		}

FINALLY_0066:
		{ // begin finally (depth: 2)
			{
				Object_t * L_17 = V_3;
				V_6 = ((Object_t *)IsInst(L_17, IDisposable_t56_il2cpp_TypeInfo_var));
				Object_t * L_18 = V_6;
				if (L_18)
				{
					goto IL_0073;
				}
			}

IL_0072:
			{
				IL2CPP_END_FINALLY(102)
			}

IL_0073:
			{
				Object_t * L_19 = V_6;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_19);
				IL2CPP_END_FINALLY(102)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(102)
		{
			IL2CPP_JUMP_TBL(0x7B, IL_007b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(128)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0087:
	{
		ArrayList_t64 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t38* L_22 = (ObjectU5BU5D_t38*)VirtFuncInvoker0< ObjectU5BU5D_t38* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_21);
		return L_22;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainData__ctor_m10304 (CrossAppDomainData_t1651 * __this, int32_t ___domainId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m10563(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::get_DomainID()
extern "C" int32_t CrossAppDomainData_get_DomainID_m10305 (CrossAppDomainData_t1651 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____DomainID_1);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::get_ProcessID()
extern "C" String_t* CrossAppDomainData_get_ProcessID_m10306 (CrossAppDomainData_t1651 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____processGuid_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"

// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C" void CrossAppDomainChannel__ctor_m10307 (CrossAppDomainChannel_t1652 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel__cctor_m10308 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1108);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m298(L_0, /*hidden argument*/NULL);
		((CrossAppDomainChannel_t1652_StaticFields*)CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern TypeInfo* CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m10309 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1108);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t1652 * V_1 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((CrossAppDomainChannel_t1652_StaticFields*)CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		CrossAppDomainChannel_t1652 * L_2 = (CrossAppDomainChannel_t1652 *)il2cpp_codegen_object_new (CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var);
		CrossAppDomainChannel__ctor_m10307(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		CrossAppDomainChannel_t1652 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m10299(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x24, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0024:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern Il2CppCodeGenString* _stringLiteral2125;
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m10310 (CrossAppDomainChannel_t1652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2125 = il2cpp_codegen_string_literal_from_index(2125);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral2125;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m10311 (CrossAppDomainChannel_t1652 * __this, const MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern TypeInfo* Thread_t1657_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainData_t1651_il2cpp_TypeInfo_var;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m10312 (CrossAppDomainChannel_t1652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		CrossAppDomainData_t1651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m11537(NULL /*static, unused*/, /*hidden argument*/NULL);
		CrossAppDomainData_t1651 * L_1 = (CrossAppDomainData_t1651 *)il2cpp_codegen_object_new (CrossAppDomainData_t1651_il2cpp_TypeInfo_var);
		CrossAppDomainData__ctor_m10304(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern "C" void CrossAppDomainChannel_StartListening_m10313 (CrossAppDomainChannel_t1652 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.CrossAppDomainChannel::CreateMessageSink(System.String,System.Object,System.String&)
extern TypeInfo* CrossAppDomainData_t1651_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1653_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2125;
extern Il2CppCodeGenString* _stringLiteral2126;
extern "C" Object_t * CrossAppDomainChannel_CreateMessageSink_m10314 (CrossAppDomainChannel_t1652 * __this, String_t* ___url, Object_t * ___data, String_t** ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainData_t1651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1109);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		CrossAppDomainSink_t1653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1110);
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2125 = il2cpp_codegen_string_literal_from_index(2125);
		_stringLiteral2126 = il2cpp_codegen_string_literal_from_index(2126);
		s_Il2CppMethodIntialized = true;
	}
	CrossAppDomainData_t1651 * V_0 = {0};
	{
		String_t** L_0 = ___uri;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		Object_t * L_1 = ___data;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Object_t * L_2 = ___data;
		V_0 = ((CrossAppDomainData_t1651 *)IsInst(L_2, CrossAppDomainData_t1651_il2cpp_TypeInfo_var));
		CrossAppDomainData_t1651 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		CrossAppDomainData_t1651 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = CrossAppDomainData_get_ProcessID_m10306(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		String_t* L_6 = RemotingConfiguration_get_ProcessId_m10563(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m400(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		CrossAppDomainData_t1651 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = CrossAppDomainData_get_DomainID_m10305(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1653_il2cpp_TypeInfo_var);
		CrossAppDomainSink_t1653 * L_10 = CrossAppDomainSink_GetSink_m10317(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0037:
	{
		String_t* L_11 = ___url;
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_12 = ___url;
		NullCheck(L_12);
		bool L_13 = String_StartsWith_m2087(L_12, _stringLiteral2125, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t45 * L_14 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_14, _stringLiteral2126, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0058:
	{
		return (Object_t *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.ctor(System.Int32)
extern "C" void CrossAppDomainSink__ctor_m10315 (CrossAppDomainSink_t1653 * __this, int32_t ___domainID, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___domainID;
		__this->____domainID_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern const Il2CppType* CrossAppDomainSink_t1653_0_0_0_var;
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1653_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2127;
extern "C" void CrossAppDomainSink__cctor_m10316 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t1653_0_0_0_var = il2cpp_codegen_type_from_index(1110);
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CrossAppDomainSink_t1653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1110);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral2127 = il2cpp_codegen_string_literal_from_index(2127);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t24 * L_0 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_0, /*hidden argument*/NULL);
		((CrossAppDomainSink_t1653_StaticFields*)CrossAppDomainSink_t1653_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(CrossAppDomainSink_t1653_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral2127, ((int32_t)40));
		((CrossAppDomainSink_t1653_StaticFields*)CrossAppDomainSink_t1653_il2cpp_TypeInfo_var->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainSink System.Runtime.Remoting.Channels.CrossAppDomainSink::GetSink(System.Int32)
extern TypeInfo* CrossAppDomainSink_t1653_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" CrossAppDomainSink_t1653 * CrossAppDomainSink_GetSink_m10317 (Object_t * __this /* static, unused */, int32_t ___domainID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t1653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1110);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainSink_t1653 * V_1 = {0};
	CrossAppDomainSink_t1653 * V_2 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1653_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((CrossAppDomainSink_t1653_StaticFields*)CrossAppDomainSink_t1653_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1653_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_3 = ((CrossAppDomainSink_t1653_StaticFields*)CrossAppDomainSink_t1653_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_4 = ___domainID;
			int32_t L_5 = L_4;
			Object_t * L_6 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_5);
			NullCheck(L_3);
			bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_3, L_6);
			if (!L_7)
			{
				goto IL_0041;
			}
		}

IL_0026:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1653_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_8 = ((CrossAppDomainSink_t1653_StaticFields*)CrossAppDomainSink_t1653_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_9 = ___domainID;
			int32_t L_10 = L_9;
			Object_t * L_11 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_10);
			NullCheck(L_8);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_11);
			V_2 = ((CrossAppDomainSink_t1653 *)Castclass(L_12, CrossAppDomainSink_t1653_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}

IL_0041:
		{
			int32_t L_13 = ___domainID;
			CrossAppDomainSink_t1653 * L_14 = (CrossAppDomainSink_t1653 *)il2cpp_codegen_object_new (CrossAppDomainSink_t1653_il2cpp_TypeInfo_var);
			CrossAppDomainSink__ctor_m10315(L_14, L_13, /*hidden argument*/NULL);
			V_1 = L_14;
			IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainSink_t1653_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_15 = ((CrossAppDomainSink_t1653_StaticFields*)CrossAppDomainSink_t1653_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0;
			int32_t L_16 = ___domainID;
			int32_t L_17 = L_16;
			Object_t * L_18 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_17);
			CrossAppDomainSink_t1653 * L_19 = V_1;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_18, L_19);
			CrossAppDomainSink_t1653 * L_20 = V_1;
			V_2 = L_20;
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}

IL_0060:
		{
			; // IL_0060: leave IL_006c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Object_t * L_21 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_006c:
	{
		CrossAppDomainSink_t1653 * L_22 = V_2;
		return L_22;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m10318 (CrossAppDomainSink_t1653 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderData.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.SinkProviderData
#include "mscorlib_System_Runtime_Remoting_Channels_SinkProviderDataMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Channels.SinkProviderData::.ctor(System.String)
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern "C" void SinkProviderData__ctor_m10319 (SinkProviderData_t1654 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___sinkName_0 = L_0;
		ArrayList_t64 * L_1 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_1, /*hidden argument*/NULL);
		__this->___children_1 = L_1;
		Hashtable_t24 * L_2 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_2, /*hidden argument*/NULL);
		__this->___properties_2 = L_2;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Channels.SinkProviderData::get_Children()
extern "C" Object_t * SinkProviderData_get_Children_m10320 (SinkProviderData_t1654 * __this, const MethodInfo* method)
{
	{
		ArrayList_t64 * L_0 = (__this->___children_1);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Channels.SinkProviderData::get_Properties()
extern "C" Object_t * SinkProviderData_get_Properties_m10321 (SinkProviderData_t1654 * __this, const MethodInfo* method)
{
	{
		Hashtable_t24 * L_0 = (__this->___properties_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"

// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t1655_il2cpp_TypeInfo_var;
extern "C" void Context__cctor_m10322 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Context_t1655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t24 * L_0 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_0, /*hidden argument*/NULL);
		((Context_t1655_StaticFields*)Context_t1655_il2cpp_TypeInfo_var->static_fields)->___namedSlots_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m10323 (Context_t1655 * __this, const MethodInfo* method)
{
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0xC, FINALLY_0005);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0005;
	}

FINALLY_0005:
	{ // begin finally (depth: 1)
		Object_Finalize_m5346(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(5)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(5)
	{
		IL2CPP_JUMP_TBL(0xC, IL_000c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_000c:
	{
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C" Context_t1655 * Context_get_DefaultContext_m10324 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t1655 * L_0 = AppDomain_InternalGetDefaultContext_m11614(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m10325 (Context_t1655 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t1982_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetProperty_m10326 (Context_t1655 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		IContextProperty_t1982_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1112);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t64 * L_0 = (__this->___context_properties_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000d:
	{
		ArrayList_t64 * L_1 = (__this->___context_properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001e:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t1982_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t1982_il2cpp_TypeInfo_var, L_5);
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m400(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			Object_t * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x66, FINALLY_0052);
		}

IL_0042:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001e;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_3 = ((Object_t *)IsInst(L_12, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_3;
			if (L_13)
			{
				goto IL_005d;
			}
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}

IL_005d:
		{
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0064:
	{
		return (Object_t *)NULL;
	}

IL_0066:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2128;
extern "C" String_t* Context_ToString_m10327 (Context_t1655 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral2128 = il2cpp_codegen_string_literal_from_index(2128);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___context_id_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2113(NULL /*static, unused*/, _stringLiteral2128, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern "C" void ContextAttribute__ctor_m10328 (ContextAttribute_t1647 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C" String_t* ContextAttribute_get_Name_m10329 (ContextAttribute_t1647 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern TypeInfo* ContextAttribute_t1647_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_Equals_m10330 (ContextAttribute_t1647 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextAttribute_t1647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1113);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	ContextAttribute_t1647 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___o;
		if (((ContextAttribute_t1647 *)IsInst(L_1, ContextAttribute_t1647_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		Object_t * L_2 = ___o;
		V_0 = ((ContextAttribute_t1647 *)Castclass(L_2, ContextAttribute_t1647_il2cpp_TypeInfo_var));
		ContextAttribute_t1647 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___AttributeName_0);
		String_t* L_5 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m443(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		return 1;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern "C" int32_t ContextAttribute_GetHashCode_m10331 (ContextAttribute_t1647 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
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
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = String_GetHashCode_m2091(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1979_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1285_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2129;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m10332 (ContextAttribute_t1647 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		IConstructionCallMessage_t1979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		IList_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		_stringLiteral2129 = il2cpp_codegen_string_literal_from_index(2129);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, _stringLiteral2129, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1285_il2cpp_TypeInfo_var, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t926_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1979_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2129;
extern Il2CppCodeGenString* _stringLiteral2130;
extern "C" bool ContextAttribute_IsContextOK_m10333 (ContextAttribute_t1647 * __this, Context_t1655 * ___ctx, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t926_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		IConstructionCallMessage_t1979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		_stringLiteral2129 = il2cpp_codegen_string_literal_from_index(2129);
		_stringLiteral2130 = il2cpp_codegen_string_literal_from_index(2130);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t926 * L_1 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_1, _stringLiteral2129, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Context_t1655 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t926 * L_3 = (ArgumentNullException_t926 *)il2cpp_codegen_object_new (ArgumentNullException_t926_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m5433(L_3, _stringLiteral2130, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_5);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Context_t1655 * L_7 = ___ctx;
		String_t* L_8 = (__this->___AttributeName_0);
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_7, L_8);
		V_0 = L_9;
		Object_t * L_10 = V_0;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		return 0;
	}

IL_0049:
	{
		Object_t * L_11 = V_0;
		if ((((Object_t*)(ContextAttribute_t1647 *)__this) == ((Object_t*)(Object_t *)L_11)))
		{
			goto IL_0052;
		}
	}
	{
		return 0;
	}

IL_0052:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
extern "C" void CrossContextChannel__ctor_m10334 (CrossContextChannel_t1649 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"

// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C" void SynchronizationAttribute__ctor_m10335 (SynchronizationAttribute_t1658 * __this, const MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m10336(__this, 8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern TypeInfo* Mutex_t1656_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2131;
extern Il2CppCodeGenString* _stringLiteral1020;
extern "C" void SynchronizationAttribute__ctor_m10336 (SynchronizationAttribute_t1658 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mutex_t1656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1115);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		_stringLiteral2131 = il2cpp_codegen_string_literal_from_index(2131);
		_stringLiteral1020 = il2cpp_codegen_string_literal_from_index(1020);
		s_Il2CppMethodIntialized = true;
	}
	{
		Mutex_t1656 * L_0 = (Mutex_t1656 *)il2cpp_codegen_object_new (Mutex_t1656_il2cpp_TypeInfo_var);
		Mutex__ctor_m11521(L_0, 0, /*hidden argument*/NULL);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m10328(__this, _stringLiteral2131, /*hidden argument*/NULL);
		int32_t L_1 = ___flag;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_2 = ___flag;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ___flag;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = ___flag;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_t626 * L_5 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_5, _stringLiteral1020, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003e:
	{
		bool L_6 = ___reEntrant;
		__this->____bReEntrant_1 = L_6;
		int32_t L_7 = ___flag;
		__this->____flavor_2 = L_7;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern TypeInfo* Thread_t1657_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_set_Locked_m10337 (SynchronizationAttribute_t1658 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1658 * V_0 = {0};
	SynchronizationAttribute_t1658 * V_1 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		Mutex_t1656 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		V_0 = __this;
		SynchronizationAttribute_t1658 * L_2 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->____lockCount_3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			SynchronizationAttribute_ReleaseLock_m10338(__this, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
			Thread_t1657 * L_5 = Thread_get_CurrentThread_m11536(NULL /*static, unused*/, /*hidden argument*/NULL);
			__this->____ownerThread_5 = L_5;
			IL2CPP_LEAVE(0x51, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1658 * L_6 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0051:
	{
		goto IL_00ab;
	}

IL_0056:
	{
		V_1 = __this;
		SynchronizationAttribute_t1658 * L_7 = V_1;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_005e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0083;
		}

IL_0063:
		{
			int32_t L_8 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			Mutex_t1656 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m11524(L_9, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1657 *)NULL;
		}

IL_0083:
		{
			int32_t L_10 = (__this->____lockCount_3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_009f;
			}
		}

IL_008f:
		{
			Thread_t1657 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
			Thread_t1657 * L_12 = Thread_get_CurrentThread_m11536(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(Thread_t1657 *)L_11) == ((Object_t*)(Thread_t1657 *)L_12)))
			{
				goto IL_0063;
			}
		}

IL_009f:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1658 * L_13 = V_1;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_00ab:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern TypeInfo* Thread_t1657_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ReleaseLock_m10338 (SynchronizationAttribute_t1658 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1658 * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t1658 * L_0 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_0044;
			}
		}

IL_0014:
		{
			Thread_t1657 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
			Thread_t1657 * L_3 = Thread_get_CurrentThread_m11536(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((Object_t*)(Thread_t1657 *)L_2) == ((Object_t*)(Thread_t1657 *)L_3))))
			{
				goto IL_0044;
			}
		}

IL_0024:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t1656 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m11524(L_5, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1657 *)NULL;
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t1658 * L_6 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* IConstructionCallMessage_t1979_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1285_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m10339 (SynchronizationAttribute_t1658 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConstructionCallMessage_t1979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		IList_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_1 = ___ctorMsg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1285_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0019:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* SynchronizationAttribute_t1658_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2131;
extern "C" bool SynchronizationAttribute_IsContextOK_m10340 (SynchronizationAttribute_t1658 * __this, Context_t1655 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationAttribute_t1658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		_stringLiteral2131 = il2cpp_codegen_string_literal_from_index(2131);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1658 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t1655 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_0, _stringLiteral2131);
		V_0 = ((SynchronizationAttribute_t1658 *)IsInst(L_1, SynchronizationAttribute_t1658_il2cpp_TypeInfo_var));
		int32_t L_2 = (__this->____flavor_2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_004a;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0056;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0056;
	}

IL_0045:
	{
		SynchronizationAttribute_t1658 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t1658 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_004a:
	{
		SynchronizationAttribute_t1658 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t1658 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0052:
	{
		return 0;
	}

IL_0054:
	{
		return 1;
	}

IL_0056:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern TypeInfo* Thread_t1657_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t1658_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2131;
extern "C" void SynchronizationAttribute_ExitContext_m10341 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		SynchronizationAttribute_t1658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		_stringLiteral2131 = il2cpp_codegen_string_literal_from_index(2131);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1658 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
		Context_t1655 * L_0 = Thread_get_CurrentContext_m11534(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m10325(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
		Context_t1655 * L_2 = Thread_get_CurrentContext_m11534(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, _stringLiteral2131);
		V_0 = ((SynchronizationAttribute_t1658 *)IsInst(L_3, SynchronizationAttribute_t1658_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t1658 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		SynchronizationAttribute_t1658 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern TypeInfo* Thread_t1657_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t1658_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2131;
extern "C" void SynchronizationAttribute_EnterContext_m10342 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(880);
		SynchronizationAttribute_t1658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1116);
		_stringLiteral2131 = il2cpp_codegen_string_literal_from_index(2131);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t1658 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
		Context_t1655 * L_0 = Thread_get_CurrentContext_m11534(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m10325(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1657_il2cpp_TypeInfo_var);
		Context_t1655 * L_2 = Thread_get_CurrentContext_m11534(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, _stringLiteral2131);
		V_0 = ((SynchronizationAttribute_t1658 *)IsInst(L_3, SynchronizationAttribute_t1658_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t1658 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}

IL_002c:
	{
		SynchronizationAttribute_t1658 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 1);
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManager.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern "C" void LeaseManager__ctor_m10343 (LeaseManager_t1660 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t64 * L_0 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_0, /*hidden argument*/NULL);
		__this->____objects_0 = L_0;
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
extern "C" void LeaseManager_SetPollTime_m10344 (LeaseManager_t1660 * __this, TimeSpan_t1235  ___timeSpan, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t64 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			Timer_t1659 * L_3 = (__this->____timer_1);
			if (!L_3)
			{
				goto IL_002b;
			}
		}

IL_001d:
		{
			Timer_t1659 * L_4 = (__this->____timer_1);
			TimeSpan_t1235  L_5 = ___timeSpan;
			TimeSpan_t1235  L_6 = ___timeSpan;
			NullCheck(L_4);
			Timer_Change_m11581(L_4, L_5, L_6, /*hidden argument*/NULL);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Object_t * L_7 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0037:
	{
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern TypeInfo* LeaseManager_t1660_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t1661_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1235_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices__cctor_m10345 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseManager_t1660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1117);
		LifetimeServices_t1661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		TimeSpan_t1235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(805);
		s_Il2CppMethodIntialized = true;
	}
	{
		LeaseManager_t1660 * L_0 = (LeaseManager_t1660 *)il2cpp_codegen_object_new (LeaseManager_t1660_il2cpp_TypeInfo_var);
		LeaseManager__ctor_m10343(L_0, /*hidden argument*/NULL);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1235_il2cpp_TypeInfo_var);
		TimeSpan_t1235  L_1 = TimeSpan_FromSeconds_m12323(NULL /*static, unused*/, (10.0), /*hidden argument*/NULL);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_1;
		TimeSpan_t1235  L_2 = TimeSpan_FromMinutes_m12322(NULL /*static, unused*/, (5.0), /*hidden argument*/NULL);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_2;
		TimeSpan_t1235  L_3 = TimeSpan_FromMinutes_m12322(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_3;
		TimeSpan_t1235  L_4 = TimeSpan_FromMinutes_m12322(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1661_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_LeaseManagerPollTime_m10346 (Object_t * __this /* static, unused */, TimeSpan_t1235  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t1235  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1661_il2cpp_TypeInfo_var);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_0;
		LeaseManager_t1660 * L_1 = ((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4;
		TimeSpan_t1235  L_2 = ___value;
		NullCheck(L_1);
		LeaseManager_SetPollTime_m10344(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1661_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_LeaseTime_m10347 (Object_t * __this /* static, unused */, TimeSpan_t1235  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t1235  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1661_il2cpp_TypeInfo_var);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_RenewOnCallTime(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1661_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_RenewOnCallTime_m10348 (Object_t * __this /* static, unused */, TimeSpan_t1235  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t1235  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1661_il2cpp_TypeInfo_var);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_SponsorshipTimeout(System.TimeSpan)
extern TypeInfo* LifetimeServices_t1661_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_set_SponsorshipTimeout_m10349 (Object_t * __this /* static, unused */, TimeSpan_t1235  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t1661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimeSpan_t1235  L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1661_il2cpp_TypeInfo_var);
		((LifetimeServices_t1661_StaticFields*)LifetimeServices_t1661_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern TypeInfo* Int32U5BU5D_t195_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m10350 (ArgInfo_t1663 * __this, MethodBase_t961 * ___method, uint8_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(143);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t951* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		MethodBase_t961 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t961 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t951* L_2 = (ParameterInfoU5BU5D_t951*)VirtFuncInvoker0< ParameterInfoU5BU5D_t951* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t951* L_3 = V_0;
		NullCheck(L_3);
		__this->____paramMap_0 = ((Int32U5BU5D_t195*)SZArrayNew(Int32U5BU5D_t195_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		uint8_t L_4 = ___type;
		if (L_4)
		{
			goto IL_0078;
		}
	}
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_003b:
	{
		ParameterInfoU5BU5D_t951* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_5, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_5, L_7)));
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_8);
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t195* L_10 = (__this->____paramMap_0);
		int32_t L_11 = (__this->____inoutArgCount_1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13)) = (int32_t)L_14;
	}

IL_0066:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_16 = V_1;
		ParameterInfoU5BU5D_t951* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00c4;
	}

IL_0078:
	{
		V_2 = 0;
		goto IL_00bb;
	}

IL_007f:
	{
		ParameterInfoU5BU5D_t951* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_18, L_20)));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_21);
		if (L_22)
		{
			goto IL_009e;
		}
	}
	{
		ParameterInfoU5BU5D_t951* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_23, L_25)));
		bool L_26 = ParameterInfo_get_IsOut_m10214((*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b7;
		}
	}

IL_009e:
	{
		Int32U5BU5D_t195* L_27 = (__this->____paramMap_0);
		int32_t L_28 = (__this->____inoutArgCount_1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30)) = (int32_t)L_31;
	}

IL_00b7:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00bb:
	{
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_t951* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_00c4:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t38* ArgInfo_GetInOutArgs_m10351 (ArgInfo_t1663 * __this, ObjectU5BU5D_t38* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t38* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0024;
	}

IL_0013:
	{
		ObjectU5BU5D_t38* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t38* L_3 = ___args;
		Int32U5BU5D_t195* L_4 = (__this->____paramMap_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->____inoutArgCount_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t38* L_11 = V_0;
		return L_11;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"

// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C" void AsyncResult__ctor_m10352 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C" Object_t * AsyncResult_get_AsyncState_m10353 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern TypeInfo* ManualResetEvent_t1079_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t1131 * AsyncResult_get_AsyncWaitHandle_m10354 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t1079_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(713);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t1668 * V_0 = {0};
	WaitHandle_t1131 * V_1 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1668 * L_0 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t1131 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0024;
			}
		}

IL_0013:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t1079 * L_3 = (ManualResetEvent_t1079 *)il2cpp_codegen_object_new (ManualResetEvent_t1079_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m6532(L_3, L_2, /*hidden argument*/NULL);
			__this->___handle_1 = L_3;
		}

IL_0024:
		{
			WaitHandle_t1131 * L_4 = (__this->___handle_1);
			V_1 = L_4;
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}

IL_0030:
		{
			; // IL_0030: leave IL_003c
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		AsyncResult_t1668 * L_5 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_003c:
	{
		WaitHandle_t1131 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C" bool AsyncResult_get_CompletedSynchronously_m10355 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C" bool AsyncResult_get_IsCompleted_m10356 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C" bool AsyncResult_get_EndInvokeCalled_m10357 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C" void AsyncResult_set_EndInvokeCalled_m10358 (AsyncResult_t1668 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m10359 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C" Object_t * AsyncResult_get_NextSink_m10360 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m10361 (AsyncResult_t1668 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method)
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
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C" Object_t * AsyncResult_GetReplyMessage_m10362 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C" void AsyncResult_SetMessageCtrl_m10363 (AsyncResult_t1668 * __this, Object_t * ___mc, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C" void AsyncResult_SetCompletedSynchronously_m10364 (AsyncResult_t1668 * __this, bool ___completed, const MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C" Object_t * AsyncResult_EndInvoke_m10365 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	AsyncResult_t1668 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t1668 * L_0 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->___completed_6);
			if (!L_1)
			{
				goto IL_001f;
			}
		}

IL_0013:
		{
			Object_t * L_2 = (__this->___reply_message_14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x3E, FINALLY_0024);
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2B, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		AsyncResult_t1668 * L_3 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_002b:
	{
		WaitHandle_t1131 * L_4 = (WaitHandle_t1131 *)VirtFuncInvoker0< WaitHandle_t1131 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		Object_t * L_5 = (__this->___reply_message_14);
		return L_5;
	}

IL_003e:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern TypeInfo* ManualResetEvent_t1079_il2cpp_TypeInfo_var;
extern TypeInfo* AsyncCallback_t14_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m10366 (AsyncResult_t1668 * __this, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t1079_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(713);
		AsyncCallback_t14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(715);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t1668 * V_0 = {0};
	AsyncCallback_t14 * V_1 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___msg;
		__this->___reply_message_14 = L_0;
		V_0 = __this;
		AsyncResult_t1668 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t1131 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_0032;
			}
		}

IL_0021:
		{
			WaitHandle_t1131 * L_3 = (WaitHandle_t1131 *)VirtFuncInvoker0< WaitHandle_t1131 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
			NullCheck(((ManualResetEvent_t1079 *)Castclass(L_3, ManualResetEvent_t1079_il2cpp_TypeInfo_var)));
			EventWaitHandle_Set_m6533(((ManualResetEvent_t1079 *)Castclass(L_3, ManualResetEvent_t1079_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x3E, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		AsyncResult_t1668 * L_4 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_003e:
	{
		Object_t * L_5 = (__this->___async_callback_8);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_6 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t14 *)Castclass(L_6, AsyncCallback_t14_il2cpp_TypeInfo_var));
		AsyncCallback_t14 * L_7 = V_1;
		NullCheck(L_7);
		AsyncCallback_Invoke_m8360(L_7, __this, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C" MonoMethodMessage_t1665 * AsyncResult_get_CallMessage_m10367 (AsyncResult_t1668 * __this, const MethodInfo* method)
{
	{
		MonoMethodMessage_t1665 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C" void AsyncResult_set_CallMessage_m10368 (AsyncResult_t1668 * __this, MonoMethodMessage_t1665 * ___value, const MethodInfo* method)
{
	{
		MonoMethodMessage_t1665 * L_0 = ___value;
		__this->___call_message_12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m10369 (ConstructionCall_t1669 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		MethodCall__ctor_m10399(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->____activationType_14 = L_0;
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_1);
		__this->____activationTypeName_15 = L_2;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall__ctor_m10370 (ConstructionCall_t1669 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t900 * L_0 = ___info;
		StreamingContext_t901  L_1 = ___context;
		MethodCall__ctor_m10398(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern TypeInfo* ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_InitDictionary_m10371 (ConstructionCall_t1669 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCallDictionary_t1671 * V_0 = {0};
	{
		ConstructionCallDictionary_t1671 * L_0 = (ConstructionCallDictionary_t1671 *)il2cpp_codegen_object_new (ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var);
		ConstructionCallDictionary__ctor_m10383(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConstructionCallDictionary_t1671 * L_1 = V_0;
		((MethodCall_t1670 *)__this)->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t1671 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m10430(L_2, /*hidden argument*/NULL);
		((MethodCall_t1670 *)__this)->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m10372 (ConstructionCall_t1669 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ConstructionCall_get_ActivationType_m10373 (ConstructionCall_t1669 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m8279(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->____activationType_14 = L_2;
	}

IL_001c:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m10374 (ConstructionCall_t1669 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m10375 (ConstructionCall_t1669 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m10376 (ConstructionCall_t1669 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t38* ConstructionCall_get_CallSiteActivationAttributes_m10377 (ConstructionCall_t1669 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t38* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m10378 (ConstructionCall_t1669 * __this, ObjectU5BU5D_t38* ___attributes, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t38* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m10379 (ConstructionCall_t1669 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t64 * L_1 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_1, /*hidden argument*/NULL);
		__this->____contextProperties_13 = L_1;
	}

IL_0016:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCall_t1669_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t1640_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2132;
extern Il2CppCodeGenString* _stringLiteral2133;
extern Il2CppCodeGenString* _stringLiteral2134;
extern Il2CppCodeGenString* _stringLiteral2135;
extern Il2CppCodeGenString* _stringLiteral2136;
extern "C" void ConstructionCall_InitMethodProperty_m10380 (ConstructionCall_t1669 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t1669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1095);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		IActivator_t1640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		IList_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral2132 = il2cpp_codegen_string_literal_from_index(2132);
		_stringLiteral2133 = il2cpp_codegen_string_literal_from_index(2133);
		_stringLiteral2134 = il2cpp_codegen_string_literal_from_index(2134);
		_stringLiteral2135 = il2cpp_codegen_string_literal_from_index(2135);
		_stringLiteral2136 = il2cpp_codegen_string_literal_from_index(2136);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t33 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cd;
		}
	}
	{
		Dictionary_2_t33 * L_2 = ((ConstructionCall_t1669_StaticFields*)ConstructionCall_t1669_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t33 * L_3 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t33 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2132, 0);
		Dictionary_2_t33 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2133, 1);
		Dictionary_2_t33 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2134, 2);
		Dictionary_2_t33 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2135, 3);
		Dictionary_2_t33 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2136, 4);
		Dictionary_2_t33 * L_9 = V_1;
		((ConstructionCall_t1669_StaticFields*)ConstructionCall_t1669_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17 = L_9;
	}

IL_005b:
	{
		Dictionary_2_t33 * L_10 = ((ConstructionCall_t1669_StaticFields*)ConstructionCall_t1669_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_0099;
		}
		if (L_13 == 2)
		{
			goto IL_00a6;
		}
		if (L_13 == 3)
		{
			goto IL_00b3;
		}
		if (L_13 == 4)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_00cd;
	}

IL_008c:
	{
		Object_t * L_14 = ___value;
		__this->____activator_11 = ((Object_t *)Castclass(L_14, IActivator_t1640_il2cpp_TypeInfo_var));
		return;
	}

IL_0099:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t38*)Castclass(L_15, ObjectU5BU5D_t38_il2cpp_TypeInfo_var));
		return;
	}

IL_00a6:
	{
		Object_t * L_16 = ___value;
		__this->____activationType_14 = ((Type_t *)Castclass(L_16, Type_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b3:
	{
		Object_t * L_17 = ___value;
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, IList_t1285_il2cpp_TypeInfo_var));
		return;
	}

IL_00c0:
	{
		Object_t * L_18 = ___value;
		__this->____activationTypeName_15 = ((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		String_t* L_19 = ___key;
		Object_t * L_20 = ___value;
		MethodCall_InitMethodProperty_m10401(__this, L_19, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2132;
extern Il2CppCodeGenString* _stringLiteral2133;
extern Il2CppCodeGenString* _stringLiteral2134;
extern Il2CppCodeGenString* _stringLiteral2135;
extern Il2CppCodeGenString* _stringLiteral2136;
extern "C" void ConstructionCall_GetObjectData_m10381 (ConstructionCall_t1669 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		_stringLiteral2132 = il2cpp_codegen_string_literal_from_index(2132);
		_stringLiteral2133 = il2cpp_codegen_string_literal_from_index(2133);
		_stringLiteral2134 = il2cpp_codegen_string_literal_from_index(2134);
		_stringLiteral2135 = il2cpp_codegen_string_literal_from_index(2135);
		_stringLiteral2136 = il2cpp_codegen_string_literal_from_index(2136);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		SerializationInfo_t900 * L_0 = ___info;
		StreamingContext_t901  L_1 = ___context;
		MethodCall_GetObjectData_m10402(__this, L_0, L_1, /*hidden argument*/NULL);
		Object_t * L_2 = (__this->____contextProperties_13);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t1326_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_0022:
	{
		SerializationInfo_t900 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m6487(L_6, _stringLiteral2132, L_7, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_8 = ___info;
		ObjectU5BU5D_t38* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m6487(L_8, _stringLiteral2133, (Object_t *)(Object_t *)L_9, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m6487(L_10, _stringLiteral2134, NULL, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m6487(L_11, _stringLiteral2135, L_12, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m6487(L_13, _stringLiteral2136, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m10382 (ConstructionCall_t1669 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m10408(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__ctor_m10383 (ConstructionCallDictionary_t1671 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m10426(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var);
		StringU5BU5D_t284* L_1 = ((ConstructionCallDictionary_t1671_StaticFields*)ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m10428(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t284_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2137;
extern Il2CppCodeGenString* _stringLiteral2138;
extern Il2CppCodeGenString* _stringLiteral2139;
extern Il2CppCodeGenString* _stringLiteral2140;
extern Il2CppCodeGenString* _stringLiteral2141;
extern Il2CppCodeGenString* _stringLiteral2142;
extern Il2CppCodeGenString* _stringLiteral2133;
extern Il2CppCodeGenString* _stringLiteral2134;
extern Il2CppCodeGenString* _stringLiteral2135;
extern Il2CppCodeGenString* _stringLiteral2132;
extern Il2CppCodeGenString* _stringLiteral2136;
extern "C" void ConstructionCallDictionary__cctor_m10384 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		_stringLiteral2137 = il2cpp_codegen_string_literal_from_index(2137);
		_stringLiteral2138 = il2cpp_codegen_string_literal_from_index(2138);
		_stringLiteral2139 = il2cpp_codegen_string_literal_from_index(2139);
		_stringLiteral2140 = il2cpp_codegen_string_literal_from_index(2140);
		_stringLiteral2141 = il2cpp_codegen_string_literal_from_index(2141);
		_stringLiteral2142 = il2cpp_codegen_string_literal_from_index(2142);
		_stringLiteral2133 = il2cpp_codegen_string_literal_from_index(2133);
		_stringLiteral2134 = il2cpp_codegen_string_literal_from_index(2134);
		_stringLiteral2135 = il2cpp_codegen_string_literal_from_index(2135);
		_stringLiteral2132 = il2cpp_codegen_string_literal_from_index(2132);
		_stringLiteral2136 = il2cpp_codegen_string_literal_from_index(2136);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t284* L_0 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral2137);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral2137;
		StringU5BU5D_t284* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral2138);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)_stringLiteral2138;
		StringU5BU5D_t284* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral2139);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)_stringLiteral2139;
		StringU5BU5D_t284* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral2140);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)_stringLiteral2140;
		StringU5BU5D_t284* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral2141);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)_stringLiteral2141;
		StringU5BU5D_t284* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral2142);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)_stringLiteral2142;
		StringU5BU5D_t284* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral2133);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)_stringLiteral2133;
		StringU5BU5D_t284* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, _stringLiteral2134);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)_stringLiteral2134;
		StringU5BU5D_t284* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, _stringLiteral2135);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)_stringLiteral2135;
		StringU5BU5D_t284* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, _stringLiteral2132);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)_stringLiteral2132;
		StringU5BU5D_t284* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, _stringLiteral2136);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)_stringLiteral2136;
		((ConstructionCallDictionary_t1671_StaticFields*)ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern TypeInfo* ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1979_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2132;
extern Il2CppCodeGenString* _stringLiteral2133;
extern Il2CppCodeGenString* _stringLiteral2134;
extern Il2CppCodeGenString* _stringLiteral2135;
extern Il2CppCodeGenString* _stringLiteral2136;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m10385 (ConstructionCallDictionary_t1671 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		IConstructionCallMessage_t1979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral2132 = il2cpp_codegen_string_literal_from_index(2132);
		_stringLiteral2133 = il2cpp_codegen_string_literal_from_index(2133);
		_stringLiteral2134 = il2cpp_codegen_string_literal_from_index(2134);
		_stringLiteral2135 = il2cpp_codegen_string_literal_from_index(2135);
		_stringLiteral2136 = il2cpp_codegen_string_literal_from_index(2136);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t33 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00e1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var);
		Dictionary_2_t33 * L_2 = ((ConstructionCallDictionary_t1671_StaticFields*)ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t33 * L_3 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t33 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2132, 0);
		Dictionary_2_t33 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2133, 1);
		Dictionary_2_t33 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2134, 2);
		Dictionary_2_t33 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2135, 3);
		Dictionary_2_t33 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2136, 4);
		Dictionary_2_t33 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t1671_StaticFields*)ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var);
		Dictionary_2_t33 * L_10 = ((ConstructionCallDictionary_t1671_StaticFields*)ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00e1;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_008c;
		}
		if (L_13 == 1)
		{
			goto IL_009d;
		}
		if (L_13 == 2)
		{
			goto IL_00ae;
		}
		if (L_13 == 3)
		{
			goto IL_00bf;
		}
		if (L_13 == 4)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00e1;
	}

IL_008c:
	{
		Object_t * L_14 = (((MethodDictionary_t1672 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.IConstructionCallMessage::get_Activator() */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_14, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_009d:
	{
		Object_t * L_16 = (((MethodDictionary_t1672 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t38* L_17 = (ObjectU5BU5D_t38*)InterfaceFuncInvoker0< ObjectU5BU5D_t38* >::Invoke(4 /* System.Object[] System.Runtime.Remoting.Activation.IConstructionCallMessage::get_CallSiteActivationAttributes() */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_16, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		return (Object_t *)L_17;
	}

IL_00ae:
	{
		Object_t * L_18 = (((MethodDictionary_t1672 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		return L_19;
	}

IL_00bf:
	{
		Object_t * L_20 = (((MethodDictionary_t1672 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_20, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		return L_21;
	}

IL_00d0:
	{
		Object_t * L_22 = (((MethodDictionary_t1672 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationTypeName() */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_22, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		return L_23;
	}

IL_00e1:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m10434(__this, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t1979_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t1640_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2132;
extern Il2CppCodeGenString* _stringLiteral2133;
extern Il2CppCodeGenString* _stringLiteral2134;
extern Il2CppCodeGenString* _stringLiteral2135;
extern Il2CppCodeGenString* _stringLiteral2136;
extern Il2CppCodeGenString* _stringLiteral2143;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m10386 (ConstructionCallDictionary_t1671 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1119);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		IConstructionCallMessage_t1979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1114);
		IActivator_t1640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1120);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral2132 = il2cpp_codegen_string_literal_from_index(2132);
		_stringLiteral2133 = il2cpp_codegen_string_literal_from_index(2133);
		_stringLiteral2134 = il2cpp_codegen_string_literal_from_index(2134);
		_stringLiteral2135 = il2cpp_codegen_string_literal_from_index(2135);
		_stringLiteral2136 = il2cpp_codegen_string_literal_from_index(2136);
		_stringLiteral2143 = il2cpp_codegen_string_literal_from_index(2143);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t33 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var);
		Dictionary_2_t33 * L_2 = ((ConstructionCallDictionary_t1671_StaticFields*)ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t33 * L_3 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t33 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2132, 0);
		Dictionary_2_t33 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2133, 1);
		Dictionary_2_t33 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2134, 1);
		Dictionary_2_t33 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2135, 1);
		Dictionary_2_t33 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2136, 1);
		Dictionary_2_t33 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t1671_StaticFields*)ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var);
		Dictionary_2_t33 * L_10 = ((ConstructionCallDictionary_t1671_StaticFields*)ConstructionCallDictionary_t1671_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00a5;
	}

IL_007f:
	{
		Object_t * L_15 = (((MethodDictionary_t1672 *)__this)->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< Object_t * >::Invoke(3 /* System.Void System.Runtime.Remoting.Activation.IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_15, IConstructionCallMessage_t1979_il2cpp_TypeInfo_var)), ((Object_t *)Castclass(L_16, IActivator_t1640_il2cpp_TypeInfo_var)));
		goto IL_00b2;
	}

IL_009a:
	{
		ArgumentException_t626 * L_17 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_17, _stringLiteral2143, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00a5:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m10435(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_00b2:
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern "C" void EnvoyTerminatorSink__ctor_m10387 (EnvoyTerminatorSink_t1673 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern TypeInfo* EnvoyTerminatorSink_t1673_il2cpp_TypeInfo_var;
extern "C" void EnvoyTerminatorSink__cctor_m10388 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t1673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnvoyTerminatorSink_t1673 * L_0 = (EnvoyTerminatorSink_t1673 *)il2cpp_codegen_object_new (EnvoyTerminatorSink_t1673_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink__ctor_m10387(L_0, /*hidden argument*/NULL);
		((EnvoyTerminatorSink_t1673_StaticFields*)EnvoyTerminatorSink_t1673_il2cpp_TypeInfo_var->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern "C" void Header__ctor_m10389 (Header_t1674 * __this, String_t* ____Name, Object_t * ____Value, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m10390(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m10390 (Header_t1674 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m10391(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m10391 (Header_t1674 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		String_t* L_0 = ____Name;
		__this->___Name_2 = L_0;
		Object_t * L_1 = ____Value;
		__this->___Value_3 = L_1;
		bool L_2 = ____MustUnderstand;
		__this->___MustUnderstand_1 = L_2;
		String_t* L_3 = ____HeaderNamespace;
		__this->___HeaderNamespace_0 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern TypeInfo* CallContextRemotingData_t1675_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m10392 (LogicalCallContext_t1676 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t1675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		s_Il2CppMethodIntialized = true;
	}
	{
		CallContextRemotingData_t1675 * L_0 = (CallContextRemotingData_t1675 *)il2cpp_codegen_object_new (CallContextRemotingData_t1675_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m10396(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* CallContextRemotingData_t1675_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2144;
extern "C" void LogicalCallContext__ctor_m10393 (LogicalCallContext_t1676 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t1675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1122);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral2144 = il2cpp_codegen_string_literal_from_index(2144);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t1757  V_0 = {0};
	SerializationInfoEnumerator_t1759 * V_1 = {0};
	{
		CallContextRemotingData_t1675 * L_0 = (CallContextRemotingData_t1675 *)il2cpp_codegen_object_new (CallContextRemotingData_t1675_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m10396(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t1759 * L_2 = SerializationInfo_GetEnumerator_m10788(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0065;
	}

IL_001d:
	{
		SerializationInfoEnumerator_t1759 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t1757  L_4 = SerializationInfoEnumerator_get_Current_m10796(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m10782((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m400(NULL /*static, unused*/, L_5, _stringLiteral2144, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m10783((&V_0), /*hidden argument*/NULL);
		__this->____remotingData_1 = ((CallContextRemotingData_t1675 *)Castclass(L_7, CallContextRemotingData_t1675_il2cpp_TypeInfo_var));
		goto IL_0065;
	}

IL_0051:
	{
		String_t* L_8 = SerializationEntry_get_Name_m10782((&V_0), /*hidden argument*/NULL);
		Object_t * L_9 = SerializationEntry_get_Value_m10783((&V_0), /*hidden argument*/NULL);
		LogicalCallContext_SetData_m10395(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0065:
	{
		SerializationInfoEnumerator_t1759 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = SerializationInfoEnumerator_MoveNext_m10799(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t65_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2144;
extern "C" void LogicalCallContext_GetObjectData_m10394 (LogicalCallContext_t1676 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		DictionaryEntry_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral2144 = il2cpp_codegen_string_literal_from_index(2144);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t65  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t900 * L_0 = ___info;
		CallContextRemotingData_t1675 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m6487(L_0, _stringLiteral2144, L_1, /*hidden argument*/NULL);
		Hashtable_t24 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		Hashtable_t24 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_002d:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_5);
			V_0 = ((*(DictionaryEntry_t65 *)((DictionaryEntry_t65 *)UnBox (L_6, DictionaryEntry_t65_il2cpp_TypeInfo_var))));
			SerializationInfo_t900 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m432((&V_0), /*hidden argument*/NULL);
			Object_t * L_9 = DictionaryEntry_get_Value_m433((&V_0), /*hidden argument*/NULL);
			NullCheck(L_7);
			SerializationInfo_AddValue_m6487(L_7, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		}

IL_0052:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_002d;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_006d;
			}
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(98)
		}

IL_006d:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(98)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0074:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_SetData_m10395 (LogicalCallContext_t1676 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t24 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t24 * L_1 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_1, /*hidden argument*/NULL);
		__this->____data_0 = L_1;
	}

IL_0016:
	{
		Hashtable_t24 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
extern "C" void CallContextRemotingData__ctor_m10396 (CallContextRemotingData_t1675 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern "C" void MethodCall__ctor_m10397 (MethodCall_t1670 * __this, HeaderU5BU5D_t1945* ___h1, const MethodInfo* method)
{
	Header_t1674 * V_0 = {0};
	HeaderU5BU5D_t1945* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		HeaderU5BU5D_t1945* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		HeaderU5BU5D_t1945* L_1 = ___h1;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		HeaderU5BU5D_t1945* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_003e;
	}

IL_0024:
	{
		HeaderU5BU5D_t1945* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t1674 **)(Header_t1674 **)SZArrayLdElema(L_3, L_5));
		Header_t1674 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t1674 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t1945* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		MethodCall_ResolveMethod_m10414(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall__ctor_m10398 (MethodCall_t1670 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	SerializationEntry_t1757  V_0 = {0};
	SerializationInfoEnumerator_t1759 * V_1 = {0};
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		SerializationInfo_t900 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1759 * L_1 = SerializationInfo_GetEnumerator_m10788(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0033;
	}

IL_0018:
	{
		SerializationInfoEnumerator_t1759 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t1757  L_3 = SerializationInfoEnumerator_get_Current_m10796(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m10782((&V_0), /*hidden argument*/NULL);
		Object_t * L_5 = SerializationEntry_get_Value_m10783((&V_0), /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_4, L_5);
	}

IL_0033:
	{
		SerializationInfoEnumerator_t1759 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = SerializationInfoEnumerator_MoveNext_m10799(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m10399 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m10400 (MethodCall_t1670 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* MethodCall_t1670_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* LogicalCallContext_t1676_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2139;
extern Il2CppCodeGenString* _stringLiteral2138;
extern Il2CppCodeGenString* _stringLiteral2140;
extern Il2CppCodeGenString* _stringLiteral2141;
extern Il2CppCodeGenString* _stringLiteral2142;
extern Il2CppCodeGenString* _stringLiteral2137;
extern Il2CppCodeGenString* _stringLiteral2145;
extern "C" void MethodCall_InitMethodProperty_m10401 (MethodCall_t1670 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCall_t1670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1123);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		LogicalCallContext_t1676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral2139 = il2cpp_codegen_string_literal_from_index(2139);
		_stringLiteral2138 = il2cpp_codegen_string_literal_from_index(2138);
		_stringLiteral2140 = il2cpp_codegen_string_literal_from_index(2140);
		_stringLiteral2141 = il2cpp_codegen_string_literal_from_index(2141);
		_stringLiteral2142 = il2cpp_codegen_string_literal_from_index(2142);
		_stringLiteral2137 = il2cpp_codegen_string_literal_from_index(2137);
		_stringLiteral2145 = il2cpp_codegen_string_literal_from_index(2145);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t33 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0107;
		}
	}
	{
		Dictionary_2_t33 * L_2 = ((MethodCall_t1670_StaticFields*)MethodCall_t1670_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		if (L_2)
		{
			goto IL_0073;
		}
	}
	{
		Dictionary_2_t33 * L_3 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t33 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2139, 0);
		Dictionary_2_t33 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2138, 1);
		Dictionary_2_t33 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2140, 2);
		Dictionary_2_t33 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2141, 3);
		Dictionary_2_t33 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2142, 4);
		Dictionary_2_t33 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2137, 5);
		Dictionary_2_t33 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2145, 6);
		Dictionary_2_t33 * L_11 = V_1;
		((MethodCall_t1670_StaticFields*)MethodCall_t1670_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10 = L_11;
	}

IL_0073:
	{
		Dictionary_2_t33 * L_12 = ((MethodCall_t1670_StaticFields*)MethodCall_t1670_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00ac;
		}
		if (L_15 == 1)
		{
			goto IL_00b9;
		}
		if (L_15 == 2)
		{
			goto IL_00c6;
		}
		if (L_15 == 3)
		{
			goto IL_00d3;
		}
		if (L_15 == 4)
		{
			goto IL_00e0;
		}
		if (L_15 == 5)
		{
			goto IL_00ed;
		}
		if (L_15 == 6)
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0107;
	}

IL_00ac:
	{
		Object_t * L_16 = ___value;
		__this->____typeName_1 = ((String_t*)Castclass(L_16, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b9:
	{
		Object_t * L_17 = ___value;
		__this->____methodName_2 = ((String_t*)Castclass(L_17, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00c6:
	{
		Object_t * L_18 = ___value;
		__this->____methodSignature_4 = ((TypeU5BU5D_t793*)Castclass(L_18, TypeU5BU5D_t793_il2cpp_TypeInfo_var));
		return;
	}

IL_00d3:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t38*)Castclass(L_19, ObjectU5BU5D_t38_il2cpp_TypeInfo_var));
		return;
	}

IL_00e0:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t1676 *)Castclass(L_20, LogicalCallContext_t1676_il2cpp_TypeInfo_var));
		return;
	}

IL_00ed:
	{
		Object_t * L_21 = ___value;
		__this->____uri_0 = ((String_t*)Castclass(L_21, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00fa:
	{
		Object_t * L_22 = ___value;
		__this->____genericArguments_7 = ((TypeU5BU5D_t793*)Castclass(L_22, TypeU5BU5D_t793_il2cpp_TypeInfo_var));
		return;
	}

IL_0107:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties() */, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1260_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t65_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2139;
extern Il2CppCodeGenString* _stringLiteral2138;
extern Il2CppCodeGenString* _stringLiteral2140;
extern Il2CppCodeGenString* _stringLiteral2141;
extern Il2CppCodeGenString* _stringLiteral2142;
extern Il2CppCodeGenString* _stringLiteral2137;
extern Il2CppCodeGenString* _stringLiteral2145;
extern "C" void MethodCall_GetObjectData_m10402 (MethodCall_t1670 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		DictionaryEntry_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		_stringLiteral2139 = il2cpp_codegen_string_literal_from_index(2139);
		_stringLiteral2138 = il2cpp_codegen_string_literal_from_index(2138);
		_stringLiteral2140 = il2cpp_codegen_string_literal_from_index(2140);
		_stringLiteral2141 = il2cpp_codegen_string_literal_from_index(2141);
		_stringLiteral2142 = il2cpp_codegen_string_literal_from_index(2142);
		_stringLiteral2137 = il2cpp_codegen_string_literal_from_index(2137);
		_stringLiteral2145 = il2cpp_codegen_string_literal_from_index(2145);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t65  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t900 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m6487(L_0, _stringLiteral2139, L_1, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m6487(L_2, _stringLiteral2138, L_3, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_4 = ___info;
		TypeU5BU5D_t793* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m6487(L_4, _stringLiteral2140, (Object_t *)(Object_t *)L_5, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_6 = ___info;
		ObjectU5BU5D_t38* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m6487(L_6, _stringLiteral2141, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_8 = ___info;
		LogicalCallContext_t1676 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m6487(L_8, _stringLiteral2142, L_9, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m6487(L_10, _stringLiteral2137, L_11, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_12 = ___info;
		TypeU5BU5D_t793* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m6487(L_12, _stringLiteral2145, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00da;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1260_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_008e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b8;
		}

IL_0093:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t65 *)((DictionaryEntry_t65 *)UnBox (L_18, DictionaryEntry_t65_il2cpp_TypeInfo_var))));
			SerializationInfo_t900 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m432((&V_0), /*hidden argument*/NULL);
			Object_t * L_21 = DictionaryEntry_get_Value_m433((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			SerializationInfo_AddValue_m6487(L_19, ((String_t*)Castclass(L_20, String_t_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
		}

IL_00b8:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0093;
			}
		}

IL_00c3:
		{
			IL2CPP_LEAVE(0xDA, FINALLY_00c8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_00c8;
	}

FINALLY_00c8:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00d3;
			}
		}

IL_00d2:
		{
			IL2CPP_END_FINALLY(200)
		}

IL_00d3:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(200)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(200)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_00da:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C" ObjectU5BU5D_t38* MethodCall_get_Args_m10403 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t38* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t1676_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t1676 * MethodCall_get_LogicalCallContext_m10404 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t1676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t1676 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		LogicalCallContext_t1676 * L_1 = (LogicalCallContext_t1676 *)il2cpp_codegen_object_new (LogicalCallContext_t1676_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m10392(L_1, /*hidden argument*/NULL);
		__this->____callContext_6 = L_1;
	}

IL_0016:
	{
		LogicalCallContext_t1676 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t961 * MethodCall_get_MethodBase_m10405 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	{
		MethodBase_t961 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		MethodCall_ResolveMethod_m10414(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		MethodBase_t961 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C" String_t* MethodCall_get_MethodName_m10406 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		MethodBase_t961 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		__this->____methodName_2 = L_2;
	}

IL_001c:
	{
		String_t* L_3 = (__this->____methodName_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m10407 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t951* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t793* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t961 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t961 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t951* L_3 = (ParameterInfoU5BU5D_t951*)VirtFuncInvoker0< ParameterInfoU5BU5D_t951* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t951* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		TypeU5BU5D_t793* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t951* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t951* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		TypeU5BU5D_t793* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m10408 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary() */, __this);
	}

IL_0011:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern TypeInfo* MethodCallDictionary_t1677_il2cpp_TypeInfo_var;
extern "C" void MethodCall_InitDictionary_m10409 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t1677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		s_Il2CppMethodIntialized = true;
	}
	MethodCallDictionary_t1677 * V_0 = {0};
	{
		MethodCallDictionary_t1677 * L_0 = (MethodCallDictionary_t1677 *)il2cpp_codegen_object_new (MethodCallDictionary_t1677_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m10418(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodCallDictionary_t1677 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t1677 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m10430(L_2, /*hidden argument*/NULL);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m10410 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		MethodBase_t961 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->____typeName_1 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->____typeName_1);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C" String_t* MethodCall_get_Uri_m10411 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m10412 (MethodCall_t1670 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m10413 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t284_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral250;
extern Il2CppCodeGenString* _stringLiteral251;
extern Il2CppCodeGenString* _stringLiteral2146;
extern Il2CppCodeGenString* _stringLiteral2147;
extern Il2CppCodeGenString* _stringLiteral2148;
extern Il2CppCodeGenString* _stringLiteral2149;
extern Il2CppCodeGenString* _stringLiteral174;
extern Il2CppCodeGenString* _stringLiteral2150;
extern Il2CppCodeGenString* _stringLiteral2151;
extern Il2CppCodeGenString* _stringLiteral2152;
extern "C" void MethodCall_ResolveMethod_m10414 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		StringU5BU5D_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(602);
		_stringLiteral250 = il2cpp_codegen_string_literal_from_index(250);
		_stringLiteral251 = il2cpp_codegen_string_literal_from_index(251);
		_stringLiteral2146 = il2cpp_codegen_string_literal_from_index(2146);
		_stringLiteral2147 = il2cpp_codegen_string_literal_from_index(2147);
		_stringLiteral2148 = il2cpp_codegen_string_literal_from_index(2148);
		_stringLiteral2149 = il2cpp_codegen_string_literal_from_index(2149);
		_stringLiteral174 = il2cpp_codegen_string_literal_from_index(174);
		_stringLiteral2150 = il2cpp_codegen_string_literal_from_index(2150);
		_stringLiteral2151 = il2cpp_codegen_string_literal_from_index(2151);
		_stringLiteral2152 = il2cpp_codegen_string_literal_from_index(2152);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->____uri_0);
		if (!L_0)
		{
			goto IL_0171;
		}
	}
	{
		String_t* L_1 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m10615(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_4 = (__this->____typeName_1);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = (__this->____typeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral250, L_5, _stringLiteral251, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_0047;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B5_0 = L_7;
	}

IL_0047:
	{
		V_1 = G_B5_0;
		String_t* L_8 = V_1;
		String_t* L_9 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m5477(NULL /*static, unused*/, _stringLiteral2146, L_8, _stringLiteral2147, L_9, /*hidden argument*/NULL);
		RemotingException_t1714 * L_11 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0064:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m10415(__this, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		if (L_15)
		{
			goto IL_00b3;
		}
	}
	{
		StringU5BU5D_t284* L_16 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 5));
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, _stringLiteral2148);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0)) = (String_t*)_stringLiteral2148;
		StringU5BU5D_t284* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1)) = (String_t*)L_18;
		StringU5BU5D_t284* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, _stringLiteral2149);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)_stringLiteral2149;
		StringU5BU5D_t284* L_20 = L_19;
		Type_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3)) = (String_t*)L_22;
		StringU5BU5D_t284* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, _stringLiteral174);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4)) = (String_t*)_stringLiteral174;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m5393(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		RemotingException_t1714 * L_25 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_25, L_24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00b3:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t793* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		MethodBase_t961 * L_29 = RemotingServices_GetMethodBaseFromName_m10620(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_29;
		MethodBase_t961 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_0104;
		}
	}
	{
		ObjectU5BU5D_t38* L_31 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, _stringLiteral2150);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)_stringLiteral2150;
		ObjectU5BU5D_t38* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1)) = (Object_t *)L_33;
		ObjectU5BU5D_t38* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, _stringLiteral2151);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2)) = (Object_t *)_stringLiteral2151;
		ObjectU5BU5D_t38* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m1946(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RemotingException_t1714 * L_38 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_38, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_0104:
	{
		Type_t * L_39 = V_2;
		Type_t * L_40 = V_0;
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_41 = V_2;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_41);
		if (!L_42)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_43);
		if (L_44)
		{
			goto IL_016c;
		}
	}
	{
		Type_t * L_45 = V_0;
		MethodBase_t961 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		MethodBase_t961 * L_47 = RemotingServices_GetVirtualMethod_m10613(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_47;
		MethodBase_t961 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_016c;
		}
	}
	{
		ObjectU5BU5D_t38* L_49 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, _stringLiteral2150);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0)) = (Object_t *)_stringLiteral2150;
		ObjectU5BU5D_t38* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1)) = (Object_t *)L_51;
		ObjectU5BU5D_t38* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, _stringLiteral2151);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2)) = (Object_t *)_stringLiteral2151;
		ObjectU5BU5D_t38* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3)) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m1946(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		RemotingException_t1714 * L_56 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_56, L_55, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_016c:
	{
		goto IL_01a9;
	}

IL_0171:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		MethodBase_t961 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m10619(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_57;
		MethodBase_t961 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_01a9;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m5477(NULL /*static, unused*/, _stringLiteral2150, L_59, _stringLiteral2151, L_60, /*hidden argument*/NULL);
		RemotingException_t1714 * L_62 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_62, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_01a9:
	{
		MethodBase_t961 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_63);
		if (!L_64)
		{
			goto IL_01fb;
		}
	}
	{
		MethodBase_t961 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_65);
		if (!L_66)
		{
			goto IL_01fb;
		}
	}
	{
		TypeU5BU5D_t793* L_67 = MethodCall_get_GenericArguments_m10417(__this, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_01df;
		}
	}
	{
		RemotingException_t1714 * L_68 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_68, _stringLiteral2152, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01df:
	{
		MethodBase_t961 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t793* L_70 = MethodCall_get_GenericArguments_m10417(__this, /*hidden argument*/NULL);
		NullCheck(((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t793* >::Invoke(32 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, ((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01fb:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Type_t * MethodCall_CastTo_m10415 (MethodCall_t1670 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t793* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t793* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m10416(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___clientType = L_1;
		String_t* L_2 = ___clientType;
		Type_t * L_3 = ___serverType;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m400(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		Type_t * L_6 = ___serverType;
		return L_6;
	}

IL_001b:
	{
		Type_t * L_7 = ___serverType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_7);
		V_0 = L_8;
		goto IL_0041;
	}

IL_0027:
	{
		String_t* L_9 = ___clientType;
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m400(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_13 = V_0;
		return L_13;
	}

IL_003a:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_14);
		V_0 = L_15;
	}

IL_0041:
	{
		Type_t * L_16 = V_0;
		if (L_16)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_17 = ___serverType;
		NullCheck(L_17);
		TypeU5BU5D_t793* L_18 = (TypeU5BU5D_t793*)VirtFuncInvoker0< TypeU5BU5D_t793* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_17);
		V_1 = L_18;
		TypeU5BU5D_t793* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0076;
	}

IL_0058:
	{
		TypeU5BU5D_t793* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_20, L_22));
		String_t* L_23 = ___clientType;
		Type_t * L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Equality_m400(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		Type_t * L_27 = V_2;
		return L_27;
	}

IL_0070:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_29 = V_4;
		TypeU5BU5D_t793* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_0058;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern Il2CppCodeGenString* _stringLiteral2153;
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m10416 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2153 = il2cpp_codegen_string_literal_from_index(2153);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = ___aqname;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m5390(L_0, _stringLiteral2153, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___aqname;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_001c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		NullCheck(G_B3_2);
		int32_t L_5 = String_IndexOf_m5380(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_7 = ___aqname;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m423(L_7, 0, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m2089(L_9, /*hidden argument*/NULL);
		___aqname = L_10;
	}

IL_003b:
	{
		String_t* L_11 = ___aqname;
		return L_11;
	}
}
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t793* MethodCall_get_GenericArguments_m10417 (MethodCall_t1670 * __this, const MethodInfo* method)
{
	TypeU5BU5D_t793* V_0 = {0};
	{
		TypeU5BU5D_t793* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		TypeU5BU5D_t793* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_0012:
	{
		MethodBase_t961 * L_2 = (MethodBase_t961 *)VirtFuncInvoker0< MethodBase_t961 * >::Invoke(8 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase() */, __this);
		NullCheck(L_2);
		TypeU5BU5D_t793* L_3 = (TypeU5BU5D_t793*)VirtFuncInvoker0< TypeU5BU5D_t793* >::Invoke(26 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_2);
		TypeU5BU5D_t793* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t793* L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* MethodCallDictionary_t1677_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__ctor_m10418 (MethodCallDictionary_t1677 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t1677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m10426(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MethodCallDictionary_t1677_il2cpp_TypeInfo_var);
		StringU5BU5D_t284* L_1 = ((MethodCallDictionary_t1677_StaticFields*)MethodCallDictionary_t1677_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m10428(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t284_il2cpp_TypeInfo_var;
extern TypeInfo* MethodCallDictionary_t1677_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2137;
extern Il2CppCodeGenString* _stringLiteral2138;
extern Il2CppCodeGenString* _stringLiteral2139;
extern Il2CppCodeGenString* _stringLiteral2140;
extern Il2CppCodeGenString* _stringLiteral2141;
extern Il2CppCodeGenString* _stringLiteral2142;
extern "C" void MethodCallDictionary__cctor_m10419 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		MethodCallDictionary_t1677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1125);
		_stringLiteral2137 = il2cpp_codegen_string_literal_from_index(2137);
		_stringLiteral2138 = il2cpp_codegen_string_literal_from_index(2138);
		_stringLiteral2139 = il2cpp_codegen_string_literal_from_index(2139);
		_stringLiteral2140 = il2cpp_codegen_string_literal_from_index(2140);
		_stringLiteral2141 = il2cpp_codegen_string_literal_from_index(2141);
		_stringLiteral2142 = il2cpp_codegen_string_literal_from_index(2142);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t284* L_0 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral2137);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral2137;
		StringU5BU5D_t284* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral2138);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)_stringLiteral2138;
		StringU5BU5D_t284* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral2139);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)_stringLiteral2139;
		StringU5BU5D_t284* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral2140);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)_stringLiteral2140;
		StringU5BU5D_t284* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral2141);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)_stringLiteral2141;
		StringU5BU5D_t284* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral2142);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)_stringLiteral2142;
		((MethodCallDictionary_t1677_StaticFields*)MethodCallDictionary_t1677_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_5;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern "C" void DictionaryEnumerator__ctor_m10420 (DictionaryEnumerator_t1678 * __this, MethodDictionary_t1672 * ___methodDictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	DictionaryEnumerator_t1678 * G_B2_0 = {0};
	DictionaryEnumerator_t1678 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t1678 * G_B3_1 = {0};
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		MethodDictionary_t1672 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t1672 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		Object_t * L_2 = (L_1->____internalProperties_0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_0035;
		}
	}
	{
		MethodDictionary_t1672 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1260_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0036:
	{
		NullCheck(G_B3_1);
		G_B3_1->____hashtableEnum_1 = G_B3_0;
		__this->____posMethod_2 = (-1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m10421 (DictionaryEnumerator_t1678 * __this, const MethodInfo* method)
{
	DictionaryEntry_t65  V_0 = {0};
	{
		DictionaryEntry_t65  L_0 = (DictionaryEntry_t65 )VirtFuncInvoker0< DictionaryEntry_t65  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m433((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern TypeInfo* IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern "C" bool DictionaryEnumerator_MoveNext_m10422 (DictionaryEnumerator_t1678 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(778);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1 = (__this->____posMethod_2);
		__this->____posMethod_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->____posMethod_2);
		MethodDictionary_t1672 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		StringU5BU5D_t284* L_4 = (L_3->____methodKeys_2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		return 1;
	}

IL_0035:
	{
		__this->____posMethod_2 = ((int32_t)-2);
	}

IL_003d:
	{
		Object_t * L_5 = (__this->____hashtableEnum_1);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		goto IL_0071;
	}

IL_004f:
	{
		MethodDictionary_t1672 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m10431(L_6, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		return 1;
	}

IL_0071:
	{
		Object_t * L_10 = (__this->____hashtableEnum_1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		return 0;
	}
}
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern TypeInfo* InvalidOperationException_t1154_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2154;
extern "C" DictionaryEntry_t65  DictionaryEnumerator_get_Entry_m10423 (DictionaryEnumerator_t1678 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(694);
		IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(778);
		_stringLiteral2154 = il2cpp_codegen_string_literal_from_index(2154);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		MethodDictionary_t1672 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t284* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t1672 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t1672 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t284* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)));
		DictionaryEntry_t65  L_11 = {0};
		DictionaryEntry__ctor_m7444(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)), L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0041:
	{
		int32_t L_12 = (__this->____posMethod_2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0058;
		}
	}
	{
		Object_t * L_13 = (__this->____hashtableEnum_1);
		if (L_13)
		{
			goto IL_0063;
		}
	}

IL_0058:
	{
		InvalidOperationException_t1154 * L_14 = (InvalidOperationException_t1154 *)il2cpp_codegen_object_new (InvalidOperationException_t1154_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m6510(L_14, _stringLiteral2154, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0063:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t65  L_16 = (DictionaryEntry_t65 )InterfaceFuncInvoker0< DictionaryEntry_t65  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t1325_il2cpp_TypeInfo_var, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m10424 (DictionaryEnumerator_t1678 * __this, const MethodInfo* method)
{
	DictionaryEntry_t65  V_0 = {0};
	{
		DictionaryEntry_t65  L_0 = (DictionaryEntry_t65 )VirtFuncInvoker0< DictionaryEntry_t65  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m432((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m10425 (DictionaryEnumerator_t1678 * __this, const MethodInfo* method)
{
	DictionaryEntry_t65  V_0 = {0};
	{
		DictionaryEntry_t65  L_0 = (DictionaryEntry_t65 )VirtFuncInvoker0< DictionaryEntry_t65  >::Invoke(6 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m433((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m10426 (MethodDictionary_t1672 * __this, Object_t * ___message, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t1678_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m10427 (MethodDictionary_t1672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t1678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1126);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t1678 * L_0 = (DictionaryEnumerator_t1678 *)il2cpp_codegen_object_new (DictionaryEnumerator_t1678_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m10420(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m10428 (MethodDictionary_t1672 * __this, StringU5BU5D_t284* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t284* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m10429 (MethodDictionary_t1672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____ownProperties_3 = 1;
		Hashtable_t24 * L_0 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m10430 (MethodDictionary_t1672 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_1;
	}

IL_0017:
	{
		Object_t * L_2 = (__this->____internalProperties_0);
		return L_2;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_IsOverridenKey_m10431 (MethodDictionary_t1672 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t284* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->____ownProperties_3);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		StringU5BU5D_t284* L_1 = (__this->____methodKeys_2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0031;
	}

IL_001b:
	{
		StringU5BU5D_t284* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		String_t* L_5 = ___key;
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m400(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t284* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Item_m10432 (MethodDictionary_t1672 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002d;
	}

IL_000e:
	{
		StringU5BU5D_t284* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m400(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t284* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_12 = (__this->____internalProperties_0);
		Object_t * L_13 = ___key;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1260_il2cpp_TypeInfo_var, L_12, L_13);
		return L_14;
	}

IL_0053:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m10433 (MethodDictionary_t1672 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(11 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern TypeInfo* MethodDictionary_t1672_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodMessage_t1679_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t1983_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2137;
extern Il2CppCodeGenString* _stringLiteral2138;
extern Il2CppCodeGenString* _stringLiteral2139;
extern Il2CppCodeGenString* _stringLiteral2140;
extern Il2CppCodeGenString* _stringLiteral2142;
extern Il2CppCodeGenString* _stringLiteral2141;
extern Il2CppCodeGenString* _stringLiteral2155;
extern Il2CppCodeGenString* _stringLiteral2156;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m10434 (MethodDictionary_t1672 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t1672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		IMethodMessage_t1679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		IMethodReturnMessage_t1983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral2137 = il2cpp_codegen_string_literal_from_index(2137);
		_stringLiteral2138 = il2cpp_codegen_string_literal_from_index(2138);
		_stringLiteral2139 = il2cpp_codegen_string_literal_from_index(2139);
		_stringLiteral2140 = il2cpp_codegen_string_literal_from_index(2140);
		_stringLiteral2142 = il2cpp_codegen_string_literal_from_index(2142);
		_stringLiteral2141 = il2cpp_codegen_string_literal_from_index(2141);
		_stringLiteral2155 = il2cpp_codegen_string_literal_from_index(2155);
		_stringLiteral2156 = il2cpp_codegen_string_literal_from_index(2156);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t33 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0126;
		}
	}
	{
		Dictionary_2_t33 * L_2 = ((MethodDictionary_t1672_StaticFields*)MethodDictionary_t1672_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t33 * L_3 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t33 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2137, 0);
		Dictionary_2_t33 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2138, 1);
		Dictionary_2_t33 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2139, 2);
		Dictionary_2_t33 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2140, 3);
		Dictionary_2_t33 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2142, 4);
		Dictionary_2_t33 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2141, 5);
		Dictionary_2_t33 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2155, 6);
		Dictionary_2_t33 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral2156, 7);
		Dictionary_2_t33 * L_12 = V_1;
		((MethodDictionary_t1672_StaticFields*)MethodDictionary_t1672_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4 = L_12;
	}

IL_007f:
	{
		Dictionary_2_t33 * L_13 = ((MethodDictionary_t1672_StaticFields*)MethodDictionary_t1672_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0126;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00bc;
		}
		if (L_16 == 1)
		{
			goto IL_00c8;
		}
		if (L_16 == 2)
		{
			goto IL_00d4;
		}
		if (L_16 == 3)
		{
			goto IL_00e0;
		}
		if (L_16 == 4)
		{
			goto IL_00ec;
		}
		if (L_16 == 5)
		{
			goto IL_00f8;
		}
		if (L_16 == 6)
		{
			goto IL_0104;
		}
		if (L_16 == 7)
		{
			goto IL_0115;
		}
	}
	{
		goto IL_0126;
	}

IL_00bc:
	{
		Object_t * L_17 = (__this->____message_1);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_17);
		return L_18;
	}

IL_00c8:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_19);
		return L_20;
	}

IL_00d4:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_21);
		return L_22;
	}

IL_00e0:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_23);
		return L_24;
	}

IL_00ec:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t1676 * L_26 = (LogicalCallContext_t1676 *)InterfaceFuncInvoker0< LogicalCallContext_t1676 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}

IL_00f8:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t38* L_28 = (ObjectU5BU5D_t38*)InterfaceFuncInvoker0< ObjectU5BU5D_t38* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodMessage::get_Args() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_27);
		return (Object_t *)L_28;
	}

IL_0104:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, IMethodReturnMessage_t1983_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t38* L_30 = (ObjectU5BU5D_t38*)InterfaceFuncInvoker0< ObjectU5BU5D_t38* >::Invoke(1 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgs() */, IMethodReturnMessage_t1983_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IMethodReturnMessage_t1983_il2cpp_TypeInfo_var)));
		return (Object_t *)L_30;
	}

IL_0115:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, IMethodReturnMessage_t1983_il2cpp_TypeInfo_var)));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_ReturnValue() */, IMethodReturnMessage_t1983_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_31, IMethodReturnMessage_t1983_il2cpp_TypeInfo_var)));
		return L_32;
	}

IL_0126:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* MethodDictionary_t1672_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalMessage_t2002_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2142;
extern Il2CppCodeGenString* _stringLiteral2155;
extern Il2CppCodeGenString* _stringLiteral2156;
extern Il2CppCodeGenString* _stringLiteral2138;
extern Il2CppCodeGenString* _stringLiteral2139;
extern Il2CppCodeGenString* _stringLiteral2140;
extern Il2CppCodeGenString* _stringLiteral2141;
extern Il2CppCodeGenString* _stringLiteral2137;
extern Il2CppCodeGenString* _stringLiteral2143;
extern "C" void MethodDictionary_SetMethodProperty_m10435 (MethodDictionary_t1672 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t1672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1127);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		IInternalMessage_t2002_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1130);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral2142 = il2cpp_codegen_string_literal_from_index(2142);
		_stringLiteral2155 = il2cpp_codegen_string_literal_from_index(2155);
		_stringLiteral2156 = il2cpp_codegen_string_literal_from_index(2156);
		_stringLiteral2138 = il2cpp_codegen_string_literal_from_index(2138);
		_stringLiteral2139 = il2cpp_codegen_string_literal_from_index(2139);
		_stringLiteral2140 = il2cpp_codegen_string_literal_from_index(2140);
		_stringLiteral2141 = il2cpp_codegen_string_literal_from_index(2141);
		_stringLiteral2137 = il2cpp_codegen_string_literal_from_index(2137);
		_stringLiteral2143 = il2cpp_codegen_string_literal_from_index(2143);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t33 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00cb;
		}
	}
	{
		Dictionary_2_t33 * L_2 = ((MethodDictionary_t1672_StaticFields*)MethodDictionary_t1672_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		if (L_2)
		{
			goto IL_007f;
		}
	}
	{
		Dictionary_2_t33 * L_3 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t33 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, _stringLiteral2142, 0);
		Dictionary_2_t33 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, _stringLiteral2155, 0);
		Dictionary_2_t33 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, _stringLiteral2156, 0);
		Dictionary_2_t33 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2138, 1);
		Dictionary_2_t33 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2139, 1);
		Dictionary_2_t33 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2140, 1);
		Dictionary_2_t33 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2141, 1);
		Dictionary_2_t33 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral2137, 2);
		Dictionary_2_t33 * L_12 = V_1;
		((MethodDictionary_t1672_StaticFields*)MethodDictionary_t1672_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5 = L_12;
	}

IL_007f:
	{
		Dictionary_2_t33 * L_13 = ((MethodDictionary_t1672_StaticFields*)MethodDictionary_t1672_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00a8;
		}
		if (L_16 == 1)
		{
			goto IL_00a9;
		}
		if (L_16 == 2)
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_00cb;
	}

IL_00a8:
	{
		return;
	}

IL_00a9:
	{
		ArgumentException_t626 * L_17 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_17, _stringLiteral2143, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00b4:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, IInternalMessage_t2002_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String) */, IInternalMessage_t2002_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IInternalMessage_t2002_il2cpp_TypeInfo_var)), ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00cb:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t65_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Values_m10436 (MethodDictionary_t1672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		DictionaryEntry_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t64 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t65  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t64 * L_0 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000d:
	{
		ArrayList_t64 * L_1 = V_0;
		StringU5BU5D_t284* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(16 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t284* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_00a6;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1260_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0050:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_12);
			V_2 = ((*(DictionaryEntry_t65 *)((DictionaryEntry_t65 *)UnBox (L_13, DictionaryEntry_t65_il2cpp_TypeInfo_var))));
			Object_t * L_14 = DictionaryEntry_get_Key_m432((&V_2), /*hidden argument*/NULL);
			bool L_15 = MethodDictionary_IsOverridenKey_m10431(__this, ((String_t*)Castclass(L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0081;
			}
		}

IL_0073:
		{
			ArrayList_t64 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m433((&V_2), /*hidden argument*/NULL);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		}

IL_0081:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0050;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0xA6, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_009e;
			}
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(145)
		}

IL_009e:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_00a6:
	{
		ArrayList_t64 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Add_m10437 (MethodDictionary_t1672 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002e;
	}

IL_000e:
	{
		StringU5BU5D_t284* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m400(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = ___value;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(17 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object) */, __this, L_6, L_7);
		return;
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t284* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0053:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1260_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_Contains_m10438 (MethodDictionary_t1672 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0027;
	}

IL_000e:
	{
		StringU5BU5D_t284* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m400(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t284* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		Object_t * L_11 = ___key;
		NullCheck(L_10);
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(3 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t1260_il2cpp_TypeInfo_var, L_10, L_11);
		return L_12;
	}

IL_004d:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2143;
extern "C" void MethodDictionary_Remove_m10439 (MethodDictionary_t1672 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		_stringLiteral2143 = il2cpp_codegen_string_literal_from_index(2143);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		StringU5BU5D_t284* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m400(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t626 * L_6 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_6, _stringLiteral2143, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002c:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t284* L_9 = (__this->____methodKeys_2);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		Object_t * L_12 = ___key;
		NullCheck(L_11);
		InterfaceActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t1260_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0055:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" int32_t MethodDictionary_get_Count_m10440 (MethodDictionary_t1672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t1326_il2cpp_TypeInfo_var, L_1);
		StringU5BU5D_t284* L_3 = (__this->____methodKeys_2);
		NullCheck(L_3);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
	}

IL_0020:
	{
		StringU5BU5D_t284* L_4 = (__this->____methodKeys_2);
		NullCheck(L_4);
		return (((int32_t)(((Array_t *)L_4)->max_length)));
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C" bool MethodDictionary_get_IsSynchronized_m10441 (MethodDictionary_t1672 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m10442 (MethodDictionary_t1672 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t1326_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_CopyTo_m10443 (MethodDictionary_t1672 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t1326_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(745);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(18 /* System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values() */, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t1326_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t1678_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_GetEnumerator_m10444 (MethodDictionary_t1672 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t1678_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1126);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t1678 * L_0 = (DictionaryEnumerator_t1678 *)il2cpp_codegen_object_new (DictionaryEnumerator_t1678_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m10420(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
extern TypeInfo* IMethodReturnMessage_t1983_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t1680_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__ctor_m10445 (MethodReturnDictionary_t1680 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodReturnMessage_t1983_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1129);
		MethodReturnDictionary_t1680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1131);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m10426(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t54 * L_2 = (Exception_t54 *)InterfaceFuncInvoker0< Exception_t54 * >::Invoke(0 /* System.Exception System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_Exception() */, IMethodReturnMessage_t1983_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t1680_il2cpp_TypeInfo_var);
		StringU5BU5D_t284* L_3 = ((MethodReturnDictionary_t1680_StaticFields*)MethodReturnDictionary_t1680_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m10428(__this, L_3, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t1680_il2cpp_TypeInfo_var);
		StringU5BU5D_t284* L_4 = ((MethodReturnDictionary_t1680_StaticFields*)MethodReturnDictionary_t1680_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m10428(__this, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t284_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t1680_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2137;
extern Il2CppCodeGenString* _stringLiteral2138;
extern Il2CppCodeGenString* _stringLiteral2139;
extern Il2CppCodeGenString* _stringLiteral2140;
extern Il2CppCodeGenString* _stringLiteral2155;
extern Il2CppCodeGenString* _stringLiteral2156;
extern Il2CppCodeGenString* _stringLiteral2142;
extern "C" void MethodReturnDictionary__cctor_m10446 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		MethodReturnDictionary_t1680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1131);
		_stringLiteral2137 = il2cpp_codegen_string_literal_from_index(2137);
		_stringLiteral2138 = il2cpp_codegen_string_literal_from_index(2138);
		_stringLiteral2139 = il2cpp_codegen_string_literal_from_index(2139);
		_stringLiteral2140 = il2cpp_codegen_string_literal_from_index(2140);
		_stringLiteral2155 = il2cpp_codegen_string_literal_from_index(2155);
		_stringLiteral2156 = il2cpp_codegen_string_literal_from_index(2156);
		_stringLiteral2142 = il2cpp_codegen_string_literal_from_index(2142);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t284* L_0 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral2137);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)_stringLiteral2137;
		StringU5BU5D_t284* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, _stringLiteral2138);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)_stringLiteral2138;
		StringU5BU5D_t284* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, _stringLiteral2139);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)_stringLiteral2139;
		StringU5BU5D_t284* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, _stringLiteral2140);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)_stringLiteral2140;
		StringU5BU5D_t284* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, _stringLiteral2155);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)_stringLiteral2155;
		StringU5BU5D_t284* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, _stringLiteral2156);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)_stringLiteral2156;
		StringU5BU5D_t284* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, _stringLiteral2142);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)_stringLiteral2142;
		((MethodReturnDictionary_t1680_StaticFields*)MethodReturnDictionary_t1680_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t284* L_7 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, _stringLiteral2142);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0)) = (String_t*)_stringLiteral2142;
		((MethodReturnDictionary_t1680_StaticFields*)MethodReturnDictionary_t1680_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"

// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"


// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t38* MonoMethodMessage_get_Args_m10447 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t38* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1676 * MonoMethodMessage_get_LogicalCallContext_m10448 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	{
		LogicalCallContext_t1676 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t961 * MonoMethodMessage_get_MethodBase_m10449 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_MethodName_m10450 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, L_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m10451 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t951* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t793* L_0 = (__this->___methodSignature_7);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t951* L_2 = (ParameterInfoU5BU5D_t951*)VirtFuncInvoker0< ParameterInfoU5BU5D_t951* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t951* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_7 = ((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		TypeU5BU5D_t793* L_4 = (__this->___methodSignature_7);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t951* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_6, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_6, L_8)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, L_5)) = (Type_t *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_1;
		ParameterInfoU5BU5D_t951* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_002c;
		}
	}

IL_0049:
	{
		TypeU5BU5D_t793* L_13 = (__this->___methodSignature_7);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_TypeName_m10452 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_0011:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoMethod::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m10453 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m10454 (MonoMethodMessage_t1665 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_6 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t54 * MonoMethodMessage_get_Exception_m10455 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	{
		Exception_t54 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m10456 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t169* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t38* L_0 = (__this->___args_1);
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
		V_0 = 0;
		ByteU5BU5D_t169* L_1 = (__this->___arg_types_2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0031;
	}

IL_001d:
	{
		ByteU5BU5D_t169* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t169* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t38* MonoMethodMessage_get_OutArgs_m10457 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t38* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t169* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t38* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ObjectU5BU5D_t38*)NULL;
	}

IL_000d:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount() */, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		ByteU5BU5D_t169* L_4 = (__this->___arg_types_2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_0058;
	}

IL_002f:
	{
		ByteU5BU5D_t169* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		ObjectU5BU5D_t38* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t38* L_12 = (__this->___args_1);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14));
	}

IL_004e:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_17 = V_6;
		ByteU5BU5D_t169* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t38* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m10458 (MonoMethodMessage_t1665 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m10459 (RemotingSurrogate_t1681 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m10460 (RemotingSurrogate_t1681 * __this, Object_t * ___obj, SerializationInfo_t900 * ___si, StreamingContext_t901  ___sc, Object_t * ___selector, const MethodInfo* method)
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
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m10461 (ObjRefSurrogate_t1682 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2157;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m10462 (ObjRefSurrogate_t1682 * __this, Object_t * ___obj, SerializationInfo_t900 * ___si, StreamingContext_t901  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2157 = il2cpp_codegen_string_literal_from_index(2157);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t45 * L_0 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_0, _stringLiteral2157, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C" void RemotingSurrogateSelector__ctor_m10463 (RemotingSurrogateSelector_t1684 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern const Il2CppType* ObjRef_t1702_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRefSurrogate_t1682_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogate_t1681_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogateSelector__cctor_m10464 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1702_0_0_0_var = il2cpp_codegen_type_from_index(1132);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1133);
		ObjRefSurrogate_t1682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1134);
		RemotingSurrogate_t1681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1135);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(ObjRef_t1702_0_0_0_var), /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1684_StaticFields*)RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t1682 * L_1 = (ObjRefSurrogate_t1682 *)il2cpp_codegen_object_new (ObjRefSurrogate_t1682_il2cpp_TypeInfo_var);
		ObjRefSurrogate__ctor_m10461(L_1, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1684_StaticFields*)RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t1681 * L_2 = (RemotingSurrogate_t1681 *)il2cpp_codegen_object_new (RemotingSurrogate_t1681_il2cpp_TypeInfo_var);
		RemotingSurrogate__ctor_m10459(L_2, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t1684_StaticFields*)RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern TypeInfo* RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t1683_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m10465 (RemotingSurrogateSelector_t1684 * __this, Type_t * ___type, StreamingContext_t901  ___context, Object_t ** ___ssout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1133);
		ISurrogateSelector_t1683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1136);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Object_t ** L_2 = ___ssout;
		*((Object_t **)(L_2)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var);
		RemotingSurrogate_t1681 * L_3 = ((RemotingSurrogateSelector_t1684_StaticFields*)RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((RemotingSurrogateSelector_t1684_StaticFields*)RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var);
		ObjRefSurrogate_t1682 * L_8 = ((RemotingSurrogateSelector_t1684_StaticFields*)RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1;
		return L_8;
	}

IL_002d:
	{
		Object_t * L_9 = (__this->____next_3);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_10 = (__this->____next_3);
		Type_t * L_11 = ___type;
		StreamingContext_t901  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t901 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t1683_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t1679_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m10466 (ReturnMessage_t1685 * __this, Object_t * ___ret, ObjectU5BU5D_t38* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t1676 * ___callCtx, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t38* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t1676 * L_3 = ___callCtx;
		__this->____callCtx_3 = L_3;
		Object_t * L_4 = ___mcm;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		Object_t * L_5 = ___mcm;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t961 * L_8 = (MethodBase_t961 *)InterfaceFuncInvoker0< MethodBase_t961 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0044:
	{
		ObjectU5BU5D_t38* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, L_10));
	}

IL_005b:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t1679_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m10467 (ReturnMessage_t1685 * __this, Exception_t54 * ___e, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		Exception_t54 * L_0 = ___e;
		__this->____exception_6 = L_0;
		Object_t * L_1 = ___mcm;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = ___mcm;
		NullCheck(L_2);
		MethodBase_t961 * L_3 = (MethodBase_t961 *)InterfaceFuncInvoker0< MethodBase_t961 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t1676 * L_5 = (LogicalCallContext_t1676 *)InterfaceFuncInvoker0< LogicalCallContext_t1676 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_002b:
	{
		__this->____args_1 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m10468 (ReturnMessage_t1685 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t38* ReturnMessage_get_Args_m10469 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t38* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t1676_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t1676 * ReturnMessage_get_LogicalCallContext_m10470 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t1676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1124);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t1676 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		LogicalCallContext_t1676 * L_1 = (LogicalCallContext_t1676 *)il2cpp_codegen_object_new (LogicalCallContext_t1676_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m10392(L_1, /*hidden argument*/NULL);
		__this->____callCtx_3 = L_1;
	}

IL_0016:
	{
		LogicalCallContext_t1676 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t961 * ReturnMessage_get_MethodBase_m10471 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	{
		MethodBase_t961 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m10472 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	{
		MethodBase_t961 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_1 = (__this->____methodName_8);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		MethodBase_t961 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____methodName_8 = L_3;
	}

IL_0027:
	{
		String_t* L_4 = (__this->____methodName_8);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m10473 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t951* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t961 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		TypeU5BU5D_t793* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0054;
		}
	}
	{
		MethodBase_t961 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t951* L_3 = (ParameterInfoU5BU5D_t951*)VirtFuncInvoker0< ParameterInfoU5BU5D_t951* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t951* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t793*)SZArrayNew(TypeU5BU5D_t793_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_004b;
	}

IL_0037:
	{
		TypeU5BU5D_t793* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t951* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t952 **)(ParameterInfo_t952 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t951* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0037;
		}
	}

IL_0054:
	{
		TypeU5BU5D_t793* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern TypeInfo* MethodReturnDictionary_t1680_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_Properties_m10474 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodReturnDictionary_t1680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1131);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodReturnDictionary_t1680 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		MethodReturnDictionary_t1680 * L_1 = (MethodReturnDictionary_t1680 *)il2cpp_codegen_object_new (MethodReturnDictionary_t1680_il2cpp_TypeInfo_var);
		MethodReturnDictionary__ctor_m10445(L_1, __this, /*hidden argument*/NULL);
		__this->____properties_11 = L_1;
	}

IL_0017:
	{
		MethodReturnDictionary_t1680 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m10475 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	{
		MethodBase_t961 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = (__this->____typeName_10);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		MethodBase_t961 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->____typeName_10 = L_4;
	}

IL_002c:
	{
		String_t* L_5 = (__this->____typeName_10);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m10476 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m10477 (ReturnMessage_t1685 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t54 * ReturnMessage_get_Exception_m10478 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	{
		Exception_t54 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern TypeInfo* ArgInfo_t1663_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t38* ReturnMessage_get_OutArgs_m10479 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t1663_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1137);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		ObjectU5BU5D_t38* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		ArgInfo_t1663 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		MethodBase_t961 * L_3 = (MethodBase_t961 *)VirtFuncInvoker0< MethodBase_t961 * >::Invoke(7 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t1663 * L_4 = (ArgInfo_t1663 *)il2cpp_codegen_object_new (ArgInfo_t1663_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m10350(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_0033:
	{
		ArgInfo_t1663 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t38* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t38* L_7 = ArgInfo_GetInOutArgs_m10351(L_5, L_6, /*hidden argument*/NULL);
		__this->____outArgs_0 = L_7;
	}

IL_004a:
	{
		ObjectU5BU5D_t38* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m10480 (ReturnMessage_t1685 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapAttributeMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Metadata.SoapAttribute::.ctor()
extern "C" void SoapAttribute__ctor_m10481 (SoapAttribute_t1686 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m5377(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::get_UseAttribute()
extern "C" bool SoapAttribute_get_UseAttribute_m10482 (SoapAttribute_t1686 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapAttribute::get_XmlNamespace()
extern "C" String_t* SoapAttribute_get_XmlNamespace_m10483 (SoapAttribute_t1686 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___ProtXmlNamespace_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapAttribute::SetReflectionObject(System.Object)
extern "C" void SoapAttribute_SetReflectionObject_m10484 (SoapAttribute_t1686 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___reflectionObject;
		__this->___ReflectInfo_2 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapFieldAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapFieldAttributeMethodDeclarations.h"

// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"


// System.Void System.Runtime.Remoting.Metadata.SoapFieldAttribute::.ctor()
extern "C" void SoapFieldAttribute__ctor_m10485 (SoapFieldAttribute_t1687 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m10481(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::get_XmlElementName()
extern "C" String_t* SoapFieldAttribute_get_XmlElementName_m10486 (SoapFieldAttribute_t1687 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____elementName_3);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::IsInteropXmlElement()
extern "C" bool SoapFieldAttribute_IsInteropXmlElement_m10487 (SoapFieldAttribute_t1687 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isElement_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapFieldAttribute::SetReflectionObject(System.Object)
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern "C" void SoapFieldAttribute_SetReflectionObject_m10488 (SoapFieldAttribute_t1687 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		s_Il2CppMethodIntialized = true;
	}
	FieldInfo_t * V_0 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((FieldInfo_t *)Castclass(L_0, FieldInfo_t_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____elementName_3);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		FieldInfo_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____elementName_3 = L_3;
	}

IL_001e:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttribut.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapMethodAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapMethodAttributMethodDeclarations.h"

// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServicesMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Metadata.SoapMethodAttribute::.ctor()
extern "C" void SoapMethodAttribute__ctor_m10489 (SoapMethodAttribute_t1688 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m10481(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::get_UseAttribute()
extern "C" bool SoapMethodAttribute_get_UseAttribute_m10490 (SoapMethodAttribute_t1688 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::get_XmlNamespace()
extern "C" String_t* SoapMethodAttribute_get_XmlNamespace_m10491 (SoapMethodAttribute_t1688 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____namespace_8);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapMethodAttribute::SetReflectionObject(System.Object)
extern TypeInfo* MethodBase_t961_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2158;
extern Il2CppCodeGenString* _stringLiteral2159;
extern Il2CppCodeGenString* _stringLiteral1159;
extern "C" void SoapMethodAttribute_SetReflectionObject_m10492 (SoapMethodAttribute_t1688 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodBase_t961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1047);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		_stringLiteral2158 = il2cpp_codegen_string_literal_from_index(2158);
		_stringLiteral2159 = il2cpp_codegen_string_literal_from_index(2159);
		_stringLiteral1159 = il2cpp_codegen_string_literal_from_index(1159);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t961 * V_0 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((MethodBase_t961 *)Castclass(L_0, MethodBase_t961_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____responseElement_3);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		MethodBase_t961 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m421(NULL /*static, unused*/, L_3, _stringLiteral2158, /*hidden argument*/NULL);
		__this->____responseElement_3 = L_4;
	}

IL_0028:
	{
		String_t* L_5 = (__this->____responseNamespace_4);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		MethodBase_t961 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_7 = SoapServices_GetXmlNamespaceForMethodResponse_m10652(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->____responseNamespace_4 = L_7;
	}

IL_003f:
	{
		String_t* L_8 = (__this->____returnElement_5);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		__this->____returnElement_5 = _stringLiteral2159;
	}

IL_0055:
	{
		String_t* L_9 = (__this->____soapAction_6);
		if (L_9)
		{
			goto IL_007c;
		}
	}
	{
		MethodBase_t961 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_11 = SoapServices_GetXmlNamespaceForMethodCall_m10651(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		MethodBase_t961 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2098(NULL /*static, unused*/, L_11, _stringLiteral1159, L_13, /*hidden argument*/NULL);
		__this->____soapAction_6 = L_14;
	}

IL_007c:
	{
		String_t* L_15 = (__this->____namespace_8);
		if (L_15)
		{
			goto IL_0093;
		}
	}
	{
		MethodBase_t961 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_17 = SoapServices_GetXmlNamespaceForMethodCall_m10651(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		__this->____namespace_8 = L_17;
	}

IL_0093:
	{
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttri.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapParameterAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttriMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Metadata.SoapParameterAttribute::.ctor()
extern "C" void SoapParameterAttribute__ctor_m10493 (SoapParameterAttribute_t1689 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m10481(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Metadata.SoapTypeAttribute
#include "mscorlib_System_Runtime_Remoting_Metadata_SoapTypeAttributeMethodDeclarations.h"

// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Metadata.SoapTypeAttribute::.ctor()
extern "C" void SoapTypeAttribute__ctor_m10494 (SoapTypeAttribute_t1690 * __this, const MethodInfo* method)
{
	{
		SoapAttribute__ctor_m10481(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_UseAttribute()
extern "C" bool SoapTypeAttribute_get_UseAttribute_m10495 (SoapTypeAttribute_t1690 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____useAttribute_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlElementName()
extern "C" String_t* SoapTypeAttribute_get_XmlElementName_m10496 (SoapTypeAttribute_t1690 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlElementName_4);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlNamespace()
extern "C" String_t* SoapTypeAttribute_get_XmlNamespace_m10497 (SoapTypeAttribute_t1690 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlNamespace_5);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlTypeName()
extern "C" String_t* SoapTypeAttribute_get_XmlTypeName_m10498 (SoapTypeAttribute_t1690 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlTypeName_6);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_XmlTypeNamespace()
extern "C" String_t* SoapTypeAttribute_get_XmlTypeNamespace_m10499 (SoapTypeAttribute_t1690 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____xmlTypeNamespace_7);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_IsInteropXmlElement()
extern "C" bool SoapTypeAttribute_get_IsInteropXmlElement_m10500 (SoapTypeAttribute_t1690 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isElement_9);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::get_IsInteropXmlType()
extern "C" bool SoapTypeAttribute_get_IsInteropXmlType_m10501 (SoapTypeAttribute_t1690 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____isType_8);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Metadata.SoapTypeAttribute::SetReflectionObject(System.Object)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern "C" void SoapTypeAttribute_SetReflectionObject_m10502 (SoapTypeAttribute_t1690 * __this, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___reflectionObject;
		V_0 = ((Type_t *)Castclass(L_0, Type_t_il2cpp_TypeInfo_var));
		String_t* L_1 = (__this->____xmlElementName_4);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____xmlElementName_4 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = (__this->____xmlTypeName_6);
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		__this->____xmlTypeName_6 = L_6;
	}

IL_0035:
	{
		String_t* L_7 = (__this->____xmlTypeNamespace_7);
		if (L_7)
		{
			goto IL_0088;
		}
	}
	{
		Type_t * L_8 = V_0;
		NullCheck(L_8);
		Assembly_t1333 * L_9 = (Assembly_t1333 *)VirtFuncInvoker0< Assembly_t1333 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		Assembly_t1333 * L_11 = (Assembly_t1333 *)VirtFuncInvoker0< Assembly_t1333 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_10);
		if ((!(((Object_t*)(Assembly_t1333 *)L_9) == ((Object_t*)(Assembly_t1333 *)L_11))))
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_12;
		goto IL_0076;
	}

IL_0065:
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		Assembly_t1333 * L_14 = (Assembly_t1333 *)VirtFuncInvoker0< Assembly_t1333 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_13);
		NullCheck(L_14);
		AssemblyName_t1577 * L_15 = (AssemblyName_t1577 *)VirtFuncInvoker0< AssemblyName_t1577 * >::Invoke(16 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_14);
		NullCheck(L_15);
		String_t* L_16 = AssemblyName_get_Name_m9981(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0076:
	{
		Type_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_17);
		String_t* L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_20 = SoapServices_CodeXmlNamespaceForClrTypeNamespace_m10647(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		__this->____xmlTypeNamespace_7 = L_20;
	}

IL_0088:
	{
		String_t* L_21 = (__this->____xmlNamespace_5);
		if (L_21)
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_22 = (__this->____xmlTypeNamespace_7);
		__this->____xmlNamespace_5 = L_22;
	}

IL_009f:
	{
		return;
	}
}
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"

// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"


// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1696_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t1213_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t1213 * ProxyAttribute_CreateInstance_m10503 (ProxyAttribute_t1691 * __this, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		RemotingProxy_t1696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1139);
		MarshalByRefObject_t1213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	RemotingProxy_t1696 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		RemotingProxy_t1696 * L_2 = (RemotingProxy_t1696 *)il2cpp_codegen_object_new (RemotingProxy_t1696_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m10516(L_2, L_0, L_1, (ObjectU5BU5D_t38*)(ObjectU5BU5D_t38*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		RemotingProxy_t1696 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_3);
		return ((MarshalByRefObject_t1213 *)Castclass(L_4, MarshalByRefObject_t1213_il2cpp_TypeInfo_var));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" RealProxy_t1692 * ProxyAttribute_CreateProxy_m10504 (ProxyAttribute_t1691 * __this, ObjRef_t1702 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1655 * ___serverContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t1702 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m10631(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RealProxy_t1692 * L_3 = RemotingServices_GetRealProxy_m10618(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m10505 (ProxyAttribute_t1691 * __this, Object_t * ___msg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m10506 (ProxyAttribute_t1691 * __this, Context_t1655 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m10507 (RealProxy_t1692 * __this, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m10509(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m10508 (RealProxy_t1692 * __this, Type_t * ___classToProxy, ClientIdentity_t1704 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m10509(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		ClientIdentity_t1704 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2160;
extern Il2CppCodeGenString* _stringLiteral2161;
extern "C" void RealProxy__ctor_m10509 (RealProxy_t1692 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		_stringLiteral2160 = il2cpp_codegen_string_literal_from_index(2160);
		_stringLiteral2161 = il2cpp_codegen_string_literal_from_index(2161);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____targetDomainId_1 = (-1);
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___classToProxy;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_2 = ___classToProxy;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t626 * L_4 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_4, _stringLiteral2160, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002e:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m5395(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		NotSupportedException_t45 * L_9 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m6441(L_9, _stringLiteral2161, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0050:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m10510 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Type_t * (*RealProxy_InternalGetProxyType_m10510_ftn) (Object_t *);
	return  ((RealProxy_InternalGetProxyType_m10510_ftn)mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetProxyType) (___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern const Il2CppType* MarshalByRefObject_t1213_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * RealProxy_GetProxiedType_m10511 (RealProxy_t1692 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t1213_0_0_0_var = il2cpp_codegen_type_from_index(922);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_1 = (__this->___class_to_proxy_0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t1213_0_0_0_var), /*hidden argument*/NULL);
		return L_3;
	}

IL_0026:
	{
		Type_t * L_4 = (__this->___class_to_proxy_0);
		return L_4;
	}

IL_002d:
	{
		Object_t * L_5 = (__this->____objTP_4);
		Type_t * L_6 = RealProxy_InternalGetProxyType_m10510(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m10512 (RealProxy_t1692 * __this, String_t* ___className, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m10512_ftn) (RealProxy_t1692 *, String_t*);
	return  ((RealProxy_InternalGetTransparentProxy_m10512_ftn)mscorlib::System::Runtime::Remoting::Proxies::RealProxy::InternalGetTransparentProxy) (__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern const Il2CppType* MarshalByRefObject_t1213_0_0_0_var;
extern TypeInfo* IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RealProxy_GetTransparentProxy_m10513 (RealProxy_t1692 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t1213_0_0_0_var = il2cpp_codegen_type_from_index(922);
		IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1140);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(__this, IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t1213_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m400(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}

IL_003f:
	{
		Type_t * L_9 = (__this->___class_to_proxy_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_9);
		V_0 = L_10;
	}

IL_004b:
	{
		goto IL_005c;
	}

IL_0050:
	{
		Type_t * L_11 = (__this->___class_to_proxy_0);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_11);
		V_0 = L_12;
	}

IL_005c:
	{
		String_t* L_13 = V_0;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String) */, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_0069:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C" void RealProxy_SetTargetDomain_m10514 (RealProxy_t1692 * __this, int32_t ___domainId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___domainId;
		__this->____targetDomainId_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RemotingProxy__ctor_m10515 (RemotingProxy_t1696 * __this, Type_t * ___type, ClientIdentity_t1704 * ___identity, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t1704 * L_1 = ___identity;
		RealProxy__ctor_m10508(__this, L_0, L_1, /*hidden argument*/NULL);
		ClientIdentity_t1704 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m10533(L_2, /*hidden argument*/NULL);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t1704 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m10542(L_4, /*hidden argument*/NULL);
		((RealProxy_t1692 *)__this)->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m10516 (RemotingProxy_t1696 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t38* ___activationAttributes, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m10507(__this, L_0, /*hidden argument*/NULL);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t38* L_3 = ___activationAttributes;
		ConstructionCall_t1669 * L_4 = ActivationServices_CreateConstructionCall_m10283(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1696_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2162;
extern Il2CppCodeGenString* _stringLiteral2163;
extern "C" void RemotingProxy__cctor_m10517 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		RemotingProxy_t1696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1139);
		_stringLiteral2162 = il2cpp_codegen_string_literal_from_index(2162);
		_stringLiteral2163 = il2cpp_codegen_string_literal_from_index(2163);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_0, _stringLiteral2162);
		((RemotingProxy_t1696_StaticFields*)RemotingProxy_t1696_il2cpp_TypeInfo_var->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(46 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_2, _stringLiteral2163);
		((RemotingProxy_t1696_StaticFields*)RemotingProxy_t1696_il2cpp_TypeInfo_var->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern TypeInfo* ClientIdentity_t1704_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingProxy_get_TypeName_m10518 (RemotingProxy_t1696 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientIdentity_t1704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1141);
		IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1140);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t1702 * V_0 = {0};
	{
		Identity_t1694 * L_0 = (((RealProxy_t1692 *)__this)->____objectIdentity_3);
		if (!((ClientIdentity_t1704 *)IsInst(L_0, ClientIdentity_t1704_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		Identity_t1694 * L_1 = (((RealProxy_t1692 *)__this)->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t1702 * L_2 = (ObjRef_t1702 *)VirtFuncInvoker1< ObjRef_t1702 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t1702 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_3);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		ObjRef_t1702 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_0034:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m10511(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern TypeInfo* ClientActivatedIdentity_t1717_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy_Finalize_m10519 (RemotingProxy_t1696 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t1717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1142);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
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
			Identity_t1694 * L_0 = (((RealProxy_t1692 *)__this)->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0026;
			}
		}

IL_000b:
		{
			Identity_t1694 * L_1 = (((RealProxy_t1692 *)__this)->____objectIdentity_3);
			if (((ClientActivatedIdentity_t1717 *)IsInst(L_1, ClientActivatedIdentity_t1717_il2cpp_TypeInfo_var)))
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			Identity_t1694 * L_2 = (((RealProxy_t1692 *)__this)->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m10634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		}

IL_0026:
		{
			IL2CPP_LEAVE(0x32, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5346(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0032:
	{
		return;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t1697_il2cpp_TypeInfo_var;
extern "C" void TrackingServices__cctor_m10520 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		TrackingServices_t1697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1143);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t64 * L_0 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_0, /*hidden argument*/NULL);
		((TrackingServices_t1697_StaticFields*)TrackingServices_t1697_il2cpp_TypeInfo_var->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const Il2CppType* ITrackingHandler_t2004_0_0_0_var;
extern TypeInfo* TrackingServices_t1697_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t2003_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t2004_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m10521 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t1702 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t2004_0_0_0_var = il2cpp_codegen_type_from_index(1144);
		TrackingServices_t1697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1143);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ITrackingHandlerU5BU5D_t2003_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1145);
		ITrackingHandler_t2004_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1144);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t2003* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1697_il2cpp_TypeInfo_var);
		ArrayList_t64 * L_0 = ((TrackingServices_t1697_StaticFields*)TrackingServices_t1697_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1697_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_3 = ((TrackingServices_t1697_StaticFields*)TrackingServices_t1697_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0044);
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1697_il2cpp_TypeInfo_var);
			ArrayList_t64 * L_5 = ((TrackingServices_t1697_StaticFields*)TrackingServices_t1697_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t2004_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(47 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t2003*)Castclass(L_7, ITrackingHandlerU5BU5D_t2003_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x4B, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_004b:
	{
		V_2 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		ITrackingHandlerU5BU5D_t2003* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t1702 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t1702 * >::Invoke(0 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::UnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t2004_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t2003* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0052;
		}
	}

IL_0069:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"

// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ActivatedClientTypeEntry::.ctor(System.String,System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2164;
extern Il2CppCodeGenString* _stringLiteral126;
extern "C" void ActivatedClientTypeEntry__ctor_m10522 (ActivatedClientTypeEntry_t1698 * __this, String_t* ___typeName, String_t* ___assemblyName, String_t* ___appUrl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2164 = il2cpp_codegen_string_literal_from_index(2164);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t1333 * V_0 = {0};
	{
		TypeEntry__ctor_m10659(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___assemblyName;
		TypeEntry_set_AssemblyName_m10661(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___typeName;
		TypeEntry_set_TypeName_m10663(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___appUrl;
		__this->___applicationUrl_2 = L_2;
		String_t* L_3 = ___assemblyName;
		Assembly_t1333 * L_4 = Assembly_Load_m9965(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Assembly_t1333 * L_5 = V_0;
		String_t* L_6 = ___typeName;
		NullCheck(L_5);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_5, L_6);
		__this->___obj_type_3 = L_7;
		Type_t * L_8 = (__this->___obj_type_3);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_9 = ___typeName;
		String_t* L_10 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m5477(NULL /*static, unused*/, _stringLiteral2164, L_9, _stringLiteral126, L_10, /*hidden argument*/NULL);
		RemotingException_t1714 * L_12 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0051:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m10523 (ActivatedClientTypeEntry_t1698 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C" IContextAttributeU5BU5D_t1985* ActivatedClientTypeEntry_get_ContextAttributes_m10524 (ActivatedClientTypeEntry_t1698 * __this, const MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t1985*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m10525 (ActivatedClientTypeEntry_t1698 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m10526 (ActivatedClientTypeEntry_t1698 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_TypeName_m10662(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_AssemblyName_m10660(__this, /*hidden argument*/NULL);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m10523(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2098(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntry.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ActivatedServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntryMethodDeclarations.h"



// System.Void System.Runtime.Remoting.ActivatedServiceTypeEntry::.ctor(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2164;
extern Il2CppCodeGenString* _stringLiteral126;
extern "C" void ActivatedServiceTypeEntry__ctor_m10527 (ActivatedServiceTypeEntry_t1700 * __this, String_t* ___typeName, String_t* ___assemblyName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2164 = il2cpp_codegen_string_literal_from_index(2164);
		_stringLiteral126 = il2cpp_codegen_string_literal_from_index(126);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t1333 * V_0 = {0};
	{
		TypeEntry__ctor_m10659(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___assemblyName;
		TypeEntry_set_AssemblyName_m10661(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___typeName;
		TypeEntry_set_TypeName_m10663(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___assemblyName;
		Assembly_t1333 * L_3 = Assembly_Load_m9965(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t1333 * L_4 = V_0;
		String_t* L_5 = ___typeName;
		NullCheck(L_4);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(13 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		__this->___obj_type_2 = L_6;
		Type_t * L_7 = (__this->___obj_type_2);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_8 = ___typeName;
		String_t* L_9 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m5477(NULL /*static, unused*/, _stringLiteral2164, L_8, _stringLiteral126, L_9, /*hidden argument*/NULL);
		RemotingException_t1714 * L_11 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004a:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedServiceTypeEntry_get_ObjectType_m10528 (ActivatedServiceTypeEntry_t1700 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_2);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedServiceTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedServiceTypeEntry_ToString_m10529 (ActivatedServiceTypeEntry_t1700 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_AssemblyName_m10660(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_TypeName_m10662(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m421(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void EnvoyInfo__ctor_m10530 (EnvoyInfo_t1701 * __this, Object_t * ___sinks, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___sinks;
		__this->___envoySinks_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m10531 (EnvoyInfo_t1701 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoySinks_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C" void Identity__ctor_m10532 (Identity_t1694 * __this, String_t* ___objectUri, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___objectUri;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m10533 (Identity_t1694 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____channelSink_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m10534 (Identity_t1694 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____channelSink_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m10535 (Identity_t1694 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m10536 (Identity_t1694 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____disposed_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C" void Identity_set_Disposed_m10537 (Identity_t1694 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____disposed_4 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern TypeInfo* IEnvoyInfo_t1708_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity__ctor_m10538 (ClientIdentity_t1704 * __this, String_t* ___objectUri, ObjRef_t1702 * ___objRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnvoyInfo_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1146);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ClientIdentity_t1704 * G_B2_0 = {0};
	ClientIdentity_t1704 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	ClientIdentity_t1704 * G_B3_1 = {0};
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m10532(__this, L_0, /*hidden argument*/NULL);
		ObjRef_t1702 * L_1 = ___objRef;
		((Identity_t1694 *)__this)->____objRef_3 = L_1;
		ObjRef_t1702 * L_2 = (((Identity_t1694 *)__this)->____objRef_3);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0036;
		}
	}
	{
		ObjRef_t1702 * L_4 = (((Identity_t1694 *)__this)->____objRef_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.IEnvoyInfo::get_EnvoySinks() */, IEnvoyInfo_t1708_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Object_t * L_7 = V_0;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_0036:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		NullCheck(G_B3_1);
		((Identity_t1694 *)G_B3_1)->____envoySink_2 = G_B3_0;
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern TypeInfo* MarshalByRefObject_t1213_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t1213 * ClientIdentity_get_ClientProxy_m10539 (ClientIdentity_t1704 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t1213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	{
		WeakReference_t1703 * L_0 = (__this->____proxyReference_5);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.WeakReference::get_Target() */, L_0);
		return ((MarshalByRefObject_t1213 *)Castclass(L_1, MarshalByRefObject_t1213_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern TypeInfo* WeakReference_t1703_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity_set_ClientProxy_m10540 (ClientIdentity_t1704 * __this, MarshalByRefObject_t1213 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t1703_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1147);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t1213 * L_0 = ___value;
		WeakReference_t1703 * L_1 = (WeakReference_t1703 *)il2cpp_codegen_object_new (WeakReference_t1703_il2cpp_TypeInfo_var);
		WeakReference__ctor_m12392(L_1, L_0, /*hidden argument*/NULL);
		__this->____proxyReference_5 = L_1;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1702 * ClientIdentity_CreateObjRef_m10541 (ClientIdentity_t1704 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	{
		ObjRef_t1702 * L_0 = (((Identity_t1694 *)__this)->____objRef_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m10542 (ClientIdentity_t1704 * __this, const MethodInfo* method)
{
	{
		ObjRef_t1702 * L_0 = (((Identity_t1694 *)__this)->____objRef_3);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		return L_1;
	}
}
// System.Runtime.Remoting.InternalRemotingServices
#include "mscorlib_System_Runtime_Remoting_InternalRemotingServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.InternalRemotingServices
#include "mscorlib_System_Runtime_Remoting_InternalRemotingServicesMethodDeclarations.h"



// System.Void System.Runtime.Remoting.InternalRemotingServices::.cctor()
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern TypeInfo* InternalRemotingServices_t1705_il2cpp_TypeInfo_var;
extern "C" void InternalRemotingServices__cctor_m10543 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		InternalRemotingServices_t1705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t24 * L_0 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_0, /*hidden argument*/NULL);
		((InternalRemotingServices_t1705_StaticFields*)InternalRemotingServices_t1705_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Metadata.SoapAttribute System.Runtime.Remoting.InternalRemotingServices::GetCachedSoapAttribute(System.Object)
extern const Il2CppType* SoapAttribute_t1686_0_0_0_var;
extern TypeInfo* InternalRemotingServices_t1705_il2cpp_TypeInfo_var;
extern TypeInfo* SoapAttribute_t1686_il2cpp_TypeInfo_var;
extern TypeInfo* ICustomAttributeProvider_t1987_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapTypeAttribute_t1690_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapFieldAttribute_t1687_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBase_t961_il2cpp_TypeInfo_var;
extern TypeInfo* SoapMethodAttribute_t1688_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t952_il2cpp_TypeInfo_var;
extern TypeInfo* SoapParameterAttribute_t1689_il2cpp_TypeInfo_var;
extern "C" SoapAttribute_t1686 * InternalRemotingServices_GetCachedSoapAttribute_m10544 (Object_t * __this /* static, unused */, Object_t * ___reflectionObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapAttribute_t1686_0_0_0_var = il2cpp_codegen_type_from_index(1149);
		InternalRemotingServices_t1705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1148);
		SoapAttribute_t1686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1149);
		ICustomAttributeProvider_t1987_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1150);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		SoapTypeAttribute_t1690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1151);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(558);
		SoapFieldAttribute_t1687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1152);
		MethodBase_t961_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1047);
		SoapMethodAttribute_t1688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1153);
		ParameterInfo_t952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		SoapParameterAttribute_t1689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1154);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	SoapAttribute_t1686 * V_1 = {0};
	Object_t * V_2 = {0};
	ObjectU5BU5D_t38* V_3 = {0};
	SoapAttribute_t1686 * V_4 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1705_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((InternalRemotingServices_t1705_StaticFields*)InternalRemotingServices_t1705_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1705_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_3 = ((InternalRemotingServices_t1705_StaticFields*)InternalRemotingServices_t1705_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
			Object_t * L_4 = ___reflectionObject;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
			V_1 = ((SoapAttribute_t1686 *)IsInst(L_5, SoapAttribute_t1686_il2cpp_TypeInfo_var));
			SoapAttribute_t1686 * L_6 = V_1;
			if (!L_6)
			{
				goto IL_0030;
			}
		}

IL_0028:
		{
			SoapAttribute_t1686 * L_7 = V_1;
			V_4 = L_7;
			IL2CPP_LEAVE(0xDA, FINALLY_00d3);
		}

IL_0030:
		{
			Object_t * L_8 = ___reflectionObject;
			V_2 = ((Object_t *)Castclass(L_8, ICustomAttributeProvider_t1987_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_10 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(SoapAttribute_t1686_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_9);
			ObjectU5BU5D_t38* L_11 = (ObjectU5BU5D_t38*)InterfaceFuncInvoker2< ObjectU5BU5D_t38*, Type_t *, bool >::Invoke(0 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean) */, ICustomAttributeProvider_t1987_il2cpp_TypeInfo_var, L_9, L_10, 1);
			V_3 = L_11;
			ObjectU5BU5D_t38* L_12 = V_3;
			NullCheck(L_12);
			if ((((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))) <= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_0052:
		{
			ObjectU5BU5D_t38* L_13 = V_3;
			NullCheck(L_13);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 0);
			int32_t L_14 = 0;
			V_1 = ((SoapAttribute_t1686 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)), SoapAttribute_t1686_il2cpp_TypeInfo_var));
			goto IL_00b3;
		}

IL_0060:
		{
			Object_t * L_15 = ___reflectionObject;
			if (!((Type_t *)IsInst(L_15, Type_t_il2cpp_TypeInfo_var)))
			{
				goto IL_0076;
			}
		}

IL_006b:
		{
			SoapTypeAttribute_t1690 * L_16 = (SoapTypeAttribute_t1690 *)il2cpp_codegen_object_new (SoapTypeAttribute_t1690_il2cpp_TypeInfo_var);
			SoapTypeAttribute__ctor_m10494(L_16, /*hidden argument*/NULL);
			V_1 = L_16;
			goto IL_00b3;
		}

IL_0076:
		{
			Object_t * L_17 = ___reflectionObject;
			if (!((FieldInfo_t *)IsInst(L_17, FieldInfo_t_il2cpp_TypeInfo_var)))
			{
				goto IL_008c;
			}
		}

IL_0081:
		{
			SoapFieldAttribute_t1687 * L_18 = (SoapFieldAttribute_t1687 *)il2cpp_codegen_object_new (SoapFieldAttribute_t1687_il2cpp_TypeInfo_var);
			SoapFieldAttribute__ctor_m10485(L_18, /*hidden argument*/NULL);
			V_1 = L_18;
			goto IL_00b3;
		}

IL_008c:
		{
			Object_t * L_19 = ___reflectionObject;
			if (!((MethodBase_t961 *)IsInst(L_19, MethodBase_t961_il2cpp_TypeInfo_var)))
			{
				goto IL_00a2;
			}
		}

IL_0097:
		{
			SoapMethodAttribute_t1688 * L_20 = (SoapMethodAttribute_t1688 *)il2cpp_codegen_object_new (SoapMethodAttribute_t1688_il2cpp_TypeInfo_var);
			SoapMethodAttribute__ctor_m10489(L_20, /*hidden argument*/NULL);
			V_1 = L_20;
			goto IL_00b3;
		}

IL_00a2:
		{
			Object_t * L_21 = ___reflectionObject;
			if (!((ParameterInfo_t952 *)IsInst(L_21, ParameterInfo_t952_il2cpp_TypeInfo_var)))
			{
				goto IL_00b3;
			}
		}

IL_00ad:
		{
			SoapParameterAttribute_t1689 * L_22 = (SoapParameterAttribute_t1689 *)il2cpp_codegen_object_new (SoapParameterAttribute_t1689_il2cpp_TypeInfo_var);
			SoapParameterAttribute__ctor_m10493(L_22, /*hidden argument*/NULL);
			V_1 = L_22;
		}

IL_00b3:
		{
			SoapAttribute_t1686 * L_23 = V_1;
			Object_t * L_24 = ___reflectionObject;
			NullCheck(L_23);
			VirtActionInvoker1< Object_t * >::Invoke(6 /* System.Void System.Runtime.Remoting.Metadata.SoapAttribute::SetReflectionObject(System.Object) */, L_23, L_24);
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1705_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_25 = ((InternalRemotingServices_t1705_StaticFields*)InternalRemotingServices_t1705_il2cpp_TypeInfo_var->static_fields)->____soapAttributes_0;
			Object_t * L_26 = ___reflectionObject;
			SoapAttribute_t1686 * L_27 = V_1;
			NullCheck(L_25);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_25, L_26, L_27);
			SoapAttribute_t1686 * L_28 = V_1;
			V_4 = L_28;
			IL2CPP_LEAVE(0xDA, FINALLY_00d3);
		}

IL_00ce:
		{
			; // IL_00ce: leave IL_00da
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_00d3;
	}

FINALLY_00d3:
	{ // begin finally (depth: 1)
		Object_t * L_29 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(211)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(211)
	{
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_00da:
	{
		SoapAttribute_t1686 * L_30 = V_4;
		return L_30;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C" void ObjRef__ctor_m10545 (ObjRef_t1702 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		ObjRef_UpdateChannelInfo_m10558(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t1702_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelInfo_t1706_il2cpp_TypeInfo_var;
extern TypeInfo* IEnvoyInfo_t1708_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t1992_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t912_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t45_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral896;
extern Il2CppCodeGenString* _stringLiteral2165;
extern Il2CppCodeGenString* _stringLiteral2166;
extern Il2CppCodeGenString* _stringLiteral2167;
extern Il2CppCodeGenString* _stringLiteral2168;
extern Il2CppCodeGenString* _stringLiteral2169;
extern "C" void ObjRef__ctor_m10546 (ObjRef_t1702 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1140);
		IChannelInfo_t1706_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1155);
		IEnvoyInfo_t1708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1146);
		IConvertible_t1992_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(915);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Convert_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		NotSupportedException_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral896 = il2cpp_codegen_string_literal_from_index(896);
		_stringLiteral2165 = il2cpp_codegen_string_literal_from_index(2165);
		_stringLiteral2166 = il2cpp_codegen_string_literal_from_index(2166);
		_stringLiteral2167 = il2cpp_codegen_string_literal_from_index(2167);
		_stringLiteral2168 = il2cpp_codegen_string_literal_from_index(2168);
		_stringLiteral2169 = il2cpp_codegen_string_literal_from_index(2169);
		s_Il2CppMethodIntialized = true;
	}
	SerializationInfoEnumerator_t1759 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t33 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t1759 * L_1 = SerializationInfo_GetEnumerator_m10788(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 1;
		goto IL_016d;
	}

IL_0014:
	{
		SerializationInfoEnumerator_t1759 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfoEnumerator_get_Name_m10797(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_0167;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1702_il2cpp_TypeInfo_var);
		Dictionary_2_t33 * L_5 = ((ObjRef_t1702_StaticFields*)ObjRef_t1702_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		if (L_5)
		{
			goto IL_008a;
		}
	}
	{
		Dictionary_2_t33 * L_6 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_6, 6, /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_5 = L_6;
		Dictionary_2_t33 * L_7 = V_5;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral896, 0);
		Dictionary_2_t33 * L_8 = V_5;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2165, 1);
		Dictionary_2_t33 * L_9 = V_5;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2166, 2);
		Dictionary_2_t33 * L_10 = V_5;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2167, 3);
		Dictionary_2_t33 * L_11 = V_5;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral2168, 4);
		Dictionary_2_t33 * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, _stringLiteral2169, 5);
		Dictionary_2_t33 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1702_il2cpp_TypeInfo_var);
		((ObjRef_t1702_StaticFields*)ObjRef_t1702_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8 = L_13;
	}

IL_008a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1702_il2cpp_TypeInfo_var);
		Dictionary_2_t33 * L_14 = ((ObjRef_t1702_StaticFields*)ObjRef_t1702_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_14, L_15, (&V_6));
		if (!L_16)
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_17 = V_6;
		if (L_17 == 0)
		{
			goto IL_00c1;
		}
		if (L_17 == 1)
		{
			goto IL_00d7;
		}
		if (L_17 == 2)
		{
			goto IL_00ed;
		}
		if (L_17 == 3)
		{
			goto IL_0103;
		}
		if (L_17 == 4)
		{
			goto IL_0119;
		}
		if (L_17 == 5)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_0167;
	}

IL_00c1:
	{
		SerializationInfoEnumerator_t1759 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = SerializationInfoEnumerator_get_Value_m10798(L_18, /*hidden argument*/NULL);
		__this->___uri_1 = ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_00d7:
	{
		SerializationInfoEnumerator_t1759 * L_20 = V_0;
		NullCheck(L_20);
		Object_t * L_21 = SerializationInfoEnumerator_get_Value_m10798(L_20, /*hidden argument*/NULL);
		__this->___typeInfo_2 = ((Object_t *)Castclass(L_21, IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_00ed:
	{
		SerializationInfoEnumerator_t1759 * L_22 = V_0;
		NullCheck(L_22);
		Object_t * L_23 = SerializationInfoEnumerator_get_Value_m10798(L_22, /*hidden argument*/NULL);
		__this->___channel_info_0 = ((Object_t *)Castclass(L_23, IChannelInfo_t1706_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_0103:
	{
		SerializationInfoEnumerator_t1759 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = SerializationInfoEnumerator_get_Value_m10798(L_24, /*hidden argument*/NULL);
		__this->___envoyInfo_3 = ((Object_t *)Castclass(L_25, IEnvoyInfo_t1708_il2cpp_TypeInfo_var));
		goto IL_016d;
	}

IL_0119:
	{
		SerializationInfoEnumerator_t1759 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = SerializationInfoEnumerator_get_Value_m10798(L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		Object_t * L_28 = V_3;
		if (!((String_t*)IsInst(L_28, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_013d;
		}
	}
	{
		Object_t * L_29 = V_3;
		NullCheck(((Object_t *)Castclass(L_29, IConvertible_t1992_il2cpp_TypeInfo_var)));
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t1992_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IConvertible_t1992_il2cpp_TypeInfo_var)), (Object_t *)NULL);
		V_2 = L_30;
		goto IL_0144;
	}

IL_013d:
	{
		Object_t * L_31 = V_3;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_31, Int32_t39_il2cpp_TypeInfo_var))));
	}

IL_0144:
	{
		int32_t L_32 = V_2;
		if (L_32)
		{
			goto IL_014c;
		}
	}
	{
		V_1 = 0;
	}

IL_014c:
	{
		goto IL_016d;
	}

IL_0151:
	{
		SerializationInfoEnumerator_t1759 * L_33 = V_0;
		NullCheck(L_33);
		Object_t * L_34 = SerializationInfoEnumerator_get_Value_m10798(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t912_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m5405(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		__this->___flags_4 = L_35;
		goto IL_016d;
	}

IL_0167:
	{
		NotSupportedException_t45 * L_36 = (NotSupportedException_t45 *)il2cpp_codegen_object_new (NotSupportedException_t45_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m309(L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_016d:
	{
		SerializationInfoEnumerator_t1759 * L_37 = V_0;
		NullCheck(L_37);
		bool L_38 = SerializationInfoEnumerator_MoveNext_m10799(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0014;
		}
	}
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_40 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1702_il2cpp_TypeInfo_var);
		int32_t L_41 = ((ObjRef_t1702_StaticFields*)ObjRef_t1702_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		__this->___flags_4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0190:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern TypeInfo* ObjRef_t1702_il2cpp_TypeInfo_var;
extern "C" void ObjRef__cctor_m10547 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ObjRef_t1702_StaticFields*)ObjRef_t1702_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6 = 1;
		((ObjRef_t1702_StaticFields*)ObjRef_t1702_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7 = 2;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern TypeInfo* ObjRef_t1702_il2cpp_TypeInfo_var;
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m10548 (ObjRef_t1702 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1702_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t1702_StaticFields*)ObjRef_t1702_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C" Object_t * ObjRef_get_ChannelInfo_m10549 (ObjRef_t1702 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___channel_info_0);
		return L_0;
	}
}
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m10550 (ObjRef_t1702 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoyInfo_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C" void ObjRef_set_EnvoyInfo_m10551 (ObjRef_t1702 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___envoyInfo_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m10552 (ObjRef_t1702 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___typeInfo_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C" void ObjRef_set_TypeInfo_m10553 (ObjRef_t1702 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___typeInfo_2 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m10554 (ObjRef_t1702 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C" void ObjRef_set_URI_m10555 (ObjRef_t1702 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* IRemotingTypeInfo_t1707_0_0_0_var;
extern const Il2CppType* IEnvoyInfo_t1708_0_0_0_var;
extern const Il2CppType* IChannelInfo_t1706_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral896;
extern Il2CppCodeGenString* _stringLiteral2165;
extern Il2CppCodeGenString* _stringLiteral2167;
extern Il2CppCodeGenString* _stringLiteral2166;
extern Il2CppCodeGenString* _stringLiteral2169;
extern "C" void ObjRef_GetObjectData_m10556 (ObjRef_t1702 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t1707_0_0_0_var = il2cpp_codegen_type_from_index(1140);
		IEnvoyInfo_t1708_0_0_0_var = il2cpp_codegen_type_from_index(1146);
		IChannelInfo_t1706_0_0_0_var = il2cpp_codegen_type_from_index(1155);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral896 = il2cpp_codegen_string_literal_from_index(896);
		_stringLiteral2165 = il2cpp_codegen_string_literal_from_index(2165);
		_stringLiteral2167 = il2cpp_codegen_string_literal_from_index(2167);
		_stringLiteral2166 = il2cpp_codegen_string_literal_from_index(2166);
		_stringLiteral2169 = il2cpp_codegen_string_literal_from_index(2169);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t900 * L_0 = ___info;
		Type_t * L_1 = Object_GetType_m337(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m10787(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_2 = ___info;
		String_t* L_3 = (__this->___uri_1);
		NullCheck(L_2);
		SerializationInfo_AddValue_m6487(L_2, _stringLiteral896, L_3, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_4 = ___info;
		Object_t * L_5 = (__this->___typeInfo_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IRemotingTypeInfo_t1707_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m7451(L_4, _stringLiteral2165, L_5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_7 = ___info;
		Object_t * L_8 = (__this->___envoyInfo_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IEnvoyInfo_t1708_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m7451(L_7, _stringLiteral2167, L_8, L_9, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_10 = ___info;
		Object_t * L_11 = (__this->___channel_info_0);
		Type_t * L_12 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(IChannelInfo_t1706_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m7451(L_10, _stringLiteral2166, L_11, L_12, /*hidden argument*/NULL);
		SerializationInfo_t900 * L_13 = ___info;
		int32_t L_14 = (__this->___flags_4);
		NullCheck(L_13);
		SerializationInfo_AddValue_m7453(L_13, _stringLiteral2169, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t1702_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRef_GetRealObject_m10557 (ObjRef_t1702 * __this, StreamingContext_t901  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t1702_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t1702_StaticFields*)ObjRef_t1702_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_Unmarshal_m10616(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0019:
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern TypeInfo* ChannelInfo_t1648_il2cpp_TypeInfo_var;
extern "C" void ObjRef_UpdateChannelInfo_m10558 (ObjRef_t1702 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelInfo_t1648_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1156);
		s_Il2CppMethodIntialized = true;
	}
	{
		ChannelInfo_t1648 * L_0 = (ChannelInfo_t1648 *)il2cpp_codegen_object_new (ChannelInfo_t1648_il2cpp_TypeInfo_var);
		ChannelInfo__ctor_m10294(L_0, /*hidden argument*/NULL);
		__this->___channel_info_0 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern TypeInfo* IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjRef_get_ServerType_m10559 (ObjRef_t1702 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1140);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____serverType_5);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		Object_t * L_1 = (__this->___typeInfo_2);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t1707_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetType_m8279(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->____serverType_5 = L_3;
	}

IL_0021:
	{
		Type_t * L_4 = (__this->____serverType_5);
		return L_4;
	}
}
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfiguration.h"
#ifndef _MSC_VER
#else
#endif

// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandler.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntry.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntry.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntry.h"
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParserMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.Runtime.Remoting.ConfigHandler
#include "mscorlib_System_Runtime_Remoting_ConfigHandlerMethodDeclarations.h"
// System.Runtime.Remoting.WellKnownClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.WellKnownServiceTypeEntry
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntryMethodDeclarations.h"
// System.Runtime.Remoting.ProviderData
#include "mscorlib_System_Runtime_Remoting_ProviderDataMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration__cctor_m10560 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___applicationID_0 = (String_t*)NULL;
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = (String_t*)NULL;
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = (String_t*)NULL;
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3 = 0;
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 0;
		Hashtable_t24 * L_0 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_0, /*hidden argument*/NULL);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6 = L_0;
		Hashtable_t24 * L_1 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_1, /*hidden argument*/NULL);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7 = L_1;
		Hashtable_t24 * L_2 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_2, /*hidden argument*/NULL);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_8 = L_2;
		Hashtable_t24 * L_3 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_3, /*hidden argument*/NULL);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_9 = L_3;
		Hashtable_t24 * L_4 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_4, /*hidden argument*/NULL);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10 = L_4;
		Hashtable_t24 * L_5 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_5, /*hidden argument*/NULL);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11 = L_5;
		Hashtable_t24 * L_6 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_6, /*hidden argument*/NULL);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12 = L_6;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m10561 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___applicationName_1;
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_set_ApplicationName_m10562 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ProcessId_m10563 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = AppDomain_GetProcessGuid_m11616(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		String_t* L_2 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* SmallXmlParser_t1439_il2cpp_TypeInfo_var;
extern TypeInfo* StreamReader_t1519_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigHandler_t1711_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_LoadDefaultDelayedChannels_m10564 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		SmallXmlParser_t1439_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(979);
		StreamReader_t1519_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1011);
		ConfigHandler_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1157);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t24 * V_0 = {0};
	SmallXmlParser_t1439 * V_1 = {0};
	TextReader_t1442 * V_2 = {0};
	ConfigHandler_t1711 * V_3 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t24 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			bool L_2 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4;
			if (L_2)
			{
				goto IL_0020;
			}
		}

IL_0016:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			bool L_3 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3;
			if (!L_3)
			{
				goto IL_0025;
			}
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}

IL_0025:
		{
			SmallXmlParser_t1439 * L_4 = (SmallXmlParser_t1439 *)il2cpp_codegen_object_new (SmallXmlParser_t1439_il2cpp_TypeInfo_var);
			SmallXmlParser__ctor_m8837(L_4, /*hidden argument*/NULL);
			V_1 = L_4;
			String_t* L_5 = Environment_GetMachineConfigPath_m12011(NULL /*static, unused*/, /*hidden argument*/NULL);
			StreamReader_t1519 * L_6 = (StreamReader_t1519 *)il2cpp_codegen_object_new (StreamReader_t1519_il2cpp_TypeInfo_var);
			StreamReader__ctor_m9570(L_6, L_5, /*hidden argument*/NULL);
			V_2 = L_6;
		}

IL_0036:
		try
		{ // begin try (depth: 2)
			ConfigHandler_t1711 * L_7 = (ConfigHandler_t1711 *)il2cpp_codegen_object_new (ConfigHandler_t1711_il2cpp_TypeInfo_var);
			ConfigHandler__ctor_m10576(L_7, 1, /*hidden argument*/NULL);
			V_3 = L_7;
			SmallXmlParser_t1439 * L_8 = V_1;
			TextReader_t1442 * L_9 = V_2;
			ConfigHandler_t1711 * L_10 = V_3;
			NullCheck(L_8);
			SmallXmlParser_Parse_m8850(L_8, L_9, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x57, FINALLY_004a);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t54 *)e.ex;
			goto FINALLY_004a;
		}

FINALLY_004a:
		{ // begin finally (depth: 2)
			{
				TextReader_t1442 * L_11 = V_2;
				if (!L_11)
				{
					goto IL_0056;
				}
			}

IL_0050:
			{
				TextReader_t1442 * L_12 = V_2;
				NullCheck(L_12);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_12);
			}

IL_0056:
			{
				IL2CPP_END_FINALLY(74)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(74)
		{
			IL2CPP_JUMP_TBL(0x57, IL_0057)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 1;
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_13 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0069:
	{
		return;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var;
extern "C" ActivatedClientTypeEntry_t1698 * RemotingConfiguration_IsRemotelyActivatedClientType_m10565 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1158);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t24 * V_0 = {0};
	ActivatedClientTypeEntry_t1698 * V_1 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t24 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_2 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			Type_t * L_3 = ___svrType;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((ActivatedClientTypeEntry_t1698 *)IsInst(L_4, ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x2E, FINALLY_0027);
		}

IL_0022:
		{
			; // IL_0022: leave IL_002e
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_5 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_002e:
	{
		ActivatedClientTypeEntry_t1698 * L_6 = V_1;
		return L_6;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2170;
extern Il2CppCodeGenString* _stringLiteral2171;
extern "C" void RemotingConfiguration_RegisterActivatedClientType_m10566 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1698 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2170 = il2cpp_codegen_string_literal_from_index(2170);
		_stringLiteral2171 = il2cpp_codegen_string_literal_from_index(2171);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t24 * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t24 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_2 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			ActivatedClientTypeEntry_t1698 * L_3 = ___entry;
			NullCheck(L_3);
			Type_t * L_4 = ActivatedClientTypeEntry_get_ObjectType_m10525(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_6 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			ActivatedClientTypeEntry_t1698 * L_7 = ___entry;
			NullCheck(L_7);
			Type_t * L_8 = ActivatedClientTypeEntry_get_ObjectType_m10525(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_6, L_8);
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			ActivatedClientTypeEntry_t1698 * L_10 = ___entry;
			NullCheck(L_10);
			Type_t * L_11 = ActivatedClientTypeEntry_get_ObjectType_m10525(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2170, L_12, _stringLiteral2171, /*hidden argument*/NULL);
			RemotingException_t1714 * L_14 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
			RemotingException__ctor_m10609(L_14, L_13, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_14);
		}

IL_0056:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_15 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			ActivatedClientTypeEntry_t1698 * L_16 = ___entry;
			NullCheck(L_16);
			Type_t * L_17 = ActivatedClientTypeEntry_get_ObjectType_m10525(L_16, /*hidden argument*/NULL);
			ActivatedClientTypeEntry_t1698 * L_18 = ___entry;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_17, L_18);
			ActivatedClientTypeEntry_t1698 * L_19 = ___entry;
			NullCheck(L_19);
			Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m10525(L_19, /*hidden argument*/NULL);
			ActivationServices_EnableProxyActivation_m10285(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_21 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterActivatedServiceType_m10567 (Object_t * __this /* static, unused */, ActivatedServiceTypeEntry_t1700 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t24 * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t24 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_2 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_9;
		ActivatedServiceTypeEntry_t1700 * L_3 = ___entry;
		NullCheck(L_3);
		Type_t * L_4 = ActivatedServiceTypeEntry_get_ObjectType_m10528(L_3, /*hidden argument*/NULL);
		ActivatedServiceTypeEntry_t1700 * L_5 = ___entry;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_4, L_5);
		IL2CPP_LEAVE(0x29, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_6 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2170;
extern Il2CppCodeGenString* _stringLiteral2171;
extern "C" void RemotingConfiguration_RegisterWellKnownClientType_m10568 (Object_t * __this /* static, unused */, WellKnownClientTypeEntry_t1723 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2170 = il2cpp_codegen_string_literal_from_index(2170);
		_stringLiteral2171 = il2cpp_codegen_string_literal_from_index(2171);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t24 * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t24 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_2 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			WellKnownClientTypeEntry_t1723 * L_3 = ___entry;
			NullCheck(L_3);
			Type_t * L_4 = WellKnownClientTypeEntry_get_ObjectType_m10668(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (L_5)
			{
				goto IL_0036;
			}
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_6 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_7;
			WellKnownClientTypeEntry_t1723 * L_7 = ___entry;
			NullCheck(L_7);
			Type_t * L_8 = WellKnownClientTypeEntry_get_ObjectType_m10668(L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_6, L_8);
			if (!L_9)
			{
				goto IL_0056;
			}
		}

IL_0036:
		{
			WellKnownClientTypeEntry_t1723 * L_10 = ___entry;
			NullCheck(L_10);
			Type_t * L_11 = WellKnownClientTypeEntry_get_ObjectType_m10668(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_11);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2170, L_12, _stringLiteral2171, /*hidden argument*/NULL);
			RemotingException_t1714 * L_14 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
			RemotingException__ctor_m10609(L_14, L_13, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_14);
		}

IL_0056:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_15 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_6;
			WellKnownClientTypeEntry_t1723 * L_16 = ___entry;
			NullCheck(L_16);
			Type_t * L_17 = WellKnownClientTypeEntry_get_ObjectType_m10668(L_16, /*hidden argument*/NULL);
			WellKnownClientTypeEntry_t1723 * L_18 = ___entry;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_17, L_18);
			WellKnownClientTypeEntry_t1723 * L_19 = ___entry;
			NullCheck(L_19);
			Type_t * L_20 = WellKnownClientTypeEntry_get_ObjectType_m10668(L_19, /*hidden argument*/NULL);
			ActivationServices_EnableProxyActivation_m10285(NULL /*static, unused*/, L_20, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_21 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_007f:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterWellKnownServiceType_m10569 (Object_t * __this /* static, unused */, WellKnownServiceTypeEntry_t1725 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t24 * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		V_0 = L_0;
		Hashtable_t24 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_2 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_8;
		WellKnownServiceTypeEntry_t1725 * L_3 = ___entry;
		NullCheck(L_3);
		String_t* L_4 = WellKnownServiceTypeEntry_get_ObjectUri_m10674(L_3, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1725 * L_5 = ___entry;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_4, L_5);
		WellKnownServiceTypeEntry_t1725 * L_6 = ___entry;
		NullCheck(L_6);
		Type_t * L_7 = WellKnownServiceTypeEntry_get_ObjectType_m10673(L_6, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1725 * L_8 = ___entry;
		NullCheck(L_8);
		String_t* L_9 = WellKnownServiceTypeEntry_get_ObjectUri_m10674(L_8, /*hidden argument*/NULL);
		WellKnownServiceTypeEntry_t1725 * L_10 = ___entry;
		NullCheck(L_10);
		int32_t L_11 = WellKnownServiceTypeEntry_get_Mode_m10672(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		RemotingServices_CreateWellKnownServerIdentity_m10629(NULL /*static, unused*/, L_7, L_9, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x41, FINALLY_003a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_12 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0041:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterChannelTemplate_m10570 (Object_t * __this /* static, unused */, ChannelData_t1710 * ___channel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
		ChannelData_t1710 * L_1 = ___channel;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ChannelData_t1710 * L_3 = ___channel;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterClientProviderTemplate_m10571 (Object_t * __this /* static, unused */, ProviderData_t1712 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11;
		ProviderData_t1712 * L_1 = ___prov;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ProviderData_t1712 * L_3 = ___prov;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterServerProviderTemplate_m10572 (Object_t * __this /* static, unused */, ProviderData_t1712 * ___prov, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12;
		ProviderData_t1712 * L_1 = ___prov;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Id_2);
		ProviderData_t1712 * L_3 = ___prov;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_2, L_3);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelData_t1710_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1712_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral447;
extern Il2CppCodeGenString* _stringLiteral2172;
extern Il2CppCodeGenString* _stringLiteral2120;
extern Il2CppCodeGenString* _stringLiteral2173;
extern "C" void RemotingConfiguration_RegisterChannels_m10573 (Object_t * __this /* static, unused */, ArrayList_t64 * ___channels, bool ___onlyDelayed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		ChannelData_t1710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1159);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		ProviderData_t1712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1107);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		_stringLiteral447 = il2cpp_codegen_string_literal_from_index(447);
		_stringLiteral2172 = il2cpp_codegen_string_literal_from_index(2172);
		_stringLiteral2120 = il2cpp_codegen_string_literal_from_index(2120);
		_stringLiteral2173 = il2cpp_codegen_string_literal_from_index(2173);
		s_Il2CppMethodIntialized = true;
	}
	ChannelData_t1710 * V_0 = {0};
	Object_t * V_1 = {0};
	ChannelData_t1710 * V_2 = {0};
	ProviderData_t1712 * V_3 = {0};
	Object_t * V_4 = {0};
	ProviderData_t1712 * V_5 = {0};
	ProviderData_t1712 * V_6 = {0};
	Object_t * V_7 = {0};
	ProviderData_t1712 * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t64 * L_0 = ___channels;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d4;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_2);
			V_0 = ((ChannelData_t1710 *)Castclass(L_3, ChannelData_t1710_il2cpp_TypeInfo_var));
			bool L_4 = ___onlyDelayed;
			if (!L_4)
			{
				goto IL_0038;
			}
		}

IL_001e:
		{
			ChannelData_t1710 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (L_5->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_7 = String_op_Inequality_m443(NULL /*static, unused*/, L_6, _stringLiteral447, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0038;
			}
		}

IL_0033:
		{
			goto IL_01d4;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			bool L_8 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4;
			if (!L_8)
			{
				goto IL_005c;
			}
		}

IL_0042:
		{
			ChannelData_t1710 * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = (L_9->___DelayLoadAsClientChannel_3);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_11 = String_op_Equality_m400(NULL /*static, unused*/, L_10, _stringLiteral447, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005c;
			}
		}

IL_0057:
		{
			goto IL_01d4;
		}

IL_005c:
		{
			ChannelData_t1710 * L_12 = V_0;
			NullCheck(L_12);
			String_t* L_13 = (L_12->___Ref_0);
			if (!L_13)
			{
				goto IL_00a5;
			}
		}

IL_0067:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_14 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_10;
			ChannelData_t1710 * L_15 = V_0;
			NullCheck(L_15);
			String_t* L_16 = (L_15->___Ref_0);
			NullCheck(L_14);
			Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_14, L_16);
			V_2 = ((ChannelData_t1710 *)Castclass(L_17, ChannelData_t1710_il2cpp_TypeInfo_var));
			ChannelData_t1710 * L_18 = V_2;
			if (L_18)
			{
				goto IL_009e;
			}
		}

IL_0083:
		{
			ChannelData_t1710 * L_19 = V_0;
			NullCheck(L_19);
			String_t* L_20 = (L_19->___Ref_0);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2172, L_20, _stringLiteral2120, /*hidden argument*/NULL);
			RemotingException_t1714 * L_22 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
			RemotingException__ctor_m10609(L_22, L_21, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_22);
		}

IL_009e:
		{
			ChannelData_t1710 * L_23 = V_0;
			ChannelData_t1710 * L_24 = V_2;
			NullCheck(L_23);
			ChannelData_CopyFrom_m10604(L_23, L_24, /*hidden argument*/NULL);
		}

IL_00a5:
		{
			ChannelData_t1710 * L_25 = V_0;
			NullCheck(L_25);
			ArrayList_t64 * L_26 = ChannelData_get_ServerProviders_m10601(L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			Object_t * L_27 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_26);
			V_4 = L_27;
		}

IL_00b2:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0110;
			}

IL_00b7:
			{
				Object_t * L_28 = V_4;
				NullCheck(L_28);
				Object_t * L_29 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_28);
				V_3 = ((ProviderData_t1712 *)Castclass(L_29, ProviderData_t1712_il2cpp_TypeInfo_var));
				ProviderData_t1712 * L_30 = V_3;
				NullCheck(L_30);
				String_t* L_31 = (L_30->___Ref_0);
				if (!L_31)
				{
					goto IL_0110;
				}
			}

IL_00cf:
			{
				IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
				Hashtable_t24 * L_32 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_12;
				ProviderData_t1712 * L_33 = V_3;
				NullCheck(L_33);
				String_t* L_34 = (L_33->___Ref_0);
				NullCheck(L_32);
				Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_32, L_34);
				V_5 = ((ProviderData_t1712 *)Castclass(L_35, ProviderData_t1712_il2cpp_TypeInfo_var));
				ProviderData_t1712 * L_36 = V_5;
				if (L_36)
				{
					goto IL_0108;
				}
			}

IL_00ed:
			{
				ProviderData_t1712 * L_37 = V_3;
				NullCheck(L_37);
				String_t* L_38 = (L_37->___Ref_0);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_39 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2173, L_38, _stringLiteral2120, /*hidden argument*/NULL);
				RemotingException_t1714 * L_40 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
				RemotingException__ctor_m10609(L_40, L_39, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception(L_40);
			}

IL_0108:
			{
				ProviderData_t1712 * L_41 = V_3;
				ProviderData_t1712 * L_42 = V_5;
				NullCheck(L_41);
				ProviderData_CopyFrom_m10606(L_41, L_42, /*hidden argument*/NULL);
			}

IL_0110:
			{
				Object_t * L_43 = V_4;
				NullCheck(L_43);
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00b7;
				}
			}

IL_011c:
			{
				IL2CPP_LEAVE(0x137, FINALLY_0121);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t54 *)e.ex;
			goto FINALLY_0121;
		}

FINALLY_0121:
		{ // begin finally (depth: 2)
			{
				Object_t * L_45 = V_4;
				V_9 = ((Object_t *)IsInst(L_45, IDisposable_t56_il2cpp_TypeInfo_var));
				Object_t * L_46 = V_9;
				if (L_46)
				{
					goto IL_012f;
				}
			}

IL_012e:
			{
				IL2CPP_END_FINALLY(289)
			}

IL_012f:
			{
				Object_t * L_47 = V_9;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_47);
				IL2CPP_END_FINALLY(289)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(289)
		{
			IL2CPP_JUMP_TBL(0x137, IL_0137)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
		}

IL_0137:
		{
			ChannelData_t1710 * L_48 = V_0;
			NullCheck(L_48);
			ArrayList_t64 * L_49 = ChannelData_get_ClientProviders_m10602(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			Object_t * L_50 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_49);
			V_7 = L_50;
		}

IL_0144:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01a7;
			}

IL_0149:
			{
				Object_t * L_51 = V_7;
				NullCheck(L_51);
				Object_t * L_52 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_51);
				V_6 = ((ProviderData_t1712 *)Castclass(L_52, ProviderData_t1712_il2cpp_TypeInfo_var));
				ProviderData_t1712 * L_53 = V_6;
				NullCheck(L_53);
				String_t* L_54 = (L_53->___Ref_0);
				if (!L_54)
				{
					goto IL_01a7;
				}
			}

IL_0163:
			{
				IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
				Hashtable_t24 * L_55 = ((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_11;
				ProviderData_t1712 * L_56 = V_6;
				NullCheck(L_56);
				String_t* L_57 = (L_56->___Ref_0);
				NullCheck(L_55);
				Object_t * L_58 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_55, L_57);
				V_8 = ((ProviderData_t1712 *)Castclass(L_58, ProviderData_t1712_il2cpp_TypeInfo_var));
				ProviderData_t1712 * L_59 = V_8;
				if (L_59)
				{
					goto IL_019e;
				}
			}

IL_0182:
			{
				ProviderData_t1712 * L_60 = V_6;
				NullCheck(L_60);
				String_t* L_61 = (L_60->___Ref_0);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_62 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2173, L_61, _stringLiteral2120, /*hidden argument*/NULL);
				RemotingException_t1714 * L_63 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
				RemotingException__ctor_m10609(L_63, L_62, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception(L_63);
			}

IL_019e:
			{
				ProviderData_t1712 * L_64 = V_6;
				ProviderData_t1712 * L_65 = V_8;
				NullCheck(L_64);
				ProviderData_CopyFrom_m10606(L_64, L_65, /*hidden argument*/NULL);
			}

IL_01a7:
			{
				Object_t * L_66 = V_7;
				NullCheck(L_66);
				bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_66);
				if (L_67)
				{
					goto IL_0149;
				}
			}

IL_01b3:
			{
				IL2CPP_LEAVE(0x1CE, FINALLY_01b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t54 *)e.ex;
			goto FINALLY_01b8;
		}

FINALLY_01b8:
		{ // begin finally (depth: 2)
			{
				Object_t * L_68 = V_7;
				V_10 = ((Object_t *)IsInst(L_68, IDisposable_t56_il2cpp_TypeInfo_var));
				Object_t * L_69 = V_10;
				if (L_69)
				{
					goto IL_01c6;
				}
			}

IL_01c5:
			{
				IL2CPP_END_FINALLY(440)
			}

IL_01c6:
			{
				Object_t * L_70 = V_10;
				NullCheck(L_70);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_70);
				IL2CPP_END_FINALLY(440)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(440)
		{
			IL2CPP_JUMP_TBL(0x1CE, IL_01ce)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
		}

IL_01ce:
		{
			ChannelData_t1710 * L_71 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
			ChannelServices_RegisterChannelConfig_m10301(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		}

IL_01d4:
		{
			Object_t * L_72 = V_1;
			NullCheck(L_72);
			bool L_73 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_72);
			if (L_73)
			{
				goto IL_000c;
			}
		}

IL_01df:
		{
			IL2CPP_LEAVE(0x1F9, FINALLY_01e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_01e4;
	}

FINALLY_01e4:
	{ // begin finally (depth: 1)
		{
			Object_t * L_74 = V_1;
			V_11 = ((Object_t *)IsInst(L_74, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_75 = V_11;
			if (L_75)
			{
				goto IL_01f1;
			}
		}

IL_01f0:
		{
			IL2CPP_END_FINALLY(484)
		}

IL_01f1:
		{
			Object_t * L_76 = V_11;
			NullCheck(L_76);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_76);
			IL2CPP_END_FINALLY(484)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(484)
	{
		IL2CPP_JUMP_TBL(0x1F9, IL_01f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_01f9:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* TypeEntry_t1699_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedServiceTypeEntry_t1700_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownClientTypeEntry_t1723_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownServiceTypeEntry_t1725_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration_RegisterTypes_m10574 (Object_t * __this /* static, unused */, ArrayList_t64 * ___types, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		TypeEntry_t1699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1160);
		ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1158);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		ActivatedServiceTypeEntry_t1700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1161);
		WellKnownClientTypeEntry_t1723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1162);
		WellKnownServiceTypeEntry_t1725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1163);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	TypeEntry_t1699 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t64 * L_0 = ___types;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_000c:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_2);
			V_0 = ((TypeEntry_t1699 *)Castclass(L_3, TypeEntry_t1699_il2cpp_TypeInfo_var));
			TypeEntry_t1699 * L_4 = V_0;
			if (!((ActivatedClientTypeEntry_t1698 *)IsInst(L_4, ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var)))
			{
				goto IL_0033;
			}
		}

IL_0023:
		{
			TypeEntry_t1699 * L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterActivatedClientType_m10566(NULL /*static, unused*/, ((ActivatedClientTypeEntry_t1698 *)Castclass(L_5, ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_0033:
		{
			TypeEntry_t1699 * L_6 = V_0;
			if (!((ActivatedServiceTypeEntry_t1700 *)IsInst(L_6, ActivatedServiceTypeEntry_t1700_il2cpp_TypeInfo_var)))
			{
				goto IL_004e;
			}
		}

IL_003e:
		{
			TypeEntry_t1699 * L_7 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterActivatedServiceType_m10567(NULL /*static, unused*/, ((ActivatedServiceTypeEntry_t1700 *)Castclass(L_7, ActivatedServiceTypeEntry_t1700_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_004e:
		{
			TypeEntry_t1699 * L_8 = V_0;
			if (!((WellKnownClientTypeEntry_t1723 *)IsInst(L_8, WellKnownClientTypeEntry_t1723_il2cpp_TypeInfo_var)))
			{
				goto IL_0069;
			}
		}

IL_0059:
		{
			TypeEntry_t1699 * L_9 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterWellKnownClientType_m10568(NULL /*static, unused*/, ((WellKnownClientTypeEntry_t1723 *)Castclass(L_9, WellKnownClientTypeEntry_t1723_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_007f;
		}

IL_0069:
		{
			TypeEntry_t1699 * L_10 = V_0;
			if (!((WellKnownServiceTypeEntry_t1725 *)IsInst(L_10, WellKnownServiceTypeEntry_t1725_il2cpp_TypeInfo_var)))
			{
				goto IL_007f;
			}
		}

IL_0074:
		{
			TypeEntry_t1699 * L_11 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
			RemotingConfiguration_RegisterWellKnownServiceType_m10569(NULL /*static, unused*/, ((WellKnownServiceTypeEntry_t1725 *)Castclass(L_11, WellKnownServiceTypeEntry_t1725_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_007f:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_000c;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_009a;
			}
		}

IL_0099:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009a:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2174;
extern Il2CppCodeGenString* _stringLiteral2175;
extern Il2CppCodeGenString* _stringLiteral2176;
extern Il2CppCodeGenString* _stringLiteral2177;
extern Il2CppCodeGenString* _stringLiteral2178;
extern "C" void RemotingConfiguration_SetCustomErrorsMode_m10575 (Object_t * __this /* static, unused */, String_t* ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		_stringLiteral2174 = il2cpp_codegen_string_literal_from_index(2174);
		_stringLiteral2175 = il2cpp_codegen_string_literal_from_index(2175);
		_stringLiteral2176 = il2cpp_codegen_string_literal_from_index(2176);
		_stringLiteral2177 = il2cpp_codegen_string_literal_from_index(2177);
		_stringLiteral2178 = il2cpp_codegen_string_literal_from_index(2178);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___mode;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RemotingException_t1714 * L_1 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_1, _stringLiteral2174, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___mode;
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m424(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m443(NULL /*static, unused*/, L_4, _stringLiteral2175, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m443(NULL /*static, unused*/, L_6, _stringLiteral2176, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m443(NULL /*static, unused*/, L_8, _stringLiteral2177, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_10 = ___mode;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral2178, L_10, /*hidden argument*/NULL);
		RemotingException_t1714 * L_12 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0059:
	{
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t1709_StaticFields*)RemotingConfiguration_t1709_il2cpp_TypeInfo_var->static_fields)->____errorMode_5 = L_13;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfo.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_Stack.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$8
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterData.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Globalization.CompareInfo
#include "mscorlib_System_Globalization_CompareInfoMethodDeclarations.h"
// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Runtime.Remoting.FormatterData
#include "mscorlib_System_Runtime_Remoting_FormatterDataMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler__ctor_m10576 (ConfigHandler_t1711 * __this, bool ___onlyDelayedChannels, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t64 * L_0 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_0, /*hidden argument*/NULL);
		__this->___typeEntries_0 = L_0;
		ArrayList_t64 * L_1 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_1, /*hidden argument*/NULL);
		__this->___channelInstances_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___currentXmlPath_6 = L_2;
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		bool L_3 = ___onlyDelayedChannels;
		__this->___onlyDelayedChannels_7 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2179;
extern Il2CppCodeGenString* _stringLiteral2180;
extern "C" void ConfigHandler_ValidatePath_m10577 (ConfigHandler_t1711 * __this, String_t* ___element, StringU5BU5D_t284* ___paths, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2179 = il2cpp_codegen_string_literal_from_index(2179);
		_stringLiteral2180 = il2cpp_codegen_string_literal_from_index(2180);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t284* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringU5BU5D_t284* L_0 = ___paths;
		V_1 = L_0;
		V_2 = 0;
		goto IL_001e;
	}

IL_0009:
	{
		StringU5BU5D_t284* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_0;
		bool L_5 = ConfigHandler_CheckPath_m10578(__this, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_7 = V_2;
		StringU5BU5D_t284* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_9 = ___element;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2179, L_9, _stringLiteral2180, /*hidden argument*/NULL);
		RemotingException_t1714 * L_11 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}
}
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
extern TypeInfo* CultureInfo_t927_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral141;
extern "C" bool ConfigHandler_CheckPath_m10578 (ConfigHandler_t1711 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t927_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(527);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	CompareInfo_t1153 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t927_il2cpp_TypeInfo_var);
		CultureInfo_t927 * L_0 = CultureInfo_get_InvariantCulture_m5437(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CompareInfo_t1153 * L_1 = (CompareInfo_t1153 *)VirtFuncInvoker0< CompareInfo_t1153 * >::Invoke(9 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_0);
		V_0 = L_1;
		CompareInfo_t1153 * L_2 = V_0;
		String_t* L_3 = ___path;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker3< bool, String_t*, String_t*, int32_t >::Invoke(11 /* System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions) */, L_2, L_3, _stringLiteral141, ((int32_t)1073741824));
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___path;
		String_t* L_6 = (__this->___currentXmlPath_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m400(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002e:
	{
		CompareInfo_t1153 * L_8 = V_0;
		String_t* L_9 = (__this->___currentXmlPath_6);
		String_t* L_10 = ___path;
		NullCheck(L_8);
		bool L_11 = (bool)VirtFuncInvoker3< bool, String_t*, String_t*, int32_t >::Invoke(12 /* System.Boolean System.Globalization.CompareInfo::IsSuffix(System.String,System.String,System.Globalization.CompareOptions) */, L_8, L_9, L_10, ((int32_t)1073741824));
		return L_11;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void ConfigHandler_OnStartParsing_m10579 (ConfigHandler_t1711 * __this, SmallXmlParser_t1439 * ___parser, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C" void ConfigHandler_OnProcessingInstruction_m10580 (ConfigHandler_t1711 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C" void ConfigHandler_OnIgnorableWhitespace_m10581 (ConfigHandler_t1711 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t54_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2181;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral2182;
extern Il2CppCodeGenString* _stringLiteral354;
extern "C" void ConfigHandler_OnStartElement_m10582 (ConfigHandler_t1711 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Exception_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2181 = il2cpp_codegen_string_literal_from_index(2181);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral2182 = il2cpp_codegen_string_literal_from_index(2182);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t54 * V_0 = {0};
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
			String_t* L_0 = (__this->___currentXmlPath_6);
			NullCheck(L_0);
			bool L_1 = String_StartsWith_m2087(L_0, _stringLiteral2181, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001d;
			}
		}

IL_0015:
		{
			String_t* L_2 = ___name;
			Object_t * L_3 = ___attrs;
			ConfigHandler_ParseElement_m10583(__this, L_2, L_3, /*hidden argument*/NULL);
		}

IL_001d:
		{
			String_t* L_4 = (__this->___currentXmlPath_6);
			String_t* L_5 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_6 = String_Concat_m2098(NULL /*static, unused*/, L_4, _stringLiteral141, L_5, /*hidden argument*/NULL);
			__this->___currentXmlPath_6 = L_6;
			goto IL_005c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t54_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t54 *)__exception_local);
		String_t* L_7 = ___name;
		Exception_t54 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m5477(NULL /*static, unused*/, _stringLiteral2182, L_7, _stringLiteral354, L_9, /*hidden argument*/NULL);
		Exception_t54 * L_11 = V_0;
		RemotingException_t1714 * L_12 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10611(L_12, L_10, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
		goto IL_005c;
	} // end catch (depth: 1)

IL_005c:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* ConfigHandler_t1711_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t284_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1977_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2183;
extern Il2CppCodeGenString* _stringLiteral2184;
extern Il2CppCodeGenString* _stringLiteral2185;
extern Il2CppCodeGenString* _stringLiteral2186;
extern Il2CppCodeGenString* _stringLiteral2187;
extern Il2CppCodeGenString* _stringLiteral2188;
extern Il2CppCodeGenString* _stringLiteral2189;
extern Il2CppCodeGenString* _stringLiteral2190;
extern Il2CppCodeGenString* _stringLiteral2191;
extern Il2CppCodeGenString* _stringLiteral2192;
extern Il2CppCodeGenString* _stringLiteral2193;
extern Il2CppCodeGenString* _stringLiteral2194;
extern Il2CppCodeGenString* _stringLiteral2195;
extern Il2CppCodeGenString* _stringLiteral2196;
extern Il2CppCodeGenString* _stringLiteral2197;
extern Il2CppCodeGenString* _stringLiteral2198;
extern Il2CppCodeGenString* _stringLiteral2199;
extern Il2CppCodeGenString* _stringLiteral2200;
extern Il2CppCodeGenString* _stringLiteral2201;
extern Il2CppCodeGenString* _stringLiteral2202;
extern Il2CppCodeGenString* _stringLiteral2203;
extern Il2CppCodeGenString* _stringLiteral2204;
extern Il2CppCodeGenString* _stringLiteral2205;
extern Il2CppCodeGenString* _stringLiteral2206;
extern Il2CppCodeGenString* _stringLiteral2207;
extern Il2CppCodeGenString* _stringLiteral2208;
extern Il2CppCodeGenString* _stringLiteral2209;
extern Il2CppCodeGenString* _stringLiteral1691;
extern Il2CppCodeGenString* _stringLiteral2210;
extern Il2CppCodeGenString* _stringLiteral2211;
extern "C" void ConfigHandler_ParseElement_m10583 (ConfigHandler_t1711 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigHandler_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1157);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		StringU5BU5D_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		IAttrList_t1977_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral2183 = il2cpp_codegen_string_literal_from_index(2183);
		_stringLiteral2184 = il2cpp_codegen_string_literal_from_index(2184);
		_stringLiteral2185 = il2cpp_codegen_string_literal_from_index(2185);
		_stringLiteral2186 = il2cpp_codegen_string_literal_from_index(2186);
		_stringLiteral2187 = il2cpp_codegen_string_literal_from_index(2187);
		_stringLiteral2188 = il2cpp_codegen_string_literal_from_index(2188);
		_stringLiteral2189 = il2cpp_codegen_string_literal_from_index(2189);
		_stringLiteral2190 = il2cpp_codegen_string_literal_from_index(2190);
		_stringLiteral2191 = il2cpp_codegen_string_literal_from_index(2191);
		_stringLiteral2192 = il2cpp_codegen_string_literal_from_index(2192);
		_stringLiteral2193 = il2cpp_codegen_string_literal_from_index(2193);
		_stringLiteral2194 = il2cpp_codegen_string_literal_from_index(2194);
		_stringLiteral2195 = il2cpp_codegen_string_literal_from_index(2195);
		_stringLiteral2196 = il2cpp_codegen_string_literal_from_index(2196);
		_stringLiteral2197 = il2cpp_codegen_string_literal_from_index(2197);
		_stringLiteral2198 = il2cpp_codegen_string_literal_from_index(2198);
		_stringLiteral2199 = il2cpp_codegen_string_literal_from_index(2199);
		_stringLiteral2200 = il2cpp_codegen_string_literal_from_index(2200);
		_stringLiteral2201 = il2cpp_codegen_string_literal_from_index(2201);
		_stringLiteral2202 = il2cpp_codegen_string_literal_from_index(2202);
		_stringLiteral2203 = il2cpp_codegen_string_literal_from_index(2203);
		_stringLiteral2204 = il2cpp_codegen_string_literal_from_index(2204);
		_stringLiteral2205 = il2cpp_codegen_string_literal_from_index(2205);
		_stringLiteral2206 = il2cpp_codegen_string_literal_from_index(2206);
		_stringLiteral2207 = il2cpp_codegen_string_literal_from_index(2207);
		_stringLiteral2208 = il2cpp_codegen_string_literal_from_index(2208);
		_stringLiteral2209 = il2cpp_codegen_string_literal_from_index(2209);
		_stringLiteral1691 = il2cpp_codegen_string_literal_from_index(1691);
		_stringLiteral2210 = il2cpp_codegen_string_literal_from_index(2210);
		_stringLiteral2211 = il2cpp_codegen_string_literal_from_index(2211);
		s_Il2CppMethodIntialized = true;
	}
	ProviderData_t1712 * V_0 = {0};
	String_t* V_1 = {0};
	Dictionary_2_t33 * V_2 = {0};
	int32_t V_3 = 0;
	{
		Stack_t874 * L_0 = (__this->___currentProviderData_3);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = ___name;
		Object_t * L_2 = ___attrs;
		ConfigHandler_ReadCustomProviderData_m10585(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		String_t* L_3 = ___name;
		V_1 = L_3;
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0512;
		}
	}
	{
		Dictionary_2_t33 * L_5 = ((ConfigHandler_t1711_StaticFields*)ConfigHandler_t1711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8;
		if (L_5)
		{
			goto IL_0121;
		}
	}
	{
		Dictionary_2_t33 * L_6 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_6, ((int32_t)19), /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_2 = L_6;
		Dictionary_2_t33 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2183, 0);
		Dictionary_2_t33 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2184, 1);
		Dictionary_2_t33 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2185, 2);
		Dictionary_2_t33 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2186, 3);
		Dictionary_2_t33 * L_11 = V_2;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, _stringLiteral2187, 4);
		Dictionary_2_t33 * L_12 = V_2;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, _stringLiteral2188, 5);
		Dictionary_2_t33 * L_13 = V_2;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_13, _stringLiteral2189, 6);
		Dictionary_2_t33 * L_14 = V_2;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_14, _stringLiteral2190, 6);
		Dictionary_2_t33 * L_15 = V_2;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_15, _stringLiteral2191, 7);
		Dictionary_2_t33 * L_16 = V_2;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_16, _stringLiteral2192, 8);
		Dictionary_2_t33 * L_17 = V_2;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_17, _stringLiteral2193, ((int32_t)9));
		Dictionary_2_t33 * L_18 = V_2;
		NullCheck(L_18);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_18, _stringLiteral2194, ((int32_t)10));
		Dictionary_2_t33 * L_19 = V_2;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_19, _stringLiteral2195, ((int32_t)11));
		Dictionary_2_t33 * L_20 = V_2;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_20, _stringLiteral2196, ((int32_t)12));
		Dictionary_2_t33 * L_21 = V_2;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_21, _stringLiteral2197, ((int32_t)13));
		Dictionary_2_t33 * L_22 = V_2;
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_22, _stringLiteral2198, ((int32_t)14));
		Dictionary_2_t33 * L_23 = V_2;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_23, _stringLiteral2199, ((int32_t)15));
		Dictionary_2_t33 * L_24 = V_2;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_24, _stringLiteral2200, ((int32_t)16));
		Dictionary_2_t33 * L_25 = V_2;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_25, _stringLiteral2201, ((int32_t)17));
		Dictionary_2_t33 * L_26 = V_2;
		((ConfigHandler_t1711_StaticFields*)ConfigHandler_t1711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8 = L_26;
	}

IL_0121:
	{
		Dictionary_2_t33 * L_27 = ((ConfigHandler_t1711_StaticFields*)ConfigHandler_t1711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_8;
		String_t* L_28 = V_1;
		NullCheck(L_27);
		bool L_29 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_27, L_28, (&V_3));
		if (!L_29)
		{
			goto IL_0512;
		}
	}
	{
		int32_t L_30 = V_3;
		if (L_30 == 0)
		{
			goto IL_0186;
		}
		if (L_30 == 1)
		{
			goto IL_01bc;
		}
		if (L_30 == 2)
		{
			goto IL_01dd;
		}
		if (L_30 == 3)
		{
			goto IL_01ff;
		}
		if (L_30 == 4)
		{
			goto IL_0244;
		}
		if (L_30 == 5)
		{
			goto IL_0266;
		}
		if (L_30 == 6)
		{
			goto IL_0288;
		}
		if (L_30 == 7)
		{
			goto IL_0366;
		}
		if (L_30 == 8)
		{
			goto IL_0391;
		}
		if (L_30 == 9)
		{
			goto IL_03ab;
		}
		if (L_30 == 10)
		{
			goto IL_03f0;
		}
		if (L_30 == 11)
		{
			goto IL_0435;
		}
		if (L_30 == 12)
		{
			goto IL_044f;
		}
		if (L_30 == 13)
		{
			goto IL_0471;
		}
		if (L_30 == 14)
		{
			goto IL_0493;
		}
		if (L_30 == 15)
		{
			goto IL_04b4;
		}
		if (L_30 == 16)
		{
			goto IL_04ce;
		}
		if (L_30 == 17)
		{
			goto IL_04e8;
		}
	}
	{
		goto IL_0512;
	}

IL_0186:
	{
		String_t* L_31 = ___name;
		StringU5BU5D_t284* L_32 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 0);
		ArrayElementTypeCheck (L_32, _stringLiteral2202);
		*((String_t**)(String_t**)SZArrayLdElema(L_32, 0)) = (String_t*)_stringLiteral2202;
		ConfigHandler_ValidatePath_m10577(__this, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = ___attrs;
		NullCheck(L_33);
		StringU5BU5D_t284* L_34 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		if ((((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_01b7;
		}
	}
	{
		Object_t * L_35 = ___attrs;
		NullCheck(L_35);
		StringU5BU5D_t284* L_36 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_35);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		int32_t L_37 = 0;
		__this->___appName_5 = (*(String_t**)(String_t**)SZArrayLdElema(L_36, L_37));
	}

IL_01b7:
	{
		goto IL_0528;
	}

IL_01bc:
	{
		String_t* L_38 = ___name;
		StringU5BU5D_t284* L_39 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, _stringLiteral2183);
		*((String_t**)(String_t**)SZArrayLdElema(L_39, 0)) = (String_t*)_stringLiteral2183;
		ConfigHandler_ValidatePath_m10577(__this, L_38, L_39, /*hidden argument*/NULL);
		Object_t * L_40 = ___attrs;
		ConfigHandler_ReadLifetine_m10586(__this, L_40, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_01dd:
	{
		String_t* L_41 = ___name;
		StringU5BU5D_t284* L_42 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 2));
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		ArrayElementTypeCheck (L_42, _stringLiteral2202);
		*((String_t**)(String_t**)SZArrayLdElema(L_42, 0)) = (String_t*)_stringLiteral2202;
		StringU5BU5D_t284* L_43 = L_42;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 1);
		ArrayElementTypeCheck (L_43, _stringLiteral2183);
		*((String_t**)(String_t**)SZArrayLdElema(L_43, 1)) = (String_t*)_stringLiteral2183;
		ConfigHandler_ValidatePath_m10577(__this, L_41, L_43, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_01ff:
	{
		String_t* L_44 = ___name;
		StringU5BU5D_t284* L_45 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 0);
		ArrayElementTypeCheck (L_45, _stringLiteral2185);
		*((String_t**)(String_t**)SZArrayLdElema(L_45, 0)) = (String_t*)_stringLiteral2185;
		ConfigHandler_ValidatePath_m10577(__this, L_44, L_45, /*hidden argument*/NULL);
		String_t* L_46 = (__this->___currentXmlPath_6);
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m5390(L_46, _stringLiteral2183, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0237;
		}
	}
	{
		Object_t * L_48 = ___attrs;
		ConfigHandler_ReadChannel_m10588(__this, L_48, 0, /*hidden argument*/NULL);
		goto IL_023f;
	}

IL_0237:
	{
		Object_t * L_49 = ___attrs;
		ConfigHandler_ReadChannel_m10588(__this, L_49, 1, /*hidden argument*/NULL);
	}

IL_023f:
	{
		goto IL_0528;
	}

IL_0244:
	{
		String_t* L_50 = ___name;
		StringU5BU5D_t284* L_51 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 2));
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 0);
		ArrayElementTypeCheck (L_51, _stringLiteral2200);
		*((String_t**)(String_t**)SZArrayLdElema(L_51, 0)) = (String_t*)_stringLiteral2200;
		StringU5BU5D_t284* L_52 = L_51;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, _stringLiteral2186);
		*((String_t**)(String_t**)SZArrayLdElema(L_52, 1)) = (String_t*)_stringLiteral2186;
		ConfigHandler_ValidatePath_m10577(__this, L_50, L_52, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0266:
	{
		String_t* L_53 = ___name;
		StringU5BU5D_t284* L_54 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 2));
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 0);
		ArrayElementTypeCheck (L_54, _stringLiteral2200);
		*((String_t**)(String_t**)SZArrayLdElema(L_54, 0)) = (String_t*)_stringLiteral2200;
		StringU5BU5D_t284* L_55 = L_54;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 1);
		ArrayElementTypeCheck (L_55, _stringLiteral2186);
		*((String_t**)(String_t**)SZArrayLdElema(L_55, 1)) = (String_t*)_stringLiteral2186;
		ConfigHandler_ValidatePath_m10577(__this, L_53, L_55, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0288:
	{
		bool L_56 = ConfigHandler_CheckPath_m10578(__this, _stringLiteral2203, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_57 = ConfigHandler_CheckPath_m10578(__this, _stringLiteral2204, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_02c9;
		}
	}

IL_02a8:
	{
		String_t* L_58 = ___name;
		Object_t * L_59 = ___attrs;
		ProviderData_t1712 * L_60 = ConfigHandler_ReadProvider_m10589(__this, L_58, L_59, 0, /*hidden argument*/NULL);
		V_0 = L_60;
		ChannelData_t1710 * L_61 = (__this->___currentChannel_2);
		NullCheck(L_61);
		ArrayList_t64 * L_62 = ChannelData_get_ServerProviders_m10601(L_61, /*hidden argument*/NULL);
		ProviderData_t1712 * L_63 = V_0;
		NullCheck(L_62);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_62, L_63);
		goto IL_0361;
	}

IL_02c9:
	{
		bool L_64 = ConfigHandler_CheckPath_m10578(__this, _stringLiteral2205, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_02e9;
		}
	}
	{
		bool L_65 = ConfigHandler_CheckPath_m10578(__this, _stringLiteral2206, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_030a;
		}
	}

IL_02e9:
	{
		String_t* L_66 = ___name;
		Object_t * L_67 = ___attrs;
		ProviderData_t1712 * L_68 = ConfigHandler_ReadProvider_m10589(__this, L_66, L_67, 0, /*hidden argument*/NULL);
		V_0 = L_68;
		ChannelData_t1710 * L_69 = (__this->___currentChannel_2);
		NullCheck(L_69);
		ArrayList_t64 * L_70 = ChannelData_get_ClientProviders_m10602(L_69, /*hidden argument*/NULL);
		ProviderData_t1712 * L_71 = V_0;
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_71);
		goto IL_0361;
	}

IL_030a:
	{
		bool L_72 = ConfigHandler_CheckPath_m10578(__this, _stringLiteral2207, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_032f;
		}
	}
	{
		String_t* L_73 = ___name;
		Object_t * L_74 = ___attrs;
		ProviderData_t1712 * L_75 = ConfigHandler_ReadProvider_m10589(__this, L_73, L_74, 1, /*hidden argument*/NULL);
		V_0 = L_75;
		ProviderData_t1712 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterServerProviderTemplate_m10572(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		goto IL_0361;
	}

IL_032f:
	{
		bool L_77 = ConfigHandler_CheckPath_m10578(__this, _stringLiteral2208, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_0354;
		}
	}
	{
		String_t* L_78 = ___name;
		Object_t * L_79 = ___attrs;
		ProviderData_t1712 * L_80 = ConfigHandler_ReadProvider_m10589(__this, L_78, L_79, 1, /*hidden argument*/NULL);
		V_0 = L_80;
		ProviderData_t1712 * L_81 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterClientProviderTemplate_m10571(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		goto IL_0361;
	}

IL_0354:
	{
		String_t* L_82 = ___name;
		ConfigHandler_ValidatePath_m10577(__this, L_82, ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
	}

IL_0361:
	{
		goto IL_0528;
	}

IL_0366:
	{
		String_t* L_83 = ___name;
		StringU5BU5D_t284* L_84 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 0);
		ArrayElementTypeCheck (L_84, _stringLiteral2183);
		*((String_t**)(String_t**)SZArrayLdElema(L_84, 0)) = (String_t*)_stringLiteral2183;
		ConfigHandler_ValidatePath_m10577(__this, L_83, L_84, /*hidden argument*/NULL);
		Object_t * L_85 = ___attrs;
		NullCheck(L_85);
		String_t* L_86 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_85, _stringLiteral2209);
		__this->___currentClientUrl_4 = L_86;
		goto IL_0528;
	}

IL_0391:
	{
		String_t* L_87 = ___name;
		StringU5BU5D_t284* L_88 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, 0);
		ArrayElementTypeCheck (L_88, _stringLiteral2183);
		*((String_t**)(String_t**)SZArrayLdElema(L_88, 0)) = (String_t*)_stringLiteral2183;
		ConfigHandler_ValidatePath_m10577(__this, L_87, L_88, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_03ab:
	{
		String_t* L_89 = ___name;
		StringU5BU5D_t284* L_90 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 2));
		NullCheck(L_90);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_90, 0);
		ArrayElementTypeCheck (L_90, _stringLiteral2191);
		*((String_t**)(String_t**)SZArrayLdElema(L_90, 0)) = (String_t*)_stringLiteral2191;
		StringU5BU5D_t284* L_91 = L_90;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 1);
		ArrayElementTypeCheck (L_91, _stringLiteral2192);
		*((String_t**)(String_t**)SZArrayLdElema(L_91, 1)) = (String_t*)_stringLiteral2192;
		ConfigHandler_ValidatePath_m10577(__this, L_89, L_91, /*hidden argument*/NULL);
		bool L_92 = ConfigHandler_CheckPath_m10578(__this, _stringLiteral2191, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_03e4;
		}
	}
	{
		Object_t * L_93 = ___attrs;
		ConfigHandler_ReadClientWellKnown_m10592(__this, L_93, /*hidden argument*/NULL);
		goto IL_03eb;
	}

IL_03e4:
	{
		Object_t * L_94 = ___attrs;
		ConfigHandler_ReadServiceWellKnown_m10593(__this, L_94, /*hidden argument*/NULL);
	}

IL_03eb:
	{
		goto IL_0528;
	}

IL_03f0:
	{
		String_t* L_95 = ___name;
		StringU5BU5D_t284* L_96 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 2));
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, 0);
		ArrayElementTypeCheck (L_96, _stringLiteral2191);
		*((String_t**)(String_t**)SZArrayLdElema(L_96, 0)) = (String_t*)_stringLiteral2191;
		StringU5BU5D_t284* L_97 = L_96;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 1);
		ArrayElementTypeCheck (L_97, _stringLiteral2192);
		*((String_t**)(String_t**)SZArrayLdElema(L_97, 1)) = (String_t*)_stringLiteral2192;
		ConfigHandler_ValidatePath_m10577(__this, L_95, L_97, /*hidden argument*/NULL);
		bool L_98 = ConfigHandler_CheckPath_m10578(__this, _stringLiteral2191, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_0429;
		}
	}
	{
		Object_t * L_99 = ___attrs;
		ConfigHandler_ReadClientActivated_m10590(__this, L_99, /*hidden argument*/NULL);
		goto IL_0430;
	}

IL_0429:
	{
		Object_t * L_100 = ___attrs;
		ConfigHandler_ReadServiceActivated_m10591(__this, L_100, /*hidden argument*/NULL);
	}

IL_0430:
	{
		goto IL_0528;
	}

IL_0435:
	{
		String_t* L_101 = ___name;
		StringU5BU5D_t284* L_102 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, 0);
		ArrayElementTypeCheck (L_102, _stringLiteral2183);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, 0)) = (String_t*)_stringLiteral2183;
		ConfigHandler_ValidatePath_m10577(__this, L_101, L_102, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_044f:
	{
		String_t* L_103 = ___name;
		StringU5BU5D_t284* L_104 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, 0);
		ArrayElementTypeCheck (L_104, _stringLiteral2195);
		*((String_t**)(String_t**)SZArrayLdElema(L_104, 0)) = (String_t*)_stringLiteral2195;
		ConfigHandler_ValidatePath_m10577(__this, L_103, L_104, /*hidden argument*/NULL);
		Object_t * L_105 = ___attrs;
		ConfigHandler_ReadInteropXml_m10594(__this, L_105, 0, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0471:
	{
		String_t* L_106 = ___name;
		StringU5BU5D_t284* L_107 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, 0);
		ArrayElementTypeCheck (L_107, _stringLiteral2195);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, 0)) = (String_t*)_stringLiteral2195;
		ConfigHandler_ValidatePath_m10577(__this, L_106, L_107, /*hidden argument*/NULL);
		Object_t * L_108 = ___attrs;
		ConfigHandler_ReadInteropXml_m10594(__this, L_108, 0, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0493:
	{
		String_t* L_109 = ___name;
		StringU5BU5D_t284* L_110 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, 0);
		ArrayElementTypeCheck (L_110, _stringLiteral2195);
		*((String_t**)(String_t**)SZArrayLdElema(L_110, 0)) = (String_t*)_stringLiteral2195;
		ConfigHandler_ValidatePath_m10577(__this, L_109, L_110, /*hidden argument*/NULL);
		Object_t * L_111 = ___attrs;
		ConfigHandler_ReadPreload_m10595(__this, L_111, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04b4:
	{
		String_t* L_112 = ___name;
		StringU5BU5D_t284* L_113 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, 0);
		ArrayElementTypeCheck (L_113, _stringLiteral2202);
		*((String_t**)(String_t**)SZArrayLdElema(L_113, 0)) = (String_t*)_stringLiteral2202;
		ConfigHandler_ValidatePath_m10577(__this, L_112, L_113, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04ce:
	{
		String_t* L_114 = ___name;
		StringU5BU5D_t284* L_115 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, 0);
		ArrayElementTypeCheck (L_115, _stringLiteral2202);
		*((String_t**)(String_t**)SZArrayLdElema(L_115, 0)) = (String_t*)_stringLiteral2202;
		ConfigHandler_ValidatePath_m10577(__this, L_114, L_115, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_04e8:
	{
		String_t* L_116 = ___name;
		StringU5BU5D_t284* L_117 = ((StringU5BU5D_t284*)SZArrayNew(StringU5BU5D_t284_il2cpp_TypeInfo_var, 1));
		NullCheck(L_117);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_117, 0);
		ArrayElementTypeCheck (L_117, _stringLiteral2202);
		*((String_t**)(String_t**)SZArrayLdElema(L_117, 0)) = (String_t*)_stringLiteral2202;
		ConfigHandler_ValidatePath_m10577(__this, L_116, L_117, /*hidden argument*/NULL);
		Object_t * L_118 = ___attrs;
		NullCheck(L_118);
		String_t* L_119 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_118, _stringLiteral1691);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		RemotingConfiguration_SetCustomErrorsMode_m10575(NULL /*static, unused*/, L_119, /*hidden argument*/NULL);
		goto IL_0528;
	}

IL_0512:
	{
		String_t* L_120 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_121 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2210, L_120, _stringLiteral2211, /*hidden argument*/NULL);
		RemotingException_t1714 * L_122 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_122, L_121, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_122);
	}

IL_0528:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C" void ConfigHandler_OnEndElement_m10584 (ConfigHandler_t1711 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Stack_t874 * L_0 = (__this->___currentProviderData_3);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Stack_t874 * L_1 = (__this->___currentProviderData_3);
		NullCheck(L_1);
		VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Object System.Collections.Stack::Pop() */, L_1);
		Stack_t874 * L_2 = (__this->___currentProviderData_3);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Stack::get_Count() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		__this->___currentProviderData_3 = (Stack_t874 *)NULL;
	}

IL_002e:
	{
		String_t* L_4 = (__this->___currentXmlPath_6);
		String_t* L_5 = (__this->___currentXmlPath_6);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m422(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___name;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m422(L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_9 = String_Substring_m423(L_4, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)L_8))-(int32_t)1)), /*hidden argument*/NULL);
		__this->___currentXmlPath_6 = L_9;
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* SinkProviderData_t1654_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1977_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t1260_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1285_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler_ReadCustomProviderData_m10585 (ConfigHandler_t1711 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SinkProviderData_t1654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1164);
		IAttrList_t1977_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		IDictionary_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(746);
		IList_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		s_Il2CppMethodIntialized = true;
	}
	SinkProviderData_t1654 * V_0 = {0};
	SinkProviderData_t1654 * V_1 = {0};
	int32_t V_2 = 0;
	{
		Stack_t874 * L_0 = (__this->___currentProviderData_3);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Object System.Collections.Stack::Peek() */, L_0);
		V_0 = ((SinkProviderData_t1654 *)Castclass(L_1, SinkProviderData_t1654_il2cpp_TypeInfo_var));
		String_t* L_2 = ___name;
		SinkProviderData_t1654 * L_3 = (SinkProviderData_t1654 *)il2cpp_codegen_object_new (SinkProviderData_t1654_il2cpp_TypeInfo_var);
		SinkProviderData__ctor_m10319(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_003d;
	}

IL_001f:
	{
		SinkProviderData_t1654 * L_4 = V_1;
		NullCheck(L_4);
		Object_t * L_5 = SinkProviderData_get_Properties_m10321(L_4, /*hidden argument*/NULL);
		Object_t * L_6 = ___attrs;
		NullCheck(L_6);
		StringU5BU5D_t284* L_7 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_6);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		Object_t * L_10 = ___attrs;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_10, L_11);
		NullCheck(L_5);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1260_il2cpp_TypeInfo_var, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_2;
		Object_t * L_15 = ___attrs;
		NullCheck(L_15);
		StringU5BU5D_t284* L_16 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_001f;
		}
	}
	{
		SinkProviderData_t1654 * L_17 = V_0;
		NullCheck(L_17);
		Object_t * L_18 = SinkProviderData_get_Children_m10320(L_17, /*hidden argument*/NULL);
		SinkProviderData_t1654 * L_19 = V_1;
		NullCheck(L_18);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1285_il2cpp_TypeInfo_var, L_18, L_19);
		Stack_t874 * L_20 = (__this->___currentProviderData_3);
		SinkProviderData_t1654 * L_21 = V_1;
		NullCheck(L_20);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_20, L_21);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* IAttrList_t1977_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigHandler_t1711_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t33_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t1661_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m357_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2212;
extern Il2CppCodeGenString* _stringLiteral2213;
extern Il2CppCodeGenString* _stringLiteral2214;
extern Il2CppCodeGenString* _stringLiteral2215;
extern Il2CppCodeGenString* _stringLiteral2216;
extern "C" void ConfigHandler_ReadLifetine_m10586 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1977_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		ConfigHandler_t1711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1157);
		Dictionary_2_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		LifetimeServices_t1661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1118);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		Dictionary_2__ctor_m357_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		_stringLiteral2212 = il2cpp_codegen_string_literal_from_index(2212);
		_stringLiteral2213 = il2cpp_codegen_string_literal_from_index(2213);
		_stringLiteral2214 = il2cpp_codegen_string_literal_from_index(2214);
		_stringLiteral2215 = il2cpp_codegen_string_literal_from_index(2215);
		_stringLiteral2216 = il2cpp_codegen_string_literal_from_index(2216);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	Dictionary_2_t33 * V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0102;
	}

IL_0007:
	{
		Object_t * L_0 = ___attrs;
		NullCheck(L_0);
		StringU5BU5D_t284* L_1 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
		String_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_00e6;
		}
	}
	{
		Dictionary_2_t33 * L_5 = ((ConfigHandler_t1711_StaticFields*)ConfigHandler_t1711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9;
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		Dictionary_2_t33 * L_6 = (Dictionary_2_t33 *)il2cpp_codegen_object_new (Dictionary_2_t33_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m357(L_6, 4, /*hidden argument*/Dictionary_2__ctor_m357_MethodInfo_var);
		V_2 = L_6;
		Dictionary_2_t33 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, _stringLiteral2212, 0);
		Dictionary_2_t33 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, _stringLiteral2213, 1);
		Dictionary_2_t33 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, _stringLiteral2214, 2);
		Dictionary_2_t33 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, _stringLiteral2215, 3);
		Dictionary_2_t33 * L_11 = V_2;
		((ConfigHandler_t1711_StaticFields*)ConfigHandler_t1711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9 = L_11;
	}

IL_005d:
	{
		Dictionary_2_t33 * L_12 = ((ConfigHandler_t1711_StaticFields*)ConfigHandler_t1711_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_9;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_3));
		if (!L_14)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_15 = V_3;
		if (L_15 == 0)
		{
			goto IL_008a;
		}
		if (L_15 == 1)
		{
			goto IL_00a1;
		}
		if (L_15 == 2)
		{
			goto IL_00b8;
		}
		if (L_15 == 3)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_00e6;
	}

IL_008a:
	{
		Object_t * L_16 = ___attrs;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_16, L_17);
		TimeSpan_t1235  L_19 = ConfigHandler_ParseTime_m10587(__this, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1661_il2cpp_TypeInfo_var);
		LifetimeServices_set_LeaseTime_m10347(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00a1:
	{
		Object_t * L_20 = ___attrs;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_20, L_21);
		TimeSpan_t1235  L_23 = ConfigHandler_ParseTime_m10587(__this, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1661_il2cpp_TypeInfo_var);
		LifetimeServices_set_SponsorshipTimeout_m10349(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00b8:
	{
		Object_t * L_24 = ___attrs;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		String_t* L_26 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_24, L_25);
		TimeSpan_t1235  L_27 = ConfigHandler_ParseTime_m10587(__this, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1661_il2cpp_TypeInfo_var);
		LifetimeServices_set_RenewOnCallTime_m10348(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00cf:
	{
		Object_t * L_28 = ___attrs;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		String_t* L_30 = (String_t*)InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.Int32) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_28, L_29);
		TimeSpan_t1235  L_31 = ConfigHandler_ParseTime_m10587(__this, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t1661_il2cpp_TypeInfo_var);
		LifetimeServices_set_LeaseManagerPollTime_m10346(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00e6:
	{
		Object_t * L_32 = ___attrs;
		NullCheck(L_32);
		StringU5BU5D_t284* L_33 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_32);
		int32_t L_34 = V_0;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral2216, (*(String_t**)(String_t**)SZArrayLdElema(L_33, L_35)), /*hidden argument*/NULL);
		RemotingException_t1714 * L_37 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00fe:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_39 = V_0;
		Object_t * L_40 = ___attrs;
		NullCheck(L_40);
		StringU5BU5D_t284* L_41 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_40);
		NullCheck(L_41);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t286_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t1235_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t1970____U24U24fieldU2D31_21_FieldInfo_var;
extern Il2CppCodeGenString* _stringLiteral2217;
extern Il2CppCodeGenString* _stringLiteral2218;
extern Il2CppCodeGenString* _stringLiteral2219;
extern Il2CppCodeGenString* _stringLiteral464;
extern Il2CppCodeGenString* _stringLiteral2220;
extern Il2CppCodeGenString* _stringLiteral2221;
extern Il2CppCodeGenString* _stringLiteral2222;
extern Il2CppCodeGenString* _stringLiteral2223;
extern "C" TimeSpan_t1235  ConfigHandler_ParseTime_m10587 (ConfigHandler_t1711 * __this, String_t* ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		CharU5BU5D_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		TimeSpan_t1235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(805);
		U3CPrivateImplementationDetailsU3E_t1970____U24U24fieldU2D31_21_FieldInfo_var = il2cpp_codegen_field_info_from_index(883, 21);
		_stringLiteral2217 = il2cpp_codegen_string_literal_from_index(2217);
		_stringLiteral2218 = il2cpp_codegen_string_literal_from_index(2218);
		_stringLiteral2219 = il2cpp_codegen_string_literal_from_index(2219);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		_stringLiteral2220 = il2cpp_codegen_string_literal_from_index(2220);
		_stringLiteral2221 = il2cpp_codegen_string_literal_from_index(2221);
		_stringLiteral2222 = il2cpp_codegen_string_literal_from_index(2222);
		_stringLiteral2223 = il2cpp_codegen_string_literal_from_index(2223);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	double V_2 = 0.0;
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m400(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___s;
		if (L_3)
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		RemotingException_t1714 * L_4 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_4, _stringLiteral2217, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		String_t* L_5 = ___s;
		CharU5BU5D_t286* L_6 = ((CharU5BU5D_t286*)SZArrayNew(CharU5BU5D_t286_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m2469(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t1970____U24U24fieldU2D31_21_FieldInfo_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_7 = String_IndexOfAny_m7510(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		V_1 = _stringLiteral2218;
		goto IL_005d;
	}

IL_004b:
	{
		String_t* L_9 = ___s;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m2097(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = ___s;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m423(L_12, 0, L_13, /*hidden argument*/NULL);
		___s = L_14;
	}

IL_005d:
	try
	{ // begin try (depth: 1)
		String_t* L_15 = ___s;
		double L_16 = Double_Parse_m7928(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0080;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t54 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0069;
		throw e;
	}

CATCH_0069:
	{ // begin catch(System.Object)
		String_t* L_17 = ___s;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral2219, L_17, /*hidden argument*/NULL);
		RemotingException_t1714 * L_19 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_19, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
		goto IL_0080;
	} // end catch (depth: 1)

IL_0080:
	{
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_op_Equality_m400(NULL /*static, unused*/, L_20, _stringLiteral464, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0097;
		}
	}
	{
		double L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1235_il2cpp_TypeInfo_var);
		TimeSpan_t1235  L_23 = TimeSpan_FromDays_m12320(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_0097:
	{
		String_t* L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m400(NULL /*static, unused*/, L_24, _stringLiteral2220, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		double L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1235_il2cpp_TypeInfo_var);
		TimeSpan_t1235  L_27 = TimeSpan_FromHours_m12321(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ae:
	{
		String_t* L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m400(NULL /*static, unused*/, L_28, _stringLiteral2221, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c5;
		}
	}
	{
		double L_30 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1235_il2cpp_TypeInfo_var);
		TimeSpan_t1235  L_31 = TimeSpan_FromMinutes_m12322(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00c5:
	{
		String_t* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_33 = String_op_Equality_m400(NULL /*static, unused*/, L_32, _stringLiteral2218, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		double L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1235_il2cpp_TypeInfo_var);
		TimeSpan_t1235  L_35 = TimeSpan_FromSeconds_m12323(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00dc:
	{
		String_t* L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m400(NULL /*static, unused*/, L_36, _stringLiteral2222, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00f3;
		}
	}
	{
		double L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t1235_il2cpp_TypeInfo_var);
		TimeSpan_t1235  L_39 = TimeSpan_FromMilliseconds_m12324(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00f3:
	{
		String_t* L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral2223, L_40, /*hidden argument*/NULL);
		RemotingException_t1714 * L_42 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_42, L_41, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_42);
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern TypeInfo* ChannelData_t1710_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1977_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2224;
extern Il2CppCodeGenString* _stringLiteral2225;
extern Il2CppCodeGenString* _stringLiteral81;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral2226;
extern "C" void ConfigHandler_ReadChannel_m10588 (ConfigHandler_t1711 * __this, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelData_t1710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1159);
		IAttrList_t1977_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		_stringLiteral2224 = il2cpp_codegen_string_literal_from_index(2224);
		_stringLiteral2225 = il2cpp_codegen_string_literal_from_index(2225);
		_stringLiteral81 = il2cpp_codegen_string_literal_from_index(81);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral2226 = il2cpp_codegen_string_literal_from_index(2226);
		s_Il2CppMethodIntialized = true;
	}
	ChannelData_t1710 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	{
		ChannelData_t1710 * L_0 = (ChannelData_t1710 *)il2cpp_codegen_object_new (ChannelData_t1710_il2cpp_TypeInfo_var);
		ChannelData__ctor_m10600(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_00ac;
	}

IL_000d:
	{
		Object_t * L_1 = ___attrs;
		NullCheck(L_1);
		StringU5BU5D_t284* L_2 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		Object_t * L_5 = ___attrs;
		NullCheck(L_5);
		StringU5BU5D_t284* L_6 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8));
		String_t* L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m400(NULL /*static, unused*/, L_9, _stringLiteral2224, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		bool L_11 = ___isTemplate;
		if (L_11)
		{
			goto IL_0041;
		}
	}
	{
		ChannelData_t1710 * L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		L_12->___Ref_0 = L_13;
		goto IL_00a8;
	}

IL_0041:
	{
		String_t* L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m400(NULL /*static, unused*/, L_14, _stringLiteral2225, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		ChannelData_t1710 * L_16 = V_0;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		L_16->___DelayLoadAsClientChannel_3 = L_17;
		goto IL_00a8;
	}

IL_005d:
	{
		String_t* L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m400(NULL /*static, unused*/, L_18, _stringLiteral81, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007f;
		}
	}
	{
		bool L_20 = ___isTemplate;
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		ChannelData_t1710 * L_21 = V_0;
		String_t* L_22 = V_3;
		NullCheck(L_21);
		L_21->___Id_2 = L_22;
		goto IL_00a8;
	}

IL_007f:
	{
		String_t* L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m400(NULL /*static, unused*/, L_23, _stringLiteral18, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_009b;
		}
	}
	{
		ChannelData_t1710 * L_25 = V_0;
		String_t* L_26 = V_3;
		NullCheck(L_25);
		L_25->___Type_1 = L_26;
		goto IL_00a8;
	}

IL_009b:
	{
		ChannelData_t1710 * L_27 = V_0;
		NullCheck(L_27);
		Hashtable_t24 * L_28 = ChannelData_get_CustomProperties_m10603(L_27, /*hidden argument*/NULL);
		String_t* L_29 = V_2;
		String_t* L_30 = V_3;
		NullCheck(L_28);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_28, L_29, L_30);
	}

IL_00a8:
	{
		int32_t L_31 = V_1;
		V_1 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_32 = V_1;
		Object_t * L_33 = ___attrs;
		NullCheck(L_33);
		StringU5BU5D_t284* L_34 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_33);
		NullCheck(L_34);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		bool L_35 = ___isTemplate;
		if (!L_35)
		{
			goto IL_00f7;
		}
	}
	{
		ChannelData_t1710 * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = (L_36->___Id_2);
		if (L_37)
		{
			goto IL_00d6;
		}
	}
	{
		RemotingException_t1714 * L_38 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_38, _stringLiteral2226, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_00d6:
	{
		ChannelData_t1710 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = (L_39->___Type_1);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		RemotingException_t1714 * L_41 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_41, _stringLiteral2226, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_41);
	}

IL_00ec:
	{
		ChannelData_t1710 * L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterChannelTemplate_m10570(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		goto IL_0104;
	}

IL_00f7:
	{
		ArrayList_t64 * L_43 = (__this->___channelInstances_1);
		ChannelData_t1710 * L_44 = V_0;
		NullCheck(L_43);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
	}

IL_0104:
	{
		ChannelData_t1710 * L_45 = V_0;
		__this->___currentChannel_2 = L_45;
		return;
	}
}
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1712_il2cpp_TypeInfo_var;
extern TypeInfo* FormatterData_t1713_il2cpp_TypeInfo_var;
extern TypeInfo* SinkProviderData_t1654_il2cpp_TypeInfo_var;
extern TypeInfo* Stack_t874_il2cpp_TypeInfo_var;
extern TypeInfo* IAttrList_t1977_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2189;
extern Il2CppCodeGenString* _stringLiteral2227;
extern Il2CppCodeGenString* _stringLiteral81;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral2224;
extern Il2CppCodeGenString* _stringLiteral2226;
extern "C" ProviderData_t1712 * ConfigHandler_ReadProvider_m10589 (ConfigHandler_t1711 * __this, String_t* ___name, Object_t * ___attrs, bool ___isTemplate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		ProviderData_t1712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1107);
		FormatterData_t1713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1165);
		SinkProviderData_t1654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1164);
		Stack_t874_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(839);
		IAttrList_t1977_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2189 = il2cpp_codegen_string_literal_from_index(2189);
		_stringLiteral2227 = il2cpp_codegen_string_literal_from_index(2227);
		_stringLiteral81 = il2cpp_codegen_string_literal_from_index(81);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral2224 = il2cpp_codegen_string_literal_from_index(2224);
		_stringLiteral2226 = il2cpp_codegen_string_literal_from_index(2226);
		s_Il2CppMethodIntialized = true;
	}
	ProviderData_t1712 * V_0 = {0};
	SinkProviderData_t1654 * V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	ProviderData_t1712 * G_B3_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m400(NULL /*static, unused*/, L_0, _stringLiteral2189, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ProviderData_t1712 * L_2 = (ProviderData_t1712 *)il2cpp_codegen_object_new (ProviderData_t1712_il2cpp_TypeInfo_var);
		ProviderData__ctor_m10605(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_001a:
	{
		FormatterData_t1713 * L_3 = (FormatterData_t1713 *)il2cpp_codegen_object_new (FormatterData_t1713_il2cpp_TypeInfo_var);
		FormatterData__ctor_m10607(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((ProviderData_t1712 *)(L_3));
	}

IL_001f:
	{
		V_0 = G_B3_0;
		SinkProviderData_t1654 * L_4 = (SinkProviderData_t1654 *)il2cpp_codegen_object_new (SinkProviderData_t1654_il2cpp_TypeInfo_var);
		SinkProviderData__ctor_m10319(L_4, _stringLiteral2227, /*hidden argument*/NULL);
		V_1 = L_4;
		ProviderData_t1712 * L_5 = V_0;
		SinkProviderData_t1654 * L_6 = V_1;
		NullCheck(L_6);
		Object_t * L_7 = SinkProviderData_get_Children_m10320(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->___CustomData_4 = L_7;
		Stack_t874 * L_8 = (Stack_t874 *)il2cpp_codegen_object_new (Stack_t874_il2cpp_TypeInfo_var);
		Stack__ctor_m5503(L_8, /*hidden argument*/NULL);
		__this->___currentProviderData_3 = L_8;
		Stack_t874 * L_9 = (__this->___currentProviderData_3);
		SinkProviderData_t1654 * L_10 = V_1;
		NullCheck(L_9);
		VirtActionInvoker1< Object_t * >::Invoke(17 /* System.Void System.Collections.Stack::Push(System.Object) */, L_9, L_10);
		V_2 = 0;
		goto IL_00dd;
	}

IL_0055:
	{
		Object_t * L_11 = ___attrs;
		NullCheck(L_11);
		StringU5BU5D_t284* L_12 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_11);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14));
		Object_t * L_15 = ___attrs;
		NullCheck(L_15);
		StringU5BU5D_t284* L_16 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(5 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Values() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_15);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_16, L_18));
		String_t* L_19 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m400(NULL /*static, unused*/, L_19, _stringLiteral81, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		bool L_21 = ___isTemplate;
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		ProviderData_t1712 * L_22 = V_0;
		String_t* L_23 = V_4;
		NullCheck(L_22);
		L_22->___Id_2 = L_23;
		goto IL_00d9;
	}

IL_008b:
	{
		String_t* L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m400(NULL /*static, unused*/, L_24, _stringLiteral18, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		ProviderData_t1712 * L_26 = V_0;
		String_t* L_27 = V_4;
		NullCheck(L_26);
		L_26->___Type_1 = L_27;
		goto IL_00d9;
	}

IL_00a8:
	{
		String_t* L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m400(NULL /*static, unused*/, L_28, _stringLiteral2224, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		bool L_30 = ___isTemplate;
		if (L_30)
		{
			goto IL_00cb;
		}
	}
	{
		ProviderData_t1712 * L_31 = V_0;
		String_t* L_32 = V_4;
		NullCheck(L_31);
		L_31->___Ref_0 = L_32;
		goto IL_00d9;
	}

IL_00cb:
	{
		ProviderData_t1712 * L_33 = V_0;
		NullCheck(L_33);
		Hashtable_t24 * L_34 = (L_33->___CustomProperties_3);
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		NullCheck(L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_34, L_35, L_36);
	}

IL_00d9:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00dd:
	{
		int32_t L_38 = V_2;
		Object_t * L_39 = ___attrs;
		NullCheck(L_39);
		StringU5BU5D_t284* L_40 = (StringU5BU5D_t284*)InterfaceFuncInvoker0< StringU5BU5D_t284* >::Invoke(4 /* System.String[] Mono.Xml.SmallXmlParser/IAttrList::get_Names() */, IAttrList_t1977_il2cpp_TypeInfo_var, L_39);
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		ProviderData_t1712 * L_41 = V_0;
		NullCheck(L_41);
		String_t* L_42 = (L_41->___Id_2);
		if (L_42)
		{
			goto IL_0107;
		}
	}
	{
		bool L_43 = ___isTemplate;
		if (!L_43)
		{
			goto IL_0107;
		}
	}
	{
		RemotingException_t1714 * L_44 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_44, _stringLiteral2226, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_0107:
	{
		ProviderData_t1712 * L_45 = V_0;
		return L_45;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral2228;
extern "C" void ConfigHandler_ReadClientActivated_m10590 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1158);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral2228 = il2cpp_codegen_string_literal_from_index(2228);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m10596(__this, L_0, _stringLiteral18, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ConfigHandler_ExtractAssembly_m10597(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = (__this->___currentClientUrl_4);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_4 = (__this->___currentClientUrl_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m400(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		RemotingException_t1714 * L_7 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_7, _stringLiteral2228, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0041:
	{
		ArrayList_t64 * L_8 = (__this->___typeEntries_0);
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = (__this->___currentClientUrl_4);
		ActivatedClientTypeEntry_t1698 * L_12 = (ActivatedClientTypeEntry_t1698 *)il2cpp_codegen_object_new (ActivatedClientTypeEntry_t1698_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry__ctor_m10522(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_12);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* ActivatedServiceTypeEntry_t1700_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral18;
extern "C" void ConfigHandler_ReadServiceActivated_m10591 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivatedServiceTypeEntry_t1700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1161);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m10596(__this, L_0, _stringLiteral18, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ConfigHandler_ExtractAssembly_m10597(__this, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		ArrayList_t64 * L_3 = (__this->___typeEntries_0);
		String_t* L_4 = V_0;
		String_t* L_5 = V_1;
		ActivatedServiceTypeEntry_t1700 * L_6 = (ActivatedServiceTypeEntry_t1700 *)il2cpp_codegen_object_new (ActivatedServiceTypeEntry_t1700_il2cpp_TypeInfo_var);
		ActivatedServiceTypeEntry__ctor_m10527(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_3, L_6);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* WellKnownClientTypeEntry_t1723_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2209;
extern Il2CppCodeGenString* _stringLiteral18;
extern "C" void ConfigHandler_ReadClientWellKnown_m10592 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WellKnownClientTypeEntry_t1723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1162);
		_stringLiteral2209 = il2cpp_codegen_string_literal_from_index(2209);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m10596(__this, L_0, _stringLiteral2209, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		String_t* L_3 = ConfigHandler_GetNotNull_m10596(__this, L_2, _stringLiteral18, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = ConfigHandler_ExtractAssembly_m10597(__this, (&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		ArrayList_t64 * L_5 = (__this->___typeEntries_0);
		String_t* L_6 = V_1;
		String_t* L_7 = V_2;
		String_t* L_8 = V_0;
		WellKnownClientTypeEntry_t1723 * L_9 = (WellKnownClientTypeEntry_t1723 *)il2cpp_codegen_object_new (WellKnownClientTypeEntry_t1723_il2cpp_TypeInfo_var);
		WellKnownClientTypeEntry__ctor_m10666(L_9, L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_9);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* WellKnownServiceTypeEntry_t1725_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2229;
extern Il2CppCodeGenString* _stringLiteral1691;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral2230;
extern Il2CppCodeGenString* _stringLiteral2231;
extern Il2CppCodeGenString* _stringLiteral2232;
extern Il2CppCodeGenString* _stringLiteral2233;
extern "C" void ConfigHandler_ReadServiceWellKnown_m10593 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		WellKnownServiceTypeEntry_t1725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1163);
		_stringLiteral2229 = il2cpp_codegen_string_literal_from_index(2229);
		_stringLiteral1691 = il2cpp_codegen_string_literal_from_index(1691);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral2230 = il2cpp_codegen_string_literal_from_index(2230);
		_stringLiteral2231 = il2cpp_codegen_string_literal_from_index(2231);
		_stringLiteral2232 = il2cpp_codegen_string_literal_from_index(2232);
		_stringLiteral2233 = il2cpp_codegen_string_literal_from_index(2233);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	int32_t V_4 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m10596(__this, L_0, _stringLiteral2229, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		String_t* L_3 = ConfigHandler_GetNotNull_m10596(__this, L_2, _stringLiteral1691, /*hidden argument*/NULL);
		V_1 = L_3;
		Object_t * L_4 = ___attrs;
		String_t* L_5 = ConfigHandler_GetNotNull_m10596(__this, L_4, _stringLiteral18, /*hidden argument*/NULL);
		V_2 = L_5;
		String_t* L_6 = ConfigHandler_ExtractAssembly_m10597(__this, (&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		String_t* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m400(NULL /*static, unused*/, L_7, _stringLiteral2230, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		V_4 = 2;
		goto IL_0076;
	}

IL_0048:
	{
		String_t* L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m400(NULL /*static, unused*/, L_9, _stringLiteral2231, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		V_4 = 1;
		goto IL_0076;
	}

IL_0060:
	{
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2232, L_11, _stringLiteral2233, /*hidden argument*/NULL);
		RemotingException_t1714 * L_13 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0076:
	{
		ArrayList_t64 * L_14 = (__this->___typeEntries_0);
		String_t* L_15 = V_2;
		String_t* L_16 = V_3;
		String_t* L_17 = V_0;
		int32_t L_18 = V_4;
		WellKnownServiceTypeEntry_t1725 * L_19 = (WellKnownServiceTypeEntry_t1725 *)il2cpp_codegen_object_new (WellKnownServiceTypeEntry_t1725_il2cpp_TypeInfo_var);
		WellKnownServiceTypeEntry__ctor_m10671(L_19, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_14, L_19);
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t286_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2234;
extern Il2CppCodeGenString* _stringLiteral2235;
extern "C" void ConfigHandler_ReadInteropXml_m10594 (ConfigHandler_t1711 * __this, Object_t * ___attrs, bool ___isElement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		CharU5BU5D_t286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(118);
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		_stringLiteral2234 = il2cpp_codegen_string_literal_from_index(2234);
		_stringLiteral2235 = il2cpp_codegen_string_literal_from_index(2235);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	StringU5BU5D_t284* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* G_B3_0 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ConfigHandler_GetNotNull_m10596(__this, L_0, _stringLiteral2234, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m8279(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = ___attrs;
		String_t* L_4 = ConfigHandler_GetNotNull_m10596(__this, L_3, _stringLiteral2235, /*hidden argument*/NULL);
		CharU5BU5D_t286* L_5 = ((CharU5BU5D_t286*)SZArrayNew(CharU5BU5D_t286_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_5, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_4);
		StringU5BU5D_t284* L_6 = String_Split_m2457(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		StringU5BU5D_t284* L_7 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)));
		String_t* L_9 = String_Trim_m2089((*(String_t**)(String_t**)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t284* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		StringU5BU5D_t284* L_11 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 1);
		int32_t L_12 = 1;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12)));
		String_t* L_13 = String_Trim_m2089((*(String_t**)(String_t**)SZArrayLdElema(L_11, L_12)), /*hidden argument*/NULL);
		G_B3_0 = L_13;
		goto IL_004f;
	}

IL_004e:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_004f:
	{
		V_3 = G_B3_0;
		bool L_14 = ___isElement;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_15 = V_2;
		String_t* L_16 = V_3;
		Type_t * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlElement_m10656(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0063:
	{
		String_t* L_18 = V_2;
		String_t* L_19 = V_3;
		Type_t * L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlType_m10657(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
extern TypeInfo* IAttrList_t1977_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral18;
extern Il2CppCodeGenString* _stringLiteral2236;
extern Il2CppCodeGenString* _stringLiteral2237;
extern Il2CppCodeGenString* _stringLiteral2238;
extern "C" void ConfigHandler_ReadPreload_m10595 (ConfigHandler_t1711 * __this, Object_t * ___attrs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1977_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		_stringLiteral18 = il2cpp_codegen_string_literal_from_index(18);
		_stringLiteral2236 = il2cpp_codegen_string_literal_from_index(2236);
		_stringLiteral2237 = il2cpp_codegen_string_literal_from_index(2237);
		_stringLiteral2238 = il2cpp_codegen_string_literal_from_index(2238);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___attrs;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_0, _stringLiteral18);
		V_0 = L_1;
		Object_t * L_2 = ___attrs;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_2, _stringLiteral2236);
		V_1 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		RemotingException_t1714 * L_6 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_6, _stringLiteral2237, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		String_t* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetType_m8279(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m10655(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0045:
	{
		String_t* L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_11 = V_1;
		Assembly_t1333 * L_12 = Assembly_Load_m9965(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m10654(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_005b:
	{
		RemotingException_t1714 * L_13 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_13, _stringLiteral2238, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0066:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern TypeInfo* IAttrList_t1977_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2239;
extern "C" String_t* ConfigHandler_GetNotNull_m10596 (ConfigHandler_t1711 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAttrList_t1977_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(975);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2239 = il2cpp_codegen_string_literal_from_index(2239);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___attrs;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String Mono.Xml.SmallXmlParser/IAttrList::GetValue(System.String) */, IAttrList_t1977_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m400(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002f;
		}
	}

IL_001e:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m421(NULL /*static, unused*/, L_7, _stringLiteral2239, /*hidden argument*/NULL);
		RemotingException_t1714 * L_9 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigHandler_ExtractAssembly_m10597 (ConfigHandler_t1711 * __this, String_t** ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	{
		String_t** L_0 = ___type;
		NullCheck((*((String_t**)L_0)));
		int32_t L_1 = String_IndexOf_m3908((*((String_t**)L_0)), ((int32_t)44), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}

IL_0017:
	{
		String_t** L_4 = ___type;
		int32_t L_5 = V_0;
		NullCheck((*((String_t**)L_4)));
		String_t* L_6 = String_Substring_m2097((*((String_t**)L_4)), ((int32_t)((int32_t)L_5+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_Trim_m2089(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t** L_8 = ___type;
		String_t** L_9 = ___type;
		int32_t L_10 = V_0;
		NullCheck((*((String_t**)L_9)));
		String_t* L_11 = String_Substring_m423((*((String_t**)L_9)), 0, L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = String_Trim_m2089(L_11, /*hidden argument*/NULL);
		*((Object_t **)(L_8)) = (Object_t *)L_12;
		String_t* L_13 = V_1;
		return L_13;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C" void ConfigHandler_OnChars_m10598 (ConfigHandler_t1711 * __this, String_t* ___ch, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern "C" void ConfigHandler_OnEndParsing_m10599 (ConfigHandler_t1711 * __this, SmallXmlParser_t1439 * ___parser, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t64 * L_0 = (__this->___channelInstances_1);
		bool L_1 = (__this->___onlyDelayedChannels_7);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterChannels_m10573(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___appName_5);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___appName_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		RemotingConfiguration_set_ApplicationName_m10562(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		bool L_4 = (__this->___onlyDelayedChannels_7);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		ArrayList_t64 * L_5 = (__this->___typeEntries_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		RemotingConfiguration_RegisterTypes_m10574(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern "C" void ChannelData__ctor_m10600 (ChannelData_t1710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t64 * L_0 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_0, /*hidden argument*/NULL);
		__this->____serverProviders_4 = L_0;
		ArrayList_t64 * L_1 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_1, /*hidden argument*/NULL);
		__this->____clientProviders_5 = L_1;
		Hashtable_t24 * L_2 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_2, /*hidden argument*/NULL);
		__this->____customProperties_6 = L_2;
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern "C" ArrayList_t64 * ChannelData_get_ServerProviders_m10601 (ChannelData_t1710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t64 * L_0 = (__this->____serverProviders_4);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t64 * L_1 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_1, /*hidden argument*/NULL);
		__this->____serverProviders_4 = L_1;
	}

IL_0016:
	{
		ArrayList_t64 * L_2 = (__this->____serverProviders_4);
		return L_2;
	}
}
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern "C" ArrayList_t64 * ChannelData_get_ClientProviders_m10602 (ChannelData_t1710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t64 * L_0 = (__this->____clientProviders_5);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t64 * L_1 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_1, /*hidden argument*/NULL);
		__this->____clientProviders_5 = L_1;
	}

IL_0016:
	{
		ArrayList_t64 * L_2 = (__this->____clientProviders_5);
		return L_2;
	}
}
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern "C" Hashtable_t24 * ChannelData_get_CustomProperties_m10603 (ChannelData_t1710 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t24 * L_0 = (__this->____customProperties_6);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t24 * L_1 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_1, /*hidden argument*/NULL);
		__this->____customProperties_6 = L_1;
	}

IL_0016:
	{
		Hashtable_t24 * L_2 = (__this->____customProperties_6);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t65_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderData_t1712_il2cpp_TypeInfo_var;
extern "C" void ChannelData_CopyFrom_m10604 (ChannelData_t1710 * __this, ChannelData_t1710 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		DictionaryEntry_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		ProviderData_t1712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1107);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t65  V_0 = {0};
	Object_t * V_1 = {0};
	ProviderData_t1712 * V_2 = {0};
	Object_t * V_3 = {0};
	ProviderData_t1712 * V_4 = {0};
	ProviderData_t1712 * V_5 = {0};
	Object_t * V_6 = {0};
	ProviderData_t1712 * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___Ref_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ChannelData_t1710 * L_1 = ___other;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Ref_0);
		__this->___Ref_0 = L_2;
	}

IL_0017:
	{
		String_t* L_3 = (__this->___Id_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ChannelData_t1710 * L_4 = ___other;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Id_2);
		__this->___Id_2 = L_5;
	}

IL_002e:
	{
		String_t* L_6 = (__this->___Type_1);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ChannelData_t1710 * L_7 = ___other;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___Type_1);
		__this->___Type_1 = L_8;
	}

IL_0045:
	{
		String_t* L_9 = (__this->___DelayLoadAsClientChannel_3);
		if (L_9)
		{
			goto IL_005c;
		}
	}
	{
		ChannelData_t1710 * L_10 = ___other;
		NullCheck(L_10);
		String_t* L_11 = (L_10->___DelayLoadAsClientChannel_3);
		__this->___DelayLoadAsClientChannel_3 = L_11;
	}

IL_005c:
	{
		ChannelData_t1710 * L_12 = ___other;
		NullCheck(L_12);
		Hashtable_t24 * L_13 = (L_12->____customProperties_6);
		if (!L_13)
		{
			goto IL_00d9;
		}
	}
	{
		ChannelData_t1710 * L_14 = ___other;
		NullCheck(L_14);
		Hashtable_t24 * L_15 = (L_14->____customProperties_6);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_15);
		V_1 = L_16;
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b4;
		}

IL_0078:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t65 *)((DictionaryEntry_t65 *)UnBox (L_18, DictionaryEntry_t65_il2cpp_TypeInfo_var))));
			Hashtable_t24 * L_19 = ChannelData_get_CustomProperties_m10603(__this, /*hidden argument*/NULL);
			Object_t * L_20 = DictionaryEntry_get_Key_m432((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			bool L_21 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_19, L_20);
			if (L_21)
			{
				goto IL_00b4;
			}
		}

IL_009b:
		{
			Hashtable_t24 * L_22 = ChannelData_get_CustomProperties_m10603(__this, /*hidden argument*/NULL);
			Object_t * L_23 = DictionaryEntry_get_Key_m432((&V_0), /*hidden argument*/NULL);
			Object_t * L_24 = DictionaryEntry_get_Value_m433((&V_0), /*hidden argument*/NULL);
			NullCheck(L_22);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_22, L_23, L_24);
		}

IL_00b4:
		{
			Object_t * L_25 = V_1;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0078;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xD9, FINALLY_00c4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_00c4;
	}

FINALLY_00c4:
	{ // begin finally (depth: 1)
		{
			Object_t * L_27 = V_1;
			V_8 = ((Object_t *)IsInst(L_27, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_28 = V_8;
			if (L_28)
			{
				goto IL_00d1;
			}
		}

IL_00d0:
		{
			IL2CPP_END_FINALLY(196)
		}

IL_00d1:
		{
			Object_t * L_29 = V_8;
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_29);
			IL2CPP_END_FINALLY(196)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(196)
	{
		IL2CPP_JUMP_TBL(0xD9, IL_00d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_00d9:
	{
		ArrayList_t64 * L_30 = (__this->____serverProviders_4);
		if (L_30)
		{
			goto IL_014e;
		}
	}
	{
		ChannelData_t1710 * L_31 = ___other;
		NullCheck(L_31);
		ArrayList_t64 * L_32 = (L_31->____serverProviders_4);
		if (!L_32)
		{
			goto IL_014e;
		}
	}
	{
		ChannelData_t1710 * L_33 = ___other;
		NullCheck(L_33);
		ArrayList_t64 * L_34 = (L_33->____serverProviders_4);
		NullCheck(L_34);
		Object_t * L_35 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_34);
		V_3 = L_35;
	}

IL_00fb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_0100:
		{
			Object_t * L_36 = V_3;
			NullCheck(L_36);
			Object_t * L_37 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_36);
			V_2 = ((ProviderData_t1712 *)Castclass(L_37, ProviderData_t1712_il2cpp_TypeInfo_var));
			ProviderData_t1712 * L_38 = (ProviderData_t1712 *)il2cpp_codegen_object_new (ProviderData_t1712_il2cpp_TypeInfo_var);
			ProviderData__ctor_m10605(L_38, /*hidden argument*/NULL);
			V_4 = L_38;
			ProviderData_t1712 * L_39 = V_4;
			ProviderData_t1712 * L_40 = V_2;
			NullCheck(L_39);
			ProviderData_CopyFrom_m10606(L_39, L_40, /*hidden argument*/NULL);
			ArrayList_t64 * L_41 = ChannelData_get_ServerProviders_m10601(__this, /*hidden argument*/NULL);
			ProviderData_t1712 * L_42 = V_4;
			NullCheck(L_41);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_41, L_42);
		}

IL_0129:
		{
			Object_t * L_43 = V_3;
			NullCheck(L_43);
			bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_43);
			if (L_44)
			{
				goto IL_0100;
			}
		}

IL_0134:
		{
			IL2CPP_LEAVE(0x14E, FINALLY_0139);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0139;
	}

FINALLY_0139:
	{ // begin finally (depth: 1)
		{
			Object_t * L_45 = V_3;
			V_9 = ((Object_t *)IsInst(L_45, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_9;
			if (L_46)
			{
				goto IL_0146;
			}
		}

IL_0145:
		{
			IL2CPP_END_FINALLY(313)
		}

IL_0146:
		{
			Object_t * L_47 = V_9;
			NullCheck(L_47);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_47);
			IL2CPP_END_FINALLY(313)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(313)
	{
		IL2CPP_JUMP_TBL(0x14E, IL_014e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_014e:
	{
		ArrayList_t64 * L_48 = (__this->____clientProviders_5);
		if (L_48)
		{
			goto IL_01c9;
		}
	}
	{
		ChannelData_t1710 * L_49 = ___other;
		NullCheck(L_49);
		ArrayList_t64 * L_50 = (L_49->____clientProviders_5);
		if (!L_50)
		{
			goto IL_01c9;
		}
	}
	{
		ChannelData_t1710 * L_51 = ___other;
		NullCheck(L_51);
		ArrayList_t64 * L_52 = (L_51->____clientProviders_5);
		NullCheck(L_52);
		Object_t * L_53 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_52);
		V_6 = L_53;
	}

IL_0171:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01a2;
		}

IL_0176:
		{
			Object_t * L_54 = V_6;
			NullCheck(L_54);
			Object_t * L_55 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_54);
			V_5 = ((ProviderData_t1712 *)Castclass(L_55, ProviderData_t1712_il2cpp_TypeInfo_var));
			ProviderData_t1712 * L_56 = (ProviderData_t1712 *)il2cpp_codegen_object_new (ProviderData_t1712_il2cpp_TypeInfo_var);
			ProviderData__ctor_m10605(L_56, /*hidden argument*/NULL);
			V_7 = L_56;
			ProviderData_t1712 * L_57 = V_7;
			ProviderData_t1712 * L_58 = V_5;
			NullCheck(L_57);
			ProviderData_CopyFrom_m10606(L_57, L_58, /*hidden argument*/NULL);
			ArrayList_t64 * L_59 = ChannelData_get_ClientProviders_m10602(__this, /*hidden argument*/NULL);
			ProviderData_t1712 * L_60 = V_7;
			NullCheck(L_59);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_59, L_60);
		}

IL_01a2:
		{
			Object_t * L_61 = V_6;
			NullCheck(L_61);
			bool L_62 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_61);
			if (L_62)
			{
				goto IL_0176;
			}
		}

IL_01ae:
		{
			IL2CPP_LEAVE(0x1C9, FINALLY_01b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_01b3;
	}

FINALLY_01b3:
	{ // begin finally (depth: 1)
		{
			Object_t * L_63 = V_6;
			V_10 = ((Object_t *)IsInst(L_63, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_64 = V_10;
			if (L_64)
			{
				goto IL_01c1;
			}
		}

IL_01c0:
		{
			IL2CPP_END_FINALLY(435)
		}

IL_01c1:
		{
			Object_t * L_65 = V_10;
			NullCheck(L_65);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_65);
			IL2CPP_END_FINALLY(435)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(435)
	{
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_01c9:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.ProviderData::.ctor()
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern "C" void ProviderData__ctor_m10605 (ProviderData_t1712 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t24 * L_0 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_0, /*hidden argument*/NULL);
		__this->___CustomProperties_3 = L_0;
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ProviderData::CopyFrom(System.Runtime.Remoting.ProviderData)
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t65_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t893_il2cpp_TypeInfo_var;
extern TypeInfo* SinkProviderData_t1654_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t1285_il2cpp_TypeInfo_var;
extern "C" void ProviderData_CopyFrom_m10606 (ProviderData_t1712 * __this, ProviderData_t1712 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		DictionaryEntry_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		IEnumerable_t893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(531);
		SinkProviderData_t1654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1164);
		IList_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(846);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t65  V_0 = {0};
	Object_t * V_1 = {0};
	SinkProviderData_t1654 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___Ref_0);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ProviderData_t1712 * L_1 = ___other;
		NullCheck(L_1);
		String_t* L_2 = (L_1->___Ref_0);
		__this->___Ref_0 = L_2;
	}

IL_0017:
	{
		String_t* L_3 = (__this->___Id_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		ProviderData_t1712 * L_4 = ___other;
		NullCheck(L_4);
		String_t* L_5 = (L_4->___Id_2);
		__this->___Id_2 = L_5;
	}

IL_002e:
	{
		String_t* L_6 = (__this->___Type_1);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		ProviderData_t1712 * L_7 = ___other;
		NullCheck(L_7);
		String_t* L_8 = (L_7->___Type_1);
		__this->___Type_1 = L_8;
	}

IL_0045:
	{
		ProviderData_t1712 * L_9 = ___other;
		NullCheck(L_9);
		Hashtable_t24 * L_10 = (L_9->___CustomProperties_3);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_10);
		V_1 = L_11;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0092;
		}

IL_0056:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_12);
			V_0 = ((*(DictionaryEntry_t65 *)((DictionaryEntry_t65 *)UnBox (L_13, DictionaryEntry_t65_il2cpp_TypeInfo_var))));
			Hashtable_t24 * L_14 = (__this->___CustomProperties_3);
			Object_t * L_15 = DictionaryEntry_get_Key_m432((&V_0), /*hidden argument*/NULL);
			NullCheck(L_14);
			bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_14, L_15);
			if (L_16)
			{
				goto IL_0092;
			}
		}

IL_0079:
		{
			Hashtable_t24 * L_17 = (__this->___CustomProperties_3);
			Object_t * L_18 = DictionaryEntry_get_Key_m432((&V_0), /*hidden argument*/NULL);
			Object_t * L_19 = DictionaryEntry_get_Value_m433((&V_0), /*hidden argument*/NULL);
			NullCheck(L_17);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_17, L_18, L_19);
		}

IL_0092:
		{
			Object_t * L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0056;
			}
		}

IL_009d:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_1;
			V_4 = ((Object_t *)IsInst(L_22, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_4;
			if (L_23)
			{
				goto IL_00af;
			}
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(162)
		}

IL_00af:
		{
			Object_t * L_24 = V_4;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_00b7:
	{
		ProviderData_t1712 * L_25 = ___other;
		NullCheck(L_25);
		Object_t * L_26 = (L_25->___CustomData_4);
		if (!L_26)
		{
			goto IL_0127;
		}
	}
	{
		Object_t * L_27 = (__this->___CustomData_4);
		if (L_27)
		{
			goto IL_00d8;
		}
	}
	{
		ArrayList_t64 * L_28 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_28, /*hidden argument*/NULL);
		__this->___CustomData_4 = L_28;
	}

IL_00d8:
	{
		ProviderData_t1712 * L_29 = ___other;
		NullCheck(L_29);
		Object_t * L_30 = (L_29->___CustomData_4);
		NullCheck(L_30);
		Object_t * L_31 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t893_il2cpp_TypeInfo_var, L_30);
		V_3 = L_31;
	}

IL_00e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0102;
		}

IL_00e9:
		{
			Object_t * L_32 = V_3;
			NullCheck(L_32);
			Object_t * L_33 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_32);
			V_2 = ((SinkProviderData_t1654 *)Castclass(L_33, SinkProviderData_t1654_il2cpp_TypeInfo_var));
			Object_t * L_34 = (__this->___CustomData_4);
			SinkProviderData_t1654 * L_35 = V_2;
			NullCheck(L_34);
			InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1285_il2cpp_TypeInfo_var, L_34, L_35);
		}

IL_0102:
		{
			Object_t * L_36 = V_3;
			NullCheck(L_36);
			bool L_37 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_36);
			if (L_37)
			{
				goto IL_00e9;
			}
		}

IL_010d:
		{
			IL2CPP_LEAVE(0x127, FINALLY_0112);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0112;
	}

FINALLY_0112:
	{ // begin finally (depth: 1)
		{
			Object_t * L_38 = V_3;
			V_5 = ((Object_t *)IsInst(L_38, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_39 = V_5;
			if (L_39)
			{
				goto IL_011f;
			}
		}

IL_011e:
		{
			IL2CPP_END_FINALLY(274)
		}

IL_011f:
		{
			Object_t * L_40 = V_5;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_40);
			IL2CPP_END_FINALLY(274)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(274)
	{
		IL2CPP_JUMP_TBL(0x127, IL_0127)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0127:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.FormatterData::.ctor()
extern "C" void FormatterData__ctor_m10607 (FormatterData_t1713 * __this, const MethodInfo* method)
{
	{
		ProviderData__ctor_m10605(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.RemotingException::.ctor()
extern "C" void RemotingException__ctor_m10608 (RemotingException_t1714 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m12293(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String)
extern "C" void RemotingException__ctor_m10609 (RemotingException_t1714 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m7498(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RemotingException__ctor_m10610 (RemotingException_t1714 * __this, SerializationInfo_t900 * ___info, StreamingContext_t901  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t900 * L_0 = ___info;
		StreamingContext_t901  L_1 = ___context;
		SystemException__ctor_m12294(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String,System.Exception)
extern "C" void RemotingException__ctor_m10611 (RemotingException_t1714 * __this, String_t* ___message, Exception_t54 * ___InnerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t54 * L_1 = ___InnerException;
		SystemException__ctor_m12295(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServices.h"
#ifndef _MSC_VER
#else
#endif

// System.Guid
#include "mscorlib_System_Guid.h"
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentity.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentity.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContextMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1MethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentityMethodDeclarations.h"
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentityMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern const Il2CppType* RemoteActivator_t1645_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t1715_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t66_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral2240;
extern Il2CppCodeGenString* _stringLiteral2241;
extern Il2CppCodeGenString* _stringLiteral2242;
extern "C" void RemotingServices__cctor_m10612 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemoteActivator_t1645_0_0_0_var = il2cpp_codegen_type_from_index(1166);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1133);
		BinaryFormatter_t1715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1167);
		Guid_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral2240 = il2cpp_codegen_string_literal_from_index(2240);
		_stringLiteral2241 = il2cpp_codegen_string_literal_from_index(2241);
		_stringLiteral2242 = il2cpp_codegen_string_literal_from_index(2242);
		s_Il2CppMethodIntialized = true;
	}
	RemotingSurrogateSelector_t1684 * V_0 = {0};
	StreamingContext_t901  V_1 = {0};
	Guid_t66  V_2 = {0};
	{
		Hashtable_t24 * L_0 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_0, /*hidden argument*/NULL);
		((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0 = L_0;
		((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___next_id_4 = 1;
		((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5 = ((int32_t)52);
		RemotingSurrogateSelector_t1684 * L_1 = (RemotingSurrogateSelector_t1684 *)il2cpp_codegen_object_new (RemotingSurrogateSelector_t1684_il2cpp_TypeInfo_var);
		RemotingSurrogateSelector__ctor_m10463(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		StreamingContext__ctor_m10801((&V_1), ((int32_t)16), NULL, /*hidden argument*/NULL);
		RemotingSurrogateSelector_t1684 * L_2 = V_0;
		StreamingContext_t901  L_3 = V_1;
		BinaryFormatter_t1715 * L_4 = (BinaryFormatter_t1715 *)il2cpp_codegen_object_new (BinaryFormatter_t1715_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m10681(L_4, L_2, L_3, /*hidden argument*/NULL);
		((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1 = L_4;
		StreamingContext_t901  L_5 = V_1;
		BinaryFormatter_t1715 * L_6 = (BinaryFormatter_t1715 *)il2cpp_codegen_object_new (BinaryFormatter_t1715_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m10681(L_6, (Object_t *)NULL, L_5, /*hidden argument*/NULL);
		((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2 = L_6;
		BinaryFormatter_t1715 * L_7 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1;
		NullCheck(L_7);
		BinaryFormatter_set_AssemblyFormat_m10683(L_7, 1, /*hidden argument*/NULL);
		BinaryFormatter_t1715 * L_8 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2;
		NullCheck(L_8);
		BinaryFormatter_set_AssemblyFormat_m10683(L_8, 1, /*hidden argument*/NULL);
		RemotingServices_RegisterInternalChannels_m10633(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t66_il2cpp_TypeInfo_var);
		Guid_t66  L_9 = Guid_NewGuid_m434(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = Guid_ToString_m435((&V_2), /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m5480(L_10, ((int32_t)45), ((int32_t)95), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m421(NULL /*static, unused*/, L_11, _stringLiteral141, /*hidden argument*/NULL);
		((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___app_id_3 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(RemoteActivator_t1645_0_0_0_var), /*hidden argument*/NULL);
		RemotingServices_CreateWellKnownServerIdentity_m10629(NULL /*static, unused*/, L_13, _stringLiteral2240, 1, /*hidden argument*/NULL);
		Type_t * L_14 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_14, _stringLiteral2241, ((int32_t)36));
		((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6 = L_15;
		Type_t * L_16 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		MethodInfo_t * L_17 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_16, _stringLiteral2242, ((int32_t)36));
		((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7 = L_17;
		return;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t961 * RemotingServices_GetVirtualMethod_m10613 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t961 * ___method, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef MethodBase_t961 * (*RemotingServices_GetVirtualMethod_m10613_ftn) (Type_t *, MethodBase_t961 *);
	return  ((RemotingServices_GetVirtualMethod_m10613_ftn)mscorlib::System::Runtime::Remoting::RemotingServices::GetVirtualMethod) (___type, ___method);
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m10614 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	using namespace il2cpp::icalls;
	typedef bool (*RemotingServices_IsTransparentProxy_m10614_ftn) (Object_t *);
	return  ((RemotingServices_IsTransparentProxy_m10614_ftn)mscorlib::System::Runtime::Remoting::RemotingServices::IsTransparentProxy) (___proxy);
}
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* ServerIdentity_t1370_il2cpp_TypeInfo_var;
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m10615 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		ServerIdentity_t1370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t1370 * V_0 = {0};
	{
		String_t* L_0 = ___URI;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Identity_t1694 * L_1 = RemotingServices_GetIdentityForUri_m10625(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ServerIdentity_t1370 *)IsInst(L_1, ServerIdentity_t1370_il2cpp_TypeInfo_var));
		ServerIdentity_t1370 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0014:
	{
		ServerIdentity_t1370 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = ServerIdentity_get_ObjectType_m10637(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m10616 (Object_t * __this /* static, unused */, ObjRef_t1702 * ___objectRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t1702 * L_0 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_1 = RemotingServices_Unmarshal_m10617(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern const Il2CppType* MarshalByRefObject_t1213_0_0_0_var;
extern const Il2CppType* ProxyAttribute_t1691_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t1697_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t1691_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m10617 (Object_t * __this /* static, unused */, ObjRef_t1702 * ___objectRef, bool ___fRefine, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t1213_0_0_0_var = il2cpp_codegen_type_from_index(922);
		ProxyAttribute_t1691_0_0_0_var = il2cpp_codegen_type_from_index(1169);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		TrackingServices_t1697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1143);
		ProxyAttribute_t1691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1169);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	ProxyAttribute_t1691 * V_3 = {0};
	Type_t * G_B3_0 = {0};
	{
		bool L_0 = ___fRefine;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ObjRef_t1702 * L_1 = ___objectRef;
		NullCheck(L_1);
		Type_t * L_2 = ObjRef_get_ServerType_m10559(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t1213_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001b:
	{
		V_0 = G_B3_0;
		Type_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t1213_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002d:
	{
		ObjRef_t1702 * L_6 = ___objectRef;
		NullCheck(L_6);
		bool L_7 = ObjRef_get_IsReferenceToWellKnow_m10548(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		ObjRef_t1702 * L_8 = ___objectRef;
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_10 = RemotingServices_GetRemoteObject_m10632(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ObjRef_t1702 * L_12 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1697_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m10521(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Object_t * L_13 = V_1;
		return L_13;
	}

IL_0049:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_14);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		Type_t * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t1691_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t706 * L_18 = Attribute_GetCustomAttribute_m7535(NULL /*static, unused*/, L_16, L_17, 1, /*hidden argument*/NULL);
		V_3 = ((ProxyAttribute_t1691 *)Castclass(L_18, ProxyAttribute_t1691_il2cpp_TypeInfo_var));
		ProxyAttribute_t1691 * L_19 = V_3;
		if (!L_19)
		{
			goto IL_008a;
		}
	}
	{
		ProxyAttribute_t1691 * L_20 = V_3;
		ObjRef_t1702 * L_21 = ___objectRef;
		Type_t * L_22 = V_0;
		NullCheck(L_20);
		RealProxy_t1692 * L_23 = (RealProxy_t1692 *)VirtFuncInvoker4< RealProxy_t1692 *, ObjRef_t1702 *, Type_t *, Object_t *, Context_t1655 * >::Invoke(7 /* System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context) */, L_20, L_21, L_22, NULL, (Context_t1655 *)NULL);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_23);
		V_2 = L_24;
		Object_t * L_25 = V_2;
		ObjRef_t1702 * L_26 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1697_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m10521(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Object_t * L_27 = V_2;
		return L_27;
	}

IL_008a:
	{
		ObjRef_t1702 * L_28 = ___objectRef;
		Type_t * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_30 = RemotingServices_GetProxyForRemoteObject_m10631(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		Object_t * L_31 = V_2;
		ObjRef_t1702 * L_32 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t1697_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m10521(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = V_2;
		return L_33;
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* TransparentProxy_t1693_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2243;
extern "C" RealProxy_t1692 * RemotingServices_GetRealProxy_m10618 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		TransparentProxy_t1693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1170);
		_stringLiteral2243 = il2cpp_codegen_string_literal_from_index(2243);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___proxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		bool L_1 = RemotingServices_IsTransparentProxy_m10614(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RemotingException_t1714 * L_2 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_2, _stringLiteral2243, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Object_t * L_3 = ___proxy;
		NullCheck(((TransparentProxy_t1693 *)Castclass(L_3, TransparentProxy_t1693_il2cpp_TypeInfo_var)));
		RealProxy_t1692 * L_4 = (((TransparentProxy_t1693 *)Castclass(L_3, TransparentProxy_t1693_il2cpp_TypeInfo_var))->____rp_0);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* IMethodMessage_t1679_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t793_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2119;
extern Il2CppCodeGenString* _stringLiteral1668;
extern "C" MethodBase_t961 * RemotingServices_GetMethodBaseFromMethodMessage_m10619 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t1679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1128);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		TypeU5BU5D_t793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(551);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		_stringLiteral2119 = il2cpp_codegen_string_literal_from_index(2119);
		_stringLiteral1668 = il2cpp_codegen_string_literal_from_index(1668);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___msg;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m8279(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_4 = ___msg;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2119, L_5, _stringLiteral1668, /*hidden argument*/NULL);
		RemotingException_t1714 * L_7 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		Type_t * L_8 = V_0;
		Object_t * L_9 = ___msg;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_9);
		Object_t * L_11 = ___msg;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t1679_il2cpp_TypeInfo_var, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		MethodBase_t961 * L_13 = RemotingServices_GetMethodBaseFromName_m10620(NULL /*static, unused*/, L_8, L_10, ((TypeU5BU5D_t793*)Castclass(L_12, TypeU5BU5D_t793_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2241;
extern Il2CppCodeGenString* _stringLiteral2242;
extern "C" MethodBase_t961 * RemotingServices_GetMethodBaseFromName_m10620 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t793* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		_stringLiteral2241 = il2cpp_codegen_string_literal_from_index(2241);
		_stringLiteral2242 = il2cpp_codegen_string_literal_from_index(2242);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t961 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_2 = ___type;
		String_t* L_3 = ___methodName;
		TypeU5BU5D_t793* L_4 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		MethodBase_t961 * L_5 = RemotingServices_FindInterfaceMethod_m10621(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0014:
	{
		V_0 = (MethodBase_t961 *)NULL;
		TypeU5BU5D_t793* L_6 = ___signature;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_7 = ___type;
		String_t* L_8 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		int32_t L_9 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_7);
		MethodInfo_t * L_10 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_7, L_8, L_9);
		V_0 = L_10;
		goto IL_003e;
	}

IL_002e:
	{
		Type_t * L_11 = ___type;
		String_t* L_12 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		int32_t L_13 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t793* L_14 = ___signature;
		NullCheck(L_11);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t958 *, TypeU5BU5D_t793*, ParameterModifierU5BU5D_t959* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_11, L_12, L_13, (Binder_t958 *)NULL, L_14, (ParameterModifierU5BU5D_t959*)(ParameterModifierU5BU5D_t959*)NULL);
		V_0 = L_15;
	}

IL_003e:
	{
		MethodBase_t961 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		MethodBase_t961 * L_17 = V_0;
		return L_17;
	}

IL_0046:
	{
		String_t* L_18 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m400(NULL /*static, unused*/, L_18, _stringLiteral2241, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		MethodInfo_t * L_20 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6;
		return L_20;
	}

IL_005c:
	{
		String_t* L_21 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m400(NULL /*static, unused*/, L_21, _stringLiteral2242, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0072;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		MethodInfo_t * L_23 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7;
		return L_23;
	}

IL_0072:
	{
		TypeU5BU5D_t793* L_24 = ___signature;
		if (L_24)
		{
			goto IL_008b;
		}
	}
	{
		Type_t * L_25 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		int32_t L_26 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t793* L_27 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		NullCheck(L_25);
		ConstructorInfo_t797 * L_28 = (ConstructorInfo_t797 *)VirtFuncInvoker4< ConstructorInfo_t797 *, int32_t, Binder_t958 *, TypeU5BU5D_t793*, ParameterModifierU5BU5D_t959* >::Invoke(69 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_25, L_26, (Binder_t958 *)NULL, L_27, (ParameterModifierU5BU5D_t959*)(ParameterModifierU5BU5D_t959*)NULL);
		return L_28;
	}

IL_008b:
	{
		Type_t * L_29 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		int32_t L_30 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t793* L_31 = ___signature;
		NullCheck(L_29);
		ConstructorInfo_t797 * L_32 = (ConstructorInfo_t797 *)VirtFuncInvoker4< ConstructorInfo_t797 *, int32_t, Binder_t958 *, TypeU5BU5D_t793*, ParameterModifierU5BU5D_t959* >::Invoke(69 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_29, L_30, (Binder_t958 *)NULL, L_31, (ParameterModifierU5BU5D_t959*)(ParameterModifierU5BU5D_t959*)NULL);
		return L_32;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" MethodBase_t961 * RemotingServices_FindInterfaceMethod_m10621 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t793* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t961 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t793* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = (MethodBase_t961 *)NULL;
		TypeU5BU5D_t793* L_0 = ___signature;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = ___type;
		String_t* L_2 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		int32_t L_3 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_002a;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		String_t* L_6 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		int32_t L_7 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t793* L_8 = ___signature;
		NullCheck(L_5);
		MethodInfo_t * L_9 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t958 *, TypeU5BU5D_t793*, ParameterModifierU5BU5D_t959* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_5, L_6, L_7, (Binder_t958 *)NULL, L_8, (ParameterModifierU5BU5D_t959*)(ParameterModifierU5BU5D_t959*)NULL);
		V_0 = L_9;
	}

IL_002a:
	{
		MethodBase_t961 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0032;
		}
	}
	{
		MethodBase_t961 * L_11 = V_0;
		return L_11;
	}

IL_0032:
	{
		Type_t * L_12 = ___type;
		NullCheck(L_12);
		TypeU5BU5D_t793* L_13 = (TypeU5BU5D_t793*)VirtFuncInvoker0< TypeU5BU5D_t793* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_0059;
	}

IL_0040:
	{
		TypeU5BU5D_t793* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_14, L_16));
		Type_t * L_17 = V_1;
		String_t* L_18 = ___methodName;
		TypeU5BU5D_t793* L_19 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		MethodBase_t961 * L_20 = RemotingServices_FindInterfaceMethod_m10621(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		MethodBase_t961 * L_21 = V_0;
		if (!L_21)
		{
			goto IL_0055;
		}
	}
	{
		MethodBase_t961 * L_22 = V_0;
		return L_22;
	}

IL_0055:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0059:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t793* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		return (MethodBase_t961 *)NULL;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern TypeInfo* ArrayList_t64_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxy_m10622 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t1698 * ___entry, ObjectU5BU5D_t38* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t64_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(48);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t64 * V_0 = {0};
	{
		ActivatedClientTypeEntry_t1698 * L_0 = ___entry;
		NullCheck(L_0);
		IContextAttributeU5BU5D_t1985* L_1 = ActivatedClientTypeEntry_get_ContextAttributes_m10524(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t38* L_2 = ___activationAttributes;
		if (!L_2)
		{
			goto IL_0053;
		}
	}

IL_0011:
	{
		ArrayList_t64 * L_3 = (ArrayList_t64 *)il2cpp_codegen_object_new (ArrayList_t64_il2cpp_TypeInfo_var);
		ArrayList__ctor_m425(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ActivatedClientTypeEntry_t1698 * L_4 = ___entry;
		NullCheck(L_4);
		IContextAttributeU5BU5D_t1985* L_5 = ActivatedClientTypeEntry_get_ContextAttributes_m10524(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ArrayList_t64 * L_6 = V_0;
		ActivatedClientTypeEntry_t1698 * L_7 = ___entry;
		NullCheck(L_7);
		IContextAttributeU5BU5D_t1985* L_8 = ActivatedClientTypeEntry_get_ContextAttributes_m10524(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(43 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_6, (Object_t *)(Object_t *)L_8);
	}

IL_002e:
	{
		ObjectU5BU5D_t38* L_9 = ___activationAttributes;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		ArrayList_t64 * L_10 = V_0;
		ObjectU5BU5D_t38* L_11 = ___activationAttributes;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(43 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_10, (Object_t *)(Object_t *)L_11);
	}

IL_003b:
	{
		ActivatedClientTypeEntry_t1698 * L_12 = ___entry;
		NullCheck(L_12);
		Type_t * L_13 = ActivatedClientTypeEntry_get_ObjectType_m10525(L_12, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t1698 * L_14 = ___entry;
		NullCheck(L_14);
		String_t* L_15 = ActivatedClientTypeEntry_get_ApplicationUrl_m10523(L_14, /*hidden argument*/NULL);
		ArrayList_t64 * L_16 = V_0;
		NullCheck(L_16);
		ObjectU5BU5D_t38* L_17 = (ObjectU5BU5D_t38*)VirtFuncInvoker0< ObjectU5BU5D_t38* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_18 = RemotingServices_CreateClientProxy_m10623(NULL /*static, unused*/, L_13, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0053:
	{
		ActivatedClientTypeEntry_t1698 * L_19 = ___entry;
		NullCheck(L_19);
		Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m10525(L_19, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t1698 * L_21 = ___entry;
		NullCheck(L_21);
		String_t* L_22 = ActivatedClientTypeEntry_get_ApplicationUrl_m10523(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_23 = RemotingServices_CreateClientProxy_m10623(NULL /*static, unused*/, L_20, L_22, (ObjectU5BU5D_t38*)(ObjectU5BU5D_t38*)NULL, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1696_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral141;
extern Il2CppCodeGenString* _stringLiteral2240;
extern "C" Object_t * RemotingServices_CreateClientProxy_m10623 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t38* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		RemotingProxy_t1696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1139);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		_stringLiteral2240 = il2cpp_codegen_string_literal_from_index(2240);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	RemotingProxy_t1696 * V_2 = {0};
	{
		String_t* L_0 = ___url;
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m5478(L_1, _stringLiteral141, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m421(NULL /*static, unused*/, L_3, _stringLiteral141, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001e:
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m421(NULL /*static, unused*/, L_5, _stringLiteral2240, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		RemotingServices_GetClientChannelSinkChain_m10628(NULL /*static, unused*/, L_7, NULL, (&V_1), /*hidden argument*/NULL);
		Type_t * L_8 = ___objectType;
		String_t* L_9 = V_0;
		ObjectU5BU5D_t38* L_10 = ___activationAttributes;
		RemotingProxy_t1696 * L_11 = (RemotingProxy_t1696 *)il2cpp_codegen_object_new (RemotingProxy_t1696_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m10516(L_11, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		RemotingProxy_t1696 * L_12 = V_2;
		NullCheck(L_12);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_12);
		return L_13;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern const Il2CppType* ProxyAttribute_t1691_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t1691_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1696_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m10624 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t38* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProxyAttribute_t1691_0_0_0_var = il2cpp_codegen_type_from_index(1169);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ProxyAttribute_t1691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1169);
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		RemotingProxy_t1696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1139);
		s_Il2CppMethodIntialized = true;
	}
	ProxyAttribute_t1691 * V_0 = {0};
	RemotingProxy_t1696 * V_1 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_0);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t1691_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t706 * L_4 = Attribute_GetCustomAttribute_m7535(NULL /*static, unused*/, L_2, L_3, 1, /*hidden argument*/NULL);
		V_0 = ((ProxyAttribute_t1691 *)Castclass(L_4, ProxyAttribute_t1691_il2cpp_TypeInfo_var));
		ProxyAttribute_t1691 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ProxyAttribute_t1691 * L_6 = V_0;
		Type_t * L_7 = ___type;
		NullCheck(L_6);
		MarshalByRefObject_t1213 * L_8 = (MarshalByRefObject_t1213 *)VirtFuncInvoker1< MarshalByRefObject_t1213 *, Type_t * >::Invoke(6 /* System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type) */, L_6, L_7);
		return L_8;
	}

IL_0030:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		String_t* L_10 = ((ChannelServices_t1650_StaticFields*)ChannelServices_t1650_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		ObjectU5BU5D_t38* L_11 = ___activationAttributes;
		RemotingProxy_t1696 * L_12 = (RemotingProxy_t1696 *)il2cpp_codegen_object_new (RemotingProxy_t1696_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m10516(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		RemotingProxy_t1696 * L_13 = V_1;
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_13);
		return L_14;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* Identity_t1694_il2cpp_TypeInfo_var;
extern "C" Identity_t1694 * RemotingServices_GetIdentityForUri_m10625 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		Identity_t1694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1171);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Hashtable_t24 * V_1 = {0};
	Identity_t1694 * V_2 = {0};
	Identity_t1694 * V_3 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		String_t* L_1 = RemotingServices_GetNormalizedUri_m10635(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t24 * L_2 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_1 = L_2;
		Hashtable_t24 * L_3 = V_1;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_4 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_5 = V_0;
			NullCheck(L_4);
			Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
			V_2 = ((Identity_t1694 *)Castclass(L_6, Identity_t1694_il2cpp_TypeInfo_var));
			Identity_t1694 * L_7 = V_2;
			if (L_7)
			{
				goto IL_0048;
			}
		}

IL_002a:
		{
			String_t* L_8 = ___uri;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			String_t* L_9 = RemotingServices_RemoveAppNameFromUri_m10626(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0048;
			}
		}

IL_0037:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_11 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_12 = V_0;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, L_12);
			V_2 = ((Identity_t1694 *)Castclass(L_13, Identity_t1694_il2cpp_TypeInfo_var));
		}

IL_0048:
		{
			Identity_t1694 * L_14 = V_2;
			V_3 = L_14;
			IL2CPP_LEAVE(0x5B, FINALLY_0054);
		}

IL_004f:
		{
			; // IL_004f: leave IL_005b
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_15 = V_1;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_005b:
	{
		Identity_t1694 * L_16 = V_3;
		return L_16;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern TypeInfo* RemotingConfiguration_t1709_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral141;
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m10626 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t1709_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1094);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t1709_il2cpp_TypeInfo_var);
		String_t* L_0 = RemotingConfiguration_get_ApplicationName_m10561(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000e:
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral141, L_2, _stringLiteral141, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___uri;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_StartsWith_m2087(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_7 = ___uri;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m422(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m2097(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0038:
	{
		return (String_t*)NULL;
	}
}
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern TypeInfo* IChannelInfo_t1706_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t1704_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t1696_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t1653_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t1213_il2cpp_TypeInfo_var;
extern "C" ClientIdentity_t1704 * RemotingServices_GetOrCreateClientIdentity_m10627 (Object_t * __this /* static, unused */, ObjRef_t1702 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelInfo_t1706_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1155);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		ClientIdentity_t1704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1141);
		RemotingProxy_t1696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1139);
		CrossAppDomainSink_t1653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1110);
		MarshalByRefObject_t1213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	Hashtable_t24 * V_3 = {0};
	String_t* V_4 = {0};
	ClientIdentity_t1704 * V_5 = {0};
	RemotingProxy_t1696 * V_6 = {0};
	CrossAppDomainSink_t1653 * V_7 = {0};
	ClientIdentity_t1704 * V_8 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ObjectU5BU5D_t38* G_B3_0 = {0};
	{
		ObjRef_t1702 * L_0 = ___objRef;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ObjRef_t1702 * L_2 = ___objRef;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_2);
		NullCheck(L_3);
		ObjectU5BU5D_t38* L_4 = (ObjectU5BU5D_t38*)InterfaceFuncInvoker0< ObjectU5BU5D_t38* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.IChannelInfo::get_ChannelData() */, IChannelInfo_t1706_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = ((ObjectU5BU5D_t38*)(NULL));
	}

IL_001c:
	{
		V_0 = (Object_t *)G_B3_0;
		ObjRef_t1702 * L_5 = ___objRef;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_5);
		Object_t * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_8 = RemotingServices_GetClientChannelSinkChain_m10628(NULL /*static, unused*/, L_6, L_7, (&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0039;
		}
	}
	{
		ObjRef_t1702 * L_10 = ___objRef;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_10);
		V_1 = L_11;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_12 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_3 = L_12;
		Hashtable_t24 * L_13 = V_3;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		{
			Object_t ** L_14 = ___clientProxy;
			*((Object_t **)(L_14)) = (Object_t *)NULL;
			ObjRef_t1702 * L_15 = ___objRef;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_15);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			String_t* L_17 = RemotingServices_GetNormalizedUri_m10635(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			Hashtable_t24 * L_18 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_19 = V_4;
			NullCheck(L_18);
			Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, L_19);
			V_5 = ((ClientIdentity_t1704 *)IsInst(L_20, ClientIdentity_t1704_il2cpp_TypeInfo_var));
			ClientIdentity_t1704 * L_21 = V_5;
			if (!L_21)
			{
				goto IL_008f;
			}
		}

IL_006f:
		{
			Object_t ** L_22 = ___clientProxy;
			ClientIdentity_t1704 * L_23 = V_5;
			NullCheck(L_23);
			MarshalByRefObject_t1213 * L_24 = ClientIdentity_get_ClientProxy_m10539(L_23, /*hidden argument*/NULL);
			*((Object_t **)(L_22)) = (Object_t *)L_24;
			Object_t ** L_25 = ___clientProxy;
			if (!(*((Object_t **)L_25)))
			{
				goto IL_0088;
			}
		}

IL_007f:
		{
			ClientIdentity_t1704 * L_26 = V_5;
			V_8 = L_26;
			IL2CPP_LEAVE(0x107, FINALLY_0100);
		}

IL_0088:
		{
			ClientIdentity_t1704 * L_27 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m10634(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		}

IL_008f:
		{
			String_t* L_28 = V_1;
			ObjRef_t1702 * L_29 = ___objRef;
			ClientIdentity_t1704 * L_30 = (ClientIdentity_t1704 *)il2cpp_codegen_object_new (ClientIdentity_t1704_il2cpp_TypeInfo_var);
			ClientIdentity__ctor_m10538(L_30, L_28, L_29, /*hidden argument*/NULL);
			V_5 = L_30;
			ClientIdentity_t1704 * L_31 = V_5;
			Object_t * L_32 = V_2;
			NullCheck(L_31);
			Identity_set_ChannelSink_m10534(L_31, L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_33 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_34 = V_4;
			ClientIdentity_t1704 * L_35 = V_5;
			NullCheck(L_33);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_33, L_34, L_35);
			Type_t * L_36 = ___proxyType;
			if (!L_36)
			{
				goto IL_00f2;
			}
		}

IL_00b4:
		{
			Type_t * L_37 = ___proxyType;
			ClientIdentity_t1704 * L_38 = V_5;
			RemotingProxy_t1696 * L_39 = (RemotingProxy_t1696 *)il2cpp_codegen_object_new (RemotingProxy_t1696_il2cpp_TypeInfo_var);
			RemotingProxy__ctor_m10515(L_39, L_37, L_38, /*hidden argument*/NULL);
			V_6 = L_39;
			Object_t * L_40 = V_2;
			V_7 = ((CrossAppDomainSink_t1653 *)IsInst(L_40, CrossAppDomainSink_t1653_il2cpp_TypeInfo_var));
			CrossAppDomainSink_t1653 * L_41 = V_7;
			if (!L_41)
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			RemotingProxy_t1696 * L_42 = V_6;
			CrossAppDomainSink_t1653 * L_43 = V_7;
			NullCheck(L_43);
			int32_t L_44 = CrossAppDomainSink_get_TargetDomainId_m10318(L_43, /*hidden argument*/NULL);
			NullCheck(L_42);
			RealProxy_SetTargetDomain_m10514(L_42, L_44, /*hidden argument*/NULL);
		}

IL_00db:
		{
			Object_t ** L_45 = ___clientProxy;
			RemotingProxy_t1696 * L_46 = V_6;
			NullCheck(L_46);
			Object_t * L_47 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_46);
			*((Object_t **)(L_45)) = (Object_t *)L_47;
			ClientIdentity_t1704 * L_48 = V_5;
			Object_t ** L_49 = ___clientProxy;
			NullCheck(L_48);
			ClientIdentity_set_ClientProxy_m10540(L_48, ((MarshalByRefObject_t1213 *)Castclass((*((Object_t **)L_49)), MarshalByRefObject_t1213_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_00f2:
		{
			ClientIdentity_t1704 * L_50 = V_5;
			V_8 = L_50;
			IL2CPP_LEAVE(0x107, FINALLY_0100);
		}

IL_00fb:
		{
			; // IL_00fb: leave IL_0107
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0100;
	}

FINALLY_0100:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_51 = V_3;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(256)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(256)
	{
		IL2CPP_JUMP_TBL(0x107, IL_0107)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0107:
	{
		ClientIdentity_t1704 * L_52 = V_8;
		return L_52;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
extern TypeInfo* ChannelServices_t1650_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2244;
extern Il2CppCodeGenString* _stringLiteral2245;
extern "C" Object_t * RemotingServices_GetClientChannelSinkChain_m10628 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___channelData, String_t** ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t1650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1098);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2244 = il2cpp_codegen_string_literal_from_index(2244);
		_stringLiteral2245 = il2cpp_codegen_string_literal_from_index(2245);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___url;
		Object_t * L_1 = ___channelData;
		String_t** L_2 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t1650_il2cpp_TypeInfo_var);
		Object_t * L_3 = ChannelServices_CreateClientChannelSinkChain_m10297(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_5 = ___url;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m3768(NULL /*static, unused*/, _stringLiteral2244, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		RemotingException_t1714 * L_9 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0028:
	{
		String_t* L_10 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m3768(NULL /*static, unused*/, _stringLiteral2245, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		String_t* L_12 = V_2;
		RemotingException_t1714 * L_13 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
		RemotingException__ctor_m10609(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_003b:
	{
		Object_t * L_14 = V_0;
		return L_14;
	}
}
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern TypeInfo* Context_t1655_il2cpp_TypeInfo_var;
extern TypeInfo* SingleCallIdentity_t1719_il2cpp_TypeInfo_var;
extern TypeInfo* SingletonIdentity_t1718_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" ServerIdentity_t1370 * RemotingServices_CreateWellKnownServerIdentity_m10629 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t1655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1111);
		SingleCallIdentity_t1719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1172);
		SingletonIdentity_t1718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1173);
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t1370 * V_0 = {0};
	{
		int32_t L_0 = ___mode;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1655_il2cpp_TypeInfo_var);
		Context_t1655 * L_2 = Context_get_DefaultContext_m10324(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_3 = ___objectType;
		SingleCallIdentity_t1719 * L_4 = (SingleCallIdentity_t1719 *)il2cpp_codegen_object_new (SingleCallIdentity_t1719_il2cpp_TypeInfo_var);
		SingleCallIdentity__ctor_m10641(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0026;
	}

IL_0019:
	{
		String_t* L_5 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t1655_il2cpp_TypeInfo_var);
		Context_t1655 * L_6 = Context_get_DefaultContext_m10324(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___objectType;
		SingletonIdentity_t1718 * L_8 = (SingletonIdentity_t1718 *)il2cpp_codegen_object_new (SingletonIdentity_t1718_il2cpp_TypeInfo_var);
		SingletonIdentity__ctor_m10640(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0026:
	{
		ServerIdentity_t1370 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m10630(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		ServerIdentity_t1370 * L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t1714_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2246;
extern Il2CppCodeGenString* _stringLiteral116;
extern "C" void RemotingServices_RegisterServerIdentity_m10630 (Object_t * __this /* static, unused */, ServerIdentity_t1370 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		RemotingException_t1714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1091);
		_stringLiteral2246 = il2cpp_codegen_string_literal_from_index(2246);
		_stringLiteral116 = il2cpp_codegen_string_literal_from_index(116);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t24 * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t24 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_2 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t1370 * L_3 = ___identity;
			NullCheck(L_3);
			String_t* L_4 = Identity_get_ObjectUri_m10535(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (!L_5)
			{
				goto IL_003c;
			}
		}

IL_0021:
		{
			ServerIdentity_t1370 * L_6 = ___identity;
			NullCheck(L_6);
			String_t* L_7 = Identity_get_ObjectUri_m10535(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_8 = String_Concat_m2098(NULL /*static, unused*/, _stringLiteral2246, L_7, _stringLiteral116, /*hidden argument*/NULL);
			RemotingException_t1714 * L_9 = (RemotingException_t1714 *)il2cpp_codegen_object_new (RemotingException_t1714_il2cpp_TypeInfo_var);
			RemotingException__ctor_m10609(L_9, L_8, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_9);
		}

IL_003c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_10 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t1370 * L_11 = ___identity;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m10535(L_11, /*hidden argument*/NULL);
			ServerIdentity_t1370 * L_13 = ___identity;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, L_12, L_13);
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_14 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0059:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* ClientActivatedIdentity_t1717_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m10631 (Object_t * __this /* static, unused */, ObjRef_t1702 * ___objref, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		ClientActivatedIdentity_t1717_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1142);
		s_Il2CppMethodIntialized = true;
	}
	ClientActivatedIdentity_t1717 * V_0 = {0};
	{
		ObjRef_t1702 * L_0 = ___objref;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Identity_t1694 * L_2 = RemotingServices_GetIdentityForUri_m10625(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((ClientActivatedIdentity_t1717 *)IsInst(L_2, ClientActivatedIdentity_t1717_il2cpp_TypeInfo_var));
		ClientActivatedIdentity_t1717 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		ClientActivatedIdentity_t1717 * L_4 = V_0;
		NullCheck(L_4);
		MarshalByRefObject_t1213 * L_5 = ClientActivatedIdentity_GetServerObject_m10639(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		ObjRef_t1702 * L_6 = ___objref;
		Type_t * L_7 = ___classToProxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Object_t * L_8 = RemotingServices_GetRemoteObject_m10632(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetRemoteObject_m10632 (Object_t * __this /* static, unused */, ObjRef_t1702 * ___objRef, Type_t * ___proxyType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		ObjRef_t1702 * L_0 = ___objRef;
		Type_t * L_1 = ___proxyType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		RemotingServices_GetOrCreateClientIdentity_m10627(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		Object_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern TypeInfo* CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_RegisterInternalChannels_m10633 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1108);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t1652_il2cpp_TypeInfo_var);
		CrossAppDomainChannel_RegisterCrossAppDomainChannel_m10309(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern TypeInfo* RemotingServices_t1716_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t1704_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_DisposeIdentity_m10634 (Object_t * __this /* static, unused */, Identity_t1694 * ___ident, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t1716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1093);
		ClientIdentity_t1704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1141);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t24 * V_0 = {0};
	ClientIdentity_t1704 * V_1 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t24 * L_1 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			Identity_t1694 * L_2 = ___ident;
			NullCheck(L_2);
			bool L_3 = Identity_get_Disposed_m10536(L_2, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_0055;
			}
		}

IL_0017:
		{
			Identity_t1694 * L_4 = ___ident;
			V_1 = ((ClientIdentity_t1704 *)IsInst(L_4, ClientIdentity_t1704_il2cpp_TypeInfo_var));
			ClientIdentity_t1704 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_003e;
			}
		}

IL_0024:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_6 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ClientIdentity_t1704 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = ClientIdentity_get_TargetUri_m10542(L_7, /*hidden argument*/NULL);
			String_t* L_9 = RemotingServices_GetNormalizedUri_m10635(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_6, L_9);
			goto IL_004e;
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t1716_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_10 = ((RemotingServices_t1716_StaticFields*)RemotingServices_t1716_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			Identity_t1694 * L_11 = ___ident;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m10535(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			VirtActionInvoker1< Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_10, L_12);
		}

IL_004e:
		{
			Identity_t1694 * L_13 = ___ident;
			NullCheck(L_13);
			Identity_set_Disposed_m10537(L_13, 1, /*hidden argument*/NULL);
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x61, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Hashtable_t24 * L_14 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0061:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern Il2CppCodeGenString* _stringLiteral141;
extern "C" String_t* RemotingServices_GetNormalizedUri_m10635 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___uri;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m2087(L_0, _stringLiteral141, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2 = ___uri;
		NullCheck(L_2);
		String_t* L_3 = String_Substring_m2097(L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		String_t* L_4 = ___uri;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfo.h"
// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m10636 (ServerIdentity_t1370 * __this, String_t* ___objectUri, Context_t1655 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m10532(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___objectType;
		__this->____objectType_5 = L_1;
		Context_t1655 * L_2 = ___context;
		__this->____context_7 = L_2;
		return;
	}
}
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m10637 (ServerIdentity_t1370 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____objectType_5);
		return L_0;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern TypeInfo* ObjRef_t1702_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInfo_t1722_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyTerminatorSink_t1673_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyInfo_t1701_il2cpp_TypeInfo_var;
extern "C" ObjRef_t1702 * ServerIdentity_CreateObjRef_m10638 (ServerIdentity_t1370 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t1702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1132);
		TypeInfo_t1722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1174);
		EnvoyTerminatorSink_t1673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1121);
		EnvoyInfo_t1701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1175);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t1702 * L_0 = (((Identity_t1694 *)__this)->____objRef_3);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ObjRef_t1702 * L_1 = (((Identity_t1694 *)__this)->____objRef_3);
		NullCheck(L_1);
		ObjRef_UpdateChannelInfo_m10558(L_1, /*hidden argument*/NULL);
		ObjRef_t1702 * L_2 = (((Identity_t1694 *)__this)->____objRef_3);
		return L_2;
	}

IL_001d:
	{
		Type_t * L_3 = ___requestedType;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_4 = (__this->____objectType_5);
		___requestedType = L_4;
	}

IL_002b:
	{
		ObjRef_t1702 * L_5 = (ObjRef_t1702 *)il2cpp_codegen_object_new (ObjRef_t1702_il2cpp_TypeInfo_var);
		ObjRef__ctor_m10545(L_5, /*hidden argument*/NULL);
		((Identity_t1694 *)__this)->____objRef_3 = L_5;
		ObjRef_t1702 * L_6 = (((Identity_t1694 *)__this)->____objRef_3);
		Type_t * L_7 = ___requestedType;
		TypeInfo_t1722 * L_8 = (TypeInfo_t1722 *)il2cpp_codegen_object_new (TypeInfo_t1722_il2cpp_TypeInfo_var);
		TypeInfo__ctor_m10664(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo) */, L_6, L_8);
		ObjRef_t1702 * L_9 = (((Identity_t1694 *)__this)->____objRef_3);
		String_t* L_10 = (((Identity_t1694 *)__this)->____objectUri_0);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String) */, L_9, L_10);
		Object_t * L_11 = (((Identity_t1694 *)__this)->____envoySink_2);
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		Object_t * L_12 = (((Identity_t1694 *)__this)->____envoySink_2);
		if (((EnvoyTerminatorSink_t1673 *)IsInst(L_12, EnvoyTerminatorSink_t1673_il2cpp_TypeInfo_var)))
		{
			goto IL_0089;
		}
	}
	{
		ObjRef_t1702 * L_13 = (((Identity_t1694 *)__this)->____objRef_3);
		Object_t * L_14 = (((Identity_t1694 *)__this)->____envoySink_2);
		EnvoyInfo_t1701 * L_15 = (EnvoyInfo_t1701 *)il2cpp_codegen_object_new (EnvoyInfo_t1701_il2cpp_TypeInfo_var);
		EnvoyInfo__ctor_m10530(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(8 /* System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo) */, L_13, L_15);
	}

IL_0089:
	{
		ObjRef_t1702 * L_16 = (((Identity_t1694 *)__this)->____objRef_3);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t1213 * ClientActivatedIdentity_GetServerObject_m10639 (ClientActivatedIdentity_t1717 * __this, const MethodInfo* method)
{
	{
		MarshalByRefObject_t1213 * L_0 = (((ServerIdentity_t1370 *)__this)->____serverObject_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingletonIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingletonIdentity__ctor_m10640 (SingletonIdentity_t1718 * __this, String_t* ___objectUri, Context_t1655 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t1655 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m10636(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingleCallIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingleCallIdentity__ctor_m10641 (SingleCallIdentity_t1719 * __this, String_t* ___objectUri, Context_t1655 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t1655 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m10636(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.SoapServices/TypeInfo
#include "mscorlib_System_Runtime_Remoting_SoapServices_TypeInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.SoapServices/TypeInfo
#include "mscorlib_System_Runtime_Remoting_SoapServices_TypeInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.SoapServices/TypeInfo::.ctor()
extern "C" void TypeInfo__ctor_m10642 (TypeInfo_t1720 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.SoapServices
#include "mscorlib_System_Runtime_Remoting_SoapServices.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SoapServices::.cctor()
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern "C" void SoapServices__cctor_m10643 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t24 * L_0 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_0, /*hidden argument*/NULL);
		((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____xmlTypes_0 = L_0;
		Hashtable_t24 * L_1 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_1, /*hidden argument*/NULL);
		((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____xmlElements_1 = L_1;
		Hashtable_t24 * L_2 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_2, /*hidden argument*/NULL);
		((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____soapActions_2 = L_2;
		Hashtable_t24 * L_3 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_3, /*hidden argument*/NULL);
		((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____soapActionsMethods_3 = L_3;
		Hashtable_t24 * L_4 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
		Hashtable__ctor_m6515(L_4, /*hidden argument*/NULL);
		((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____typeInfos_4 = L_4;
		return;
	}
}
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithAssembly()
extern Il2CppCodeGenString* _stringLiteral2247;
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithAssembly_m10644 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2247 = il2cpp_codegen_string_literal_from_index(2247);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral2247;
	}
}
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithNs()
extern Il2CppCodeGenString* _stringLiteral2248;
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithNs_m10645 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2248 = il2cpp_codegen_string_literal_from_index(2248);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral2248;
	}
}
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithNsAndAssembly()
extern Il2CppCodeGenString* _stringLiteral2249;
extern "C" String_t* SoapServices_get_XmlNsForClrTypeWithNsAndAssembly_m10646 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2249 = il2cpp_codegen_string_literal_from_index(2249);
		s_Il2CppMethodIntialized = true;
	}
	{
		return _stringLiteral2249;
	}
}
// System.String System.Runtime.Remoting.SoapServices::CodeXmlNamespaceForClrTypeNamespace(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral141;
extern "C" String_t* SoapServices_CodeXmlNamespaceForClrTypeNamespace_m10647 (Object_t * __this /* static, unused */, String_t* ___typeNamespace, String_t* ___assemblyName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		_stringLiteral141 = il2cpp_codegen_string_literal_from_index(141);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m400(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_3 = SoapServices_get_XmlNsForClrTypeWithNs_m10645(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = ___typeNamespace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m421(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001c:
	{
		String_t* L_6 = ___typeNamespace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_8 = String_op_Equality_m400(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_9 = SoapServices_get_XmlNsForClrTypeWithAssembly_m10644(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m421(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		String_t* L_12 = SoapServices_EncodeNs_m10658(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_13 = SoapServices_get_XmlNsForClrTypeWithNsAndAssembly_m10646(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = ___typeNamespace;
		String_t* L_15 = ___assemblyName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m5477(NULL /*static, unused*/, L_13, L_14, _stringLiteral141, L_15, /*hidden argument*/NULL);
		String_t* L_17 = SoapServices_EncodeNs_m10658(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.String System.Runtime.Remoting.SoapServices::GetNameKey(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral130;
extern "C" String_t* SoapServices_GetNameKey_m10648 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___namspace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___namspace;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_1 = ___name;
		return L_1;
	}

IL_0008:
	{
		String_t* L_2 = ___name;
		String_t* L_3 = ___namspace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2098(NULL /*static, unused*/, L_2, _stringLiteral130, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.SoapServices::GetAssemblyName(System.Reflection.MethodBase)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* SoapServices_GetAssemblyName_m10649 (Object_t * __this /* static, unused */, MethodBase_t961 * ___mb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodBase_t961 * L_0 = ___mb;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		NullCheck(L_1);
		Assembly_t1333 * L_2 = (Assembly_t1333 *)VirtFuncInvoker0< Assembly_t1333 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m338(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		Assembly_t1333 * L_4 = (Assembly_t1333 *)VirtFuncInvoker0< Assembly_t1333 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		if ((!(((Object_t*)(Assembly_t1333 *)L_2) == ((Object_t*)(Assembly_t1333 *)L_4))))
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_5;
	}

IL_0025:
	{
		MethodBase_t961 * L_6 = ___mb;
		NullCheck(L_6);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_6);
		NullCheck(L_7);
		Assembly_t1333 * L_8 = (Assembly_t1333 *)VirtFuncInvoker0< Assembly_t1333 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_7);
		NullCheck(L_8);
		AssemblyName_t1577 * L_9 = (AssemblyName_t1577 *)VirtFuncInvoker0< AssemblyName_t1577 * >::Invoke(16 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_8);
		NullCheck(L_9);
		String_t* L_10 = AssemblyName_get_Name_m9981(L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean System.Runtime.Remoting.SoapServices::GetXmlElementForInteropType(System.Type,System.String&,System.String&)
extern TypeInfo* InternalRemotingServices_t1705_il2cpp_TypeInfo_var;
extern TypeInfo* SoapTypeAttribute_t1690_il2cpp_TypeInfo_var;
extern "C" bool SoapServices_GetXmlElementForInteropType_m10650 (Object_t * __this /* static, unused */, Type_t * ___type, String_t** ___xmlElement, String_t** ___xmlNamespace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalRemotingServices_t1705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1148);
		SoapTypeAttribute_t1690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1151);
		s_Il2CppMethodIntialized = true;
	}
	SoapTypeAttribute_t1690 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1705_il2cpp_TypeInfo_var);
		SoapAttribute_t1686 * L_1 = InternalRemotingServices_GetCachedSoapAttribute_m10544(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((SoapTypeAttribute_t1690 *)Castclass(L_1, SoapTypeAttribute_t1690_il2cpp_TypeInfo_var));
		SoapTypeAttribute_t1690 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = SoapTypeAttribute_get_IsInteropXmlElement_m10500(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		String_t** L_4 = ___xmlElement;
		*((Object_t **)(L_4)) = (Object_t *)NULL;
		String_t** L_5 = ___xmlNamespace;
		*((Object_t **)(L_5)) = (Object_t *)NULL;
		return 0;
	}

IL_001f:
	{
		String_t** L_6 = ___xmlElement;
		SoapTypeAttribute_t1690 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = SoapTypeAttribute_get_XmlElementName_m10496(L_7, /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_8;
		String_t** L_9 = ___xmlNamespace;
		SoapTypeAttribute_t1690 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = SoapTypeAttribute_get_XmlNamespace_m10497(L_10, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_11;
		return 1;
	}
}
// System.String System.Runtime.Remoting.SoapServices::GetXmlNamespaceForMethodCall(System.Reflection.MethodBase)
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern "C" String_t* SoapServices_GetXmlNamespaceForMethodCall_m10651 (Object_t * __this /* static, unused */, MethodBase_t961 * ___mb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodBase_t961 * L_0 = ___mb;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		MethodBase_t961 * L_3 = ___mb;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_4 = SoapServices_GetAssemblyName_m10649(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_5 = SoapServices_CodeXmlNamespaceForClrTypeNamespace_m10647(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.SoapServices::GetXmlNamespaceForMethodResponse(System.Reflection.MethodBase)
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern "C" String_t* SoapServices_GetXmlNamespaceForMethodResponse_m10652 (Object_t * __this /* static, unused */, MethodBase_t961 * ___mb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodBase_t961 * L_0 = ___mb;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		MethodBase_t961 * L_3 = ___mb;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		String_t* L_4 = SoapServices_GetAssemblyName_m10649(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_5 = SoapServices_CodeXmlNamespaceForClrTypeNamespace_m10647(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Runtime.Remoting.SoapServices::GetXmlTypeForInteropType(System.Type,System.String&,System.String&)
extern TypeInfo* InternalRemotingServices_t1705_il2cpp_TypeInfo_var;
extern TypeInfo* SoapTypeAttribute_t1690_il2cpp_TypeInfo_var;
extern "C" bool SoapServices_GetXmlTypeForInteropType_m10653 (Object_t * __this /* static, unused */, Type_t * ___type, String_t** ___xmlType, String_t** ___xmlTypeNamespace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalRemotingServices_t1705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1148);
		SoapTypeAttribute_t1690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1151);
		s_Il2CppMethodIntialized = true;
	}
	SoapTypeAttribute_t1690 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1705_il2cpp_TypeInfo_var);
		SoapAttribute_t1686 * L_1 = InternalRemotingServices_GetCachedSoapAttribute_m10544(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((SoapTypeAttribute_t1690 *)Castclass(L_1, SoapTypeAttribute_t1690_il2cpp_TypeInfo_var));
		SoapTypeAttribute_t1690 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = SoapTypeAttribute_get_IsInteropXmlType_m10501(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		String_t** L_4 = ___xmlType;
		*((Object_t **)(L_4)) = (Object_t *)NULL;
		String_t** L_5 = ___xmlTypeNamespace;
		*((Object_t **)(L_5)) = (Object_t *)NULL;
		return 0;
	}

IL_001f:
	{
		String_t** L_6 = ___xmlType;
		SoapTypeAttribute_t1690 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = SoapTypeAttribute_get_XmlTypeName_m10498(L_7, /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_8;
		String_t** L_9 = ___xmlTypeNamespace;
		SoapTypeAttribute_t1690 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = SoapTypeAttribute_get_XmlTypeNamespace_m10499(L_10, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_11;
		return 1;
	}
}
// System.Void System.Runtime.Remoting.SoapServices::PreLoad(System.Reflection.Assembly)
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern "C" void SoapServices_PreLoad_m10654 (Object_t * __this /* static, unused */, Assembly_t1333 * ___assembly, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t793* V_1 = {0};
	int32_t V_2 = 0;
	{
		Assembly_t1333 * L_0 = ___assembly;
		NullCheck(L_0);
		TypeU5BU5D_t793* L_1 = (TypeU5BU5D_t793*)VirtFuncInvoker0< TypeU5BU5D_t793* >::Invoke(11 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		V_1 = L_1;
		V_2 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		TypeU5BU5D_t793* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		SoapServices_PreLoad_m10655(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t793* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.SoapServices::PreLoad(System.Type)
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInfo_t1720_il2cpp_TypeInfo_var;
extern TypeInfo* InternalRemotingServices_t1705_il2cpp_TypeInfo_var;
extern TypeInfo* SoapFieldAttribute_t1687_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t24_il2cpp_TypeInfo_var;
extern "C" void SoapServices_PreLoad_m10655 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		TypeInfo_t1720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1176);
		InternalRemotingServices_t1705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1148);
		SoapFieldAttribute_t1687_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1152);
		Hashtable_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	TypeInfo_t1720 * V_2 = {0};
	Object_t * V_3 = {0};
	FieldInfoU5BU5D_t955* V_4 = {0};
	FieldInfo_t * V_5 = {0};
	FieldInfoU5BU5D_t955* V_6 = {0};
	int32_t V_7 = 0;
	SoapFieldAttribute_t1687 * V_8 = {0};
	String_t* V_9 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____typeInfos_4;
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_2 = ((TypeInfo_t1720 *)IsInst(L_2, TypeInfo_t1720_il2cpp_TypeInfo_var));
		TypeInfo_t1720 * L_3 = V_2;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		Type_t * L_4 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		bool L_5 = SoapServices_GetXmlTypeForInteropType_m10653(NULL /*static, unused*/, L_4, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = V_1;
		Type_t * L_8 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlType_m10657(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_002f:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		bool L_10 = SoapServices_GetXmlElementForInteropType_m10650(NULL /*static, unused*/, L_9, (&V_0), (&V_1), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_11 = V_0;
		String_t* L_12 = V_1;
		Type_t * L_13 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		SoapServices_RegisterInteropXmlElement_m10656(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_14 = ((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____typeInfos_4;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_14);
		V_3 = L_15;
		Object_t * L_16 = V_3;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			TypeInfo_t1720 * L_17 = (TypeInfo_t1720 *)il2cpp_codegen_object_new (TypeInfo_t1720_il2cpp_TypeInfo_var);
			TypeInfo__ctor_m10642(L_17, /*hidden argument*/NULL);
			V_2 = L_17;
			Type_t * L_18 = ___type;
			NullCheck(L_18);
			FieldInfoU5BU5D_t955* L_19 = (FieldInfoU5BU5D_t955*)VirtFuncInvoker1< FieldInfoU5BU5D_t955*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_18, ((int32_t)52));
			V_4 = L_19;
			FieldInfoU5BU5D_t955* L_20 = V_4;
			V_6 = L_20;
			V_7 = 0;
			goto IL_010f;
		}

IL_0073:
		{
			FieldInfoU5BU5D_t955* L_21 = V_6;
			int32_t L_22 = V_7;
			NullCheck(L_21);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
			int32_t L_23 = L_22;
			V_5 = (*(FieldInfo_t **)(FieldInfo_t **)SZArrayLdElema(L_21, L_23));
			FieldInfo_t * L_24 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(InternalRemotingServices_t1705_il2cpp_TypeInfo_var);
			SoapAttribute_t1686 * L_25 = InternalRemotingServices_GetCachedSoapAttribute_m10544(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			V_8 = ((SoapFieldAttribute_t1687 *)Castclass(L_25, SoapFieldAttribute_t1687_il2cpp_TypeInfo_var));
			SoapFieldAttribute_t1687 * L_26 = V_8;
			NullCheck(L_26);
			bool L_27 = SoapFieldAttribute_IsInteropXmlElement_m10487(L_26, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_0099;
			}
		}

IL_0094:
		{
			goto IL_0109;
		}

IL_0099:
		{
			SoapFieldAttribute_t1687 * L_28 = V_8;
			NullCheck(L_28);
			String_t* L_29 = SoapFieldAttribute_get_XmlElementName_m10486(L_28, /*hidden argument*/NULL);
			SoapFieldAttribute_t1687 * L_30 = V_8;
			NullCheck(L_30);
			String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Metadata.SoapAttribute::get_XmlNamespace() */, L_30);
			IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
			String_t* L_32 = SoapServices_GetNameKey_m10648(NULL /*static, unused*/, L_29, L_31, /*hidden argument*/NULL);
			V_9 = L_32;
			SoapFieldAttribute_t1687 * L_33 = V_8;
			NullCheck(L_33);
			bool L_34 = (bool)VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::get_UseAttribute() */, L_33);
			if (!L_34)
			{
				goto IL_00e4;
			}
		}

IL_00ba:
		{
			TypeInfo_t1720 * L_35 = V_2;
			NullCheck(L_35);
			Hashtable_t24 * L_36 = (L_35->___Attributes_0);
			if (L_36)
			{
				goto IL_00d0;
			}
		}

IL_00c5:
		{
			TypeInfo_t1720 * L_37 = V_2;
			Hashtable_t24 * L_38 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
			Hashtable__ctor_m6515(L_38, /*hidden argument*/NULL);
			NullCheck(L_37);
			L_37->___Attributes_0 = L_38;
		}

IL_00d0:
		{
			TypeInfo_t1720 * L_39 = V_2;
			NullCheck(L_39);
			Hashtable_t24 * L_40 = (L_39->___Attributes_0);
			String_t* L_41 = V_9;
			FieldInfo_t * L_42 = V_5;
			NullCheck(L_40);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_40, L_41, L_42);
			goto IL_0109;
		}

IL_00e4:
		{
			TypeInfo_t1720 * L_43 = V_2;
			NullCheck(L_43);
			Hashtable_t24 * L_44 = (L_43->___Elements_1);
			if (L_44)
			{
				goto IL_00fa;
			}
		}

IL_00ef:
		{
			TypeInfo_t1720 * L_45 = V_2;
			Hashtable_t24 * L_46 = (Hashtable_t24 *)il2cpp_codegen_object_new (Hashtable_t24_il2cpp_TypeInfo_var);
			Hashtable__ctor_m6515(L_46, /*hidden argument*/NULL);
			NullCheck(L_45);
			L_45->___Elements_1 = L_46;
		}

IL_00fa:
		{
			TypeInfo_t1720 * L_47 = V_2;
			NullCheck(L_47);
			Hashtable_t24 * L_48 = (L_47->___Elements_1);
			String_t* L_49 = V_9;
			FieldInfo_t * L_50 = V_5;
			NullCheck(L_48);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_48, L_49, L_50);
		}

IL_0109:
		{
			int32_t L_51 = V_7;
			V_7 = ((int32_t)((int32_t)L_51+(int32_t)1));
		}

IL_010f:
		{
			int32_t L_52 = V_7;
			FieldInfoU5BU5D_t955* L_53 = V_6;
			NullCheck(L_53);
			if ((((int32_t)L_52) < ((int32_t)(((int32_t)(((Array_t *)L_53)->max_length))))))
			{
				goto IL_0073;
			}
		}

IL_011a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
			Hashtable_t24 * L_54 = ((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____typeInfos_4;
			Type_t * L_55 = ___type;
			TypeInfo_t1720 * L_56 = V_2;
			NullCheck(L_54);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_54, L_55, L_56);
			IL2CPP_LEAVE(0x132, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		Object_t * L_57 = V_3;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(299)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_JUMP_TBL(0x132, IL_0132)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0132:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.SoapServices::RegisterInteropXmlElement(System.String,System.String,System.Type)
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral130;
extern "C" void SoapServices_RegisterInteropXmlElement_m10656 (Object_t * __this /* static, unused */, String_t* ___xmlElement, String_t* ___xmlNamespace, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____xmlElements_1;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_3 = ((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____xmlElements_1;
		String_t* L_4 = ___xmlElement;
		String_t* L_5 = ___xmlNamespace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2098(NULL /*static, unused*/, L_4, _stringLiteral130, L_5, /*hidden argument*/NULL);
		Type_t * L_7 = ___type;
		NullCheck(L_3);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_6, L_7);
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.SoapServices::RegisterInteropXmlType(System.String,System.String,System.Type)
extern TypeInfo* SoapServices_t1721_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral130;
extern "C" void SoapServices_RegisterInteropXmlType_m10657 (Object_t * __this /* static, unused */, String_t* ___xmlType, String_t* ___xmlTypeNamespace, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoapServices_t1721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_0 = ((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____xmlTypes_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m6516(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SoapServices_t1721_il2cpp_TypeInfo_var);
		Hashtable_t24 * L_3 = ((SoapServices_t1721_StaticFields*)SoapServices_t1721_il2cpp_TypeInfo_var->static_fields)->____xmlTypes_0;
		String_t* L_4 = ___xmlType;
		String_t* L_5 = ___xmlTypeNamespace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2098(NULL /*static, unused*/, L_4, _stringLiteral130, L_5, /*hidden argument*/NULL);
		Type_t * L_7 = ___type;
		NullCheck(L_3);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_3, L_6, L_7);
		IL2CPP_LEAVE(0x34, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m6518(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0034:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.SoapServices::EncodeNs(System.String)
extern Il2CppCodeGenString* _stringLiteral451;
extern Il2CppCodeGenString* _stringLiteral2250;
extern Il2CppCodeGenString* _stringLiteral130;
extern Il2CppCodeGenString* _stringLiteral2251;
extern Il2CppCodeGenString* _stringLiteral368;
extern Il2CppCodeGenString* _stringLiteral2252;
extern "C" String_t* SoapServices_EncodeNs_m10658 (Object_t * __this /* static, unused */, String_t* ___ns, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		_stringLiteral2250 = il2cpp_codegen_string_literal_from_index(2250);
		_stringLiteral130 = il2cpp_codegen_string_literal_from_index(130);
		_stringLiteral2251 = il2cpp_codegen_string_literal_from_index(2251);
		_stringLiteral368 = il2cpp_codegen_string_literal_from_index(368);
		_stringLiteral2252 = il2cpp_codegen_string_literal_from_index(2252);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___ns;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m2090(L_0, _stringLiteral451, _stringLiteral2250, /*hidden argument*/NULL);
		___ns = L_1;
		String_t* L_2 = ___ns;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m2090(L_2, _stringLiteral130, _stringLiteral2251, /*hidden argument*/NULL);
		___ns = L_3;
		String_t* L_4 = ___ns;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m2090(L_4, _stringLiteral368, _stringLiteral2252, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
