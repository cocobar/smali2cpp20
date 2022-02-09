#ifndef __sun_security_x509_CertificateX509Key__
#define __sun_security_x509_CertificateX509Key__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateX509Key.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.PublicKey.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateX509Key : public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<java::security::PublicKey> key;
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> KEY;
	static std::shared_ptr<java::lang::String> NAME;
	CertificateX509Key(std::shared_ptr<java::io::InputStream> in);
	CertificateX509Key(std::shared_ptr<java::security::PublicKey> key);
	CertificateX509Key(std::shared_ptr<sun::security::util::DerInputStream> in);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::security::PublicKey> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificateX509Key(){
	}

}; // class CertificateX509Key
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateX509Key__

