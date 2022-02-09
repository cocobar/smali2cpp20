#ifndef __sun_security_jca_ProviderList_S_3__
#define __sun_security_jca_ProviderList_S_3__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$3.smali
#include "java2ctype.h"
#include "java.security.PrivilegedAction.h"
#include "sun.security.jca.ProviderList.h"

namespace sun::security::jca{
class ProviderList_S_3 : public java::security::PrivilegedAction<sun::security::jca::ProviderList> {
protected:
private:
public:
	ProviderList_S_3();
	std::shared_ptr<sun::security::jca::ProviderList> virtual run();
public:
	virtual ~ProviderList_S_3(){
	}

}; // class ProviderList_S_3
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderList_S_3__

