#ifndef __android_system_StructLinger__
#define __android_system_StructLinger__
// H L:\smali2cpp20\x64\Release\out\android\system\StructLinger.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructLinger : public java::lang::Object {
protected:
private:
public:
	int l_linger;
	int l_onoff;
	StructLinger(int l_onoff,int l_linger);
	bool virtual isOn();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructLinger(){
	}

}; // class StructLinger
}; // namespace android::system

#endif //__android_system_StructLinger__

