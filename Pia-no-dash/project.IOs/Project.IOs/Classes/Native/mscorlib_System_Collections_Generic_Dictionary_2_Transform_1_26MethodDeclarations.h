#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>
struct Transform_1_t2513;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t13;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19205_gshared (Transform_1_t2513 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19205(__this, ___object, ___method, method) (( void (*) (Transform_1_t2513 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19205_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::Invoke(TKey,TValue)
extern "C" uint64_t Transform_1_Invoke_m19206_gshared (Transform_1_t2513 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19206(__this, ___key, ___value, method) (( uint64_t (*) (Transform_1_t2513 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m19206_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19207_gshared (Transform_1_t2513 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t14 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19207(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2513 *, uint64_t, Object_t *, AsyncCallback_t14 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19207_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Transform_1_EndInvoke_m19208_gshared (Transform_1_t2513 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19208(__this, ___result, method) (( uint64_t (*) (Transform_1_t2513 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19208_gshared)(__this, ___result, method)
