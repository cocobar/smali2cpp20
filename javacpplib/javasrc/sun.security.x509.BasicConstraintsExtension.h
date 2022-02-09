#ifndef __sun_security_x509_BasicConstraintsExtension__
#define __sun_security_x509_BasicConstraintsExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\BasicConstraintsExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class BasicConstraintsExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	bool ca;
	int pathLen;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> IS_CA;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> PATH_LEN;
	BasicConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	BasicConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,bool ca,int len);
	BasicConstraintsExtension(bool ca,int len);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~BasicConstraintsExtension(){
	}

}; // class BasicConstraintsExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_BasicConstraintsExtension__

