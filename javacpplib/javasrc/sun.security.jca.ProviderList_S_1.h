#ifndef __sun_security_jca_ProviderList_S_1__
#define __sun_security_jca_ProviderList_S_1__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.Provider_S_Service.h"
#include "java.security.Provider.h"

namespace sun::security::jca{
class ProviderList_S_1 : public java::security::Provider {
protected:
private:
	static long long serialVersionUID;
public:
	ProviderList_S_1(std::shared_ptr<java::lang::String> _S_anonymous0,double _S_anonymous1,std::shared_ptr<java::lang::String> _S_anonymous2);
	std::shared_ptr<java::security::Provider_S_Service> virtual getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm);
public:
	virtual ~ProviderList_S_1(){
	}

}; // class ProviderList_S_1
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderList_S_1__

