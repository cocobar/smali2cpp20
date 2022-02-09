#ifndef __android_icu_text_MeasureFormat__
#define __android_icu_text_MeasureFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.ListFormatter.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat_S_ImmutableNumberFormat.h"
#include "android.icu.text.MeasureFormat_S_MeasureFormatData.h"
#include "android.icu.text.MeasureFormat_S_NumericFormatters.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.MeasureUnit.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Integer.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace android::icu::text{
class MeasureFormat : public android::icu::text::UFormat {
protected:
private:
	static int CURRENCY_FORMAT;
	static int MEASURE_FORMAT;
	static int TIME_UNIT_FORMAT;
	static std::shared_ptr<java::util::Map<android::icu::util::MeasureUnit,java::lang::Integer>> hmsTo012;
	static std::shared_ptr<java::util::Map<android::icu::util::ULocale,java::lang::String>> localeIdToRangeFormat;
	static std::shared_ptr<android::icu::impl::SimpleCache<android::icu::util::ULocale,android::icu::text::MeasureFormat_S_MeasureFormatData>> localeMeasureFormatData;
	static std::shared_ptr<android::icu::impl::SimpleCache<android::icu::util::ULocale,android::icu::text::MeasureFormat_S_NumericFormatters>> localeToNumericDurationFormatters;
	std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> cache;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> currencyFormat;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> integerFormat;
	std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> numberFormat;
	std::shared_ptr<android::icu::text::MeasureFormat_S_NumericFormatters> numericFormatters;
	std::shared_ptr<android::icu::text::PluralRules> rules;
	MeasureFormat(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> data,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> format,std::shared_ptr<android::icu::text::PluralRules> rules,std::shared_ptr<android::icu::text::MeasureFormat_S_NumericFormatters> formatters,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> currencyFormat,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> integerFormat);
	void virtual appendReplacingCurrency(std::shared_ptr<java::lang::String> affix,std::shared_ptr<android::icu::util::Currency> unit,std::shared_ptr<android::icu::impl::StandardPlural> resolvedPlural,std::shared_ptr<java::lang::StringBuilder> result);
	std::shared_ptr<java::lang::String> virtual formatMeasure(std::shared_ptr<android::icu::util::Measure> measure,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> nf);
	std::shared_ptr<java::lang::StringBuilder> virtual formatMeasure(std::shared_ptr<android::icu::util::Measure> measure,std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> nf,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<java::lang::StringBuilder> virtual formatMeasuresSlowTrack(std::shared_ptr<android::icu::text::ListFormatter> listFormatter,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition,std::shared_ptr<std::vector<android::icu::util::Measure>> measures);
	std::shared_ptr<java::lang::StringBuilder> virtual formatNumeric(std::shared_ptr<java::util::Date> duration,std::shared_ptr<android::icu::text::DateFormat> formatter,std::shared_ptr<android::icu::text::DateFormat_S_Field> smallestField,std::shared_ptr<java::lang::Number> smallestAmount,std::shared_ptr<java::lang::StringBuilder> appendTo);
	std::shared_ptr<java::lang::StringBuilder> virtual formatNumeric(std::shared_ptr<std::vector<java::lang::Number>> hms,std::shared_ptr<java::lang::StringBuilder> appendable);
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> fromFormatWidthOrdinal(int ordinal);
	std::shared_ptr<java::lang::String> virtual getFormatter(std::shared_ptr<android::icu::util::MeasureUnit> unit,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width,int index);
	std::shared_ptr<java::lang::String> virtual getFormatterOrNull(std::shared_ptr<android::icu::util::MeasureUnit> unit,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width,int index);
	std::shared_ptr<java::lang::String> virtual getPerFormatter(std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width);
	std::shared_ptr<java::lang::String> virtual getPluralFormatter(std::shared_ptr<android::icu::util::MeasureUnit> unit,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width,int index);
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> getRegularWidth(std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width);
	static std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> loadLocaleData(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateFormat> loadNumericDurationFormat(std::shared_ptr<android::icu::impl::ICUResourceBundle> r,std::shared_ptr<java::lang::String> type);
	static std::shared_ptr<android::icu::text::MeasureFormat_S_NumericFormatters> loadNumericFormatters(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<java::lang::Number> toHMS(std::shared_ptr<std::vector<android::icu::util::Measure>> measures);
	int virtual withPerUnitAndAppend(std::shared_ptr<java::lang::CharSequence> formatted,std::shared_ptr<android::icu::util::MeasureUnit> perUnit,std::shared_ptr<java::lang::StringBuilder> appendTo);
	std::shared_ptr<java::lang::Object> virtual writeReplace();
public:
	static long long serialVersionUID;
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> _wrap0(int ordinal);
	static void static_cinit();
	MeasureFormat();
	static std::shared_ptr<android::icu::text::MeasureFormat> getCurrencyFormat();
	static std::shared_ptr<android::icu::text::MeasureFormat> getCurrencyFormat(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::MeasureFormat> getCurrencyFormat(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::MeasureFormat> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth);
	static std::shared_ptr<android::icu::text::MeasureFormat> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth,std::shared_ptr<android::icu::text::NumberFormat> format);
	static std::shared_ptr<android::icu::text::MeasureFormat> getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth);
	static std::shared_ptr<android::icu::text::MeasureFormat> getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> formatWidth,std::shared_ptr<android::icu::text::NumberFormat> format);
	static std::shared_ptr<java::lang::String> getRangeFormat(std::shared_ptr<android::icu::util::ULocale> forLocale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuilder> virtual formatMeasurePerUnit(std::shared_ptr<android::icu::util::Measure> measure,std::shared_ptr<android::icu::util::MeasureUnit> perUnit,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::String> virtual formatMeasureRange(std::shared_ptr<android::icu::util::Measure> lowValue,std::shared_ptr<android::icu::util::Measure> highValue);
	std::shared_ptr<java::lang::String> virtual formatMeasures(std::shared_ptr<std::vector<android::icu::util::Measure>> measures);
	std::shared_ptr<java::lang::StringBuilder> virtual formatMeasures(std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition,std::shared_ptr<std::vector<android::icu::util::Measure>> measures);
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
	std::shared_ptr<android::icu::text::NumberFormat> virtual getNumberFormat();
	std::shared_ptr<java::lang::String> virtual getUnitDisplayName(std::shared_ptr<android::icu::util::MeasureUnit> unit);
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> virtual getWidth();
	int virtual hashCode();
	std::shared_ptr<android::icu::util::Measure> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<java::lang::Object> virtual toCurrencyProxy();
	std::shared_ptr<java::lang::Object> virtual toTimeUnitProxy();
	std::shared_ptr<android::icu::text::MeasureFormat> virtual withLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::MeasureFormat> virtual withNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> format);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MeasureFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MeasureFormat(){
	}

}; // class MeasureFormat
}; // namespace android::icu::text

#endif //__android_icu_text_MeasureFormat__

