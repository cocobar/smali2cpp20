#ifndef __sun_security_x509_PrivateKeyUsageExtension__
#define __sun_security_x509_PrivateKeyUsageExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\PrivateKeyUsageExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class PrivateKeyUsageExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static unsigned char TAG_AFTER;
	static unsigned char TAG_BEFORE;
	std::shared_ptr<java::util::Date> notAfter;
	std::shared_ptr<java::util::Date> notBefore;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> NOT_AFTER;
	static std::shared_ptr<java::lang::String> NOT_BEFORE;
	PrivateKeyUsageExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	PrivateKeyUsageExtension(std::shared_ptr<java::util::Date> notBefore,std::shared_ptr<java::util::Date> notAfter);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::util::Date> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual valid();
	void virtual valid(std::shared_ptr<java::util::Date> now);
public:
	virtual ~PrivateKeyUsageExtension(){
	}

}; // class PrivateKeyUsageExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_PrivateKeyUsageExtension__

