#ifndef __sun_security_provider_certpath_DistributionPointFetcher__
#define __sun_security_provider_certpath_DistributionPointFetcher__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\DistributionPointFetcher.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509CRLSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.DistributionPoint.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.RDN.h"
#include "sun.security.x509.URIName.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CRLImpl.h"
#include "sun.security.x509.X509CertImpl.h"

namespace sun::security::provider::certpath{
class DistributionPointFetcher : public java::lang::Object {
protected:
private:
	static std::shared_ptr<bool[]> ALL_REASONS;
	static std::shared_ptr<sun::security::util::Debug> debug;
	DistributionPointFetcher();
	static std::shared_ptr<java::security::cert::X509CRL> getCRL(std::shared_ptr<sun::security::x509::URIName> name);
	static std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> getCRLs(std::shared_ptr<java::security::cert::X509CRLSelector> selector,std::shared_ptr<sun::security::x509::X509CertImpl> certImpl,std::shared_ptr<sun::security::x509::DistributionPoint> point,std::shared_ptr<bool[]> reasonsMask,bool signFlag,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::security::cert::X509Certificate> prevCert,std::shared_ptr<java::lang::String> provider,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors,std::shared_ptr<java::util::Date> validity);
	static std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> getCRLs(std::shared_ptr<sun::security::x509::X500Name> name,std::shared_ptr<javax::security::auth::x500::X500Principal> certIssuer,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores);
	static std::shared_ptr<sun::security::x509::GeneralNames> getFullNames(std::shared_ptr<sun::security::x509::X500Name> issuer,std::shared_ptr<sun::security::x509::RDN> rdn);
	static bool issues(std::shared_ptr<sun::security::x509::X509CertImpl> cert,std::shared_ptr<sun::security::x509::X509CRLImpl> crl,std::shared_ptr<java::lang::String> provider);
public:
	static void static_cinit();
	static std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> getCRLs(std::shared_ptr<java::security::cert::X509CRLSelector> selector,bool signFlag,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::lang::String> provider,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<bool[]> reasonsMask,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors,std::shared_ptr<java::util::Date> validity);
	static std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> getCRLs(std::shared_ptr<java::security::cert::X509CRLSelector> selector,bool signFlag,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::security::cert::X509Certificate> prevCert,std::shared_ptr<java::lang::String> provider,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<bool[]> reasonsMask,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors,std::shared_ptr<java::util::Date> validity);
	static bool verifyCRL(std::shared_ptr<sun::security::x509::X509CertImpl> certImpl,std::shared_ptr<sun::security::x509::DistributionPoint> point,std::shared_ptr<java::security::cert::X509CRL> crl,std::shared_ptr<bool[]> reasonsMask,bool signFlag,std::shared_ptr<java::security::PublicKey> cVar20,std::shared_ptr<java::security::cert::X509Certificate> prevCert,std::shared_ptr<java::lang::String> provider,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Date> validity);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::DistributionPointFetcher::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DistributionPointFetcher(){
	}

}; // class DistributionPointFetcher
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_DistributionPointFetcher__

