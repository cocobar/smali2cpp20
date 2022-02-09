#ifndef __sun_security_provider_certpath_AlgorithmChecker__
#define __sun_security_provider_certpath_AlgorithmChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\AlgorithmChecker.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.AlgorithmConstraints.h"
#include "java.security.CryptoPrimitive.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Set.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"
#include "sun.security.x509.AlgorithmId.h"

namespace sun::security::provider::certpath{
class AlgorithmChecker : public java::security::cert::PKIXCertPathChecker {
protected:
private:
	static std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> KU_PRIMITIVE_SET;
	static std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> SIGNATURE_PRIMITIVE_SET;
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints> certPathDefaultConstraints;
	static std::shared_ptr<sun::security::util::Debug> debug;
	static bool publicCALimits;
	std::shared_ptr<java::security::AlgorithmConstraints> constraints;
	std::shared_ptr<java::security::PublicKey> prevPubKey;
	bool trustedMatch;
	std::shared_ptr<java::security::PublicKey> trustedPubKey;
	static bool checkFingerprint(std::shared_ptr<java::security::cert::X509Certificate> cert);
public:
	static void static_cinit();
	AlgorithmChecker(std::shared_ptr<java::security::AlgorithmConstraints> constraints);
	AlgorithmChecker(std::shared_ptr<java::security::cert::TrustAnchor> anchor);
	AlgorithmChecker(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<java::security::AlgorithmConstraints> constraints);
	static void check(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::cert::X509CRL> crl);
	static void check(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<sun::security::x509::AlgorithmId> algorithmId);
	void virtual check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedExtensions();
	void virtual init(bool forward);
	bool virtual isForwardCheckingSupported();
	void virtual trySetTrustAnchor(std::shared_ptr<java::security::cert::TrustAnchor> anchor);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::AlgorithmChecker::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AlgorithmChecker(){
	}

}; // class AlgorithmChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_AlgorithmChecker__

