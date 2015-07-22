#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1103;
struct RSAParameters_t1103_marshaled;

void RSAParameters_t1103_marshal(const RSAParameters_t1103& unmarshaled, RSAParameters_t1103_marshaled& marshaled);
void RSAParameters_t1103_marshal_back(const RSAParameters_t1103_marshaled& marshaled, RSAParameters_t1103& unmarshaled);
void RSAParameters_t1103_marshal_cleanup(RSAParameters_t1103_marshaled& marshaled);
