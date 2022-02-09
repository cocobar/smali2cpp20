#ifndef __sun_security_provider_certpath_RevocationChecker__
#define __sun_security_provider_certpath_RevocationChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker.smali
#include "java2ctype.h"
#include "java.security.cert.PKIXRevocationChecker.hh"

namespace sun::security::provider::certpath{
class RevocationChecker : public java::security::cert::PKIXRevocationChecker {
public:
	RevocationChecker();
	virtual ~RevocationChecker();

}; // class RevocationChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_RevocationChecker__

