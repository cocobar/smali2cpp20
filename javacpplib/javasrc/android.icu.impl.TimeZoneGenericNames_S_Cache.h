#ifndef __android_icu_impl_TimeZoneGenericNames_S_Cache__
#define __android_icu_impl_TimeZoneGenericNames_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.impl.TimeZoneGenericNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneGenericNames_S_Cache : public android::icu::impl::SoftCache<java::lang::String,android::icu::impl::TimeZoneGenericNames,android::icu::util::ULocale> {
protected:
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> data);
private:
	TimeZoneGenericNames_S_Cache();
public:
	TimeZoneGenericNames_S_Cache(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Cache> _this0);
public:
	virtual ~TimeZoneGenericNames_S_Cache(){
	}

}; // class TimeZoneGenericNames_S_Cache
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames_S_Cache__

