#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1022;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1014;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t33;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t1084  : public AsymmetricSignatureDeformatter_t1085
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t1022 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t1014 * ___hash_1;
};
struct RSASslSignatureDeformatter_t1084_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t33 * ___U3CU3Ef__switchU24map15_2;
};
