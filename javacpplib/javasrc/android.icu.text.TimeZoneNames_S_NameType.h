#ifndef __android_icu_text_TimeZoneNames_S_NameType__
#define __android_icu_text_TimeZoneNames_S_NameType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$NameType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TimeZoneNames_S_NameType : public java::lang::Enum<android::icu::text::TimeZoneNames_S_NameType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::TimeZoneNames_S_NameType>> _S_VALUES;
	TimeZoneNames_S_NameType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> EXEMPLAR_LOCATION;
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> LONG_DAYLIGHT;
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> LONG_GENERIC;
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> LONG_STANDARD;
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> SHORT_DAYLIGHT;
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> SHORT_GENERIC;
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> SHORT_STANDARD;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneNames_S_NameType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNames_S_NameType(){
	}

}; // class TimeZoneNames_S_NameType
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneNames_S_NameType__

