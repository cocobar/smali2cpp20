#ifndef __android_icu_util_DateTimeRule__
#define __android_icu_util_DateTimeRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\DateTimeRule.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"

namespace android::icu::util{
class DateTimeRule : public java::io::Serializable {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> DOWSTR;
	static std::shared_ptr<std::vector<java::lang::String>> MONSTR;
	static long long serialVersionUID;
	int dateRuleType;
	int dayOfMonth;
	int dayOfWeek;
	int millisInDay;
	int month;
	int timeRuleType;
	int weekInMonth;
public:
	static int DOM;
	static int DOW;
	static int DOW_GEQ_DOM;
	static int DOW_LEQ_DOM;
	static int STANDARD_TIME;
	static int UTC_TIME;
	static int WALL_TIME;
	static void static_cinit();
	DateTimeRule(int month,int dayOfMonth,int millisInDay,int timeType);
	DateTimeRule(int month,int weekInMonth,int dayOfWeek,int millisInDay,int timeType);
	DateTimeRule(int month,int dayOfMonth,int dayOfWeek,bool after,int millisInDay,int timeType);
	int virtual getDateRuleType();
	int virtual getRuleDayOfMonth();
	int virtual getRuleDayOfWeek();
	int virtual getRuleMillisInDay();
	int virtual getRuleMonth();
	int virtual getRuleWeekInMonth();
	int virtual getTimeRuleType();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::DateTimeRule::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateTimeRule(){
	}

}; // class DateTimeRule
}; // namespace android::icu::util

#endif //__android_icu_util_DateTimeRule__

