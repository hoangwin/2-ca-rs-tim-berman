#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1405;
// Mono.Math.BigInteger
struct BigInteger_t1404;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8497 (ModulusRing_t1405 * __this, BigInteger_t1404 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8498 (ModulusRing_t1405 * __this, BigInteger_t1404 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1404 * ModulusRing_Multiply_m8499 (ModulusRing_t1405 * __this, BigInteger_t1404 * ___a, BigInteger_t1404 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1404 * ModulusRing_Difference_m8500 (ModulusRing_t1405 * __this, BigInteger_t1404 * ___a, BigInteger_t1404 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1404 * ModulusRing_Pow_m8501 (ModulusRing_t1405 * __this, BigInteger_t1404 * ___a, BigInteger_t1404 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1404 * ModulusRing_Pow_m8502 (ModulusRing_t1405 * __this, uint32_t ___b, BigInteger_t1404 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
