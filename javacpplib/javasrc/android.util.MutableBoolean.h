#ifndef __android_util_MutableBoolean__
#define __android_util_MutableBoolean__
// H L:\smali2cpp20\x64\Release\out\android\util\MutableBoolean.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::util{
class MutableBoolean : public java::lang::Object {
protected:
private:
public:
	bool value;
	MutableBoolean(bool value);
public:
	virtual ~MutableBoolean(){
	}

}; // class MutableBoolean
}; // namespace android::util

#endif //__android_util_MutableBoolean__

