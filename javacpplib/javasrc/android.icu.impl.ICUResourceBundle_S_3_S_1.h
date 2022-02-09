#ifndef __android_icu_impl_ICUResourceBundle_S_3_S_1__
#define __android_icu_impl_ICUResourceBundle_S_3_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$3$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_3.h"
#include "android.icu.impl.URLHandler_S_URLVisitor.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUResourceBundle_S_3_S_1 : public android::icu::impl::URLHandler_S_URLVisitor {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_3> this_S_1;
	std::shared_ptr<java::util::Set> val_S_names;
	ICUResourceBundle_S_3_S_1(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_3> this_S_1,std::shared_ptr<java::util::Set> var1);
	void virtual visit(std::shared_ptr<java::lang::String> s);
public:
	virtual ~ICUResourceBundle_S_3_S_1(){
	}

}; // class ICUResourceBundle_S_3_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle_S_3_S_1__

