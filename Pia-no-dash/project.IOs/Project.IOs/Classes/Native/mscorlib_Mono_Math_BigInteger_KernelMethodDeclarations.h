#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1406;
// Mono.Math.BigInteger
struct BigInteger_t1404;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1976;
// System.UInt32[]
struct UInt32U5BU5D_t980;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1404 * Kernel_AddSameSign_m8503 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___bi1, BigInteger_t1404 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1404 * Kernel_Subtract_m8504 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___big, BigInteger_t1404 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m8505 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___big, BigInteger_t1404 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m8506 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___bi1, BigInteger_t1404 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m8507 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___bi1, BigInteger_t1404 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m8508 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m8509 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1976* Kernel_DwordDivMod_m8510 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1976* Kernel_multiByteDivide_m8511 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___bi1, BigInteger_t1404 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1404 * Kernel_LeftShift_m8512 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1404 * Kernel_RightShift_m8513 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t1404 * Kernel_MultiplyByDword_m8514 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m8515 (Object_t * __this /* static, unused */, UInt32U5BU5D_t980* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t980* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t980* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m8516 (Object_t * __this /* static, unused */, UInt32U5BU5D_t980* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t980* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t980* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m8517 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1404 * Kernel_modInverse_m8518 (Object_t * __this /* static, unused */, BigInteger_t1404 * ___bi, BigInteger_t1404 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
