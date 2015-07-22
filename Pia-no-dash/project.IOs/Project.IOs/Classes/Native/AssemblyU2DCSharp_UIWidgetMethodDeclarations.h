#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIWidget
struct UIWidget_t83;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UnityEngine.Material
struct Material_t57;
// UnityEngine.Texture
struct Texture_t190;
// UnityEngine.Shader
struct Shader_t191;
// UIPanel
struct UIPanel_t94;
// UnityEngine.Transform
struct Transform_t32;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t275;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UIWidget::.ctor()
extern "C" void UIWidget__ctor_m1168 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::.cctor()
extern "C" void UIWidget__cctor_m1169 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_drawRegion()
extern "C" Vector4_t198  UIWidget_get_drawRegion_m1170 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_drawRegion(UnityEngine.Vector4)
extern "C" void UIWidget_set_drawRegion_m1171 (UIWidget_t83 * __this, Vector4_t198  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_pivotOffset()
extern "C" Vector2_t27  UIWidget_get_pivotOffset_m1172 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_width()
extern "C" int32_t UIWidget_get_width_m1173 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_width(System.Int32)
extern "C" void UIWidget_set_width_m1174 (UIWidget_t83 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_height()
extern "C" int32_t UIWidget_get_height_m1175 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_height(System.Int32)
extern "C" void UIWidget_set_height_m1176 (UIWidget_t83 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UIWidget::get_color()
extern "C" Color_t9  UIWidget_get_color_m1177 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_color(UnityEngine.Color)
extern "C" void UIWidget_set_color_m1178 (UIWidget_t83 * __this, Color_t9  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_alpha()
extern "C" float UIWidget_get_alpha_m1179 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_alpha(System.Single)
extern "C" void UIWidget_set_alpha_m1180 (UIWidget_t83 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_finalAlpha()
extern "C" float UIWidget_get_finalAlpha_m1181 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIWidget::get_cumulativeAlpha()
extern "C" float UIWidget_get_cumulativeAlpha_m1182 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_isVisible()
extern "C" bool UIWidget_get_isVisible_m1183 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasVertices()
extern "C" bool UIWidget_get_hasVertices_m1184 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_rawPivot()
extern "C" int32_t UIWidget_get_rawPivot_m1185 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_rawPivot(UIWidget/Pivot)
extern "C" void UIWidget_set_rawPivot_m1186 (UIWidget_t83 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget/Pivot UIWidget::get_pivot()
extern "C" int32_t UIWidget_get_pivot_m1187 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_pivot(UIWidget/Pivot)
extern "C" void UIWidget_set_pivot_m1188 (UIWidget_t83 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_depth()
extern "C" int32_t UIWidget_get_depth_m1189 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_depth(System.Int32)
extern "C" void UIWidget_set_depth_m1190 (UIWidget_t83 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_raycastDepth()
extern "C" int32_t UIWidget_get_raycastDepth_m1191 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_localCorners()
extern "C" Vector3U5BU5D_t11* UIWidget_get_localCorners_m1192 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_localSize()
extern "C" Vector2_t27  UIWidget_get_localSize_m1193 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::get_worldCorners()
extern "C" Vector3U5BU5D_t11* UIWidget_get_worldCorners_m1194 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_drawingDimensions()
extern "C" Vector4_t198  UIWidget_get_drawingDimensions_m1195 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIWidget::get_material()
extern "C" Material_t57 * UIWidget_get_material_m1196 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_material(UnityEngine.Material)
extern "C" void UIWidget_set_material_m1197 (UIWidget_t83 * __this, Material_t57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIWidget::get_mainTexture()
extern "C" Texture_t190 * UIWidget_get_mainTexture_m1198 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_mainTexture(UnityEngine.Texture)
extern "C" void UIWidget_set_mainTexture_m1199 (UIWidget_t83 * __this, Texture_t190 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UIWidget::get_shader()
extern "C" Shader_t191 * UIWidget_get_shader_m1200 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_shader(UnityEngine.Shader)
extern "C" void UIWidget_set_shader_m1201 (UIWidget_t83 * __this, Shader_t191 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIPanel UIWidget::get_panel()
extern "C" UIPanel_t94 * UIWidget_get_panel_m1202 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::set_panel(UIPanel)
extern "C" void UIWidget_set_panel_m1203 (UIWidget_t83 * __this, UIPanel_t94 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIWidget::get_relativeSize()
extern "C" Vector2_t27  UIWidget_get_relativeSize_m1204 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::get_hasBoxCollider()
extern "C" bool UIWidget_get_hasBoxCollider_m1205 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UIWidget::GetSides(UnityEngine.Transform)
extern "C" Vector3U5BU5D_t11* UIWidget_GetSides_m1206 (UIWidget_t83 * __this, Transform_t32 * ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetRect(System.Single,System.Single,System.Single,System.Single)
extern "C" void UIWidget_SetRect_m1207 (UIWidget_t83 * __this, float ___x, float ___y, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ResizeCollider()
extern "C" void UIWidget_ResizeCollider_m1208 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::CompareFunc(UIWidget,UIWidget)
extern "C" int32_t UIWidget_CompareFunc_m1209 (Object_t * __this /* static, unused */, UIWidget_t83 * ___left, UIWidget_t83 * ___right, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds()
extern "C" Bounds_t111  UIWidget_CalculateBounds_m1210 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UIWidget::CalculateBounds(UnityEngine.Transform)
extern "C" Bounds_t111  UIWidget_CalculateBounds_m1211 (UIWidget_t83 * __this, Transform_t32 * ___relativeParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::SetDirty()
extern "C" void UIWidget_SetDirty_m1212 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::RemoveFromPanel()
extern "C" void UIWidget_RemoveFromPanel_m1213 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MarkAsChanged()
extern "C" void UIWidget_MarkAsChanged_m1214 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CreatePanel()
extern "C" void UIWidget_CreatePanel_m1215 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::CheckLayer()
extern "C" void UIWidget_CheckLayer_m1216 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::ParentHasChanged()
extern "C" void UIWidget_ParentHasChanged_m1217 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::Awake()
extern "C" void UIWidget_Awake_m1218 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnEnable()
extern "C" void UIWidget_OnEnable_m1219 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::UpgradeFrom265()
extern "C" void UIWidget_UpgradeFrom265_m1220 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnStart()
extern "C" void UIWidget_OnStart_m1221 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnAnchor()
extern "C" void UIWidget_OnAnchor_m1222 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnUpdate()
extern "C" void UIWidget_OnUpdate_m1223 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnApplicationPause(System.Boolean)
extern "C" void UIWidget_OnApplicationPause_m1224 (UIWidget_t83 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDisable()
extern "C" void UIWidget_OnDisable_m1225 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnDestroy()
extern "C" void UIWidget_OnDestroy_m1226 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::HasTransformChanged()
extern "C" bool UIWidget_HasTransformChanged_m1227 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIWidget::UpdateGeometry(System.Boolean)
extern "C" bool UIWidget_UpdateGeometry_m1228 (UIWidget_t83 * __this, bool ___visible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::WriteToBuffers(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector4>)
extern "C" void UIWidget_WriteToBuffers_m1229 (UIWidget_t83 * __this, BetterList_1_t207 * ___v, BetterList_1_t208 * ___u, BetterList_1_t209 * ___c, BetterList_1_t207 * ___n, BetterList_1_t275 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::MakePixelPerfect()
extern "C" void UIWidget_MakePixelPerfect_m1230 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minWidth()
extern "C" int32_t UIWidget_get_minWidth_m1231 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIWidget::get_minHeight()
extern "C" int32_t UIWidget_get_minHeight_m1232 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UIWidget::get_border()
extern "C" Vector4_t198  UIWidget_get_border_m1233 (UIWidget_t83 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIWidget::OnFill(BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>)
extern "C" void UIWidget_OnFill_m1234 (UIWidget_t83 * __this, BetterList_1_t207 * ___verts, BetterList_1_t208 * ___uvs, BetterList_1_t209 * ___cols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
