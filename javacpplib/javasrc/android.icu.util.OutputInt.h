#ifndef __android_icu_util_OutputInt__
#define __android_icu_util_OutputInt__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\OutputInt.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class OutputInt : public java::lang::Object {
protected:
private:
public:
	int value;
	OutputInt();
	OutputInt(int value);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~OutputInt(){
	}

}; // class OutputInt
}; // namespace android::icu::util

#endif //__android_icu_util_OutputInt__

