#ifndef __sun_security_provider_certpath_PKIXMasterCertPathValidator__
#define __sun_security_provider_certpath_PKIXMasterCertPathValidator__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIXMasterCertPathValidator.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.List.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class PKIXMasterCertPathValidator : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
public:
	static void static_cinit();
	PKIXMasterCertPathValidator();
	static void validate(std::shared_ptr<java::security::cert::CertPath> cpOriginal,std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> reversedCertList,std::shared_ptr<java::util::List<java::security::cert::PKIXCertPathChecker>> certPathCheckers);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::PKIXMasterCertPathValidator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PKIXMasterCertPathValidator(){
	}

}; // class PKIXMasterCertPathValidator
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIXMasterCertPathValidator__

