#ifndef __sun_security_provider_certpath_AlgorithmChecker__
#define __sun_security_provider_certpath_AlgorithmChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\AlgorithmChecker.smali
#include "java2ctype.h"
#include "java.security.cert.PKIXCertPathChecker.hh"

namespace sun::security::provider::certpath{
class AlgorithmChecker : public java::security::cert::PKIXCertPathChecker {
public:
	AlgorithmChecker();
	virtual ~AlgorithmChecker();

}; // class AlgorithmChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_AlgorithmChecker__

