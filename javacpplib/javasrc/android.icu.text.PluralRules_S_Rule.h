#ifndef __android_icu_text_PluralRules_S_Rule__
#define __android_icu_text_PluralRules_S_Rule__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$Rule.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_Constraint.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalSamples.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_Rule : public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<android::icu::text::PluralRules_S_Constraint> constraint;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> decimalSamples;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> integerSamples;
	std::shared_ptr<java::lang::String> keyword;
public:
	static std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> _get0(std::shared_ptr<android::icu::text::PluralRules_S_Rule> _this);
	static std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> _get1(std::shared_ptr<android::icu::text::PluralRules_S_Rule> _this);
	PluralRules_S_Rule(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_Constraint> constraint,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> integerSamples,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> decimalSamples);
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> virtual and(std::shared_ptr<android::icu::text::PluralRules_S_Constraint> c);
	bool virtual appliesTo(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n);
	std::shared_ptr<java::lang::String> virtual getConstraint();
	std::shared_ptr<java::lang::String> virtual getKeyword();
	int virtual hashCode();
	bool virtual isLimited(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> virtual or(std::shared_ptr<android::icu::text::PluralRules_S_Constraint> c);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRules_S_Rule(){
	}

}; // class PluralRules_S_Rule
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_Rule__

