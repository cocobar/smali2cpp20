#ifndef __android_icu_text_Normalizer_S_ModeImpl__
#define __android_icu_text_Normalizer_S_ModeImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$ModeImpl.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Normalizer_S_ModeImpl : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::Normalizer2> normalizer2;
	Normalizer_S_ModeImpl(std::shared_ptr<android::icu::text::Normalizer2> n2);
public:
	static std::shared_ptr<android::icu::text::Normalizer2> _get0(std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> _this);
	Normalizer_S_ModeImpl(std::shared_ptr<android::icu::text::Normalizer2> n2,std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> _this1);
public:
	virtual ~Normalizer_S_ModeImpl(){
	}

}; // class Normalizer_S_ModeImpl
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer_S_ModeImpl__

