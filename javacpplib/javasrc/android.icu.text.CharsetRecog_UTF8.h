#ifndef __android_icu_text_CharsetRecog_UTF8__
#define __android_icu_text_CharsetRecog_UTF8__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_UTF8.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_UTF8 : public android::icu::text::CharsetRecognizer {
protected:
private:
public:
	CharsetRecog_UTF8();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<android::icu::text::CharsetMatch> virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det);
public:
	virtual ~CharsetRecog_UTF8(){
	}

}; // class CharsetRecog_UTF8
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_UTF8__

