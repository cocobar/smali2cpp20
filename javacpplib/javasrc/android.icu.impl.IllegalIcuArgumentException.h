#ifndef __android_icu_impl_IllegalIcuArgumentException__
#define __android_icu_impl_IllegalIcuArgumentException__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\IllegalIcuArgumentException.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace android::icu::impl{
class IllegalIcuArgumentException : public java::lang::IllegalArgumentException {
protected:
private:
	static long long serialVersionUID;
public:
	IllegalIcuArgumentException(std::shared_ptr<java::lang::String> errorMessage);
	IllegalIcuArgumentException(std::shared_ptr<java::lang::String> errorMessage,std::shared_ptr<java::lang::Throwable> cause);
	IllegalIcuArgumentException(std::shared_ptr<java::lang::Throwable> cause);
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> virtual initCause(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~IllegalIcuArgumentException(){
	}

}; // class IllegalIcuArgumentException
}; // namespace android::icu::impl

#endif //__android_icu_impl_IllegalIcuArgumentException__

