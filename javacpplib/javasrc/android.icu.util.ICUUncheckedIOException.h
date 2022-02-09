#ifndef __android_icu_util_ICUUncheckedIOException__
#define __android_icu_util_ICUUncheckedIOException__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ICUUncheckedIOException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace android::icu::util{
class ICUUncheckedIOException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	ICUUncheckedIOException();
	ICUUncheckedIOException(std::shared_ptr<java::lang::String> message);
	ICUUncheckedIOException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	ICUUncheckedIOException(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~ICUUncheckedIOException(){
	}

}; // class ICUUncheckedIOException
}; // namespace android::icu::util

#endif //__android_icu_util_ICUUncheckedIOException__

