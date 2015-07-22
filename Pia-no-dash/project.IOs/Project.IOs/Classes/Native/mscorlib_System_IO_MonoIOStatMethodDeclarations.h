#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIOStat
struct MonoIOStat_t1509;
struct MonoIOStat_t1509_marshaled;

void MonoIOStat_t1509_marshal(const MonoIOStat_t1509& unmarshaled, MonoIOStat_t1509_marshaled& marshaled);
void MonoIOStat_t1509_marshal_back(const MonoIOStat_t1509_marshaled& marshaled, MonoIOStat_t1509& unmarshaled);
void MonoIOStat_t1509_marshal_cleanup(MonoIOStat_t1509_marshaled& marshaled);
