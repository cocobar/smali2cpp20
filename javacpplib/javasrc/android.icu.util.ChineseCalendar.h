#ifndef __android_icu_util_ChineseCalendar__
#define __android_icu_util_ChineseCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ChineseCalendar.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer.h"
#include "android.icu.impl.CalendarCache.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class ChineseCalendar : public android::icu::util::Calendar {
protected:
	ChineseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale,int epochYear,std::shared_ptr<android::icu::util::TimeZone> zoneAstroCalc);
	int virtual getFieldResolutionTable();
	void virtual handleComputeFields(int julianDay);
	int virtual handleComputeMonthStart(int cVar0,int cVar1,bool useMonth);
	std::shared_ptr<android::icu::text::DateFormat> virtual handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<android::icu::util::ULocale> locale);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
	int virtual handleGetMonthLength(int extendedYear,int month);
private:
	static std::shared_ptr<android::icu::util::TimeZone> CHINA_ZONE;
	static int CHINESE_EPOCH_YEAR;
	static std::shared_ptr<int[][]> LIMITS;
	static int SYNODIC_GAP;
	static long long serialVersionUID;
	std::shared_ptr<android::icu::impl::CalendarAstronomer> astro;
	int epochYear;
	bool isLeapYear;
	std::shared_ptr<android::icu::impl::CalendarCache> newYearCache;
	std::shared_ptr<android::icu::impl::CalendarCache> winterSolsticeCache;
	std::shared_ptr<android::icu::util::TimeZone> zoneAstro;
	void virtual computeChineseFields(int days,int gyear,int gmonth,bool setAllFields);
	long long virtual daysToMillis(int days);
	bool virtual hasNoMajorSolarTerm(int newMoon);
	bool virtual isLeapMonthBetween(int newMoon1,int newMoon2);
	int virtual majorSolarTerm(int days);
	int virtual millisToDays(long long millis);
	int virtual newMoonNear(int days,bool after);
	int virtual newYear(int gyear);
	void virtual offsetMonth(int newMoon,int dom,int delta);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
	int virtual synodicMonthsBetween(int day1,int day2);
	int virtual winterSolstice(int gyear);
public:
	static std::shared_ptr<int[][][]> CHINESE_DATE_PRECEDENCE;
	static void static_cinit();
	ChineseCalendar();
	ChineseCalendar(int year,int month,int isLeapMonth,int date);
	ChineseCalendar(int era,int year,int month,int isLeapMonth,int date);
	ChineseCalendar(int year,int month,int isLeapMonth,int date,int hour,int minute,int second);
	ChineseCalendar(int era,int year,int month,int isLeapMonth,int date,int hour,int minute,int second);
	ChineseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	ChineseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	ChineseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	ChineseCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	ChineseCalendar(std::shared_ptr<java::util::Date> date);
	ChineseCalendar(std::shared_ptr<java::util::Locale> aLocale);
	void virtual add(int field,int amount);
	std::shared_ptr<java::lang::String> virtual getType();
	bool virtual haveDefaultCentury();
	void virtual roll(int field,int amount);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::ChineseCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ChineseCalendar(){
	}

}; // class ChineseCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_ChineseCalendar__

