#ifndef __android_icu_text_RuleBasedTransliterator_S_Data__
#define __android_icu_text_RuleBasedTransliterator_S_Data__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedTransliterator$Data.smali
#include "java2ctype.h"
#include "android.icu.text.TransliterationRuleSet.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::text{
class RuleBasedTransliterator_S_Data : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::text::TransliterationRuleSet> ruleSet;
	std::shared_ptr<java::util::Map<java::lang::String,char[]>> variableNames;
	std::shared_ptr<std::vector<java::lang::Object>> variables;
	char variablesBase;
	RuleBasedTransliterator_S_Data();
	std::shared_ptr<android::icu::text::UnicodeMatcher> virtual lookupMatcher(int standIn);
	std::shared_ptr<android::icu::text::UnicodeReplacer> virtual lookupReplacer(int standIn);
public:
	virtual ~RuleBasedTransliterator_S_Data(){
	}

}; // class RuleBasedTransliterator_S_Data
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedTransliterator_S_Data__

