#ifndef __sun_security_provider_certpath_BasicChecker__
#define __sun_security_provider_certpath_BasicChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\BasicChecker.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class BasicChecker : public java::security::cert::PKIXCertPathChecker {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<javax::security::auth::x500::X500Principal> caName;
	std::shared_ptr<java::util::Date> date;
	std::shared_ptr<java::security::PublicKey> prevPubKey;
	std::shared_ptr<javax::security::auth::x500::X500Principal> prevSubject;
	bool sigOnly;
	std::shared_ptr<java::lang::String> sigProvider;
	std::shared_ptr<java::security::PublicKey> trustedPubKey;
	void virtual updateState(std::shared_ptr<java::security::cert::X509Certificate> currCert);
	void virtual verifyNameChaining(std::shared_ptr<java::security::cert::X509Certificate> cert);
	void virtual verifySignature(std::shared_ptr<java::security::cert::X509Certificate> cert);
	void virtual verifyTimestamp(std::shared_ptr<java::security::cert::X509Certificate> cert);
public:
	static void static_cinit();
	BasicChecker(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<java::util::Date> date,std::shared_ptr<java::lang::String> sigProvider,bool sigOnly);
	static std::shared_ptr<java::security::PublicKey> makeInheritedParamsKey(std::shared_ptr<java::security::PublicKey> keyValueKey,std::shared_ptr<java::security::PublicKey> keyParamsKey);
	void virtual check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts);
	std::shared_ptr<java::security::PublicKey> virtual getPublicKey();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedExtensions();
	void virtual init(bool forward);
	bool virtual isForwardCheckingSupported();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::BasicChecker::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BasicChecker(){
	}

}; // class BasicChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_BasicChecker__

