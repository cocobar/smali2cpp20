#ifndef __android_system_StructUtsname__
#define __android_system_StructUtsname__
// H L:\smali2cpp20\x64\Release\out\android\system\StructUtsname.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructUtsname : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> machine;
	std::shared_ptr<java::lang::String> nodename;
	std::shared_ptr<java::lang::String> release;
	std::shared_ptr<java::lang::String> sysname;
	std::shared_ptr<java::lang::String> version;
	StructUtsname(std::shared_ptr<java::lang::String> sysname,std::shared_ptr<java::lang::String> nodename,std::shared_ptr<java::lang::String> release,std::shared_ptr<java::lang::String> version,std::shared_ptr<java::lang::String> machine);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructUtsname(){
	}

}; // class StructUtsname
}; // namespace android::system

#endif //__android_system_StructUtsname__

