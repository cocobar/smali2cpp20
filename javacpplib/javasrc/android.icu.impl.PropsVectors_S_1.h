#ifndef __android_icu_impl_PropsVectors_S_1__
#define __android_icu_impl_PropsVectors_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PropsVectors$1.smali
#include "java2ctype.h"
#include "android.icu.impl.PropsVectors.h"
#include "java.lang.Integer.h"
#include "java.util.Comparator.h"

namespace android::icu::impl{
class PropsVectors_S_1 : public java::util::Comparator<java::lang::Integer> {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::PropsVectors> this_S_0;
	PropsVectors_S_1(std::shared_ptr<android::icu::impl::PropsVectors> this_S_0);
	int virtual compare(std::shared_ptr<java::lang::Integer> o1,std::shared_ptr<java::lang::Integer> o2);
public:
	virtual ~PropsVectors_S_1(){
	}

}; // class PropsVectors_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_PropsVectors_S_1__

