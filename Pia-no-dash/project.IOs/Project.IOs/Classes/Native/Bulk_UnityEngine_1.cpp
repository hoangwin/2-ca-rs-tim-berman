#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
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
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m4603 (AsyncOperation_t636 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m4738(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m4604 (AsyncOperation_t636 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m4604_ftn) (AsyncOperation_t636 *);
	static AsyncOperation_InternalDestroy_m4604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m4604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m4605 (AsyncOperation_t636 * __this, const MethodInfo* method)
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
		AsyncOperation_InternalDestroy_m4604(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5346(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t636_marshal(const AsyncOperation_t636& unmarshaled, AsyncOperation_t636_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
void AsyncOperation_t636_marshal_back(const AsyncOperation_t636_marshaled& marshaled, AsyncOperation_t636& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t636_marshal_cleanup(AsyncOperation_t636_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LogCallback__ctor_m4606 (LogCallback_t714 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C" void LogCallback_Invoke_m4607 (LogCallback_t714 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m4607((LogCallback_t714 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t714(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern TypeInfo* LogType_t641_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m4608 (LogCallback_t714 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t641_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m4609 (LogCallback_t714 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Int32
#include "mscorlib_System_Int32.h"


// System.Void UnityEngine.Application::Quit()
extern "C" void Application_Quit_m2466 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Application_Quit_m2466_ftn) ();
	static Application_Quit_m2466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_Quit_m2466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m1932 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m1932_ftn) ();
	static Application_get_isPlaying_m1932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m1932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m2205 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m2205_ftn) ();
	static Application_get_isEditor_m2205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m2205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m2181 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m2181_ftn) ();
	static Application_get_platform_m2181_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m2181_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" String_t* Application_get_persistentDataPath_m2210 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_persistentDataPath_m2210_ftn) ();
	static Application_get_persistentDataPath_m2210_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_persistentDataPath_m2210_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_persistentDataPath()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_cloudProjectId()
extern "C" String_t* Application_get_cloudProjectId_m4610 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_cloudProjectId_m4610_ftn) ();
	static Application_get_cloudProjectId_m4610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_cloudProjectId_m4610_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_cloudProjectId()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C" void Application_OpenURL_m294 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef void (*Application_OpenURL_m294_ftn) (String_t*);
	static Application_OpenURL_m294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_OpenURL_m294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::OpenURL(System.String)");
	_il2cpp_icall_func(___url);
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C" void Application_set_targetFrameRate_m2464 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Application_set_targetFrameRate_m2464_ftn) (int32_t);
	static Application_set_targetFrameRate_m2464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_targetFrameRate_m2464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_targetFrameRate(System.Int32)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern TypeInfo* Application_t715_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m4611 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t714 * V_0 = {0};
	LogCallback_t714 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t714 * L_1 = ((Application_t715_StaticFields*)Application_t715_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t714 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t714 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		LogCallback_Invoke_m4607(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001b:
	{
		LogCallback_t714 * L_7 = ((Application_t715_StaticFields*)Application_t715_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t714 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t714 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		LogCallback_Invoke_m4607(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"


// System.Void UnityEngine.Behaviour::.ctor()
extern "C" void Behaviour__ctor_m4612 (Behaviour_t324 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m4696(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m1927 (Behaviour_t324 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m1927_ftn) (Behaviour_t324 *);
	static Behaviour_get_enabled_m1927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m1927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" void Behaviour_set_enabled_m420 (Behaviour_t324 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m420_ftn) (Behaviour_t324 *, bool);
	static Behaviour_set_enabled_m420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m420_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m3696 (Behaviour_t324 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m3696_ftn) (Behaviour_t324 *);
	static Behaviour_get_isActiveAndEnabled_m3696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m3696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CameraCallback__ctor_m4613 (CameraCallback_t716 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m4614 (CameraCallback_t716 * __this, Camera_t113 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m4614((CameraCallback_t716 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t113 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t113 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t716(Il2CppObject* delegate, Camera_t113 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t113 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m4615 (CameraCallback_t716 * __this, Camera_t113 * ___cam, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m4616 (CameraCallback_t716 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.TransparencySortMode
#include "UnityEngine_UnityEngine_TransparencySortMode.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"


// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" float Camera_get_fieldOfView_m2319 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_fieldOfView_m2319_ftn) (Camera_t113 *);
	static Camera_get_fieldOfView_m2319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_fieldOfView_m2319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_fieldOfView()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" void Camera_set_fieldOfView_m2320 (Camera_t113 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_fieldOfView_m2320_ftn) (Camera_t113 *, float);
	static Camera_set_fieldOfView_m2320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_fieldOfView_m2320_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_fieldOfView(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m2221 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m2221_ftn) (Camera_t113 *);
	static Camera_get_nearClipPlane_m2221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m2221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern "C" void Camera_set_nearClipPlane_m2201 (Camera_t113 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_nearClipPlane_m2201_ftn) (Camera_t113 *, float);
	static Camera_set_nearClipPlane_m2201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_nearClipPlane_m2201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_nearClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m2222 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m2222_ftn) (Camera_t113 *);
	static Camera_get_farClipPlane_m2222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m2222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern "C" void Camera_set_farClipPlane_m2202 (Camera_t113 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_farClipPlane_m2202_ftn) (Camera_t113 *, float);
	static Camera_set_farClipPlane_m2202_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_farClipPlane_m2202_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_farClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" float Camera_get_orthographicSize_m2324 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_orthographicSize_m2324_ftn) (Camera_t113 *);
	static Camera_get_orthographicSize_m2324_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographicSize_m2324_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m2204 (Camera_t113 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m2204_ftn) (Camera_t113 *, float);
	static Camera_set_orthographicSize_m2204_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m2204_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Camera::get_orthographic()
extern "C" bool Camera_get_orthographic_m2341 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef bool (*Camera_get_orthographic_m2341_ftn) (Camera_t113 *);
	static Camera_get_orthographic_m2341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographic_m2341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographic()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C" void Camera_set_orthographic_m2203 (Camera_t113 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_orthographic_m2203_ftn) (Camera_t113 *, bool);
	static Camera_set_orthographic_m2203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographic_m2203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_transparencySortMode(UnityEngine.TransparencySortMode)
extern "C" void Camera_set_transparencySortMode_m2384 (Camera_t113 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_transparencySortMode_m2384_ftn) (Camera_t113 *, int32_t);
	static Camera_set_transparencySortMode_m2384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_transparencySortMode_m2384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_transparencySortMode(UnityEngine.TransparencySortMode)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m2196 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m2196_ftn) (Camera_t113 *);
	static Camera_get_depth_m2196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m2196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern "C" void Camera_set_depth_m2200 (Camera_t113 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_depth_m2200_ftn) (Camera_t113 *, float);
	static Camera_set_depth_m2200_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_depth_m2200_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depth(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m2187 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m2187_ftn) (Camera_t113 *);
	static Camera_get_cullingMask_m2187_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m2187_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C" void Camera_set_cullingMask_m2197 (Camera_t113 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_cullingMask_m2197_ftn) (Camera_t113 *, int32_t);
	static Camera_set_cullingMask_m2197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_cullingMask_m2197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m4617 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m4617_ftn) (Camera_t113 *);
	static Camera_get_eventMask_m4617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m4617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_eventMask(System.Int32)
extern "C" void Camera_set_eventMask_m2383 (Camera_t113 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_eventMask_m2383_ftn) (Camera_t113 *, int32_t);
	static Camera_set_eventMask_m2383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_eventMask_m2383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_eventMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C" void Camera_set_backgroundColor_m2199 (Camera_t113 * __this, Color_t9  ___value, const MethodInfo* method)
{
	{
		Camera_INTERNAL_set_backgroundColor_m4618(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m4618 (Camera_t113 * __this, Color_t9 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_backgroundColor_m4618_ftn) (Camera_t113 *, Color_t9 *);
	static Camera_INTERNAL_set_backgroundColor_m4618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_backgroundColor_m4618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C" Rect_t31  Camera_get_rect_m1992 (Camera_t113 * __this, const MethodInfo* method)
{
	Rect_t31  V_0 = {0};
	{
		Camera_INTERNAL_get_rect_m4619(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C" void Camera_set_rect_m2458 (Camera_t113 * __this, Rect_t31  ___value, const MethodInfo* method)
{
	{
		Camera_INTERNAL_set_rect_m4620(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m4619 (Camera_t113 * __this, Rect_t31 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_rect_m4619_ftn) (Camera_t113 *, Rect_t31 *);
	static Camera_INTERNAL_get_rect_m4619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_rect_m4619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m4620 (Camera_t113 * __this, Rect_t31 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_rect_m4620_ftn) (Camera_t113 *, Rect_t31 *);
	static Camera_INTERNAL_set_rect_m4620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_rect_m4620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t31  Camera_get_pixelRect_m2340 (Camera_t113 * __this, const MethodInfo* method)
{
	Rect_t31  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m4621(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m4621 (Camera_t113 * __this, Rect_t31 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m4621_ftn) (Camera_t113 *, Rect_t31 *);
	static Camera_INTERNAL_get_pixelRect_m4621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m4621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t660 * Camera_get_targetTexture_m4622 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t660 * (*Camera_get_targetTexture_m4622_ftn) (Camera_t113 *);
	static Camera_get_targetTexture_m4622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m4622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m2195 (Camera_t113 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m2195_ftn) (Camera_t113 *);
	static Camera_get_clearFlags_m2195_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m2195_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" void Camera_set_clearFlags_m2198 (Camera_t113 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_clearFlags_m2198_ftn) (Camera_t113 *, int32_t);
	static Camera_set_clearFlags_m2198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_clearFlags_m2198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Camera_WorldToScreenPoint_m2124 (Camera_t113 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Camera_INTERNAL_CALL_WorldToScreenPoint_m4623(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t10  Camera_INTERNAL_CALL_WorldToScreenPoint_m4623 (Object_t * __this /* static, unused */, Camera_t113 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Camera_INTERNAL_CALL_WorldToScreenPoint_m4623_ftn) (Camera_t113 *, Vector3_t10 *);
	static Camera_INTERNAL_CALL_WorldToScreenPoint_m4623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToScreenPoint_m4623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Camera_WorldToViewportPoint_m2042 (Camera_t113 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Camera_INTERNAL_CALL_WorldToViewportPoint_m4624(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t10  Camera_INTERNAL_CALL_WorldToViewportPoint_m4624 (Object_t * __this /* static, unused */, Camera_t113 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Camera_INTERNAL_CALL_WorldToViewportPoint_m4624_ftn) (Camera_t113 *, Vector3_t10 *);
	static Camera_INTERNAL_CALL_WorldToViewportPoint_m4624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToViewportPoint_m4624_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Camera_ViewportToWorldPoint_m2223 (Camera_t113 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Camera_INTERNAL_CALL_ViewportToWorldPoint_m4625(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ViewportToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t10  Camera_INTERNAL_CALL_ViewportToWorldPoint_m4625 (Object_t * __this /* static, unused */, Camera_t113 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Camera_INTERNAL_CALL_ViewportToWorldPoint_m4625_ftn) (Camera_t113 *, Vector3_t10 *);
	static Camera_INTERNAL_CALL_ViewportToWorldPoint_m4625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ViewportToWorldPoint_m4625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ViewportToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Camera_ScreenToWorldPoint_m1997 (Camera_t113 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m4626(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t10  Camera_INTERNAL_CALL_ScreenToWorldPoint_m4626 (Object_t * __this /* static, unused */, Camera_t113 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m4626_ftn) (Camera_t113 *, Vector3_t10 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m4626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m4626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Camera_ScreenToViewportPoint_m2366 (Camera_t113 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m4627(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t10  Camera_INTERNAL_CALL_ScreenToViewportPoint_m4627 (Object_t * __this /* static, unused */, Camera_t113 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m4627_ftn) (Camera_t113 *, Vector3_t10 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m4627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m4627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t326  Camera_ScreenPointToRay_m1974 (Camera_t113 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Ray_t326  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m4628(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t326  Camera_INTERNAL_CALL_ScreenPointToRay_m4628 (Object_t * __this /* static, unused */, Camera_t113 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Ray_t326  (*Camera_INTERNAL_CALL_ScreenPointToRay_m4628_ftn) (Camera_t113 *, Vector3_t10 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m4628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m4628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t113 * Camera_get_main_m2182 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t113 * (*Camera_get_main_m2182_ftn) ();
	static Camera_get_main_m2182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m2182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m4629 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m4629_ftn) ();
	static Camera_get_allCamerasCount_m4629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m4629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m4630 (Object_t * __this /* static, unused */, CameraU5BU5D_t340* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m4630_ftn) (CameraU5BU5D_t340*);
	static Camera_GetAllCameras_m4630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m4630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern TypeInfo* Camera_t113_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m4631 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t716 * L_0 = ((Camera_t113_StaticFields*)Camera_t113_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t716 * L_1 = ((Camera_t113_StaticFields*)Camera_t113_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t113 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m4614(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t113_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m4632 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t716 * L_0 = ((Camera_t113_StaticFields*)Camera_t113_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t716 * L_1 = ((Camera_t113_StaticFields*)Camera_t113_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t113 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m4614(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t113_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m4633 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t113_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(86);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t716 * L_0 = ((Camera_t113_StaticFields*)Camera_t113_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t716 * L_1 = ((Camera_t113_StaticFields*)Camera_t113_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t113 * L_2 = ___cam;
		NullCheck(L_1);
		CameraCallback_Invoke_m4614(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t23 * Camera_RaycastTry_m4634 (Camera_t113 * __this, Ray_t326  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t23 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m4635(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t23 * Camera_INTERNAL_CALL_RaycastTry_m4635 (Object_t * __this /* static, unused */, Camera_t113 * ___self, Ray_t326 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t23 * (*Camera_INTERNAL_CALL_RaycastTry_m4635_ftn) (Camera_t113 *, Ray_t326 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m4635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m4635_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t23 * Camera_RaycastTry2D_m4636 (Camera_t113 * __this, Ray_t326  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t23 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m4637(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t23 * Camera_INTERNAL_CALL_RaycastTry2D_m4637 (Object_t * __this /* static, unused */, Camera_t113 * ___self, Ray_t326 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t23 * (*Camera_INTERNAL_CALL_RaycastTry2D_m4637_ftn) (Camera_t113 *, Ray_t326 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m4637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m4637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" void Debug_DrawLine_m2108 (Object_t * __this /* static, unused */, Vector3_t10  ___start, Vector3_t10  ___end, Color_t9  ___color, const MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		V_0 = 1;
		V_1 = (0.0f);
		float L_0 = V_1;
		bool L_1 = V_0;
		Debug_INTERNAL_CALL_DrawLine_m4638(NULL /*static, unused*/, (&___start), (&___end), (&___color), L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m4638 (Object_t * __this /* static, unused */, Vector3_t10 * ___start, Vector3_t10 * ___end, Color_t9 * ___color, float ___duration, bool ___depthTest, const MethodInfo* method)
{
	typedef void (*Debug_INTERNAL_CALL_DrawLine_m4638_ftn) (Vector3_t10 *, Vector3_t10 *, Color_t9 *, float, bool);
	static Debug_INTERNAL_CALL_DrawLine_m4638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_INTERNAL_CALL_DrawLine_m4638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)");
	_il2cpp_icall_func(___start, ___end, ___color, ___duration, ___depthTest);
}
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m4639 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t62 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m4639_ftn) (int32_t, String_t*, Object_t62 *);
	static Debug_Internal_Log_m4639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m4639_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m4640 (Object_t * __this /* static, unused */, Exception_t54 * ___exception, Object_t62 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m4640_ftn) (Exception_t54 *, Object_t62 *);
	static Debug_Internal_LogException_m4640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m4640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern Il2CppCodeGenString* _stringLiteral135;
extern "C" void Debug_Log_m2106 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral135;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m4639(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern Il2CppCodeGenString* _stringLiteral135;
extern "C" void Debug_LogError_m336 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral135 = il2cpp_codegen_string_literal_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = _stringLiteral135;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m4639(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m1991 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t62 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t62 * L_2 = ___context;
		Debug_Internal_Log_m4639(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m4641 (Object_t * __this /* static, unused */, Exception_t54 * ___exception, const MethodInfo* method)
{
	{
		Exception_t54 * L_0 = ___exception;
		Debug_Internal_LogException_m4640(NULL /*static, unused*/, L_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m3767 (Object_t * __this /* static, unused */, Exception_t54 * ___exception, Object_t62 * ___context, const MethodInfo* method)
{
	{
		Exception_t54 * L_0 = ___exception;
		Object_t62 * L_1 = ___context;
		Debug_Internal_LogException_m4640(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m441 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m4639(NULL /*static, unused*/, 1, L_1, (Object_t62 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m1933 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t62 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t62 * L_2 = ___context;
		Debug_Internal_Log_m4639(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DisplaysUpdatedDelegate__ctor_m4642 (DisplaysUpdatedDelegate_t718 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m4643 (DisplaysUpdatedDelegate_t718 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m4643((DisplaysUpdatedDelegate_t718 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t718(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m4644 (DisplaysUpdatedDelegate_t718 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m4645 (DisplaysUpdatedDelegate_t718 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
#include "mscorlib_ArrayTypes.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m4646 (Display_t720 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m5394(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m4647 (Display_t720 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern TypeInfo* DisplayU5BU5D_t719_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m4648 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t719* L_0 = ((DisplayU5BU5D_t719*)SZArrayNew(DisplayU5BU5D_t719_il2cpp_TypeInfo_var, 1));
		Display_t720 * L_1 = (Display_t720 *)il2cpp_codegen_object_new (Display_t720_il2cpp_TypeInfo_var);
		Display__ctor_m4646(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t720 **)(Display_t720 **)SZArrayLdElema(L_0, 0)) = (Display_t720 *)L_1;
		((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t719* L_2 = ((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t720 **)(Display_t720 **)SZArrayLdElema(L_2, L_3));
		((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t718 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t718_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m4649 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t718 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		DisplaysUpdatedDelegate_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t718 * L_0 = ((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t718 * L_1 = ___value;
		Delegate_t333 * L_2 = Delegate_Combine_m2051(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t718 *)Castclass(L_2, DisplaysUpdatedDelegate_t718_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t718_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m4650 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t718 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		DisplaysUpdatedDelegate_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t718 * L_0 = ((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t718 * L_1 = ___value;
		Delegate_t333 * L_2 = Delegate_Remove_m2056(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t718 *)Castclass(L_2, DisplaysUpdatedDelegate_t718_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m4651 (Display_t720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m4667(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m4652 (Display_t720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m4667(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m4653 (Display_t720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m4666(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m4654 (Display_t720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m4666(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t824  Display_get_colorBuffer_m4655 (Display_t720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t824  V_0 = {0};
	RenderBuffer_t824  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m4668(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t824  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t824  Display_get_depthBuffer_m4656 (Display_t720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t824  V_0 = {0};
	RenderBuffer_t824  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m4668(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t824  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m4657 (Display_t720 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m4670(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m4658 (Display_t720 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m4670(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m4659 (Display_t720 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m4671(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m4660 (Display_t720 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m4669(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m4661 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m4672(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  Display_RelativeMouseAt_m4662 (Object_t * __this /* static, unused */, Vector3_t10  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m4673(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t10  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" Display_t720 * Display_get_main_m4663 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		Display_t720 * L_0 = ((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern TypeInfo* DisplayU5BU5D_t719_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m4664 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t880* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t880* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t719*)SZArrayNew(DisplayU5BU5D_t719_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t719* L_1 = ((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t880* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t720 * L_6 = (Display_t720 *)il2cpp_codegen_object_new (Display_t720_il2cpp_TypeInfo_var);
		Display__ctor_m4647(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t720 **)(Display_t720 **)SZArrayLdElema(L_1, L_2)) = (Display_t720 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t880* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t719* L_10 = ((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t720 **)(Display_t720 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern TypeInfo* Display_t720_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m4665 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t718 * L_0 = ((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t720_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t718 * L_1 = ((Display_t720_StaticFields*)Display_t720_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		DisplaysUpdatedDelegate_Invoke_m4643(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m4666 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m4666_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m4666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m4666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m4667 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m4667_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m4667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m4667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m4668 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t824 * ___color, RenderBuffer_t824 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m4668_ftn) (IntPtr_t, RenderBuffer_t824 *, RenderBuffer_t824 *);
	static Display_GetRenderingBuffersImpl_m4668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m4668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m4669 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m4669_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m4669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m4669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m4670 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m4670_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m4670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m4670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m4671 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m4671_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m4671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m4671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m4672 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m4672_ftn) ();
	static Display_MultiDisplayLicenseImpl_m4672_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m4672_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m4673 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m4673_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m4673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m4673_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m289 (MonoBehaviour_t2 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m4612(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t46 * MonoBehaviour_StartCoroutine_m2361 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t46 * L_1 = MonoBehaviour_StartCoroutine_Auto_m4674(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t46 * MonoBehaviour_StartCoroutine_Auto_m4674 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t46 * (*MonoBehaviour_StartCoroutine_Auto_m4674_ftn) (MonoBehaviour_t2 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m4674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m4674_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t46 * MonoBehaviour_StartCoroutine_m4675 (MonoBehaviour_t2 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method)
{
	typedef Coroutine_t46 * (*MonoBehaviour_StartCoroutine_m4675_ftn) (MonoBehaviour_t2 *, String_t*, Object_t *);
	static MonoBehaviour_StartCoroutine_m4675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_m4675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, ___methodName, ___value);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" Coroutine_t46 * MonoBehaviour_StartCoroutine_m310 (MonoBehaviour_t2 * __this, String_t* ___methodName, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		V_0 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_0;
		Coroutine_t46 * L_2 = MonoBehaviour_StartCoroutine_m4675(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C" void MonoBehaviour_StopCoroutine_m426 (MonoBehaviour_t2 * __this, String_t* ___methodName, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_m426_ftn) (MonoBehaviour_t2 *, String_t*);
	static MonoBehaviour_StopCoroutine_m426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_m426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m4676 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4677(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m3912 (MonoBehaviour_t2 * __this, Coroutine_t46 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t46 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m4678(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4677 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4677_ftn) (MonoBehaviour_t2 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m4677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m4678 (MonoBehaviour_t2 * __this, Coroutine_t46 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m4678_ftn) (MonoBehaviour_t2 *, Coroutine_t46 *);
	static MonoBehaviour_StopCoroutine_Auto_m4678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m4678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m2390 (Touch_t368 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t27  Touch_get_position_m2392 (Touch_t368 * __this, const MethodInfo* method)
{
	{
		Vector2_t27  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" int32_t Touch_get_tapCount_m2393 (Touch_t368 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TapCount_5);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m2391 (Touch_t368 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t368_marshal(const Touch_t368& unmarshaled, Touch_t368_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t368_marshal_back(const Touch_t368_marshaled& marshaled, Touch_t368& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t368_marshal_cleanup(Touch_t368_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"


// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m4679 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C" bool Input_GetKeyInt_m4680 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyInt_m4680_ftn) (int32_t);
	static Input_GetKeyInt_m4680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyInt_m4680_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Boolean UnityEngine.Input::GetKeyUpInt(System.Int32)
extern "C" bool Input_GetKeyUpInt_m4681 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyUpInt_m4681_ftn) (int32_t);
	static Input_GetKeyUpInt_m4681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyUpInt_m4681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyUpInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Boolean UnityEngine.Input::GetKeyDownInt(System.Int32)
extern "C" bool Input_GetKeyDownInt_m4682 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	typedef bool (*Input_GetKeyDownInt_m4682_ftn) (int32_t);
	static Input_GetKeyDownInt_m4682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyDownInt_m4682_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyDownInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" float Input_GetAxis_m2377 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxis_m2377_ftn) (String_t*);
	static Input_GetAxis_m2377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxis_m2377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" float Input_GetAxisRaw_m3736 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m3736_ftn) (String_t*);
	static Input_GetAxisRaw_m3736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m3736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m3735 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m3735_ftn) (String_t*);
	static Input_GetButtonDown_m3735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m3735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern TypeInfo* Input_t328_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKey_m1934 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t328_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyInt_m4680(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern TypeInfo* Input_t328_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKeyDown_m2014 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t328_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDownInt_m4682(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern TypeInfo* Input_t328_il2cpp_TypeInfo_var;
extern "C" bool Input_GetKeyUp_m2016 (Object_t * __this /* static, unused */, int32_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t328_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyUpInt_m4681(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m2386 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m2386_ftn) (int32_t);
	static Input_GetMouseButton_m2386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m2386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m2387 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m2387_ftn) (int32_t);
	static Input_GetMouseButtonDown_m2387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m2387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m2388 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m2388_ftn) (int32_t);
	static Input_GetMouseButtonUp_m2388_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m2388_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern TypeInfo* Input_t328_il2cpp_TypeInfo_var;
extern "C" Vector3_t10  Input_get_mousePosition_m2378 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t328_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mousePosition_m4683(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C" void Input_INTERNAL_get_mousePosition_m4683 (Object_t * __this /* static, unused */, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mousePosition_m4683_ftn) (Vector3_t10 *);
	static Input_INTERNAL_get_mousePosition_m4683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mousePosition_m4683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern TypeInfo* Input_t328_il2cpp_TypeInfo_var;
extern "C" Vector2_t27  Input_get_mouseScrollDelta_m3709 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t27  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t328_il2cpp_TypeInfo_var);
		Input_INTERNAL_get_mouseScrollDelta_m4684(NULL /*static, unused*/, (&V_0), /*hidden argument*/NULL);
		Vector2_t27  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_get_mouseScrollDelta_m4684 (Object_t * __this /* static, unused */, Vector2_t27 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_get_mouseScrollDelta_m4684_ftn) (Vector2_t27 *);
	static Input_INTERNAL_get_mouseScrollDelta_m4684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_get_mouseScrollDelta_m4684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m3734 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m3734_ftn) ();
	static Input_get_mousePresent_m3734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m3734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Input::get_inputString()
extern "C" String_t* Input_get_inputString_m2385 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_inputString_m2385_ftn) ();
	static Input_get_inputString_m2385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_inputString_m2385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_inputString()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t368  Input_GetTouch_m2389 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t368  (*Input_GetTouch_m2389_ftn) (int32_t);
	static Input_GetTouch_m2389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m2389_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m2394 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m2394_ftn) ();
	static Input_get_touchCount_m2394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m2394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m3739 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C" void Input_set_imeCompositionMode_m2409 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2409_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m2414 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2414_ftn) ();
	static Input_get_compositionString_m2414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2414_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern TypeInfo* Input_t328_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m2410 (Object_t * __this /* static, unused */, Vector2_t27  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t328_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m4685(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m4685 (Object_t * __this /* static, unused */, Vector2_t27 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m4685_ftn) (Vector2_t27 *);
	static Input_INTERNAL_set_compositionCursorPos_m4685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m4685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m4686 (Object_t62 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t62 * Object_Internal_CloneSingle_m4687 (Object_t * __this /* static, unused */, Object_t62 * ___data, const MethodInfo* method)
{
	typedef Object_t62 * (*Object_Internal_CloneSingle_m4687_ftn) (Object_t62 *);
	static Object_Internal_CloneSingle_m4687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m4687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m2032 (Object_t * __this /* static, unused */, Object_t62 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m2032_ftn) (Object_t62 *, float);
	static Object_Destroy_m2032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m2032_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m415 (Object_t * __this /* static, unused */, Object_t62 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t62 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m2032(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m4688 (Object_t * __this /* static, unused */, Object_t62 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m4688_ftn) (Object_t62 *, bool);
	static Object_DestroyImmediate_m4688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m4688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m2188 (Object_t * __this /* static, unused */, Object_t62 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t62 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m4688(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t348* Object_FindObjectsOfType_m2206 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t348* (*Object_FindObjectsOfType_m2206_ftn) (Type_t *);
	static Object_FindObjectsOfType_m2206_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m2206_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m1923 (Object_t62 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m1923_ftn) (Object_t62 *);
	static Object_get_name_m1923_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m1923_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m2194 (Object_t62 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m2194_ftn) (Object_t62 *, String_t*);
	static Object_set_name_m2194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m2194_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m2101 (Object_t * __this /* static, unused */, Object_t62 * ___target, const MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m2101_ftn) (Object_t62 *);
	static Object_DontDestroyOnLoad_m2101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m2101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m2242 (Object_t62 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m2242_ftn) (Object_t62 *, int32_t);
	static Object_set_hideFlags_m2242_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m2242_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m4689 (Object_t62 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m4689_ftn) (Object_t62 *);
	static Object_ToString_m4689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m4689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern TypeInfo* Object_t62_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m4690 (Object_t62 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t62_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m4692(NULL /*static, unused*/, __this, ((Object_t62 *)IsInst(L_0, Object_t62_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m4691 (Object_t62 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m2302(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m4692 (Object_t * __this /* static, unused */, Object_t62 * ___lhs, Object_t62 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t62 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t62 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t62 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t62 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t62 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m4693(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t62 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m4693(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t62 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t62 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m4693 (Object_t * __this /* static, unused */, Object_t62 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t62 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m4694(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m5395(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m2302 (Object_t62 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m4694 (Object_t62 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern TypeInfo* ArgumentException_t626_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m4695 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t626 * L_2 = (ArgumentException_t626 *)il2cpp_codegen_object_new (ArgumentException_t626_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3969(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t62 * Object_FindObjectOfType_m2100 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	ObjectU5BU5D_t348* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t348* L_1 = Object_FindObjectsOfType_m2206(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t348* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t348* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t62 **)(Object_t62 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (Object_t62 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m335 (Object_t * __this /* static, unused */, Object_t62 * ___exists, const MethodInfo* method)
{
	{
		Object_t62 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m4692(NULL /*static, unused*/, L_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m438 (Object_t * __this /* static, unused */, Object_t62 * ___x, Object_t62 * ___y, const MethodInfo* method)
{
	{
		Object_t62 * L_0 = ___x;
		Object_t62 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m4692(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m409 (Object_t * __this /* static, unused */, Object_t62 * ___x, Object_t62 * ___y, const MethodInfo* method)
{
	{
		Object_t62 * L_0 = ___x;
		Object_t62 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m4692(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t62_marshal(const Object_t62& unmarshaled, Object_t62_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = reinterpret_cast<intptr_t>((unmarshaled.___m_CachedPtr_1).___m_value_0);
}
void Object_t62_marshal_back(const Object_t62_marshaled& marshaled, Object_t62& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	(unmarshaled.___m_CachedPtr_1).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_CachedPtr_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t62_marshal_cleanup(Object_t62_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_20.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m4696 (Component_t51 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m4686(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t32 * Component_get_transform_m428 (Component_t51 * __this, const MethodInfo* method)
{
	typedef Transform_t32 * (*Component_get_transform_m428_ftn) (Component_t51 *);
	static Component_get_transform_m428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m428_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t23 * Component_get_gameObject_m290 (Component_t51 * __this, const MethodInfo* method)
{
	typedef GameObject_t23 * (*Component_get_gameObject_m290_ftn) (Component_t51 *);
	static Component_get_gameObject_m290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t51 * Component_GetComponent_m3999 (Component_t51 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t23 * L_0 = Component_get_gameObject_m290(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t51 * L_2 = GameObject_GetComponent_m4702(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m4697 (Component_t51 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m4697_ftn) (Component_t51 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m4697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m4697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t51 * Component_GetComponentInChildren_m4698 (Component_t51 * __this, Type_t * ___t, const MethodInfo* method)
{
	{
		GameObject_t23 * L_0 = Component_get_gameObject_m290(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t51 * L_2 = GameObject_GetComponentInChildren_m4704(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m4699 (Component_t51 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m4699_ftn) (Component_t51 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m4699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m4699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m3786 (Component_t51 * __this, Type_t * ___type, List_1_t584 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t584 * L_1 = ___results;
		Component_GetComponentsForListInternal_m4699(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m2015 (Component_t51 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*Component_SendMessage_m2015_ftn) (Component_t51 *, String_t*, Object_t *, int32_t);
	static Component_SendMessage_m2015_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_SendMessage_m2015_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m2017 (Component_t51 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_SendMessage_m2015(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m2446 (Component_t51 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method)
{
	typedef void (*Component_BroadcastMessage_m2446_ftn) (Component_t51 *, String_t*, Object_t *, int32_t);
	static Component_BroadcastMessage_m2446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_BroadcastMessage_m2446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___parameter, ___options);
}
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m2445 (Component_t51 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		Component_BroadcastMessage_m2446(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Light
#include "UnityEngine_UnityEngine_Light.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Light
#include "UnityEngine_UnityEngine_LightMethodDeclarations.h"



// UnityEngine.Color UnityEngine.Light::get_color()
extern "C" Color_t9  Light_get_color_m344 (Light_t50 * __this, const MethodInfo* method)
{
	Color_t9  V_0 = {0};
	{
		Light_INTERNAL_get_color_m4700(__this, (&V_0), /*hidden argument*/NULL);
		Color_t9  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
extern "C" void Light_set_color_m347 (Light_t50 * __this, Color_t9  ___value, const MethodInfo* method)
{
	{
		Light_INTERNAL_set_color_m4701(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Light::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_get_color_m4700 (Light_t50 * __this, Color_t9 * ___value, const MethodInfo* method)
{
	typedef void (*Light_INTERNAL_get_color_m4700_ftn) (Light_t50 *, Color_t9 *);
	static Light_INTERNAL_get_color_m4700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_INTERNAL_get_color_m4700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::INTERNAL_get_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Light::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void Light_INTERNAL_set_color_m4701 (Light_t50 * __this, Color_t9 * ___value, const MethodInfo* method)
{
	typedef void (*Light_INTERNAL_set_color_m4701_ftn) (Light_t50 *, Color_t9 *);
	static Light_INTERNAL_set_color_m4701_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Light_INTERNAL_set_color_m4701_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m417 (GameObject_t23 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m4686(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m4708(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" void GameObject__ctor_m2190 (GameObject_t23 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m4686(__this, /*hidden argument*/NULL);
		GameObject_Internal_CreateGameObject_m4708(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t51 * GameObject_GetComponent_m4702 (GameObject_t23 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t51 * (*GameObject_GetComponent_m4702_ftn) (GameObject_t23 *, Type_t *);
	static GameObject_GetComponent_m4702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m4702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m4703 (GameObject_t23 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m4703_ftn) (GameObject_t23 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m4703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m4703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern TypeInfo* IEnumerator_t35_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t32_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" Component_t51 * GameObject_GetComponentInChildren_m4704 (GameObject_t23 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t35_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		Transform_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	Component_t51 * V_0 = {0};
	Transform_t32 * V_1 = {0};
	Transform_t32 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t51 * V_4 = {0};
	Component_t51 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t54 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t54 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m2208(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t51 * L_2 = GameObject_GetComponent_m4702(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t51 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m409(NULL /*static, unused*/, L_3, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t51 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t32 * L_6 = GameObject_get_transform_m339(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t32 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m409(NULL /*static, unused*/, L_7, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t32 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_11);
			V_2 = ((Transform_t32 *)Castclass(L_12, Transform_t32_il2cpp_TypeInfo_var));
			Transform_t32 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t23 * L_14 = Component_get_gameObject_m290(L_13, /*hidden argument*/NULL);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t51 * L_16 = GameObject_GetComponentInChildren_m4704(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			Component_t51 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m409(NULL /*static, unused*/, L_17, (Object_t62 *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t51 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t35_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, IDisposable_t56_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0095:
	{
		return (Component_t51 *)NULL;
	}

IL_0097:
	{
		Component_t51 * L_25 = V_5;
		return L_25;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" Array_t * GameObject_GetComponentsInternal_m4705 (GameObject_t23 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m4705_ftn) (GameObject_t23 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m4705_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m4705_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t32 * GameObject_get_transform_m339 (GameObject_t23 * __this, const MethodInfo* method)
{
	typedef Transform_t32 * (*GameObject_get_transform_m339_ftn) (GameObject_t23 *);
	static GameObject_get_transform_m339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m2034 (GameObject_t23 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m2034_ftn) (GameObject_t23 *);
	static GameObject_get_layer_m2034_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m2034_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m2035 (GameObject_t23 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2035_ftn) (GameObject_t23 *, int32_t);
	static GameObject_set_layer_m2035_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2035_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m2209 (GameObject_t23 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m2209_ftn) (GameObject_t23 *, bool);
	static GameObject_SetActive_m2209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m2209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m2207 (GameObject_t23 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m2207_ftn) (GameObject_t23 *);
	static GameObject_get_activeSelf_m2207_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m2207_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m2208 (GameObject_t23 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m2208_ftn) (GameObject_t23 *);
	static GameObject_get_activeInHierarchy_m2208_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m2208_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m442 (GameObject_t23 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m442_ftn) (GameObject_t23 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m2006 (GameObject_t23 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		GameObject_SendMessage_m442(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t51 * GameObject_Internal_AddComponentWithType_m4706 (GameObject_t23 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t51 * (*GameObject_Internal_AddComponentWithType_m4706_ftn) (GameObject_t23 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m4706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m4706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t51 * GameObject_AddComponent_m4707 (GameObject_t23 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t51 * L_1 = GameObject_Internal_AddComponentWithType_m4706(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m4708 (Object_t * __this /* static, unused */, GameObject_t23 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m4708_ftn) (GameObject_t23 *, String_t*);
	static GameObject_Internal_CreateGameObject_m4708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m4708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t23 * GameObject_Find_m2463 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef GameObject_t23 * (*GameObject_Find_m2463_ftn) (String_t*);
	static GameObject_Find_m2463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m2463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"



// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m4709 (Enumerator_t724 * __this, Transform_t32 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		Transform_t32 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m4710 (Enumerator_t724 * __this, const MethodInfo* method)
{
	{
		Transform_t32 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t32 * L_2 = Transform_GetChild_m1948(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m4711 (Enumerator_t724 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t32 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m1947(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t10  Transform_get_position_m359 (Transform_t32 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m4712(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m365 (Transform_t32 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m4713(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m4712 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m4712_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_get_position_m4712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m4712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m4713 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m4713_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_set_position_m4713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m4713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t10  Transform_get_localPosition_m363 (Transform_t32 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m4714(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m364 (Transform_t32 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m4715(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m4714 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m4714_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_get_localPosition_m4714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m4714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m4715 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m4715_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_set_localPosition_m4715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m4715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t10  Transform_get_eulerAngles_m352 (Transform_t32 * __this, const MethodInfo* method)
{
	Quaternion_t60  V_0 = {0};
	{
		Quaternion_t60  L_0 = Transform_get_rotation_m1969(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_t10  L_1 = Quaternion_get_eulerAngles_m2327((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C" void Transform_set_eulerAngles_m358 (Transform_t32 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		Quaternion_t60  L_1 = Quaternion_Euler_m394(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Transform_set_rotation_m396(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C" Vector3_t10  Transform_get_localEulerAngles_m367 (Transform_t32 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_localEulerAngles_m4716(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" void Transform_set_localEulerAngles_m368 (Transform_t32 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localEulerAngles_m4717(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localEulerAngles_m4716 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localEulerAngles_m4716_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_get_localEulerAngles_m4716_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localEulerAngles_m4716_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localEulerAngles(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localEulerAngles(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localEulerAngles_m4717 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localEulerAngles_m4717_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_set_localEulerAngles_m4717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localEulerAngles_m4717_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localEulerAngles(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t10  Transform_get_forward_m3814 (Transform_t32 * __this, const MethodInfo* method)
{
	{
		Quaternion_t60  L_0 = Transform_get_rotation_m1969(__this, /*hidden argument*/NULL);
		Vector3_t10  L_1 = Vector3_get_forward_m3812(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t10  L_2 = Quaternion_op_Multiply_m1971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t60  Transform_get_rotation_m1969 (Transform_t32 * __this, const MethodInfo* method)
{
	Quaternion_t60  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m4718(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t60  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m396 (Transform_t32 * __this, Quaternion_t60  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m4719(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m4718 (Transform_t32 * __this, Quaternion_t60 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m4718_ftn) (Transform_t32 *, Quaternion_t60 *);
	static Transform_INTERNAL_get_rotation_m4718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m4718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m4719 (Transform_t32 * __this, Quaternion_t60 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m4719_ftn) (Transform_t32 *, Quaternion_t60 *);
	static Transform_INTERNAL_set_rotation_m4719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m4719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t60  Transform_get_localRotation_m1941 (Transform_t32 * __this, const MethodInfo* method)
{
	Quaternion_t60  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m4720(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t60  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m395 (Transform_t32 * __this, Quaternion_t60  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m4721(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m4720 (Transform_t32 * __this, Quaternion_t60 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m4720_ftn) (Transform_t32 *, Quaternion_t60 *);
	static Transform_INTERNAL_get_localRotation_m4720_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m4720_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m4721 (Transform_t32 * __this, Quaternion_t60 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m4721_ftn) (Transform_t32 *, Quaternion_t60 *);
	static Transform_INTERNAL_set_localRotation_m4721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m4721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t10  Transform_get_localScale_m361 (Transform_t32 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m4722(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m366 (Transform_t32 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m4723(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m4722 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m4722_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_get_localScale_m4722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m4722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m4723 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m4723_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_set_localScale_m4723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m4723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t32 * Transform_get_parent_m1960 (Transform_t32 * __this, const MethodInfo* method)
{
	{
		Transform_t32 * L_0 = Transform_get_parentInternal_m4724(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern TypeInfo* RectTransform_t451_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral373;
extern "C" void Transform_set_parent_m1961 (Transform_t32 * __this, Transform_t32 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		_stringLiteral373 = il2cpp_codegen_string_literal_from_index(373);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t451 *)IsInst(__this, RectTransform_t451_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m1933(NULL /*static, unused*/, _stringLiteral373, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t32 * L_0 = ___value;
		Transform_set_parentInternal_m4725(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t32 * Transform_get_parentInternal_m4724 (Transform_t32 * __this, const MethodInfo* method)
{
	typedef Transform_t32 * (*Transform_get_parentInternal_m4724_ftn) (Transform_t32 *);
	static Transform_get_parentInternal_m4724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m4724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m4725 (Transform_t32 * __this, Transform_t32 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m4725_ftn) (Transform_t32 *, Transform_t32 *);
	static Transform_set_parentInternal_m4725_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m4725_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m3892 (Transform_t32 * __this, Transform_t32 * ___parent, const MethodInfo* method)
{
	{
		Transform_t32 * L_0 = ___parent;
		Transform_SetParent_m4726(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m4726 (Transform_t32 * __this, Transform_t32 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m4726_ftn) (Transform_t32 *, Transform_t32 *, bool);
	static Transform_SetParent_m4726_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m4726_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t215  Transform_get_worldToLocalMatrix_m1965 (Transform_t32 * __this, const MethodInfo* method)
{
	Matrix4x4_t215  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m4727(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t215  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m4727 (Transform_t32 * __this, Matrix4x4_t215 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m4727_ftn) (Transform_t32 *, Matrix4x4_t215 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m4727_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m4727_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" Matrix4x4_t215  Transform_get_localToWorldMatrix_m2310 (Transform_t32 * __this, const MethodInfo* method)
{
	Matrix4x4_t215  V_0 = {0};
	{
		Transform_INTERNAL_get_localToWorldMatrix_m4728(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t215  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m4728 (Transform_t32 * __this, Matrix4x4_t215 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localToWorldMatrix_m4728_ftn) (Transform_t32 *, Matrix4x4_t215 *);
	static Transform_INTERNAL_get_localToWorldMatrix_m4728_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localToWorldMatrix_m4728_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Translate_m380 (Transform_t32 * __this, Vector3_t10  ___translation, int32_t ___relativeTo, const MethodInfo* method)
{
	{
		int32_t L_0 = ___relativeTo;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t10  L_1 = Transform_get_position_m359(__this, /*hidden argument*/NULL);
		Vector3_t10  L_2 = ___translation;
		Vector3_t10  L_3 = Vector3_op_Addition_m304(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Transform_set_position_m365(__this, L_3, /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_001d:
	{
		Vector3_t10  L_4 = Transform_get_position_m359(__this, /*hidden argument*/NULL);
		Vector3_t10  L_5 = ___translation;
		Vector3_t10  L_6 = Transform_TransformDirection_m1979(__this, L_5, /*hidden argument*/NULL);
		Vector3_t10  L_7 = Vector3_op_Addition_m304(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		Transform_set_position_m365(__this, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C" void Transform_Translate_m2471 (Transform_t32 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		float L_0 = ___x;
		float L_1 = ___y;
		float L_2 = ___z;
		int32_t L_3 = V_0;
		Transform_Translate_m4729(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C" void Transform_Translate_m4729 (Transform_t32 * __this, float ___x, float ___y, float ___z, int32_t ___relativeTo, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = ___y;
		float L_2 = ___z;
		Vector3_t10  L_3 = {0};
		Vector3__ctor_m360(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___relativeTo;
		Transform_Translate_m380(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m398 (Transform_t32 * __this, Vector3_t10  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method)
{
	Quaternion_t60  V_0 = {0};
	{
		float L_0 = ((&___eulerAngles)->___x_1);
		float L_1 = ((&___eulerAngles)->___y_2);
		float L_2 = ((&___eulerAngles)->___z_3);
		Quaternion_t60  L_3 = Quaternion_Euler_m4421(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___relativeTo;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_t60  L_5 = Transform_get_localRotation_m1941(__this, /*hidden argument*/NULL);
		Quaternion_t60  L_6 = V_0;
		Quaternion_t60  L_7 = Quaternion_op_Multiply_m1942(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Transform_set_localRotation_m395(__this, L_7, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0039:
	{
		Quaternion_t60  L_8 = Transform_get_rotation_m1969(__this, /*hidden argument*/NULL);
		Quaternion_t60  L_9 = Transform_get_rotation_m1969(__this, /*hidden argument*/NULL);
		Quaternion_t60  L_10 = Quaternion_Inverse_m1985(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Quaternion_t60  L_11 = V_0;
		Quaternion_t60  L_12 = Quaternion_op_Multiply_m1942(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Quaternion_t60  L_13 = Transform_get_rotation_m1969(__this, /*hidden argument*/NULL);
		Quaternion_t60  L_14 = Quaternion_op_Multiply_m1942(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Quaternion_t60  L_15 = Quaternion_op_Multiply_m1942(NULL /*static, unused*/, L_8, L_14, /*hidden argument*/NULL);
		Transform_set_rotation_m396(__this, L_15, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m355 (Transform_t32 * __this, Transform_t32 * ___target, Vector3_t10  ___worldUp, const MethodInfo* method)
{
	{
		Transform_t32 * L_0 = ___target;
		bool L_1 = Object_op_Implicit_m335(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_t32 * L_2 = ___target;
		NullCheck(L_2);
		Vector3_t10  L_3 = Transform_get_position_m359(L_2, /*hidden argument*/NULL);
		Vector3_t10  L_4 = ___worldUp;
		Transform_LookAt_m356(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m356 (Transform_t32 * __this, Vector3_t10  ___worldPosition, Vector3_t10  ___worldUp, const MethodInfo* method)
{
	{
		Transform_INTERNAL_CALL_LookAt_m4730(NULL /*static, unused*/, __this, (&___worldPosition), (&___worldUp), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m4730 (Object_t * __this /* static, unused */, Transform_t32 * ___self, Vector3_t10 * ___worldPosition, Vector3_t10 * ___worldUp, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_LookAt_m4730_ftn) (Transform_t32 *, Vector3_t10 *, Vector3_t10 *);
	static Transform_INTERNAL_CALL_LookAt_m4730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_LookAt_m4730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___worldPosition, ___worldUp);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t10  Transform_TransformDirection_m1979 (Transform_t32 * __this, Vector3_t10  ___direction, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Transform_INTERNAL_CALL_TransformDirection_m4731(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t10  Transform_INTERNAL_CALL_TransformDirection_m4731 (Object_t * __this /* static, unused */, Transform_t32 * ___self, Vector3_t10 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t10  (*Transform_INTERNAL_CALL_TransformDirection_m4731_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_CALL_TransformDirection_m4731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m4731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t10  Transform_InverseTransformDirection_m1977 (Transform_t32 * __this, Vector3_t10  ___direction, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Transform_INTERNAL_CALL_InverseTransformDirection_m4732(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t10  Transform_INTERNAL_CALL_InverseTransformDirection_m4732 (Object_t * __this /* static, unused */, Transform_t32 * ___self, Vector3_t10 * ___direction, const MethodInfo* method)
{
	typedef Vector3_t10  (*Transform_INTERNAL_CALL_InverseTransformDirection_m4732_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_CALL_InverseTransformDirection_m4732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformDirection_m4732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Transform_TransformPoint_m2052 (Transform_t32 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Transform_INTERNAL_CALL_TransformPoint_m4733(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t10  Transform_INTERNAL_CALL_TransformPoint_m4733 (Object_t * __this /* static, unused */, Transform_t32 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Transform_INTERNAL_CALL_TransformPoint_m4733_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_CALL_TransformPoint_m4733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m4733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(System.Single,System.Single,System.Single)
extern "C" Vector3_t10  Transform_TransformPoint_m2299 (Transform_t32 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		float L_1 = ___y;
		float L_2 = ___z;
		Vector3_t10  L_3 = {0};
		Vector3__ctor_m360(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t10  L_4 = Transform_TransformPoint_m2052(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t10  Transform_InverseTransformPoint_m1950 (Transform_t32 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m4734(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t10  Transform_INTERNAL_CALL_InverseTransformPoint_m4734 (Object_t * __this /* static, unused */, Transform_t32 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef Vector3_t10  (*Transform_INTERNAL_CALL_InverseTransformPoint_m4734_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m4734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m4734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m1947 (Transform_t32 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m1947_ftn) (Transform_t32 *);
	static Transform_get_childCount_m1947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m1947_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m3893 (Transform_t32 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m3893_ftn) (Transform_t32 *);
	static Transform_SetAsFirstSibling_m3893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m3893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" Vector3_t10  Transform_get_lossyScale_m2276 (Transform_t32 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_lossyScale_m4735(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m4735 (Transform_t32 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_lossyScale_m4735_ftn) (Transform_t32 *, Vector3_t10 *);
	static Transform_INTERNAL_get_lossyScale_m4735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_lossyScale_m4735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Transform::get_hasChanged()
extern "C" bool Transform_get_hasChanged_m2308 (Transform_t32 * __this, const MethodInfo* method)
{
	typedef bool (*Transform_get_hasChanged_m2308_ftn) (Transform_t32 *);
	static Transform_get_hasChanged_m2308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_hasChanged_m2308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_hasChanged()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
extern "C" void Transform_set_hasChanged_m2309 (Transform_t32 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_hasChanged_m2309_ftn) (Transform_t32 *, bool);
	static Transform_set_hasChanged_m2309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_hasChanged_m2309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_hasChanged(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern TypeInfo* Enumerator_t724_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m4736 (Transform_t32 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(486);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t724 * L_0 = (Enumerator_t724 *)il2cpp_codegen_object_new (Enumerator_t724_il2cpp_TypeInfo_var);
		Enumerator__ctor_m4709(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t32 * Transform_GetChild_m1948 (Transform_t32 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t32 * (*Transform_GetChild_m1948_ftn) (Transform_t32 *, int32_t);
	static Transform_GetChild_m1948_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m1948_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_time()
extern "C" float Time_get_time_m307 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_time_m307_ftn) ();
	static Time_get_time_m307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m403 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m403_ftn) ();
	static Time_get_deltaTime_m403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m3737 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m3737_ftn) ();
	static Time_get_unscaledTime_m3737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m3737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m3758 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m3758_ftn) ();
	static Time_get_unscaledDeltaTime_m3758_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m3758_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" int32_t Time_get_frameCount_m2294 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Time_get_frameCount_m2294_ftn) ();
	static Time_get_frameCount_m2294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m2294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" float Time_get_realtimeSinceStartup_m429 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_realtimeSinceStartup_m429_ftn) ();
	static Time_get_realtimeSinceStartup_m429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_realtimeSinceStartup_m429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"



// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" float Random_Range_m399 (Object_t * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method)
{
	typedef float (*Random_Range_m399_ftn) (float, float);
	static Random_Range_m399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m2186 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m4737(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m4737 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m4737_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m4737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m4737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m4738 (YieldInstruction_t643 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t643_marshal(const YieldInstruction_t643& unmarshaled, YieldInstruction_t643_marshaled& marshaled)
{
}
void YieldInstruction_t643_marshal_back(const YieldInstruction_t643_marshaled& marshaled, YieldInstruction_t643& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t643_marshal_cleanup(YieldInstruction_t643_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void UnityEngine.PlayerPrefsException::.ctor(System.String)
extern "C" void PlayerPrefsException__ctor_m4739 (PlayerPrefsException_t727 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m5396(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"

// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
extern "C" bool PlayerPrefs_TrySetInt_m4740 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetInt_m4740_ftn) (String_t*, int32_t);
	static PlayerPrefs_TrySetInt_m4740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetInt_m4740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Boolean UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)
extern "C" bool PlayerPrefs_TrySetFloat_m4741 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetFloat_m4741_ftn) (String_t*, float);
	static PlayerPrefs_TrySetFloat_m4741_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetFloat_m4741_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
extern "C" bool PlayerPrefs_TrySetSetString_m4742 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetSetString_m4742_ftn) (String_t*, String_t*);
	static PlayerPrefs_TrySetSetString_m4742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetSetString_m4742_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern TypeInfo* PlayerPrefsException_t727_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral374;
extern "C" void PlayerPrefs_SetInt_m2050 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		_stringLiteral374 = il2cpp_codegen_string_literal_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		int32_t L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetInt_m4740(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t727 * L_3 = (PlayerPrefsException_t727 *)il2cpp_codegen_object_new (PlayerPrefsException_t727_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m4739(L_3, _stringLiteral374, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" int32_t PlayerPrefs_GetInt_m2048 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method)
{
	typedef int32_t (*PlayerPrefs_GetInt_m2048_ftn) (String_t*, int32_t);
	static PlayerPrefs_GetInt_m2048_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetInt_m2048_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
extern TypeInfo* PlayerPrefsException_t727_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral374;
extern "C" void PlayerPrefs_SetFloat_m2180 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		_stringLiteral374 = il2cpp_codegen_string_literal_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		float L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetFloat_m4741(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t727 * L_3 = (PlayerPrefsException_t727 *)il2cpp_codegen_object_new (PlayerPrefsException_t727_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m4739(L_3, _stringLiteral374, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
extern "C" float PlayerPrefs_GetFloat_m2179 (Object_t * __this /* static, unused */, String_t* ___key, float ___defaultValue, const MethodInfo* method)
{
	typedef float (*PlayerPrefs_GetFloat_m2179_ftn) (String_t*, float);
	static PlayerPrefs_GetFloat_m2179_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetFloat_m2179_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern TypeInfo* PlayerPrefsException_t727_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral374;
extern "C" void PlayerPrefs_SetString_m2049 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(487);
		_stringLiteral374 = il2cpp_codegen_string_literal_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		String_t* L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetSetString_m4742(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t727 * L_3 = (PlayerPrefsException_t727 *)il2cpp_codegen_object_new (PlayerPrefsException_t727_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m4739(L_3, _stringLiteral374, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m2104 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m2104_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m2104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m2104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PlayerPrefs_GetString_m2047 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m2104(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" bool PlayerPrefs_HasKey_m2406 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_HasKey_m2406_ftn) (String_t*);
	static PlayerPrefs_HasKey_m2406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_HasKey_m2406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::HasKey(System.String)");
	return _il2cpp_icall_func(___key);
}
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
extern "C" void PlayerPrefs_DeleteKey_m2103 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_DeleteKey_m2103_ftn) (String_t*);
	static PlayerPrefs_DeleteKey_m2103_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_DeleteKey_m2103_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::DeleteKey(System.String)");
	_il2cpp_icall_func(___key);
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t10  Particle_get_position_m4743 (Particle_t729 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m4744 (Particle_t729 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t10  Particle_get_velocity_m4745 (Particle_t729 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m4746 (Particle_t729 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m4747 (Particle_t729 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern "C" void Particle_set_energy_m4748 (Particle_t729 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m4749 (Particle_t729 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m4750 (Particle_t729 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m4751 (Particle_t729 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m4752 (Particle_t729 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m4753 (Particle_t729 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m4754 (Particle_t729 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m4755 (Particle_t729 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m4756 (Particle_t729 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t9  Particle_get_color_m4757 (Particle_t729 * __this, const MethodInfo* method)
{
	{
		Color_t9  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern "C" void Particle_set_color_m4758 (Particle_t729 * __this, Color_t9  ___value, const MethodInfo* method)
{
	{
		Color_t9  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m4759 (Object_t * __this /* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, RaycastHit_t249 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		RaycastHit_t249 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m4760(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m4760 (Object_t * __this /* static, unused */, Vector3_t10 * ___origin, Vector3_t10 * ___direction, RaycastHit_t249 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m4760_ftn) (Vector3_t10 *, Vector3_t10 *, RaycastHit_t249 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m4760_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m4760_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m4761 (Object_t * __this /* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, RaycastHit_t249 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = ___origin;
		Vector3_t10  L_1 = ___direction;
		RaycastHit_t249 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m4759(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m2369 (Object_t * __this /* static, unused */, Ray_t326  ___ray, RaycastHit_t249 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Ray_get_origin_m3741((&___ray), /*hidden argument*/NULL);
		Vector3_t10  L_1 = Ray_get_direction_m3742((&___ray), /*hidden argument*/NULL);
		RaycastHit_t249 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m4761(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t365* Physics_RaycastAll_m2371 (Object_t * __this /* static, unused */, Ray_t326  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = Ray_get_origin_m3741((&___ray), /*hidden argument*/NULL);
		Vector3_t10  L_1 = Ray_get_direction_m3742((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t365* L_4 = Physics_RaycastAll_m4762(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t365* Physics_RaycastAll_m4762 (Object_t * __this /* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t365* L_2 = Physics_INTERNAL_CALL_RaycastAll_m4763(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t365* Physics_INTERNAL_CALL_RaycastAll_m4763 (Object_t * __this /* static, unused */, Vector3_t10 * ___origin, Vector3_t10 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t365* (*Physics_INTERNAL_CALL_RaycastAll_m4763_ftn) (Vector3_t10 *, Vector3_t10 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m4763_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m4763_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"



// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C" void Rigidbody_set_useGravity_m2437 (Rigidbody_t52 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_set_useGravity_m2437_ftn) (Rigidbody_t52 *, bool);
	static Rigidbody_set_useGravity_m2437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_useGravity_m2437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" void Rigidbody_set_isKinematic_m2436 (Rigidbody_t52 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody_set_isKinematic_m2436_ftn) (Rigidbody_t52 *, bool);
	static Rigidbody_set_isKinematic_m2436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m2436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" void Rigidbody_MovePosition_m393 (Rigidbody_t52 * __this, Vector3_t10  ___position, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_CALL_MovePosition_m4764(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_CALL_MovePosition_m4764 (Object_t * __this /* static, unused */, Rigidbody_t52 * ___self, Vector3_t10 * ___position, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_MovePosition_m4764_ftn) (Rigidbody_t52 *, Vector3_t10 *);
	static Rigidbody_INTERNAL_CALL_MovePosition_m4764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_MovePosition_m4764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___position);
}
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" void Rigidbody_MoveRotation_m397 (Rigidbody_t52 * __this, Quaternion_t60  ___rot, const MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_CALL_MoveRotation_m4765(NULL /*static, unused*/, __this, (&___rot), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)
extern "C" void Rigidbody_INTERNAL_CALL_MoveRotation_m4765 (Object_t * __this /* static, unused */, Rigidbody_t52 * ___self, Quaternion_t60 * ___rot, const MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_MoveRotation_m4765_ftn) (Rigidbody_t52 *, Quaternion_t60 *);
	static Rigidbody_INTERNAL_CALL_MoveRotation_m4765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_MoveRotation_m4765_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_MoveRotation(UnityEngine.Rigidbody,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___self, ___rot);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"



// System.Boolean UnityEngine.Collider::get_enabled()
extern "C" bool Collider_get_enabled_m1928 (Collider_t100 * __this, const MethodInfo* method)
{
	typedef bool (*Collider_get_enabled_m1928_ftn) (Collider_t100 *);
	static Collider_get_enabled_m1928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_enabled_m1928_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m1929 (Collider_t100 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Collider_set_enabled_m1929_ftn) (Collider_t100 *, bool);
	static Collider_set_enabled_m1929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_enabled_m1929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C" void Collider_set_isTrigger_m2189 (Collider_t100 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Collider_set_isTrigger_m2189_ftn) (Collider_t100 *, bool);
	static Collider_set_isTrigger_m2189_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_isTrigger_m2189_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_isTrigger(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxCollider.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
extern "C" Vector3_t10  BoxCollider_get_center_m2039 (BoxCollider_t323 * __this, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		BoxCollider_INTERNAL_get_center_m4766(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
extern "C" void BoxCollider_set_center_m2040 (BoxCollider_t323 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		BoxCollider_INTERNAL_set_center_m4767(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.BoxCollider::INTERNAL_get_center(UnityEngine.Vector3&)
extern "C" void BoxCollider_INTERNAL_get_center_m4766 (BoxCollider_t323 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_get_center_m4766_ftn) (BoxCollider_t323 *, Vector3_t10 *);
	static BoxCollider_INTERNAL_get_center_m4766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_get_center_m4766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_get_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.BoxCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C" void BoxCollider_INTERNAL_set_center_m4767 (BoxCollider_t323 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_set_center_m4767_ftn) (BoxCollider_t323 *, Vector3_t10 *);
	static BoxCollider_INTERNAL_set_center_m4767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_set_center_m4767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
extern "C" void BoxCollider_set_size_m2041 (BoxCollider_t323 * __this, Vector3_t10  ___value, const MethodInfo* method)
{
	{
		BoxCollider_INTERNAL_set_size_m4768(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.BoxCollider::INTERNAL_set_size(UnityEngine.Vector3&)
extern "C" void BoxCollider_INTERNAL_set_size_m4768 (BoxCollider_t323 * __this, Vector3_t10 * ___value, const MethodInfo* method)
{
	typedef void (*BoxCollider_INTERNAL_set_size_m4768_ftn) (BoxCollider_t323 *, Vector3_t10 *);
	static BoxCollider_INTERNAL_set_size_m4768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_INTERNAL_set_size_m4768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::INTERNAL_set_size(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t10  RaycastHit_get_point_m1972 (RaycastHit_t249 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t10  RaycastHit_get_normal_m3753 (RaycastHit_t249 * __this, const MethodInfo* method)
{
	{
		Vector3_t10  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m3752 (RaycastHit_t249 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t100 * RaycastHit_get_collider_m2370 (RaycastHit_t249 * __this, const MethodInfo* method)
{
	{
		Collider_t100 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"


// System.Void UnityEngine.Physics2D::.cctor()
extern TypeInfo* List_1_t731_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t595_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5397_MethodInfo_var;
extern "C" void Physics2D__cctor_m4769 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(489);
		Physics2D_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		List_1__ctor_m5397_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484213);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t731 * L_0 = (List_1_t731 *)il2cpp_codegen_object_new (List_1_t731_il2cpp_TypeInfo_var);
		List_1__ctor_m5397(L_0, /*hidden argument*/List_1__ctor_m5397_MethodInfo_var);
		((Physics2D_t595_StaticFields*)Physics2D_t595_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern TypeInfo* Physics2D_t595_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m4770 (Object_t * __this /* static, unused */, Vector2_t27  ___origin, Vector2_t27  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t596 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t596 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t595_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m4771(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m4771 (Object_t * __this /* static, unused */, Vector2_t27 * ___origin, Vector2_t27 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t596 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m4771_ftn) (Vector2_t27 *, Vector2_t27 *, float, int32_t, float, float, RaycastHit2D_t596 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m4771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m4771_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t595_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t596  Physics2D_Raycast_m3810 (Object_t * __this /* static, unused */, Vector2_t27  ___origin, Vector2_t27  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t27  L_0 = ___origin;
		Vector2_t27  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t595_il2cpp_TypeInfo_var);
		RaycastHit2D_t596  L_6 = Physics2D_Raycast_m4772(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t595_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t596  Physics2D_Raycast_m4772 (Object_t * __this /* static, unused */, Vector2_t27  ___origin, Vector2_t27  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t596  V_0 = {0};
	{
		Vector2_t27  L_0 = ___origin;
		Vector2_t27  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t595_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m4770(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t596  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t595_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t594* Physics2D_RaycastAll_m3743 (Object_t * __this /* static, unused */, Vector2_t27  ___origin, Vector2_t27  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t595_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t594* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m4773(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t594* Physics2D_INTERNAL_CALL_RaycastAll_m4773 (Object_t * __this /* static, unused */, Vector2_t27 * ___origin, Vector2_t27 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t594* (*Physics2D_INTERNAL_CALL_RaycastAll_m4773_ftn) (Vector2_t27 *, Vector2_t27 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m4773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m4773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t27  RaycastHit2D_get_point_m3746 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	{
		Vector2_t27  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t27  RaycastHit2D_get_normal_m3747 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	{
		Vector2_t27  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m3811 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t597 * RaycastHit2D_get_collider_m3744 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	{
		Collider2D_t597 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t732 * RaycastHit2D_get_rigidbody_m4774 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	Rigidbody2D_t732 * G_B3_0 = {0};
	{
		Collider2D_t597 * L_0 = RaycastHit2D_get_collider_m3744(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m409(NULL /*static, unused*/, L_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t597 * L_2 = RaycastHit2D_get_collider_m3744(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t732 * L_3 = Collider2D_get_attachedRigidbody_m4775(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t732 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t32 * RaycastHit2D_get_transform_m3745 (RaycastHit2D_t596 * __this, const MethodInfo* method)
{
	Rigidbody2D_t732 * V_0 = {0};
	{
		Rigidbody2D_t732 * L_0 = RaycastHit2D_get_rigidbody_m4774(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t732 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m409(NULL /*static, unused*/, L_1, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t732 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t32 * L_4 = Component_get_transform_m428(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t597 * L_5 = RaycastHit2D_get_collider_m3744(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m409(NULL /*static, unused*/, L_5, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t597 * L_7 = RaycastHit2D_get_collider_m3744(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t32 * L_8 = Component_get_transform_m428(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t32 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t732 * Collider2D_get_attachedRigidbody_m4775 (Collider2D_t597 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t732 * (*Collider2D_get_attachedRigidbody_m4775_ftn) (Collider2D_t597 *);
	static Collider2D_get_attachedRigidbody_m4775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m4775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2DMethodDeclarations.h"



// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"



// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AudioConfigurationChangeHandler__ctor_m4776 (AudioConfigurationChangeHandler_t735 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" void AudioConfigurationChangeHandler_Invoke_m4777 (AudioConfigurationChangeHandler_t735 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m4777((AudioConfigurationChangeHandler_t735 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t735(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t55_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m4778 (AudioConfigurationChangeHandler_t735 * __this, bool ___deviceWasChanged, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t55_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m4779 (AudioConfigurationChangeHandler_t735 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern TypeInfo* AudioSettings_t736_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m4780 (AudioSettings_t736 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t735 * L_0 = ((AudioSettings_t736_StaticFields*)AudioSettings_t736_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t735 * L_1 = ((AudioSettings_t736_StaticFields*)AudioSettings_t736_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		AudioConfigurationChangeHandler_Invoke_m4777(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m4781 (PCMReaderCallback_t737 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m4782 (PCMReaderCallback_t737 * __this, SingleU5BU5D_t29* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m4782((PCMReaderCallback_t737 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t29* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t29* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t737(Il2CppObject* delegate, SingleU5BU5D_t29* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m4783 (PCMReaderCallback_t737 * __this, SingleU5BU5D_t29* ___data, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m4784 (PCMReaderCallback_t737 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMSetPositionCallback__ctor_m4785 (PCMSetPositionCallback_t738 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m4786 (PCMSetPositionCallback_t738 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m4786((PCMSetPositionCallback_t738 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t738(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m4787 (PCMSetPositionCallback_t738 * __this, int32_t ___position, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t39_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m4788 (PCMSetPositionCallback_t738 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"



// System.Single UnityEngine.AudioClip::get_length()
extern "C" float AudioClip_get_length_m377 (AudioClip_t34 * __this, const MethodInfo* method)
{
	typedef float (*AudioClip_get_length_m377_ftn) (AudioClip_t34 *);
	static AudioClip_get_length_m377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m4789 (AudioClip_t34 * __this, SingleU5BU5D_t29* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t737 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t737 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t29* L_2 = ___data;
		NullCheck(L_1);
		PCMReaderCallback_Invoke_m4782(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m4790 (AudioClip_t34 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t738 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t738 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		PCMSetPositionCallback_Invoke_m4786(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.AudioListener
#include "UnityEngine_UnityEngine_AudioListener.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioListener
#include "UnityEngine_UnityEngine_AudioListenerMethodDeclarations.h"



// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"



// System.Single UnityEngine.AudioSource::get_volume()
extern "C" float AudioSource_get_volume_m348 (AudioSource_t25 * __this, const MethodInfo* method)
{
	typedef float (*AudioSource_get_volume_m348_ftn) (AudioSource_t25 *);
	static AudioSource_get_volume_m348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_volume_m348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_volume()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m350 (AudioSource_t25 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_volume_m350_ftn) (AudioSource_t25 *, float);
	static AudioSource_set_volume_m350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m350_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.AudioSource::get_pitch()
extern "C" float AudioSource_get_pitch_m349 (AudioSource_t25 * __this, const MethodInfo* method)
{
	typedef float (*AudioSource_get_pitch_m349_ftn) (AudioSource_t25 *);
	static AudioSource_get_pitch_m349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_pitch_m349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_pitch()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" void AudioSource_set_pitch_m351 (AudioSource_t25 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_pitch_m351_ftn) (AudioSource_t25 *, float);
	static AudioSource_set_pitch_m351_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_pitch_m351_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_pitch(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" AudioClip_t34 * AudioSource_get_clip_m376 (AudioSource_t25 * __this, const MethodInfo* method)
{
	typedef AudioClip_t34 * (*AudioSource_get_clip_m376_ftn) (AudioSource_t25 *);
	static AudioSource_get_clip_m376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_m376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m375 (AudioSource_t25 * __this, AudioClip_t34 * ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_clip_m375_ftn) (AudioSource_t25 *, AudioClip_t34 *);
	static AudioSource_set_clip_m375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m2183 (AudioSource_t25 * __this, AudioClip_t34 * ___clip, float ___volumeScale, const MethodInfo* method)
{
	typedef void (*AudioSource_PlayOneShot_m2183_ftn) (AudioSource_t25 *, AudioClip_t34 *, float);
	static AudioSource_PlayOneShot_m2183_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShot_m2183_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip, ___volumeScale);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m401 (AudioSource_t25 * __this, AudioClip_t34 * ___clip, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t34 * L_0 = ___clip;
		float L_1 = V_0;
		AudioSource_PlayOneShot_m2183(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C" void AudioSource_set_playOnAwake_m374 (AudioSource_t25 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_playOnAwake_m374_ftn) (AudioSource_t25 *, bool);
	static AudioSource_set_playOnAwake_m374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_m374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m4791 (WebCamDevice_t739 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m4792 (WebCamDevice_t739 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t739_marshal(const WebCamDevice_t739& unmarshaled, WebCamDevice_t739_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t739_marshal_back(const WebCamDevice_t739_marshaled& marshaled, WebCamDevice_t739& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t739_marshal_cleanup(WebCamDevice_t739_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Void UnityEngine.AnimationEvent::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m4793 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t62 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t337 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m4794 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" void AnimationEvent_set_data_m4795 (AnimationEvent_t741 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m4796 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m4797 (AnimationEvent_t741 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m4798 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" void AnimationEvent_set_floatParameter_m4799 (AnimationEvent_t741 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m4800 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" void AnimationEvent_set_intParameter_m4801 (AnimationEvent_t741 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t62 * AnimationEvent_get_objectReferenceParameter_m4802 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		Object_t62 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" void AnimationEvent_set_objectReferenceParameter_m4803 (AnimationEvent_t741 * __this, Object_t62 * ___value, const MethodInfo* method)
{
	{
		Object_t62 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m4804 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m4805 (AnimationEvent_t741 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m4806 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m4807 (AnimationEvent_t741 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m4808 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" void AnimationEvent_set_messageOptions_m4809 (AnimationEvent_t741 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m4810 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m4811 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern Il2CppCodeGenString* _stringLiteral375;
extern "C" AnimationState_t337 * AnimationEvent_get_animationState_m4812 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral375 = il2cpp_codegen_string_literal_from_index(375);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m4810(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m336(NULL /*static, unused*/, _stringLiteral375, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t337 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern Il2CppCodeGenString* _stringLiteral376;
extern "C" AnimatorStateInfo_t742  AnimationEvent_get_animatorStateInfo_m4813 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral376 = il2cpp_codegen_string_literal_from_index(376);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m4811(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m336(NULL /*static, unused*/, _stringLiteral376, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t742  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern Il2CppCodeGenString* _stringLiteral377;
extern "C" AnimatorClipInfo_t743  AnimationEvent_get_animatorClipInfo_m4814 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral377 = il2cpp_codegen_string_literal_from_index(377);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m4811(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m336(NULL /*static, unused*/, _stringLiteral377, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t743  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C" int32_t AnimationEvent_GetHash_m4815 (AnimationEvent_t741 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m4804(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m2091(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m4806(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m5357((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Keyframe__ctor_m2333 (Keyframe_t358 * __this, float ___time, float ___value, float ___inTangent, float ___outTangent, const MethodInfo* method)
{
	{
		float L_0 = ___time;
		__this->___m_Time_0 = L_0;
		float L_1 = ___value;
		__this->___m_Value_1 = L_1;
		float L_2 = ___inTangent;
		__this->___m_InTangent_2 = L_2;
		float L_3 = ___outTangent;
		__this->___m_OutTangent_3 = L_3;
		return;
	}
}
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"



// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2334 (AnimationCurve_t234 * __this, KeyframeU5BU5D_t357* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t357* L_0 = ___keys;
		AnimationCurve_Init_m4819(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m4816 (AnimationCurve_t234 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m4819(__this, (KeyframeU5BU5D_t357*)(KeyframeU5BU5D_t357*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m4817 (AnimationCurve_t234 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m4817_ftn) (AnimationCurve_t234 *);
	static AnimationCurve_Cleanup_m4817_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m4817_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m4818 (AnimationCurve_t234 * __this, const MethodInfo* method)
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
		AnimationCurve_Cleanup_m4817(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5346(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m2335 (AnimationCurve_t234 * __this, float ___time, const MethodInfo* method)
{
	typedef float (*AnimationCurve_Evaluate_m2335_ftn) (AnimationCurve_t234 *, float);
	static AnimationCurve_Evaluate_m2335_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Evaluate_m2335_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Evaluate(System.Single)");
	return _il2cpp_icall_func(__this, ___time);
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m4819 (AnimationCurve_t234 * __this, KeyframeU5BU5D_t357* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m4819_ftn) (AnimationCurve_t234 *, KeyframeU5BU5D_t357*);
	static AnimationCurve_Init_m4819_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m4819_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t234_marshal(const AnimationCurve_t234& unmarshaled, AnimationCurve_t234_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = reinterpret_cast<intptr_t>((unmarshaled.___m_Ptr_0).___m_value_0);
}
void AnimationCurve_t234_marshal_back(const AnimationCurve_t234_marshaled& marshaled, AnimationCurve_t234& unmarshaled)
{
	(unmarshaled.___m_Ptr_0).___m_value_0 = reinterpret_cast<void*>(marshaled.___m_Ptr_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t234_marshal_cleanup(AnimationCurve_t234_marshaled& marshaled)
{
}
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayModeMethodDeclarations.h"



// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Animation/Enumerator
#include "UnityEngine_UnityEngine_Animation_EnumeratorMethodDeclarations.h"

// UnityEngine.Animation
#include "UnityEngine_UnityEngine_Animation.h"
// UnityEngine.Animation
#include "UnityEngine_UnityEngine_AnimationMethodDeclarations.h"


// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" void Enumerator__ctor_m4820 (Enumerator_t745 * __this, Animation_t121 * ___outer, const MethodInfo* method)
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		Animation_t121 * L_0 = ___outer;
		__this->___m_Outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m4821 (Enumerator_t745 * __this, const MethodInfo* method)
{
	{
		Animation_t121 * L_0 = (__this->___m_Outer_0);
		int32_t L_1 = (__this->___m_CurrentIndex_1);
		NullCheck(L_0);
		AnimationState_t337 * L_2 = Animation_GetStateAtIndex_m4827(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m4822 (Enumerator_t745 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Animation_t121 * L_0 = (__this->___m_Outer_0);
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m4828(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___m_CurrentIndex_1);
		__this->___m_CurrentIndex_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = (__this->___m_CurrentIndex_1);
		int32_t L_4 = V_0;
		return ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Animation::Sample()
extern "C" void Animation_Sample_m2076 (Animation_t121 * __this, const MethodInfo* method)
{
	{
		Animation_INTERNAL_CALL_Sample_m4823(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C" void Animation_INTERNAL_CALL_Sample_m4823 (Object_t * __this /* static, unused */, Animation_t121 * ___self, const MethodInfo* method)
{
	typedef void (*Animation_INTERNAL_CALL_Sample_m4823_ftn) (Animation_t121 *);
	static Animation_INTERNAL_CALL_Sample_m4823_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_Sample_m4823_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)");
	_il2cpp_icall_func(___self);
}
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C" bool Animation_get_isPlaying_m2077 (Animation_t121 * __this, const MethodInfo* method)
{
	typedef bool (*Animation_get_isPlaying_m2077_ftn) (Animation_t121 *);
	static Animation_get_isPlaying_m2077_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_isPlaying_m2077_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
extern "C" bool Animation_IsPlaying_m2071 (Animation_t121 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef bool (*Animation_IsPlaying_m2071_ftn) (Animation_t121 *, String_t*);
	static Animation_IsPlaying_m2071_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_IsPlaying_m2071_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::IsPlaying(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m2078 (Animation_t121 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = Animation_Play_m4824(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m4824 (Animation_t121 * __this, int32_t ___mode, const MethodInfo* method)
{
	{
		int32_t L_0 = ___mode;
		bool L_1 = Animation_PlayDefaultAnimation_m4826(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" bool Animation_Play_m4825 (Animation_t121 * __this, String_t* ___animation, int32_t ___mode, const MethodInfo* method)
{
	typedef bool (*Animation_Play_m4825_ftn) (Animation_t121 *, String_t*, int32_t);
	static Animation_Play_m4825_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Play_m4825_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)");
	return _il2cpp_icall_func(__this, ___animation, ___mode);
}
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" bool Animation_Play_m2079 (Animation_t121 * __this, String_t* ___animation, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		String_t* L_0 = ___animation;
		int32_t L_1 = V_0;
		bool L_2 = Animation_Play_m4825(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m4826 (Animation_t121 * __this, int32_t ___mode, const MethodInfo* method)
{
	typedef bool (*Animation_PlayDefaultAnimation_m4826_ftn) (Animation_t121 *, int32_t);
	static Animation_PlayDefaultAnimation_m4826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_m4826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	return _il2cpp_icall_func(__this, ___mode);
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern TypeInfo* Enumerator_t745_il2cpp_TypeInfo_var;
extern "C" Object_t * Animation_GetEnumerator_m2069 (Animation_t121 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t745 * L_0 = (Enumerator_t745 *)il2cpp_codegen_object_new (Enumerator_t745_il2cpp_TypeInfo_var);
		Enumerator__ctor_m4820(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t337 * Animation_GetStateAtIndex_m4827 (Animation_t121 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef AnimationState_t337 * (*Animation_GetStateAtIndex_m4827_ftn) (Animation_t121 *, int32_t);
	static Animation_GetStateAtIndex_m4827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_m4827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m4828 (Animation_t121 * __this, const MethodInfo* method)
{
	typedef int32_t (*Animation_GetStateCount_m4828_ftn) (Animation_t121 *);
	static Animation_GetStateCount_m4828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m4828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



// System.Single UnityEngine.AnimationState::get_time()
extern "C" float AnimationState_get_time_m2072 (AnimationState_t337 * __this, const MethodInfo* method)
{
	typedef float (*AnimationState_get_time_m2072_ftn) (AnimationState_t337 *);
	static AnimationState_get_time_m2072_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_time_m2072_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_time()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationState::set_time(System.Single)
extern "C" void AnimationState_set_time_m2074 (AnimationState_t337 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_time_m2074_ftn) (AnimationState_t337 *, float);
	static AnimationState_set_time_m2074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_time_m2074_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.AnimationState::get_speed()
extern "C" float AnimationState_get_speed_m2075 (AnimationState_t337 * __this, const MethodInfo* method)
{
	typedef float (*AnimationState_get_speed_m2075_ftn) (AnimationState_t337 *);
	static AnimationState_get_speed_m2075_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_speed_m2075_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_speed()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
extern "C" void AnimationState_set_speed_m2080 (AnimationState_t337 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*AnimationState_set_speed_m2080_ftn) (AnimationState_t337 *, float);
	static AnimationState_set_speed_m2080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_speed_m2080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.AnimationState::get_length()
extern "C" float AnimationState_get_length_m2073 (AnimationState_t337 * __this, const MethodInfo* method)
{
	typedef float (*AnimationState_get_length_m2073_ftn) (AnimationState_t337 *);
	static AnimationState_get_length_m2073_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_length_m2073_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_length()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.AnimationState::get_name()
extern "C" String_t* AnimationState_get_name_m2070 (AnimationState_t337 * __this, const MethodInfo* method)
{
	typedef String_t* (*AnimationState_get_name_m2070_ftn) (AnimationState_t337 *);
	static AnimationState_get_name_m2070_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_name_m2070_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_name()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C" bool AnimatorStateInfo_IsName_m4829 (AnimatorStateInfo_t742 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m4849(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m4830 (AnimatorStateInfo_t742 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m4831 (AnimatorStateInfo_t742 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m4832 (AnimatorStateInfo_t742 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m4833 (AnimatorStateInfo_t742 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m4834 (AnimatorStateInfo_t742 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m4835 (AnimatorStateInfo_t742 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m4836 (AnimatorStateInfo_t742 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m4849(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m4837 (AnimatorStateInfo_t742 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m4838 (AnimatorTransitionInfo_t747 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m4849(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m4849(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m4839 (AnimatorTransitionInfo_t747 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m4849(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m4840 (AnimatorTransitionInfo_t747 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m4841 (AnimatorTransitionInfo_t747 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m4842 (AnimatorTransitionInfo_t747 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m4843 (AnimatorTransitionInfo_t747 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m4844 (AnimatorTransitionInfo_t747 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m4845 (AnimatorTransitionInfo_t747 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m4846 (AnimatorTransitionInfo_t747 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t747_marshal(const AnimatorTransitionInfo_t747& unmarshaled, AnimatorTransitionInfo_t747_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t747_marshal_back(const AnimatorTransitionInfo_t747_marshaled& marshaled, AnimatorTransitionInfo_t747& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t747_marshal_cleanup(AnimatorTransitionInfo_t747_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"


// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m3948 (Animator_t304 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m4850(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m3947 (Animator_t304 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m4851(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" void Animator_Play_m2468 (Animator_t304 * __this, String_t* ___stateName, const MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m4847(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" void Animator_Play_m4847 (Animator_t304 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	{
		String_t* L_0 = ___stateName;
		int32_t L_1 = Animator_StringToHash_m4849(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer;
		float L_3 = ___normalizedTime;
		Animator_Play_m4848(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" void Animator_Play_m4848 (Animator_t304 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method)
{
	typedef void (*Animator_Play_m4848_ftn) (Animator_t304 *, int32_t, int32_t, float);
	static Animator_Play_m4848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m4848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash, ___layer, ___normalizedTime);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t620 * Animator_get_runtimeAnimatorController_m3946 (Animator_t304 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t620 * (*Animator_get_runtimeAnimatorController_m3946_ftn) (Animator_t304 *);
	static Animator_get_runtimeAnimatorController_m3946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m3946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m4849 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m4849_ftn) (String_t*);
	static Animator_StringToHash_m4849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m4849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m4850 (Animator_t304 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m4850_ftn) (Animator_t304 *, String_t*);
	static Animator_SetTriggerString_m4850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m4850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m4851 (Animator_t304 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m4851_ftn) (Animator_t304 *, String_t*);
	static Animator_ResetTriggerString_m4851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m4851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t748_marshal(const SkeletonBone_t748& unmarshaled, SkeletonBone_t748_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t748_marshal_back(const SkeletonBone_t748_marshaled& marshaled, SkeletonBone_t748& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t748_marshal_cleanup(SkeletonBone_t748_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m4852 (HumanBone_t750 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m4853 (HumanBone_t750 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m4854 (HumanBone_t750 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m4855 (HumanBone_t750 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t750_marshal(const HumanBone_t750& unmarshaled, HumanBone_t750_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t750_marshal_back(const HumanBone_t750_marshaled& marshaled, HumanBone_t750& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t750_marshal_cleanup(HumanBone_t750_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.TextAlignment
#include "UnityEngine_UnityEngine_TextAlignment.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAlignment
#include "UnityEngine_UnityEngine_TextAlignmentMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUIText.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUIText
#include "UnityEngine_UnityEngine_GUITextMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"


// UnityEngine.Material UnityEngine.GUIText::get_material()
extern "C" Material_t57 * GUIText_get_material_m341 (GUIText_t48 * __this, const MethodInfo* method)
{
	typedef Material_t57 * (*GUIText_get_material_m341_ftn) (GUIText_t48 *);
	static GUIText_get_material_m341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GUIText_get_material_m341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::get_material()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m4856 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m4857 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m386(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m4858 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m388(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m4859 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m4860 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t31 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m384(L_1, /*hidden argument*/NULL);
		Rect_t31 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m388(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m4861 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t31 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m384(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m4862 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m4863 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t31 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m386(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t27  CharacterInfo_get_uvBottomLeftUnFlipped_m4864 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t31 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m384(L_2, /*hidden argument*/NULL);
		Vector2_t27  L_4 = {0};
		Vector2__ctor_m373(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t27  CharacterInfo_get_uvBottomRightUnFlipped_m4865 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t31 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m386(L_2, /*hidden argument*/NULL);
		Rect_t31 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m384(L_4, /*hidden argument*/NULL);
		Vector2_t27  L_6 = {0};
		Vector2__ctor_m373(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t27  CharacterInfo_get_uvTopRightUnFlipped_m4866 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t31 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m386(L_2, /*hidden argument*/NULL);
		Rect_t31 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m384(L_4, /*hidden argument*/NULL);
		Rect_t31 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m388(L_6, /*hidden argument*/NULL);
		Vector2_t27  L_8 = {0};
		Vector2__ctor_m373(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t27  CharacterInfo_get_uvTopLeftUnFlipped_m4867 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	{
		Rect_t31 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m382(L_0, /*hidden argument*/NULL);
		Rect_t31 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m384(L_2, /*hidden argument*/NULL);
		Rect_t31 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m388(L_4, /*hidden argument*/NULL);
		Vector2_t27  L_6 = {0};
		Vector2__ctor_m373(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t27  CharacterInfo_get_uvBottomLeft_m4868 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	Vector2_t27  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t27  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m4864(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t27  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m4864(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t27  CharacterInfo_get_uvBottomRight_m4869 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	Vector2_t27  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t27  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m4867(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t27  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m4865(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t27  CharacterInfo_get_uvTopRight_m4870 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	Vector2_t27  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t27  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m4866(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t27  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m4866(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t27  CharacterInfo_get_uvTopLeft_m4871 (CharacterInfo_t182 * __this, const MethodInfo* method)
{
	Vector2_t27  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t27  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m4865(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t27  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m4867(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t182_marshal(const CharacterInfo_t182& unmarshaled, CharacterInfo_t182_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t182_marshal_back(const CharacterInfo_t182_marshaled& marshaled, CharacterInfo_t182& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t182_marshal_cleanup(CharacterInfo_t182_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FontTextureRebuildCallback__ctor_m2418 (FontTextureRebuildCallback_t369 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m4872 (FontTextureRebuildCallback_t369 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m4872((FontTextureRebuildCallback_t369 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t369(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m4873 (FontTextureRebuildCallback_t369 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m4874 (FontTextureRebuildCallback_t369 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t131_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t600_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m3773 (Object_t * __this /* static, unused */, Action_1_t600 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Action_1_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t600 * L_0 = ((Font_t131_StaticFields*)Font_t131_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t600 * L_1 = ___value;
		Delegate_t333 * L_2 = Delegate_Combine_m2051(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t131_StaticFields*)Font_t131_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t600 *)Castclass(L_2, Action_1_t600_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t131_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t600_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m4875 (Object_t * __this /* static, unused */, Action_1_t600 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Action_1_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(304);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t600 * L_0 = ((Font_t131_StaticFields*)Font_t131_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t600 * L_1 = ___value;
		Delegate_t333 * L_2 = Delegate_Remove_m2056(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t131_StaticFields*)Font_t131_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t600 *)Castclass(L_2, Action_1_t600_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t57 * Font_get_material_m2397 (Font_t131 * __this, const MethodInfo* method)
{
	typedef Material_t57 * (*Font_get_material_m2397_ftn) (Font_t131 *);
	static Font_get_material_m2397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m3881 (Font_t131 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m3881_ftn) (Font_t131 *, uint16_t);
	static Font_HasCharacter_m3881_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m3881_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t284* Font_get_fontNames_m2399 (Font_t131 * __this, const MethodInfo* method)
{
	typedef StringU5BU5D_t284* (*Font_get_fontNames_m2399_ftn) (Font_t131 *);
	static Font_get_fontNames_m2399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontNames_m2399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontNames()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C" void Font_RequestCharactersInTexture_m2139 (Font_t131 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef void (*Font_RequestCharactersInTexture_m2139_ftn) (Font_t131 *, String_t*, int32_t, int32_t);
	static Font_RequestCharactersInTexture_m2139_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_RequestCharactersInTexture_m2139_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___characters, ___size, ___style);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern TypeInfo* Font_t131_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1_Invoke_m5398_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m4876 (Object_t * __this /* static, unused */, Font_t131 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		Action_1_Invoke_m5398_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484214);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t600 * V_0 = {0};
	{
		Action_1_t600 * L_0 = ((Font_t131_StaticFields*)Font_t131_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t600 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t600 * L_2 = V_0;
		Font_t131 * L_3 = ___font;
		NullCheck(L_2);
		Action_1_Invoke_m5398(L_2, L_3, /*hidden argument*/Action_1_Invoke_m5398_MethodInfo_var);
	}

IL_0013:
	{
		Font_t131 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t369 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t131 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t369 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m4872(L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t369 * Font_get_textureRebuildCallback_m2417 (Font_t131 * __this, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t369 * L_0 = (__this->___m_FontTextureRebuildCallback_3);
		return L_0;
	}
}
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m2419 (Font_t131 * __this, FontTextureRebuildCallback_t369 * ___value, const MethodInfo* method)
{
	{
		FontTextureRebuildCallback_t369 * L_0 = ___value;
		__this->___m_FontTextureRebuildCallback_3 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m2140 (Font_t131 * __this, uint16_t ___ch, CharacterInfo_t182 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method)
{
	typedef bool (*Font_GetCharacterInfo_m2140_ftn) (Font_t131 *, uint16_t, CharacterInfo_t182 *, int32_t, int32_t);
	static Font_GetCharacterInfo_m2140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetCharacterInfo_m2140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)");
	return _il2cpp_icall_func(__this, ___ch, ___info, ___size, ___style);
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m3957 (Font_t131 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m3957_ftn) (Font_t131 *);
	static Font_get_dynamic_m3957_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m3957_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m3959 (Font_t131 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m3959_ftn) (Font_t131 *);
	static Font_get_fontSize_m3959_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m3959_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_21.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_34.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_35.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_21MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_34MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_35MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"


// System.Void UnityEngine.TextGenerator::.ctor()
extern "C" void TextGenerator__ctor_m3870 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m3954(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t487_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t754_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t755_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m5399_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m5400_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m5401_MethodInfo_var;
extern "C" void TextGenerator__ctor_m3954 (TextGenerator_t486 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(307);
		List_1_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(492);
		List_1_t755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(493);
		List_1__ctor_m5399_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484215);
		List_1__ctor_m5400_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484216);
		List_1__ctor_m5401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484217);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t487 * L_1 = (List_1_t487 *)il2cpp_codegen_object_new (List_1_t487_il2cpp_TypeInfo_var);
		List_1__ctor_m5399(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m5399_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t754 * L_3 = (List_1_t754 *)il2cpp_codegen_object_new (List_1_t754_il2cpp_TypeInfo_var);
		List_1__ctor_m5400(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m5400_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t755 * L_4 = (List_1_t755 *)il2cpp_codegen_object_new (List_1_t755_il2cpp_TypeInfo_var);
		List_1__ctor_m5401(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m5401_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m4878(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m4877 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m4879(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m4878 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m4878_ftn) (TextGenerator_t486 *);
	static TextGenerator_Init_m4878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m4878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m4879 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m4879_ftn) (TextGenerator_t486 *);
	static TextGenerator_Dispose_cpp_m4879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m4879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m4880 (TextGenerator_t486 * __this, String_t* ___str, Font_t131 * ___font, Color_t9  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t27  ___extents, Vector2_t27  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t131 * L_1 = ___font;
		Color_t9  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m4881(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m4881 (TextGenerator_t486 * __this, String_t* ___str, Font_t131 * ___font, Color_t9  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t131 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4882(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4882 (Object_t * __this /* static, unused */, TextGenerator_t486 * ___self, String_t* ___str, Font_t131 * ___font, Color_t9 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4882_ftn) (TextGenerator_t486 *, String_t*, Font_t131 *, Color_t9 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m4882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t31  TextGenerator_get_rectExtents_m3891 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	Rect_t31  V_0 = {0};
	{
		TextGenerator_INTERNAL_get_rectExtents_m4883(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t31  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C" void TextGenerator_INTERNAL_get_rectExtents_m4883 (TextGenerator_t486 * __this, Rect_t31 * ___value, const MethodInfo* method)
{
	typedef void (*TextGenerator_INTERNAL_get_rectExtents_m4883_ftn) (TextGenerator_t486 *, Rect_t31 *);
	static TextGenerator_INTERNAL_get_rectExtents_m4883_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_get_rectExtents_m4883_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m4884 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m4884_ftn) (TextGenerator_t486 *);
	static TextGenerator_get_vertexCount_m4884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m4884_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m4885 (TextGenerator_t486 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m4885_ftn) (TextGenerator_t486 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m4885_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m4885_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t484* TextGenerator_GetVerticesArray_m4886 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t484* (*TextGenerator_GetVerticesArray_m4886_ftn) (TextGenerator_t486 *);
	static TextGenerator_GetVerticesArray_m4886_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m4886_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m4887 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m4887_ftn) (TextGenerator_t486 *);
	static TextGenerator_get_characterCount_m4887_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m4887_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t42_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m3876 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Mathf_t42_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1937(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m422(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m4884(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t42_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m2125(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m301(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m4888 (TextGenerator_t486 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m4888_ftn) (TextGenerator_t486 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m4888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m4888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t881* TextGenerator_GetCharactersArray_m4889 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t881* (*TextGenerator_GetCharactersArray_m4889_ftn) (TextGenerator_t486 *);
	static TextGenerator_GetCharactersArray_m4889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m4889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m3875 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m3875_ftn) (TextGenerator_t486 *);
	static TextGenerator_get_lineCount_m3875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m3875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m4890 (TextGenerator_t486 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m4890_ftn) (TextGenerator_t486 *, Object_t *);
	static TextGenerator_GetLinesInternal_m4890_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m4890_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t882* TextGenerator_GetLinesArray_m4891 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t882* (*TextGenerator_GetLinesArray_m4891_ftn) (TextGenerator_t486 *);
	static TextGenerator_GetLinesArray_m4891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m4891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m3902 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m3902_ftn) (TextGenerator_t486 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m3902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m3902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t56_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m4892 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
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
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t56_il2cpp_TypeInfo_var, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t54 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m5346(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t54 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern Il2CppCodeGenString* _stringLiteral378;
extern Il2CppCodeGenString* _stringLiteral379;
extern "C" TextGenerationSettings_t582  TextGenerator_ValidatedSettings_m4893 (TextGenerator_t486 * __this, TextGenerationSettings_t582  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral378 = il2cpp_codegen_string_literal_from_index(378);
		_stringLiteral379 = il2cpp_codegen_string_literal_from_index(379);
		s_Il2CppMethodIntialized = true;
	}
	{
		Font_t131 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m409(NULL /*static, unused*/, L_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t131 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m3957(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t582  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m441(NULL /*static, unused*/, _stringLiteral378, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m441(NULL /*static, unused*/, _stringLiteral379, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t582  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m3956 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m4894 (TextGenerator_t486 * __this, List_1_t754 * ___characters, const MethodInfo* method)
{
	{
		List_1_t754 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m4888(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m4895 (TextGenerator_t486 * __this, List_1_t755 * ___lines, const MethodInfo* method)
{
	{
		List_1_t755 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m4890(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m4896 (TextGenerator_t486 * __this, List_1_t487 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t487 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m4885(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredWidth_m3961 (TextGenerator_t486 * __this, String_t* ___str, TextGenerationSettings_t582  ___settings, const MethodInfo* method)
{
	Rect_t31  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t582  L_1 = ___settings;
		TextGenerator_Populate_m3890(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t31  L_2 = TextGenerator_get_rectExtents_m3891(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m386((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m3962 (TextGenerator_t486 * __this, String_t* ___str, TextGenerationSettings_t582  ___settings, const MethodInfo* method)
{
	Rect_t31  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t582  L_1 = ___settings;
		TextGenerator_Populate_m3890(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t31  L_2 = TextGenerator_get_rectExtents_m3891(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m388((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m3890 (TextGenerator_t486 * __this, String_t* ___str, TextGenerationSettings_t582  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m400(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t582  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m5279((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t582  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m4897(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m4897 (TextGenerator_t486 * __this, String_t* ___str, TextGenerationSettings_t582  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t582  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t582  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t582  L_2 = ___settings;
		TextGenerationSettings_t582  L_3 = TextGenerator_ValidatedSettings_m4893(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t131 * L_5 = ((&V_0)->___font_0);
		Color_t9  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t27  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t27  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m4880(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m3960 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t487 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m4896(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t487 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m3877 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t754 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m4894(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t754 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m3874 (TextGenerator_t486 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t755 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m4895(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t755 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern "C" void WillRenderCanvases__ctor_m3761 (WillRenderCanvases_t598 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m4898 (WillRenderCanvases_t598 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m4898((WillRenderCanvases_t598 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t598(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m4899 (WillRenderCanvases_t598 * __this, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m4900 (WillRenderCanvases_t598 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"



// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t453_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t598_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m3762 (Object_t * __this /* static, unused */, WillRenderCanvases_t598 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		WillRenderCanvases_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t598 * L_0 = ((Canvas_t453_StaticFields*)Canvas_t453_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t598 * L_1 = ___value;
		Delegate_t333 * L_2 = Delegate_Combine_m2051(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t453_StaticFields*)Canvas_t453_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t598 *)Castclass(L_2, WillRenderCanvases_t598_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t453_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t598_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m4901 (Object_t * __this /* static, unused */, WillRenderCanvases_t598 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		WillRenderCanvases_t598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t598 * L_0 = ((Canvas_t453_StaticFields*)Canvas_t453_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t598 * L_1 = ___value;
		Delegate_t333 * L_2 = Delegate_Remove_m2056(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t453_StaticFields*)Canvas_t453_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t598 *)Castclass(L_2, WillRenderCanvases_t598_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m3807 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m3807_ftn) (Canvas_t453 *);
	static Canvas_get_renderMode_m3807_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m3807_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m3975 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m3975_ftn) (Canvas_t453 *);
	static Canvas_get_isRootCanvas_m3975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m3975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t113 * Canvas_get_worldCamera_m3816 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef Camera_t113 * (*Canvas_get_worldCamera_m3816_ftn) (Canvas_t453 *);
	static Canvas_get_worldCamera_m3816_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m3816_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m3958 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m3958_ftn) (Canvas_t453 *);
	static Canvas_get_scaleFactor_m3958_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m3958_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C" void Canvas_set_scaleFactor_m3978 (Canvas_t453 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m3978_ftn) (Canvas_t453 *, float);
	static Canvas_set_scaleFactor_m3978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m3978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m3832 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m3832_ftn) (Canvas_t453 *);
	static Canvas_get_referencePixelsPerUnit_m3832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m3832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m3979 (Canvas_t453 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m3979_ftn) (Canvas_t453 *, float);
	static Canvas_set_referencePixelsPerUnit_m3979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m3979_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m3795 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m3795_ftn) (Canvas_t453 *);
	static Canvas_get_pixelPerfect_m3795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m3795_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m3809 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m3809_ftn) (Canvas_t453 *);
	static Canvas_get_renderOrder_m3809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m3809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m3808 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m3808_ftn) (Canvas_t453 *);
	static Canvas_get_sortingOrder_m3808_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m3808_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m3815 (Canvas_t453 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m3815_ftn) (Canvas_t453 *);
	static Canvas_get_cachedSortingLayerValue_m3815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m3815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t57 * Canvas_GetDefaultCanvasMaterial_m3783 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t57 * (*Canvas_GetDefaultCanvasMaterial_m3783_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m3783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m3783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern "C" Material_t57 * Canvas_GetDefaultCanvasTextMaterial_m3955 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t57 * (*Canvas_GetDefaultCanvasTextMaterial_m3955_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m3955_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m3955_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern TypeInfo* Canvas_t453_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m4902 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t598 * L_0 = ((Canvas_t453_StaticFields*)Canvas_t453_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t598 * L_1 = ((Canvas_t453_StaticFields*)Canvas_t453_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		WillRenderCanvases_Invoke_m4898(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C" void Canvas_ForceUpdateCanvases_m3925 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m4902(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"



// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m3943 (CanvasGroup_t604 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m3943_ftn) (CanvasGroup_t604 *);
	static CanvasGroup_get_interactable_m3943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m3943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m4903 (CanvasGroup_t604 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m4903_ftn) (CanvasGroup_t604 *);
	static CanvasGroup_get_blocksRaycasts_m4903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m4903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m3794 (CanvasGroup_t604 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m3794_ftn) (CanvasGroup_t604 *);
	static CanvasGroup_get_ignoreParentGroups_m3794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m3794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m4904 (CanvasGroup_t604 * __this, Vector2_t27  ___sp, Camera_t113 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m4903(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"


// System.Void UnityEngine.UIVertex::.cctor()
extern TypeInfo* UIVertex_t485_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m4905 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t485_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(308);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t485  V_0 = {0};
	{
		Color32_t183  L_0 = {0};
		Color32__ctor_m3769(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t485_StaticFields*)UIVertex_t485_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t198  L_1 = {0};
		Vector4__ctor_m2043(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t485_StaticFields*)UIVertex_t485_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t485_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t10  L_2 = Vector3_get_zero_m334(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t10  L_3 = Vector3_get_back_m1970(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t198  L_4 = ((UIVertex_t485_StaticFields*)UIVertex_t485_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t183  L_5 = ((UIVertex_t485_StaticFields*)UIVertex_t485_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t27  L_6 = Vector2_get_zero_m1990(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t27  L_7 = Vector2_get_zero_m1990(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t485  L_8 = V_0;
		((UIVertex_t485_StaticFields*)UIVertex_t485_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m3800 (CanvasRenderer_t452 * __this, Color_t9  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m4906(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m4906 (Object_t * __this /* static, unused */, CanvasRenderer_t452 * ___self, Color_t9 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m4906_ftn) (CanvasRenderer_t452 *, Color_t9 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m4906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m4906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t9  CanvasRenderer_GetColor_m3798 (CanvasRenderer_t452 * __this, const MethodInfo* method)
{
	typedef Color_t9  (*CanvasRenderer_GetColor_m3798_ftn) (CanvasRenderer_t452 *);
	static CanvasRenderer_GetColor_m3798_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m3798_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern "C" void CanvasRenderer_set_isMask_m4011 (CanvasRenderer_t452 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m4011_ftn) (CanvasRenderer_t452 *, bool);
	static CanvasRenderer_set_isMask_m4011_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m4011_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m3793 (CanvasRenderer_t452 * __this, Material_t57 * ___material, Texture_t190 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m3793_ftn) (CanvasRenderer_t452 *, Material_t57 *, Texture_t190 *);
	static CanvasRenderer_SetMaterial_m3793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m3793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t919_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral380;
extern "C" void CanvasRenderer_SetVertices_m3791 (CanvasRenderer_t452 * __this, List_1_t487 * ___vertices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		UInt16_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral380 = il2cpp_codegen_string_literal_from_index(380);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t487 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t38* L_2 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(UInt16_t919_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral380, L_2, /*hidden argument*/NULL);
		Debug_LogWarning_m1933(NULL /*static, unused*/, L_5, __this, /*hidden argument*/NULL);
		List_1_t487 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear() */, L_6);
	}

IL_0039:
	{
		List_1_t487 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m4907(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m4907 (CanvasRenderer_t452 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m4907_ftn) (CanvasRenderer_t452 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m4907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m4907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t919_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral380;
extern "C" void CanvasRenderer_SetVertices_m3872 (CanvasRenderer_t452 * __this, UIVertexU5BU5D_t484* ___vertices, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		UInt16_t919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(494);
		_stringLiteral380 = il2cpp_codegen_string_literal_from_index(380);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t38* L_1 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(UInt16_t919_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral380, L_1, /*hidden argument*/NULL);
		Debug_LogWarning_m1933(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t484* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m4908(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m4908 (CanvasRenderer_t452 * __this, UIVertexU5BU5D_t484* ___vertices, int32_t ___size, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m4908_ftn) (CanvasRenderer_t452 *, UIVertexU5BU5D_t484*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m4908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m4908_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m3788 (CanvasRenderer_t452 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m3788_ftn) (CanvasRenderer_t452 *);
	static CanvasRenderer_Clear_m3788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m3788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m3785 (CanvasRenderer_t452 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m3785_ftn) (CanvasRenderer_t452 *);
	static CanvasRenderer_get_absoluteDepth_m3785_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m3785_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t11_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t606_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m4909 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		RectTransformUtility_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t606_StaticFields*)RectTransformUtility_t606_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t11*)SZArrayNew(Vector3U5BU5D_t11_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern TypeInfo* RectTransformUtility_t606_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m3817 (Object_t * __this /* static, unused */, RectTransform_t451 * ___rect, Vector2_t27  ___screenPoint, Camera_t113 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t451 * L_0 = ___rect;
		Camera_t113 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4910(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4910 (Object_t * __this /* static, unused */, RectTransform_t451 * ___rect, Vector2_t27 * ___screenPoint, Camera_t113 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4910_ftn) (RectTransform_t451 *, Vector2_t27 *, Camera_t113 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4910_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4910_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern TypeInfo* RectTransformUtility_t606_il2cpp_TypeInfo_var;
extern "C" Vector2_t27  RectTransformUtility_PixelAdjustPoint_m3796 (Object_t * __this /* static, unused */, Vector2_t27  ___point, Transform_t32 * ___elementTransform, Canvas_t453 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t27  V_0 = {0};
	{
		Vector2_t27  L_0 = ___point;
		Transform_t32 * L_1 = ___elementTransform;
		Canvas_t453 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m4911(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t27  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t606_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m4911 (Object_t * __this /* static, unused */, Vector2_t27  ___point, Transform_t32 * ___elementTransform, Canvas_t453 * ___canvas, Vector2_t27 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t32 * L_0 = ___elementTransform;
		Canvas_t453 * L_1 = ___canvas;
		Vector2_t27 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4912(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4912 (Object_t * __this /* static, unused */, Vector2_t27 * ___point, Transform_t32 * ___elementTransform, Canvas_t453 * ___canvas, Vector2_t27 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4912_ftn) (Vector2_t27 *, Transform_t32 *, Canvas_t453 *, Vector2_t27 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t31  RectTransformUtility_PixelAdjustRect_m3797 (Object_t * __this /* static, unused */, RectTransform_t451 * ___rectTransform, Canvas_t453 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t31  (*RectTransformUtility_PixelAdjustRect_m3797_ftn) (RectTransform_t451 *, Canvas_t453 *);
	static RectTransformUtility_PixelAdjustRect_m3797_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m3797_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern TypeInfo* RectTransformUtility_t606_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m4913 (Object_t * __this /* static, unused */, RectTransform_t451 * ___rect, Vector2_t27  ___screenPoint, Camera_t113 * ___cam, Vector3_t10 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t326  V_0 = {0};
	Plane_t110  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t10 * L_0 = ___worldPoint;
		Vector2_t27  L_1 = Vector2_get_zero_m1990(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t10  L_2 = Vector2_op_Implicit_m1962(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t113 * L_3 = ___cam;
		Vector2_t27  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		Ray_t326  L_5 = RectTransformUtility_ScreenPointToRay_m4914(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t451 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t60  L_7 = Transform_get_rotation_m1969(L_6, /*hidden argument*/NULL);
		Vector3_t10  L_8 = Vector3_get_back_m1970(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t10  L_9 = Quaternion_op_Multiply_m1971(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t451 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t10  L_11 = Transform_get_position_m359(L_10, /*hidden argument*/NULL);
		Plane__ctor_m1973((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t326  L_12 = V_0;
		bool L_13 = Plane_Raycast_m1975((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t10 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t10  L_16 = Ray_GetPoint_m1976((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t606_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m3848 (Object_t * __this /* static, unused */, RectTransform_t451 * ___rect, Vector2_t27  ___screenPoint, Camera_t113 * ___cam, Vector2_t27 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t10  V_0 = {0};
	{
		Vector2_t27 * L_0 = ___localPoint;
		Vector2_t27  L_1 = Vector2_get_zero_m1990(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t451 * L_2 = ___rect;
		Vector2_t27  L_3 = ___screenPoint;
		Camera_t113 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m4913(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t27 * L_6 = ___localPoint;
		RectTransform_t451 * L_7 = ___rect;
		Vector3_t10  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t10  L_9 = Transform_InverseTransformPoint_m1950(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t27  L_10 = Vector2_op_Implicit_m2000(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t326  RectTransformUtility_ScreenPointToRay_m4914 (Object_t * __this /* static, unused */, Camera_t113 * ___cam, Vector2_t27  ___screenPos, const MethodInfo* method)
{
	Vector3_t10  V_0 = {0};
	{
		Camera_t113 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m409(NULL /*static, unused*/, L_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t113 * L_2 = ___cam;
		Vector2_t27  L_3 = ___screenPos;
		Vector3_t10  L_4 = Vector2_op_Implicit_m1962(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t326  L_5 = Camera_ScreenPointToRay_m1974(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t27  L_6 = ___screenPos;
		Vector3_t10  L_7 = Vector2_op_Implicit_m1962(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t10 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t10  L_10 = V_0;
		Vector3_t10  L_11 = Vector3_get_forward_m3812(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t326  L_12 = {0};
		Ray__ctor_m4494(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t451_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t606_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m3920 (Object_t * __this /* static, unused */, RectTransform_t451 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		RectTransformUtility_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t451 * V_1 = {0};
	Vector2_t27  V_2 = {0};
	Vector2_t27  V_3 = {0};
	Vector2_t27  V_4 = {0};
	Vector2_t27  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t451 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m438(NULL /*static, unused*/, L_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t451 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t32 * L_5 = Transform_GetChild_m1948(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t451 *)IsInst(L_5, RectTransform_t451_il2cpp_TypeInfo_var));
		RectTransform_t451 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m409(NULL /*static, unused*/, L_6, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t451 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m3920(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t451 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m1947(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t451 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t27  L_15 = RectTransform_get_pivot_m3835(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m3845((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m3850((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t451 * L_19 = ___rect;
		Vector2_t27  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m3901(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t451 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t27  L_23 = RectTransform_get_anchoredPosition_m3897(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m3845((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m3850((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t451 * L_27 = ___rect;
		Vector2_t27  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m3900(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t451 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t27  L_30 = RectTransform_get_anchorMin_m3836(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t451 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t27  L_32 = RectTransform_get_anchorMax_m3896(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m3845((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m3845((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m3850((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m3850((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t451 * L_40 = ___rect;
		Vector2_t27  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m3899(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t451 * L_42 = ___rect;
		Vector2_t27  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m3837(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t451_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t606_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m3919 (Object_t * __this /* static, unused */, RectTransform_t451 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		RectTransformUtility_t606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t451 * V_1 = {0};
	{
		RectTransform_t451 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m438(NULL /*static, unused*/, L_0, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t451 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t32 * L_5 = Transform_GetChild_m1948(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t451 *)IsInst(L_5, RectTransform_t451_il2cpp_TypeInfo_var));
		RectTransform_t451 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m409(NULL /*static, unused*/, L_6, (Object_t62 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t451 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m3919(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t451 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m1947(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t451 * L_13 = ___rect;
		RectTransform_t451 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t27  L_15 = RectTransform_get_pivot_m3835(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		Vector2_t27  L_16 = RectTransformUtility_GetTransposed_m4915(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m3901(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t451 * L_17 = ___rect;
		RectTransform_t451 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t27  L_19 = RectTransform_get_sizeDelta_m3898(L_18, /*hidden argument*/NULL);
		Vector2_t27  L_20 = RectTransformUtility_GetTransposed_m4915(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m3838(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t451 * L_22 = ___rect;
		RectTransform_t451 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t27  L_24 = RectTransform_get_anchoredPosition_m3897(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t606_il2cpp_TypeInfo_var);
		Vector2_t27  L_25 = RectTransformUtility_GetTransposed_m4915(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m3900(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t451 * L_26 = ___rect;
		RectTransform_t451 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t27  L_28 = RectTransform_get_anchorMin_m3836(L_27, /*hidden argument*/NULL);
		Vector2_t27  L_29 = RectTransformUtility_GetTransposed_m4915(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m3899(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t451 * L_30 = ___rect;
		RectTransform_t451 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t27  L_32 = RectTransform_get_anchorMax_m3896(L_31, /*hidden argument*/NULL);
		Vector2_t27  L_33 = RectTransformUtility_GetTransposed_m4915(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m3837(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t27  RectTransformUtility_GetTransposed_m4915 (Object_t * __this /* static, unused */, Vector2_t27  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t27  L_2 = {0};
		Vector2__ctor_m373(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" void Request__ctor_m4916 (Request_t757 * __this, const MethodInfo* method)
{
	{
		__this->___version_0 = 2;
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m4917 (Request_t757 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m4918 (Request_t757 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m4919 (Request_t757 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t775_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t774_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral381;
extern Il2CppCodeGenString* _stringLiteral382;
extern "C" String_t* Request_ToString_m4920 (Request_t757 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		SourceID_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(495);
		AppID_t774_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(496);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral381 = il2cpp_codegen_string_literal_from_index(381);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m5402(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m4917(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(SourceID_t775_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m5403(L_5, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t38* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m4918(__this, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(AppID_t774_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m5403(L_10, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t38* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m4919(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral381, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C" void ResponseBase__ctor_m4921 (ResponseBase_t758 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral383;
extern "C" String_t* ResponseBase_ParseJSONString_m4922 (ResponseBase_t758 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral383 = il2cpp_codegen_string_literal_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t883_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m421(NULL /*static, unused*/, L_4, _stringLiteral383, /*hidden argument*/NULL);
		FormatException_t920 * L_6 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t912_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral383;
extern "C" int32_t ResponseBase_ParseJSONInt32_m4923 (ResponseBase_t758 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Convert_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral383 = il2cpp_codegen_string_literal_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t883_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t912_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m5405(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m421(NULL /*static, unused*/, L_5, _stringLiteral383, /*hidden argument*/NULL);
		FormatException_t920 * L_7 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t912_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral383;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m4924 (ResponseBase_t758 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Convert_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral383 = il2cpp_codegen_string_literal_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t883_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t912_il2cpp_TypeInfo_var);
		uint16_t L_4 = Convert_ToUInt16_m5406(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m421(NULL /*static, unused*/, L_5, _stringLiteral383, /*hidden argument*/NULL);
		FormatException_t920 * L_7 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t912_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral383;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m4925 (ResponseBase_t758 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Convert_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral383 = il2cpp_codegen_string_literal_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t883_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t912_il2cpp_TypeInfo_var);
		uint64_t L_4 = Convert_ToUInt64_m5407(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m421(NULL /*static, unused*/, L_5, _stringLiteral383, /*hidden argument*/NULL);
		FormatException_t920 * L_7 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t912_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral383;
extern "C" bool ResponseBase_ParseJSONBool_m4926 (ResponseBase_t758 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		Convert_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral383 = il2cpp_codegen_string_literal_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t883_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t912_il2cpp_TypeInfo_var);
		bool L_4 = Convert_ToBoolean_m5408(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m421(NULL /*static, unused*/, L_5, _stringLiteral383, /*hidden argument*/NULL);
		FormatException_t920 * L_7 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" void Response__ctor_m4927 (Response_t759 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m4921(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m4928 (Response_t759 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m4929 (Response_t759 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m4930 (Response_t759 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m4931 (Response_t759 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t55_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral384;
extern "C" String_t* Response_ToString_m4932 (Response_t759 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Boolean_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		_stringLiteral384 = il2cpp_codegen_string_literal_from_index(384);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m5402(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		bool L_3 = Response_get_success_m4928(__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t55_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t38* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m4930(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral384, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral385;
extern Il2CppCodeGenString* _stringLiteral386;
extern Il2CppCodeGenString* _stringLiteral387;
extern "C" void Response_Parse_m4933 (Response_t759 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral385 = il2cpp_codegen_string_literal_from_index(385);
		_stringLiteral386 = il2cpp_codegen_string_literal_from_index(386);
		_stringLiteral387 = il2cpp_codegen_string_literal_from_index(387);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t883_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m4926(__this, _stringLiteral385, L_2, L_3, /*hidden argument*/NULL);
		Response_set_success_m4929(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m4922(__this, _stringLiteral386, L_5, L_6, /*hidden argument*/NULL);
		Response_set_extendedInfo_m4931(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = Response_get_success_m4928(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m4930(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral387, L_9, /*hidden argument*/NULL);
		FormatException_t920 * L_11 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C" void BasicResponse__ctor_m4934 (BasicResponse_t760 * __this, const MethodInfo* method)
{
	{
		Response__ctor_m4927(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" void CreateMatchRequest__ctor_m4935 (CreateMatchRequest_t762 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m4936 (CreateMatchRequest_t762 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" void CreateMatchRequest_set_name_m4937 (CreateMatchRequest_t762 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m4938 (CreateMatchRequest_t762 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" void CreateMatchRequest_set_size_m4939 (CreateMatchRequest_t762 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m4940 (CreateMatchRequest_t762 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" void CreateMatchRequest_set_advertise_m4941 (CreateMatchRequest_t762 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m4942 (CreateMatchRequest_t762 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" void CreateMatchRequest_set_password_m4943 (CreateMatchRequest_t762 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t761 * CreateMatchRequest_get_matchAttributes_m4944 (CreateMatchRequest_t762 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t761 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t921_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t55_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral388;
extern Il2CppCodeGenString* _stringLiteral389;
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" String_t* CreateMatchRequest_ToString_m4945 (CreateMatchRequest_t762 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		UInt32_t921_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(499);
		Boolean_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral388 = il2cpp_codegen_string_literal_from_index(388);
		_stringLiteral389 = il2cpp_codegen_string_literal_from_index(389);
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t38* G_B2_1 = {0};
	ObjectU5BU5D_t38* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t38* G_B1_1 = {0};
	ObjectU5BU5D_t38* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t38* G_B3_2 = {0};
	ObjectU5BU5D_t38* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t38* G_B5_1 = {0};
	ObjectU5BU5D_t38* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t38* G_B4_1 = {0};
	ObjectU5BU5D_t38* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t38* G_B6_2 = {0};
	ObjectU5BU5D_t38* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m4920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m4936(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t38* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m4938(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(UInt32_t921_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t38* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m4940(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t55_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t38* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m4942(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m400(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = _stringLiteral388;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = _stringLiteral388;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = _stringLiteral389;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = _stringLiteral390;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t38* L_16 = G_B3_3;
		Dictionary_2_t761 * L_17 = CreateMatchRequest_get_matchAttributes_m4944(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t761 * L_18 = CreateMatchRequest_get_matchAttributes_m4944(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m4602(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C" void CreateMatchResponse__ctor_m4946 (CreateMatchResponse_t763 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m4934(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m4947 (CreateMatchResponse_t763 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m4948 (CreateMatchResponse_t763 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m4949 (CreateMatchResponse_t763 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m4950 (CreateMatchResponse_t763 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m4951 (CreateMatchResponse_t763 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m4952 (CreateMatchResponse_t763 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m4953 (CreateMatchResponse_t763 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m4954 (CreateMatchResponse_t763 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m4955 (CreateMatchResponse_t763 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m4956 (CreateMatchResponse_t763 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m4957 (CreateMatchResponse_t763 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m4958 (CreateMatchResponse_t763 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t776_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t777_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t55_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral391;
extern Il2CppCodeGenString* _stringLiteral382;
extern "C" String_t* CreateMatchResponse_ToString_m4959 (CreateMatchResponse_t763 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		NetworkID_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		NodeID_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		Boolean_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m4932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m4947(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t38* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m4949(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t38* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m4951(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t776_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m5403(L_11, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t38* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m4955(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t777_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m5403(L_16, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t38* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m4957(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t55_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral391, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral392;
extern Il2CppCodeGenString* _stringLiteral393;
extern Il2CppCodeGenString* _stringLiteral394;
extern Il2CppCodeGenString* _stringLiteral395;
extern Il2CppCodeGenString* _stringLiteral396;
extern Il2CppCodeGenString* _stringLiteral397;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void CreateMatchResponse_Parse_m4960 (CreateMatchResponse_t763 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		_stringLiteral393 = il2cpp_codegen_string_literal_from_index(393);
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m4933(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t883_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m4922(__this, _stringLiteral392, L_3, L_4, /*hidden argument*/NULL);
		CreateMatchResponse_set_address_m4948(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m4923(__this, _stringLiteral393, L_6, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_set_port_m4950(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m4925(__this, _stringLiteral394, L_9, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_set_networkId_m4952(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m4922(__this, _stringLiteral395, L_12, L_13, /*hidden argument*/NULL);
		CreateMatchResponse_set_accessTokenString_m4954(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m4924(__this, _stringLiteral396, L_15, L_16, /*hidden argument*/NULL);
		CreateMatchResponse_set_nodeId_m4956(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m4926(__this, _stringLiteral397, L_18, L_19, /*hidden argument*/NULL);
		CreateMatchResponse_set_usingRelay_m4958(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral398, L_22, /*hidden argument*/NULL);
		FormatException_t920 * L_24 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" void JoinMatchRequest__ctor_m4961 (JoinMatchRequest_t764 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m4962 (JoinMatchRequest_t764 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchRequest_set_networkId_m4963 (JoinMatchRequest_t764 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m4964 (JoinMatchRequest_t764 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" void JoinMatchRequest_set_password_m4965 (JoinMatchRequest_t764 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t776_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral399;
extern Il2CppCodeGenString* _stringLiteral382;
extern Il2CppCodeGenString* _stringLiteral389;
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" String_t* JoinMatchRequest_ToString_m4966 (JoinMatchRequest_t764 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		NetworkID_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		_stringLiteral399 = il2cpp_codegen_string_literal_from_index(399);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		_stringLiteral389 = il2cpp_codegen_string_literal_from_index(389);
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t38* G_B2_1 = {0};
	ObjectU5BU5D_t38* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t38* G_B1_1 = {0};
	ObjectU5BU5D_t38* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t38* G_B3_2 = {0};
	ObjectU5BU5D_t38* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m4920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m4962(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t776_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m5403(L_5, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t38* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m4964(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m400(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = _stringLiteral399;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = _stringLiteral399;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = _stringLiteral389;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = _stringLiteral390;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m4602(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C" void JoinMatchResponse__ctor_m4967 (JoinMatchResponse_t765 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m4934(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m4968 (JoinMatchResponse_t765 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m4969 (JoinMatchResponse_t765 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m4970 (JoinMatchResponse_t765 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m4971 (JoinMatchResponse_t765 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m4972 (JoinMatchResponse_t765 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m4973 (JoinMatchResponse_t765 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m4974 (JoinMatchResponse_t765 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m4975 (JoinMatchResponse_t765 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m4976 (JoinMatchResponse_t765 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m4977 (JoinMatchResponse_t765 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m4978 (JoinMatchResponse_t765 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m4979 (JoinMatchResponse_t765 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t776_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t777_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t55_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral391;
extern Il2CppCodeGenString* _stringLiteral382;
extern "C" String_t* JoinMatchResponse_ToString_m4980 (JoinMatchResponse_t765 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		NetworkID_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		NodeID_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		Boolean_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m4932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m4968(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t38* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m4970(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t38* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m4972(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t776_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m5403(L_11, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t38* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m4976(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t777_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m5403(L_16, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t38* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m4978(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t55_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral391, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral392;
extern Il2CppCodeGenString* _stringLiteral393;
extern Il2CppCodeGenString* _stringLiteral394;
extern Il2CppCodeGenString* _stringLiteral395;
extern Il2CppCodeGenString* _stringLiteral396;
extern Il2CppCodeGenString* _stringLiteral397;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void JoinMatchResponse_Parse_m4981 (JoinMatchResponse_t765 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		_stringLiteral393 = il2cpp_codegen_string_literal_from_index(393);
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m4933(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t883_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m4922(__this, _stringLiteral392, L_3, L_4, /*hidden argument*/NULL);
		JoinMatchResponse_set_address_m4969(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m4923(__this, _stringLiteral393, L_6, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_set_port_m4971(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m4925(__this, _stringLiteral394, L_9, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_set_networkId_m4973(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m4922(__this, _stringLiteral395, L_12, L_13, /*hidden argument*/NULL);
		JoinMatchResponse_set_accessTokenString_m4975(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m4924(__this, _stringLiteral396, L_15, L_16, /*hidden argument*/NULL);
		JoinMatchResponse_set_nodeId_m4977(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m4926(__this, _stringLiteral397, L_18, L_19, /*hidden argument*/NULL);
		JoinMatchResponse_set_usingRelay_m4979(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral398, L_22, /*hidden argument*/NULL);
		FormatException_t920 * L_24 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C" void DestroyMatchRequest__ctor_m4982 (DestroyMatchRequest_t766 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m4983 (DestroyMatchRequest_t766 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DestroyMatchRequest_set_networkId_m4984 (DestroyMatchRequest_t766 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t776_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral400;
extern Il2CppCodeGenString* _stringLiteral382;
extern "C" String_t* DestroyMatchRequest_ToString_m4985 (DestroyMatchRequest_t766 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		NetworkID_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		_stringLiteral400 = il2cpp_codegen_string_literal_from_index(400);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m4920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m4983(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t776_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m5403(L_5, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral400, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" void DropConnectionRequest__ctor_m4986 (DropConnectionRequest_t767 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m4987 (DropConnectionRequest_t767 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DropConnectionRequest_set_networkId_m4988 (DropConnectionRequest_t767 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m4989 (DropConnectionRequest_t767 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void DropConnectionRequest_set_nodeId_m4990 (DropConnectionRequest_t767 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t776_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t777_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral401;
extern Il2CppCodeGenString* _stringLiteral382;
extern "C" String_t* DropConnectionRequest_ToString_m4991 (DropConnectionRequest_t767 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		NetworkID_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		NodeID_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		_stringLiteral401 = il2cpp_codegen_string_literal_from_index(401);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m4920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m4987(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t776_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m5403(L_5, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t38* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m4989(__this, /*hidden argument*/NULL);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(NodeID_t777_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m5403(L_10, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral401, L_7, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" void ListMatchRequest__ctor_m4992 (ListMatchRequest_t768 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m4916(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m4993 (ListMatchRequest_t768 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" void ListMatchRequest_set_pageSize_m4994 (ListMatchRequest_t768 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m4995 (ListMatchRequest_t768 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m4996 (ListMatchRequest_t768 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m4997 (ListMatchRequest_t768 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" void ListMatchRequest_set_nameFilter_m4998 (ListMatchRequest_t768 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_includePasswordMatches()
extern "C" bool ListMatchRequest_get_includePasswordMatches_m4999 (ListMatchRequest_t768 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CincludePasswordMatchesU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t761 * ListMatchRequest_get_matchAttributeFilterLessThan_m5000 (ListMatchRequest_t768 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t761 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t761 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m5001 (ListMatchRequest_t768 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t761 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_9);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral402;
extern "C" String_t* ListMatchRequest_ToString_m5002 (ListMatchRequest_t768 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral402 = il2cpp_codegen_string_literal_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t38* G_B2_1 = {0};
	ObjectU5BU5D_t38* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t38* G_B1_1 = {0};
	ObjectU5BU5D_t38* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t38* G_B3_2 = {0};
	ObjectU5BU5D_t38* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t38* G_B5_1 = {0};
	ObjectU5BU5D_t38* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t38* G_B4_1 = {0};
	ObjectU5BU5D_t38* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t38* G_B6_2 = {0};
	ObjectU5BU5D_t38* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m4920(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m4993(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t38* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m4995(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t38* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m4997(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t38* L_12 = L_10;
		Dictionary_2_t761 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m5000(__this, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = _stringLiteral402;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = _stringLiteral402;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t761 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m5000(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t38* L_18 = G_B3_3;
		Dictionary_2_t761 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m5001(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t761 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m5001(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m4602(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C" void MatchDirectConnectInfo__ctor_m5003 (MatchDirectConnectInfo_t769 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m4921(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m5004 (MatchDirectConnectInfo_t769 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m5005 (MatchDirectConnectInfo_t769 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m5006 (MatchDirectConnectInfo_t769 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m5007 (MatchDirectConnectInfo_t769 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m5008 (MatchDirectConnectInfo_t769 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m5009 (MatchDirectConnectInfo_t769 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t777_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral403;
extern "C" String_t* MatchDirectConnectInfo_ToString_m5010 (MatchDirectConnectInfo_t769 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		NodeID_t777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(501);
		_stringLiteral403 = il2cpp_codegen_string_literal_from_index(403);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m5402(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m5004(__this, /*hidden argument*/NULL);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(NodeID_t777_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t38* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m5006(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t38* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m5008(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral403, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral396;
extern Il2CppCodeGenString* _stringLiteral404;
extern Il2CppCodeGenString* _stringLiteral405;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void MatchDirectConnectInfo_Parse_m5011 (MatchDirectConnectInfo_t769 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		_stringLiteral404 = il2cpp_codegen_string_literal_from_index(404);
		_stringLiteral405 = il2cpp_codegen_string_literal_from_index(405);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t883_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m4924(__this, _stringLiteral396, L_2, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_nodeId_m5005(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m4922(__this, _stringLiteral404, L_5, L_6, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_publicAddress_m5007(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m4922(__this, _stringLiteral405, L_8, L_9, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_privateAddress_m5009(__this, L_10, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral398, L_12, /*hidden argument*/NULL);
		FormatException_t920 * L_14 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_36.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_36MethodDeclarations.h"
struct ResponseBase_t758;
struct List_1_t770;
struct String_t;
struct Object_t;
struct IDictionary_2_t883;
struct ResponseBase_t758;
struct List_1_t587;
struct String_t;
struct Object_t;
struct IDictionary_2_t883;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t587 * ResponseBase_ParseJSONList_TisObject_t_m5410_gshared (ResponseBase_t758 * __this, String_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define ResponseBase_ParseJSONList_TisObject_t_m5410(__this, p0, p1, p2, method) (( List_1_t587 * (*) (ResponseBase_t758 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m5410_gshared)(__this, p0, p1, p2, method)
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t769_m5409(__this, p0, p1, p2, method) (( List_1_t770 * (*) (ResponseBase_t758 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m5410_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C" void MatchDesc__ctor_m5012 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m4921(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m5013 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m5014 (MatchDesc_t771 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m5015 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m5016 (MatchDesc_t771 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m5017 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m5018 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m5019 (MatchDesc_t771 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m5020 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m5021 (MatchDesc_t771 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m5022 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m5023 (MatchDesc_t771 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t761 * MatchDesc_get_matchAttributes_m5024 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t761 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C" uint16_t MatchDesc_get_hostNodeId_m5025 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t770 * MatchDesc_get_directConnectInfos_m5026 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	{
		List_1_t770 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m5027 (MatchDesc_t771 * __this, List_1_t770 * ___value, const MethodInfo* method)
{
	{
		List_1_t770 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t776_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t55_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral406;
extern Il2CppCodeGenString* _stringLiteral382;
extern "C" String_t* MatchDesc_ToString_m5028 (MatchDesc_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		NetworkID_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Boolean_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		_stringLiteral406 = il2cpp_codegen_string_literal_from_index(406);
		_stringLiteral382 = il2cpp_codegen_string_literal_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t38* G_B2_1 = {0};
	ObjectU5BU5D_t38* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t38* G_B1_1 = {0};
	ObjectU5BU5D_t38* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t38* G_B3_2 = {0};
	ObjectU5BU5D_t38* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m5402(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m5013(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t776_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m5403(L_5, _stringLiteral382, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t38* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m5015(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t38* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m5017(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t38* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m5018(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t38* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m5020(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t38* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m5022(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t55_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t38* L_25 = L_21;
		Dictionary_2_t761 * L_26 = MatchDesc_get_matchAttributes_m5024(__this, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = _stringLiteral406;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = _stringLiteral406;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t761 * L_27 = MatchDesc_get_matchAttributes_m5024(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t38* L_31 = G_B3_3;
		List_1_t770 * L_32 = MatchDesc_get_directConnectInfos_m5026(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count() */, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m4602(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t769_m5409_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral394;
extern Il2CppCodeGenString* _stringLiteral82;
extern Il2CppCodeGenString* _stringLiteral407;
extern Il2CppCodeGenString* _stringLiteral408;
extern Il2CppCodeGenString* _stringLiteral409;
extern Il2CppCodeGenString* _stringLiteral410;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void MatchDesc_Parse_m5029 (MatchDesc_t771 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t769_m5409_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484218);
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		_stringLiteral82 = il2cpp_codegen_string_literal_from_index(82);
		_stringLiteral407 = il2cpp_codegen_string_literal_from_index(407);
		_stringLiteral408 = il2cpp_codegen_string_literal_from_index(408);
		_stringLiteral409 = il2cpp_codegen_string_literal_from_index(409);
		_stringLiteral410 = il2cpp_codegen_string_literal_from_index(410);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t883_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m4925(__this, _stringLiteral394, L_2, L_3, /*hidden argument*/NULL);
		MatchDesc_set_networkId_m5014(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m4922(__this, _stringLiteral82, L_5, L_6, /*hidden argument*/NULL);
		MatchDesc_set_name_m5016(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m4923(__this, _stringLiteral407, L_8, L_9, /*hidden argument*/NULL);
		MatchDesc_set_maxSize_m5019(__this, L_10, /*hidden argument*/NULL);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m4923(__this, _stringLiteral408, L_11, L_12, /*hidden argument*/NULL);
		MatchDesc_set_currentSize_m5021(__this, L_13, /*hidden argument*/NULL);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m4926(__this, _stringLiteral409, L_14, L_15, /*hidden argument*/NULL);
		MatchDesc_set_isPrivate_m5023(__this, L_16, /*hidden argument*/NULL);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t770 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t769_m5409(__this, _stringLiteral410, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t769_m5409_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m5027(__this, L_19, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral398, L_21, /*hidden argument*/NULL);
		FormatException_t920 * L_23 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_37.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_37MethodDeclarations.h"
struct ResponseBase_t758;
struct List_1_t772;
struct String_t;
struct Object_t;
struct IDictionary_2_t883;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDesc_t771_m5411(__this, p0, p1, p2, method) (( List_1_t772 * (*) (ResponseBase_t758 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m5410_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" void ListMatchResponse__ctor_m5030 (ListMatchResponse_t773 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m4934(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t772 * ListMatchResponse_get_matches_m5031 (ListMatchResponse_t773 * __this, const MethodInfo* method)
{
	{
		List_1_t772 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m5032 (ListMatchResponse_t773 * __this, List_1_t772 * ___value, const MethodInfo* method)
{
	{
		List_1_t772 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t38_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral411;
extern "C" String_t* ListMatchResponse_ToString_m5033 (ListMatchResponse_t773 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t38_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral411 = il2cpp_codegen_string_literal_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t38* L_0 = ((ObjectU5BU5D_t38*)SZArrayNew(ObjectU5BU5D_t38_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m4932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t38* L_2 = L_0;
		List_1_t772 * L_3 = ListMatchResponse_get_matches_m5031(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count() */, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m4602(NULL /*static, unused*/, _stringLiteral411, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t883_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t920_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t771_m5411_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral412;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void ListMatchResponse_Parse_m5034 (ListMatchResponse_t773 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(497);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		FormatException_t920_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(498);
		ResponseBase_ParseJSONList_TisMatchDesc_t771_m5411_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484219);
		_stringLiteral412 = il2cpp_codegen_string_literal_from_index(412);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m4933(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t883_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t772 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t771_m5411(__this, _stringLiteral412, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t771_m5411_MethodInfo_var);
		ListMatchResponse_set_matches_m5032(__this, L_5, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m421(NULL /*static, unused*/, _stringLiteral398, L_7, /*hidden argument*/NULL);
		FormatException_t920 * L_9 = (FormatException_t920 *)il2cpp_codegen_object_new (FormatException_t920_il2cpp_TypeInfo_var);
		FormatException__ctor_m5404(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"



// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern TypeInfo* ByteU5BU5D_t169_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m5035 (NetworkAccessToken_t778 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m298(__this, /*hidden argument*/NULL);
		__this->___array_0 = ((ByteU5BU5D_t169*)SZArrayNew(ByteU5BU5D_t169_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern TypeInfo* Convert_t912_il2cpp_TypeInfo_var;
extern "C" String_t* NetworkAccessToken_GetByteString_m5036 (NetworkAccessToken_t778 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t912_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t169* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t912_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m5412(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"


// System.Void UnityEngine.Networking.Utility::.cctor()
extern TypeInfo* Random_t779_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t781_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t780_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m5415_MethodInfo_var;
extern "C" void Utility__cctor_m5037 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Random_t779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(505);
		Utility_t781_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		Dictionary_2_t780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(507);
		Dictionary_2__ctor_m5415_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484220);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m5413(NULL /*static, unused*/, /*hidden argument*/NULL);
		Random_t779 * L_1 = (Random_t779 *)il2cpp_codegen_object_new (Random_t779_il2cpp_TypeInfo_var);
		Random__ctor_m5414(L_1, L_0, /*hidden argument*/NULL);
		((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t780 * L_2 = (Dictionary_2_t780 *)il2cpp_codegen_object_new (Dictionary_2_t780_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5415(L_2, /*hidden argument*/Dictionary_2__ctor_m5415_MethodInfo_var);
		((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern TypeInfo* Utility_t781_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t39_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetSourceID_m5038 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t781_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		Int32_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m4034(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t781_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t39_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2113(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = String_GetHashCode_m2091(L_4, /*hidden argument*/NULL);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t781_il2cpp_TypeInfo_var;
extern "C" void Utility_SetAppID_m5039 (Object_t * __this /* static, unused */, uint64_t ___newAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t781_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t781_il2cpp_TypeInfo_var);
		((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern TypeInfo* Utility_t781_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetAppID_m5040 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t781_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t781_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern TypeInfo* Utility_t781_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkAccessToken_t778_il2cpp_TypeInfo_var;
extern "C" NetworkAccessToken_t778 * Utility_GetAccessTokenForNetwork_m5041 (Object_t * __this /* static, unused */, uint64_t ___netId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t781_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(506);
		NetworkAccessToken_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(504);
		s_Il2CppMethodIntialized = true;
	}
	NetworkAccessToken_t778 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t781_il2cpp_TypeInfo_var);
		Dictionary_2_t780 * L_0 = ((Utility_t781_StaticFields*)Utility_t781_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t778 ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t778 * L_3 = (NetworkAccessToken_t778 *)il2cpp_codegen_object_new (NetworkAccessToken_t778_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m5035(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t778 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
