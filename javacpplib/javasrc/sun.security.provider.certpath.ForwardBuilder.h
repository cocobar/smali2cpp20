#ifndef __sun_security_provider_certpath_ForwardBuilder__
#define __sun_security_provider_certpath_ForwardBuilder__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ForwardBuilder.smali
#include "java2ctype.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.AdaptableX509CertSelector.h"
#include "sun.security.provider.certpath.Builder.h"
#include "sun.security.provider.certpath.ForwardState.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.State.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.AuthorityInfoAccessExtension.h"

namespace sun::security::provider::certpath{
class ForwardBuilder : public sun::security::provider::certpath::Builder {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<sun::security::provider::certpath::AdaptableX509CertSelector> caSelector;
	std::shared_ptr<java::security::cert::X509CertSelector> caTargetSelector;
	std::shared_ptr<java::security::cert::X509CertSelector> eeSelector;
	bool searchAllCertStores;
	std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors;
	std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> trustedCerts;
	std::shared_ptr<java::util::Set<javax::security::auth::x500::X500Principal>> trustedSubjectDNs;
	bool virtual getCerts(std::shared_ptr<sun::security::x509::AuthorityInfoAccessExtension> aiaExt,std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> certs);
	void virtual getMatchingCACerts(std::shared_ptr<sun::security::provider::certpath::ForwardState> currentState,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> caCerts);
	void virtual getMatchingEECerts(std::shared_ptr<sun::security::provider::certpath::ForwardState> currentState,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> eeCerts);
public:
	std::shared_ptr<java::security::cert::TrustAnchor> trustAnchor;
	static std::shared_ptr<sun::security::util::Debug> _get0();
	static void static_cinit();
	ForwardBuilder(std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> buildParams,bool searchAllCertStores);
	void virtual addCertToPath(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> certPathList);
	std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> virtual getMatchingCerts(std::shared_ptr<sun::security::provider::certpath::State> currentState,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores);
	bool virtual isPathCompleted(std::shared_ptr<java::security::cert::X509Certificate> cert);
	void virtual removeFinalCertFromPath(std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> certPathList);
	void virtual verifyCert(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<sun::security::provider::certpath::State> currentState,std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> certPathList);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::ForwardBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ForwardBuilder(){
	}

}; // class ForwardBuilder
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_ForwardBuilder__

