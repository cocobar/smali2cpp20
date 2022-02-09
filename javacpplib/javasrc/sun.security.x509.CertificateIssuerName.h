#ifndef __sun_security_x509_CertificateIssuerName__
#define __sun_security_x509_CertificateIssuerName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateIssuerName.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.X500Name.h"

namespace sun::security::x509{
class CertificateIssuerName : public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<sun::security::x509::X500Name> dnName;
	std::shared_ptr<javax::security::auth::x500::X500Principal> dnPrincipal;
public:
	static std::shared_ptr<java::lang::String> DN_NAME;
	static std::shared_ptr<java::lang::String> DN_PRINCIPAL;
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	CertificateIssuerName(std::shared_ptr<java::io::InputStream> in);
	CertificateIssuerName(std::shared_ptr<sun::security::util::DerInputStream> in);
	CertificateIssuerName(std::shared_ptr<sun::security::x509::X500Name> name);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificateIssuerName(){
	}

}; // class CertificateIssuerName
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateIssuerName__

