#ifndef __sun_security_jca_ProviderConfig_S_2__
#define __sun_security_jca_ProviderConfig_S_2__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderConfig$2.smali
#include "java2ctype.h"
#include "java.security.PrivilegedAction.h"
#include "java.security.Provider.h"
#include "sun.security.jca.ProviderConfig.h"

namespace sun::security::jca{
class ProviderConfig_S_2 : public java::security::PrivilegedAction<java::security::Provider> {
protected:
private:
public:
	std::shared_ptr<sun::security::jca::ProviderConfig> this_S_0;
	ProviderConfig_S_2(std::shared_ptr<sun::security::jca::ProviderConfig> this_S_0);
	std::shared_ptr<java::security::Provider> virtual run();
public:
	virtual ~ProviderConfig_S_2(){
	}

}; // class ProviderConfig_S_2
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderConfig_S_2__

