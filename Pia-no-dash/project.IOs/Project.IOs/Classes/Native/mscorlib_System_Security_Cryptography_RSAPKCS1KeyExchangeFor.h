#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1022;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t973;
// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricKeyExchangeF.h"
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t1164  : public AsymmetricKeyExchangeFormatter_t1762
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t1022 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t973 * ___random_1;
};
