#ifndef __android_icu_text_NFSubstitution__
#define __android_icu_text_NFSubstitution__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NFSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class NFSubstitution : public java::lang::Object {
protected:
private:
public:
	static bool _assertionsDisabled;
	std::shared_ptr<android::icu::text::DecimalFormat> numberFormat;
	int pos;
	std::shared_ptr<android::icu::text::NFRuleSet> ruleSet;
	static void static_cinit();
	NFSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> cVar2);
	static std::shared_ptr<android::icu::text::NFSubstitution> makeSubstitution(int pos,std::shared_ptr<android::icu::text::NFRule> rule,std::shared_ptr<android::icu::text::NFRule> rulePredecessor,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<android::icu::text::RuleBasedNumberFormat> formatter,std::shared_ptr<java::lang::String> description);
	double calcUpperBound(double var0) = 0;
	double composeRuleValue(double var0,double var1) = 0;
	std::shared_ptr<java::lang::Number> virtual doParse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,double baseValue,double upperBound,bool lenientParse);
	void virtual doSubstitution(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount);
	void virtual doSubstitution(long long number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	int virtual getPos();
	int virtual hashCode();
	bool virtual isModulusSubstitution();
	void virtual setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols);
	void virtual setDivisor(int radix,short exponent);
	std::shared_ptr<java::lang::String> virtual toString();
	char tokenChar() = 0;
	double transformNumber(double var0) = 0;
	long long transformNumber(long long var0) = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::NFSubstitution::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NFSubstitution(){
	}

}; // class NFSubstitution
}; // namespace android::icu::text

#endif //__android_icu_text_NFSubstitution__

