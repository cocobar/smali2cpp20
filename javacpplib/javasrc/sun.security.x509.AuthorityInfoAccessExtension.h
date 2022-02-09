#ifndef __sun_security_x509_AuthorityInfoAccessExtension__
#define __sun_security_x509_AuthorityInfoAccessExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AuthorityInfoAccessExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class AuthorityInfoAccessExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> accessDescriptions;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> DESCRIPTIONS;
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	AuthorityInfoAccessExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	AuthorityInfoAccessExtension(std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> accessDescriptions);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> virtual getAccessDescriptions();
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~AuthorityInfoAccessExtension(){
	}

}; // class AuthorityInfoAccessExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_AuthorityInfoAccessExtension__

