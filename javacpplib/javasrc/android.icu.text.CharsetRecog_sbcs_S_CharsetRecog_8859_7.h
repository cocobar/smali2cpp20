#ifndef __android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_8859_7__
#define __android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_8859_7__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$CharsetRecog_8859_7.smali
#include "java2ctype.h"
#include "android.icu.text.CharsetRecog_sbcs.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_sbcs_S_CharsetRecog_8859_7 : public android::icu::text::CharsetRecog_sbcs {
protected:
	static std::shared_ptr<unsigned char[]> byteMap;
private:
public:
	static void static_cinit();
	CharsetRecog_sbcs_S_CharsetRecog_8859_7();
	std::shared_ptr<java::lang::String> virtual getName();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CharsetRecog_sbcs_S_CharsetRecog_8859_7::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsetRecog_sbcs_S_CharsetRecog_8859_7(){
	}

}; // class CharsetRecog_sbcs_S_CharsetRecog_8859_7
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_sbcs_S_CharsetRecog_8859_7__

