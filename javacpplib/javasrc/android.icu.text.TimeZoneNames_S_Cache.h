#ifndef __android_icu_text_TimeZoneNames_S_Cache__
#define __android_icu_text_TimeZoneNames_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TimeZoneNames_S_Cache : public android::icu::impl::SoftCache<java::lang::String,android::icu::text::TimeZoneNames,android::icu::util::ULocale> {
protected:
	std::shared_ptr<android::icu::text::TimeZoneNames> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> data);
private:
	TimeZoneNames_S_Cache();
public:
	TimeZoneNames_S_Cache(std::shared_ptr<android::icu::text::TimeZoneNames_S_Cache> _this0);
public:
	virtual ~TimeZoneNames_S_Cache(){
	}

}; // class TimeZoneNames_S_Cache
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneNames_S_Cache__

