#ifndef __android_icu_text_CharsetDetector_S_CSRecognizerInfo__
#define __android_icu_text_CharsetDetector_S_CSRecognizerInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetDetector$CSRecognizerInfo.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class CharsetDetector_S_CSRecognizerInfo : public java::lang::Object {
protected:
private:
public:
	bool isDefaultEnabled;
	std::shared_ptr<android::icu::text::CharsetRecognizer> recognizer;
	CharsetDetector_S_CSRecognizerInfo(std::shared_ptr<android::icu::text::CharsetRecognizer> recognizer,bool isDefaultEnabled);
public:
	virtual ~CharsetDetector_S_CSRecognizerInfo(){
	}

}; // class CharsetDetector_S_CSRecognizerInfo
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetDetector_S_CSRecognizerInfo__

