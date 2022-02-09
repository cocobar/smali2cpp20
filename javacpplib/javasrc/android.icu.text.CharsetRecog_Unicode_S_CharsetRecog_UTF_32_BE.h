#ifndef __android_icu_text_CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE__
#define __android_icu_text_CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_Unicode$CharsetRecog_UTF_32_BE.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetRecog_Unicode_S_CharsetRecog_UTF_32.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE : public android::icu::text::CharsetRecog_Unicode_S_CharsetRecog_UTF_32 {
protected:
private:
public:
	CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE();
	int virtual getChar(std::shared_ptr<unsigned char[]> input,int index);
	std::shared_ptr<java::lang::String> virtual getName();
public:
	virtual ~CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE(){
	}

}; // class CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_Unicode_S_CharsetRecog_UTF_32_BE__

