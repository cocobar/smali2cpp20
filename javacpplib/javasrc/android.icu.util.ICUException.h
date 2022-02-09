#ifndef __android_icu_util_ICUException__
#define __android_icu_util_ICUException__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ICUException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace android::icu::util{
class ICUException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	ICUException();
	ICUException(std::shared_ptr<java::lang::String> message);
	ICUException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	ICUException(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~ICUException(){
	}

}; // class ICUException
}; // namespace android::icu::util

#endif //__android_icu_util_ICUException__

