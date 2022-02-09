#ifndef __sun_security_x509_CertificateIssuerExtension__
#define __sun_security_x509_CertificateIssuerExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateIssuerExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.GeneralNames.h"

namespace sun::security::x509{
class CertificateIssuerExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<sun::security::x509::GeneralNames> names;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> ISSUER;
	static std::shared_ptr<java::lang::String> NAME;
	CertificateIssuerExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	CertificateIssuerExtension(std::shared_ptr<sun::security::x509::GeneralNames> issuer);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<sun::security::x509::GeneralNames> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificateIssuerExtension(){
	}

}; // class CertificateIssuerExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateIssuerExtension__

