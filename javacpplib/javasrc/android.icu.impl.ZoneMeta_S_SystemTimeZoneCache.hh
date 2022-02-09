#ifndef __android_icu_impl_ZoneMeta_S_SystemTimeZoneCache__
#define __android_icu_impl_ZoneMeta_S_SystemTimeZoneCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ZoneMeta$SystemTimeZoneCache.smali
#include "java2ctype.h"
#include "android.icu.impl.OlsonTimeZone.hhh"
#include "android.icu.impl.SoftCache.hhh"
#include "java.lang.String.hhh"

namespace android::icu::impl{
class ZoneMeta_S_SystemTimeZoneCache : public android::icu::impl::SoftCache<java::lang::String,android::icu::impl::OlsonTimeZone,java::lang::String> {
public:
	ZoneMeta_S_SystemTimeZoneCache();
	virtual ~ZoneMeta_S_SystemTimeZoneCache();

}; // class ZoneMeta_S_SystemTimeZoneCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_ZoneMeta_S_SystemTimeZoneCache__

