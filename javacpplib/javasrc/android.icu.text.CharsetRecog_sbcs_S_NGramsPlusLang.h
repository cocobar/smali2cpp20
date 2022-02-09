#ifndef __android_icu_text_CharsetRecog_sbcs_S_NGramsPlusLang__
#define __android_icu_text_CharsetRecog_sbcs_S_NGramsPlusLang__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsetRecog_sbcs$NGramsPlusLang.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CharsetRecog_sbcs_S_NGramsPlusLang : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> fLang;
	std::shared_ptr<int[]> fNGrams;
	CharsetRecog_sbcs_S_NGramsPlusLang(std::shared_ptr<java::lang::String> la,std::shared_ptr<int[]> ng);
public:
	virtual ~CharsetRecog_sbcs_S_NGramsPlusLang(){
	}

}; // class CharsetRecog_sbcs_S_NGramsPlusLang
}; // namespace android::icu::text

#endif //__android_icu_text_CharsetRecog_sbcs_S_NGramsPlusLang__

