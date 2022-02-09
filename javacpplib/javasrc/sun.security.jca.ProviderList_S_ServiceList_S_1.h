#ifndef __sun_security_jca_ProviderList_S_ServiceList_S_1__
#define __sun_security_jca_ProviderList_S_ServiceList_S_1__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$ServiceList$1.smali
#include "java2ctype.h"
#include "java.security.Provider_S_Service.h"
#include "java.util.Iterator.h"
#include "sun.security.jca.ProviderList_S_ServiceList.h"

namespace sun::security::jca{
class ProviderList_S_ServiceList_S_1 : public java::util::Iterator<java::security::Provider_S_Service> {
protected:
private:
public:
	int index;
	std::shared_ptr<sun::security::jca::ProviderList_S_ServiceList> this_S_1;
	ProviderList_S_ServiceList_S_1(std::shared_ptr<sun::security::jca::ProviderList_S_ServiceList> this_S_1);
	bool virtual hasNext();
	std::shared_ptr<java::security::Provider_S_Service> virtual next();
	void virtual remove();
public:
	virtual ~ProviderList_S_ServiceList_S_1(){
	}

}; // class ProviderList_S_ServiceList_S_1
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderList_S_ServiceList_S_1__

