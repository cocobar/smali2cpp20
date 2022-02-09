#ifndef __android_icu_util_ICUException__
#define __android_icu_util_ICUException__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ICUException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.hh"

namespace android::icu::util{
class ICUException : public java::lang::RuntimeException {
public:
	ICUException();
	virtual ~ICUException();

}; // class ICUException
}; // namespace android::icu::util

#endif //__android_icu_util_ICUException__

