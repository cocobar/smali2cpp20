#ifndef __android_icu_text_CharsetRecog_Unicode__
#define __android_icu_text_CharsetRecog_Unicode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_Unicode.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_Unicode : public android::icu::text::CharsetRecognizer {
protected:
private:
public:
	CharsetRecog_Unicode();
	static int adjustConfidence(int codeUnit,int cVar1);
	static int codeUnit16FromBytes(unsigned char hi,unsigned char lo);
	std::shared_ptr<java::lang::String> getName() = 0;
	std::shared_ptr<android::icu::text::CharsetMatch> match(std::shared_ptr<android::icu::text::CharsetDetector> var0) = 0;
public:
	virtual ~CharsetRecog_Unicode(){
	}

}; // class CharsetRecog_Unicode
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_Unicode__

