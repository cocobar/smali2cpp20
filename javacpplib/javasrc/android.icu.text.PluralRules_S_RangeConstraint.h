#ifndef __android_icu_text_PluralRules_S_RangeConstraint__
#define __android_icu_text_PluralRules_S_RangeConstraint__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$RangeConstraint.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_Constraint.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_Operand.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_RangeConstraint : public android::icu::text::PluralRules_S_Constraint, public java::io::Serializable {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_PluralRules_S_SampleTypeSwitchesValues;
	static long long serialVersionUID;
	bool inRange;
	bool integersOnly;
	double lowerBound;
	int mod;
	std::shared_ptr<android::icu::text::PluralRules_S_Operand> operand;
	std::shared_ptr<long long[]> range_list;
	double upperBound;
	static int _getandroid_icu_text_PluralRules_S_SampleTypeSwitchesValues();
public:
	PluralRules_S_RangeConstraint(int mod,bool inRange,std::shared_ptr<android::icu::text::PluralRules_S_Operand> operand,bool integersOnly,double lowBound,double highBound,std::shared_ptr<long long[]> vals);
	bool virtual isFulfilled(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> number);
	bool virtual isLimited(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRules_S_RangeConstraint(){
	}

}; // class PluralRules_S_RangeConstraint
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_RangeConstraint__

