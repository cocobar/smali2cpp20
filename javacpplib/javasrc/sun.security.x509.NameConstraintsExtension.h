#ifndef __sun_security_x509_NameConstraintsExtension__
#define __sun_security_x509_NameConstraintsExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\NameConstraintsExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralSubtrees.h"
#include "sun.security.x509.X500Name.h"

namespace sun::security::x509{
class NameConstraintsExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String>, public java::lang::Cloneable {
protected:
private:
	static unsigned char TAG_EXCLUDED;
	static unsigned char TAG_PERMITTED;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> excluded;
	bool hasMax;
	bool hasMin;
	bool minMaxValid;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> permitted;
	void virtual calcMinMax();
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> EXCLUDED_SUBTREES;
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> PERMITTED_SUBTREES;
	NameConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	NameConstraintsExtension(std::shared_ptr<sun::security::x509::GeneralSubtrees> permitted,std::shared_ptr<sun::security::x509::GeneralSubtrees> excluded);
	std::shared_ptr<java::lang::Object> virtual clone();
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<sun::security::x509::GeneralSubtrees> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual merge(std::shared_ptr<sun::security::x509::NameConstraintsExtension> newConstraints);
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
	bool virtual verify(std::shared_ptr<java::security::cert::X509Certificate> cert);
	bool virtual verify(std::shared_ptr<sun::security::x509::GeneralNameInterface> name);
	bool virtual verifyRFC822SpecialCase(std::shared_ptr<sun::security::x509::X500Name> subject);
public:
	virtual ~NameConstraintsExtension(){
	}

}; // class NameConstraintsExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_NameConstraintsExtension__

