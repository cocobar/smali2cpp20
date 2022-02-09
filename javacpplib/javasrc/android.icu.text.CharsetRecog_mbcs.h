#ifndef __android_icu_text_CharsetRecog_mbcs__
#define __android_icu_text_CharsetRecog_mbcs__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_mbcs : public android::icu::text::CharsetRecognizer {
protected:
private:
public:
	CharsetRecog_mbcs();
	std::shared_ptr<java::lang::String> getName() = 0;
	int virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<int[]> commonChars);
	bool nextChar(std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_iteratedChar> var0,std::shared_ptr<android::icu::text::CharsetDetector> var1) = 0;
public:
	virtual ~CharsetRecog_mbcs(){
	}

}; // class CharsetRecog_mbcs
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_mbcs__

