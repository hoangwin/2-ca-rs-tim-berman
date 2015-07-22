#pragma once
#include <stdint.h>
// System.Globalization.CompareInfo
struct CompareInfo_t1153;
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.CultureAwareComparer
struct  CultureAwareComparer_t1931  : public StringComparer_t909
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1153 * ____compareInfo_5;
};
