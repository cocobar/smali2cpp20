#ifndef __sun_security_jca_ProviderConfig__
#define __sun_security_jca_ProviderConfig__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderConfig.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.Provider.h"
#include "sun.security.util.Debug.h"

namespace sun::security::jca{
class ProviderConfig : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::Class>> CL_STRING;
	static int MAX_LOAD_TRIES;
	static std::shared_ptr<java::lang::String> P11_SOL_ARG;
	static std::shared_ptr<java::lang::String> P11_SOL_NAME;
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<java::lang::String> argument;
	std::shared_ptr<java::lang::String> className;
	bool isLoading;
	std::shared_ptr<java::security::Provider> provider;
	int tries;
	void virtual checkSunPKCS11Solaris();
	void virtual disableLoad();
	std::shared_ptr<java::security::Provider> virtual doLoadProvider();
	static std::shared_ptr<java::lang::String> expand(std::shared_ptr<java::lang::String> value);
	bool virtual hasArgument();
	std::shared_ptr<java::security::Provider> virtual initProvider(std::shared_ptr<java::lang::String> className,std::shared_ptr<java::lang::ClassLoader> cl);
	bool virtual shouldLoad();
public:
	static std::shared_ptr<java::lang::String> _get0(std::shared_ptr<sun::security::jca::ProviderConfig> _this);
	static std::shared_ptr<sun::security::util::Debug> _get1();
	static std::shared_ptr<java::security::Provider> _wrap0(std::shared_ptr<sun::security::jca::ProviderConfig> _this,std::shared_ptr<java::lang::String> className,std::shared_ptr<java::lang::ClassLoader> cl);
	static void _wrap1(std::shared_ptr<sun::security::jca::ProviderConfig> _this);
	static void static_cinit();
	ProviderConfig(std::shared_ptr<java::lang::String> className);
	ProviderConfig(std::shared_ptr<java::lang::String> className,std::shared_ptr<java::lang::String> argument);
	ProviderConfig(std::shared_ptr<java::security::Provider> provider);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::security::Provider> virtual getProvider();
	int virtual hashCode();
	bool virtual isLoaded();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::jca::ProviderConfig::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ProviderConfig(){
	}

}; // class ProviderConfig
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderConfig__

