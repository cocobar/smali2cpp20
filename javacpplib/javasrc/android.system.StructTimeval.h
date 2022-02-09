#ifndef __android_system_StructTimeval__
#define __android_system_StructTimeval__
// H L:\smali2cpp20\x64\Release\out\android\system\StructTimeval.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructTimeval : public java::lang::Object {
protected:
private:
	StructTimeval(long long tv_sec,long long tv_usec);
public:
	long long tv_sec;
	long long tv_usec;
	static std::shared_ptr<android::system::StructTimeval> fromMillis(long long millis);
	long long virtual toMillis();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructTimeval(){
	}

}; // class StructTimeval
}; // namespace android::system

#endif //__android_system_StructTimeval__

