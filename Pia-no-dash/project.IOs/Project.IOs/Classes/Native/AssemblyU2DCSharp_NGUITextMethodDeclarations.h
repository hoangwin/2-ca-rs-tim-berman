#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUIText
struct NGUIText_t181;
// System.String
struct String_t;
// BetterList`1<UnityEngine.Color>
struct BetterList_1_t180;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// System.Text.StringBuilder
struct StringBuilder_t320;
// UnityEngine.Font
struct Font_t131;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void NGUIText::.cctor()
extern "C" void NGUIText__cctor_m946 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIText::ParseColor(System.String,System.Int32)
extern "C" Color_t9  NGUIText_ParseColor_m947 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::EncodeColor(UnityEngine.Color)
extern "C" String_t* NGUIText_EncodeColor_m948 (Object_t * __this /* static, unused */, Color_t9  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::ParseSymbol(System.String,System.Int32)
extern "C" int32_t NGUIText_ParseSymbol_m949 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&)
extern "C" bool NGUIText_ParseSymbol_m950 (Object_t * __this /* static, unused */, String_t* ___text, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::ParseSymbol(System.String,System.Int32&,BetterList`1<UnityEngine.Color>,System.Boolean)
extern "C" bool NGUIText_ParseSymbol_m951 (Object_t * __this /* static, unused */, String_t* ___text, int32_t* ___index, BetterList_1_t180 * ___colors, bool ___premultiply, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIText::StripSymbols(System.String)
extern "C" String_t* NGUIText_StripSymbols_m952 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,System.Single)
extern "C" void NGUIText_Align_m953 (Object_t * __this /* static, unused */, BetterList_1_t207 * ___verts, int32_t ___indexOffset, float ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::EndLine(System.Text.StringBuilder&)
extern "C" void NGUIText_EndLine_m954 (Object_t * __this /* static, unused */, StringBuilder_t320 ** ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIText::CalculatePrintedSize(UnityEngine.Font,System.String)
extern "C" Vector2_t27  NGUIText_CalculatePrintedSize_m955 (Object_t * __this /* static, unused */, Font_t131 * ___font, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIText::CalculateOffsetToFit(UnityEngine.Font,System.String)
extern "C" int32_t NGUIText_CalculateOffsetToFit_m956 (Object_t * __this /* static, unused */, Font_t131 * ___font, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::RequestCharactersInTexture(UnityEngine.Font,System.String)
extern "C" void NGUIText_RequestCharactersInTexture_m957 (Object_t * __this /* static, unused */, Font_t131 * ___font, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUIText::WrapText(UnityEngine.Font,System.String,System.String&)
extern "C" bool NGUIText_WrapText_m958 (Object_t * __this /* static, unused */, Font_t131 * ___font, String_t* ___text, String_t** ___finalText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIText::Print(UnityEngine.Font,System.String,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void NGUIText_Print_m959 (Object_t * __this /* static, unused */, Font_t131 * ___font, String_t* ___text, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
