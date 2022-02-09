#ifndef __android_icu_impl_ZoneMeta_S_CustomTimeZoneCache__
#define __android_icu_impl_ZoneMeta_S_CustomTimeZoneCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ZoneMeta$CustomTimeZoneCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.hhh"
#include "android.icu.util.SimpleTimeZone.hhh"
#include "java.lang.Integer.hhh"

namespace android::icu::impl{
class ZoneMeta_S_CustomTimeZoneCache : public android::icu::impl::SoftCache<java::lang::Integer,android::icu::util::SimpleTimeZone,int[]> {
public:
	ZoneMeta_S_CustomTimeZoneCache();
	virtual ~ZoneMeta_S_CustomTimeZoneCache();

}; // class ZoneMeta_S_CustomTimeZoneCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_ZoneMeta_S_CustomTimeZoneCache__

