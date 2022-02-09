#ifndef __android_icu_impl_LocaleIDParser_S_1__
#define __android_icu_impl_LocaleIDParser_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleIDParser$1.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleIDParser.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"

namespace android::icu::impl{
class LocaleIDParser_S_1 : public java::util::Comparator<java::lang::String> {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::LocaleIDParser> this_S_0;
	LocaleIDParser_S_1(std::shared_ptr<android::icu::impl::LocaleIDParser> this_S_0);
	int virtual compare(std::shared_ptr<java::lang::String> lhs,std::shared_ptr<java::lang::String> rhs);
public:
	virtual ~LocaleIDParser_S_1(){
	}

}; // class LocaleIDParser_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleIDParser_S_1__

