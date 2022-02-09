#ifndef __sun_security_provider_certpath_OCSP__
#define __sun_security_provider_certpath_OCSP__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSP.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.net.URI.h"
#include "java.security.cert.Extension.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus.h"
#include "sun.security.provider.certpath.OCSPResponse.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.X509CertImpl.h"

namespace sun::security::provider::certpath{
class OCSP : public java::lang::Object {
protected:
private:
	static int CONNECT_TIMEOUT;
	static int DEFAULT_CONNECT_TIMEOUT;
	static std::shared_ptr<sun::security::util::Debug> debug;
	OCSP();
	static int initializeTimeout();
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier> NONCE_EXTENSION_OID;
	static void static_cinit();
	static std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus> check(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::cert::X509Certificate> issuerCert);
	static std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus> check(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<java::net::URI> responderURI,std::shared_ptr<java::security::cert::X509Certificate> responderCert,std::shared_ptr<java::util::Date> date);
	static std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus> check(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<java::net::URI> responderURI,std::shared_ptr<java::security::cert::X509Certificate> responderCert,std::shared_ptr<java::util::Date> date,std::shared_ptr<java::util::List<java::security::cert::Extension>> extensions);
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse> check(std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds,std::shared_ptr<java::net::URI> responderURI,std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<java::security::cert::X509Certificate> responderCert,std::shared_ptr<java::util::Date> date,std::shared_ptr<java::util::List<java::security::cert::Extension>> extensions);
	static std::shared_ptr<java::net::URI> getResponderURI(std::shared_ptr<java::security::cert::X509Certificate> cert);
	static std::shared_ptr<java::net::URI> getResponderURI(std::shared_ptr<sun::security::x509::X509CertImpl> certImpl);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::OCSP::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~OCSP(){
	}

}; // class OCSP
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_OCSP__

