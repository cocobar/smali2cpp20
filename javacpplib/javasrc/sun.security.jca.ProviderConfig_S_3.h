#ifndef __sun_security_jca_ProviderConfig_S_3__
#define __sun_security_jca_ProviderConfig_S_3__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderConfig$3.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace sun::security::jca{
class ProviderConfig_S_3 : public java::security::PrivilegedAction<java::lang::String> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_value;
	ProviderConfig_S_3(std::shared_ptr<java::lang::String> var0);
	std::shared_ptr<java::lang::String> virtual run();
public:
	virtual ~ProviderConfig_S_3(){
	}

}; // class ProviderConfig_S_3
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderConfig_S_3__

