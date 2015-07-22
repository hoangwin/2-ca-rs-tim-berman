#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello
struct TlsClientHello_t1109;
// Mono.Security.Protocol.Tls.Context
struct Context_t1057;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientHello__ctor_m6379 (TlsClientHello_t1109 * __this, Context_t1057 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::Update()
extern "C" void TlsClientHello_Update_m6380 (TlsClientHello_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsSsl3()
extern "C" void TlsClientHello_ProcessAsSsl3_m6381 (TlsClientHello_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsTls1()
extern "C" void TlsClientHello_ProcessAsTls1_m6382 (TlsClientHello_t1109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
