#ifndef __android_icu_text_PluralRules_S_FixedDecimalSamples__
#define __android_icu_text_PluralRules_S_FixedDecimalSamples__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$FixedDecimalSamples.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalRange.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.lang.Double.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

namespace android::icu::text{
class PluralRules_S_FixedDecimalSamples : public java::lang::Object {
protected:
private:
	PluralRules_S_FixedDecimalSamples(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType,std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimalRange>> samples,bool bounded);
	static void checkDecimal(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType2,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> sample);
public:
	bool bounded;
	std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType;
	std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimalRange>> samples;
	static std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> parse(std::shared_ptr<java::lang::String> source);
	std::shared_ptr<java::util::Set<java::lang::Double>> virtual addSamples(std::shared_ptr<java::util::Set<java::lang::Double>> result);
	std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimalRange>> virtual getSamples();
	void virtual getStartEndSamples(std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> target);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRules_S_FixedDecimalSamples(){
	}

}; // class PluralRules_S_FixedDecimalSamples
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_FixedDecimalSamples__

