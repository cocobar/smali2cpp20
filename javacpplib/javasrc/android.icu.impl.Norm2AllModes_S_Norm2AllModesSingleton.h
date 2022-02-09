#ifndef __android_icu_impl_Norm2AllModes_S_Norm2AllModesSingleton__
#define __android_icu_impl_Norm2AllModes_S_Norm2AllModesSingleton__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$Norm2AllModesSingleton.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class Norm2AllModes_S_Norm2AllModesSingleton : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::impl::Norm2AllModes> allModes;
	std::shared_ptr<java::lang::RuntimeException> exception;
	Norm2AllModes_S_Norm2AllModesSingleton(std::shared_ptr<java::lang::String> name);
public:
	static std::shared_ptr<android::icu::impl::Norm2AllModes> _get0(std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> _this);
	static std::shared_ptr<java::lang::RuntimeException> _get1(std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> _this);
	Norm2AllModes_S_Norm2AllModesSingleton(std::shared_ptr<java::lang::String> name,std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> _this1);
public:
	virtual ~Norm2AllModes_S_Norm2AllModesSingleton(){
	}

}; // class Norm2AllModes_S_Norm2AllModesSingleton
}; // namespace android::icu::impl

#endif //__android_icu_impl_Norm2AllModes_S_Norm2AllModesSingleton__

