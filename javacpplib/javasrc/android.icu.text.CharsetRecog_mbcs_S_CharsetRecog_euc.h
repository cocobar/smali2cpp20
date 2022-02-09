#ifndef __android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_euc__
#define __android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_euc__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_mbcs$CharsetRecog_euc.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetDetector.h"
#include "android.icu.text.CharsetRecog_mbcs_S_iteratedChar.h"
#include "android.icu.text.CharsetRecog_mbcs.h"

namespace android::icu::text{
class CharsetRecog_mbcs_S_CharsetRecog_euc : public android::icu::text::CharsetRecog_mbcs {
protected:
private:
public:
	CharsetRecog_mbcs_S_CharsetRecog_euc();
	bool virtual nextChar(std::shared_ptr<android::icu::text::CharsetRecog_mbcs_S_iteratedChar> it,std::shared_ptr<android::icu::text::CharsetDetector> det);
public:
	virtual ~CharsetRecog_mbcs_S_CharsetRecog_euc(){
	}

}; // class CharsetRecog_mbcs_S_CharsetRecog_euc
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_mbcs_S_CharsetRecog_euc__

