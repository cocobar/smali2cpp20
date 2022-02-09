#ifndef __android_icu_text_EscapeTransliterator__
#define __android_icu_text_EscapeTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\EscapeTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class EscapeTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool incremental);
private:
	bool grokSupplementals;
	int minDigits;
	std::shared_ptr<java::lang::String> prefix;
	int radix;
	std::shared_ptr<java::lang::String> suffix;
	std::shared_ptr<android::icu::text::EscapeTransliterator> supplementalHandler;
public:
	EscapeTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> suffix,int radix,int minDigits,bool grokSupplementals,std::shared_ptr<android::icu::text::EscapeTransliterator> supplementalHandler);
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
public:
	virtual ~EscapeTransliterator(){
	}

}; // class EscapeTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_EscapeTransliterator__

