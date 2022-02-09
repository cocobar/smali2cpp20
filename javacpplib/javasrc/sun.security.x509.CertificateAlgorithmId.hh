#ifndef __sun_security_x509_CertificateAlgorithmId__
#define __sun_security_x509_CertificateAlgorithmId__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateAlgorithmId.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateAlgorithmId : public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	CertificateAlgorithmId();
	virtual ~CertificateAlgorithmId();

}; // class CertificateAlgorithmId
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateAlgorithmId__

