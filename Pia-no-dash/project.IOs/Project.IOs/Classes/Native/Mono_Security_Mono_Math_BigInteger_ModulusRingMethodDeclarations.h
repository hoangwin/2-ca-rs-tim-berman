#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t997;
// Mono.Math.BigInteger
struct BigInteger_t996;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5570 (ModulusRing_t997 * __this, BigInteger_t996 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5571 (ModulusRing_t997 * __this, BigInteger_t996 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t996 * ModulusRing_Multiply_m5572 (ModulusRing_t997 * __this, BigInteger_t996 * ___a, BigInteger_t996 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t996 * ModulusRing_Difference_m5573 (ModulusRing_t997 * __this, BigInteger_t996 * ___a, BigInteger_t996 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t996 * ModulusRing_Pow_m5574 (ModulusRing_t997 * __this, BigInteger_t996 * ___a, BigInteger_t996 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t996 * ModulusRing_Pow_m5575 (ModulusRing_t997 * __this, uint32_t ___b, BigInteger_t996 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
