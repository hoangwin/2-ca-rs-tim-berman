#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X501
struct X501_t1426;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1421;
// System.Text.StringBuilder
struct StringBuilder_t320;

// System.Void Mono.Security.X509.X501::.cctor()
extern "C" void X501__cctor_m8734 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" String_t* X501_ToString_m8735 (Object_t * __this /* static, unused */, ASN1_t1421 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C" String_t* X501_ToString_m8736 (Object_t * __this /* static, unused */, ASN1_t1421 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" void X501_AppendEntry_m8737 (Object_t * __this /* static, unused */, StringBuilder_t320 * ___sb, ASN1_t1421 * ___entry, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
