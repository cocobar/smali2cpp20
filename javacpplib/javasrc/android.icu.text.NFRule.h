#ifndef __android_icu_text_NFRule__
#define __android_icu_text_NFRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NFRule.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "android.icu.text.PluralFormat.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.Long.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"
#include "java.util.List.h"

namespace android::icu::text{
class NFRule : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> RULE_PREFIXES;
	long long baseValue;
	char decimalPoint;
	short exponent;
	std::shared_ptr<android::icu::text::RuleBasedNumberFormat> formatter;
	int radix;
	std::shared_ptr<android::icu::text::PluralFormat> rulePatternFormat;
	std::shared_ptr<java::lang::String> ruleText;
	std::shared_ptr<android::icu::text::NFSubstitution> sub1;
	std::shared_ptr<android::icu::text::NFSubstitution> sub2;
	bool virtual allIgnorable(std::shared_ptr<java::lang::String> str);
	short virtual expectedExponent();
	std::shared_ptr<android::icu::text::NFSubstitution> virtual extractSubstitution(std::shared_ptr<android::icu::text::NFRuleSet> owner,std::shared_ptr<android::icu::text::NFRule> predecessor);
	void virtual extractSubstitutions(std::shared_ptr<android::icu::text::NFRuleSet> owner,std::shared_ptr<java::lang::String> ruleText,std::shared_ptr<android::icu::text::NFRule> predecessor);
	int virtual findText(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::text::PluralFormat> pluralFormatKey,int startingAt);
	static int indexOfAnyRulePrefix(std::shared_ptr<java::lang::String> ruleText);
	std::shared_ptr<java::lang::Number> virtual matchToDelimiter(std::shared_ptr<java::lang::String> text,int startPos,double baseVal,std::shared_ptr<java::lang::String> delimiter,std::shared_ptr<android::icu::text::PluralFormat> pluralFormatDelimiter,std::shared_ptr<java::text::ParsePosition> pp,std::shared_ptr<android::icu::text::NFSubstitution> sub,double upperBound);
	std::shared_ptr<java::lang::String> virtual parseRuleDescriptor(std::shared_ptr<java::lang::String> cVar7);
	int virtual prefixLength(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> prefix);
	std::shared_ptr<java::lang::String> virtual stripPrefix(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::text::ParsePosition> pp);
public:
	static bool _assertionsDisabled;
	static int IMPROPER_FRACTION_RULE;
	static int INFINITY_RULE;
	static int MASTER_RULE;
	static int NAN_RULE;
	static int NEGATIVE_NUMBER_RULE;
	static int PROPER_FRACTION_RULE;
	static std::shared_ptr<java::lang::Long> ZERO;
	static void static_cinit();
	NFRule(std::shared_ptr<android::icu::text::RuleBasedNumberFormat> formatter,std::shared_ptr<java::lang::String> ruleText);
	static void makeRules(std::shared_ptr<java::lang::String> description,std::shared_ptr<android::icu::text::NFRuleSet> owner,std::shared_ptr<android::icu::text::NFRule> predecessor,std::shared_ptr<android::icu::text::RuleBasedNumberFormat> ownersOwner,std::shared_ptr<java::util::List<android::icu::text::NFRule>> returnList);
	static long long power(long long base,short exponent);
	void virtual doFormat(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int pos,int recursionCount);
	void virtual doFormat(long long number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int pos,int recursionCount);
	std::shared_ptr<java::lang::Number> virtual doParse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,bool isFractionRule,double upperBound);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	long long virtual getBaseValue();
	char virtual getDecimalPoint();
	long long virtual getDivisor();
	int virtual hashCode();
	void virtual setBaseValue(long long newBaseValue);
	void virtual setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols);
	bool virtual shouldRollBack(long long number);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::NFRule::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NFRule(){
	}

}; // class NFRule
}; // namespace android::icu::text

#endif //__android_icu_text_NFRule__

