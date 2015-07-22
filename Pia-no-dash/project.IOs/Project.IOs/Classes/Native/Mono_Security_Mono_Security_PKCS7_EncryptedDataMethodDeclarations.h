#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1007;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1006;
// System.Byte[]
struct ByteU5BU5D_t169;
// Mono.Security.ASN1
struct ASN1_t1003;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m5677 (EncryptedData_t1007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m5678 (EncryptedData_t1007 * __this, ASN1_t1003 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1006 * EncryptedData_get_EncryptionAlgorithm_m5679 (EncryptedData_t1007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t169* EncryptedData_get_EncryptedContent_m5680 (EncryptedData_t1007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
