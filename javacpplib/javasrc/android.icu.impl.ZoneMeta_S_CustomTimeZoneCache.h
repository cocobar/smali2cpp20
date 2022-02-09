#ifndef __android_icu_impl_ZoneMeta_S_CustomTimeZoneCache__
#define __android_icu_impl_ZoneMeta_S_CustomTimeZoneCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ZoneMeta$CustomTimeZoneCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "java.lang.Integer.h"

namespace android::icu::impl{
class ZoneMeta_S_CustomTimeZoneCache : public android::icu::impl::SoftCache<java::lang::Integer,android::icu::util::SimpleTimeZone,int[]> {
protected:
	std::shared_ptr<android::icu::util::SimpleTimeZone> virtual createInstance(std::shared_ptr<java::lang::Integer> key,std::shared_ptr<int[]> data);
private:
	ZoneMeta_S_CustomTimeZoneCache();
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	ZoneMeta_S_CustomTimeZoneCache(std::shared_ptr<android::icu::impl::ZoneMeta_S_CustomTimeZoneCache> _this0);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ZoneMeta_S_CustomTimeZoneCache(){
	}

}; // class ZoneMeta_S_CustomTimeZoneCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_ZoneMeta_S_CustomTimeZoneCache__

