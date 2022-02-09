#ifndef __sun_security_provider_certpath_KeyChecker__
#define __sun_security_provider_certpath_KeyChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\KeyChecker.smali
#include "java2ctype.h"
#include "java.security.cert.PKIXCertPathChecker.hh"

namespace sun::security::provider::certpath{
class KeyChecker : public java::security::cert::PKIXCertPathChecker {
public:
	KeyChecker();
	virtual ~KeyChecker();

}; // class KeyChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_KeyChecker__

