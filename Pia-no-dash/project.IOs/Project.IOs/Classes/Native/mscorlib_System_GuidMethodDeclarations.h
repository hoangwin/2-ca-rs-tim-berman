#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Guid
struct Guid_t66;
// System.Byte[]
struct ByteU5BU5D_t169;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t320;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1971;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid::.ctor(System.Byte[])
extern "C" void Guid__ctor_m12022 (Guid_t66 * __this, ByteU5BU5D_t169* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void Guid__ctor_m12023 (Guid_t66 * __this, int32_t ___a, int16_t ___b, int16_t ___c, uint8_t ___d, uint8_t ___e, uint8_t ___f, uint8_t ___g, uint8_t ___h, uint8_t ___i, uint8_t ___j, uint8_t ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.cctor()
extern "C" void Guid__cctor_m12024 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckNull(System.Object)
extern "C" void Guid_CheckNull_m12025 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
extern "C" void Guid_CheckLength_m12026 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___o, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
extern "C" void Guid_CheckArray_m12027 (Object_t * __this /* static, unused */, ByteU5BU5D_t169* ___o, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
extern "C" int32_t Guid_Compare_m12028 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Object)
extern "C" int32_t Guid_CompareTo_m12029 (Guid_t66 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Object)
extern "C" bool Guid_Equals_m12030 (Guid_t66 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Guid)
extern "C" int32_t Guid_CompareTo_m12031 (Guid_t66 * __this, Guid_t66  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Guid)
extern "C" bool Guid_Equals_m12032 (Guid_t66 * __this, Guid_t66  ___g, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::GetHashCode()
extern "C" int32_t Guid_GetHashCode_m12033 (Guid_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Guid::ToHex(System.Int32)
extern "C" uint16_t Guid_ToHex_m12034 (Object_t * __this /* static, unused */, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C" Guid_t66  Guid_NewGuid_m434 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
extern "C" void Guid_AppendInt_m12035 (Object_t * __this /* static, unused */, StringBuilder_t320 * ___builder, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
extern "C" void Guid_AppendShort_m12036 (Object_t * __this /* static, unused */, StringBuilder_t320 * ___builder, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
extern "C" void Guid_AppendByte_m12037 (Object_t * __this /* static, unused */, StringBuilder_t320 * ___builder, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Guid_BaseToString_m12038 (Guid_t66 * __this, bool ___h, bool ___p, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C" String_t* Guid_ToString_m435 (Guid_t66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
extern "C" String_t* Guid_ToString_m5464 (Guid_t66 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Guid_ToString_m12039 (Guid_t66 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
