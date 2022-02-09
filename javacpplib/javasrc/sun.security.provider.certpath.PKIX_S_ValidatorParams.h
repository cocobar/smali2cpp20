#ifndef __sun_security_provider_certpath_PKIX_S_ValidatorParams__
#define __sun_security_provider_certpath_PKIX_S_ValidatorParams__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$ValidatorParams.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.PKIXParameters.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "java.util.Set.h"

namespace sun::security::provider::certpath{
class PKIX_S_ValidatorParams : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors;
	std::shared_ptr<java::security::cert::CertPath> certPath;
	std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> certs;
	std::shared_ptr<java::util::List<java::security::cert::PKIXCertPathChecker>> checkers;
	std::shared_ptr<java::security::cert::CertSelector> constraints;
	std::shared_ptr<java::util::Date> date;
	bool gotConstraints;
	bool gotDate;
	std::shared_ptr<java::security::cert::PKIXParameters> params;
	std::shared_ptr<java::util::Set<java::lang::String>> policies;
	std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores;
public:
	PKIX_S_ValidatorParams(std::shared_ptr<java::security::cert::CertPath> cp,std::shared_ptr<java::security::cert::PKIXParameters> params);
	PKIX_S_ValidatorParams(std::shared_ptr<java::security::cert::PKIXParameters> params);
	bool virtual anyPolicyInhibited();
	std::shared_ptr<java::security::cert::CertPath> virtual certPath();
	std::shared_ptr<java::util::List<java::security::cert::PKIXCertPathChecker>> virtual certPathCheckers();
	std::shared_ptr<java::util::List<java::security::cert::CertStore>> virtual certStores();
	std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> virtual certificates();
	std::shared_ptr<java::util::Date> virtual date();
	bool virtual explicitPolicyRequired();
	std::shared_ptr<java::security::cert::PKIXParameters> virtual getPKIXParameters();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual initialPolicies();
	bool virtual policyMappingInhibited();
	bool virtual policyQualifiersRejected();
	bool virtual revocationEnabled();
	void virtual setCertPath(std::shared_ptr<java::security::cert::CertPath> cp);
	std::shared_ptr<java::lang::String> virtual sigProvider();
	std::shared_ptr<java::security::cert::CertSelector> virtual targetCertConstraints();
	std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> virtual trustAnchors();
public:
	virtual ~PKIX_S_ValidatorParams(){
	}

}; // class PKIX_S_ValidatorParams
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIX_S_ValidatorParams__

