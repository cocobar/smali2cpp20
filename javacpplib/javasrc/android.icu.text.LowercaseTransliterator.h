#ifndef __android_icu_text_LowercaseTransliterator__
#define __android_icu_text_LowercaseTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\LowercaseTransliterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableContextIterator.h"
#include "android.icu.text.SourceTargetUtility.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class LowercaseTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental);
private:
	int caseLocale;
	std::shared_ptr<android::icu::impl::UCaseProps> csp;
	std::shared_ptr<android::icu::text::ReplaceableContextIterator> iter;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::lang::StringBuilder> result;
public:
	static std::shared_ptr<java::lang::String> _ID;
	std::shared_ptr<android::icu::text::SourceTargetUtility> sourceTargetUtility;
	static std::shared_ptr<android::icu::util::ULocale> _get0(std::shared_ptr<android::icu::text::LowercaseTransliterator> _this);
	LowercaseTransliterator(std::shared_ptr<android::icu::util::ULocale> loc);
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
public:
	virtual ~LowercaseTransliterator(){
	}

}; // class LowercaseTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_LowercaseTransliterator__

