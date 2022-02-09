#ifndef __android_util_MutableInt__
#define __android_util_MutableInt__
// H L:\smali2cpp20\x64\Release\out\android\util\MutableInt.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::util{
class MutableInt : public java::lang::Object {
protected:
private:
public:
	int value;
	MutableInt(int value);
public:
	virtual ~MutableInt(){
	}

}; // class MutableInt
}; // namespace android::util

#endif //__android_util_MutableInt__

