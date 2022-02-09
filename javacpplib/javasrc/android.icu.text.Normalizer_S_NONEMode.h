#ifndef __android_icu_text_Normalizer_S_NONEMode__
#define __android_icu_text_Normalizer_S_NONEMode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$NONEMode.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_Mode.h"
#include "android.icu.text.Normalizer2.h"

namespace android::icu::text{
class Normalizer_S_NONEMode : public android::icu::text::Normalizer_S_Mode {
protected:
	std::shared_ptr<android::icu::text::Normalizer2> virtual getNormalizer2(int options);
private:
	Normalizer_S_NONEMode();
public:
	Normalizer_S_NONEMode(std::shared_ptr<android::icu::text::Normalizer_S_NONEMode> _this0);
public:
	virtual ~Normalizer_S_NONEMode(){
	}

}; // class Normalizer_S_NONEMode
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer_S_NONEMode__

