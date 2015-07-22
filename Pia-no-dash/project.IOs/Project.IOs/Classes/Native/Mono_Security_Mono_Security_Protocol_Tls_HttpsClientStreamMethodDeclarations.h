#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1078;
// System.IO.Stream
struct Stream_t1080;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1099;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1075;
// System.Byte[]
struct ByteU5BU5D_t169;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1100;
// System.Int32[]
struct Int32U5BU5D_t195;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1118;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m6104 (HttpsClientStream_t1078 * __this, Stream_t1080 * ___stream, X509CertificateCollection_t1099 * ___clientCertificates, HttpWebRequest_t1075 * ___request, ByteU5BU5D_t169* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m6105 (HttpsClientStream_t1078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m6106 (HttpsClientStream_t1078 * __this, X509Certificate_t1100 * ___certificate, Int32U5BU5D_t195* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1100 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m6107 (Object_t * __this /* static, unused */, X509CertificateCollection_t1099 * ___clientCerts, X509Certificate_t1100 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1099 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1118 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m6108 (Object_t * __this /* static, unused */, X509Certificate_t1100 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
