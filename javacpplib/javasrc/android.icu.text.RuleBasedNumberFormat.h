#ifndef __android_icu_text_RuleBasedNumberFormat__
#define __android_icu_text_RuleBasedNumberFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedNumberFormat.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralFormat.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.RBNFPostProcessor.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.text.RbnfLenientScannerProvider.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace android::icu::text{
class RuleBasedNumberFormat : public android::icu::text::NumberFormat {
protected:
private:
	static bool DEBUG;
	static std::shared_ptr<android::icu::math::BigDecimal> MAX_VALUE;
	static std::shared_ptr<android::icu::math::BigDecimal> MIN_VALUE;
	static std::shared_ptr<std::vector<java::lang::String>> locnames;
	static std::shared_ptr<std::vector<java::lang::String>> rulenames;
	std::shared_ptr<android::icu::text::BreakIterator> capitalizationBrkIter;
	bool capitalizationForListOrMenu;
	bool capitalizationForStandAlone;
	bool capitalizationInfoIsSet;
	std::shared_ptr<android::icu::text::DecimalFormat> decimalFormat;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> decimalFormatSymbols;
	std::shared_ptr<android::icu::text::NFRule> defaultInfinityRule;
	std::shared_ptr<android::icu::text::NFRule> defaultNaNRule;
	std::shared_ptr<android::icu::text::NFRuleSet> defaultRuleSet;
	bool lenientParse;
	std::shared_ptr<java::lang::String> lenientParseRules;
	std::shared_ptr<android::icu::util::ULocale> locale;
	bool lookedForScanner;
	std::shared_ptr<java::lang::String> postProcessRules;
	std::shared_ptr<android::icu::text::RBNFPostProcessor> postProcessor;
	std::shared_ptr<std::vector<java::lang::String>> publicRuleSetNames;
	int roundingMode;
	std::shared_ptr<java::util::Map<java::lang::String,std::vector<java::lang::String>>> ruleSetDisplayNames;
	std::shared_ptr<std::vector<android::icu::text::NFRuleSet>> ruleSets;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::NFRuleSet>> ruleSetsMap;
	std::shared_ptr<android::icu::text::RbnfLenientScannerProvider> scannerProvider;
	std::shared_ptr<java::lang::String> virtual adjustForContext(std::shared_ptr<java::lang::String> result);
	std::shared_ptr<java::lang::String> virtual extractSpecial(std::shared_ptr<java::lang::StringBuilder> description,std::shared_ptr<java::lang::String> specialName);
	std::shared_ptr<java::lang::String> virtual format(double cVar2,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet);
	std::shared_ptr<java::lang::String> virtual format(long long number,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet);
	std::shared_ptr<java::lang::String> virtual getNameListForLocale(std::shared_ptr<android::icu::util::ULocale> loc);
	void virtual init(std::shared_ptr<java::lang::String> description,std::shared_ptr<std::vector<std::vector<java::lang::String>>> localizations);
	void virtual initCapitalizationContextInfo(std::shared_ptr<android::icu::util::ULocale> theLocale);
	void virtual initLocalizations(std::shared_ptr<std::vector<std::vector<java::lang::String>>> localizations);
	void virtual postProcess(std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	std::shared_ptr<java::lang::StringBuilder> virtual stripWhitespace(std::shared_ptr<java::lang::String> description);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> out);
public:
	static int DURATION;
	static int NUMBERING_SYSTEM;
	static int ORDINAL;
	static int SPELLOUT;
	static long long serialVersionUID;
	static void static_cinit();
	RuleBasedNumberFormat(int format);
	RuleBasedNumberFormat(std::shared_ptr<android::icu::util::ULocale> locale,int format);
	RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description);
	RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description,std::shared_ptr<android::icu::util::ULocale> locale);
	RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description,std::shared_ptr<java::util::Locale> locale);
	RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description,std::shared_ptr<std::vector<std::vector<java::lang::String>>> localizations);
	RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description,std::shared_ptr<std::vector<std::vector<java::lang::String>>> localizations,std::shared_ptr<android::icu::util::ULocale> locale);
	RuleBasedNumberFormat(std::shared_ptr<java::util::Locale> locale,int format);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::text::PluralFormat> virtual createPluralFormat(std::shared_ptr<android::icu::text::PluralRules_S_PluralType> pluralType,std::shared_ptr<java::lang::String> pattern);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	std::shared_ptr<android::icu::text::NFRuleSet> virtual findRuleSet(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::String> virtual format(double number,std::shared_ptr<java::lang::String> ruleSet);
	std::shared_ptr<java::lang::String> virtual format(long long number,std::shared_ptr<java::lang::String> ruleSet);
	std::shared_ptr<java::lang::StringBuffer> virtual format(double number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> ignore);
	std::shared_ptr<java::lang::StringBuffer> virtual format(long long number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> ignore);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigInteger> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<android::icu::text::DecimalFormat> virtual getDecimalFormat();
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> virtual getDecimalFormatSymbols();
	std::shared_ptr<android::icu::text::NFRule> virtual getDefaultInfinityRule();
	std::shared_ptr<android::icu::text::NFRule> virtual getDefaultNaNRule();
	std::shared_ptr<android::icu::text::NFRuleSet> virtual getDefaultRuleSet();
	std::shared_ptr<java::lang::String> virtual getDefaultRuleSetName();
	std::shared_ptr<android::icu::text::RbnfLenientScanner> virtual getLenientScanner();
	std::shared_ptr<android::icu::text::RbnfLenientScannerProvider> virtual getLenientScannerProvider();
	int virtual getRoundingMode();
	std::shared_ptr<java::lang::String> virtual getRuleSetDisplayName(std::shared_ptr<java::lang::String> ruleSetName);
	std::shared_ptr<java::lang::String> virtual getRuleSetDisplayName(std::shared_ptr<java::lang::String> ruleSetName,std::shared_ptr<android::icu::util::ULocale> loc);
	std::shared_ptr<android::icu::util::ULocale> virtual getRuleSetDisplayNameLocales();
	std::shared_ptr<java::lang::String> virtual getRuleSetDisplayNames();
	std::shared_ptr<java::lang::String> virtual getRuleSetDisplayNames(std::shared_ptr<android::icu::util::ULocale> loc);
	std::shared_ptr<java::lang::String> virtual getRuleSetNames();
	int virtual hashCode();
	bool virtual lenientParseEnabled();
	std::shared_ptr<java::lang::Number> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition);
	void virtual setContext(std::shared_ptr<android::icu::text::DisplayContext> context);
	void virtual setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols);
	void virtual setDefaultRuleSet(std::shared_ptr<java::lang::String> ruleSetName);
	void virtual setLenientParseMode(bool enabled);
	void virtual setLenientScannerProvider(std::shared_ptr<android::icu::text::RbnfLenientScannerProvider> scannerProvider);
	void virtual setRoundingMode(int roundingMode);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RuleBasedNumberFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RuleBasedNumberFormat(){
	}

}; // class RuleBasedNumberFormat
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedNumberFormat__

