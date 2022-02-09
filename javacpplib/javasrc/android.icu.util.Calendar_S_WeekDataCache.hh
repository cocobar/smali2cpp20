#ifndef __android_icu_util_Calendar_S_WeekDataCache__
#define __android_icu_util_Calendar_S_WeekDataCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$WeekDataCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.hhh"
#include "android.icu.util.Calendar_S_WeekData.hhh"
#include "java.lang.String.hhh"

namespace android::icu::util{
class Calendar_S_WeekDataCache : public android::icu::impl::SoftCache<java::lang::String,android::icu::util::Calendar_S_WeekData,java::lang::String> {
public:
	Calendar_S_WeekDataCache();
	virtual ~Calendar_S_WeekDataCache();

}; // class Calendar_S_WeekDataCache
}; // namespace android::icu::util

#endif //__android_icu_util_Calendar_S_WeekDataCache__

