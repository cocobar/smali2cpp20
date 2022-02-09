#ifndef __android_icu_text_PluralRules_S_FixedDecimalRange__
#define __android_icu_text_PluralRules_S_FixedDecimalRange__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$FixedDecimalRange.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRules_S_FixedDecimalRange : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> end;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> start;
	PluralRules_S_FixedDecimalRange(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> start,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> end);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRules_S_FixedDecimalRange(){
	}

}; // class PluralRules_S_FixedDecimalRange
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_FixedDecimalRange__

