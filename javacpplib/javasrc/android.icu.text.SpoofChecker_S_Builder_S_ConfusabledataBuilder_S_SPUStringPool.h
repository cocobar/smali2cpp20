#ifndef __android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool__
#define __android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder$ConfusabledataBuilder$SPUStringPool.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Hashtable.h"
#include "java.util.Vector.h"

namespace android::icu::text{
class SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Hashtable<java::lang::String,android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString>> fHash;
	std::shared_ptr<java::util::Vector<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString>> fVec;
public:
	SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool();
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> virtual addString(std::shared_ptr<java::lang::String> src);
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> virtual getByIndex(int index);
	int virtual size();
	void virtual sort();
public:
	virtual ~SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool(){
	}

}; // class SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool__

