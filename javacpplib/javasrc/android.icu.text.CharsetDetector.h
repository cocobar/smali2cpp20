#ifndef __android_icu_text_CharsetDetector__
#define __android_icu_text_CharsetDetector__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetDetector.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector_S_CSRecognizerInfo.h"
#include "android.icu.text.CharsetMatch.h"
#include "java.io.InputStream.h"
#include "java.io.Reader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::text{
class CharsetDetector : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::List<android::icu::text::CharsetDetector_S_CSRecognizerInfo>> ALL_CS_RECOGNIZERS;
	static int kBufSize;
	std::shared_ptr<bool[]> fEnabledRecognizers;
	bool fStripTags;
	void virtual MungeInput();
public:
	std::shared_ptr<short[]> fByteStats;
	bool fC1Bytes;
	std::shared_ptr<java::lang::String> fDeclaredEncoding;
	std::shared_ptr<unsigned char[]> fInputBytes;
	int fInputLen;
	std::shared_ptr<java::io::InputStream> fInputStream;
	std::shared_ptr<unsigned char[]> fRawInput;
	int fRawLength;
	static void static_cinit();
	CharsetDetector();
	static std::shared_ptr<java::lang::String> getAllDetectableCharsets();
	std::shared_ptr<android::icu::text::CharsetMatch> virtual detect();
	std::shared_ptr<android::icu::text::CharsetMatch> virtual detectAll();
	bool virtual enableInputFilter(bool filter);
	std::shared_ptr<java::lang::String> virtual getDetectableCharsets();
	std::shared_ptr<java::io::Reader> virtual getReader(std::shared_ptr<java::io::InputStream> in,std::shared_ptr<java::lang::String> declaredEncoding);
	std::shared_ptr<java::lang::String> virtual getString(std::shared_ptr<unsigned char[]> in,std::shared_ptr<java::lang::String> declaredEncoding);
	bool virtual inputFilterEnabled();
	std::shared_ptr<android::icu::text::CharsetDetector> virtual setDeclaredEncoding(std::shared_ptr<java::lang::String> encoding);
	std::shared_ptr<android::icu::text::CharsetDetector> virtual setDetectableCharset(std::shared_ptr<java::lang::String> encoding,bool enabled);
	std::shared_ptr<android::icu::text::CharsetDetector> virtual setText(std::shared_ptr<java::io::InputStream> in);
	std::shared_ptr<android::icu::text::CharsetDetector> virtual setText(std::shared_ptr<unsigned char[]> in);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CharsetDetector::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsetDetector(){
	}

}; // class CharsetDetector
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetDetector__

