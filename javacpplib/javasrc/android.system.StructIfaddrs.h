#ifndef __android_system_StructIfaddrs__
#define __android_system_StructIfaddrs__
// H L:\smali2cpp20\x64\Release\out\android\system\StructIfaddrs.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.InetAddress.h"

namespace android::system{
class StructIfaddrs : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<unsigned char[]> hwaddr;
	std::shared_ptr<java::net::InetAddress> ifa_addr;
	std::shared_ptr<java::net::InetAddress> ifa_broadaddr;
	int ifa_flags;
	std::shared_ptr<java::lang::String> ifa_name;
	std::shared_ptr<java::net::InetAddress> ifa_netmask;
	StructIfaddrs(std::shared_ptr<java::lang::String> ifa_name,int ifa_flags,std::shared_ptr<java::net::InetAddress> ifa_addr,std::shared_ptr<java::net::InetAddress> ifa_netmask,std::shared_ptr<java::net::InetAddress> ifa_broadaddr,std::shared_ptr<unsigned char[]> hwaddr);
public:
	virtual ~StructIfaddrs(){
	}

}; // class StructIfaddrs
}; // namespace android::system

#endif //__android_system_StructIfaddrs__

