#ifndef __android_icu_impl_InvalidFormatException__
#define __android_icu_impl_InvalidFormatException__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\InvalidFormatException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace android::icu::impl{
class InvalidFormatException : public java::lang::Exception {
protected:
private:
public:
	static long long serialVersionUID;
	InvalidFormatException();
	InvalidFormatException(std::shared_ptr<java::lang::String> message);
	InvalidFormatException(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~InvalidFormatException(){
	}

}; // class InvalidFormatException
}; // namespace android::icu::impl

#endif //__android_icu_impl_InvalidFormatException__

