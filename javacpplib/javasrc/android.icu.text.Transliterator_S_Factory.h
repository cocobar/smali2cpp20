#ifndef __android_icu_text_Transliterator_S_Factory__
#define __android_icu_text_Transliterator_S_Factory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Transliterator$Factory.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class Transliterator_S_Factory : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::text::Transliterator> getInstance(std::shared_ptr<java::lang::String> var0) = 0;
	Transliterator_S_Factory(){ };
	virtual ~Transliterator_S_Factory(){ };

}; // class Transliterator_S_Factory
}; // namespace android::icu::text

#endif //__android_icu_text_Transliterator_S_Factory__

