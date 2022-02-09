#ifndef __sun_security_x509_CertificateSerialNumber__
#define __sun_security_x509_CertificateSerialNumber__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateSerialNumber.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateSerialNumber : public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	CertificateSerialNumber();
	virtual ~CertificateSerialNumber();

}; // class CertificateSerialNumber
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateSerialNumber__

