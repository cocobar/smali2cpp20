#ifndef __android_icu_util_GregorianCalendar__
#define __android_icu_util_GregorianCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\GregorianCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class GregorianCalendar : public android::icu::util::Calendar {
protected:
	bool invertGregorian;
	bool isGregorian;
	void virtual handleComputeFields(int julianDay);
	int virtual handleComputeJulianDay(int bestField);
	int virtual handleComputeMonthStart(int cVar2,int cVar3,bool useMonth);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
	int virtual handleGetMonthLength(int cVar2,int cVar3);
	int virtual handleGetYearLength(int eyear);
private:
	static int EPOCH_YEAR;
	static std::shared_ptr<int[][]> LIMITS;
	static std::shared_ptr<int[][]> MONTH_COUNT;
	static long long serialVersionUID;
	int cutoverJulianDay;
	long long gregorianCutover;
	int gregorianCutoverYear;
public:
	static int AD;
	static int BC;
	static void static_cinit();
	GregorianCalendar();
	GregorianCalendar(int year,int month,int date);
	GregorianCalendar(int year,int month,int date,int hour,int minute);
	GregorianCalendar(int year,int month,int date,int hour,int minute,int second);
	GregorianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	GregorianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	GregorianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	GregorianCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	GregorianCalendar(std::shared_ptr<java::util::Locale> aLocale);
	int virtual getActualMaximum(int field);
	int virtual getActualMinimum(int field);
	std::shared_ptr<java::util::Date> virtual getGregorianChange();
	std::shared_ptr<java::lang::String> virtual getType();
	int virtual hashCode();
	bool virtual inDaylightTime();
	bool virtual isEquivalentTo(std::shared_ptr<android::icu::util::Calendar> other);
	bool virtual isLeapYear(int year);
	void virtual roll(int field,int amount);
	void virtual setGregorianChange(std::shared_ptr<java::util::Date> date);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::GregorianCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~GregorianCalendar(){
	}

}; // class GregorianCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_GregorianCalendar__

