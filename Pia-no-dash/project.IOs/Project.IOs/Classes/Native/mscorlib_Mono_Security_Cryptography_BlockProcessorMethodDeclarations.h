#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1409;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t986;
// System.Byte[]
struct ByteU5BU5D_t169;

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
extern "C" void BlockProcessor__ctor_m8579 (BlockProcessor_t1409 * __this, Object_t * ___transform, int32_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
extern "C" void BlockProcessor_Finalize_m8580 (BlockProcessor_t1409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
extern "C" void BlockProcessor_Initialize_m8581 (BlockProcessor_t1409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
extern "C" void BlockProcessor_Core_m8582 (BlockProcessor_t1409 * __this, ByteU5BU5D_t169* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void BlockProcessor_Core_m8583 (BlockProcessor_t1409 * __this, ByteU5BU5D_t169* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
extern "C" ByteU5BU5D_t169* BlockProcessor_Final_m8584 (BlockProcessor_t1409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
