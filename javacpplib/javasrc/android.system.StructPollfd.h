#ifndef __android_system_StructPollfd__
#define __android_system_StructPollfd__
// H L:\smali2cpp20\x64\Release\out\android\system\StructPollfd.smali
#include "java2ctype.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::system{
class StructPollfd : public java::lang::Object {
protected:
private:
public:
	short events;
	std::shared_ptr<java::io::FileDescriptor> fd;
	short revents;
	std::shared_ptr<java::lang::Object> userData;
	StructPollfd();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructPollfd(){
	}

}; // class StructPollfd
}; // namespace android::system

#endif //__android_system_StructPollfd__

