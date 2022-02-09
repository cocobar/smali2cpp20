#ifndef __android_icu_impl_TimeZoneGenericNames_S_Cache__
#define __android_icu_impl_TimeZoneGenericNames_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.hhh"
#include "android.icu.impl.TimeZoneGenericNames.hhh"
#include "android.icu.util.ULocale.hhh"
#include "java.lang.String.hhh"

namespace android::icu::impl{
class TimeZoneGenericNames_S_Cache : public android::icu::impl::SoftCache<java::lang::String,android::icu::impl::TimeZoneGenericNames,android::icu::util::ULocale> {
public:
	TimeZoneGenericNames_S_Cache();
	virtual ~TimeZoneGenericNames_S_Cache();

}; // class TimeZoneGenericNames_S_Cache
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames_S_Cache__

