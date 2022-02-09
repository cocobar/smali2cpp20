#ifndef __android_icu_text_CharsetRecog_Unicode_S_CharsetRecog_UTF_32__
#define __android_icu_text_CharsetRecog_Unicode_S_CharsetRecog_UTF_32__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_Unicode$CharsetRecog_UTF_32.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_Unicode.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_Unicode_S_CharsetRecog_UTF_32 : public android::icu::text::CharsetRecog_Unicode {
protected:
private:
public:
	CharsetRecog_Unicode_S_CharsetRecog_UTF_32();
	int getChar(std::shared_ptr<unsigned char[]> var0,int var1) = 0;
	std::shared_ptr<java::lang::String> getName() = 0;
	std::shared_ptr<android::icu::text::CharsetMatch> virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det);
public:
	virtual ~CharsetRecog_Unicode_S_CharsetRecog_UTF_32(){
	}

}; // class CharsetRecog_Unicode_S_CharsetRecog_UTF_32
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_Unicode_S_CharsetRecog_UTF_32__

