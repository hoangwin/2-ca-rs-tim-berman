#pragma once
#include <stdint.h>
// BetterList`1<UICamera>
struct BetterList_1_t254;
// UICamera/OnScreenResize
struct OnScreenResize_t250;
// System.String
struct String_t;
// UICamera/OnCustomInput
struct OnCustomInput_t251;
// UICamera
struct UICamera_t252;
// UnityEngine.Camera
struct Camera_t113;
// UICamera/MouseOrTouch
struct MouseOrTouch_t246;
// UnityEngine.GameObject
struct GameObject_t23;
// UICamera/MouseOrTouch[]
struct MouseOrTouchU5BU5D_t255;
// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch>
struct Dictionary_2_t256;
// BetterList`1<UICamera/DepthEntry>
struct BetterList_1_t257;
// BetterList`1/CompareFunc<UICamera/DepthEntry>
struct CompareFunc_t258;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UICamera/EventType
#include "AssemblyU2DCSharp_UICamera_EventType.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UICamera/ControlScheme
#include "AssemblyU2DCSharp_UICamera_ControlScheme.h"
// UICamera/DepthEntry
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"
// UICamera
struct  UICamera_t252  : public MonoBehaviour_t2
{
	// UICamera/EventType UICamera::eventType
	int32_t ___eventType_4;
	// UnityEngine.LayerMask UICamera::eventReceiverMask
	LayerMask_t259  ___eventReceiverMask_5;
	// System.Boolean UICamera::debug
	bool ___debug_6;
	// System.Boolean UICamera::useMouse
	bool ___useMouse_7;
	// System.Boolean UICamera::useTouch
	bool ___useTouch_8;
	// System.Boolean UICamera::allowMultiTouch
	bool ___allowMultiTouch_9;
	// System.Boolean UICamera::useKeyboard
	bool ___useKeyboard_10;
	// System.Boolean UICamera::useController
	bool ___useController_11;
	// System.Boolean UICamera::stickyTooltip
	bool ___stickyTooltip_12;
	// System.Single UICamera::tooltipDelay
	float ___tooltipDelay_13;
	// System.Single UICamera::mouseDragThreshold
	float ___mouseDragThreshold_14;
	// System.Single UICamera::mouseClickThreshold
	float ___mouseClickThreshold_15;
	// System.Single UICamera::touchDragThreshold
	float ___touchDragThreshold_16;
	// System.Single UICamera::touchClickThreshold
	float ___touchClickThreshold_17;
	// System.Single UICamera::rangeDistance
	float ___rangeDistance_18;
	// System.String UICamera::scrollAxisName
	String_t* ___scrollAxisName_19;
	// System.String UICamera::verticalAxisName
	String_t* ___verticalAxisName_20;
	// System.String UICamera::horizontalAxisName
	String_t* ___horizontalAxisName_21;
	// UnityEngine.KeyCode UICamera::submitKey0
	int32_t ___submitKey0_22;
	// UnityEngine.KeyCode UICamera::submitKey1
	int32_t ___submitKey1_23;
	// UnityEngine.KeyCode UICamera::cancelKey0
	int32_t ___cancelKey0_24;
	// UnityEngine.KeyCode UICamera::cancelKey1
	int32_t ___cancelKey1_25;
	// UnityEngine.GameObject UICamera::mTooltip
	GameObject_t23 * ___mTooltip_49;
	// UnityEngine.Camera UICamera::mCam
	Camera_t113 * ___mCam_50;
	// System.Single UICamera::mTooltipTime
	float ___mTooltipTime_51;
	// System.Single UICamera::mNextRaycast
	float ___mNextRaycast_52;
};
struct UICamera_t252_StaticFields{
	// BetterList`1<UICamera> UICamera::list
	BetterList_1_t254 * ___list_2;
	// UICamera/OnScreenResize UICamera::onScreenResize
	OnScreenResize_t250 * ___onScreenResize_3;
	// UICamera/OnCustomInput UICamera::onCustomInput
	OnCustomInput_t251 * ___onCustomInput_26;
	// System.Boolean UICamera::showTooltips
	bool ___showTooltips_27;
	// UnityEngine.Vector2 UICamera::lastTouchPosition
	Vector2_t27  ___lastTouchPosition_28;
	// UnityEngine.RaycastHit UICamera::lastHit
	RaycastHit_t249  ___lastHit_29;
	// UICamera UICamera::current
	UICamera_t252 * ___current_30;
	// UnityEngine.Camera UICamera::currentCamera
	Camera_t113 * ___currentCamera_31;
	// UICamera/ControlScheme UICamera::currentScheme
	int32_t ___currentScheme_32;
	// System.Int32 UICamera::currentTouchID
	int32_t ___currentTouchID_33;
	// UnityEngine.KeyCode UICamera::currentKey
	int32_t ___currentKey_34;
	// UICamera/MouseOrTouch UICamera::currentTouch
	MouseOrTouch_t246 * ___currentTouch_35;
	// System.Boolean UICamera::inputHasFocus
	bool ___inputHasFocus_36;
	// UnityEngine.GameObject UICamera::genericEventHandler
	GameObject_t23 * ___genericEventHandler_37;
	// UnityEngine.GameObject UICamera::fallThrough
	GameObject_t23 * ___fallThrough_38;
	// UnityEngine.GameObject UICamera::mCurrentSelection
	GameObject_t23 * ___mCurrentSelection_39;
	// UnityEngine.GameObject UICamera::mNextSelection
	GameObject_t23 * ___mNextSelection_40;
	// UICamera/ControlScheme UICamera::mNextScheme
	int32_t ___mNextScheme_41;
	// UICamera/MouseOrTouch[] UICamera::mMouse
	MouseOrTouchU5BU5D_t255* ___mMouse_42;
	// UnityEngine.GameObject UICamera::mHover
	GameObject_t23 * ___mHover_43;
	// UICamera/MouseOrTouch UICamera::mController
	MouseOrTouch_t246 * ___mController_44;
	// System.Single UICamera::mNextEvent
	float ___mNextEvent_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,UICamera/MouseOrTouch> UICamera::mTouches
	Dictionary_2_t256 * ___mTouches_46;
	// System.Int32 UICamera::mWidth
	int32_t ___mWidth_47;
	// System.Int32 UICamera::mHeight
	int32_t ___mHeight_48;
	// System.Boolean UICamera::isDragging
	bool ___isDragging_53;
	// UnityEngine.GameObject UICamera::hoveredObject
	GameObject_t23 * ___hoveredObject_54;
	// UICamera/DepthEntry UICamera::mHit
	DepthEntry_t248  ___mHit_55;
	// BetterList`1<UICamera/DepthEntry> UICamera::mHits
	BetterList_1_t257 * ___mHits_56;
	// UnityEngine.RaycastHit UICamera::mEmpty
	RaycastHit_t249  ___mEmpty_57;
	// BetterList`1/CompareFunc<UICamera/DepthEntry> UICamera::<>f__am$cache38
	CompareFunc_t258 * ___U3CU3Ef__amU24cache38_58;
};
