#ifndef __android_icu_text_NumeratorSubstitution__
#define __android_icu_text_NumeratorSubstitution__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumeratorSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class NumeratorSubstitution : public android::icu::text::NFSubstitution {
protected:
private:
	double denominator;
	bool withZeros;
public:
	NumeratorSubstitution(int pos,double denominator,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description);
	static std::shared_ptr<java::lang::String> fixdesc(std::shared_ptr<java::lang::String> cVar0);
	double virtual calcUpperBound(double oldUpperBound);
	double virtual composeRuleValue(double newRuleValue,double oldRuleValue);
	std::shared_ptr<java::lang::Number> virtual doParse(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::text::ParsePosition> parsePosition,double baseValue,double upperBound,bool lenientParse);
	void virtual doSubstitution(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int cVar0,int recursionCount);
	bool virtual equals(std::shared_ptr<java::lang::Object> that);
	char virtual tokenChar();
	double virtual transformNumber(double number);
	long long virtual transformNumber(long long number);
public:
	virtual ~NumeratorSubstitution(){
	}

}; // class NumeratorSubstitution
}; // namespace android::icu::text

#endif //__android_icu_text_NumeratorSubstitution__

