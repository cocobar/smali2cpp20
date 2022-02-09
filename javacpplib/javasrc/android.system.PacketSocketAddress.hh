#ifndef __android_system_PacketSocketAddress__
#define __android_system_PacketSocketAddress__
// H L:\smali2cpp20\x64\Release\out\android\system\PacketSocketAddress.smali
#include "java2ctype.h"
#include "java.net.SocketAddress.hh"

namespace android::system{
class PacketSocketAddress : public java::net::SocketAddress {
public:
	PacketSocketAddress();
	virtual ~PacketSocketAddress();

}; // class PacketSocketAddress
}; // namespace android::system

#endif //__android_system_PacketSocketAddress__

