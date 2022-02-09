#ifndef __android_icu_text_CharsetRecog_2022_S_CharsetRecog_2022CN__
#define __android_icu_text_CharsetRecog_2022_S_CharsetRecog_2022CN__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_2022$CharsetRecog_2022CN.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_2022.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_2022_S_CharsetRecog_2022CN : public android::icu::text::CharsetRecog_2022 {
protected:
private:
	std::shared_ptr<unsigned char[][]> escapeSequences;
public:
	CharsetRecog_2022_S_CharsetRecog_2022CN();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<android::icu::text::CharsetMatch> virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det);
public:
	virtual ~CharsetRecog_2022_S_CharsetRecog_2022CN(){
	}

}; // class CharsetRecog_2022_S_CharsetRecog_2022CN
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_2022_S_CharsetRecog_2022CN__

