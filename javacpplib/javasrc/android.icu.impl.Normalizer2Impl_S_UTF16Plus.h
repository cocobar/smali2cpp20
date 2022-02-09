#ifndef __android_icu_impl_Normalizer2Impl_S_UTF16Plus__
#define __android_icu_impl_Normalizer2Impl_S_UTF16Plus__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Normalizer2Impl$UTF16Plus.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class Normalizer2Impl_S_UTF16Plus : public java::lang::Object {
protected:
private:
public:
	Normalizer2Impl_S_UTF16Plus();
	static bool equal(std::shared_ptr<java::lang::CharSequence> s1,int start1,int limit1,std::shared_ptr<java::lang::CharSequence> s2,int start2,int limit2);
	static bool equal(std::shared_ptr<java::lang::CharSequence> s1,std::shared_ptr<java::lang::CharSequence> s2);
	static bool isSurrogateLead(int c);
public:
	virtual ~Normalizer2Impl_S_UTF16Plus(){
	}

}; // class Normalizer2Impl_S_UTF16Plus
}; // namespace android::icu::impl

#endif //__android_icu_impl_Normalizer2Impl_S_UTF16Plus__

