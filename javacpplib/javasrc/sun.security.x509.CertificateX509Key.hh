#ifndef __sun_security_x509_CertificateX509Key__
#define __sun_security_x509_CertificateX509Key__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateX509Key.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateX509Key : public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	CertificateX509Key();
	virtual ~CertificateX509Key();

}; // class CertificateX509Key
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateX509Key__

