#ifndef __android_icu_text_ArabicShapingException__
#define __android_icu_text_ArabicShapingException__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ArabicShapingException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"

namespace android::icu::text{
class ArabicShapingException : public java::lang::Exception {
protected:
private:
public:
	static long long serialVersionUID;
	ArabicShapingException(std::shared_ptr<java::lang::String> message);
public:
	virtual ~ArabicShapingException(){
	}

}; // class ArabicShapingException
}; // namespace android::icu::text

#endif //__android_icu_text_ArabicShapingException__

