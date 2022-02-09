#ifndef __android_icu_impl_DayPeriodRules_S_DayPeriodRulesData__
#define __android_icu_impl_DayPeriodRules_S_DayPeriodRulesData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$DayPeriodRulesData.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class DayPeriodRules_S_DayPeriodRulesData : public java::lang::Object {
protected:
private:
	DayPeriodRules_S_DayPeriodRulesData();
public:
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::Integer>> localesToRuleSetNumMap;
	int maxRuleSetNum;
	std::shared_ptr<std::vector<android::icu::impl::DayPeriodRules>> rules;
	DayPeriodRules_S_DayPeriodRulesData(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> _this0);
public:
	virtual ~DayPeriodRules_S_DayPeriodRulesData(){
	}

}; // class DayPeriodRules_S_DayPeriodRulesData
}; // namespace android::icu::impl

#endif //__android_icu_impl_DayPeriodRules_S_DayPeriodRulesData__

