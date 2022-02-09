#ifndef __android_icu_util_TimeZone__
#define __android_icu_util_TimeZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZone.smali
#include "java2ctype.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.TimeZone_S_SystemTimeZoneType.h"
#include "android.icu.util.ULocale.h"
#include "java.io.Serializable.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"
#include "java.util.logging.Logger.h"

namespace android::icu::util{
class TimeZone : public java::io::Serializable, public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::util::TimeZone> {
protected:
	TimeZone(std::shared_ptr<java::lang::String> ID);
private:
	static std::shared_ptr<java::util::logging::Logger> LOGGER;
	static std::shared_ptr<java::lang::String> TZIMPL_CONFIG_ICU;
	static std::shared_ptr<java::lang::String> TZIMPL_CONFIG_JDK;
	static std::shared_ptr<java::lang::String> TZIMPL_CONFIG_KEY;
	static int TZ_IMPL;
	static std::shared_ptr<android::icu::util::TimeZone> defaultZone;
	static long long serialVersionUID;
	std::shared_ptr<java::lang::String> ID;
	std::shared_ptr<java::lang::String> virtual _getDisplayName(int style,bool daylight,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::util::TimeZone> getTimeZone(std::shared_ptr<java::lang::String> id,int type,bool frozen);
public:
	static bool _assertionsDisabled;
	static int GENERIC_LOCATION;
	static std::shared_ptr<android::icu::util::TimeZone> GMT_ZONE;
	static std::shared_ptr<java::lang::String> GMT_ZONE_ID;
	static int LONG;
	static int LONG_GENERIC;
	static int LONG_GMT;
	static int SHORT;
	static int SHORT_COMMONLY_USED;
	static int SHORT_GENERIC;
	static int SHORT_GMT;
	static int TIMEZONE_ICU;
	static int TIMEZONE_JDK;
	static std::shared_ptr<android::icu::util::TimeZone> UNKNOWN_ZONE;
	static std::shared_ptr<java::lang::String> UNKNOWN_ZONE_ID;
	static void static_cinit();
	TimeZone();
	static void clearCachedDefault();
	static int countEquivalentIDs(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<java::util::Set<java::lang::String>> getAvailableIDs(std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> zoneType,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::Integer> rawOffset);
	static std::shared_ptr<java::lang::String> getAvailableIDs();
	static std::shared_ptr<java::lang::String> getAvailableIDs(int rawOffset);
	static std::shared_ptr<java::lang::String> getAvailableIDs(std::shared_ptr<java::lang::String> country);
	static std::shared_ptr<java::lang::String> getCanonicalID(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<java::lang::String> getCanonicalID(std::shared_ptr<java::lang::String> id,std::shared_ptr<bool[]> isSystemID);
	static std::shared_ptr<android::icu::util::TimeZone> getDefault();
	static int getDefaultTimeZoneType();
	static std::shared_ptr<java::lang::String> getEquivalentID(std::shared_ptr<java::lang::String> id,int index);
	static std::shared_ptr<android::icu::util::BasicTimeZone> getFrozenICUTimeZone(std::shared_ptr<java::lang::String> id,bool trySystem);
	static std::shared_ptr<android::icu::util::TimeZone> getFrozenTimeZone(std::shared_ptr<java::lang::String> ID);
	static std::shared_ptr<java::lang::String> getIDForWindowsID(std::shared_ptr<java::lang::String> winid,std::shared_ptr<java::lang::String> region);
	static std::shared_ptr<java::lang::String> getRegion(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<java::lang::String> getTZDataVersion();
	static std::shared_ptr<android::icu::util::TimeZone> getTimeZone(std::shared_ptr<java::lang::String> ID);
	static std::shared_ptr<android::icu::util::TimeZone> getTimeZone(std::shared_ptr<java::lang::String> ID,int type);
	static std::shared_ptr<java::lang::String> getWindowsID(std::shared_ptr<java::lang::String> id);
	static void setDefault(std::shared_ptr<android::icu::util::TimeZone> tz);
	static void setDefaultTimeZoneType(int type);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::util::TimeZone> virtual cloneAsThawed();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<android::icu::util::TimeZone> virtual freeze();
	int virtual getDSTSavings();
	std::shared_ptr<java::lang::String> virtual getDisplayName();
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::String> virtual getDisplayName(bool daylight,int style);
	std::shared_ptr<java::lang::String> virtual getDisplayName(bool daylight,int style,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual getDisplayName(bool daylight,int style,std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::String> virtual getID();
	int getOffset(int var0,int var1,int var2,int var3,int var4,int var5) = 0;
	int virtual getOffset(long long date);
	void virtual getOffset(long long cVar2,bool local,std::shared_ptr<int[]> offsets);
	int getRawOffset() = 0;
	bool virtual hasSameRules(std::shared_ptr<android::icu::util::TimeZone> other);
	int virtual hashCode();
	bool inDaylightTime(std::shared_ptr<java::util::Date> var0) = 0;
	bool virtual isFrozen();
	bool virtual observesDaylightTime();
	void virtual setID(std::shared_ptr<java::lang::String> ID);
	void setRawOffset(int var0) = 0;
	bool useDaylightTime() = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::TimeZone::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZone(){
	}

}; // class TimeZone
}; // namespace android::icu::util

#endif //__android_icu_util_TimeZone__

