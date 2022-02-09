#ifndef __sun_security_jca_GetInstance_S_Instance__
#define __sun_security_jca_GetInstance_S_Instance__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\GetInstance$Instance.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.Provider.h"

namespace sun::security::jca{
class GetInstance_S_Instance : public java::lang::Object {
protected:
private:
	GetInstance_S_Instance(std::shared_ptr<java::security::Provider> provider,std::shared_ptr<java::lang::Object> impl);
public:
	std::shared_ptr<java::lang::Object> impl;
	std::shared_ptr<java::security::Provider> provider;
	GetInstance_S_Instance(std::shared_ptr<java::security::Provider> provider,std::shared_ptr<java::lang::Object> impl,std::shared_ptr<sun::security::jca::GetInstance_S_Instance> _this2);
	std::shared_ptr<java::lang::Object> virtual toArray();
public:
	virtual ~GetInstance_S_Instance(){
	}

}; // class GetInstance_S_Instance
}; // namespace sun::security::jca

#endif //__sun_security_jca_GetInstance_S_Instance__

