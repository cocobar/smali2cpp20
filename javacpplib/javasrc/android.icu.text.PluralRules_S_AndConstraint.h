#ifndef __android_icu_text_PluralRules_S_AndConstraint__
#define __android_icu_text_PluralRules_S_AndConstraint__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$AndConstraint.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_BinaryConstraint.h"
#include "android.icu.text.PluralRules_S_Constraint.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_AndConstraint : public android::icu::text::PluralRules_S_BinaryConstraint {
protected:
private:
	static long long serialVersionUID;
public:
	PluralRules_S_AndConstraint(std::shared_ptr<android::icu::text::PluralRules_S_Constraint> a,std::shared_ptr<android::icu::text::PluralRules_S_Constraint> b);
	bool virtual isFulfilled(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n);
	bool virtual isLimited(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRules_S_AndConstraint(){
	}

}; // class PluralRules_S_AndConstraint
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_AndConstraint__

