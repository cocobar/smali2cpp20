#ifndef __android_icu_text_CharsetMatch__
#define __android_icu_text_CharsetMatch__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetMatch.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecognizer.h"
#include "java.io.InputStream.h"
#include "java.io.Reader.h"
#include "java.lang.Comparable.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetMatch : public java::lang::Comparable<android::icu::text::CharsetMatch> {
protected:
private:
	std::shared_ptr<java::lang::String> fCharsetName;
	int fConfidence;
	std::shared_ptr<java::io::InputStream> fInputStream;
	std::shared_ptr<java::lang::String> fLang;
	std::shared_ptr<unsigned char[]> fRawInput;
	int fRawLength;
public:
	CharsetMatch(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<android::icu::text::CharsetRecognizer> rec,int conf);
	CharsetMatch(std::shared_ptr<android::icu::text::CharsetDetector> det,std::shared_ptr<android::icu::text::CharsetRecognizer> rec,int conf,std::shared_ptr<java::lang::String> csName,std::shared_ptr<java::lang::String> lang);
	int virtual compareTo(std::shared_ptr<android::icu::text::CharsetMatch> other);
	int virtual getConfidence();
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::io::Reader> virtual getReader();
	std::shared_ptr<java::lang::String> virtual getString();
	std::shared_ptr<java::lang::String> virtual getString(int maxLength);
public:
	virtual ~CharsetMatch(){
	}

}; // class CharsetMatch
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetMatch__

