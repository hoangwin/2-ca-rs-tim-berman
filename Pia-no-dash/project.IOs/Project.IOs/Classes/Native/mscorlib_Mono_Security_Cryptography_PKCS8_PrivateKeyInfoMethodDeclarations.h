#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1415;
// System.Byte[]
struct ByteU5BU5D_t169;
// System.Security.Cryptography.RSA
struct RSA_t1022;
// System.Security.Cryptography.DSA
struct DSA_t1028;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m8650 (PrivateKeyInfo_t1415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m8651 (PrivateKeyInfo_t1415 * __this, ByteU5BU5D_t169* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t169* PrivateKeyInfo_get_PrivateKey_m8652 (PrivateKeyInfo_t1415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m8653 (PrivateKeyInfo_t1415 * __this, ByteU5BU5D_t169* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t169* PrivateKeyInfo_RemoveLeadingZero_m8654 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t169* PrivateKeyInfo_Normalize_m8655 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t1022 * PrivateKeyInfo_DecodeRSA_m8656 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t1028 * PrivateKeyInfo_DecodeDSA_m8657 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___privateKey, DSAParameters_t1130  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
