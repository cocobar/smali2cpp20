#ifndef __android_icu_impl_UnicodeRegex_S_1__
#define __android_icu_impl_UnicodeRegex_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeRegex$1.smali
#include "java2ctype.h"
#include "android.icu.impl.UnicodeRegex.h"
#include "java.lang.Object.h"
#include "java.util.Comparator.h"

namespace android::icu::impl{
class UnicodeRegex_S_1 : public java::util::Comparator<java::lang::Object> {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::UnicodeRegex> this_S_0;
	UnicodeRegex_S_1(std::shared_ptr<android::icu::impl::UnicodeRegex> this_S_0);
	int virtual compare(std::shared_ptr<java::lang::Object> obj0,std::shared_ptr<java::lang::Object> obj1);
public:
	virtual ~UnicodeRegex_S_1(){
	}

}; // class UnicodeRegex_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_UnicodeRegex_S_1__

