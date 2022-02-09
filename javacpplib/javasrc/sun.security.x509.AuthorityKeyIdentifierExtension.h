#ifndef __sun_security_x509_AuthorityKeyIdentifierExtension__
#define __sun_security_x509_AuthorityKeyIdentifierExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AuthorityKeyIdentifierExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.SerialNumber.h"

namespace sun::security::x509{
class AuthorityKeyIdentifierExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static unsigned char TAG_ID;
	static unsigned char TAG_NAMES;
	static unsigned char TAG_SERIAL_NUM;
	std::shared_ptr<sun::security::x509::KeyIdentifier> id;
	std::shared_ptr<sun::security::x509::GeneralNames> names;
	std::shared_ptr<sun::security::x509::SerialNumber> serialNum;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> AUTH_NAME;
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> KEY_ID;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> SERIAL_NUMBER;
	AuthorityKeyIdentifierExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	AuthorityKeyIdentifierExtension(std::shared_ptr<sun::security::x509::KeyIdentifier> kid,std::shared_ptr<sun::security::x509::GeneralNames> name,std::shared_ptr<sun::security::x509::SerialNumber> sn);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	unsigned char virtual getEncodedKeyIdentifier();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~AuthorityKeyIdentifierExtension(){
	}

}; // class AuthorityKeyIdentifierExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_AuthorityKeyIdentifierExtension__

