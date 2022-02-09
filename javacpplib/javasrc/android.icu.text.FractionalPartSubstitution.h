#ifndef __android_icu_text_FractionalPartSubstitution__
#define __android_icu_text_FractionalPartSubstitution__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\FractionalPartSubstitution.smali
#include "java2ctype.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NFSubstitution.h"
#include "java.lang.Number.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class FractionalPartSubstitution : public android::icu::text::NFSubstitution {
protected:
private:
	bool byDigits;
	bool useSpaces;
public:
	FractionalPartSubstitution(int pos,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet,std::shared_ptr<java::lang::String> description);
	double virtual calcUpperBound(double oldUpperBound);
	double virtual composeRuleValue(double newRuleValue,double oldRuleValue);
	std::shared_ptr<java::lang::Number> virtual doParse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition,double baseValue,double upperBound,bool lenientParse);
	void virtual doSubstitution(double number,std::shared_ptr<java::lang::StringBuilder> toInsertInto,int position,int recursionCount);
	char virtual tokenChar();
	double virtual transformNumber(double number);
	long long virtual transformNumber(long long number);
public:
	virtual ~FractionalPartSubstitution(){
	}

}; // class FractionalPartSubstitution
}; // namespace android::icu::text

#endif //__android_icu_text_FractionalPartSubstitution__

