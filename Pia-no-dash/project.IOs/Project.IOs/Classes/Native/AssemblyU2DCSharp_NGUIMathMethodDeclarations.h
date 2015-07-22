#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUIMath
struct NGUIMath_t177;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t32;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t26;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.Camera
struct Camera_t113;
// UIWidget
struct UIWidget_t83;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"

// System.Single NGUIMath::Lerp(System.Single,System.Single,System.Single)
extern "C" float NGUIMath_Lerp_m903 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ClampIndex(System.Int32,System.Int32)
extern "C" int32_t NGUIMath_ClampIndex_m904 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::RepeatIndex(System.Int32,System.Int32)
extern "C" int32_t NGUIMath_RepeatIndex_m905 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::WrapAngle(System.Single)
extern "C" float NGUIMath_WrapAngle_m906 (Object_t * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::Wrap01(System.Single)
extern "C" float NGUIMath_Wrap01_m907 (Object_t * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::HexToDecimal(System.Char)
extern "C" int32_t NGUIMath_HexToDecimal_m908 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char NGUIMath::DecimalToHexChar(System.Int32)
extern "C" uint16_t NGUIMath_DecimalToHexChar_m909 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::DecimalToHex(System.Int32)
extern "C" String_t* NGUIMath_DecimalToHex_m910 (Object_t * __this /* static, unused */, int32_t ___num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUIMath::ColorToInt(UnityEngine.Color)
extern "C" int32_t NGUIMath_ColorToInt_m911 (Object_t * __this /* static, unused */, Color_t9  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::IntToColor(System.Int32)
extern "C" Color_t9  NGUIMath_IntToColor_m912 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUIMath::IntToBinary(System.Int32,System.Int32)
extern "C" String_t* NGUIMath_IntToBinary_m913 (Object_t * __this /* static, unused */, int32_t ___val, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUIMath::HexToColor(System.UInt32)
extern "C" Color_t9  NGUIMath_HexToColor_m914 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToTexCoords(UnityEngine.Rect,System.Int32,System.Int32)
extern "C" Rect_t31  NGUIMath_ConvertToTexCoords_m915 (Object_t * __this /* static, unused */, Rect_t31  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::ConvertToPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" Rect_t31  NGUIMath_ConvertToPixels_m916 (Object_t * __this /* static, unused */, Rect_t31  ___rect, int32_t ___width, int32_t ___height, bool ___round, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect)
extern "C" Rect_t31  NGUIMath_MakePixelPerfect_m917 (Object_t * __this /* static, unused */, Rect_t31  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect NGUIMath::MakePixelPerfect(UnityEngine.Rect,System.Int32,System.Int32)
extern "C" Rect_t31  NGUIMath_MakePixelPerfect_m918 (Object_t * __this /* static, unused */, Rect_t31  ___rect, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::ConstrainRect(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t27  NGUIMath_ConstrainRect_m919 (Object_t * __this /* static, unused */, Vector2_t27  ___minRect, Vector2_t27  ___maxRect, Vector2_t27  ___minArea, Vector2_t27  ___maxArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateAbsoluteWidgetBounds(UnityEngine.Transform)
extern "C" Bounds_t111  NGUIMath_CalculateAbsoluteWidgetBounds_m920 (Object_t * __this /* static, unused */, Transform_t32 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform)
extern "C" Bounds_t111  NGUIMath_CalculateRelativeWidgetBounds_m921 (Object_t * __this /* static, unused */, Transform_t32 * ___trans, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,System.Boolean)
extern "C" Bounds_t111  NGUIMath_CalculateRelativeWidgetBounds_m922 (Object_t * __this /* static, unused */, Transform_t32 * ___trans, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform)
extern "C" Bounds_t111  NGUIMath_CalculateRelativeWidgetBounds_m923 (Object_t * __this /* static, unused */, Transform_t32 * ___root, Transform_t32 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds NGUIMath::CalculateRelativeWidgetBounds(UnityEngine.Transform,UnityEngine.Transform,System.Boolean)
extern "C" Bounds_t111  NGUIMath_CalculateRelativeWidgetBounds_m924 (Object_t * __this /* static, unused */, Transform_t32 * ___root, Transform_t32 * ___child, bool ___considerInactive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringDampen(UnityEngine.Vector3&,System.Single,System.Single)
extern "C" Vector3_t10  NGUIMath_SpringDampen_m925 (Object_t * __this /* static, unused */, Vector3_t10 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringDampen(UnityEngine.Vector2&,System.Single,System.Single)
extern "C" Vector2_t27  NGUIMath_SpringDampen_m926 (Object_t * __this /* static, unused */, Vector2_t27 * ___velocity, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single)
extern "C" float NGUIMath_SpringLerp_m927 (Object_t * __this /* static, unused */, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::SpringLerp(System.Single,System.Single,System.Single,System.Single)
extern "C" float NGUIMath_SpringLerp_m928 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::SpringLerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single)
extern "C" Vector2_t27  NGUIMath_SpringLerp_m929 (Object_t * __this /* static, unused */, Vector2_t27  ___from, Vector2_t27  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUIMath::SpringLerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" Vector3_t10  NGUIMath_SpringLerp_m930 (Object_t * __this /* static, unused */, Vector3_t10  ___from, Vector3_t10  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NGUIMath::SpringLerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" Quaternion_t60  NGUIMath_SpringLerp_m931 (Object_t * __this /* static, unused */, Quaternion_t60  ___from, Quaternion_t60  ___to, float ___strength, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::RotateTowards(System.Single,System.Single,System.Single)
extern "C" float NGUIMath_RotateTowards_m932 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___maxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistancePointToLineSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float NGUIMath_DistancePointToLineSegment_m933 (Object_t * __this /* static, unused */, Vector2_t27  ___point, Vector2_t27  ___a, Vector2_t27  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector2[],UnityEngine.Vector2)
extern "C" float NGUIMath_DistanceToRectangle_m934 (Object_t * __this /* static, unused */, Vector2U5BU5D_t26* ___screenPoints, Vector2_t27  ___mousePos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUIMath::DistanceToRectangle(UnityEngine.Vector3[],UnityEngine.Vector2,UnityEngine.Camera)
extern "C" float NGUIMath_DistanceToRectangle_m935 (Object_t * __this /* static, unused */, Vector3U5BU5D_t11* ___worldPoints, Vector2_t27  ___mousePos, Camera_t113 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 NGUIMath::GetPivotOffset(UIWidget/Pivot)
extern "C" Vector2_t27  NGUIMath_GetPivotOffset_m936 (Object_t * __this /* static, unused */, int32_t ___pv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::MoveWidget(UIWidget,System.Single,System.Single)
extern "C" void NGUIMath_MoveWidget_m937 (Object_t * __this /* static, unused */, UIWidget_t83 * ___w, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::ResizeWidget(UIWidget,UIWidget/Pivot,System.Single,System.Single,System.Int32,System.Int32)
extern "C" void NGUIMath_ResizeWidget_m938 (Object_t * __this /* static, unused */, UIWidget_t83 * ___w, int32_t ___pivot, float ___x, float ___y, int32_t ___minWidth, int32_t ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIMath::AdjustWidget(UIWidget,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C" void NGUIMath_AdjustWidget_m939 (Object_t * __this /* static, unused */, UIWidget_t83 * ___w, float ___left, float ___bottom, float ___right, float ___top, int32_t ___minWidth, int32_t ___minHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
