#ifndef __android_util_MutableShort__
#define __android_util_MutableShort__
// H L:\smali2cpp20\x64\Release\out\android\util\MutableShort.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::util{
class MutableShort : public java::lang::Object {
protected:
private:
public:
	short value;
	MutableShort(short value);
public:
	virtual ~MutableShort(){
	}

}; // class MutableShort
}; // namespace android::util

#endif //__android_util_MutableShort__

