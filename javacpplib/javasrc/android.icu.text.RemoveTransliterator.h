#ifndef __android_icu_text_RemoveTransliterator__
#define __android_icu_text_RemoveTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RemoveTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RemoveTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental);
private:
	static std::shared_ptr<java::lang::String> _ID;
public:
	RemoveTransliterator();
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
public:
	virtual ~RemoveTransliterator(){
	}

}; // class RemoveTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_RemoveTransliterator__

