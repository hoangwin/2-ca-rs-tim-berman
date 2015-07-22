#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t887;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t773;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m19325(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t887 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m19305_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m19326(__this, ___response, method) (( void (*) (ResponseDelegate_1_t887 *, ListMatchResponse_t773 *, const MethodInfo*))ResponseDelegate_1_Invoke_m19307_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m19327(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t887 *, ListMatchResponse_t773 *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m19309_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m19328(__this, ___result, method) (( void (*) (ResponseDelegate_1_t887 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m19311_gshared)(__this, ___result, method)
