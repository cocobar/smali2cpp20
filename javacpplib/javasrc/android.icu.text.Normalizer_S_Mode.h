#ifndef __android_icu_text_Normalizer_S_Mode__
#define __android_icu_text_Normalizer_S_Mode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$Mode.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Normalizer_S_Mode : public java::lang::Object {
protected:
	Normalizer_S_Mode();
	std::shared_ptr<android::icu::text::Normalizer2> getNormalizer2(int var0);
private:
public:
public:
	virtual ~Normalizer_S_Mode(){
	}

}; // class Normalizer_S_Mode
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer_S_Mode__

