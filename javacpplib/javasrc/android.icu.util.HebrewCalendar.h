#ifndef __android_icu_util_HebrewCalendar__
#define __android_icu_util_HebrewCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\HebrewCalendar.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarCache.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class HebrewCalendar : public android::icu::util::Calendar {
protected:
	void virtual handleComputeFields(int julianDay);
	int virtual handleComputeMonthStart(int eyear,int month,bool useMonth);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
	int virtual handleGetMonthLength(int extendedYear,int month);
	int virtual handleGetYearLength(int eyear);
	void virtual validateField(int field);
private:
	static long long BAHARAD;
	static long long DAY_PARTS;
	static long long HOUR_PARTS;
	static std::shared_ptr<int[][]> LEAP_MONTH_START;
	static std::shared_ptr<int[][]> LIMITS;
	static int MONTH_DAYS;
	static long long MONTH_FRACT;
	static std::shared_ptr<int[][]> MONTH_LENGTH;
	static long long MONTH_PARTS;
	static std::shared_ptr<int[][]> MONTH_START;
	static std::shared_ptr<android::icu::impl::CalendarCache> cache;
	static long long serialVersionUID;
	static int monthsInYear(int year);
	static long long startOfYear(int year);
	int virtual yearType(int year);
public:
	static int ADAR;
	static int ADAR_1;
	static int AV;
	static int ELUL;
	static int HESHVAN;
	static int IYAR;
	static int KISLEV;
	static int NISAN;
	static int SHEVAT;
	static int SIVAN;
	static int TAMUZ;
	static int TEVET;
	static int TISHRI;
	static void static_cinit();
	HebrewCalendar();
	HebrewCalendar(int year,int month,int date);
	HebrewCalendar(int year,int month,int date,int hour,int minute,int second);
	HebrewCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	HebrewCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	HebrewCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	HebrewCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	HebrewCalendar(std::shared_ptr<java::util::Date> date);
	HebrewCalendar(std::shared_ptr<java::util::Locale> aLocale);
	static bool isLeapYear(int year);
	void virtual add(int field,int amount);
	std::shared_ptr<java::lang::String> virtual getType();
	void virtual roll(int field,int amount);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::HebrewCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~HebrewCalendar(){
	}

}; // class HebrewCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_HebrewCalendar__

