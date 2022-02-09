#ifndef __sun_security_x509_PolicyConstraintsExtension__
#define __sun_security_x509_PolicyConstraintsExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\PolicyConstraintsExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class PolicyConstraintsExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static unsigned char TAG_INHIBIT;
	static unsigned char TAG_REQUIRE;
	int inhibit;
	int require;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> INHIBIT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> REQUIRE;
	PolicyConstraintsExtension(int require,int inhibit);
	PolicyConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,int require,int inhibit);
	PolicyConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Integer> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PolicyConstraintsExtension(){
	}

}; // class PolicyConstraintsExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_PolicyConstraintsExtension__

