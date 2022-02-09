#ifndef __android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString__
#define __android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder$ConfusabledataBuilder$SPUString.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString : public java::lang::Object {
protected:
private:
public:
	int fCharOrStrTableIndex;
	std::shared_ptr<java::lang::String> fStr;
	SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString(std::shared_ptr<java::lang::String> s);
public:
	virtual ~SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString(){
	}

}; // class SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString__

