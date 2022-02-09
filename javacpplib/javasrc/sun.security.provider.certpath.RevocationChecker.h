#ifndef __sun_security_provider_certpath_RevocationChecker__
#define __sun_security_provider_certpath_RevocationChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.net.URI.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.Extension.h"
#include "java.security.cert.PKIXRevocationChecker.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"
#include "sun.security.provider.certpath.RevocationChecker_S_Mode.h"
#include "sun.security.provider.certpath.RevocationChecker_S_RevocationProperties.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class RevocationChecker : public java::security::cert::PKIXRevocationChecker {
protected:
private:
	static std::shared_ptr<int[]> _java_security_cert_PKIXRevocationChecker_S_OptionSwitchesValues;
	static std::shared_ptr<int[]> _sun_security_provider_certpath_RevocationChecker_S_ModeSwitchesValues;
	static std::shared_ptr<bool[]> ALL_REASONS;
	static std::shared_ptr<bool[]> CRL_SIGN_USAGE;
	static std::shared_ptr<java::lang::String> HEX_DIGITS;
	static long long MAX_CLOCK_SKEW;
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<java::security::cert::TrustAnchor> anchor;
	int certIndex;
	std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores;
	bool crlDP;
	bool crlSignFlag;
	std::shared_ptr<java::security::cert::X509Certificate> issuerCert;
	bool legacy;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> mode;
	std::shared_ptr<java::util::List<java::security::cert::Extension>> ocspExtensions;
	std::shared_ptr<java::util::Map<java::security::cert::X509Certificate,unsigned char[]>> ocspResponses;
	bool onlyEE;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params;
	std::shared_ptr<java::security::PublicKey> prevPubKey;
	std::shared_ptr<java::security::cert::X509Certificate> responderCert;
	std::shared_ptr<java::net::URI> responderURI;
	bool softFail;
	std::shared_ptr<java::util::LinkedList<java::security::cert::CertPathValidatorException>> softFailExceptions;
	static int _getjava_security_cert_PKIXRevocationChecker_S_OptionSwitchesValues();
	static int _getsun_security_provider_certpath_RevocationChecker_S_ModeSwitchesValues();
	void virtual buildToNewKey(std::shared_ptr<java::security::cert::X509Certificate> currCert,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> stackedCerts);
	void virtual check(std::shared_ptr<java::security::cert::X509Certificate> xcert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts,std::shared_ptr<java::security::PublicKey> pubKey,bool crlSignFlag);
	void virtual checkApprovedCRLs(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::util::Set<java::security::cert::X509CRL>> approvedCRLs);
	void virtual checkCRLs(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::security::cert::X509Certificate> prevCert,bool signFlag,bool allowSeparateKey,std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> stackedCerts,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors);
	void virtual checkCRLs(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts,std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> stackedCerts,std::shared_ptr<java::security::PublicKey> pubKey,bool signFlag);
	void virtual checkOCSP(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts);
	static std::shared_ptr<java::security::cert::X509Certificate> getResponderCert(std::shared_ptr<java::lang::String> issuer,std::shared_ptr<java::lang::String> serial,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores);
	static std::shared_ptr<java::security::cert::X509Certificate> getResponderCert(std::shared_ptr<java::lang::String> subject,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores);
	static std::shared_ptr<java::security::cert::X509Certificate> getResponderCert(std::shared_ptr<java::security::cert::X509CertSelector> sel,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores);
	static std::shared_ptr<java::security::cert::X509Certificate> getResponderCert(std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties> rp,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores);
	static std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties> getRevocationProperties();
	bool virtual isSoftFailException(std::shared_ptr<java::security::cert::CertPathValidatorException> e);
	static std::shared_ptr<java::lang::String> stripOutSeparators(std::shared_ptr<java::lang::String> value);
	static std::shared_ptr<java::net::URI> toURI(std::shared_ptr<java::lang::String> uriString);
	void virtual updateState(std::shared_ptr<java::security::cert::X509Certificate> cert);
	std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> virtual verifyPossibleCRLs(std::shared_ptr<java::util::Set<java::security::cert::X509CRL>> crls,std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::PublicKey> prevKey,bool signFlag,std::shared_ptr<bool[]> reasonsMask,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors);
	void virtual verifyWithSeparateSigningKey(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::PublicKey> prevKey,bool signFlag,std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> stackedCerts);
public:
	static std::shared_ptr<sun::security::util::Debug> _get0();
	static void static_cinit();
	RevocationChecker();
	RevocationChecker(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params);
	static bool certCanSignCrl(std::shared_ptr<java::security::cert::X509Certificate> cert);
	void virtual check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts);
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker> virtual clone();
	std::shared_ptr<java::util::List<java::security::cert::CertPathValidatorException>> virtual getSoftFailExceptions();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedExtensions();
	void virtual init(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params);
	void virtual init(bool forward);
	bool virtual isForwardCheckingSupported();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::RevocationChecker::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RevocationChecker(){
	}

}; // class RevocationChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_RevocationChecker__

