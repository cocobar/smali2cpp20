#ifndef __android_icu_impl_ICUResourceBundle_S_4__
#define __android_icu_impl_ICUResourceBundle_S_4__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$4.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_Loader.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundle_S_4 : public android::icu::impl::ICUResourceBundle_S_Loader {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_baseName;
	std::shared_ptr<java::lang::String> val_S_defaultID;
	std::shared_ptr<java::lang::String> val_S_fullName;
	std::shared_ptr<java::lang::String> val_S_localeID;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> val_S_openType;
	std::shared_ptr<java::lang::ClassLoader> val_S_root;
	ICUResourceBundle_S_4(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::ClassLoader> var3,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> var4,std::shared_ptr<java::lang::String> var5);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual load();
public:
	virtual ~ICUResourceBundle_S_4(){
	}

}; // class ICUResourceBundle_S_4
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle_S_4__

