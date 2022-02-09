#ifndef __android_icu_impl_DayPeriodRules_S_DayPeriodRulesCountSink__
#define __android_icu_impl_DayPeriodRules_S_DayPeriodRulesCountSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$DayPeriodRulesCountSink.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesData.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"

namespace android::icu::impl{
class DayPeriodRules_S_DayPeriodRulesCountSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data;
	DayPeriodRules_S_DayPeriodRulesCountSink(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data);
public:
	DayPeriodRules_S_DayPeriodRulesCountSink(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data,std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesCountSink> _this1);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~DayPeriodRules_S_DayPeriodRulesCountSink(){
	}

}; // class DayPeriodRules_S_DayPeriodRulesCountSink
}; // namespace android::icu::impl

#endif //__android_icu_impl_DayPeriodRules_S_DayPeriodRulesCountSink__

