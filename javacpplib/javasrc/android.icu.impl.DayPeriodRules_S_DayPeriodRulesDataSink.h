#ifndef __android_icu_impl_DayPeriodRules_S_DayPeriodRulesDataSink__
#define __android_icu_impl_DayPeriodRules_S_DayPeriodRulesDataSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$DayPeriodRulesDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_CutoffType.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriod.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesData.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class DayPeriodRules_S_DayPeriodRulesDataSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> cutoffType;
	std::shared_ptr<int[]> cutoffs;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> period;
	int ruleSetNum;
	DayPeriodRules_S_DayPeriodRulesDataSink(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data);
	void virtual addCutoff(std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> type,std::shared_ptr<java::lang::String> hourStr);
	static int parseHour(std::shared_ptr<java::lang::String> str);
	void virtual processRules(std::shared_ptr<android::icu::impl::UResource_S_Table> rules,std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual setDayPeriodForHoursFromCutoffs();
public:
	DayPeriodRules_S_DayPeriodRulesDataSink(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data,std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink> _this1);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~DayPeriodRules_S_DayPeriodRulesDataSink(){
	}

}; // class DayPeriodRules_S_DayPeriodRulesDataSink
}; // namespace android::icu::impl

#endif //__android_icu_impl_DayPeriodRules_S_DayPeriodRulesDataSink__

