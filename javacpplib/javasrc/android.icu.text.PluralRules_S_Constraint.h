#ifndef __android_icu_text_PluralRules_S_Constraint__
#define __android_icu_text_PluralRules_S_Constraint__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$Constraint.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.io.Serializable.h"

namespace android::icu::text{
class PluralRules_S_Constraint : public java::io::Serializable {
protected:
private:
public:
	bool isFulfilled(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> var0) = 0;
	bool isLimited(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> var0) = 0;
	PluralRules_S_Constraint(){ };
	virtual ~PluralRules_S_Constraint(){ };

}; // class PluralRules_S_Constraint
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_Constraint__

