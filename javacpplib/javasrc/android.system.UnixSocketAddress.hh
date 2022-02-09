#ifndef __android_system_UnixSocketAddress__
#define __android_system_UnixSocketAddress__
// H L:\smali2cpp20\x64\Release\out\android\system\UnixSocketAddress.smali
#include "java2ctype.h"
#include "java.net.SocketAddress.hh"

namespace android::system{
class UnixSocketAddress : public java::net::SocketAddress {
public:
	UnixSocketAddress();
	virtual ~UnixSocketAddress();

}; // class UnixSocketAddress
}; // namespace android::system

#endif //__android_system_UnixSocketAddress__

