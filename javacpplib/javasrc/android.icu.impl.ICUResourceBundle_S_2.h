#ifndef __android_icu_impl_ICUResourceBundle_S_2__
#define __android_icu_impl_ICUResourceBundle_S_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$2.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_AvailEntry.h"
#include "android.icu.impl.SoftCache.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundle_S_2 : public android::icu::impl::SoftCache<java::lang::String,android::icu::impl::ICUResourceBundle_S_AvailEntry,java::lang::ClassLoader> {
protected:
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_AvailEntry> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::ClassLoader> loader);
private:
public:
	ICUResourceBundle_S_2();
public:
	virtual ~ICUResourceBundle_S_2(){
	}

}; // class ICUResourceBundle_S_2
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle_S_2__

