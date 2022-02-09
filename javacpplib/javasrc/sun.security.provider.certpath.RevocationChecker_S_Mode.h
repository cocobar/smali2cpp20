#ifndef __sun_security_provider_certpath_RevocationChecker_S_Mode__
#define __sun_security_provider_certpath_RevocationChecker_S_Mode__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker$Mode.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace sun::security::provider::certpath{
class RevocationChecker_S_Mode : public java::lang::Enum<sun::security::provider::certpath::RevocationChecker_S_Mode> {
protected:
private:
	static std::shared_ptr<std::vector<sun::security::provider::certpath::RevocationChecker_S_Mode>> _S_VALUES;
	RevocationChecker_S_Mode(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> ONLY_CRLS;
	static std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> ONLY_OCSP;
	static std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> PREFER_CRLS;
	static std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> PREFER_OCSP;
	static void static_cinit();
	static std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::RevocationChecker_S_Mode::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RevocationChecker_S_Mode(){
	}

}; // class RevocationChecker_S_Mode
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_RevocationChecker_S_Mode__

