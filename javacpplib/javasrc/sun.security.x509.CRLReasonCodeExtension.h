#ifndef __sun_security_x509_CRLReasonCodeExtension__
#define __sun_security_x509_CRLReasonCodeExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLReasonCodeExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.CRLReason.h"
#include "java.util.Enumeration.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class CRLReasonCodeExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
protected:
private:
	static std::shared_ptr<std::vector<java::security::cert::CRLReason>> values;
	int reasonCode;
	void virtual encodeThis();
public:
	static std::shared_ptr<java::lang::String> NAME;
	static std::shared_ptr<java::lang::String> REASON;
	static void static_cinit();
	CRLReasonCodeExtension(int reason);
	CRLReasonCodeExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value);
	CRLReasonCodeExtension(bool critical,int reason);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<java::io::OutputStream> out);
	std::shared_ptr<java::lang::Integer> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::security::cert::CRLReason> virtual getReasonCode();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::CRLReasonCodeExtension::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CRLReasonCodeExtension(){
	}

}; // class CRLReasonCodeExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_CRLReasonCodeExtension__

