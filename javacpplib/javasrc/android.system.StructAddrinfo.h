#ifndef __android_system_StructAddrinfo__
#define __android_system_StructAddrinfo__
// H L:\smali2cpp20\x64\Release\out\android\system\StructAddrinfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.InetAddress.h"

namespace android::system{
class StructAddrinfo : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::net::InetAddress> ai_addr;
	int ai_family;
	int ai_flags;
	std::shared_ptr<android::system::StructAddrinfo> ai_next;
	int ai_protocol;
	int ai_socktype;
	StructAddrinfo();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructAddrinfo(){
	}

}; // class StructAddrinfo
}; // namespace android::system

#endif //__android_system_StructAddrinfo__

