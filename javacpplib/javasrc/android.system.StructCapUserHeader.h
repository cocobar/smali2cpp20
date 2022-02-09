#ifndef __android_system_StructCapUserHeader__
#define __android_system_StructCapUserHeader__
// H L:\smali2cpp20\x64\Release\out\android\system\StructCapUserHeader.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructCapUserHeader : public java::lang::Object {
protected:
private:
public:
	int pid;
	int version;
	StructCapUserHeader(int version,int pid);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructCapUserHeader(){
	}

}; // class StructCapUserHeader
}; // namespace android::system

#endif //__android_system_StructCapUserHeader__

