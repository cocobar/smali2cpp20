#ifndef __sun_security_x509_NameConstraintsExtension__
#define __sun_security_x509_NameConstraintsExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\NameConstraintsExtension.smali
#include "java2ctype.h"
#include "java.lang.Cloneable.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.hh"

namespace sun::security::x509{
class NameConstraintsExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String>, public java::lang::Cloneable {
public:
	NameConstraintsExtension();
	virtual ~NameConstraintsExtension();

}; // class NameConstraintsExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_NameConstraintsExtension__
