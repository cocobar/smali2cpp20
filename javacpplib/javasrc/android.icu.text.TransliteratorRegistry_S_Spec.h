#ifndef __android_icu_text_TransliteratorRegistry_S_Spec__
#define __android_icu_text_TransliteratorRegistry_S_Spec__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$Spec.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ResourceBundle.h"

namespace android::icu::text{
class TransliteratorRegistry_S_Spec : public java::lang::Object {
protected:
private:
	bool isNextLocale;
	bool isSpecLocale;
	std::shared_ptr<java::lang::String> nextSpec;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> res;
	std::shared_ptr<java::lang::String> scriptName;
	std::shared_ptr<java::lang::String> spec;
	std::shared_ptr<java::lang::String> top;
	void virtual setupNext();
public:
	TransliteratorRegistry_S_Spec(std::shared_ptr<java::lang::String> theSpec);
	std::shared_ptr<java::lang::String> virtual get();
	std::shared_ptr<java::util::ResourceBundle> virtual getBundle();
	std::shared_ptr<java::lang::String> virtual getTop();
	bool virtual hasFallback();
	bool virtual isLocale();
	std::shared_ptr<java::lang::String> virtual next();
	void virtual reset();
public:
	virtual ~TransliteratorRegistry_S_Spec(){
	}

}; // class TransliteratorRegistry_S_Spec
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorRegistry_S_Spec__

