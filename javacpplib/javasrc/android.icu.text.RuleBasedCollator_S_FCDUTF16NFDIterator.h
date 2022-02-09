#ifndef __android_icu_text_RuleBasedCollator_S_FCDUTF16NFDIterator__
#define __android_icu_text_RuleBasedCollator_S_FCDUTF16NFDIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$FCDUTF16NFDIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.RuleBasedCollator_S_UTF16NFDIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class RuleBasedCollator_S_FCDUTF16NFDIterator : public android::icu::text::RuleBasedCollator_S_UTF16NFDIterator {
protected:
private:
	std::shared_ptr<java::lang::StringBuilder> str;
public:
	RuleBasedCollator_S_FCDUTF16NFDIterator();
	void virtual setText(std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl,std::shared_ptr<java::lang::CharSequence> seq,int start);
public:
	virtual ~RuleBasedCollator_S_FCDUTF16NFDIterator(){
	}

}; // class RuleBasedCollator_S_FCDUTF16NFDIterator
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedCollator_S_FCDUTF16NFDIterator__

