#ifndef __android_icu_text_DecimalFormatSymbols__
#define __android_icu_text_DecimalFormatSymbols__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.text.DecimalFormatSymbols_S_CacheData.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class DecimalFormatSymbols : public java::lang::Cloneable, public java::io::Serializable {
protected:
private:
	static char DEF_DECIMAL_SEPARATOR;
	static std::shared_ptr<char[]> DEF_DIGIT_CHARS_ARRAY;
	static std::shared_ptr<std::vector<java::lang::String>> DEF_DIGIT_STRINGS_ARRAY;
	static char DEF_GROUPING_SEPARATOR;
	static char DEF_MINUS_SIGN;
	static char DEF_PERCENT;
	static char DEF_PERMILL;
	static char DEF_PLUS_SIGN;
	static std::shared_ptr<java::lang::String> LATIN_NUMBERING_SYSTEM;
	static std::shared_ptr<java::lang::String> NUMBER_ELEMENTS;
	static std::shared_ptr<java::lang::String> SYMBOLS;
	static std::shared_ptr<std::vector<java::lang::String>> SYMBOL_DEFAULTS;
	static std::shared_ptr<std::vector<java::lang::String>> SYMBOL_KEYS;
	static std::shared_ptr<android::icu::impl::CacheBase<android::icu::util::ULocale,android::icu::text::DecimalFormatSymbols_S_CacheData,java::lang::Void>> cachedLocaleData;
	static int currentSerialVersion;
	static long long serialVersionUID;
	std::shared_ptr<java::lang::String> NaN;
	std::shared_ptr<android::icu::util::ULocale> actualLocale;
	std::shared_ptr<android::icu::util::Currency> currency;
	std::shared_ptr<java::lang::String> currencyPattern;
	std::shared_ptr<std::vector<java::lang::String>> currencySpcAfterSym;
	std::shared_ptr<std::vector<java::lang::String>> currencySpcBeforeSym;
	std::shared_ptr<java::lang::String> currencySymbol;
	char decimalSeparator;
	std::shared_ptr<java::lang::String> decimalSeparatorString;
	char digit;
	std::shared_ptr<std::vector<java::lang::String>> digitStrings;
	std::shared_ptr<char[]> digits;
	std::shared_ptr<java::lang::String> exponentMultiplicationSign;
	std::shared_ptr<java::lang::String> exponentSeparator;
	char exponential;
	char groupingSeparator;
	std::shared_ptr<java::lang::String> groupingSeparatorString;
	std::shared_ptr<java::lang::String> infinity;
	std::shared_ptr<java::lang::String> intlCurrencySymbol;
	char minusSign;
	std::shared_ptr<java::lang::String> minusString;
	char monetaryGroupingSeparator;
	std::shared_ptr<java::lang::String> monetaryGroupingSeparatorString;
	char monetarySeparator;
	std::shared_ptr<java::lang::String> monetarySeparatorString;
	char padEscape;
	char patternSeparator;
	char perMill;
	std::shared_ptr<java::lang::String> perMillString;
	char percent;
	std::shared_ptr<java::lang::String> percentString;
	char plusSign;
	std::shared_ptr<java::lang::String> plusString;
	std::shared_ptr<java::util::Locale> requestedLocale;
	int serialVersionOnStream;
	char sigDigit;
	std::shared_ptr<android::icu::util::ULocale> ulocale;
	std::shared_ptr<android::icu::util::ULocale> validLocale;
	char zeroDigit;
	void virtual initSpacingInfo(std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> spcInfo);
	void virtual initialize(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_CacheData> loadData(std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
public:
	static int CURRENCY_SPC_CURRENCY_MATCH;
	static int CURRENCY_SPC_INSERT;
	static int CURRENCY_SPC_SURROUNDING_MATCH;
	static std::shared_ptr<java::lang::String> _get0();
	static std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_CacheData> _wrap0(std::shared_ptr<android::icu::util::ULocale> locale);
	static void static_cinit();
	DecimalFormatSymbols();
	DecimalFormatSymbols(std::shared_ptr<android::icu::util::ULocale> locale);
	DecimalFormatSymbols(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<android::icu::text::DecimalFormatSymbols> getInstance();
	static std::shared_ptr<android::icu::text::DecimalFormatSymbols> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DecimalFormatSymbols> getInstance(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<android::icu::util::Currency> virtual getCurrency();
	std::shared_ptr<java::lang::String> virtual getCurrencyPattern();
	std::shared_ptr<java::lang::String> virtual getCurrencySymbol();
	char virtual getDecimalSeparator();
	std::shared_ptr<java::lang::String> virtual getDecimalSeparatorString();
	char virtual getDigit();
	std::shared_ptr<java::lang::String> virtual getDigitStrings();
	std::shared_ptr<java::lang::String> virtual getDigitStringsLocal();
	char virtual getDigits();
	std::shared_ptr<java::lang::String> virtual getExponentMultiplicationSign();
	std::shared_ptr<java::lang::String> virtual getExponentSeparator();
	char virtual getGroupingSeparator();
	std::shared_ptr<java::lang::String> virtual getGroupingSeparatorString();
	std::shared_ptr<java::lang::String> virtual getInfinity();
	std::shared_ptr<java::lang::String> virtual getInternationalCurrencySymbol();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type);
	std::shared_ptr<java::util::Locale> virtual getLocale();
	char virtual getMinusSign();
	std::shared_ptr<java::lang::String> virtual getMinusSignString();
	char virtual getMonetaryDecimalSeparator();
	std::shared_ptr<java::lang::String> virtual getMonetaryDecimalSeparatorString();
	char virtual getMonetaryGroupingSeparator();
	std::shared_ptr<java::lang::String> virtual getMonetaryGroupingSeparatorString();
	std::shared_ptr<java::lang::String> virtual getNaN();
	char virtual getPadEscape();
	std::shared_ptr<java::lang::String> virtual getPatternForCurrencySpacing(int itemType,bool beforeCurrency);
	char virtual getPatternSeparator();
	char virtual getPerMill();
	std::shared_ptr<java::lang::String> virtual getPerMillString();
	char virtual getPercent();
	std::shared_ptr<java::lang::String> virtual getPercentString();
	char virtual getPlusSign();
	std::shared_ptr<java::lang::String> virtual getPlusSignString();
	char virtual getSignificantDigit();
	std::shared_ptr<android::icu::util::ULocale> virtual getULocale();
	char virtual getZeroDigit();
	int virtual hashCode();
	void virtual setCurrency(std::shared_ptr<android::icu::util::Currency> currency);
	void virtual setCurrencySymbol(std::shared_ptr<java::lang::String> currency);
	void virtual setDecimalSeparator(char decimalSeparator);
	void virtual setDecimalSeparatorString(std::shared_ptr<java::lang::String> decimalSeparatorString);
	void virtual setDigit(char digit);
	void virtual setDigitStrings(std::shared_ptr<std::vector<java::lang::String>> digitStrings);
	void virtual setExponentMultiplicationSign(std::shared_ptr<java::lang::String> exponentMultiplicationSign);
	void virtual setExponentSeparator(std::shared_ptr<java::lang::String> exp);
	void virtual setGroupingSeparator(char groupingSeparator);
	void virtual setGroupingSeparatorString(std::shared_ptr<java::lang::String> groupingSeparatorString);
	void virtual setInfinity(std::shared_ptr<java::lang::String> infinity);
	void virtual setInternationalCurrencySymbol(std::shared_ptr<java::lang::String> currency);
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual);
	void virtual setMinusSign(char minusSign);
	void virtual setMinusSignString(std::shared_ptr<java::lang::String> minusSignString);
	void virtual setMonetaryDecimalSeparator(char sep);
	void virtual setMonetaryDecimalSeparatorString(std::shared_ptr<java::lang::String> sep);
	void virtual setMonetaryGroupingSeparator(char sep);
	void virtual setMonetaryGroupingSeparatorString(std::shared_ptr<java::lang::String> sep);
	void virtual setNaN(std::shared_ptr<java::lang::String> NaN);
	void virtual setPadEscape(char c);
	void virtual setPatternForCurrencySpacing(int itemType,bool beforeCurrency,std::shared_ptr<java::lang::String> pattern);
	void virtual setPatternSeparator(char patternSeparator);
	void virtual setPerMill(char perMill);
	void virtual setPerMillString(std::shared_ptr<java::lang::String> perMillString);
	void virtual setPercent(char percent);
	void virtual setPercentString(std::shared_ptr<java::lang::String> percentString);
	void virtual setPlusSign(char plus);
	void virtual setPlusSignString(std::shared_ptr<java::lang::String> plusSignString);
	void virtual setSignificantDigit(char sigDigit);
	void virtual setZeroDigit(char zeroDigit);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DecimalFormatSymbols::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DecimalFormatSymbols(){
	}

}; // class DecimalFormatSymbols
}; // namespace android::icu::text

#endif //__android_icu_text_DecimalFormatSymbols__

