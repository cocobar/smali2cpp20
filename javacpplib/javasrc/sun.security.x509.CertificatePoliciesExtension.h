#ifndef __sun_security_x509_CertificatePoliciesExtension__
#define __sun_security_x509_CertificatePoliciesExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificatePoliciesExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.PolicyInformation.h"

namespace sun::security::x509{
class CertificatePoliciesExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<java::util::List<sun::security::x509::PolicyInformation>> certPolicies;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> POLICIES;
	CertificatePoliciesExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	CertificatePoliciesExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::util::List<sun::security::x509::PolicyInformation>> certPolicies);
	CertificatePoliciesExtension(std::shared_ptr<java::util::List<sun::security::x509::PolicyInformation>> certPolicies);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::util::List<sun::security::x509::PolicyInformation>> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificatePoliciesExtension(){
	}

}; // class CertificatePoliciesExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificatePoliciesExtension__

