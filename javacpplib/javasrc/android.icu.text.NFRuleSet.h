#ifndef __android_icu_text_NFRuleSet__
#define __android_icu_text_NFRuleSet__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NFRuleSet.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"
#include "java.util.LinkedList.h"

namespace android::icu::text{
class NFRuleSet : public java::lang::Object {
protected:
private:
	static int RECURSION_LIMIT;
	bool isFractionRuleSet;
	bool isParseable;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<std::vector<android::icu::text::NFRule>> rules;
	std::shared_ptr<android::icu::text::NFRule> virtual findFractionRuleSetRule(double number);
	std::shared_ptr<android::icu::text::NFRule> virtual findNormalRule(long long number);
	static long long lcm(long long x,long long y);
	void virtual setBestFractionRule(int originalIndex,std::shared_ptr<android::icu::text::NFRule> newRule,bool rememberRule);
public:
	static bool _assertionsDisabled;
	static int IMPROPER_FRACTION_RULE_INDEX;
	static int INFINITY_RULE_INDEX;
	static int MASTER_RULE_INDEX;
	static int NAN_RULE_INDEX;
	static int NEGATIVE_RULE_INDEX;
	static int PROPER_FRACTION_RULE_INDEX;
	std::shared_ptr<java::util::LinkedList<android::icu::text::NFRule>> fractionRules;
	std::shared_ptr<std::vector<android::icu::text::NFRule>> nonNumericalRules;
	std::shared_ptr<android::icu::text::RuleBasedNumberFormat> owner;
	static void static_cinit();
	NFRuleSet(std::shared_ptr<android::icu::text::RuleBasedNumberFormat> owner,std::shared_ptr<std::vector<java::lang::String>> descriptions,int index);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	std::shared_ptr<android::icu::text::NFRule> virtual findRule(double cVar4);
	void virtual format(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int pos,int recursionCount);
	void virtual format(long long number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int pos,int recursionCount);
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual hashCode();
	bool virtual isFractionSet();
	bool virtual isParseable();
	bool virtual isPublic();
	void virtual makeIntoFractionRuleSet();
	std::shared_ptr<java::lang::Number> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,double upperBound);
	void virtual parseRules(std::shared_ptr<java::lang::String> description);
	void virtual setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols);
	void virtual setNonNumericalRule(std::shared_ptr<android::icu::text::NFRule> rule);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::NFRuleSet::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NFRuleSet(){
	}

}; // class NFRuleSet
}; // namespace android::icu::text

#endif //__android_icu_text_NFRuleSet__

