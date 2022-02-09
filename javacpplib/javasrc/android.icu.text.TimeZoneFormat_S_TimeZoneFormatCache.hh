#ifndef __android_icu_text_TimeZoneFormat_S_TimeZoneFormatCache__
#define __android_icu_text_TimeZoneFormat_S_TimeZoneFormatCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$TimeZoneFormatCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.hhh"
#include "android.icu.text.TimeZoneFormat.hhh"
#include "android.icu.util.ULocale.hhh"

namespace android::icu::text{
class TimeZoneFormat_S_TimeZoneFormatCache : public android::icu::impl::SoftCache<android::icu::util::ULocale,android::icu::text::TimeZoneFormat,android::icu::util::ULocale> {
public:
	TimeZoneFormat_S_TimeZoneFormatCache();
	virtual ~TimeZoneFormat_S_TimeZoneFormatCache();

}; // class TimeZoneFormat_S_TimeZoneFormatCache
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat_S_TimeZoneFormatCache__

