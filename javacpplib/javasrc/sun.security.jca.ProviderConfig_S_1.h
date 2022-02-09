#ifndef __sun_security_jca_ProviderConfig_S_1__
#define __sun_security_jca_ProviderConfig_S_1__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderConfig$1.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.security.PrivilegedAction.h"
#include "sun.security.jca.ProviderConfig.h"

namespace sun::security::jca{
class ProviderConfig_S_1 : public java::security::PrivilegedAction<java::lang::Boolean> {
protected:
private:
public:
	std::shared_ptr<sun::security::jca::ProviderConfig> this_S_0;
	ProviderConfig_S_1(std::shared_ptr<sun::security::jca::ProviderConfig> this_S_0);
	std::shared_ptr<java::lang::Boolean> virtual run();
public:
	virtual ~ProviderConfig_S_1(){
	}

}; // class ProviderConfig_S_1
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderConfig_S_1__
