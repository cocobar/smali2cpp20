#ifndef __android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl__
#define __android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_IBM424_he_rtl.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_sbcs_S_CharsetRecog_IBM424_he.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl : public android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he {
protected:
private:
	static std::shared_ptr<int[]> ngrams;
public:
	static void static_cinit();
	CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<android::icu::text::CharsetMatch> virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl(){
	}

}; // class CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_IBM424_he_rtl__

