#ifndef __sun_security_provider_certpath_URICertStore__
#define __sun_security_provider_certpath_URICertStore__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\URICertStore.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.net.URI.h"
#include "java.security.cert.CRLSelector.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreParameters.h"
#include "java.security.cert.CertStoreSpi.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "sun.security.provider.certpath.CertStoreHelper.h"
#include "sun.security.provider.certpath.URICertStore_S_URICertStoreParameters.h"
#include "sun.security.util.Cache.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.AccessDescription.h"

namespace sun::security::provider::certpath{
class URICertStore : public java::security::cert::CertStoreSpi {
protected:
private:
	static int CACHE_SIZE;
	static int CHECK_INTERVAL;
	static int CRL_CONNECT_TIMEOUT;
	static int DEFAULT_CRL_CONNECT_TIMEOUT;
	static std::shared_ptr<sun::security::util::Cache<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters,java::security::cert::CertStore>> certStoreCache;
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> certs;
	std::shared_ptr<java::security::cert::X509CRL> crl;
	std::shared_ptr<java::security::cert::CertificateFactory> factory;
	long long lastChecked;
	long long lastModified;
	bool ldap;
	std::shared_ptr<java::security::cert::CertStore> ldapCertStore;
	std::shared_ptr<sun::security::provider::certpath::CertStoreHelper> ldapHelper;
	std::shared_ptr<java::lang::String> ldapPath;
	std::shared_ptr<java::net::URI> uri;
	static std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> getMatchingCRLs(std::shared_ptr<java::security::cert::X509CRL> crl,std::shared_ptr<java::security::cert::CRLSelector> selector);
	static std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> getMatchingCerts(std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> certs,std::shared_ptr<java::security::cert::CertSelector> selector);
	static int initializeTimeout();
public:
	static void static_cinit();
	URICertStore(std::shared_ptr<java::security::cert::CertStoreParameters> params);
	static std::shared_ptr<java::security::cert::CertStore> getInstance(std::shared_ptr<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters> params);
	static std::shared_ptr<java::security::cert::CertStore> getInstance(std::shared_ptr<sun::security::x509::AccessDescription> ad);
	std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> virtual engineGetCRLs(std::shared_ptr<java::security::cert::CRLSelector> selector);
	std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> virtual engineGetCertificates(std::shared_ptr<java::security::cert::CertSelector> selector);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::URICertStore::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~URICertStore(){
	}

}; // class URICertStore
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_URICertStore__

