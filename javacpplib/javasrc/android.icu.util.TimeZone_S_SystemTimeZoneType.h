#ifndef __android_icu_util_TimeZone_S_SystemTimeZoneType__
#define __android_icu_util_TimeZone_S_SystemTimeZoneType__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZone$SystemTimeZoneType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class TimeZone_S_SystemTimeZoneType : public java::lang::Enum<android::icu::util::TimeZone_S_SystemTimeZoneType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::TimeZone_S_SystemTimeZoneType>> _S_VALUES;
	TimeZone_S_SystemTimeZoneType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> ANY;
	static std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> CANONICAL;
	static std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> CANONICAL_LOCATION;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::TimeZone_S_SystemTimeZoneType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZone_S_SystemTimeZoneType(){
	}

}; // class TimeZone_S_SystemTimeZoneType
}; // namespace android::icu::util

#endif //__android_icu_util_TimeZone_S_SystemTimeZoneType__

