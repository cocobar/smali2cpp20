#ifndef __sun_security_x509_CertificateExtensions__
#define __sun_security_x509_CertificateExtensions__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateExtensions.smali
#include "java2ctype.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"

namespace sun::security::x509{
class CertificateExtensions : public sun::security::x509::CertAttrSet<sun::security::x509::Extension> {
public:
	CertificateExtensions();
	virtual ~CertificateExtensions();

}; // class CertificateExtensions
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateExtensions__

