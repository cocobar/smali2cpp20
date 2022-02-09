#ifndef __android_icu_text_PluralRules_S_RangeConstraint__
#define __android_icu_text_PluralRules_S_RangeConstraint__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$RangeConstraint.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_Constraint.hh"
#include "java.io.Serializable.hh"

namespace android::icu::text{
class PluralRules_S_RangeConstraint : public android::icu::text::PluralRules_S_Constraint, public java::io::Serializable {
public:
	PluralRules_S_RangeConstraint();
	virtual ~PluralRules_S_RangeConstraint();

}; // class PluralRules_S_RangeConstraint
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_RangeConstraint__

