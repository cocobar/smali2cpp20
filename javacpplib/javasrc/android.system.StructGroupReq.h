#ifndef __android_system_StructGroupReq__
#define __android_system_StructGroupReq__
// H L:\smali2cpp20\x64\Release\out\android\system\StructGroupReq.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.InetAddress.h"

namespace android::system{
class StructGroupReq : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::net::InetAddress> gr_group;
	int gr_interface;
	StructGroupReq(int gr_interface,std::shared_ptr<java::net::InetAddress> gr_group);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructGroupReq(){
	}

}; // class StructGroupReq
}; // namespace android::system

#endif //__android_system_StructGroupReq__

