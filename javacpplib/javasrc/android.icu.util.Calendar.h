#ifndef __android_icu_util_Calendar__
#define __android_icu_util_Calendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.util.Calendar_S_CalType.h"
#include "android.icu.util.Calendar_S_PatternData.h"
#include "android.icu.util.Calendar_S_WeekData.h"
#include "android.icu.util.Calendar_S_WeekDataCache.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Comparable.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class Calendar : public java::io::Serializable, public java::lang::Cloneable, public java::lang::Comparable<android::icu::util::Calendar> {
protected:
	static int BASE_FIELD_COUNT;
	static int EPOCH_JULIAN_DAY;
	static int GREATEST_MINIMUM;
	static int INTERNALLY_SET;
	static int JAN_1_1_JULIAN_DAY;
	static int LEAST_MAXIMUM;
	static int MAXIMUM;
	static std::shared_ptr<java::util::Date> MAX_DATE;
	static int MAX_FIELD_COUNT;
	static int MAX_JULIAN;
	static long long MAX_MILLIS;
	static int MINIMUM;
	static int MINIMUM_USER_STAMP;
	static std::shared_ptr<java::util::Date> MIN_DATE;
	static int MIN_JULIAN;
	static long long MIN_MILLIS;
	static long long ONE_DAY;
	static int ONE_HOUR;
	static int ONE_MINUTE;
	static int ONE_SECOND;
	static long long ONE_WEEK;
	static int RESOLVE_REMAP;
	static int UNSET;
	Calendar();
	Calendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	Calendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	static int floorDivide(int numerator,int denominator);
	static int floorDivide(int numerator,int denominator,std::shared_ptr<int[]> remainder);
	static int floorDivide(long long numerator,int denominator,std::shared_ptr<int[]> remainder);
	static long long floorDivide(long long numerator,long long denominator);
	static int gregorianMonthLength(int y,int m);
	static int gregorianPreviousMonthLength(int y,int m);
	static bool isGregorianLeapYear(int year);
	static int julianDayToDayOfWeek(int julian);
	static long long julianDayToMillis(int julian);
	static int millisToJulianDay(long long millis);
	void virtual complete();
	void virtual computeFields();
	void virtual computeGregorianFields(int julianDay);
	int virtual computeGregorianMonthStart(int cVar0,int cVar1);
	int virtual computeJulianDay();
	int virtual computeMillisInDay();
	void virtual computeTime();
	int virtual computeZoneOffset(long long millis,int millisInDay);
	std::shared_ptr<java::lang::String> virtual fieldName(int field);
	int virtual getDefaultDayInMonth(int extendedYear,int month);
	int virtual getDefaultMonthInYear(int extendedYear);
	int virtual getFieldResolutionTable();
	int virtual getGregorianDayOfMonth();
	int virtual getGregorianDayOfYear();
	int virtual getGregorianMonth();
	int virtual getGregorianYear();
	int virtual getLimit(int field,int limitType);
	int virtual getStamp(int field);
	void virtual handleComputeFields(int julianDay);
	int virtual handleComputeJulianDay(int bestField);
	int handleComputeMonthStart(int var0,int var1,bool var2) = 0;
	int virtual handleCreateFields();
	std::shared_ptr<android::icu::text::DateFormat> virtual handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::DateFormat> virtual handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::DateFormat> virtual handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<android::icu::text::DateFormat> virtual handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Locale> locale);
	int handleGetExtendedYear() = 0;
	int handleGetLimit(int var0,int var1) = 0;
	int virtual handleGetMonthLength(int extendedYear,int month);
	int virtual handleGetYearLength(int eyear);
	int virtual internalGet(int field);
	int virtual internalGet(int field,int cVar0);
	long long virtual internalGetTimeInMillis();
	void virtual internalSet(int field,int value);
	int virtual newerField(int defaultField,int alternateField);
	int virtual newestStamp(int first,int last,int bestStampSoFar);
	void virtual pinField(int field);
	void virtual prepareGetActual(int field,bool isMinimum);
	int virtual resolveFields(std::shared_ptr<int[][][]> precedenceTable);
	void virtual validateField(int field);
	void virtual validateField(int field,int min,int max);
	void virtual validateFields();
	int virtual weekNumber(int dayOfPeriod,int dayOfWeek);
	int virtual weekNumber(int desiredDay,int dayOfPeriod,int dayOfWeek);
private:
	static std::shared_ptr<int[]> _android_icu_util_Calendar_S_CalTypeSwitchesValues;
	static std::shared_ptr<std::vector<java::lang::String>> DEFAULT_PATTERNS;
	static int FIELD_DIFF_MAX_INT;
	static std::shared_ptr<std::vector<java::lang::String>> FIELD_NAME;
	static std::shared_ptr<int[]> FIND_ZONE_TRANSITION_TIME_UNITS;
	static std::shared_ptr<int[][]> GREGORIAN_MONTH_COUNT;
	static std::shared_ptr<int[][]> LIMITS;
	static std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,android::icu::util::Calendar_S_PatternData>> PATTERN_CACHE;
	static char QUOTE;
	static int STAMP_MAX;
	static std::shared_ptr<android::icu::util::Calendar_S_WeekDataCache> WEEK_DATA_CACHE;
	static long long serialVersionUID;
	std::shared_ptr<android::icu::util::ULocale> actualLocale;
	bool areAllFieldsSet;
	bool areFieldsSet;
	bool areFieldsVirtuallySet;
	std::shared_ptr<int[]> fields;
	int firstDayOfWeek;
	int gregorianDayOfMonth;
	int gregorianDayOfYear;
	int gregorianMonth;
	int gregorianYear;
	int internalSetMask;
	bool isTimeSet;
	bool lenient;
	int minimalDaysInFirstWeek;
	int nextStamp;
	int repeatedWallTime;
	int skippedWallTime;
	std::shared_ptr<int[]> stamp;
	long long time;
	std::shared_ptr<android::icu::util::ULocale> validLocale;
	int weekendCease;
	int weekendCeaseMillis;
	int weekendOnset;
	int weekendOnsetMillis;
	std::shared_ptr<android::icu::util::TimeZone> zone;
	static int _getandroid_icu_util_Calendar_S_CalTypeSwitchesValues();
	long long virtual compare(std::shared_ptr<java::lang::Object> that);
	void virtual computeGregorianAndDOWFields(int julianDay);
	void virtual computeWeekFields();
	static std::shared_ptr<android::icu::util::Calendar> createInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<java::lang::String> expandOverride(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override);
	static std::shared_ptr<java::lang::Long> findPreviousZoneTransitionTime(std::shared_ptr<android::icu::util::TimeZone> tz,int upperOffset,long long upper,long long lower);
	static int firstIslamicStartYearFromGrego(int year);
	static std::shared_ptr<android::icu::text::DateFormat> formatHelper(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> loc,int dateStyle,int timeStyle);
	int virtual getActualHelper(int field,int startValue,int endValue);
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> getCalendarTypeForLocale(std::shared_ptr<android::icu::util::ULocale> l);
	std::shared_ptr<java::lang::Long> virtual getImmediatePreviousZoneTransition(long long base);
	static std::shared_ptr<android::icu::util::Calendar> getInstanceInternal(std::shared_ptr<android::icu::util::TimeZone> cVar1,std::shared_ptr<android::icu::util::ULocale> cVar0);
	static std::shared_ptr<android::icu::util::Calendar_S_PatternData> getPatternData(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> calType);
	static std::shared_ptr<java::lang::Long> getPreviousZoneTransitionTime(std::shared_ptr<android::icu::util::TimeZone> tz,long long base,long long duration);
	static std::shared_ptr<java::lang::String> getRegionForCalendar(std::shared_ptr<android::icu::util::ULocale> loc);
	static std::shared_ptr<android::icu::util::Calendar_S_WeekData> getWeekDataForRegionInternal(std::shared_ptr<java::lang::String> cVar0);
	static int gregoYearFromIslamicStart(int year);
	void virtual initInternal();
	static std::shared_ptr<java::lang::String> mergeOverrideStrings(std::shared_ptr<java::lang::String> datePattern,std::shared_ptr<java::lang::String> timePattern,std::shared_ptr<java::lang::String> dateOverride,std::shared_ptr<java::lang::String> timeOverride);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
	void virtual recalculateStamp();
	void virtual setCalendarLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual setWeekData(std::shared_ptr<java::lang::String> cVar0);
	void virtual updateTime();
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream);
public:
	static bool _assertionsDisabled;
	static int AM;
	static int AM_PM;
	static int APRIL;
	static int AUGUST;
	static int DATE;
	static std::shared_ptr<int[][][]> DATE_PRECEDENCE;
	static int DAY_OF_MONTH;
	static int DAY_OF_WEEK;
	static int DAY_OF_WEEK_IN_MONTH;
	static int DAY_OF_YEAR;
	static int DECEMBER;
	static int DOW_LOCAL;
	static std::shared_ptr<int[][][]> DOW_PRECEDENCE;
	static int DST_OFFSET;
	static int ERA;
	static int EXTENDED_YEAR;
	static int FEBRUARY;
	static int FRIDAY;
	static int HOUR;
	static int HOUR_OF_DAY;
	static int IS_LEAP_MONTH;
	static int JANUARY;
	static int JULIAN_DAY;
	static int JULY;
	static int JUNE;
	static int MARCH;
	static int MAY;
	static int MILLISECOND;
	static int MILLISECONDS_IN_DAY;
	static int MINUTE;
	static int MONDAY;
	static int MONTH;
	static int NOVEMBER;
	static int OCTOBER;
	static int PM;
	static int SATURDAY;
	static int SECOND;
	static int SEPTEMBER;
	static int SUNDAY;
	static int THURSDAY;
	static int TUESDAY;
	static int UNDECIMBER;
	static int WALLTIME_FIRST;
	static int WALLTIME_LAST;
	static int WALLTIME_NEXT_VALID;
	static int WEDNESDAY;
	static int WEEKDAY;
	static int WEEKEND;
	static int WEEKEND_CEASE;
	static int WEEKEND_ONSET;
	static int WEEK_OF_MONTH;
	static int WEEK_OF_YEAR;
	static int YEAR;
	static int YEAR_WOY;
	static int ZONE_OFFSET;
	static std::shared_ptr<java::lang::String> _get0();
	static std::shared_ptr<android::icu::impl::ICUCache> _get1();
	static std::shared_ptr<android::icu::util::Calendar_S_PatternData> _wrap0(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> calType);
	static std::shared_ptr<android::icu::util::Calendar_S_WeekData> _wrap1(std::shared_ptr<java::lang::String> region);
	static void static_cinit();
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<java::lang::String> getDateTimeFormatString(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> calType,int dateStyle,int timeStyle);
	static std::shared_ptr<java::lang::String> getDateTimePattern(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> uLocale,int dateStyle);
	static std::shared_ptr<android::icu::util::Calendar> getInstance();
	static std::shared_ptr<android::icu::util::Calendar> getInstance(std::shared_ptr<android::icu::util::TimeZone> zone);
	static std::shared_ptr<android::icu::util::Calendar> getInstance(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::util::Calendar> getInstance(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	static std::shared_ptr<android::icu::util::Calendar> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::util::Calendar> getInstance(std::shared_ptr<java::util::Locale> aLocale);
	static std::shared_ptr<java::lang::String> getKeywordValuesForLocale(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale,bool commonlyUsed);
	static std::shared_ptr<android::icu::util::Calendar_S_WeekData> getWeekDataForRegion(std::shared_ptr<java::lang::String> region);
	void virtual add(int field,int cVar2);
	bool virtual after(std::shared_ptr<java::lang::Object> when);
	bool virtual before(std::shared_ptr<java::lang::Object> when);
	void virtual clear();
	void virtual clear(int field);
	std::shared_ptr<java::lang::Object> virtual clone();
	int virtual compareTo(std::shared_ptr<android::icu::util::Calendar> that);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual fieldDifference(std::shared_ptr<java::util::Date> when,int field);
	int virtual get(int field);
	int virtual getActualMaximum(int field);
	int virtual getActualMinimum(int field);
	std::shared_ptr<android::icu::text::DateFormat> virtual getDateTimeFormat(int dateStyle,int timeStyle,std::shared_ptr<android::icu::util::ULocale> loc);
	std::shared_ptr<android::icu::text::DateFormat> virtual getDateTimeFormat(int dateStyle,int timeStyle,std::shared_ptr<java::util::Locale> loc);
	int virtual getDayOfWeekType(int dayOfWeek);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<android::icu::util::ULocale> loc);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::util::Locale> loc);
	int virtual getFieldCount();
	int virtual getFirstDayOfWeek();
	int virtual getGreatestMinimum(int field);
	int virtual getLeastMaximum(int field);
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type);
	int virtual getMaximum(int field);
	int virtual getMinimalDaysInFirstWeek();
	int virtual getMinimum(int field);
	int virtual getRelatedYear();
	int virtual getRepeatedWallTimeOption();
	int virtual getSkippedWallTimeOption();
	std::shared_ptr<java::util::Date> virtual getTime();
	long long virtual getTimeInMillis();
	std::shared_ptr<android::icu::util::TimeZone> virtual getTimeZone();
	std::shared_ptr<java::lang::String> virtual getType();
	std::shared_ptr<android::icu::util::Calendar_S_WeekData> virtual getWeekData();
	int virtual getWeekendTransition(int dayOfWeek);
	int virtual hashCode();
	bool virtual haveDefaultCentury();
	bool virtual isEquivalentTo(std::shared_ptr<android::icu::util::Calendar> other);
	bool virtual isLenient();
	bool virtual isSet(int field);
	bool virtual isWeekend();
	bool virtual isWeekend(std::shared_ptr<java::util::Date> date);
	void virtual roll(int field,int cVar2);
	void virtual roll(int field,bool up);
	void virtual set(int field,int value);
	void virtual set(int year,int month,int date);
	void virtual set(int year,int month,int date,int hour,int minute);
	void virtual set(int year,int month,int date,int hour,int minute,int second);
	void virtual setFirstDayOfWeek(int value);
	void virtual setLenient(bool lenient);
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual);
	void virtual setMinimalDaysInFirstWeek(int cVar0);
	void virtual setRelatedYear(int year);
	void virtual setRepeatedWallTimeOption(int option);
	void virtual setSkippedWallTimeOption(int option);
	void virtual setTime(std::shared_ptr<java::util::Date> date);
	void virtual setTimeInMillis(long long cVar2);
	void virtual setTimeZone(std::shared_ptr<android::icu::util::TimeZone> value);
	std::shared_ptr<android::icu::util::Calendar> virtual setWeekData(std::shared_ptr<android::icu::util::Calendar_S_WeekData> wdata);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::Calendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Calendar(){
	}

}; // class Calendar
}; // namespace android::icu::util

#endif //__android_icu_util_Calendar__

