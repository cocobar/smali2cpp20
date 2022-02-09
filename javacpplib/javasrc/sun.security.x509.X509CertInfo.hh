#ifndef __sun_security_x509_X509CertInfo__
#define __sun_security_x509_X509CertInfo__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CertInfo.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"

namespace sun::security::x509{
class X509CertInfo : public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	X509CertInfo();
	virtual ~X509CertInfo();

}; // class X509CertInfo
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CertInfo__

