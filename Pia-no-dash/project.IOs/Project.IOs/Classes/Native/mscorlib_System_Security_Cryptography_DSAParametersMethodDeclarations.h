#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1130;
struct DSAParameters_t1130_marshaled;

void DSAParameters_t1130_marshal(const DSAParameters_t1130& unmarshaled, DSAParameters_t1130_marshaled& marshaled);
void DSAParameters_t1130_marshal_back(const DSAParameters_t1130_marshaled& marshaled, DSAParameters_t1130& unmarshaled);
void DSAParameters_t1130_marshal_cleanup(DSAParameters_t1130_marshaled& marshaled);
