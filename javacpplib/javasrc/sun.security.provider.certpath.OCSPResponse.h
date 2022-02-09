#ifndef __sun_security_provider_certpath_OCSPResponse__
#define __sun_security_provider_certpath_OCSPResponse__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSPResponse.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.CRLReason.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.provider.certpath.OCSPResponse_S_ResponseStatus.h"
#include "sun.security.provider.certpath.OCSPResponse_S_SingleResponse.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.X509CertImpl.h"

namespace sun::security::provider::certpath{
class OCSPResponse : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _sun_security_provider_certpath_OCSPResponse_S_ResponseStatusSwitchesValues;
	static int CERT_STATUS_GOOD;
	static int CERT_STATUS_REVOKED;
	static int CERT_STATUS_UNKNOWN;
	static int DEFAULT_MAX_CLOCK_SKEW;
	static int KEY_TAG;
	static std::shared_ptr<java::lang::String> KP_OCSP_SIGNING_OID;
	static int MAX_CLOCK_SKEW;
	static int NAME_TAG;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> OCSP_BASIC_RESPONSE_OID;
	static std::shared_ptr<sun::security::util::Debug> debug;
	static bool dump;
	static std::shared_ptr<std::vector<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>> rsvalues;
	static std::shared_ptr<std::vector<java::security::cert::CRLReason>> values;
	std::shared_ptr<java::util::List<sun::security::x509::X509CertImpl>> certs;
	std::shared_ptr<sun::security::x509::KeyIdentifier> responderKeyId;
	std::shared_ptr<javax::security::auth::x500::X500Principal> responderName;
	std::shared_ptr<unsigned char[]> responseNonce;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> responseStatus;
	std::shared_ptr<sun::security::x509::AlgorithmId> sigAlgId;
	std::shared_ptr<unsigned char[]> signature;
	std::shared_ptr<sun::security::x509::X509CertImpl> signerCert;
	std::shared_ptr<java::util::Map<sun::security::provider::certpath::CertId,sun::security::provider::certpath::OCSPResponse_S_SingleResponse>> singleResponseMap;
	std::shared_ptr<unsigned char[]> tbsResponseData;
	static int _getsun_security_provider_certpath_OCSPResponse_S_ResponseStatusSwitchesValues();
	static int initializeClockSkew();
	bool virtual verifySignature(std::shared_ptr<java::security::cert::X509Certificate> cert);
public:
	static std::shared_ptr<sun::security::util::Debug> _get0();
	static std::shared_ptr<java::security::cert::CRLReason> _get1();
	static void static_cinit();
	OCSPResponse(std::shared_ptr<unsigned char[]> bytes);
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> virtual getResponseStatus();
	std::shared_ptr<java::security::cert::X509Certificate> virtual getSignerCertificate();
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> virtual getSingleResponse(std::shared_ptr<sun::security::provider::certpath::CertId> certId);
	void virtual verify(std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds,std::shared_ptr<java::security::cert::X509Certificate> issuerCert,std::shared_ptr<java::security::cert::X509Certificate> responderCert,std::shared_ptr<java::util::Date> date,std::shared_ptr<unsigned char[]> nonce);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::OCSPResponse::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~OCSPResponse(){
	}

}; // class OCSPResponse
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_OCSPResponse__

