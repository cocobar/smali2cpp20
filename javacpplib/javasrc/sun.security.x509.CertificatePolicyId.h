#ifndef __sun_security_x509_CertificatePolicyId__
#define __sun_security_x509_CertificatePolicyId__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificatePolicyId.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::x509{
class CertificatePolicyId : public java::lang::Object {
protected:
private:
	std::shared_ptr<sun::security::util::ObjectIdentifier> id;
public:
	CertificatePolicyId(std::shared_ptr<sun::security::util::DerValue> val);
	CertificatePolicyId(std::shared_ptr<sun::security::util::ObjectIdentifier> id);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getIdentifier();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificatePolicyId(){
	}

}; // class CertificatePolicyId
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificatePolicyId__

