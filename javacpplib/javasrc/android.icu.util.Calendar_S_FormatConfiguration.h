#ifndef __android_icu_util_Calendar_S_FormatConfiguration__
#define __android_icu_util_Calendar_S_FormatConfiguration__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$FormatConfiguration.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Calendar_S_FormatConfiguration : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::util::Calendar> cal;
	std::shared_ptr<android::icu::text::DateFormatSymbols> formatData;
	std::shared_ptr<android::icu::util::ULocale> loc;
	std::shared_ptr<java::lang::String> override;
	std::shared_ptr<java::lang::String> pattern;
	Calendar_S_FormatConfiguration();
public:
	static std::shared_ptr<android::icu::util::Calendar> _set0(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<android::icu::util::Calendar> _value);
	static std::shared_ptr<android::icu::text::DateFormatSymbols> _set1(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<android::icu::text::DateFormatSymbols> _value);
	static std::shared_ptr<android::icu::util::ULocale> _set2(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<android::icu::util::ULocale> _value);
	static std::shared_ptr<java::lang::String> _set3(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<java::lang::String> _value);
	static std::shared_ptr<java::lang::String> _set4(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<java::lang::String> _value);
	Calendar_S_FormatConfiguration(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this0);
	std::shared_ptr<android::icu::util::Calendar> virtual getCalendar();
	std::shared_ptr<android::icu::text::DateFormatSymbols> virtual getDateFormatSymbols();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
	std::shared_ptr<java::lang::String> virtual getOverrideString();
	std::shared_ptr<java::lang::String> virtual getPatternString();
public:
	virtual ~Calendar_S_FormatConfiguration(){
	}

}; // class Calendar_S_FormatConfiguration
}; // namespace android::icu::util

#endif //__android_icu_util_Calendar_S_FormatConfiguration__

