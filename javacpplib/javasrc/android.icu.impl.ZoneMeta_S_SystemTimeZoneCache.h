#ifndef __android_icu_impl_ZoneMeta_S_SystemTimeZoneCache__
#define __android_icu_impl_ZoneMeta_S_SystemTimeZoneCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ZoneMeta$SystemTimeZoneCache.smali
#include "java2ctype.h"
#include "android.icu.impl.OlsonTimeZone.h"
#include "android.icu.impl.SoftCache.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ZoneMeta_S_SystemTimeZoneCache : public android::icu::impl::SoftCache<java::lang::String,android::icu::impl::OlsonTimeZone,java::lang::String> {
protected:
	std::shared_ptr<android::icu::impl::OlsonTimeZone> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> data);
private:
	ZoneMeta_S_SystemTimeZoneCache();
public:
	ZoneMeta_S_SystemTimeZoneCache(std::shared_ptr<android::icu::impl::ZoneMeta_S_SystemTimeZoneCache> _this0);
public:
	virtual ~ZoneMeta_S_SystemTimeZoneCache(){
	}

}; // class ZoneMeta_S_SystemTimeZoneCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_ZoneMeta_S_SystemTimeZoneCache__

