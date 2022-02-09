#ifndef __android_icu_text_CharsetRecog_sbcs_S_NGramParser_IBM420__
#define __android_icu_text_CharsetRecog_sbcs_S_NGramParser_IBM420__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$NGramParser_IBM420.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramParser.h"

namespace android::icu::text{
class CharsetRecog_sbcs_S_NGramParser_IBM420 : public android::icu::text::CharsetRecog_sbcs_S_NGramParser {
protected:
	static std::shared_ptr<unsigned char[]> unshapeMap;
	void virtual parseCharacters(std::shared_ptr<android::icu::text::CharsetDetector> det);
private:
	unsigned char alef;
	unsigned char virtual isLamAlef(unsigned char b);
	int virtual nextByte(std::shared_ptr<android::icu::text::CharsetDetector> det);
public:
	static void static_cinit();
	CharsetRecog_sbcs_S_NGramParser_IBM420(std::shared_ptr<int[]> theNgramList,std::shared_ptr<unsigned char[]> theByteMap);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CharsetRecog_sbcs_S_NGramParser_IBM420::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsetRecog_sbcs_S_NGramParser_IBM420(){
	}

}; // class CharsetRecog_sbcs_S_NGramParser_IBM420
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_sbcs_S_NGramParser_IBM420__

