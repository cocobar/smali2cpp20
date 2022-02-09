#ifndef __sun_security_x509_InvalidityDateExtension__
#define __sun_security_x509_InvalidityDateExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\InvalidityDateExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.Extension.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class InvalidityDateExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	std::shared_ptr<java::util::Date> date;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> DATE;
	static std::shared_ptr<java::lang::String> NAME;
	InvalidityDateExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	InvalidityDateExtension(std::shared_ptr<java::util::Date> date);
	InvalidityDateExtension(bool critical,std::shared_ptr<java::util::Date> date);
	static std::shared_ptr<sun::security::x509::InvalidityDateExtension> toImpl(std::shared_ptr<java::security::cert::Extension> ext);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::util::Date> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~InvalidityDateExtension(){
	}

}; // class InvalidityDateExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_InvalidityDateExtension__

