#ifndef __android_icu_text_CurrencyPluralInfo__
#define __android_icu_text_CurrencyPluralInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyPluralInfo.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.ULocale.h"
#include "java.io.Serializable.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace android::icu::text{
class CurrencyPluralInfo : public java::lang::Cloneable, public java::io::Serializable {
protected:
private:
	static std::shared_ptr<java::lang::String> defaultCurrencyPluralPattern;
	static std::shared_ptr<char[]> defaultCurrencyPluralPatternChar;
	static long long serialVersionUID;
	static std::shared_ptr<char[]> tripleCurrencySign;
	static std::shared_ptr<java::lang::String> tripleCurrencyStr;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> pluralCountToCurrencyUnitPattern;
	std::shared_ptr<android::icu::text::PluralRules> pluralRules;
	std::shared_ptr<android::icu::util::ULocale> ulocale;
	void virtual initialize(std::shared_ptr<android::icu::util::ULocale> uloc);
	void virtual setupCurrencyPluralPattern(std::shared_ptr<android::icu::util::ULocale> uloc);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CurrencyPluralInfo();
	CurrencyPluralInfo(std::shared_ptr<android::icu::util::ULocale> locale);
	CurrencyPluralInfo(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::CurrencyPluralInfo> getInstance();
	static std::shared_ptr<android::icu::text::CurrencyPluralInfo> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::CurrencyPluralInfo> getInstance(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> a);
	std::shared_ptr<java::lang::String> virtual getCurrencyPluralPattern(std::shared_ptr<java::lang::String> pluralCount);
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
	std::shared_ptr<android::icu::text::PluralRules> virtual getPluralRules();
	int virtual hashCode();
	std::shared_ptr<java::util::Iterator<java::lang::String>> virtual pluralPatternIterator();
	std::shared_ptr<java::lang::String> virtual select(double number);
	std::shared_ptr<java::lang::String> virtual select(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> numberInfo);
	void virtual setCurrencyPluralPattern(std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<java::lang::String> pattern);
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> loc);
	void virtual setPluralRules(std::shared_ptr<java::lang::String> ruleDescription);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CurrencyPluralInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyPluralInfo(){
	}

}; // class CurrencyPluralInfo
}; // namespace android::icu::text

#endif //__android_icu_text_CurrencyPluralInfo__

