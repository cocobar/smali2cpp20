#ifndef __sun_security_x509_OCSPNoCheckExtension__
#define __sun_security_x509_OCSPNoCheckExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\OCSPNoCheckExtension.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class OCSPNoCheckExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
public:
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	OCSPNoCheckExtension();
	OCSPNoCheckExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
public:
	virtual ~OCSPNoCheckExtension(){
	}

}; // class OCSPNoCheckExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_OCSPNoCheckExtension__

