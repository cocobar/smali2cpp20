#ifndef __android_icu_text_CharsetRecog_sbcs__
#define __android_icu_text_CharsetRecog_sbcs__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_sbcs : public android::icu::text::CharsetRecognizer {
protected:
private:
public:
	CharsetRecog_sbcs();
	std::shared_ptr<java::lang::String> getName() = 0;
	int virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<int[]> ngrams,std::shared_ptr<unsigned char[]> byteMap);
	int virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<int[]> ngrams,std::shared_ptr<unsigned char[]> byteMap,unsigned char spaceChar);
	int virtual matchIBM420(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<int[]> ngrams,std::shared_ptr<unsigned char[]> byteMap,unsigned char spaceChar);
public:
	virtual ~CharsetRecog_sbcs(){
	}

}; // class CharsetRecog_sbcs
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_sbcs__

