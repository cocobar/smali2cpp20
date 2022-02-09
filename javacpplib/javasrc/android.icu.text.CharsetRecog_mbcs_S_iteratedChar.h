#ifndef __android_icu_text_CharsetRecog_mbcs_S_iteratedChar__
#define __android_icu_text_CharsetRecog_mbcs_S_iteratedChar__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$iteratedChar.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class CharsetRecog_mbcs_S_iteratedChar : public java::lang::Object {
protected:
private:
public:
	int charValue;
	bool done;
	bool error;
	int nextIndex;
	CharsetRecog_mbcs_S_iteratedChar();
	int virtual nextByte(std::shared_ptr<android::icu::text::CharsetDetector> det);
	void virtual reset();
public:
	virtual ~CharsetRecog_mbcs_S_iteratedChar(){
	}

}; // class CharsetRecog_mbcs_S_iteratedChar
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_mbcs_S_iteratedChar__

