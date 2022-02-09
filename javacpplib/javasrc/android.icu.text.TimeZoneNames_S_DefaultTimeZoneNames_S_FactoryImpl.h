#ifndef __android_icu_text_TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl__
#define __android_icu_text_TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$DefaultTimeZoneNames$FactoryImpl.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_Factory.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"

namespace android::icu::text{
class TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl : public android::icu::text::TimeZoneNames_S_Factory {
protected:
private:
public:
	TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl();
	std::shared_ptr<android::icu::text::TimeZoneNames> virtual getTimeZoneNames(std::shared_ptr<android::icu::util::ULocale> locale);
public:
	virtual ~TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl(){
	}

}; // class TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl__

