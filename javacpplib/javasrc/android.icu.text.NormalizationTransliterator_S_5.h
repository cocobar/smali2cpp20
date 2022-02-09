#ifndef __android_icu_text_NormalizationTransliterator_S_5__
#define __android_icu_text_NormalizationTransliterator_S_5__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NormalizationTransliterator$5.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator_S_Factory.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.String.h"

namespace android::icu::text{
class NormalizationTransliterator_S_5 : public android::icu::text::Transliterator_S_Factory {
protected:
private:
public:
	NormalizationTransliterator_S_5();
	std::shared_ptr<android::icu::text::Transliterator> virtual getInstance(std::shared_ptr<java::lang::String> ID);
public:
	virtual ~NormalizationTransliterator_S_5(){
	}

}; // class NormalizationTransliterator_S_5
}; // namespace android::icu::text

#endif //__android_icu_text_NormalizationTransliterator_S_5__

