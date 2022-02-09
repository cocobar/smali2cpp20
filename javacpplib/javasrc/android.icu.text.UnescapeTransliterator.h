#ifndef __android_icu_text_UnescapeTransliterator__
#define __android_icu_text_UnescapeTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnescapeTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnescapeTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool isIncremental);
private:
	static char END;
	std::shared_ptr<char[]> spec;
public:
	UnescapeTransliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<char[]> spec);
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
public:
	virtual ~UnescapeTransliterator(){
	}

}; // class UnescapeTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_UnescapeTransliterator__

