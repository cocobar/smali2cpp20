#ifndef __sun_security_x509_CRLNumberExtension__
#define __sun_security_x509_CRLNumberExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLNumberExtension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.hh"

namespace sun::security::x509{
class CRLNumberExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	CRLNumberExtension();
	virtual ~CRLNumberExtension();

}; // class CRLNumberExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_CRLNumberExtension__

