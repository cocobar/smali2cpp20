#ifndef __android_icu_text_PluralRules_S_RuleList__
#define __android_icu_text_PluralRules_S_RuleList__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$RuleList.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalSamples.h"
#include "android.icu.text.PluralRules_S_Rule.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Set.h"

namespace android::icu::text{
class PluralRules_S_RuleList : public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
	bool hasExplicitBoundingInfo;
	std::shared_ptr<java::util::List<android::icu::text::PluralRules_S_Rule>> rules;
	PluralRules_S_RuleList();
	std::shared_ptr<android::icu::text::PluralRules_S_Rule> virtual selectRule(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n);
public:
	static bool _get0(std::shared_ptr<android::icu::text::PluralRules_S_RuleList> _this);
	static bool _set0(std::shared_ptr<android::icu::text::PluralRules_S_RuleList> _this,bool _value);
	PluralRules_S_RuleList(std::shared_ptr<android::icu::text::PluralRules_S_RuleList> _this0);
	std::shared_ptr<android::icu::text::PluralRules_S_RuleList> virtual addRule(std::shared_ptr<android::icu::text::PluralRules_S_Rule> nextRule);
	bool virtual computeLimited(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	std::shared_ptr<android::icu::text::PluralRules_S_RuleList> virtual finish();
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> virtual getDecimalSamples(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getKeywords();
	std::shared_ptr<java::lang::String> virtual getRules(std::shared_ptr<java::lang::String> keyword);
	bool virtual isLimited(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	std::shared_ptr<java::lang::String> virtual select(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> n);
	bool virtual select(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> sample,std::shared_ptr<java::lang::String> keyword);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRules_S_RuleList(){
	}

}; // class PluralRules_S_RuleList
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_RuleList__

