#pragma once
#include <stdint.h>
// BetterList`1<UIPanel>
struct BetterList_1_t274;
// UIPanel/OnChangeDelegate
struct OnChangeDelegate_t273;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t207;
// BetterList`1<UnityEngine.Vector4>
struct BetterList_1_t275;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t208;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t209;
// UnityEngine.Camera
struct Camera_t113;
// System.Single[]
struct SingleU5BU5D_t29;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UIRect
#include "AssemblyU2DCSharp_UIRect.h"
// UIPanel/RenderQueue
#include "AssemblyU2DCSharp_UIPanel_RenderQueue.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UIDrawCall/Clipping
#include "AssemblyU2DCSharp_UIDrawCall_Clipping.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIPanel
struct  UIPanel_t94  : public UIRect_t108
{
	// UIPanel/OnChangeDelegate UIPanel::onChange
	OnChangeDelegate_t273 * ___onChange_20;
	// System.Boolean UIPanel::showInPanelTool
	bool ___showInPanelTool_21;
	// System.Boolean UIPanel::generateNormals
	bool ___generateNormals_22;
	// System.Boolean UIPanel::widgetsAreStatic
	bool ___widgetsAreStatic_23;
	// System.Boolean UIPanel::cullWhileDragging
	bool ___cullWhileDragging_24;
	// System.Boolean UIPanel::alwaysOnScreen
	bool ___alwaysOnScreen_25;
	// System.Boolean UIPanel::anchorOffset
	bool ___anchorOffset_26;
	// UIPanel/RenderQueue UIPanel::renderQueue
	int32_t ___renderQueue_27;
	// System.Int32 UIPanel::startingRenderQueue
	int32_t ___startingRenderQueue_28;
	// UnityEngine.Matrix4x4 UIPanel::worldToLocal
	Matrix4x4_t215  ___worldToLocal_29;
	// System.Single UIPanel::mAlpha
	float ___mAlpha_30;
	// UIDrawCall/Clipping UIPanel::mClipping
	int32_t ___mClipping_31;
	// UnityEngine.Vector4 UIPanel::mClipRange
	Vector4_t198  ___mClipRange_32;
	// UnityEngine.Vector2 UIPanel::mClipSoftness
	Vector2_t27  ___mClipSoftness_33;
	// System.Int32 UIPanel::mDepth
	int32_t ___mDepth_34;
	// UnityEngine.Camera UIPanel::mCam
	Camera_t113 * ___mCam_41;
	// System.Single UIPanel::mCullTime
	float ___mCullTime_42;
	// System.Single UIPanel::mUpdateTime
	float ___mUpdateTime_43;
	// System.Int32 UIPanel::mMatrixFrame
	int32_t ___mMatrixFrame_44;
	// System.Int32 UIPanel::mLayer
	int32_t ___mLayer_45;
	// UnityEngine.Vector2 UIPanel::mClipOffset
	Vector2_t27  ___mClipOffset_46;
	// UnityEngine.Vector2 UIPanel::mMin
	Vector2_t27  ___mMin_48;
	// UnityEngine.Vector2 UIPanel::mMax
	Vector2_t27  ___mMax_49;
	// System.Boolean UIPanel::mHalfPixelOffset
	bool ___mHalfPixelOffset_50;
};
struct UIPanel_t94_StaticFields{
	// BetterList`1<UIPanel> UIPanel::list
	BetterList_1_t274 * ___list_19;
	// System.Boolean UIPanel::mRebuild
	bool ___mRebuild_35;
	// BetterList`1<UnityEngine.Vector3> UIPanel::mVerts
	BetterList_1_t207 * ___mVerts_36;
	// BetterList`1<UnityEngine.Vector3> UIPanel::mNorms
	BetterList_1_t207 * ___mNorms_37;
	// BetterList`1<UnityEngine.Vector4> UIPanel::mTans
	BetterList_1_t275 * ___mTans_38;
	// BetterList`1<UnityEngine.Vector2> UIPanel::mUvs
	BetterList_1_t208 * ___mUvs_39;
	// BetterList`1<UnityEngine.Color32> UIPanel::mCols
	BetterList_1_t209 * ___mCols_40;
	// System.Single[] UIPanel::mTemp
	SingleU5BU5D_t29* ___mTemp_47;
	// UnityEngine.Vector3[] UIPanel::mCorners
	Vector3U5BU5D_t11* ___mCorners_51;
};
