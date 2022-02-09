#ifndef __android_util_MutableByte__
#define __android_util_MutableByte__
// H L:\smali2cpp20\x64\Release\out\android\util\MutableByte.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::util{
class MutableByte : public java::lang::Object {
protected:
private:
public:
	unsigned char value;
	MutableByte(unsigned char value);
public:
	virtual ~MutableByte(){
	}

}; // class MutableByte
}; // namespace android::util

#endif //__android_util_MutableByte__

