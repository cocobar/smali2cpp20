#ifndef __android_icu_text_FunctionReplacer__
#define __android_icu_text_FunctionReplacer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\FunctionReplacer.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class FunctionReplacer : public android::icu::text::UnicodeReplacer {
protected:
private:
	std::shared_ptr<android::icu::text::UnicodeReplacer> replacer;
	std::shared_ptr<android::icu::text::Transliterator> translit;
public:
	FunctionReplacer(std::shared_ptr<android::icu::text::Transliterator> theTranslit,std::shared_ptr<android::icu::text::UnicodeReplacer> theReplacer);
	void virtual addReplacementSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo);
	int virtual replace(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit,std::shared_ptr<int[]> cursor);
	std::shared_ptr<java::lang::String> virtual toReplacerPattern(bool escapeUnprintable);
public:
	virtual ~FunctionReplacer(){
	}

}; // class FunctionReplacer
}; // namespace android::icu::text

#endif //__android_icu_text_FunctionReplacer__

