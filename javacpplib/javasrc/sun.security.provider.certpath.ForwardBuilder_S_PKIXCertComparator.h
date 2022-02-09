#ifndef __sun_security_provider_certpath_ForwardBuilder_S_PKIXCertComparator__
#define __sun_security_provider_certpath_ForwardBuilder_S_PKIXCertComparator__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ForwardBuilder$PKIXCertComparator.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Comparator.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.x509.X509CertImpl.h"

namespace sun::security::provider::certpath{
class ForwardBuilder_S_PKIXCertComparator : public java::util::Comparator<java::security::cert::X509Certificate> {
protected:
private:
	std::shared_ptr<java::security::cert::X509CertSelector> certSkidSelector;
	std::shared_ptr<java::util::Set<javax::security::auth::x500::X500Principal>> trustedSubjectDNs;
	std::shared_ptr<java::security::cert::X509CertSelector> virtual getSelector(std::shared_ptr<sun::security::x509::X509CertImpl> previousCert);
public:
	static std::shared_ptr<java::lang::String> METHOD_NME;
	ForwardBuilder_S_PKIXCertComparator(std::shared_ptr<java::util::Set<javax::security::auth::x500::X500Principal>> trustedSubjectDNs,std::shared_ptr<sun::security::x509::X509CertImpl> previousCert);
	int virtual compare(std::shared_ptr<java::security::cert::X509Certificate> oCert1,std::shared_ptr<java::security::cert::X509Certificate> oCert2);
public:
	virtual ~ForwardBuilder_S_PKIXCertComparator(){
	}

}; // class ForwardBuilder_S_PKIXCertComparator
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_ForwardBuilder_S_PKIXCertComparator__

