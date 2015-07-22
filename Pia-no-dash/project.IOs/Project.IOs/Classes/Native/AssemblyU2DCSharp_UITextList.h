#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t133;
// UIProgressBar
struct UIProgressBar_t137;
// System.Char[]
struct CharU5BU5D_t286;
// BetterList`1<UITextList/Paragraph>
struct BetterList_1_t287;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UITextList/Style
#include "AssemblyU2DCSharp_UITextList_Style.h"
// UITextList
struct  UITextList_t288  : public MonoBehaviour_t2
{
	// UILabel UITextList::textLabel
	UILabel_t133 * ___textLabel_2;
	// UIProgressBar UITextList::scrollBar
	UIProgressBar_t137 * ___scrollBar_3;
	// UITextList/Style UITextList::style
	int32_t ___style_4;
	// System.Int32 UITextList::paragraphHistory
	int32_t ___paragraphHistory_5;
	// System.Char[] UITextList::mSeparator
	CharU5BU5D_t286* ___mSeparator_6;
	// BetterList`1<UITextList/Paragraph> UITextList::mParagraphs
	BetterList_1_t287 * ___mParagraphs_7;
	// System.Single UITextList::mScroll
	float ___mScroll_8;
	// System.Int32 UITextList::mTotalLines
	int32_t ___mTotalLines_9;
	// System.Int32 UITextList::mLastWidth
	int32_t ___mLastWidth_10;
	// System.Int32 UITextList::mLastHeight
	int32_t ___mLastHeight_11;
};
