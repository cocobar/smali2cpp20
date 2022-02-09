#ifndef __sun_security_jca_Providers__
#define __sun_security_jca_Providers__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\Providers.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ThreadLocal.h"
#include "java.security.Provider.h"
#include "sun.security.jca.ProviderList.h"

namespace sun::security::jca{
class Providers : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> BACKUP_PROVIDER_CLASSNAME;
	static std::shared_ptr<std::vector<java::lang::String>> jarVerificationProviders;
	static std::shared_ptr<sun::security::jca::ProviderList> providerList;
	static std::shared_ptr<java::lang::ThreadLocal<sun::security::jca::ProviderList>> threadLists;
	static int threadListsUsed;
	Providers();
	static void changeThreadProviderList(std::shared_ptr<sun::security::jca::ProviderList> list);
	static std::shared_ptr<sun::security::jca::ProviderList> getSystemProviderList();
	static void setSystemProviderList(std::shared_ptr<sun::security::jca::ProviderList> list);
public:
	static void static_cinit();
	static std::shared_ptr<sun::security::jca::ProviderList> beginThreadProviderList(std::shared_ptr<sun::security::jca::ProviderList> list);
	static void endThreadProviderList(std::shared_ptr<sun::security::jca::ProviderList> list);
	static std::shared_ptr<sun::security::jca::ProviderList> getFullProviderList();
	static std::shared_ptr<sun::security::jca::ProviderList> getProviderList();
	static std::shared_ptr<java::security::Provider> getSunProvider();
	static std::shared_ptr<sun::security::jca::ProviderList> getThreadProviderList();
	static void setProviderList(std::shared_ptr<sun::security::jca::ProviderList> newList);
	static std::shared_ptr<java::lang::Object> startJarVerification();
	static void stopJarVerification(std::shared_ptr<java::lang::Object> obj);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::jca::Providers::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Providers(){
	}

}; // class Providers
}; // namespace sun::security::jca

#endif //__sun_security_jca_Providers__

