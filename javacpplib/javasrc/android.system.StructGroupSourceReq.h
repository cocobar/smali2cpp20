#ifndef __android_system_StructGroupSourceReq__
#define __android_system_StructGroupSourceReq__
// H L:\smali2cpp20\x64\Release\out\android\system\StructGroupSourceReq.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.InetAddress.h"

namespace android::system{
class StructGroupSourceReq : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::net::InetAddress> gsr_group;
	int gsr_interface;
	std::shared_ptr<java::net::InetAddress> gsr_source;
	StructGroupSourceReq(int gsr_interface,std::shared_ptr<java::net::InetAddress> gsr_group,std::shared_ptr<java::net::InetAddress> gsr_source);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StructGroupSourceReq(){
	}

}; // class StructGroupSourceReq
}; // namespace android::system

#endif //__android_system_StructGroupSourceReq__

