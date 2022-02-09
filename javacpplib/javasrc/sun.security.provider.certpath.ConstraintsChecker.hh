#ifndef __sun_security_provider_certpath_ConstraintsChecker__
#define __sun_security_provider_certpath_ConstraintsChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ConstraintsChecker.smali
#include "java2ctype.h"
#include "java.security.cert.PKIXCertPathChecker.hh"

namespace sun::security::provider::certpath{
class ConstraintsChecker : public java::security::cert::PKIXCertPathChecker {
public:
	ConstraintsChecker();
	virtual ~ConstraintsChecker();

}; // class ConstraintsChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_ConstraintsChecker__

