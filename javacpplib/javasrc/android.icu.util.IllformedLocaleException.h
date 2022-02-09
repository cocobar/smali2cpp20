#ifndef __android_icu_util_IllformedLocaleException__
#define __android_icu_util_IllformedLocaleException__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\IllformedLocaleException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace android::icu::util{
class IllformedLocaleException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
	int _errIdx;
public:
	IllformedLocaleException();
	IllformedLocaleException(std::shared_ptr<java::lang::String> message);
	IllformedLocaleException(std::shared_ptr<java::lang::String> message,int errorIndex);
	int virtual getErrorIndex();
public:
	virtual ~IllformedLocaleException(){
	}

}; // class IllformedLocaleException
}; // namespace android::icu::util

#endif //__android_icu_util_IllformedLocaleException__

