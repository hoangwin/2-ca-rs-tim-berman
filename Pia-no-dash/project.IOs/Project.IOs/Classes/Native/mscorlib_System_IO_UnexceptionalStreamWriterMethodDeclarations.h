#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1526;
// System.IO.Stream
struct Stream_t1080;
// System.Text.Encoding
struct Encoding_t338;
// System.Char[]
struct CharU5BU5D_t286;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m9659 (UnexceptionalStreamWriter_t1526 * __this, Stream_t1080 * ___stream, Encoding_t338 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m9660 (UnexceptionalStreamWriter_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m9661 (UnexceptionalStreamWriter_t1526 * __this, CharU5BU5D_t286* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m9662 (UnexceptionalStreamWriter_t1526 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m9663 (UnexceptionalStreamWriter_t1526 * __this, CharU5BU5D_t286* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m9664 (UnexceptionalStreamWriter_t1526 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
