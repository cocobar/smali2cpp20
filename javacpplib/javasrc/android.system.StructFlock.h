#ifndef __android_system_StructFlock__
#define __android_system_StructFlock__
// H L:\smali2cpp20\x64\Release\out\android\system\StructFlock.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructFlock : public java::lang::Object {
protected:
private:
public:
	long long l_len;
	int l_pid;
	long long l_start;
	short l_type;
	short l_whence;
	StructFlock();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructFlock(){
	}

}; // class StructFlock
}; // namespace android::system

#endif //__android_system_StructFlock__

