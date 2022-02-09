#ifndef __sun_security_jca_ServiceId__
#define __sun_security_jca_ServiceId__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ServiceId.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::security::jca{
class ServiceId : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> algorithm;
	std::shared_ptr<java::lang::String> type;
	ServiceId(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm);
public:
	virtual ~ServiceId(){
	}

}; // class ServiceId
}; // namespace sun::security::jca

#endif //__sun_security_jca_ServiceId__

