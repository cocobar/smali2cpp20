#ifndef __sun_security_provider_certpath_PKIXCertPathValidator__
#define __sun_security_provider_certpath_PKIXCertPathValidator__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIXCertPathValidator.smali
#include "java2ctype.h"
#include "java.security.cert.CertPathValidatorSpi.hh"

namespace sun::security::provider::certpath{
class PKIXCertPathValidator : public java::security::cert::CertPathValidatorSpi {
public:
	PKIXCertPathValidator();
	virtual ~PKIXCertPathValidator();

}; // class PKIXCertPathValidator
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIXCertPathValidator__

