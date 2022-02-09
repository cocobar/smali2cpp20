#ifndef __android_icu_util_SimpleHoliday__
#define __android_icu_util_SimpleHoliday__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\SimpleHoliday.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "android.icu.util.Holiday.h"
#include "java.lang.String.h"

namespace android::icu::util{
class SimpleHoliday : public android::icu::util::Holiday {
protected:
private:
	static std::shared_ptr<android::icu::util::DateRule> rangeRule(int startYear,int endYear,std::shared_ptr<android::icu::util::DateRule> rule);
public:
	static std::shared_ptr<android::icu::util::SimpleHoliday> ALL_SAINTS_DAY;
	static std::shared_ptr<android::icu::util::SimpleHoliday> ALL_SOULS_DAY;
	static std::shared_ptr<android::icu::util::SimpleHoliday> ASSUMPTION;
	static std::shared_ptr<android::icu::util::SimpleHoliday> BOXING_DAY;
	static std::shared_ptr<android::icu::util::SimpleHoliday> CHRISTMAS;
	static std::shared_ptr<android::icu::util::SimpleHoliday> CHRISTMAS_EVE;
	static std::shared_ptr<android::icu::util::SimpleHoliday> EPIPHANY;
	static std::shared_ptr<android::icu::util::SimpleHoliday> IMMACULATE_CONCEPTION;
	static std::shared_ptr<android::icu::util::SimpleHoliday> MAY_DAY;
	static std::shared_ptr<android::icu::util::SimpleHoliday> NEW_YEARS_DAY;
	static std::shared_ptr<android::icu::util::SimpleHoliday> NEW_YEARS_EVE;
	static std::shared_ptr<android::icu::util::SimpleHoliday> ST_STEPHENS_DAY;
	static void static_cinit();
	SimpleHoliday(int month,int dayOfMonth,int dayOfWeek,std::shared_ptr<java::lang::String> name);
	SimpleHoliday(int month,int dayOfMonth,int dayOfWeek,std::shared_ptr<java::lang::String> name,int startYear);
	SimpleHoliday(int month,int dayOfMonth,int dayOfWeek,std::shared_ptr<java::lang::String> name,int startYear,int endYear);
	SimpleHoliday(int month,int dayOfMonth,std::shared_ptr<java::lang::String> name);
	SimpleHoliday(int month,int dayOfMonth,std::shared_ptr<java::lang::String> name,int startYear);
	SimpleHoliday(int month,int dayOfMonth,std::shared_ptr<java::lang::String> name,int startYear,int endYear);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::SimpleHoliday::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SimpleHoliday(){
	}

}; // class SimpleHoliday
}; // namespace android::icu::util

#endif //__android_icu_util_SimpleHoliday__

