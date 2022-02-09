#ifndef __android_icu_text_TransliterationRuleSet__
#define __android_icu_text_TransliterationRuleSet__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliterationRuleSet.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.TransliterationRule.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::text{
class TransliterationRuleSet : public java::lang::Object {
protected:
private:
	std::shared_ptr<int[]> index;
	int maxContextLength;
	std::shared_ptr<java::util::List<android::icu::text::TransliterationRule>> ruleVector;
	std::shared_ptr<std::vector<android::icu::text::TransliterationRule>> rules;
public:
	TransliterationRuleSet();
	void virtual addRule(std::shared_ptr<android::icu::text::TransliterationRule> rule);
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> filter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
	void virtual freeze();
	int virtual getMaximumContextLength();
	std::shared_ptr<java::lang::String> virtual toRules(bool escapeUnprintable);
	bool virtual transliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool incremental);
public:
	virtual ~TransliterationRuleSet(){
	}

}; // class TransliterationRuleSet
}; // namespace android::icu::text

#endif //__android_icu_text_TransliterationRuleSet__

