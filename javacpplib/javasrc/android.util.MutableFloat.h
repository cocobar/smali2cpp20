#ifndef __android_util_MutableFloat__
#define __android_util_MutableFloat__
// H L:\smali2cpp20\x64\Release\out\android\util\MutableFloat.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::util{
class MutableFloat : public java::lang::Object {
protected:
private:
public:
	float value;
	MutableFloat(float value);
public:
	virtual ~MutableFloat(){
	}

}; // class MutableFloat
}; // namespace android::util

#endif //__android_util_MutableFloat__

