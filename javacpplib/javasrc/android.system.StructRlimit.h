#ifndef __android_system_StructRlimit__
#define __android_system_StructRlimit__
// H L:\smali2cpp20\x64\Release\out\android\system\StructRlimit.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructRlimit : public java::lang::Object {
protected:
private:
public:
	long long rlim_cur;
	long long rlim_max;
	StructRlimit(long long rlim_cur,long long rlim_max);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructRlimit(){
	}

}; // class StructRlimit
}; // namespace android::system

#endif //__android_system_StructRlimit__

