#ifndef __android_icu_text_DateFormatSymbols__
#define __android_icu_text_DateFormatSymbols__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.DateFormatSymbols_S_CapitalizationContextUsage.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Class.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.ResourceBundle.h"

namespace android::icu::text{
class DateFormatSymbols : public java::io::Serializable, public java::lang::Cloneable {
protected:
	void virtual initializeData(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<android::icu::impl::ICUResourceBundle> b,std::shared_ptr<java::lang::String> calendarType);
	void virtual initializeData(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<java::lang::String> type);
private:
	static std::shared_ptr<std::vector<std::vector<java::lang::String>>> CALENDAR_CLASSES;
	static std::shared_ptr<std::vector<java::lang::String>> DAY_PERIOD_KEYS;
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::text::DateFormatSymbols,android::icu::util::ULocale>> DFSCACHE;
	static std::shared_ptr<std::vector<java::lang::String>> LEAP_MONTH_PATTERNS_PATHS;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>> contextUsageTypeMap;
	static long long serialVersionUID;
	std::shared_ptr<android::icu::util::ULocale> actualLocale;
	std::shared_ptr<android::icu::util::ULocale> requestedLocale;
	std::shared_ptr<java::lang::String> timeSeparator;
	std::shared_ptr<android::icu::util::ULocale> validLocale;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> zoneStrings;
	DateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<android::icu::impl::ICUResourceBundle> b,std::shared_ptr<java::lang::String> calendarType);
	static bool arrayOfArrayEquals(std::shared_ptr<std::vector<std::vector<java::lang::Object>>> aa1,std::shared_ptr<std::vector<std::vector<java::lang::Object>>> aa2);
	std::shared_ptr<java::lang::String> virtual duplicate(std::shared_ptr<std::vector<java::lang::String>> srcArray);
	std::shared_ptr<java::lang::String> virtual duplicate(std::shared_ptr<std::vector<std::vector<java::lang::String>>> srcArray);
	std::shared_ptr<java::lang::String> virtual loadDayPeriodStrings(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> resourceMap);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
public:
	static int ABBREVIATED;
	static std::shared_ptr<java::lang::String> ALTERNATE_TIME_SEPARATOR;
	static std::shared_ptr<java::lang::String> DEFAULT_TIME_SEPARATOR;
	static int DT_CONTEXT_COUNT;
	static int DT_LEAP_MONTH_PATTERN_FORMAT_ABBREV;
	static int DT_LEAP_MONTH_PATTERN_FORMAT_NARROW;
	static int DT_LEAP_MONTH_PATTERN_FORMAT_WIDE;
	static int DT_LEAP_MONTH_PATTERN_NUMERIC;
	static int DT_LEAP_MONTH_PATTERN_STANDALONE_ABBREV;
	static int DT_LEAP_MONTH_PATTERN_STANDALONE_NARROW;
	static int DT_LEAP_MONTH_PATTERN_STANDALONE_WIDE;
	static int DT_MONTH_PATTERN_COUNT;
	static int DT_WIDTH_COUNT;
	static int FORMAT;
	static int NARROW;
	static int NUMERIC;
	static int SHORT;
	static int STANDALONE;
	static int WIDE;
	static int millisPerHour;
	static std::shared_ptr<java::lang::String> patternChars;
	std::shared_ptr<std::vector<java::lang::String>> abbreviatedDayPeriods;
	std::shared_ptr<std::vector<java::lang::String>> ampms;
	std::shared_ptr<std::vector<java::lang::String>> ampmsNarrow;
	std::shared_ptr<java::util::Map<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage,bool[]>> capitalization;
	std::shared_ptr<std::vector<java::lang::String>> eraNames;
	std::shared_ptr<std::vector<java::lang::String>> eras;
	std::shared_ptr<std::vector<java::lang::String>> leapMonthPatterns;
	std::shared_ptr<java::lang::String> localPatternChars;
	std::shared_ptr<std::vector<java::lang::String>> months;
	std::shared_ptr<std::vector<java::lang::String>> narrowDayPeriods;
	std::shared_ptr<std::vector<java::lang::String>> narrowEras;
	std::shared_ptr<std::vector<java::lang::String>> narrowMonths;
	std::shared_ptr<std::vector<java::lang::String>> narrowWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> quarters;
	std::shared_ptr<std::vector<java::lang::String>> shortMonths;
	std::shared_ptr<std::vector<java::lang::String>> shortQuarters;
	std::shared_ptr<std::vector<java::lang::String>> shortWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> shortYearNames;
	std::shared_ptr<std::vector<java::lang::String>> shortZodiacNames;
	std::shared_ptr<std::vector<java::lang::String>> shorterWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> standaloneAbbreviatedDayPeriods;
	std::shared_ptr<std::vector<java::lang::String>> standaloneMonths;
	std::shared_ptr<std::vector<java::lang::String>> standaloneNarrowDayPeriods;
	std::shared_ptr<std::vector<java::lang::String>> standaloneNarrowMonths;
	std::shared_ptr<std::vector<java::lang::String>> standaloneNarrowWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> standaloneQuarters;
	std::shared_ptr<std::vector<java::lang::String>> standaloneShortMonths;
	std::shared_ptr<std::vector<java::lang::String>> standaloneShortQuarters;
	std::shared_ptr<std::vector<java::lang::String>> standaloneShortWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> standaloneShorterWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> standaloneWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> standaloneWideDayPeriods;
	std::shared_ptr<std::vector<java::lang::String>> weekdays;
	std::shared_ptr<std::vector<java::lang::String>> wideDayPeriods;
	static void static_cinit();
	DateFormatSymbols();
	DateFormatSymbols(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale);
	DateFormatSymbols(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::util::Locale> locale);
	DateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> locale);
	DateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<android::icu::impl::ICUResourceBundle> b,std::shared_ptr<java::lang::String> calendarType,std::shared_ptr<android::icu::text::DateFormatSymbols> _this3);
	DateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> calType);
	DateFormatSymbols(std::shared_ptr<java::lang::Class<android::icu::util::Calendar>> calendarClass,std::shared_ptr<android::icu::util::ULocale> locale);
	DateFormatSymbols(std::shared_ptr<java::lang::Class<android::icu::util::Calendar>> calendarClass,std::shared_ptr<java::util::Locale> locale);
	DateFormatSymbols(std::shared_ptr<java::util::Locale> locale);
	DateFormatSymbols(std::shared_ptr<java::util::ResourceBundle> bundle,std::shared_ptr<android::icu::util::ULocale> locale);
	DateFormatSymbols(std::shared_ptr<java::util::ResourceBundle> bundle,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<java::util::ResourceBundle> getDateFormatBundle(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<java::util::ResourceBundle> getDateFormatBundle(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::util::ResourceBundle> getDateFormatBundle(std::shared_ptr<java::lang::Class<android::icu::util::Calendar>> calendarClass,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<java::util::ResourceBundle> getDateFormatBundle(std::shared_ptr<java::lang::Class<android::icu::util::Calendar>> calendarClass,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateFormatSymbols> getInstance();
	static std::shared_ptr<android::icu::text::DateFormatSymbols> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormatSymbols> getInstance(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getAmPmStrings();
	std::shared_ptr<java::lang::String> virtual getEraNames();
	std::shared_ptr<java::lang::String> virtual getEras();
	std::shared_ptr<java::lang::String> virtual getLeapMonthPattern(int context,int width);
	std::shared_ptr<java::lang::String> virtual getLocalPatternChars();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type);
	std::shared_ptr<java::lang::String> virtual getMonths();
	std::shared_ptr<java::lang::String> virtual getMonths(int context,int width);
	std::shared_ptr<java::lang::String> virtual getNarrowEras();
	std::shared_ptr<java::lang::String> virtual getQuarters(int context,int width);
	std::shared_ptr<java::lang::String> virtual getShortMonths();
	std::shared_ptr<java::lang::String> virtual getShortWeekdays();
	std::shared_ptr<java::lang::String> virtual getTimeSeparatorString();
	std::shared_ptr<java::lang::String> virtual getWeekdays();
	std::shared_ptr<java::lang::String> virtual getWeekdays(int context,int width);
	std::shared_ptr<java::lang::String> virtual getYearNames(int context,int width);
	std::shared_ptr<java::lang::String> virtual getZodiacNames(int context,int width);
	std::shared_ptr<java::lang::String> virtual getZoneStrings();
	int virtual hashCode();
	void virtual initializeData(std::shared_ptr<android::icu::text::DateFormatSymbols> dfs);
	void virtual setAmPmStrings(std::shared_ptr<std::vector<java::lang::String>> newAmpms);
	void virtual setEraNames(std::shared_ptr<std::vector<java::lang::String>> newEraNames);
	void virtual setEras(std::shared_ptr<std::vector<java::lang::String>> newEras);
	void virtual setLeapMonthPattern(std::shared_ptr<java::lang::String> leapMonthPattern,int context,int width);
	void virtual setLocalPatternChars(std::shared_ptr<java::lang::String> newLocalPatternChars);
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual);
	void virtual setMonths(std::shared_ptr<std::vector<java::lang::String>> newMonths);
	void virtual setMonths(std::shared_ptr<std::vector<java::lang::String>> newMonths,int context,int width);
	void virtual setQuarters(std::shared_ptr<std::vector<java::lang::String>> newQuarters,int context,int width);
	void virtual setShortMonths(std::shared_ptr<std::vector<java::lang::String>> newShortMonths);
	void virtual setShortWeekdays(std::shared_ptr<std::vector<java::lang::String>> newAbbrevWeekdays);
	void virtual setTimeSeparatorString(std::shared_ptr<java::lang::String> newTimeSeparator);
	void virtual setWeekdays(std::shared_ptr<std::vector<java::lang::String>> newWeekdays);
	void virtual setWeekdays(std::shared_ptr<std::vector<java::lang::String>> newWeekdays,int context,int width);
	void virtual setYearNames(std::shared_ptr<std::vector<java::lang::String>> yearNames,int context,int width);
	void virtual setZodiacNames(std::shared_ptr<std::vector<java::lang::String>> zodiacNames,int context,int width);
	void virtual setZoneStrings(std::shared_ptr<std::vector<std::vector<java::lang::String>>> newZoneStrings);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateFormatSymbols::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateFormatSymbols(){
	}

}; // class DateFormatSymbols
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormatSymbols__

