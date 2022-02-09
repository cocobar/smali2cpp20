#ifndef __android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp__
#define __android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_euc$CharsetRecog_euc_jp.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetMatch.h"
#include "android.icu.text.CharsetRecog_mbcs_S_CharsetRecog_euc.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp : public android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc {
protected:
private:
public:
	static std::shared_ptr<int[]> commonChars;
	static void static_cinit();
	CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp();
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<android::icu::text::CharsetMatch> virtual match(std::shared_ptr<android::icu::text::CharsetDetector> det);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp(){
	}

}; // class CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_euc_S_CharsetRecog_euc_jp__

