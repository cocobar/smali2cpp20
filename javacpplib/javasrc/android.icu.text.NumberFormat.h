#ifndef __android_icu_text_NumberFormat__
#define __android_icu_text_NumberFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "android.icu.text.NumberFormat_S_NumberFormatShim.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class NumberFormat : public android::icu::text::UFormat {
protected:
	static std::shared_ptr<java::lang::String> getPattern(std::shared_ptr<android::icu::util::ULocale> forLocale,int choice);
	static std::shared_ptr<java::lang::String> getPattern(std::shared_ptr<java::util::Locale> forLocale,int choice);
	std::shared_ptr<android::icu::util::Currency> virtual getEffectiveCurrency();
private:
	static std::shared_ptr<char[]> doubleCurrencySign;
	static std::shared_ptr<java::lang::String> doubleCurrencyStr;
	static long long serialVersionUID;
	static std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatShim> shim;
	std::shared_ptr<android::icu::text::DisplayContext> capitalizationSetting;
	std::shared_ptr<android::icu::util::Currency> currency;
	bool groupingUsed;
	unsigned char maxFractionDigits;
	unsigned char maxIntegerDigits;
	int maximumFractionDigits;
	int maximumIntegerDigits;
	unsigned char minFractionDigits;
	unsigned char minIntegerDigits;
	int minimumFractionDigits;
	int minimumIntegerDigits;
	bool parseIntegerOnly;
	bool parseStrict;
	int serialVersionOnStream;
	static std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatShim> getShim();
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream);
public:
	static bool _assertionsDisabled;
	static int ACCOUNTINGCURRENCYSTYLE;
	static int CASHCURRENCYSTYLE;
	static int CURRENCYSTYLE;
	static int FRACTION_FIELD;
	static int INTEGERSTYLE;
	static int INTEGER_FIELD;
	static int ISOCURRENCYSTYLE;
	static int NUMBERSTYLE;
	static int PERCENTSTYLE;
	static int PLURALCURRENCYSTYLE;
	static int SCIENTIFICSTYLE;
	static int STANDARDCURRENCYSTYLE;
	static int currentSerialVersion;
	static void static_cinit();
	NumberFormat();
	static std::shared_ptr<android::icu::text::NumberFormat> createInstance(std::shared_ptr<android::icu::util::ULocale> desiredLocale,int choice);
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<android::icu::text::NumberFormat> getCurrencyInstance();
	static std::shared_ptr<android::icu::text::NumberFormat> getCurrencyInstance(std::shared_ptr<android::icu::util::ULocale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getCurrencyInstance(std::shared_ptr<java::util::Locale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getInstance();
	static std::shared_ptr<android::icu::text::NumberFormat> getInstance(int style);
	static std::shared_ptr<android::icu::text::NumberFormat> getInstance(std::shared_ptr<android::icu::util::ULocale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getInstance(std::shared_ptr<android::icu::util::ULocale> desiredLocale,int choice);
	static std::shared_ptr<android::icu::text::NumberFormat> getInstance(std::shared_ptr<java::util::Locale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getInstance(std::shared_ptr<java::util::Locale> inLocale,int style);
	static std::shared_ptr<android::icu::text::NumberFormat> getIntegerInstance();
	static std::shared_ptr<android::icu::text::NumberFormat> getIntegerInstance(std::shared_ptr<android::icu::util::ULocale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getIntegerInstance(std::shared_ptr<java::util::Locale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getNumberInstance();
	static std::shared_ptr<android::icu::text::NumberFormat> getNumberInstance(std::shared_ptr<android::icu::util::ULocale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getNumberInstance(std::shared_ptr<java::util::Locale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getPercentInstance();
	static std::shared_ptr<android::icu::text::NumberFormat> getPercentInstance(std::shared_ptr<android::icu::util::ULocale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getPercentInstance(std::shared_ptr<java::util::Locale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getScientificInstance();
	static std::shared_ptr<android::icu::text::NumberFormat> getScientificInstance(std::shared_ptr<android::icu::util::ULocale> inLocale);
	static std::shared_ptr<android::icu::text::NumberFormat> getScientificInstance(std::shared_ptr<java::util::Locale> inLocale);
	static std::shared_ptr<java::lang::Object> registerFactory(std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatFactory> factory);
	static bool unregister(std::shared_ptr<java::lang::Object> registryKey);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual format(double number);
	std::shared_ptr<java::lang::String> virtual format(long long number);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<android::icu::math::BigDecimal> number);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<android::icu::util::CurrencyAmount> currAmt);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::math::BigDecimal> number);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::math::BigInteger> number);
	std::shared_ptr<java::lang::StringBuffer> format(double var0,std::shared_ptr<java::lang::StringBuffer> var1,std::shared_ptr<java::text::FieldPosition> var2) = 0;
	std::shared_ptr<java::lang::StringBuffer> format(long long var0,std::shared_ptr<java::lang::StringBuffer> var1,std::shared_ptr<java::text::FieldPosition> var2) = 0;
	std::shared_ptr<java::lang::StringBuffer> format(std::shared_ptr<android::icu::math::BigDecimal> var0,std::shared_ptr<java::lang::StringBuffer> var1,std::shared_ptr<java::text::FieldPosition> var2) = 0;
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::util::CurrencyAmount> currAmt,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> format(std::shared_ptr<java::math::BigDecimal> var0,std::shared_ptr<java::lang::StringBuffer> var1,std::shared_ptr<java::text::FieldPosition> var2) = 0;
	std::shared_ptr<java::lang::StringBuffer> format(std::shared_ptr<java::math::BigInteger> var0,std::shared_ptr<java::lang::StringBuffer> var1,std::shared_ptr<java::text::FieldPosition> var2) = 0;
	std::shared_ptr<android::icu::text::DisplayContext> virtual getContext(std::shared_ptr<android::icu::text::DisplayContext_S_Type> type);
	std::shared_ptr<android::icu::util::Currency> virtual getCurrency();
	int virtual getMaximumFractionDigits();
	int virtual getMaximumIntegerDigits();
	int virtual getMinimumFractionDigits();
	int virtual getMinimumIntegerDigits();
	int virtual getRoundingMode();
	int virtual hashCode();
	bool virtual isGroupingUsed();
	bool virtual isParseIntegerOnly();
	bool virtual isParseStrict();
	std::shared_ptr<java::lang::Number> virtual parse(std::shared_ptr<java::lang::String> text);
	std::shared_ptr<java::lang::Number> parse(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::text::ParsePosition> var1) = 0;
	std::shared_ptr<android::icu::util::CurrencyAmount> virtual parseCurrency(std::shared_ptr<java::lang::CharSequence> text,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<java::lang::Object> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> parsePosition);
	void virtual setContext(std::shared_ptr<android::icu::text::DisplayContext> context);
	void virtual setCurrency(std::shared_ptr<android::icu::util::Currency> theCurrency);
	void virtual setGroupingUsed(bool newValue);
	void virtual setMaximumFractionDigits(int newValue);
	void virtual setMaximumIntegerDigits(int newValue);
	void virtual setMinimumFractionDigits(int newValue);
	void virtual setMinimumIntegerDigits(int newValue);
	void virtual setParseIntegerOnly(bool value);
	void virtual setParseStrict(bool value);
	void virtual setRoundingMode(int roundingMode);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::NumberFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NumberFormat(){
	}

}; // class NumberFormat
}; // namespace android::icu::text

#endif //__android_icu_text_NumberFormat__

