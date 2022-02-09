#ifndef __android_icu_text_TimeZoneNames_S_Cache__
#define __android_icu_text_TimeZoneNames_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.hhh"
#include "android.icu.text.TimeZoneNames.hhh"
#include "android.icu.util.ULocale.hhh"
#include "java.lang.String.hhh"

namespace android::icu::text{
class TimeZoneNames_S_Cache : public android::icu::impl::SoftCache<java::lang::String,android::icu::text::TimeZoneNames,android::icu::util::ULocale> {
public:
	TimeZoneNames_S_Cache();
	virtual ~TimeZoneNames_S_Cache();

}; // class TimeZoneNames_S_Cache
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneNames_S_Cache__

