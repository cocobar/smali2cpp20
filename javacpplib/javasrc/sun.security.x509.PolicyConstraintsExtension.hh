#ifndef __sun_security_x509_PolicyConstraintsExtension__
#define __sun_security_x509_PolicyConstraintsExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\PolicyConstraintsExtension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.hh"

namespace sun::security::x509{
class PolicyConstraintsExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	PolicyConstraintsExtension();
	virtual ~PolicyConstraintsExtension();

}; // class PolicyConstraintsExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_PolicyConstraintsExtension__

