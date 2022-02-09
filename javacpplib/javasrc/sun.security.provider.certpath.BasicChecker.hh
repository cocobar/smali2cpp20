#ifndef __sun_security_provider_certpath_BasicChecker__
#define __sun_security_provider_certpath_BasicChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\BasicChecker.smali
#include "java2ctype.h"
#include "java.security.cert.PKIXCertPathChecker.hh"

namespace sun::security::provider::certpath{
class BasicChecker : public java::security::cert::PKIXCertPathChecker {
public:
	BasicChecker();
	virtual ~BasicChecker();

}; // class BasicChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_BasicChecker__

