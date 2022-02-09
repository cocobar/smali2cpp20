#ifndef __android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_big5__
#define __android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_big5__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_big5.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"
#include "android.icu.text.CharsetRecog_mbcs.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_mbcs_S_CharsetRecog_big5 : public android::icu::text::CharsetRecog_mbcs {
protected:
private:
public:
	static std::shared_ptr<int[]> commonChars;
	static void static_cinit();
	CharsetRecog_mbcs_S_CharsetRecog_big5();
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<android::icu::text::CharsetMatch> virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det);
	bool virtual nextChar(std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_iteratedChar> it,std::shared_ptr<android::icu::text::CharsetDetector> det);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_big5::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsetRecog_mbcs_S_CharsetRecog_big5(){
	}

}; // class CharsetRecog_mbcs_S_CharsetRecog_big5
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_big5__

