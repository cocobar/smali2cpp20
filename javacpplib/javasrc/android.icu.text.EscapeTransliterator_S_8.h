#ifndef __android_icu_text_EscapeTransliterator_S_8__
#define __android_icu_text_EscapeTransliterator_S_8__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\EscapeTransliterator$8.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator_S_Factory.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.String.h"

namespace android::icu::text{
class EscapeTransliterator_S_8 : public android::icu::text::Transliterator_S_Factory {
protected:
private:
public:
	EscapeTransliterator_S_8();
	std::shared_ptr<android::icu::text::Transliterator> virtual getInstance(std::shared_ptr<java::lang::String> ID);
public:
	virtual ~EscapeTransliterator_S_8(){
	}

}; // class EscapeTransliterator_S_8
}; // namespace android::icu::text

#endif //__android_icu_text_EscapeTransliterator_S_8__

