#pragma once
#include <stdint.h>
// UIProgressBar
struct UIProgressBar_t137;
// UIProgressBar/OnDragFinished
struct OnDragFinished_t136;
// UnityEngine.Transform
struct Transform_t32;
// UIWidget
struct UIWidget_t83;
// UnityEngine.Camera
struct Camera_t113;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t80;
// UIWidgetContainer
#include "AssemblyU2DCSharp_UIWidgetContainer.h"
// UIProgressBar/FillDirection
#include "AssemblyU2DCSharp_UIProgressBar_FillDirection.h"
// UIProgressBar
struct  UIProgressBar_t137  : public UIWidgetContainer_t84
{
	// UIProgressBar/OnDragFinished UIProgressBar::onDragFinished
	OnDragFinished_t136 * ___onDragFinished_3;
	// UnityEngine.Transform UIProgressBar::thumb
	Transform_t32 * ___thumb_4;
	// UIWidget UIProgressBar::mBG
	UIWidget_t83 * ___mBG_5;
	// UIWidget UIProgressBar::mFG
	UIWidget_t83 * ___mFG_6;
	// System.Single UIProgressBar::mValue
	float ___mValue_7;
	// UIProgressBar/FillDirection UIProgressBar::mFill
	int32_t ___mFill_8;
	// UnityEngine.Transform UIProgressBar::mTrans
	Transform_t32 * ___mTrans_9;
	// System.Boolean UIProgressBar::mIsDirty
	bool ___mIsDirty_10;
	// UnityEngine.Camera UIProgressBar::mCam
	Camera_t113 * ___mCam_11;
	// System.Single UIProgressBar::mOffset
	float ___mOffset_12;
	// System.Int32 UIProgressBar::numberOfSteps
	int32_t ___numberOfSteps_13;
	// System.Collections.Generic.List`1<EventDelegate> UIProgressBar::onChange
	List_1_t80 * ___onChange_14;
};
struct UIProgressBar_t137_StaticFields{
	// UIProgressBar UIProgressBar::current
	UIProgressBar_t137 * ___current_2;
};
