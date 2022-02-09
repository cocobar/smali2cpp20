#ifndef __sun_security_x509_CertificateIssuerName__
#define __sun_security_x509_CertificateIssuerName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateIssuerName.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateIssuerName : public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	CertificateIssuerName();
	virtual ~CertificateIssuerName();

}; // class CertificateIssuerName
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateIssuerName__

