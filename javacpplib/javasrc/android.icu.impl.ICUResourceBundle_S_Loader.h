#ifndef __android_icu_impl_ICUResourceBundle_S_Loader__
#define __android_icu_impl_ICUResourceBundle_S_Loader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$Loader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class ICUResourceBundle_S_Loader : public java::lang::Object {
protected:
private:
	ICUResourceBundle_S_Loader();
public:
	ICUResourceBundle_S_Loader(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_Loader> _this0);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> load() = 0;
public:
	virtual ~ICUResourceBundle_S_Loader(){
	}

}; // class ICUResourceBundle_S_Loader
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle_S_Loader__

