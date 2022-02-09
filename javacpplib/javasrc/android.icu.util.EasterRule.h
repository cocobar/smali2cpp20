#ifndef __android_icu_util_EasterRule__
#define __android_icu_util_EasterRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\EasterRule.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "android.icu.util.GregorianCalendar.h"
#include "java.util.Date.h"

namespace android::icu::util{
class EasterRule : public android::icu::util::DateRule {
protected:
private:
	static std::shared_ptr<android::icu::util::GregorianCalendar> gregorian;
	static std::shared_ptr<android::icu::util::GregorianCalendar> orthodox;
	std::shared_ptr<android::icu::util::GregorianCalendar> calendar;
	int daysAfterEaster;
	std::shared_ptr<java::util::Date> virtual computeInYear(std::shared_ptr<java::util::Date> date,std::shared_ptr<android::icu::util::GregorianCalendar> cVar0);
	std::shared_ptr<java::util::Date> virtual doFirstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
public:
	static void static_cinit();
	EasterRule(int daysAfterEaster,bool isOrthodox);
	std::shared_ptr<java::util::Date> virtual firstAfter(std::shared_ptr<java::util::Date> start);
	std::shared_ptr<java::util::Date> virtual firstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
	bool virtual isBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
	bool virtual isOn(std::shared_ptr<java::util::Date> date);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::EasterRule::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~EasterRule(){
	}

}; // class EasterRule
}; // namespace android::icu::util

#endif //__android_icu_util_EasterRule__

