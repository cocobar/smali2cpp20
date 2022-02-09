#ifndef __sun_security_x509_InhibitAnyPolicyExtension__
#define __sun_security_x509_InhibitAnyPolicyExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\InhibitAnyPolicyExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class InhibitAnyPolicyExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	int skipCerts;
	void virtual encodeThis();
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier> AnyPolicy_Id;
	static std::shared_ptr<java::lang::String> IDENT;
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> SKIP_CERTS;
	static void static_cinit();
	InhibitAnyPolicyExtension(int skipCerts);
	InhibitAnyPolicyExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Integer> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::InhibitAnyPolicyExtension::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~InhibitAnyPolicyExtension(){
	}

}; // class InhibitAnyPolicyExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_InhibitAnyPolicyExtension__

