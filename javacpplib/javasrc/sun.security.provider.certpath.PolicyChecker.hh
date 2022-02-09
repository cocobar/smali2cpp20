#ifndef __sun_security_provider_certpath_PolicyChecker__
#define __sun_security_provider_certpath_PolicyChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PolicyChecker.smali
#include "java2ctype.h"
#include "java.security.cert.PKIXCertPathChecker.hh"

namespace sun::security::provider::certpath{
class PolicyChecker : public java::security::cert::PKIXCertPathChecker {
public:
	PolicyChecker();
	virtual ~PolicyChecker();

}; // class PolicyChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PolicyChecker__

