#ifndef __android_icu_text_NullTransliterator__
#define __android_icu_text_NullTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NullTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class NullTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool incremental);
private:
public:
	static std::shared_ptr<java::lang::String> SHORT_ID;
	static std::shared_ptr<java::lang::String> _ID;
	NullTransliterator();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
public:
	virtual ~NullTransliterator(){
	}

}; // class NullTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_NullTransliterator__

