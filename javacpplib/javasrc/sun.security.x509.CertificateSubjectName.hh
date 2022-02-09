#ifndef __sun_security_x509_CertificateSubjectName__
#define __sun_security_x509_CertificateSubjectName__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateSubjectName.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class CertificateSubjectName : public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	CertificateSubjectName();
	virtual ~CertificateSubjectName();

}; // class CertificateSubjectName
}; // namespace sun::security::x509

#endif //__sun_security_x509_CertificateSubjectName__

