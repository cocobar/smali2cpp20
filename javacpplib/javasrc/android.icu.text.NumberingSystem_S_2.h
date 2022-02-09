#ifndef __android_icu_text_NumberingSystem_S_2__
#define __android_icu_text_NumberingSystem_S_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberingSystem$2.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.text.NumberingSystem.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"

namespace android::icu::text{
class NumberingSystem_S_2 : public android::icu::impl::SoftCache<java::lang::String,android::icu::text::NumberingSystem,java::lang::Void> {
protected:
	std::shared_ptr<android::icu::text::NumberingSystem> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::Void> unused);
private:
public:
	NumberingSystem_S_2();
public:
	virtual ~NumberingSystem_S_2(){
	}

}; // class NumberingSystem_S_2
}; // namespace android::icu::text

#endif //__android_icu_text_NumberingSystem_S_2__

