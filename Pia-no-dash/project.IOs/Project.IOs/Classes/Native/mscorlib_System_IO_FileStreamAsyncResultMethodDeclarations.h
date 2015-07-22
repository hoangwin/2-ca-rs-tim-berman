#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1508;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1131;
// System.AsyncCallback
struct AsyncCallback_t14;
// System.IAsyncResult
struct IAsyncResult_t13;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m9449 (FileStreamAsyncResult_t1508 * __this, AsyncCallback_t14 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m9450 (Object_t * __this /* static, unused */, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m9451 (FileStreamAsyncResult_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1131 * FileStreamAsyncResult_get_AsyncWaitHandle_m9452 (FileStreamAsyncResult_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m9453 (FileStreamAsyncResult_t1508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
