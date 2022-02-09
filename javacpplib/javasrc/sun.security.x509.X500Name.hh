#ifndef __sun_security_x509_X500Name__
#define __sun_security_x509_X500Name__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X500Name.smali
#include "java2ctype.h"
#include "java.security.Principal.hh"
#include "sun.security.x509.GeneralNameInterface.hh"

namespace sun::security::x509{
class X500Name : public sun::security::x509::GeneralNameInterface, public java::security::Principal {
public:
	X500Name();
	virtual ~X500Name();

}; // class X500Name
}; // namespace sun::security::x509

#endif //__sun_security_x509_X500Name__

