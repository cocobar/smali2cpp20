#ifndef __android_icu_text_ModulusSubstitution__
#define __android_icu_text_ModulusSubstitution__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ModulusSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class ModulusSubstitution : public android::icu::text::NFSubstitution {
protected:
private:
	std::shared_ptr<android::icu::text::NFRule> ruleToUse;
public:
	long long divisor;
	ModulusSubstitution(int pos,std::shared_ptr<android::icu::text::NFRule> rule,std::shared_ptr<android::icu::text::NFRule> rulePredecessor,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description);
	double virtual calcUpperBound(double oldUpperBound);
	double virtual composeRuleValue(double newRuleValue,double oldRuleValue);
	std::shared_ptr<java::lang::Number> virtual doParse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,double baseValue,double upperBound,bool lenientParse);
	void virtual doSubstitution(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount);
	void virtual doSubstitution(long long number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	bool virtual isModulusSubstitution();
	void virtual setDivisor(int radix,short exponent);
	char virtual tokenChar();
	double virtual transformNumber(double number);
	long long virtual transformNumber(long long number);
public:
	virtual ~ModulusSubstitution(){
	}

}; // class ModulusSubstitution
}; // namespace android::icu::text

#endif //__android_icu_text_ModulusSubstitution__

