#ifndef __android_icu_text_TimeZoneNames_S_Factory__
#define __android_icu_text_TimeZoneNames_S_Factory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$Factory.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class TimeZoneNames_S_Factory : public java::lang::Object {
protected:
	TimeZoneNames_S_Factory();
private:
public:
	std::shared_ptr<android::icu::text::TimeZoneNames> getTimeZoneNames(std::shared_ptr<android::icu::util::ULocale> var0);
public:
	virtual ~TimeZoneNames_S_Factory(){
	}

}; // class TimeZoneNames_S_Factory
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneNames_S_Factory__

