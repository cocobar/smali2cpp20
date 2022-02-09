#ifndef __android_icu_text_TimeZoneFormat_S_ParseOption__
#define __android_icu_text_TimeZoneFormat_S_ParseOption__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$ParseOption.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TimeZoneFormat_S_ParseOption : public java::lang::Enum<android::icu::text::TimeZoneFormat_S_ParseOption> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::TimeZoneFormat_S_ParseOption>> _S_VALUES;
	TimeZoneFormat_S_ParseOption(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> ALL_STYLES;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> TZ_DATABASE_ABBREVIATIONS;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneFormat_S_ParseOption::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneFormat_S_ParseOption(){
	}

}; // class TimeZoneFormat_S_ParseOption
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat_S_ParseOption__

