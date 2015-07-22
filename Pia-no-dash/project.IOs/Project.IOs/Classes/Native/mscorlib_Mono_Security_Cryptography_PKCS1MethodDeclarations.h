﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1414;
// System.Byte[]
struct ByteU5BU5D_t169;
// System.Security.Cryptography.RSA
struct RSA_t1022;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t973;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1014;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m8638 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m8639 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___array1, ByteU5BU5D_t169* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t169* PKCS1_I2OSP_m8640 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t169* PKCS1_OS2IP_m8641 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t169* PKCS1_RSAEP_m8642 (Object_t * __this /* static, unused */, RSA_t1022 * ___rsa, ByteU5BU5D_t169* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t169* PKCS1_RSASP1_m8643 (Object_t * __this /* static, unused */, RSA_t1022 * ___rsa, ByteU5BU5D_t169* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t169* PKCS1_RSAVP1_m8644 (Object_t * __this /* static, unused */, RSA_t1022 * ___rsa, ByteU5BU5D_t169* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t169* PKCS1_Encrypt_v15_m8645 (Object_t * __this /* static, unused */, RSA_t1022 * ___rsa, RandomNumberGenerator_t973 * ___rng, ByteU5BU5D_t169* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t169* PKCS1_Sign_v15_m8646 (Object_t * __this /* static, unused */, RSA_t1022 * ___rsa, HashAlgorithm_t1014 * ___hash, ByteU5BU5D_t169* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m8647 (Object_t * __this /* static, unused */, RSA_t1022 * ___rsa, HashAlgorithm_t1014 * ___hash, ByteU5BU5D_t169* ___hashValue, ByteU5BU5D_t169* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m8648 (Object_t * __this /* static, unused */, RSA_t1022 * ___rsa, HashAlgorithm_t1014 * ___hash, ByteU5BU5D_t169* ___hashValue, ByteU5BU5D_t169* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t169* PKCS1_Encode_v15_m8649 (Object_t * __this /* static, unused */, HashAlgorithm_t1014 * ___hash, ByteU5BU5D_t169* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;