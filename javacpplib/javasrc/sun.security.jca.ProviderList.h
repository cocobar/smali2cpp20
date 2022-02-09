#ifndef __sun_security_jca_ProviderList__
#define __sun_security_jca_ProviderList__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.Provider_S_Service.h"
#include "java.security.Provider.h"
#include "java.util.List.h"
#include "sun.security.jca.ProviderConfig.h"
#include "sun.security.jca.ServiceId.h"
#include "sun.security.util.Debug.h"

namespace sun::security::jca{
class ProviderList : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::security::Provider> EMPTY_PROVIDER;
	static std::shared_ptr<std::vector<java::security::Provider>> P0;
	static std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> PC0;
	bool allLoaded;
	std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> configs;
	std::shared_ptr<java::util::List<java::security::Provider>> userList;
	ProviderList();
	ProviderList(std::shared_ptr<std::vector<sun::security::jca::ProviderConfig>> configs,bool allLoaded);
	std::shared_ptr<sun::security::jca::ProviderConfig> virtual getProviderConfig(std::shared_ptr<java::lang::String> name);
	int virtual loadAll();
public:
	static std::shared_ptr<sun::security::jca::ProviderList> EMPTY;
	static std::shared_ptr<sun::security::util::Debug> debug;
	static std::shared_ptr<sun::security::jca::ProviderConfig> _get0(std::shared_ptr<sun::security::jca::ProviderList> _this);
	static void static_cinit();
	ProviderList(std::shared_ptr<sun::security::jca::ProviderList> _this0);
	static std::shared_ptr<sun::security::jca::ProviderList> add(std::shared_ptr<sun::security::jca::ProviderList> providerList,std::shared_ptr<java::security::Provider> p);
	static std::shared_ptr<sun::security::jca::ProviderList> fromSecurityProperties();
	static std::shared_ptr<sun::security::jca::ProviderList> insertAt(std::shared_ptr<sun::security::jca::ProviderList> providerList,std::shared_ptr<java::security::Provider> p,int cVar0);
	static std::shared_ptr<sun::security::jca::ProviderList> newList(std::shared_ptr<std::vector<java::security::Provider>> providers);
	static std::shared_ptr<sun::security::jca::ProviderList> remove(std::shared_ptr<sun::security::jca::ProviderList> providerList,std::shared_ptr<java::lang::String> name);
	int virtual getIndex(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<sun::security::jca::ProviderList> virtual getJarList(std::shared_ptr<std::vector<java::lang::String>> jarClassNames);
	std::shared_ptr<java::security::Provider> virtual getProvider(int index);
	std::shared_ptr<java::security::Provider> virtual getProvider(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::security::Provider_S_Service> virtual getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::List<java::security::Provider_S_Service>> virtual getServices(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm);
	std::shared_ptr<java::util::List<java::security::Provider_S_Service>> virtual getServices(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::util::List<java::lang::String>> algorithms);
	std::shared_ptr<java::util::List<java::security::Provider_S_Service>> virtual getServices(std::shared_ptr<java::util::List<sun::security::jca::ServiceId>> ids);
	std::shared_ptr<java::util::List<java::security::Provider>> virtual providers();
	std::shared_ptr<sun::security::jca::ProviderList> virtual removeInvalid();
	int virtual size();
	std::shared_ptr<java::security::Provider> virtual toArray();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::jca::ProviderList::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ProviderList(){
	}

}; // class ProviderList
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderList__

