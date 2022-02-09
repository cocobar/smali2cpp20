#ifndef __android_icu_util_Currency__
#define __android_icu_util_Currency__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Currency.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyFilter.h"
#include "android.icu.util.Currency_S_CurrencyStringInfo.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "android.icu.util.Currency_S_EquivalenceRelation.h"
#include "android.icu.util.Currency_S_ServiceShim.h"
#include "android.icu.util.MeasureUnit.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"
#include "java.lang.ref.SoftReference.h"
#include "java.text.ParsePosition.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::util{
class Currency : public android::icu::util::MeasureUnit {
protected:
	Currency(std::shared_ptr<java::lang::String> theISOCode);
private:
	static std::shared_ptr<java::lang::ref::SoftReference<java::util::Set<java::lang::String>>> ALL_CODES_AS_SET;
	static std::shared_ptr<java::lang::ref::SoftReference<java::util::List<java::lang::String>>> ALL_TENDER_CODES;
	static std::shared_ptr<android::icu::impl::ICUCache<android::icu::util::ULocale,java::util::List<android::icu::impl::TextTrieMap<android::icu::util::Currency_S_CurrencyStringInfo>>>> CURRENCY_NAME_CACHE;
	static bool DEBUG;
	static std::shared_ptr<std::vector<java::lang::String>> EMPTY_STRING_ARRAY;
	static std::shared_ptr<android::icu::util::Currency_S_EquivalenceRelation<java::lang::String>> EQUIVALENT_CURRENCY_SYMBOLS;
	static std::shared_ptr<java::lang::String> EUR_STR;
	static std::shared_ptr<int[]> POW10;
	static std::shared_ptr<android::icu::util::ULocale> UND;
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::util::Currency,java::lang::Void>> regionCurrencyCache;
	static long long serialVersionUID;
	static std::shared_ptr<android::icu::util::Currency_S_ServiceShim> shim;
	std::shared_ptr<java::lang::String> isoCode;
	static std::shared_ptr<java::util::Set<java::lang::String>> getAllCurrenciesAsSet();
	static std::shared_ptr<java::util::List<java::lang::String>> getAllTenderCurrencies();
	static std::shared_ptr<android::icu::util::Currency_S_ServiceShim> getShim();
	static std::shared_ptr<java::util::List<java::lang::String>> getTenderCurrencies(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter);
	static bool isAlpha3Code(std::shared_ptr<java::lang::String> code);
	static std::shared_ptr<android::icu::util::Currency> loadCurrency(std::shared_ptr<java::lang::String> key);
	std::shared_ptr<java::lang::Object> virtual readResolve();
	static void setupCurrencyTrieVec(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::util::List<android::icu::impl::TextTrieMap<android::icu::util::Currency_S_CurrencyStringInfo>>> trieVec);
	std::shared_ptr<java::lang::Object> virtual writeReplace();
public:
	static int LONG_NAME;
	static int PLURAL_LONG_NAME;
	static int SYMBOL_NAME;
	static std::shared_ptr<android::icu::util::Currency> _wrap0(std::shared_ptr<java::lang::String> key);
	static void static_cinit();
	static std::shared_ptr<android::icu::util::Currency> createCurrency(std::shared_ptr<android::icu::util::ULocale> loc);
	static std::shared_ptr<java::util::Set<android::icu::util::Currency>> getAvailableCurrencies();
	static std::shared_ptr<java::lang::String> getAvailableCurrencyCodes(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::util::Date> d);
	static std::shared_ptr<java::lang::String> getAvailableCurrencyCodes(std::shared_ptr<java::util::Locale> loc,std::shared_ptr<java::util::Date> d);
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<android::icu::util::Currency> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::util::Currency> getInstance(std::shared_ptr<java::lang::String> theISOCode);
	static std::shared_ptr<android::icu::util::Currency> getInstance(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::lang::String> getKeywordValuesForLocale(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale,bool commonlyUsed);
	static bool isAvailable(std::shared_ptr<java::lang::String> code,std::shared_ptr<java::util::Date> from,std::shared_ptr<java::util::Date> to);
	static std::shared_ptr<java::lang::String> parse(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> text,int type,std::shared_ptr<java::text::ParsePosition> pos);
	static std::shared_ptr<java::lang::Object> registerInstance(std::shared_ptr<android::icu::util::Currency> currency,std::shared_ptr<android::icu::util::ULocale> locale);
	static bool unregister(std::shared_ptr<java::lang::Object> registryKey);
	std::shared_ptr<java::lang::String> virtual getCurrencyCode();
	int virtual getDefaultFractionDigits();
	int virtual getDefaultFractionDigits(std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> Usage);
	std::shared_ptr<java::lang::String> virtual getDisplayName();
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<android::icu::util::ULocale> locale,int nameStyle,std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<bool[]> isChoiceFormat);
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<android::icu::util::ULocale> locale,int nameStyle,std::shared_ptr<bool[]> isChoiceFormat);
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<java::util::Locale> locale,int nameStyle,std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<bool[]> isChoiceFormat);
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<java::util::Locale> locale,int nameStyle,std::shared_ptr<bool[]> isChoiceFormat);
	int virtual getNumericCode();
	double virtual getRoundingIncrement();
	double virtual getRoundingIncrement(std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> Usage);
	std::shared_ptr<java::lang::String> virtual getSymbol();
	std::shared_ptr<java::lang::String> virtual getSymbol(std::shared_ptr<android::icu::util::ULocale> uloc);
	std::shared_ptr<java::lang::String> virtual getSymbol(std::shared_ptr<java::util::Locale> loc);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::Currency::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Currency(){
	}

}; // class Currency
}; // namespace android::icu::util

#endif //__android_icu_util_Currency__

