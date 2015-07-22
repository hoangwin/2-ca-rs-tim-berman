#pragma once
#include <stdint.h>
// BetterList`1<UIWidget>
struct BetterList_1_t214;
// UIPanel
struct UIPanel_t94;
// UIDrawCall
struct UIDrawCall_t197;
// UIGeometry
struct UIGeometry_t210;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t11;
// UIRect
#include "AssemblyU2DCSharp_UIRect.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIWidget/Pivot
#include "AssemblyU2DCSharp_UIWidget_Pivot.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UIWidget
struct  UIWidget_t83  : public UIRect_t108
{
	// UnityEngine.Color UIWidget::mColor
	Color_t9  ___mColor_20;
	// UIWidget/Pivot UIWidget::mPivot
	int32_t ___mPivot_21;
	// System.Int32 UIWidget::mWidth
	int32_t ___mWidth_22;
	// System.Int32 UIWidget::mHeight
	int32_t ___mHeight_23;
	// System.Int32 UIWidget::mDepth
	int32_t ___mDepth_24;
	// System.Boolean UIWidget::autoResizeBoxCollider
	bool ___autoResizeBoxCollider_25;
	// System.Boolean UIWidget::hideIfOffScreen
	bool ___hideIfOffScreen_26;
	// UIPanel UIWidget::mPanel
	UIPanel_t94 * ___mPanel_27;
	// System.Boolean UIWidget::mPlayMode
	bool ___mPlayMode_28;
	// UnityEngine.Vector4 UIWidget::mDrawRegion
	Vector4_t198  ___mDrawRegion_29;
	// System.Boolean UIWidget::mStarted
	bool ___mStarted_30;
	// UnityEngine.Matrix4x4 UIWidget::mLocalToPanel
	Matrix4x4_t215  ___mLocalToPanel_31;
	// System.Boolean UIWidget::mIsVisible
	bool ___mIsVisible_32;
	// System.Boolean UIWidget::mIsInFront
	bool ___mIsInFront_33;
	// System.Single UIWidget::mLastAlpha
	float ___mLastAlpha_34;
	// UIDrawCall UIWidget::drawCall
	UIDrawCall_t197 * ___drawCall_35;
	// UIGeometry UIWidget::mGeom
	UIGeometry_t210 * ___mGeom_36;
	// UnityEngine.Vector3[] UIWidget::mCorners
	Vector3U5BU5D_t11* ___mCorners_37;
	// UnityEngine.Vector3 UIWidget::mOldV0
	Vector3_t10  ___mOldV0_38;
	// UnityEngine.Vector3 UIWidget::mOldV1
	Vector3_t10  ___mOldV1_39;
};
struct UIWidget_t83_StaticFields{
	// BetterList`1<UIWidget> UIWidget::list
	BetterList_1_t214 * ___list_19;
};
