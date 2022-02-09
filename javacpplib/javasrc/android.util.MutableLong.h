#ifndef __android_util_MutableLong__
#define __android_util_MutableLong__
// H L:\smali2cpp20\x64\Release\out\android\util\MutableLong.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::util{
class MutableLong : public java::lang::Object {
protected:
private:
public:
	long long value;
	MutableLong(long long value);
public:
	virtual ~MutableLong(){
	}

}; // class MutableLong
}; // namespace android::util

#endif //__android_util_MutableLong__

