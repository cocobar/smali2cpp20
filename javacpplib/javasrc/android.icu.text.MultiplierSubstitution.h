#ifndef __android_icu_text_MultiplierSubstitution__
#define __android_icu_text_MultiplierSubstitution__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MultiplierSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MultiplierSubstitution : public android::icu::text::NFSubstitution {
protected:
private:
public:
	long long divisor;
	MultiplierSubstitution(int pos,std::shared_ptr<android::icu::text::NFRule> rule,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description);
	double virtual calcUpperBound(double oldUpperBound);
	double virtual composeRuleValue(double newRuleValue,double oldRuleValue);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	void virtual setDivisor(int radix,short exponent);
	char virtual tokenChar();
	double virtual transformNumber(double number);
	long long virtual transformNumber(long long number);
public:
	virtual ~MultiplierSubstitution(){
	}

}; // class MultiplierSubstitution
}; // namespace android::icu::text

#endif //__android_icu_text_MultiplierSubstitution__

