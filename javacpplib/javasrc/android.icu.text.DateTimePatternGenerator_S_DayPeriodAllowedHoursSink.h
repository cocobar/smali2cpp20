#ifndef __android_icu_text_DateTimePatternGenerator_S_DayPeriodAllowedHoursSink__
#define __android_icu_text_DateTimePatternGenerator_S_DayPeriodAllowedHoursSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$DayPeriodAllowedHoursSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_DayPeriodAllowedHoursSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	DateTimePatternGenerator_S_DayPeriodAllowedHoursSink(std::shared_ptr<java::util::HashMap<java::lang::String,std::vector<java::lang::String>>> tempMap);
public:
	std::shared_ptr<java::util::HashMap<java::lang::String,std::vector<java::lang::String>>> tempMap;
	DateTimePatternGenerator_S_DayPeriodAllowedHoursSink(std::shared_ptr<java::util::HashMap> tempMap,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink> _this1);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~DateTimePatternGenerator_S_DayPeriodAllowedHoursSink(){
	}

}; // class DateTimePatternGenerator_S_DayPeriodAllowedHoursSink
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_DayPeriodAllowedHoursSink__

