#ifndef __android_icu_impl_ZoneMeta__
#define __android_icu_impl_ZoneMeta__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ZoneMeta.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.OlsonTimeZone.h"
#include "android.icu.impl.ZoneMeta_S_CustomTimeZoneCache.h"
#include "android.icu.impl.ZoneMeta_S_SystemTimeZoneCache.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeZone_S_SystemTimeZoneType.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Boolean.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ref.SoftReference.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ZoneMeta : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_util_TimeZone_S_SystemTimeZoneTypeSwitchesValues;
	static bool ASSERT;
	static std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,java::lang::String>> CANONICAL_ID_CACHE;
	static std::shared_ptr<android::icu::impl::ZoneMeta_S_CustomTimeZoneCache> CUSTOM_ZONE_CACHE;
	static std::shared_ptr<java::lang::ref::SoftReference<java::util::Set<java::lang::String>>> REF_CANONICAL_SYSTEM_LOCATION_ZONES;
	static std::shared_ptr<java::lang::ref::SoftReference<java::util::Set<java::lang::String>>> REF_CANONICAL_SYSTEM_ZONES;
	static std::shared_ptr<java::lang::ref::SoftReference<java::util::Set<java::lang::String>>> REF_SYSTEM_ZONES;
	static std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,java::lang::String>> REGION_CACHE;
	static std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,java::lang::Boolean>> SINGLE_COUNTRY_CACHE;
	static std::shared_ptr<android::icu::impl::ZoneMeta_S_SystemTimeZoneCache> SYSTEM_ZONE_CACHE;
	static std::shared_ptr<std::vector<java::lang::String>> ZONEIDS;
	static std::shared_ptr<java::lang::String> ZONEINFORESNAME;
	static std::shared_ptr<java::lang::String> kCUSTOM_TZ_PREFIX;
	static std::shared_ptr<java::lang::String> kGMT_ID;
	static int kMAX_CUSTOM_HOUR;
	static int kMAX_CUSTOM_MIN;
	static int kMAX_CUSTOM_SEC;
	static std::shared_ptr<java::lang::String> kNAMES;
	static std::shared_ptr<java::lang::String> kREGIONS;
	static std::shared_ptr<java::lang::String> kWorld;
	static std::shared_ptr<java::lang::String> kZONES;
	static int _getandroid_icu_util_TimeZone_S_SystemTimeZoneTypeSwitchesValues();
	static std::shared_ptr<java::lang::String> findCLDRCanonicalID(std::shared_ptr<java::lang::String> tzid);
	static std::shared_ptr<java::util::Set<java::lang::String>> getCanonicalSystemLocationZIDs();
	static std::shared_ptr<java::util::Set<java::lang::String>> getCanonicalSystemZIDs();
	static std::shared_ptr<java::lang::String> getShortIDFromCanonical(std::shared_ptr<java::lang::String> canonicalID);
	static std::shared_ptr<java::util::Set<java::lang::String>> getSystemZIDs();
	static std::shared_ptr<java::lang::String> getZoneID(int idx);
	static std::shared_ptr<java::lang::String> getZoneIDs();
	static int getZoneIndex(std::shared_ptr<java::lang::String> zid);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	ZoneMeta();
	static int countEquivalentIDs(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<java::lang::String> formatCustomID(int hour,int min,int sec,bool negative);
	static std::shared_ptr<java::util::Set<java::lang::String>> getAvailableIDs(std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> type,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::Integer> rawOffset);
	static std::shared_ptr<java::lang::String> getCanonicalCLDRID(std::shared_ptr<android::icu::util::TimeZone> tz);
	static std::shared_ptr<java::lang::String> getCanonicalCLDRID(std::shared_ptr<java::lang::String> tzid);
	static std::shared_ptr<java::lang::String> getCanonicalCountry(std::shared_ptr<java::lang::String> tzid);
	static std::shared_ptr<java::lang::String> getCanonicalCountry(std::shared_ptr<java::lang::String> tzid,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isPrimary);
	static std::shared_ptr<java::lang::String> getCustomID(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<android::icu::util::SimpleTimeZone> getCustomTimeZone(int offset);
	static std::shared_ptr<android::icu::util::SimpleTimeZone> getCustomTimeZone(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<java::lang::String> getEquivalentID(std::shared_ptr<java::lang::String> id,int index);
	static std::shared_ptr<java::lang::String> getRegion(std::shared_ptr<java::lang::String> tzid);
	static std::shared_ptr<java::lang::String> getShortID(std::shared_ptr<android::icu::util::TimeZone> tz);
	static std::shared_ptr<java::lang::String> getShortID(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<android::icu::impl::OlsonTimeZone> getSystemTimeZone(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<android::icu::util::UResourceBundle> openOlsonResource(std::shared_ptr<android::icu::util::UResourceBundle> cVar0,std::shared_ptr<java::lang::String> id);
	static bool parseCustomID(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> fields);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ZoneMeta::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ZoneMeta(){
	}

}; // class ZoneMeta
}; // namespace android::icu::impl

#endif //__android_icu_impl_ZoneMeta__

