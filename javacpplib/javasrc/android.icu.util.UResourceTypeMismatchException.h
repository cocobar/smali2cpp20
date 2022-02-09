#ifndef __android_icu_util_UResourceTypeMismatchException__
#define __android_icu_util_UResourceTypeMismatchException__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\UResourceTypeMismatchException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace android::icu::util{
class UResourceTypeMismatchException : public java::lang::RuntimeException {
protected:
private:
public:
	static long long serialVersionUID;
	UResourceTypeMismatchException(std::shared_ptr<java::lang::String> msg);
public:
	virtual ~UResourceTypeMismatchException(){
	}

}; // class UResourceTypeMismatchException
}; // namespace android::icu::util

#endif //__android_icu_util_UResourceTypeMismatchException__

