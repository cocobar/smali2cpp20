#ifndef __android_icu_text_CaseFoldTransliterator_S_2__
#define __android_icu_text_CaseFoldTransliterator_S_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CaseFoldTransliterator$2.smali
#include "java2ctype.h"
#include "android.icu.text.CaseFoldTransliterator.h"
#include "android.icu.text.Transform.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CaseFoldTransliterator_S_2 : public android::icu::text::Transform<java::lang::String,java::lang::String> {
protected:
private:
public:
	std::shared_ptr<android::icu::text::CaseFoldTransliterator> this_S_0;
	CaseFoldTransliterator_S_2(std::shared_ptr<android::icu::text::CaseFoldTransliterator> this_S_0);
	std::shared_ptr<java::lang::String> virtual transform(std::shared_ptr<java::lang::String> source);
public:
	virtual ~CaseFoldTransliterator_S_2(){
	}

}; // class CaseFoldTransliterator_S_2
}; // namespace android::icu::text

#endif //__android_icu_text_CaseFoldTransliterator_S_2__

