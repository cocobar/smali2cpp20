#ifndef __android_icu_text_TimeZoneFormat_S_TimeZoneFormatCache__
#define __android_icu_text_TimeZoneFormat_S_TimeZoneFormatCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$TimeZoneFormatCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.text.TimeZoneFormat.h"
#include "android.icu.util.ULocale.h"

namespace android::icu::text{
class TimeZoneFormat_S_TimeZoneFormatCache : public android::icu::impl::SoftCache<android::icu::util::ULocale,android::icu::text::TimeZoneFormat,android::icu::util::ULocale> {
protected:
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual createInstance(std::shared_ptr<android::icu::util::ULocale> key,std::shared_ptr<android::icu::util::ULocale> data);
private:
	TimeZoneFormat_S_TimeZoneFormatCache();
public:
	TimeZoneFormat_S_TimeZoneFormatCache(std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeZoneFormatCache> _this0);
public:
	virtual ~TimeZoneFormat_S_TimeZoneFormatCache(){
	}

}; // class TimeZoneFormat_S_TimeZoneFormatCache
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat_S_TimeZoneFormatCache__

