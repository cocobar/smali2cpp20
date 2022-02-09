#ifndef __android_icu_impl_Grego__
#define __android_icu_impl_Grego__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Grego.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class Grego : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> DAYS_BEFORE;
	static int JULIAN_1970_CE;
	static int JULIAN_1_CE;
	static std::shared_ptr<int[]> MONTH_LENGTH;
	static long long floorDivide(long long numerator,long long denominator,std::shared_ptr<long long[]> remainder);
public:
	static long long MAX_MILLIS;
	static int MILLIS_PER_DAY;
	static int MILLIS_PER_HOUR;
	static int MILLIS_PER_MINUTE;
	static int MILLIS_PER_SECOND;
	static long long MIN_MILLIS;
	static void static_cinit();
	Grego();
	static int dayOfWeek(long long day);
	static int dayToFields(long long day,std::shared_ptr<int[]> cVar0);
	static long long fieldsToDay(int year,int month,int dom);
	static long long floorDivide(long long numerator,long long denominator);
	static int getDayOfWeekInMonth(int year,int month,int dayOfMonth);
	static bool isLeapYear(int year);
	static int monthLength(int year,int month);
	static int previousMonthLength(int year,int month);
	static int timeToFields(long long time,std::shared_ptr<int[]> cVar1);
	static std::shared_ptr<java::lang::String> timeToString(long long time);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Grego::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Grego(){
	}

}; // class Grego
}; // namespace android::icu::impl

#endif //__android_icu_impl_Grego__

