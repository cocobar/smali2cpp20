#ifndef __android_icu_text_UnescapeTransliterator_S_1__
#define __android_icu_text_UnescapeTransliterator_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnescapeTransliterator$1.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator_S_Factory.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnescapeTransliterator_S_1 : public android::icu::text::Transliterator_S_Factory {
protected:
private:
public:
	UnescapeTransliterator_S_1();
	std::shared_ptr<android::icu::text::Transliterator> virtual getInstance(std::shared_ptr<java::lang::String> ID);
public:
	virtual ~UnescapeTransliterator_S_1(){
	}

}; // class UnescapeTransliterator_S_1
}; // namespace android::icu::text

#endif //__android_icu_text_UnescapeTransliterator_S_1__

