#ifndef __sun_security_util_CertConstraintParameters__
#define __sun_security_util_CertConstraintParameters__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\CertConstraintParameters.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.cert.X509Certificate.h"

namespace sun::security::util{
class CertConstraintParameters : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	bool trustedMatch;
public:
	CertConstraintParameters(std::shared_ptr<java::security::cert::X509Certificate> c);
	CertConstraintParameters(std::shared_ptr<java::security::cert::X509Certificate> c,bool match);
	std::shared_ptr<java::security::cert::X509Certificate> virtual getCertificate();
	bool virtual isTrustedMatch();
public:
	virtual ~CertConstraintParameters(){
	}

}; // class CertConstraintParameters
}; // namespace sun::security::util

#endif //__sun_security_util_CertConstraintParameters__

