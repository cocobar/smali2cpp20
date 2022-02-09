#ifndef __android_icu_text_RuleBasedCollator_S_UTF16NFDIterator__
#define __android_icu_text_RuleBasedCollator_S_UTF16NFDIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$UTF16NFDIterator.smali
#include "java2ctype.h"
#include "android.icu.text.RuleBasedCollator_S_NFDIterator.h"
#include "java.lang.CharSequence.h"

namespace android::icu::text{
class RuleBasedCollator_S_UTF16NFDIterator : public android::icu::text::RuleBasedCollator_S_NFDIterator {
protected:
	int pos;
	std::shared_ptr<java::lang::CharSequence> s;
	int virtual nextRawCodePoint();
private:
public:
	RuleBasedCollator_S_UTF16NFDIterator();
	void virtual setText(std::shared_ptr<java::lang::CharSequence> seq,int start);
public:
	virtual ~RuleBasedCollator_S_UTF16NFDIterator(){
	}

}; // class RuleBasedCollator_S_UTF16NFDIterator
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedCollator_S_UTF16NFDIterator__

