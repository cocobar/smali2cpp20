#ifndef __android_icu_text_CompactDecimalDataCache__
#define __android_icu_text_CompactDecimalDataCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.text.CompactDecimalDataCache_S_Data.h"
#include "android.icu.text.CompactDecimalDataCache_S_DataBundle.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::text{
class CompactDecimalDataCache : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> CURRENCY_FORMAT;
	static std::shared_ptr<java::lang::String> DECIMAL_FORMAT;
	static std::shared_ptr<java::lang::String> LATIN_NUMBERING_SYSTEM;
	static std::shared_ptr<java::lang::String> LONG_STYLE;
	static std::shared_ptr<java::lang::String> NUMBER_ELEMENTS;
	static std::shared_ptr<java::lang::String> PATTERNS_LONG;
	static std::shared_ptr<java::lang::String> PATTERNS_SHORT;
	static std::shared_ptr<java::lang::String> SHORT_CURRENCY_STYLE;
	static std::shared_ptr<java::lang::String> SHORT_STYLE;
	std::shared_ptr<android::icu::impl::ICUCache<android::icu::util::ULocale,android::icu::text::CompactDecimalDataCache_S_DataBundle>> cache;
	static long long calculateDivisor(long long power10,int numZeros);
	static void checkForOtherVariants(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> data,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style);
	static void copyFromPreviousIndex(int idx,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units);
	static void fillInMissing(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> result);
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> load(std::shared_ptr<android::icu::util::ULocale> ulocale);
	static std::shared_ptr<java::lang::String> localeAndStyle(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style);
	static int populatePrefixSuffix(std::shared_ptr<java::lang::String> pluralVariant,int idx,std::shared_ptr<java::lang::String> template,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style,std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> destination,bool overwrite);
	static void propagateOtherToMissing(int idx,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units);
	static bool saveUnit(std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> unit,std::shared_ptr<java::lang::String> pluralVariant,int idx,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units,bool overwrite);
public:
	static int MAX_DIGITS;
	static std::shared_ptr<java::lang::String> OTHER;
	static int _wrap0(std::shared_ptr<java::lang::String> pluralVariant,int idx,std::shared_ptr<java::lang::String> template,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style,std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> destination,bool overwrite);
	static std::shared_ptr<java::lang::String> _wrap1(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style);
	static long long _wrap2(long long power10,int numZeros);
	CompactDecimalDataCache();
	static std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> getUnit(std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units,std::shared_ptr<java::lang::String> variant,int base);
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> virtual get(std::shared_ptr<android::icu::util::ULocale> locale);
public:
	virtual ~CompactDecimalDataCache(){
	}

}; // class CompactDecimalDataCache
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalDataCache__

