#ifndef __android_icu_text_Normalizer_S_CmpEquivLevel__
#define __android_icu_text_Normalizer_S_CmpEquivLevel__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$CmpEquivLevel.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Normalizer_S_CmpEquivLevel : public java::lang::Object {
protected:
private:
	Normalizer_S_CmpEquivLevel();
public:
	std::shared_ptr<java::lang::CharSequence> cs;
	int s;
	Normalizer_S_CmpEquivLevel(std::shared_ptr<android::icu::text::Normalizer_S_CmpEquivLevel> _this0);
public:
	virtual ~Normalizer_S_CmpEquivLevel(){
	}

}; // class Normalizer_S_CmpEquivLevel
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer_S_CmpEquivLevel__

