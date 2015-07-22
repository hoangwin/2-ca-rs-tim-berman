#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ByteReader
struct ByteReader_t170;
// System.Byte[]
struct ByteU5BU5D_t169;
// UnityEngine.TextAsset
struct TextAsset_t319;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t175;

// System.Void ByteReader::.ctor(System.Byte[])
extern "C" void ByteReader__ctor_m844 (ByteReader_t170 * __this, ByteU5BU5D_t169* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ByteReader::.ctor(UnityEngine.TextAsset)
extern "C" void ByteReader__ctor_m845 (ByteReader_t170 * __this, TextAsset_t319 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ByteReader::get_canRead()
extern "C" bool ByteReader_get_canRead_m846 (ByteReader_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ByteReader_ReadLine_m847 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___buffer, int32_t ___start, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ByteReader::ReadLine()
extern "C" String_t* ByteReader_ReadLine_m848 (ByteReader_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> ByteReader::ReadDictionary()
extern "C" Dictionary_2_t175 * ByteReader_ReadDictionary_m849 (ByteReader_t170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
