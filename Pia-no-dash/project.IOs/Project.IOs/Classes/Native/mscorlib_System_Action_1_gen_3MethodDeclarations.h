#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t649;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t835;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m17711(__this, ___object, ___method, method) (( void (*) (Action_1_t649 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m16499_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(T)
#define Action_1_Invoke_m5351(__this, ___obj, method) (( void (*) (Action_1_t649 *, IScoreU5BU5D_t835*, const MethodInfo*))Action_1_Invoke_m16500_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m17712(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t649 *, IScoreU5BU5D_t835*, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m16502_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m17713(__this, ___result, method) (( void (*) (Action_1_t649 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m16504_gshared)(__this, ___result, method)
