#ifndef __sun_security_x509_CertificateVersion__
#define __sun_security_x509_CertificateVersion__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateVersion.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateVersion : public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	CertificateVersion();
	virtual ~CertificateVersion();

}; // class CertificateVersion
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateVersion__

