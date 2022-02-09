#ifndef __android_icu_text_SimpleDateFormat__
#define __android_icu_text_SimpleDateFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SimpleDateFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriod.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "android.icu.text.TimeZoneFormat.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.Calendar_S_FormatConfiguration.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Character.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Date.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class SimpleDateFormat : public android::icu::text::DateFormat {
protected:
	std::shared_ptr<android::icu::text::DateFormatSymbols> virtual getSymbols();
	int virtual matchQuarterString(std::shared_ptr<java::lang::String> text,int start,int field,std::shared_ptr<std::vector<java::lang::String>> data,std::shared_ptr<android::icu::util::Calendar> cal);
	int virtual matchString(std::shared_ptr<java::lang::String> text,int start,int field,std::shared_ptr<std::vector<java::lang::String>> data,std::shared_ptr<android::icu::util::Calendar> cal);
	std::shared_ptr<android::icu::text::DateFormat_S_Field> virtual patternCharToDateFormatField(char ch);
	std::shared_ptr<java::lang::String> virtual subFormat(char ch,int count,int beginOffset,int fieldNum,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<android::icu::util::Calendar> cal);
	std::shared_ptr<java::lang::String> virtual subFormat(char ch,int count,int beginOffset,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<android::icu::text::DateFormatSymbols> fmtData,std::shared_ptr<android::icu::util::Calendar> cal);
	void virtual subFormat(std::shared_ptr<java::lang::StringBuffer> buf,char ch,int count,int beginOffset,int fieldNum,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<android::icu::util::Calendar> cal);
	int virtual subParse(std::shared_ptr<java::lang::String> text,int start,char ch,int count,bool obeyCount,bool allowNegative,std::shared_ptr<bool[]> ambiguousYear,std::shared_ptr<android::icu::util::Calendar> cal);
	std::shared_ptr<java::lang::String> virtual zeroPaddingNumber(long long value,int minDigits,int maxDigits);
	void virtual zeroPaddingNumber(std::shared_ptr<android::icu::text::NumberFormat> nf,std::shared_ptr<java::lang::StringBuffer> buf,int value,int minDigits,int maxDigits);
private:
	static std::shared_ptr<int[]> _android_icu_text_DisplayContextSwitchesValues;
	static std::shared_ptr<int[]> CALENDAR_FIELD_TO_LEVEL;
	static int DECIMAL_BUF_SIZE;
	static std::shared_ptr<java::lang::String> FALLBACKPATTERN;
	static int HEBREW_CAL_CUR_MILLENIUM_END_YEAR;
	static int HEBREW_CAL_CUR_MILLENIUM_START_YEAR;
	static int ISOSpecialEra;
	static std::shared_ptr<java::lang::String> NUMERIC_FORMAT_CHARS;
	static std::shared_ptr<java::lang::String> NUMERIC_FORMAT_CHARS2;
	static std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,std::vector<java::lang::Object>>> PARSED_PATTERN_CACHE;
	static std::shared_ptr<bool[]> PATTERN_CHAR_IS_SYNTAX;
	static std::shared_ptr<int[]> PATTERN_CHAR_TO_INDEX;
	static std::shared_ptr<int[]> PATTERN_CHAR_TO_LEVEL;
	static std::shared_ptr<int[]> PATTERN_INDEX_TO_CALENDAR_FIELD;
	static std::shared_ptr<std::vector<android::icu::text::DateFormat_S_Field>> PATTERN_INDEX_TO_DATE_FORMAT_ATTRIBUTE;
	static std::shared_ptr<int[]> PATTERN_INDEX_TO_DATE_FORMAT_FIELD;
	static std::shared_ptr<java::lang::String> SUPPRESS_NEGATIVE_PREFIX;
	static std::shared_ptr<android::icu::util::ULocale> cachedDefaultLocale;
	static std::shared_ptr<java::lang::String> cachedDefaultPattern;
	static int millisPerHour;
	static long long serialVersionUID;
	std::shared_ptr<android::icu::text::BreakIterator> capitalizationBrkIter;
	std::shared_ptr<char[]> decDigits;
	std::shared_ptr<char[]> decimalBuf;
	long long defaultCenturyBase;
	std::shared_ptr<java::util::Date> defaultCenturyStart;
	int defaultCenturyStartYear;
	std::shared_ptr<android::icu::text::DateFormatSymbols> formatData;
	bool hasMinute;
	bool hasSecond;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::util::HashMap<java::lang::String,android::icu::text::NumberFormat>> numberFormatters;
	std::shared_ptr<java::lang::String> override;
	std::shared_ptr<java::util::HashMap<java::lang::Character,java::lang::String>> overrideMap;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<std::vector<java::lang::Object>> patternItems;
	int serialVersionOnStream;
	std::shared_ptr<android::icu::text::TimeZoneFormat> tzFormat;
	bool useFastFormat;
	bool useLocalZeroPaddingNumberFormat;
	static int _getandroid_icu_text_DisplayContextSwitchesValues();
	SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateFormatSymbols> formatData,std::shared_ptr<android::icu::util::Calendar> calendar,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,std::shared_ptr<android::icu::util::ULocale> locale,bool useFastFormat,std::shared_ptr<java::lang::String> override);
	bool virtual allowNumericFallback(int patternCharIndex);
	bool virtual diffCalFieldValue(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,std::shared_ptr<std::vector<java::lang::Object>> items,int i);
	void virtual fastZeroPaddingNumber(std::shared_ptr<java::lang::StringBuffer> buf,int value,int minDigits,int maxDigits);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<java::util::List<java::text::FieldPosition>> attributes);
	std::shared_ptr<java::util::Date> virtual getDefaultCenturyStart();
	int virtual getDefaultCenturyStartYear();
	static std::shared_ptr<java::lang::String> getDefaultPattern();
	static int getIndexFromChar(char ch);
	static int getLevelFromChar(char ch);
	std::shared_ptr<java::lang::Object> virtual getPatternItems();
	void virtual initLocalZeroPaddingNumberFormat();
	void virtual initNumberFormatters(std::shared_ptr<android::icu::util::ULocale> loc);
	void virtual initialize();
	void virtual initializeDefaultCenturyStart(long long baseTime);
	void virtual initializeTimeZoneFormat(bool bForceUpdate);
	static bool isNumeric(char formatChar,int count);
	static bool isSyntaxChar(char ch);
	bool virtual lowerLevel(std::shared_ptr<std::vector<java::lang::Object>> items,int i,int level);
	int virtual matchDayPeriodString(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<std::vector<java::lang::String>> data,int dataLength,std::shared_ptr<android::icu::util::Output<android::icu::impl::DayPeriodRules_S_DayPeriod>> dayPeriod);
	int virtual matchLiteral(std::shared_ptr<java::lang::String> text,int pos,std::shared_ptr<std::vector<java::lang::Object>> items,int itemIndex,std::shared_ptr<bool[]> complete);
	int virtual matchString(std::shared_ptr<java::lang::String> text,int start,int field,std::shared_ptr<std::vector<java::lang::String>> data,std::shared_ptr<java::lang::String> monthPattern,std::shared_ptr<android::icu::util::Calendar> cal);
	void virtual parseAmbiguousDatesAsAfter(std::shared_ptr<java::util::Date> startDate);
	std::shared_ptr<java::lang::Number> virtual parseInt(std::shared_ptr<java::lang::String> text,int maxDigits,std::shared_ptr<java::text::ParsePosition> pos,bool allowNegative,std::shared_ptr<android::icu::text::NumberFormat> fmt);
	std::shared_ptr<java::lang::Number> virtual parseInt(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,bool allowNegative,std::shared_ptr<android::icu::text::NumberFormat> fmt);
	void virtual parsePattern();
	void virtual processOverrideString(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> str);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
	int virtual regionMatchesWithOptionalDot(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::lang::String> data,int length);
	static void safeAppend(std::shared_ptr<std::vector<java::lang::String>> array,int value,std::shared_ptr<java::lang::StringBuffer> appendTo);
	static void safeAppendWithMonthPattern(std::shared_ptr<std::vector<java::lang::String>> array,int value,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::lang::String> monthPattern);
	int virtual subParse(std::shared_ptr<java::lang::String> text,int start,char ch,int count,bool obeyCount,bool allowNegative,std::shared_ptr<bool[]> ambiguousYear,std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::text::MessageFormat> numericLeapMonthFormatter,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> tzTimeType);
	int virtual subParse(std::shared_ptr<java::lang::String> text,int start,char ch,int count,bool obeyCount,bool allowNegative,std::shared_ptr<bool[]> ambiguousYear,std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::text::MessageFormat> numericLeapMonthFormatter,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> tzTimeType,std::shared_ptr<android::icu::util::Output<android::icu::impl::DayPeriodRules_S_DayPeriod>> dayPeriod);
	std::shared_ptr<java::lang::String> virtual translatePattern(std::shared_ptr<java::lang::String> pat,std::shared_ptr<java::lang::String> from,std::shared_ptr<java::lang::String> to);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual tzFormat();
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::text::UnicodeSet> DATE_PATTERN_TYPE;
	static bool DelayedHebrewMonthCheck;
	static int currentSerialVersion;
	static bool _wrap0(char formatChar,int count);
	static void static_cinit();
	SimpleDateFormat();
	SimpleDateFormat(std::shared_ptr<java::lang::String> pattern);
	SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateFormatSymbols> formatData);
	SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateFormatSymbols> formatData,std::shared_ptr<android::icu::util::Calendar> calendar,std::shared_ptr<android::icu::util::ULocale> locale,bool useFastFormat,std::shared_ptr<java::lang::String> override);
	SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateFormatSymbols> formatData,std::shared_ptr<android::icu::util::ULocale> loc);
	SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::util::ULocale> loc);
	SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<android::icu::util::ULocale> loc);
	SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Locale> loc);
	static std::shared_ptr<android::icu::text::SimpleDateFormat> getInstance(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> formatConfig);
	static bool isFieldUnitIgnored(std::shared_ptr<java::lang::String> pattern,int field);
	void virtual applyLocalizedPattern(std::shared_ptr<java::lang::String> pat);
	void virtual applyPattern(std::shared_ptr<java::lang::String> pat);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::util::Calendar> cVar0,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::text::AttributedCharacterIterator> virtual formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::util::Date> virtual get2DigitYearStart();
	std::shared_ptr<android::icu::text::DateFormatSymbols> virtual getDateFormatSymbols();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
	std::shared_ptr<android::icu::text::NumberFormat> virtual getNumberFormat(char field);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual getTimeZoneFormat();
	int virtual hashCode();
	std::shared_ptr<java::lang::StringBuffer> virtual intervalFormatByAlgorithm(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> pos);
	bool virtual isFieldUnitIgnored(int field);
	void virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::text::ParsePosition> parsePos);
	void virtual set2DigitYearStart(std::shared_ptr<java::util::Date> startDate);
	void virtual setContext(std::shared_ptr<android::icu::text::DisplayContext> context);
	void virtual setDateFormatSymbols(std::shared_ptr<android::icu::text::DateFormatSymbols> newFormatSymbols);
	void virtual setNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> newNumberFormat);
	void virtual setNumberFormat(std::shared_ptr<java::lang::String> fields,std::shared_ptr<android::icu::text::NumberFormat> overrideNF);
	void virtual setTimeZoneFormat(std::shared_ptr<android::icu::text::TimeZoneFormat> tzfmt);
	std::shared_ptr<java::lang::String> virtual toLocalizedPattern();
	std::shared_ptr<java::lang::String> virtual toPattern();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SimpleDateFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SimpleDateFormat(){
	}

}; // class SimpleDateFormat
}; // namespace android::icu::text

#endif //__android_icu_text_SimpleDateFormat__

