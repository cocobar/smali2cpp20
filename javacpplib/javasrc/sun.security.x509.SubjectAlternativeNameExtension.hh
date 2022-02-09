#ifndef __sun_security_x509_SubjectAlternativeNameExtension__
#define __sun_security_x509_SubjectAlternativeNameExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\SubjectAlternativeNameExtension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.hh"

namespace sun::security::x509{
class SubjectAlternativeNameExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	SubjectAlternativeNameExtension();
	virtual ~SubjectAlternativeNameExtension();

}; // class SubjectAlternativeNameExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_SubjectAlternativeNameExtension__

