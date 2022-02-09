#ifndef __android_icu_text_NormalizationTransliterator_S_NormalizingTransform__
#define __android_icu_text_NormalizationTransliterator_S_NormalizingTransform__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NormalizationTransliterator$NormalizingTransform.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Transform.h"
#include "java.lang.String.h"

namespace android::icu::text{
class NormalizationTransliterator_S_NormalizingTransform : public android::icu::text::Transform<java::lang::String,java::lang::String> {
protected:
private:
public:
	std::shared_ptr<android::icu::text::Normalizer2> norm2;
	NormalizationTransliterator_S_NormalizingTransform(std::shared_ptr<android::icu::text::Normalizer2> norm2);
	std::shared_ptr<java::lang::String> virtual transform(std::shared_ptr<java::lang::String> source);
public:
	virtual ~NormalizationTransliterator_S_NormalizingTransform(){
	}

}; // class NormalizationTransliterator_S_NormalizingTransform
}; // namespace android::icu::text

#endif //__android_icu_text_NormalizationTransliterator_S_NormalizingTransform__

