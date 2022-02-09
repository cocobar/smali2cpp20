#ifndef __sun_security_x509_PolicyInformation__
#define __sun_security_x509_PolicyInformation__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\PolicyInformation.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.PolicyQualifierInfo.h"
#include "java.util.Enumeration.h"
#include "java.util.Set.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.CertificatePolicyId.h"

namespace sun::security::x509{
class PolicyInformation : public java::lang::Object {
protected:
private:
	std::shared_ptr<sun::security::x509::CertificatePolicyId> policyIdentifier;
	std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> policyQualifiers;
public:
	static std::shared_ptr<java::lang::String> ID;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> QUALIFIERS;
	PolicyInformation(std::shared_ptr<sun::security::util::DerValue> val);
	PolicyInformation(std::shared_ptr<sun::security::x509::CertificatePolicyId> policyIdentifier,std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> policyQualifiers);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<sun::security::x509::CertificatePolicyId> virtual getPolicyIdentifier();
	std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> virtual getPolicyQualifiers();
	int virtual hashCode();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PolicyInformation(){
	}

}; // class PolicyInformation
}; // namespace sun::security::x509

#endif //__sun_security_x509_PolicyInformation__

