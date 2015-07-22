#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1217;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1215;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1118;
// System.Security.Cryptography.Oid
struct Oid_t1216;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1030;
// System.Byte[]
struct ByteU5BU5D_t169;
// System.Security.Cryptography.DSA
struct DSA_t1028;
// System.Security.Cryptography.RSA
struct RSA_t1022;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m6773 (PublicKey_t1217 * __this, X509Certificate_t1030 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1215 * PublicKey_get_EncodedKeyValue_m6774 (PublicKey_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1215 * PublicKey_get_EncodedParameters_m6775 (PublicKey_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1118 * PublicKey_get_Key_m6776 (PublicKey_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1216 * PublicKey_get_Oid_m6777 (PublicKey_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t169* PublicKey_GetUnsignedBigInteger_m6778 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1028 * PublicKey_DecodeDSA_m6779 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___rawPublicKey, ByteU5BU5D_t169* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1022 * PublicKey_DecodeRSA_m6780 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
