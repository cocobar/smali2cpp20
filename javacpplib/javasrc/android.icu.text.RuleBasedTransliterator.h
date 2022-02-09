#ifndef __android_icu_text_RuleBasedTransliterator__
#define __android_icu_text_RuleBasedTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RuleBasedTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental);
private:
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data;
public:
	RuleBasedTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data,std::shared_ptr<android::icu::text::UnicodeFilter> filter);
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> filter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
	std::shared_ptr<android::icu::text::Transliterator> virtual safeClone();
	std::shared_ptr<java::lang::String> virtual toRules(bool escapeUnprintable);
public:
	virtual ~RuleBasedTransliterator(){
	}

}; // class RuleBasedTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedTransliterator__

