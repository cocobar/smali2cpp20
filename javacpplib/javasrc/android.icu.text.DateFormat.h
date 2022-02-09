#ifndef __android_icu_text_DateFormat__
#define __android_icu_text_DateFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormat.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormat_S_BooleanAttribute.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Date.h"
#include "java.util.EnumSet.h"
#include "java.util.List.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class DateFormat : public android::icu::text::UFormat {
protected:
	std::shared_ptr<android::icu::util::Calendar> calendar;
	std::shared_ptr<android::icu::text::NumberFormat> numberFormat;
	DateFormat();
private:
	static long long serialVersionUID;
	std::shared_ptr<java::util::EnumSet<android::icu::text::DateFormat_S_BooleanAttribute>> booleanAttributes;
	std::shared_ptr<android::icu::text::DisplayContext> capitalizationSetting;
	int serialVersionOnStream;
	static std::shared_ptr<android::icu::text::DateFormat> get(int dateStyle,int timeStyle,std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<android::icu::util::Calendar> cVar6);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
public:
	static std::shared_ptr<java::lang::String> ABBR_GENERIC_TZ;
	static std::shared_ptr<java::lang::String> ABBR_MONTH;
	static std::shared_ptr<java::lang::String> ABBR_MONTH_DAY;
	static std::shared_ptr<java::lang::String> ABBR_MONTH_WEEKDAY_DAY;
	static std::shared_ptr<java::lang::String> ABBR_QUARTER;
	static std::shared_ptr<java::lang::String> ABBR_SPECIFIC_TZ;
	static std::shared_ptr<java::lang::String> ABBR_STANDALONE_MONTH;
	static std::shared_ptr<java::lang::String> ABBR_UTC_TZ;
	static std::shared_ptr<java::lang::String> ABBR_WEEKDAY;
	static int AM_PM_FIELD;
	static int AM_PM_MIDNIGHT_NOON_FIELD;
	static int DATE_FIELD;
	static std::shared_ptr<java::util::List<java::lang::String>> DATE_SKELETONS;
	static std::shared_ptr<java::lang::String> DAY;
	static int DAY_OF_WEEK_FIELD;
	static int DAY_OF_WEEK_IN_MONTH_FIELD;
	static int DAY_OF_YEAR_FIELD;
	static int DEFAULT;
	static int DOW_LOCAL_FIELD;
	static int ERA_FIELD;
	static int EXTENDED_YEAR_FIELD;
	static int FIELD_COUNT;
	static int FLEXIBLE_DAY_PERIOD_FIELD;
	static int FRACTIONAL_SECOND_FIELD;
	static int FULL;
	static std::shared_ptr<java::lang::String> GENERIC_TZ;
	static std::shared_ptr<java::lang::String> HOUR;
	static int HOUR0_FIELD;
	static int HOUR1_FIELD;
	static std::shared_ptr<java::lang::String> HOUR24;
	static std::shared_ptr<java::lang::String> HOUR24_MINUTE;
	static std::shared_ptr<java::lang::String> HOUR24_MINUTE_SECOND;
	static std::shared_ptr<java::lang::String> HOUR_GENERIC_TZ;
	static std::shared_ptr<java::lang::String> HOUR_MINUTE;
	static std::shared_ptr<java::lang::String> HOUR_MINUTE_GENERIC_TZ;
	static std::shared_ptr<java::lang::String> HOUR_MINUTE_SECOND;
	static std::shared_ptr<java::lang::String> HOUR_MINUTE_TZ;
	static int HOUR_OF_DAY0_FIELD;
	static int HOUR_OF_DAY1_FIELD;
	static std::shared_ptr<java::lang::String> HOUR_TZ;
	static int JULIAN_DAY_FIELD;
	static std::shared_ptr<java::lang::String> LOCATION_TZ;
	static int LONG;
	static int MEDIUM;
	static int MILLISECONDS_IN_DAY_FIELD;
	static int MILLISECOND_FIELD;
	static std::shared_ptr<java::lang::String> MINUTE;
	static int MINUTE_FIELD;
	static std::shared_ptr<java::lang::String> MINUTE_SECOND;
	static std::shared_ptr<java::lang::String> MONTH;
	static std::shared_ptr<java::lang::String> MONTH_DAY;
	static int MONTH_FIELD;
	static std::shared_ptr<java::lang::String> MONTH_WEEKDAY_DAY;
	static int NONE;
	static std::shared_ptr<java::lang::String> NUM_MONTH;
	static std::shared_ptr<java::lang::String> NUM_MONTH_DAY;
	static std::shared_ptr<java::lang::String> NUM_MONTH_WEEKDAY_DAY;
	static std::shared_ptr<java::lang::String> QUARTER;
	static int QUARTER_FIELD;
	static int RELATED_YEAR;
	static int RELATIVE;
	static int RELATIVE_DEFAULT;
	static int RELATIVE_FULL;
	static int RELATIVE_LONG;
	static int RELATIVE_MEDIUM;
	static int RELATIVE_SHORT;
	static std::shared_ptr<java::lang::String> SECOND;
	static int SECOND_FIELD;
	static int SHORT;
	static std::shared_ptr<java::lang::String> SPECIFIC_TZ;
	static int STANDALONE_DAY_FIELD;
	static std::shared_ptr<java::lang::String> STANDALONE_MONTH;
	static int STANDALONE_MONTH_FIELD;
	static int STANDALONE_QUARTER_FIELD;
	static int TIMEZONE_FIELD;
	static int TIMEZONE_GENERIC_FIELD;
	static int TIMEZONE_ISO_FIELD;
	static int TIMEZONE_ISO_LOCAL_FIELD;
	static int TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD;
	static int TIMEZONE_RFC_FIELD;
	static int TIMEZONE_SPECIAL_FIELD;
	static int TIME_SEPARATOR;
	static std::shared_ptr<java::util::List<java::lang::String>> TIME_SKELETONS;
	static std::shared_ptr<java::lang::String> WEEKDAY;
	static int WEEK_OF_MONTH_FIELD;
	static int WEEK_OF_YEAR_FIELD;
	static std::shared_ptr<java::lang::String> YEAR;
	static std::shared_ptr<java::lang::String> YEAR_ABBR_MONTH;
	static std::shared_ptr<java::lang::String> YEAR_ABBR_MONTH_DAY;
	static std::shared_ptr<java::lang::String> YEAR_ABBR_MONTH_WEEKDAY_DAY;
	static std::shared_ptr<java::lang::String> YEAR_ABBR_QUARTER;
	static int YEAR_FIELD;
	static std::shared_ptr<java::lang::String> YEAR_MONTH;
	static std::shared_ptr<java::lang::String> YEAR_MONTH_DAY;
	static std::shared_ptr<java::lang::String> YEAR_MONTH_WEEKDAY_DAY;
	static int YEAR_NAME_FIELD;
	static std::shared_ptr<java::lang::String> YEAR_NUM_MONTH;
	static std::shared_ptr<java::lang::String> YEAR_NUM_MONTH_DAY;
	static std::shared_ptr<java::lang::String> YEAR_NUM_MONTH_WEEKDAY_DAY;
	static std::shared_ptr<java::lang::String> YEAR_QUARTER;
	static int YEAR_WOY_FIELD;
	static std::shared_ptr<java::util::List<java::lang::String>> ZONE_SKELETONS;
	static int currentSerialVersion;
	static void static_cinit();
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<android::icu::text::DateFormat> getDateInstance();
	static std::shared_ptr<android::icu::text::DateFormat> getDateInstance(int style);
	static std::shared_ptr<android::icu::text::DateFormat> getDateInstance(int style,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getDateInstance(int style,std::shared_ptr<java::util::Locale> aLocale);
	static std::shared_ptr<android::icu::text::DateFormat> getDateInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle);
	static std::shared_ptr<android::icu::text::DateFormat> getDateInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getDateInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getDateTimeInstance();
	static std::shared_ptr<android::icu::text::DateFormat> getDateTimeInstance(int dateStyle,int timeStyle);
	static std::shared_ptr<android::icu::text::DateFormat> getDateTimeInstance(int dateStyle,int timeStyle,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getDateTimeInstance(int dateStyle,int timeStyle,std::shared_ptr<java::util::Locale> aLocale);
	static std::shared_ptr<android::icu::text::DateFormat> getDateTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,int timeStyle);
	static std::shared_ptr<android::icu::text::DateFormat> getDateTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,int timeStyle,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getDateTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,int timeStyle,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getInstance();
	static std::shared_ptr<android::icu::text::DateFormat> getInstance(std::shared_ptr<android::icu::util::Calendar> cal);
	static std::shared_ptr<android::icu::text::DateFormat> getInstance(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getInstance(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getInstanceForSkeleton(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getInstanceForSkeleton(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getInstanceForSkeleton(std::shared_ptr<java::lang::String> skeleton);
	static std::shared_ptr<android::icu::text::DateFormat> getInstanceForSkeleton(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getInstanceForSkeleton(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getPatternInstance(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getPatternInstance(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getPatternInstance(std::shared_ptr<java::lang::String> skeleton);
	static std::shared_ptr<android::icu::text::DateFormat> getPatternInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getPatternInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getTimeInstance();
	static std::shared_ptr<android::icu::text::DateFormat> getTimeInstance(int style);
	static std::shared_ptr<android::icu::text::DateFormat> getTimeInstance(int style,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getTimeInstance(int style,std::shared_ptr<java::util::Locale> aLocale);
	static std::shared_ptr<android::icu::text::DateFormat> getTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int timeStyle);
	static std::shared_ptr<android::icu::text::DateFormat> getTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int timeStyle,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> getTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int timeStyle,std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::util::Date> date);
	std::shared_ptr<java::lang::StringBuffer> format(std::shared_ptr<android::icu::util::Calendar> var0,std::shared_ptr<java::lang::StringBuffer> var1,std::shared_ptr<java::text::FieldPosition> var2) = 0;
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::util::Date> date,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	bool virtual getBooleanAttribute(std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar0);
	std::shared_ptr<android::icu::util::Calendar> virtual getCalendar();
	std::shared_ptr<android::icu::text::DisplayContext> virtual getContext(std::shared_ptr<android::icu::text::DisplayContext_S_Type> type);
	std::shared_ptr<android::icu::text::NumberFormat> virtual getNumberFormat();
	std::shared_ptr<android::icu::util::TimeZone> virtual getTimeZone();
	int virtual hashCode();
	bool virtual isCalendarLenient();
	bool virtual isLenient();
	std::shared_ptr<java::util::Date> virtual parse(std::shared_ptr<java::lang::String> text);
	std::shared_ptr<java::util::Date> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos);
	void parse(std::shared_ptr<java::lang::String> var0,std::shared_ptr<android::icu::util::Calendar> var1,std::shared_ptr<java::text::ParsePosition> var2) = 0;
	std::shared_ptr<java::lang::Object> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<android::icu::text::DateFormat> virtual setBooleanAttribute(std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar0,bool value);
	void virtual setCalendar(std::shared_ptr<android::icu::util::Calendar> newCalendar);
	void virtual setCalendarLenient(bool lenient);
	void virtual setContext(std::shared_ptr<android::icu::text::DisplayContext> context);
	void virtual setLenient(bool lenient);
	void virtual setNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> newNumberFormat);
	void virtual setTimeZone(std::shared_ptr<android::icu::util::TimeZone> zone);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateFormat(){
	}

}; // class DateFormat
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormat__

