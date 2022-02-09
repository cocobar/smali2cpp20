#ifndef __android_system_NetlinkSocketAddress__
#define __android_system_NetlinkSocketAddress__
// H L:\smali2cpp20\x64\Release\out\android\system\NetlinkSocketAddress.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.net.SocketAddress.h"

namespace android::system{
class NetlinkSocketAddress : public java::net::SocketAddress {
protected:
private:
	int nlGroupsMask;
	int nlPortId;
public:
	NetlinkSocketAddress();
	NetlinkSocketAddress(int nlPortId);
	NetlinkSocketAddress(int nlPortId,int nlGroupsMask);
	int virtual getGroupsMask();
	int virtual getPortId();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~NetlinkSocketAddress(){
	}

}; // class NetlinkSocketAddress
}; // namespace android::system

#endif //__android_system_NetlinkSocketAddress__

