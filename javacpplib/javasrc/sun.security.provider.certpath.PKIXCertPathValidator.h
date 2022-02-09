#ifndef __sun_security_provider_certpath_PKIXCertPathValidator__
#define __sun_security_provider_certpath_PKIXCertPathValidator__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIXCertPathValidator.smali
#include "java2ctype.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathChecker.h"
#include "java.security.cert.CertPathParameters.h"
#include "java.security.cert.CertPathValidatorResult.h"
#include "java.security.cert.CertPathValidatorSpi.h"
#include "java.security.cert.PKIXCertPathValidatorResult.h"
#include "java.security.cert.TrustAnchor.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class PKIXCertPathValidator : public java::security::cert::CertPathValidatorSpi {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	static std::shared_ptr<java::security::cert::PKIXCertPathValidatorResult> validate(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params);
	static std::shared_ptr<java::security::cert::PKIXCertPathValidatorResult> validate(std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params);
public:
	static void static_cinit();
	PKIXCertPathValidator();
	std::shared_ptr<java::security::cert::CertPathChecker> virtual engineGetRevocationChecker();
	std::shared_ptr<java::security::cert::CertPathValidatorResult> virtual engineValidate(std::shared_ptr<java::security::cert::CertPath> cp,std::shared_ptr<java::security::cert::CertPathParameters> params);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::PKIXCertPathValidator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PKIXCertPathValidator(){
	}

}; // class PKIXCertPathValidator
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIXCertPathValidator__

