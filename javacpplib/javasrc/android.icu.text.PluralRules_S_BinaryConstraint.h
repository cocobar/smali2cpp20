#ifndef __android_icu_text_PluralRules_S_BinaryConstraint__
#define __android_icu_text_PluralRules_S_BinaryConstraint__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$BinaryConstraint.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_Constraint.h"
#include "java.io.Serializable.h"

namespace android::icu::text{
class PluralRules_S_BinaryConstraint : public android::icu::text::PluralRules_S_Constraint, public java::io::Serializable {
protected:
	std::shared_ptr<android::icu::text::PluralRules_S_Constraint> a;
	std::shared_ptr<android::icu::text::PluralRules_S_Constraint> b;
	PluralRules_S_BinaryConstraint(std::shared_ptr<android::icu::text::PluralRules_S_Constraint> a,std::shared_ptr<android::icu::text::PluralRules_S_Constraint> b);
private:
	static long long serialVersionUID;
public:
public:
	virtual ~PluralRules_S_BinaryConstraint(){
	}

}; // class PluralRules_S_BinaryConstraint
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_BinaryConstraint__

