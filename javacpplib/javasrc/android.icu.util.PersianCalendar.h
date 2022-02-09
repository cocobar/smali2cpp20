#ifndef __android_icu_util_PersianCalendar__
#define __android_icu_util_PersianCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\PersianCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class PersianCalendar : public android::icu::util::Calendar {
protected:
	void virtual handleComputeFields(int julianDay);
	int virtual handleComputeMonthStart(int cVar0,int cVar1,bool useMonth);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
	int virtual handleGetMonthLength(int cVar2,int cVar3);
	int virtual handleGetYearLength(int extendedYear);
private:
	static std::shared_ptr<int[][]> LIMITS;
	static std::shared_ptr<int[][]> MONTH_COUNT;
	static int PERSIAN_EPOCH;
	static long long serialVersionUID;
	static bool isLeapYear(int year);
public:
	static void static_cinit();
	PersianCalendar();
	PersianCalendar(int year,int month,int date);
	PersianCalendar(int year,int month,int date,int hour,int minute,int second);
	PersianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	PersianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	PersianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	PersianCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	PersianCalendar(std::shared_ptr<java::util::Date> date);
	PersianCalendar(std::shared_ptr<java::util::Locale> aLocale);
	std::shared_ptr<java::lang::String> virtual getType();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::PersianCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PersianCalendar(){
	}

}; // class PersianCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_PersianCalendar__

