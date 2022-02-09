#ifndef __android_system_StructIcmpHdr__
#define __android_system_StructIcmpHdr__
// H L:\smali2cpp20\x64\Release\out\android\system\StructIcmpHdr.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::system{
class StructIcmpHdr : public java::lang::Object {
protected:
private:
	std::shared_ptr<unsigned char[]> packet;
	StructIcmpHdr();
public:
	static std::shared_ptr<android::system::StructIcmpHdr> IcmpEchoHdr(bool ipv4,int seq);
	unsigned char virtual getBytes();
public:
	virtual ~StructIcmpHdr(){
	}

}; // class StructIcmpHdr
}; // namespace android::system

#endif //__android_system_StructIcmpHdr__

