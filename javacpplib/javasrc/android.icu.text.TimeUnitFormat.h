#ifndef __android_icu_text_TimeUnitFormat__
#define __android_icu_text_TimeUnitFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeUnitFormat.smali
#include "java2ctype.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.TimeUnit.h"
#include "android.icu.util.TimeUnitAmount.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::text{
class TimeUnitFormat : public android::icu::text::MeasureFormat {
protected:
private:
	static std::shared_ptr<java::lang::String> DEFAULT_PATTERN_FOR_DAY;
	static std::shared_ptr<java::lang::String> DEFAULT_PATTERN_FOR_HOUR;
	static std::shared_ptr<java::lang::String> DEFAULT_PATTERN_FOR_MINUTE;
	static std::shared_ptr<java::lang::String> DEFAULT_PATTERN_FOR_MONTH;
	static std::shared_ptr<java::lang::String> DEFAULT_PATTERN_FOR_SECOND;
	static std::shared_ptr<java::lang::String> DEFAULT_PATTERN_FOR_WEEK;
	static std::shared_ptr<java::lang::String> DEFAULT_PATTERN_FOR_YEAR;
	static int TOTAL_STYLES;
	static long long serialVersionUID;
	std::shared_ptr<android::icu::text::NumberFormat> format;
	bool isReady;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::text::MeasureFormat> mf;
	std::shared_ptr<android::icu::text::PluralRules> pluralRules;
	int style;
	std::shared_ptr<java::util::Map<android::icu::util::TimeUnit,java::util::Map<java::lang::String,std::vector<java::lang::Object>>>> timeUnitToCountToPatterns;
	TimeUnitFormat(std::shared_ptr<android::icu::util::ULocale> locale,int style,std::shared_ptr<android::icu::text::NumberFormat> numberFormat);
	std::shared_ptr<java::lang::Object> virtual readResolve();
	void virtual searchInTree(std::shared_ptr<java::lang::String> resourceKey,int styl,std::shared_ptr<android::icu::util::TimeUnit> timeUnit,std::shared_ptr<java::lang::String> srcPluralCount,std::shared_ptr<java::lang::String> searchPluralCount,std::shared_ptr<java::util::Map<java::lang::String,std::vector<java::lang::Object>>> countToPatterns);
	void virtual setup();
	void virtual setup(std::shared_ptr<java::lang::String> resourceKey,std::shared_ptr<java::util::Map<android::icu::util::TimeUnit,java::util::Map<java::lang::String,std::vector<java::lang::Object>>>> timeUnitToCountToPatterns,int style,std::shared_ptr<java::util::Set<java::lang::String>> pluralKeywords);
	std::shared_ptr<java::lang::Object> virtual writeReplace();
public:
	static int ABBREVIATED_NAME;
	static int FULL_NAME;
	TimeUnitFormat();
	TimeUnitFormat(std::shared_ptr<android::icu::util::ULocale> locale);
	TimeUnitFormat(std::shared_ptr<android::icu::util::ULocale> locale,int style);
	TimeUnitFormat(std::shared_ptr<java::util::Locale> locale);
	TimeUnitFormat(std::shared_ptr<java::util::Locale> locale,int style);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuilder> virtual formatMeasures(std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition,std::shared_ptr<std::vector<android::icu::util::Measure>> measures);
	std::shared_ptr<android::icu::text::NumberFormat> virtual getNumberFormat();
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> virtual getWidth();
	std::shared_ptr<android::icu::util::TimeUnitAmount> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<android::icu::text::TimeUnitFormat> virtual setLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::TimeUnitFormat> virtual setLocale(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<android::icu::text::TimeUnitFormat> virtual setNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> format);
public:
	virtual ~TimeUnitFormat(){
	}

}; // class TimeUnitFormat
}; // namespace android::icu::text

#endif //__android_icu_text_TimeUnitFormat__

