#ifndef __android_icu_text_NumberingSystem_S_LocaleLookupData__
#define __android_icu_text_NumberingSystem_S_LocaleLookupData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberingSystem$LocaleLookupData.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class NumberingSystem_S_LocaleLookupData : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::lang::String> numbersKeyword;
	NumberingSystem_S_LocaleLookupData(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> numbersKeyword);
public:
	virtual ~NumberingSystem_S_LocaleLookupData(){
	}

}; // class NumberingSystem_S_LocaleLookupData
}; // namespace android::icu::text

#endif //__android_icu_text_NumberingSystem_S_LocaleLookupData__

