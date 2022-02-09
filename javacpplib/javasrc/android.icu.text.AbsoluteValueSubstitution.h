#ifndef __android_icu_text_AbsoluteValueSubstitution__
#define __android_icu_text_AbsoluteValueSubstitution__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AbsoluteValueSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.String.h"

namespace android::icu::text{
class AbsoluteValueSubstitution : public android::icu::text::NFSubstitution {
protected:
private:
public:
	AbsoluteValueSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description);
	double virtual calcUpperBound(double oldUpperBound);
	double virtual composeRuleValue(double newRuleValue,double oldRuleValue);
	char virtual tokenChar();
	double virtual transformNumber(double number);
	long long virtual transformNumber(long long number);
public:
	virtual ~AbsoluteValueSubstitution(){
	}

}; // class AbsoluteValueSubstitution
}; // namespace android::icu::text

#endif //__android_icu_text_AbsoluteValueSubstitution__

