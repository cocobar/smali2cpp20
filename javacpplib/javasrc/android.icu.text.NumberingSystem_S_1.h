#ifndef __android_icu_text_NumberingSystem_S_1__
#define __android_icu_text_NumberingSystem_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberingSystem$1.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.text.NumberingSystem_S_LocaleLookupData.h"
#include "android.icu.text.NumberingSystem.h"
#include "java.lang.String.h"

namespace android::icu::text{
class NumberingSystem_S_1 : public android::icu::impl::SoftCache<java::lang::String,android::icu::text::NumberingSystem,android::icu::text::NumberingSystem_S_LocaleLookupData> {
protected:
	std::shared_ptr<android::icu::text::NumberingSystem> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::text::NumberingSystem_S_LocaleLookupData> localeLookupData);
private:
public:
	NumberingSystem_S_1();
public:
	virtual ~NumberingSystem_S_1(){
	}

}; // class NumberingSystem_S_1
}; // namespace android::icu::text

#endif //__android_icu_text_NumberingSystem_S_1__

