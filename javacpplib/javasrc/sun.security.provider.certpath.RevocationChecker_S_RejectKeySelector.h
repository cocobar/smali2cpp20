#ifndef __sun_security_provider_certpath_RevocationChecker_S_RejectKeySelector__
#define __sun_security_provider_certpath_RevocationChecker_S_RejectKeySelector__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker$RejectKeySelector.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.util.Set.h"

namespace sun::security::provider::certpath{
class RevocationChecker_S_RejectKeySelector : public java::security::cert::X509CertSelector {
protected:
private:
	std::shared_ptr<java::util::Set<java::security::PublicKey>> badKeySet;
public:
	RevocationChecker_S_RejectKeySelector(std::shared_ptr<java::util::Set<java::security::PublicKey>> badPublicKeys);
	bool virtual match(std::shared_ptr<java::security::cert::Certificate> cert);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~RevocationChecker_S_RejectKeySelector(){
	}

}; // class RevocationChecker_S_RejectKeySelector
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_RevocationChecker_S_RejectKeySelector__

