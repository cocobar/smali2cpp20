#ifndef __android_system_StructUcred__
#define __android_system_StructUcred__
// H L:\smali2cpp20\x64\Release\out\android\system\StructUcred.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructUcred : public java::lang::Object {
protected:
private:
public:
	int gid;
	int pid;
	int uid;
	StructUcred(int pid,int uid,int gid);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructUcred(){
	}

}; // class StructUcred
}; // namespace android::system

#endif //__android_system_StructUcred__

