#ifndef __android_icu_text_CharsetRecog_2022__
#define __android_icu_text_CharsetRecog_2022__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_2022.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetRecognizer.h"

namespace android::icu::text{
class CharsetRecog_2022 : public android::icu::text::CharsetRecognizer {
protected:
private:
public:
	CharsetRecog_2022();
	int virtual match(std::shared_ptr<unsigned char[]> text,int textLen,std::shared_ptr<unsigned char[][]> escapeSequences);
public:
	virtual ~CharsetRecog_2022(){
	}

}; // class CharsetRecog_2022
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_2022__

