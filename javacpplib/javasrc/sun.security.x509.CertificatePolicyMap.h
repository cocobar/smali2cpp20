#ifndef __sun_security_x509_CertificatePolicyMap__
#define __sun_security_x509_CertificatePolicyMap__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificatePolicyMap.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.CertificatePolicyId.h"

namespace sun::security::x509{
class CertificatePolicyMap : public java::lang::Object {
protected:
private:
	std::shared_ptr<sun::security::x509::CertificatePolicyId> issuerDomain;
	std::shared_ptr<sun::security::x509::CertificatePolicyId> subjectDomain;
public:
	CertificatePolicyMap(std::shared_ptr<sun::security::util::DerValue> val);
	CertificatePolicyMap(std::shared_ptr<sun::security::x509::CertificatePolicyId> issuer,std::shared_ptr<sun::security::x509::CertificatePolicyId> subject);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	std::shared_ptr<sun::security::x509::CertificatePolicyId> virtual getIssuerIdentifier();
	std::shared_ptr<sun::security::x509::CertificatePolicyId> virtual getSubjectIdentifier();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificatePolicyMap(){
	}

}; // class CertificatePolicyMap
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificatePolicyMap__

