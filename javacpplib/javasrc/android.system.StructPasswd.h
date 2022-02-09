#ifndef __android_system_StructPasswd__
#define __android_system_StructPasswd__
// H L:\smali2cpp20\x64\Release\out\android\system\StructPasswd.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructPasswd : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> pw_dir;
	int pw_gid;
	std::shared_ptr<java::lang::String> pw_name;
	std::shared_ptr<java::lang::String> pw_shell;
	int pw_uid;
	StructPasswd(std::shared_ptr<java::lang::String> pw_name,int pw_uid,int pw_gid,std::shared_ptr<java::lang::String> pw_dir,std::shared_ptr<java::lang::String> pw_shell);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructPasswd(){
	}

}; // class StructPasswd
}; // namespace android::system

#endif //__android_system_StructPasswd__

