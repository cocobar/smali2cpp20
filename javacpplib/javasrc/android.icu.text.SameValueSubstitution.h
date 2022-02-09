#ifndef __android_icu_text_SameValueSubstitution__
#define __android_icu_text_SameValueSubstitution__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SameValueSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.String.h"

namespace android::icu::text{
class SameValueSubstitution : public android::icu::text::NFSubstitution {
protected:
private:
public:
	SameValueSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description);
	double virtual calcUpperBound(double oldUpperBound);
	double virtual composeRuleValue(double newRuleValue,double oldRuleValue);
	char virtual tokenChar();
	double virtual transformNumber(double number);
	long long virtual transformNumber(long long number);
public:
	virtual ~SameValueSubstitution(){
	}

}; // class SameValueSubstitution
}; // namespace android::icu::text

#endif //__android_icu_text_SameValueSubstitution__

