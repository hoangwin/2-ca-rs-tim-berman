#pragma once
#include <stdint.h>
// UIWidget
struct UIWidget_t83;
// UITable
struct UITable_t103;
// UITweener
#include "AssemblyU2DCSharp_UITweener.h"
// TweenWidth
struct  TweenWidth_t231  : public UITweener_t221
{
	// System.Int32 TweenWidth::from
	int32_t ___from_19;
	// System.Int32 TweenWidth::to
	int32_t ___to_20;
	// System.Boolean TweenWidth::updateTable
	bool ___updateTable_21;
	// UIWidget TweenWidth::mWidget
	UIWidget_t83 * ___mWidget_22;
	// UITable TweenWidth::mTable
	UITable_t103 * ___mTable_23;
};
