#ifndef __sun_security_jca_ProviderList_S_ServiceList__
#define __sun_security_jca_ProviderList_S_ServiceList__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$ServiceList.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.Provider_S_Service.h"
#include "java.util.AbstractList.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.jca.ProviderList.h"
#include "sun.security.jca.ServiceId.h"

namespace sun::security::jca{
class ProviderList_S_ServiceList : public java::util::AbstractList<java::security::Provider_S_Service> {
protected:
private:
	std::shared_ptr<java::lang::String> algorithm;
	std::shared_ptr<java::security::Provider_S_Service> firstService;
	std::shared_ptr<java::util::List<sun::security::jca::ServiceId>> ids;
	int providerIndex;
	std::shared_ptr<java::util::List<java::security::Provider_S_Service>> services;
	std::shared_ptr<java::lang::String> type;
	void virtual addService(std::shared_ptr<java::security::Provider_S_Service> s);
	std::shared_ptr<java::security::Provider_S_Service> virtual tryGet(int index);
public:
	std::shared_ptr<sun::security::jca::ProviderList> this_S_0;
	static std::shared_ptr<java::security::Provider_S_Service> _wrap0(std::shared_ptr<sun::security::jca::ProviderList_S_ServiceList> _this,int index);
	ProviderList_S_ServiceList(std::shared_ptr<sun::security::jca::ProviderList> this_S_0,std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm);
	ProviderList_S_ServiceList(std::shared_ptr<sun::security::jca::ProviderList> this_S_0,std::shared_ptr<java::util::List<sun::security::jca::ServiceId>> ids);
	std::shared_ptr<java::security::Provider_S_Service> virtual get(int index);
	bool virtual isEmpty();
	std::shared_ptr<java::util::Iterator<java::security::Provider_S_Service>> virtual iterator();
	int virtual size();
public:
	virtual ~ProviderList_S_ServiceList(){
	}

}; // class ProviderList_S_ServiceList
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderList_S_ServiceList__

