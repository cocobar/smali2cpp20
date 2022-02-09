#ifndef __android_icu_text_CompactDecimalFormat__
#define __android_icu_text_CompactDecimalFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalFormat.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.text.CompactDecimalDataCache_S_Data.h"
#include "android.icu.text.CompactDecimalDataCache.h"
#include "android.icu.text.CompactDecimalFormat_S_Amount.h"
#include "android.icu.text.CompactDecimalFormat_S_CompactStyle.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Collection.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::text{
class CompactDecimalFormat : public android::icu::text::DecimalFormat {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_CompactDecimalFormat_S_CompactStyleSwitchesValues;
	static std::shared_ptr<java::util::regex::Pattern> UNESCAPE_QUOTE;
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache> cache;
	static long long serialVersionUID;
	std::shared_ptr<long long[]> currencyDivisor;
	std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> currencyUnits;
	std::shared_ptr<long long[]> divisor;
	std::shared_ptr<android::icu::text::PluralRules> pluralRules;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DecimalFormat_S_Unit>> pluralToCurrencyAffixes;
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style;
	std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units;
	static int _getandroid_icu_text_CompactDecimalFormat_S_CompactStyleSwitchesValues();
	static std::shared_ptr<java::lang::String> escape(std::shared_ptr<java::lang::String> string);
	void virtual finishInit(std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style,std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> formatSymbols);
	std::shared_ptr<java::lang::StringBuffer> virtual format(double number,std::shared_ptr<android::icu::util::Currency> curr,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> virtual getCurrencyData(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> virtual getData(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style);
	std::shared_ptr<java::lang::String> virtual getPluralForm(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> fixedDecimal);
	bool virtual mapsAreEqual(std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> lhs,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> rhs);
	std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> virtual otherPluralVariant(std::shared_ptr<java::util::Map<java::lang::String,std::vector<std::vector<java::lang::String>>>> pluralCategoryToPower10ToAffix,std::shared_ptr<long long[]> divisor,std::shared_ptr<java::util::Collection<java::lang::String>> debugCreationErrors);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual recordError(std::shared_ptr<java::util::Collection<java::lang::String>> creationErrors,std::shared_ptr<java::lang::String> errorMessage);
	std::shared_ptr<android::icu::text::CompactDecimalFormat_S_Amount> virtual toAmount(double number,std::shared_ptr<android::icu::util::Currency> curr,std::shared_ptr<android::icu::util::Output<android::icu::text::DecimalFormat_S_Unit>> currencyUnit);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> out);
public:
	static void static_cinit();
	CompactDecimalFormat(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style);
	CompactDecimalFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DecimalFormatSymbols> formatSymbols,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style,std::shared_ptr<android::icu::text::PluralRules> pluralRules,std::shared_ptr<long long[]> divisor,std::shared_ptr<java::util::Map<java::lang::String,std::vector<std::vector<java::lang::String>>>> pluralAffixes,std::shared_ptr<java::util::Map<java::lang::String,std::vector<java::lang::String>>> currencyAffixes,std::shared_ptr<java::util::Collection<java::lang::String>> debugCreationErrors);
	static std::shared_ptr<android::icu::text::CompactDecimalFormat> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style);
	static std::shared_ptr<android::icu::text::CompactDecimalFormat> getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> style);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::StringBuffer> virtual format(double number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(long long number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::util::CurrencyAmount> currAmt,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigInteger> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::text::AttributedCharacterIterator> virtual formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::Number> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CompactDecimalFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CompactDecimalFormat(){
	}

}; // class CompactDecimalFormat
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalFormat__

