#ifndef __sun_security_x509_CertificateValidity__
#define __sun_security_x509_CertificateValidity__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateValidity.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateValidity : public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	CertificateValidity();
	virtual ~CertificateValidity();

}; // class CertificateValidity
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateValidity__

