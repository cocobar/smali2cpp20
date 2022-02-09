#ifndef __android_system_StructCapUserData__
#define __android_system_StructCapUserData__
// H L:\smali2cpp20\x64\Release\out\android\system\StructCapUserData.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructCapUserData : public java::lang::Object {
protected:
private:
public:
	int effective;
	int inheritable;
	int permitted;
	StructCapUserData(int effective,int permitted,int inheritable);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructCapUserData(){
	}

}; // class StructCapUserData
}; // namespace android::system

#endif //__android_system_StructCapUserData__

