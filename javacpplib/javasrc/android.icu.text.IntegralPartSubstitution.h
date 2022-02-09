#ifndef __android_icu_text_IntegralPartSubstitution__
#define __android_icu_text_IntegralPartSubstitution__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\IntegralPartSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.String.h"

namespace android::icu::text{
class IntegralPartSubstitution : public android::icu::text::NFSubstitution {
protected:
private:
public:
	IntegralPartSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description);
	double virtual calcUpperBound(double oldUpperBound);
	double virtual composeRuleValue(double newRuleValue,double oldRuleValue);
	char virtual tokenChar();
	double virtual transformNumber(double number);
	long long virtual transformNumber(long long number);
public:
	virtual ~IntegralPartSubstitution(){
	}

}; // class IntegralPartSubstitution
}; // namespace android::icu::text

#endif //__android_icu_text_IntegralPartSubstitution__

