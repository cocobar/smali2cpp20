#ifndef __android_icu_util_SimpleDateRule__
#define __android_icu_util_SimpleDateRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\SimpleDateRule.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.DateRule.h"
#include "java.util.Date.h"

namespace android::icu::util{
class SimpleDateRule : public android::icu::util::DateRule {
protected:
private:
	std::shared_ptr<android::icu::util::Calendar> calendar;
	int dayOfMonth;
	int dayOfWeek;
	int month;
	std::shared_ptr<java::util::Date> virtual computeInYear(int year,std::shared_ptr<android::icu::util::Calendar> c);
	std::shared_ptr<java::util::Date> virtual doFirstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
public:
	SimpleDateRule(int month,int dayOfMonth);
	SimpleDateRule(int month,int dayOfMonth,int dayOfWeek,bool after);
	SimpleDateRule(int month,int dayOfMonth,std::shared_ptr<android::icu::util::Calendar> cal);
	std::shared_ptr<java::util::Date> virtual firstAfter(std::shared_ptr<java::util::Date> start);
	std::shared_ptr<java::util::Date> virtual firstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
	bool virtual isBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
	bool virtual isOn(std::shared_ptr<java::util::Date> date);
public:
	virtual ~SimpleDateRule(){
	}

}; // class SimpleDateRule
}; // namespace android::icu::util

#endif //__android_icu_util_SimpleDateRule__

