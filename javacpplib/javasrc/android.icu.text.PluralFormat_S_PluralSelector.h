#ifndef __android_icu_text_PluralFormat_S_PluralSelector__
#define __android_icu_text_PluralFormat_S_PluralSelector__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralFormat$PluralSelector.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralFormat_S_PluralSelector : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> select(std::shared_ptr<java::lang::Object> var0,double var1) = 0;
	PluralFormat_S_PluralSelector(){ };
	virtual ~PluralFormat_S_PluralSelector(){ };

}; // class PluralFormat_S_PluralSelector
}; // namespace android::icu::text

#endif //__android_icu_text_PluralFormat_S_PluralSelector__

