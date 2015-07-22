#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t1044;
// System.String[]
struct StringU5BU5D_t284;
// Mono.Security.ASN1
struct ASN1_t1003;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m5913 (GeneralNames_t1044 * __this, ASN1_t1003 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t284* GeneralNames_get_DNSNames_m5914 (GeneralNames_t1044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t284* GeneralNames_get_IPAddresses_m5915 (GeneralNames_t1044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m5916 (GeneralNames_t1044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
