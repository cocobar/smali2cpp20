#ifndef __android_icu_text_CharsetRecognizer__
#define __android_icu_text_CharsetRecognizer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecognizer.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecognizer : public java::lang::Object {
protected:
private:
public:
	CharsetRecognizer();
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<java::lang::String> getName() = 0;
	std::shared_ptr<android::icu::text::CharsetMatch> match(std::shared_ptr<android::icu::text::CharsetDetector> var0) = 0;
public:
	virtual ~CharsetRecognizer(){
	}

}; // class CharsetRecognizer
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecognizer__

