#ifndef __android_icu_util_ICUCloneNotSupportedException__
#define __android_icu_util_ICUCloneNotSupportedException__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ICUCloneNotSupportedException.smali
#include "java2ctype.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace android::icu::util{
class ICUCloneNotSupportedException : public android::icu::util::ICUException {
protected:
private:
	static long long serialVersionUID;
public:
	ICUCloneNotSupportedException();
	ICUCloneNotSupportedException(std::shared_ptr<java::lang::String> message);
	ICUCloneNotSupportedException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	ICUCloneNotSupportedException(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~ICUCloneNotSupportedException(){
	}

}; // class ICUCloneNotSupportedException
}; // namespace android::icu::util

#endif //__android_icu_util_ICUCloneNotSupportedException__

