#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1081;
// System.IO.Stream
struct Stream_t1080;
// System.Byte[]
struct ByteU5BU5D_t169;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t54;
// System.Threading.WaitHandle
struct WaitHandle_t1131;
// System.AsyncCallback
struct AsyncCallback_t14;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m6109 (ReceiveRecordAsyncResult_t1081 * __this, AsyncCallback_t14 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t169* ___initialBuffer, Stream_t1080 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1080 * ReceiveRecordAsyncResult_get_Record_m6110 (ReceiveRecordAsyncResult_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t169* ReceiveRecordAsyncResult_get_ResultingBuffer_m6111 (ReceiveRecordAsyncResult_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t169* ReceiveRecordAsyncResult_get_InitialBuffer_m6112 (ReceiveRecordAsyncResult_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6113 (ReceiveRecordAsyncResult_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t54 * ReceiveRecordAsyncResult_get_AsyncException_m6114 (ReceiveRecordAsyncResult_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m6115 (ReceiveRecordAsyncResult_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1131 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6116 (ReceiveRecordAsyncResult_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m6117 (ReceiveRecordAsyncResult_t1081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6118 (ReceiveRecordAsyncResult_t1081 * __this, Exception_t54 * ___ex, ByteU5BU5D_t169* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6119 (ReceiveRecordAsyncResult_t1081 * __this, Exception_t54 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6120 (ReceiveRecordAsyncResult_t1081 * __this, ByteU5BU5D_t169* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
