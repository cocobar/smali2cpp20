#ifndef __android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_8859_2__
#define __android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_8859_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_2.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_NGramsPlusLang.h"
#include "android.icu.text.CharsetRecog_sbcs.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_sbcs_S_CharsetRecog_8859_2 : public android::icu::text::CharsetRecog_sbcs {
protected:
	static std::shared_ptr<unsigned char[]> byteMap;
private:
	static std::shared_ptr<std::vector<android::icu::text::CharsetRecog_sbcs_S_NGramsPlusLang>> ngrams_8859_2;
public:
	static void static_cinit();
	CharsetRecog_sbcs_S_CharsetRecog_8859_2();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<android::icu::text::CharsetMatch> virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_2::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsetRecog_sbcs_S_CharsetRecog_8859_2(){
	}

}; // class CharsetRecog_sbcs_S_CharsetRecog_8859_2
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_8859_2__

