#ifndef __android_icu_text_TimeZoneFormat_S_TimeType__
#define __android_icu_text_TimeZoneFormat_S_TimeType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$TimeType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TimeZoneFormat_S_TimeType : public java::lang::Enum<android::icu::text::TimeZoneFormat_S_TimeType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::TimeZoneFormat_S_TimeType>> _S_VALUES;
	TimeZoneFormat_S_TimeType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> DAYLIGHT;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> STANDARD;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> UNKNOWN;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneFormat_S_TimeType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneFormat_S_TimeType(){
	}

}; // class TimeZoneFormat_S_TimeType
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat_S_TimeType__

