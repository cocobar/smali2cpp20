#ifndef __sun_security_x509_CertificatePolicySet__
#define __sun_security_x509_CertificatePolicySet__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificatePolicySet.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Vector.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.x509.CertificatePolicyId.h"

namespace sun::security::x509{
class CertificatePolicySet : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Vector<sun::security::x509::CertificatePolicyId>> ids;
public:
	CertificatePolicySet(std::shared_ptr<java::util::Vector<sun::security::x509::CertificatePolicyId>> ids);
	CertificatePolicySet(std::shared_ptr<sun::security::util::DerInputStream> in);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	std::shared_ptr<java::util::List<sun::security::x509::CertificatePolicyId>> virtual getCertPolicyIds();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CertificatePolicySet(){
	}

}; // class CertificatePolicySet
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificatePolicySet__

