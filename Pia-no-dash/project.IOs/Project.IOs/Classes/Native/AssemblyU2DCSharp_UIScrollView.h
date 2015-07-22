#pragma once
#include <stdint.h>
// UIScrollBar
struct UIScrollBar_t141;
// UIScrollView/OnDragFinished
struct OnDragFinished_t146;
// UnityEngine.Transform
struct Transform_t32;
// UIPanel
struct UIPanel_t94;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIScrollView/Movement
#include "AssemblyU2DCSharp_UIScrollView_Movement.h"
// UIScrollView/DragEffect
#include "AssemblyU2DCSharp_UIScrollView_DragEffect.h"
// UIScrollView/ShowCondition
#include "AssemblyU2DCSharp_UIScrollView_ShowCondition.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UIScrollView
struct  UIScrollView_t92  : public MonoBehaviour_t2
{
	// UIScrollView/Movement UIScrollView::movement
	int32_t ___movement_2;
	// UIScrollView/DragEffect UIScrollView::dragEffect
	int32_t ___dragEffect_3;
	// System.Boolean UIScrollView::restrictWithinPanel
	bool ___restrictWithinPanel_4;
	// System.Boolean UIScrollView::disableDragIfFits
	bool ___disableDragIfFits_5;
	// System.Boolean UIScrollView::smoothDragStart
	bool ___smoothDragStart_6;
	// System.Boolean UIScrollView::iOSDragEmulation
	bool ___iOSDragEmulation_7;
	// System.Single UIScrollView::scrollWheelFactor
	float ___scrollWheelFactor_8;
	// System.Single UIScrollView::momentumAmount
	float ___momentumAmount_9;
	// UIScrollBar UIScrollView::horizontalScrollBar
	UIScrollBar_t141 * ___horizontalScrollBar_10;
	// UIScrollBar UIScrollView::verticalScrollBar
	UIScrollBar_t141 * ___verticalScrollBar_11;
	// UIScrollView/ShowCondition UIScrollView::showScrollBars
	int32_t ___showScrollBars_12;
	// UnityEngine.Vector2 UIScrollView::customMovement
	Vector2_t27  ___customMovement_13;
	// UnityEngine.Vector2 UIScrollView::relativePositionOnReset
	Vector2_t27  ___relativePositionOnReset_14;
	// UIScrollView/OnDragFinished UIScrollView::onDragFinished
	OnDragFinished_t146 * ___onDragFinished_15;
	// UnityEngine.Vector3 UIScrollView::scale
	Vector3_t10  ___scale_16;
	// UnityEngine.Transform UIScrollView::mTrans
	Transform_t32 * ___mTrans_17;
	// UIPanel UIScrollView::mPanel
	UIPanel_t94 * ___mPanel_18;
	// UnityEngine.Plane UIScrollView::mPlane
	Plane_t110  ___mPlane_19;
	// UnityEngine.Vector3 UIScrollView::mLastPos
	Vector3_t10  ___mLastPos_20;
	// System.Boolean UIScrollView::mPressed
	bool ___mPressed_21;
	// UnityEngine.Vector3 UIScrollView::mMomentum
	Vector3_t10  ___mMomentum_22;
	// System.Single UIScrollView::mScroll
	float ___mScroll_23;
	// UnityEngine.Bounds UIScrollView::mBounds
	Bounds_t111  ___mBounds_24;
	// System.Boolean UIScrollView::mCalculatedBounds
	bool ___mCalculatedBounds_25;
	// System.Boolean UIScrollView::mShouldMove
	bool ___mShouldMove_26;
	// System.Boolean UIScrollView::mIgnoreCallbacks
	bool ___mIgnoreCallbacks_27;
	// System.Int32 UIScrollView::mDragID
	int32_t ___mDragID_28;
	// UnityEngine.Vector2 UIScrollView::mDragStartOffset
	Vector2_t27  ___mDragStartOffset_29;
	// System.Boolean UIScrollView::mDragStarted
	bool ___mDragStarted_30;
};
