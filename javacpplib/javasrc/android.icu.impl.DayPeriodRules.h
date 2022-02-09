#ifndef __android_icu_impl_DayPeriodRules__
#define __android_icu_impl_DayPeriodRules__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriod.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class DayPeriodRules : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> DATA;
	std::shared_ptr<std::vector<android::icu::impl::DayPeriodRules_S_DayPeriod>> dayPeriodForHour;
	bool hasMidnight;
	bool hasNoon;
	DayPeriodRules();
	void virtual add(int startHour,int limitHour,std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> period);
	int virtual getEndHourForDayPeriod(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> dayPeriod);
	int virtual getStartHourForDayPeriod(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> dayPeriod);
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> loadData();
	static int parseSetNum(std::shared_ptr<java::lang::String> setNumStr);
public:
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> _get0(std::shared_ptr<android::icu::impl::DayPeriodRules> _this);
	static bool _set0(std::shared_ptr<android::icu::impl::DayPeriodRules> _this,bool _value);
	static bool _set1(std::shared_ptr<android::icu::impl::DayPeriodRules> _this,bool _value);
	static int _wrap0(std::shared_ptr<java::lang::String> setNumStr);
	static void _wrap1(std::shared_ptr<android::icu::impl::DayPeriodRules> _this,int startHour,int limitHour,std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> period);
	static void static_cinit();
	DayPeriodRules(std::shared_ptr<android::icu::impl::DayPeriodRules> _this0);
	static std::shared_ptr<android::icu::impl::DayPeriodRules> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> virtual getDayPeriodForHour(int hour);
	double virtual getMidPointForDayPeriod(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> dayPeriod);
	bool virtual hasMidnight();
	bool virtual hasNoon();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::DayPeriodRules::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DayPeriodRules(){
	}

}; // class DayPeriodRules
}; // namespace android::icu::impl

#endif //__android_icu_impl_DayPeriodRules__

