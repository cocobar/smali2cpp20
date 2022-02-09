#ifndef __android_util_MutableChar__
#define __android_util_MutableChar__
// H L:\smali2cpp20\x64\Release\out\android\util\MutableChar.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::util{
class MutableChar : public java::lang::Object {
protected:
private:
public:
	char value;
	MutableChar(char value);
public:
	virtual ~MutableChar(){
	}

}; // class MutableChar
}; // namespace android::util

#endif //__android_util_MutableChar__

