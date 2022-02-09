#ifndef __sun_security_x509_AuthorityKeyIdentifierExtension__
#define __sun_security_x509_AuthorityKeyIdentifierExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AuthorityKeyIdentifierExtension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.hh"

namespace sun::security::x509{
class AuthorityKeyIdentifierExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	AuthorityKeyIdentifierExtension();
	virtual ~AuthorityKeyIdentifierExtension();

}; // class AuthorityKeyIdentifierExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_AuthorityKeyIdentifierExtension__

