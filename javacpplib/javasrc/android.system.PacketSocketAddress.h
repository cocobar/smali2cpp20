#ifndef __android_system_PacketSocketAddress__
#define __android_system_PacketSocketAddress__
// H L:\smali2cpp20\x64\Release\out\android\system\PacketSocketAddress.smali
#include "java2ctype.h"
#include "java.net.SocketAddress.h"

namespace android::system{
class PacketSocketAddress : public java::net::SocketAddress {
protected:
private:
public:
	std::shared_ptr<unsigned char[]> sll_addr;
	short sll_hatype;
	int sll_ifindex;
	unsigned char sll_pkttype;
	short sll_protocol;
	PacketSocketAddress(int sll_ifindex,std::shared_ptr<unsigned char[]> sll_addr);
	PacketSocketAddress(short sll_protocol,int sll_ifindex);
	PacketSocketAddress(short sll_protocol,int sll_ifindex,short sll_hatype,unsigned char sll_pkttype,std::shared_ptr<unsigned char[]> sll_addr);
public:
	virtual ~PacketSocketAddress(){
	}

}; // class PacketSocketAddress
}; // namespace android::system

#endif //__android_system_PacketSocketAddress__

